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


namespace aos
{
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
        return Transform(rot_mat[0][0], rot_mat[0][1], rot_mat[0][2], rot_mat[1][0], rot_mat[1][1], rot_mat[1][2], rot_mat[2][0], rot_mat[2][1], rot_mat[2][2],
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
        auto godot_mesh_ptr = new ArrayMesh();
        auto mesh_data = Geometry::MeshData();

        auto godot_faces = Vector<Geometry::MeshData::Face>();
        auto face_indexes = mesh->GetFaceIndexes();
        auto nb_face = static_cast<int>(face_indexes.size() / 3);
        auto face_normals = mesh->GetFaceNormals();
        auto vertices = mesh->GetVertices();
        int counter = 0;
		
        Eigen::MatrixXd V(vertices.size(),3);
        Eigen::MatrixXi F(nb_face,3);
        
        std::cout << "[DEBUG] nb_face : " << nb_face << std::endl;

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

        for(auto vertex_index = 0; vertex_index < vertices.size(); vertex_index++)
        {
            auto vertex = vertices[vertex_index];
			V(vertex_index,0) = vertex.X;
			V(vertex_index,1) = vertex.Y;
			V(vertex_index,2) = vertex.Z;
        }

        std::cout << "Assigning stuff" << std::endl;


        Eigen::MatrixXd NV;
        Eigen::MatrixXi NF;
        Eigen::MatrixXd temp_V;
        Eigen::MatrixXi temp_F;
        Eigen::VectorXi I; 
        
        //Eigen::VectorXi biggest_loop;

        std::vector<std::vector<int>> list_of_loops;
        std::cout << "remove_duplicates" << std::endl;


        igl::remove_duplicates(V,F,temp_V,temp_F,I,1.0e-4);
        std::cout << "boundary_loop" << std::endl;

        for (int i = 0; i<list_of_loops.size();i++)
        {
            std::cout << "size:" << list_of_loops[i].size() << std::endl;
        }

        igl::boundary_loop(temp_F, list_of_loops);

        for (int i = 0; i<list_of_loops.size();i++)
        {
            std::cout << "size:" << list_of_loops[i].size() << std::endl;
        }

        //for (int i = 0; i<list_of_loops.size();i++)
        //{
        //    std::cout << "size:" << list_of_loops.size() << std::endl;
        //}

        std::cout << "after loop" << std::endl;


        int biggest_loop_size = list_of_loops.size();
        int biggest_loop_index = 0;
        int i_list_size;
        for (int i = 0; i<list_of_loops.size();i++)
        {

            i_list_size = list_of_loops[i].size();
            
            std::cout << "size:" << i_list_size << std::endl;


            if (biggest_loop_size<i_list_size)
            {
                biggest_loop_size = i_list_size;
                biggest_loop_index = i;
            }
        }
        //Eigen::VectorXi biggest_loop = Eigen::Map<Eigen::VectorXi, Eigen::Unaligned>(list_of_loops[0].data(),list_of_loops[0].size());
        
        std::cout << "biggest size:" << biggest_loop_size << std::endl;
        std::cout << "biggest index:" << biggest_loop_index << std::endl;

        list_of_loops.erase(list_of_loops.begin()+biggest_loop_index, list_of_loops.begin()+biggest_loop_index+1);
        

        int list_of_loops_to_fill_size = list_of_loops.size();
        std::cout << "list_of_loops to fill size" << list_of_loops_to_fill_size <<std::endl;

        Eigen::VectorXi biggest_loop = Eigen::Map<Eigen::VectorXi, Eigen::Unaligned>(list_of_loops[biggest_loop_index].data(), list_of_loops[biggest_loop_index].size());

        Eigen::MatrixXi filled_F;
        std::cout << "topological_hole_fill" << std::endl;

        igl::topological_hole_fill(temp_F, biggest_loop, list_of_loops, filled_F);

        std::cout << "topological_hole_fill done" << std::endl;

        int reduced_number_of_vertex = temp_V.rows();
        Eigen::MatrixXd V_with_vertex_added_for_hole_filling(reduced_number_of_vertex+list_of_loops_to_fill_size, temp_V.cols());
        V_with_vertex_added_for_hole_filling.block(0,0,reduced_number_of_vertex,temp_V.cols()) = temp_V;

        for (int i = 0; i<V_with_vertex_added_for_hole_filling.rows();i++)
        {
            std::cout << "[DEBUG] Vertex : " << V_with_vertex_added_for_hole_filling(i,0) << ", " << V_with_vertex_added_for_hole_filling(i,1) << ", " << V_with_vertex_added_for_hole_filling(i,2) << "." << std::endl;
        }    

        for (int i = 0; i<list_of_loops_to_fill_size; i++)
        {
            std::cout << "new vertex" << std::endl;

            Eigen::MatrixXd added_vertex_to_fill_hole_i(1,3);
            std::vector<int> i_loop = list_of_loops[i];
            int i_loop_size = i_loop.size();
            std::cout << "2nd loop : "<<i_loop_size << std::endl;

            for (int j = 0; j<i_loop_size; j++)
            {
                int index = i_loop[j];

                std::cout << "Vertex added : "<< temp_V(index, 0)<< temp_V(index, 1)<< temp_V(index, 2) << std::endl;

                added_vertex_to_fill_hole_i(0, 0) += temp_V(index, 0);
                added_vertex_to_fill_hole_i(0, 1) += temp_V(index, 1);
                added_vertex_to_fill_hole_i(0, 2) += temp_V(index, 2);

            }
            
            added_vertex_to_fill_hole_i /= i_loop_size;
            std::cout << "adding row" << std::endl;

            V_with_vertex_added_for_hole_filling.block(reduced_number_of_vertex+i,0,1,3) = added_vertex_to_fill_hole_i;
        }



        for (int i = 0; i<V_with_vertex_added_for_hole_filling.rows();i++)
        {
            std::cout << "[DEBUG] Vertex : " << V_with_vertex_added_for_hole_filling(i,0) << ", " << V_with_vertex_added_for_hole_filling(i,1) << ", " << V_with_vertex_added_for_hole_filling(i,2) << "." << std::endl;
        }       

        for (int i = 0; i<filled_F.rows();i++)
        {
            std::cout << "[DEBUG] face_indexes : " << filled_F(i,0) << ", " << filled_F(i,1) << ", " << filled_F(i,2) << "." << std::endl;
        }

        auto godot_vertices_map = Vector<int>();
        auto godot_vertices = Vector<Vector3>();

        for(auto face_index = 0; face_index < filled_F.rows(); face_index++)
        {
            auto godot_face = Geometry::MeshData::Face();

            //get the 3 face points;
			int index1 = filled_F(face_index,0);
			int index2 = filled_F(face_index,1);
			int index3 = filled_F(face_index,2);

            if(counter < 1)
                std::cout << "[DEBUG] face_indexes : " << index1 << ", " << index2 << ", " << index3 << "." << std::endl;

            auto godot_v1 = Vector3(V_with_vertex_added_for_hole_filling(index1,0), V_with_vertex_added_for_hole_filling(index1,1), V_with_vertex_added_for_hole_filling(index1,2));
            auto godot_v2 = Vector3(V_with_vertex_added_for_hole_filling(index2,0), V_with_vertex_added_for_hole_filling(index2,1), V_with_vertex_added_for_hole_filling(index2,2));
            auto godot_v3 = Vector3(V_with_vertex_added_for_hole_filling(index3,0), V_with_vertex_added_for_hole_filling(index3,1), V_with_vertex_added_for_hole_filling(index3,2));
			
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


        //auto godot_vertices = Vector<Vector3>();
        //for(auto vertex_index = 0; vertex_index < NV.size(); vertex_index++)
        //{
        //    auto godot_vertex = Vector3(NV(vertex_index,0), NV(vertex_index,1), NV(vertex_index,2));
        //    godot_vertices.push_back(godot_vertex);
        //}

        std::cout << "[DEBUG] V matrix : " << godot_faces.size() << std::endl;
        std::cout << "[DEBUG] V matrix : " << godot_vertices.size() << std::endl;

        mesh_data.faces = godot_faces;
        //mesh_data.edges = godot_edges;
        mesh_data.vertices = godot_vertices;
        godot_mesh_ptr->add_surface_from_mesh_data(mesh_data);
        auto godot_mesh_ref = Ref<Mesh>(godot_mesh_ptr);

        //std::cout << "[DEBUG] V matrix : " << std::endl;
        //for(auto vertex_index = 0; vertex_index < V_with_vertex_added_for_hole_filling.rows(); vertex_index++)
        //{
        //    std::cout << "v1 : " << NV(vertex_index,0) << ", " << NV(vertex_index,1) << ", " << NV(vertex_index,2) << "." << std::endl;
        //}

        //std::cout << "[DEBUG] F matrix : " << std::endl;
        //for(auto face_index = 0; face_index < NF.rows() ; face_index++)
        //{
        //    std::cout << "F1 : " << NF(face_index,0) << ", " << NF(face_index,1) << ", " << NF(face_index,2) << "." << std::endl;
        //}


        Eigen::MatrixXd V_uv;

        Eigen::MatrixXd init_V_uv;

        Eigen::VectorXi bnd1,b1(2,1);
        igl::boundary_loop(filled_F,bnd1);
        


        std::cout << "[DEBUG] bnd uv : " <<std::endl;
        for(size_t i=0; i < bnd1.size();++i)
        {
            std::cout << "bnd : " << bnd1(i)  << "." << std::endl;
        }


        b1(0) = bnd1(0);
        int test_index = round(bnd1.size()/2);
        b1(1) = bnd1(test_index);
        Eigen::MatrixXd bc1(2,2);
        bc1<<0,0,1,0;

        // LSCM parametrization
        igl::lscm(V_with_vertex_added_for_hole_filling,filled_F,b1,bc1,init_V_uv);


        /*/

        // Find the open boundary
        Eigen::VectorXi bnd;
        igl::boundary_loop(F,bnd);

        // Map the boundary to a circle, preserving edge proportions
        Eigen::MatrixXd bnd_uv;
        igl::map_vertices_to_circle(V,bnd,bnd_uv);

        // Harmonic parametrization for the internal vertices
        igl::harmonic(V,F,bnd,bnd_uv,1,init_V_uv);

        /*/

        //igl::ARAPData arap_data;
        //arap_data.with_dynamics = true;
        //Eigen::VectorXi b  = Eigen::VectorXi::Zero(0);
        //Eigen::MatrixXd bc = Eigen::MatrixXd::Zero(0,0);



        // Initialize ARAP
        //arap_data.max_iter = 100;
        // 2 means that we're going to *solve* in 2d
        //arap_precomputation(NV,NF,2,b,arap_data);

        // Solve arap using the harmonic map as initial guess
        V_uv = init_V_uv;

        //arap_solve(bc,arap_data,V_uv);

        MeshDataTool godot_data_tool;
        auto bug = godot_data_tool.create_from_surface(godot_mesh_ref, 0);

        // maybe change the output index
        std::cout << "[DEBUG] vertices uv : " <<std::endl;
        double max_u = -100.0;
        double min_u = 100.0;
        double max_v = -100.0;
        double min_v = 100.0;
        for(size_t i=0; i < V_uv.rows();++i)
        {
            std::cout << "v_uv_i : " << V_uv(i,0) << ", " << V_uv(i,1)  << "." << std::endl;
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
            //std::cout << "v_uv_i : " << (V_uv(i,0)-min)/(max-min) << ", " << (V_uv(i,1)-min)/(max-min)  << "." << std::endl;
            Vector2 uv1((V_uv(godot_vertices_map[i],0)-min_u)/(max_u-min_u),(V_uv(godot_vertices_map[i],1)-min_v)/(max_v-min_v));
            godot_data_tool.set_vertex_uv(i,uv1);
        }
        
        godot_mesh_ptr->surface_remove(0);
        godot_data_tool.commit_to_surface(godot_mesh_ref);
  
        auto godot_mesh_instance = new MeshInstance();
        godot_mesh_instance->set_mesh(godot_mesh_ref);
        godot_mesh_instance->set_name(String(node_name.c_str()));

        return godot_mesh_instance;
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
            doc = new omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>(store_key);
            try{
                mesh = doc->resolve_object().get();
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
                mesh = doc->resolve_object().get();
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
            //child->set_owner(root);
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