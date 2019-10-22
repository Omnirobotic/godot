#include "AosScene.h"
// GODOT classes
#include "RotativeJoint.h"
#include "PrismaticJoint.h"
#include "../../scene/3d/mesh_instance.h"
#include "../../scene/resources/mesh_data_tool.h"
#include "../../core/math/geometry.h"
// OMNI classes
#include "scene/rotative_joint.h"
#include "scene/prismatic_joint.h"
#include "scene/document_node.h"
#include "geometry/SimpleMesh.h"
#include "geometry/ply_serializer.h"
#include "geometry/stl_serializer.h"
#include "geometry/mesh_formats.h"
#include <igl/boundary_loop.h>
#include <igl/harmonic.h>
#include <igl/map_vertices_to_circle.h>
#include <igl/arap.h>
#include <igl/lscm.h>
#include <igl/remove_duplicates.h>
#include <igl/topological_hole_fill.h>
#include <igl/flipped_triangles.h>
#include <vector>
#include <fstream>
#include <chrono>


namespace aos
{
    using namespace std::literals::chrono_literals;


    static int clean_mesh(const std::string& in_path, const std::string& out_path, const std::string& script_path)
    {
        std::string command = "cmd /C \"\"C:/Program Files/VCG/MeshLab/meshlabserver.exe\" -i \""
            + in_path
            + "\" -o \""
            + out_path
            + "\" -s \""
            + script_path
            + "\"\"";
        std::cout << command << std::endl;
        return system(command.c_str());
    }

    static int to_ascii(const std::string& in_path, const std::string& out_path, const std::string& script_path)
    {
        std::string command = "cmd /C \"\"C:/Users/Olivier/Desktop/meshlab_branch/meshlab/src/distrib/meshlabserver.exe\" -i \""
            + in_path
            + "\" -o \""
            + out_path
            + "\""
            + " -m sa"
            + " -s \""
            + script_path
            + "\""
            + "\"";
        std::cout << command << std::endl;
        return system(command.c_str());
    }

    std::string to_std_string(String godot_string)
    {
        std::wstring ws = godot_string.c_str();
        std::string str( ws.begin(), ws.end() );
        return str;
    }

    Error AosScene::set_file(const String &p_path)
    {
        Error error_file;
        FileAccess *file = FileAccess::open(p_path, FileAccess::READ, &error_file);

        String buf = String("");
        while (!file->eof_reached())
        {
            buf += file->get_line();
        }
        auto str = to_std_string(buf);
        std::istringstream input_stream(str);

        // Read data
        typedef omni::serialization::serialization_manager manager;

        std::cout << "[DEBUG] Deserializing..." << std::endl;
        _aos_scene = manager::deserialize<omni::scene::spatial>(input_stream);
        std::cout << "[DEBUG] Done deserializing." << std::endl;

        file->close();
        return OK;
    }

    Transform to_godot_transform(CppMath::Vector7 transform)
    {
        float rot_mat[4][4];
        transform.ToMatrix4x4(rot_mat);

        // Omni matrix is :
        /// xx xy xz tx
        /// yx yy yz ty
        /// zx zy zz tz
        /// 0  0  0  1

        // But godot matrix is :
        /// xx yx zx 0
        /// xy yy zy 0
        /// xz yz zz 0
        /// tx ty tz 1

        // So in godot
        auto xx = rot_mat[0][0];
        auto xy = rot_mat[1][0];
        auto xz = rot_mat[2][0];

        auto yx = rot_mat[0][1];
        auto yy = rot_mat[1][1];
        auto yz = rot_mat[2][1];

        auto zx = rot_mat[0][2];
        auto zy = rot_mat[1][2];
        auto zz = rot_mat[2][2];

        return Transform(xx, xy, xz, yx, yy, yz, zx, zy, zz,
             transform.Pos.X, transform.Pos.Y, transform.Pos.Z);
    }

    RotativeJoint* to_godot_rotative_joint(omni::scene::node* node)
    {
        auto rot = reinterpret_cast<omni::scene::rotative_joint*>(node);
        auto rot_value = rot->get_joint_value();
        auto min_limit = rot->get_min_limit();
        auto max_limit = rot->get_max_limit();
        auto name = rot->get_name();
        auto godot_rot = new RotativeJoint();
        godot_rot->set_joint_value(rot_value);
        godot_rot->set_min_limit(min_limit);
        godot_rot->set_max_limit(max_limit);
        godot_rot->set_name(String(name.c_str()));
        auto transform = rot->get_transform();
        auto godot_transform = to_godot_transform(transform);
        godot_rot->set_transform(godot_transform);
        return godot_rot;
    }

    Spatial* to_godot_spatial(omni::scene::node* node)
    {
        auto spatial = reinterpret_cast<omni::scene::spatial*>(node);
        auto transform = spatial->get_transform();
        auto name = spatial->get_name();
        auto godot_spatial = new Spatial();
        
        auto godot_transform = to_godot_transform(transform);
        godot_spatial->set_transform(godot_transform);
        godot_spatial->set_name(String(name.c_str()));
        return godot_spatial;
    }

    PrismaticJoint* to_godot_prismatic_joint(omni::scene::node* node)
    {
        auto prism = reinterpret_cast<omni::scene::prismatic_joint*>(node);
        auto joint_value = prism->get_joint_value();
        auto min_limit = prism->get_min_limit();
        auto max_limit = prism->get_max_limit();
        auto name = prism->get_name();
        auto godot_prism = new PrismaticJoint();
        godot_prism->set_joint_value(joint_value);
        godot_prism->set_min_limit(min_limit);
        godot_prism->set_max_limit(max_limit);
        godot_prism->set_name(String(name.c_str()));
        auto transform = prism->get_transform();
        auto godot_transform = to_godot_transform(transform);
        godot_prism->set_transform(godot_transform);
        return godot_prism;
    }

    MeshInstance* to_godot_mesh(Omni::Geometry::Mesh::SimpleMesh* mesh, std::string node_name)
    {
        typedef omni::serialization::serialization_manager manager;

        std::filebuf fb_out;
        fb_out.open("C:/ProgramData/Omnirobotic/test.ply", std::ios::out);
        std::ostream os(&fb_out);

        //_aos_scene = manager::deserialize<omni::scene::spatial>(input_stream);
        manager::serialize(os, *mesh);
        fb_out.close();

        //clean_mesh("C:/ProgramData/Omnirobotic/test.ply", "C:/ProgramData/Omnirobotic/out.ply", "C:/ProgramData/Omnirobotic/cleaning_script.mlx");
        to_ascii("C:/ProgramData/Omnirobotic/test.ply", "C:/ProgramData/Omnirobotic/ascii.ply", "C:/ProgramData/Omnirobotic/cleaning_script.mlx");
        std::this_thread::sleep_for(1s);

        std::filebuf fb_in;
        fb_in.open("C:/ProgramData/Omnirobotic/ascii.ply", std::ios::in);
        std::istream is(&fb_in);
        std::cout << "[DEBUG] Deserializing..." << std::endl;
        *mesh = manager::deserialize<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>(is);
        std::cout << "[DEBUG] Done deserializing..." << std::endl;
        fb_in.close();
        std::cout << "[DEBUG] b4 "<< mesh->GetVertices().size() << std::endl;
        //new_mesh.clean_redudant_vertex();
        std::cout << "[DEBUG] after "<<   mesh->GetVertices().size()  << std::endl;
        
        /*
        for(auto face_index = 0; face_index < 26; face_index++)
        {
            std::cout << "[DEBUG]"<<  new_mesh.GetVertices()[face_index].X  << std::endl;
            std::cout << "[DEBUG]"<<  new_mesh.GetVertices()[face_index].Y  << std::endl;
            std::cout << "[DEBUG]"<<  new_mesh.GetVertices()[face_index].Z  << std::endl;

        }
        */


        std::cout << "[DEBUG] starting " << std::endl;

        auto godot_mesh_ptr = new ArrayMesh();
        auto mesh_data = Geometry::MeshData();

        auto godot_faces = Vector<Geometry::MeshData::Face>();
        auto face_indexes = mesh->GetFaceIndexes();
        auto nb_face = static_cast<int>(face_indexes.size() / 3);
        auto face_normals = mesh->GetFaceNormals();
        auto vertices = mesh->GetVertices();

        Eigen::MatrixXd V(vertices.size(),3);
        Eigen::MatrixXi F(nb_face,3);
        Eigen::MatrixXd NV;
        Eigen::MatrixXi NF;
        Eigen::VectorXi I;



        std::cout << "[DEBUG] Doing faces " << std::endl;


        for(auto face_index = 0; face_index < nb_face; face_index++)
        {
            auto godot_face = Geometry::MeshData::Face();

            //get the 3 face points;
			int index1 = face_indexes[3 * face_index + 0];
			int index2 = face_indexes[3 * face_index + 2];
			int index3 = face_indexes[3 * face_index + 1];
			
			F(face_index,0) = index1;
			F(face_index,1) = index2;
			F(face_index,2) = index3;
        }
        
        std::cout << "[DEBUG] vertices.size() : " << vertices.size() << std::endl;
        std::cout << "[DEBUG] Doing vertex " << std::endl;

        for(auto vertex_index = 0; vertex_index < vertices.size(); vertex_index++)
        {
            auto vertex = vertices[vertex_index];
			V(vertex_index,0) = vertex.X;
			V(vertex_index,1) = vertex.Y;
			V(vertex_index,2) = vertex.Z;
        }

        std::cout << "Assigning stuff" << std::endl;

        Eigen::MatrixXd bnd_uv, uv_init;
        Eigen::MatrixXd V_uv;
        Eigen::VectorXd M;

        try
        {
            igl::doublearea(V, F, M);
            std::vector<std::vector<int>> all_bnds;
            igl::boundary_loop(F, all_bnds);

            // Heuristic primary boundary choice: longest
            auto primary_bnd = std::max_element(all_bnds.begin(), all_bnds.end(), [](const std::vector<int> &a, const std::vector<int> &b) { return a.size()<b.size(); });

            Eigen::VectorXi bnd = Eigen::Map<Eigen::VectorXi>(primary_bnd->data(), primary_bnd->size());

            igl::map_vertices_to_circle(V, bnd, bnd_uv);
            bnd_uv *= sqrt(M.sum() / (2 * igl::PI));
            if (all_bnds.size() == 1)
            {
                if (bnd.rows() == V.rows()) // case: all vertex on boundary
                {
                uv_init.resize(V.rows(), 2);
                for (int i = 0; i < bnd.rows(); i++)
                    uv_init.row(bnd(i)) = bnd_uv.row(i);
                }
                else
                {
                igl::harmonic(V, F, bnd, bnd_uv, 1, uv_init);
                if (igl::flipped_triangles(uv_init, F).size() != 0)
                    igl::harmonic(F, bnd, bnd_uv, 1, uv_init); // fallback uniform laplacian
                }
            }
            else
            {
                // if there is a hole, fill it and erase additional vertices.
                all_bnds.erase(primary_bnd);
                Eigen::MatrixXi F_filled;
                igl::topological_hole_fill(F, bnd, all_bnds, F_filled);
                igl::harmonic(F_filled, bnd, bnd_uv ,1, uv_init);
                uv_init = uv_init.topRows(V.rows());
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        

        

        auto godot_vertices_map = Vector<int>();
        auto godot_vertices = Vector<Vector3>();
        int counter = 0;

        for(auto face_index = 0; face_index < F.rows(); face_index++)
        {
            auto godot_face = Geometry::MeshData::Face();

            //get the 3 face points;
			int index1 = F(face_index,0);
			int index2 = F(face_index,1);
			int index3 = F(face_index,2);

            if(counter < 1)
                std::cout << "[DEBUG] face_indexes : " << index1 << ", " << index2 << ", " << index3 << "." << std::endl;

            auto godot_v1 = Vector3(V(index1,0), V(index1,1), V(index1,2));
            auto godot_v2 = Vector3(V(index2,0), V(index2,1), V(index2,2));
            auto godot_v3 = Vector3(V(index3,0), V(index3,1), V(index3,2));
			
            godot_vertices.push_back(godot_v1);
            godot_vertices.push_back(godot_v2);
            godot_vertices.push_back(godot_v3);

            godot_vertices_map.push_back(index1);
            godot_vertices_map.push_back(index2);
            godot_vertices_map.push_back(index3);


            auto plane = Plane(godot_v1, godot_v2, godot_v3);
            auto indices = Vector<int>();
            indices.push_back(face_index*3);
            indices.push_back(face_index*3+1);
            indices.push_back(face_index*3+2);

            godot_face.plane = plane;
            godot_face.indices = indices;

            godot_faces.push_back(godot_face);
            counter++;
        }


        mesh_data.faces = godot_faces;
        //mesh_data.edges = godot_edges;
        mesh_data.vertices = godot_vertices;
        godot_mesh_ptr->add_surface_from_mesh_data(mesh_data);
        auto godot_mesh_ref = Ref<Mesh>(godot_mesh_ptr);

        // Solve arap using the harmonic map as initial guess
        V_uv = uv_init;

        //arap_solve(bc,arap_data,V_uv);

        MeshDataTool godot_data_tool;
        auto bug = godot_data_tool.create_from_surface(godot_mesh_ref, 0);

        // maybe change the output index
        std::cout << "[DEBUG] vertices uv : " <<std::endl;
        double max_u = -100.0;
        double min_u = 100.0;
        double max_v = -100.0;
        double min_v = 100.0;
        int c = 0;
        for(size_t i=0; i < V_uv.rows();++i)
        {   
            if (c%1000 == 0)
                std::cout << "v_uv_i : " << V_uv(i,0) << ", " << V_uv(i,1)  << "." << std::endl;
            c+=1;
            if (V_uv(i,0) < min_u)
                min_u = V_uv(i,0);
            if (V_uv(i,0) > max_u)
                max_u = V_uv(i,0);


            if (V_uv(i,1) < min_v)
                min_v = V_uv(i,1);
            if (V_uv(i,1) > max_v)
                max_v = V_uv(i,1);        
        }
        std::cout << "U:max, min: " << max_u << ", " << min_u  << "." << std::endl;
        std::cout << "V:max, min: " << max_v << ", " << min_v  << "." << std::endl;

        for(size_t i=0; i < godot_vertices_map.size();++i)
        {
            //std::cout<< i<<std::endl;
            //std::cout << "v_uv_i : " << (V_uv(i,0)-min)/(max-min) << ", " << (V_uv(i,1)-min)/(max-min)  << "." << std::endl;
            Vector2 uv1((V_uv(godot_vertices_map[i],0)-min_u)/(max_u-min_u),(V_uv(godot_vertices_map[i],1)-min_v)/(max_v-min_v));
            godot_data_tool.set_vertex_uv(i,uv1);
        }
        
        godot_mesh_ptr->surface_remove(0);
        godot_data_tool.commit_to_surface(godot_mesh_ref);
  
        auto godot_mesh_instance = new MeshInstance();
        godot_mesh_instance->set_mesh(godot_mesh_ref);
        godot_mesh_instance->set_name(String(node_name.c_str()));return godot_mesh_instance;
    }

    std::stringstream read_file(std::string store_key)
    {
        std::cout << store_key << std::endl;

        auto first_slash_pos = store_key.find("/");
        if(first_slash_pos == std::string::npos)
        {
            first_slash_pos = store_key.find("\\");
        }
        /*if(first_slash_pos == std::string::npos)
        {
            first_slash_pos = store_key.find("\");
        }*/


        auto db_prefix = store_key.substr(0, first_slash_pos);
        // Rest of path
        std::string file_path = store_key.substr(first_slash_pos);

        std::string database_root_path;
        if(db_prefix.compare("Config") == 0)
        {
            database_root_path = "C:\\Omnirobotic\\ConfigDbRoot";
        }        
        else if (db_prefix.compare("WO") == 0)
        {
            database_root_path = "C:\\Omnirobotic\\WorkOrders";
        }
        else if (db_prefix.compare("Part") == 0)
        {
            database_root_path = "C:\\Omnirobotic\\PartDbRoot";
        }
        else if (db_prefix.compare("WV") == 0)
        {
            database_root_path = "C:\\Omnirobotic\\WVDbRoot";
        }
        else if (db_prefix.compare("Omni") == 0)
        {
            database_root_path = "C:\\Omnirobotic\\OmniDbRoot";
        }
        

        // Get data from FileSystem and put it in stringstream
        auto full_file_path = database_root_path + file_path;
        std::ifstream file( full_file_path );

        std::stringstream buffer;
        if ( file )
        {
            buffer << file.rdbuf();

            file.close();

            // operations on the buffer...
        }
        else
        {
            std::cout << "Error reading the file. " << full_file_path << std::endl;
        }
        
        return buffer;
    }

    Omni::Geometry::Mesh::SimpleMesh* GodotResolvePly(std::string store_key)
    {
        auto data = read_file(store_key);

        Omni::Geometry::Mesh::SimpleMesh* object = new Omni::Geometry::Mesh::SimpleMesh;
        try 
        {
            *object = omni::serialization::serialization_manager::deserialize<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>(data);
        }
        catch (...)
        {
            std::cout << "Deserialization failed." << std::endl;
            delete object;
            return nullptr;
        }

        return object;
    }

    Omni::Geometry::Mesh::SimpleMesh* GodotResolveStl(std::string store_key)
    {
        auto data = read_file(store_key);

        Omni::Geometry::Mesh::SimpleMesh* object = new Omni::Geometry::Mesh::SimpleMesh;
        try 
        {
            *object = omni::serialization::serialization_manager::deserialize<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::stl>(data);
        }
        catch (...)
        {
            std::cout << "Deserialization failed." << std::endl;
            delete object;
            return nullptr;
        }

        return object;
    }

    MeshInstance* to_godot_mesh(std::string name, omni::document::document_info doc_info)
    {
        auto store_key = doc_info.store_key;
        auto type_name = doc_info.type_name;
        auto format_name = doc_info.format_name;
        Omni::Geometry::Mesh::SimpleMesh* mesh;
        if(format_name == "class Omni::Geometry::Mesh::ply_serializer")
        {
            omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>* doc;
            //doc = new omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>(store_key);
            try{
                mesh = GodotResolvePly(store_key);
                //mesh = doc->resolve_object().get();
            }
            catch(std::exception ex)
            {
                std::cout << "[ERROR] " << ex.what() << std::endl;
            }
        }
        else if(format_name == "class Omni::Geometry::Mesh::stl_serializer")
        {
            omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::stl>* doc;
            doc = new omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::stl>(store_key);
            try{
                mesh = GodotResolveStl(store_key);
                //mesh = doc->resolve_object().get();
            }
            catch(std::exception ex)
            {
                std::cout << "[ERROR] " << ex.what() << std::endl;
            }
        }
        else
        {
            std::cout << "[ERROR] " << "Format not supported : " << format_name << std::endl;
        }
        auto godot_mesh_instance = to_godot_mesh(mesh, name);
        return godot_mesh_instance;
    }

    MeshInstance* to_godot_mesh(omni::scene::node* node)
    {
        auto doc_node = reinterpret_cast<omni::scene::document_node*>(node);
        auto doc_info = doc_node->get_document_info();
        auto node_name = doc_node->get_name();
        auto godot_mesh_instance = to_godot_mesh(node_name, doc_info);
        return godot_mesh_instance;
    }

    Node* translate_to_godot_equivalent(omni::scene::node* node)
    {
        auto class_name = node->get_class();
        if(class_name == "rotative_joint")
        {
            return to_godot_rotative_joint(node);
        }
        else if(class_name == "spatial")
        {
            return to_godot_spatial(node);
        }
        else if(class_name == "prismatic_joint")
        {
            return to_godot_prismatic_joint(node);
        }
        else if (class_name == "document_node")
        {
            return to_godot_mesh(node);
        }
        else
        {
            std::cout << "[DEBUG] " << "Not a supported class :" << class_name << std::endl;
            auto spatial = new Spatial();
            spatial->set_name("object_of_unknown_type");
            return spatial;
        }
        
    }

    Node* translate_to_godot_equivalent_recursive(omni::scene::node* node, Spatial* root)
    {
        auto children_count = node->get_children_count();
        auto children = node->get_children();
        auto translated_children = std::vector<Node*>();

        // TODO create the right node
        auto godot_node_ptr = translate_to_godot_equivalent(node);
        for(auto i = 0; i < children_count; i++)
        {
            auto child = translate_to_godot_equivalent_recursive(children[i].get(), root);
            godot_node_ptr->add_child(child);
        }
        
        return godot_node_ptr;
    }

    void AosScene::convert_to_scene()
    {
        auto root  = to_godot_spatial(&_aos_scene);

        _godot_scene = translate_to_godot_equivalent_recursive(&_aos_scene, root);
    }

    Node* AosScene::get_base_scene()
    {
        convert_to_scene();
        return _godot_scene;
    }

    Node* AosScene::add_object(String object_name, Dictionary doc_info_dict)
    {
        auto doc_info = omni::document::document_info();
        doc_info.store_key = to_std_string(doc_info_dict["store_key"]);
        doc_info.format_name = to_std_string(doc_info_dict["format_name"]);
        doc_info.type_name = to_std_string(doc_info_dict["type_name"]);

        auto mesh = to_godot_mesh(to_std_string(object_name), doc_info);
        return mesh;
    }
}