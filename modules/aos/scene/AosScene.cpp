#include "AosScene.h"
// GODOT classes
#include "RotativeJoint.h"
#include "PrismaticJoint.h"
#include "../../scene/3d/mesh_instance.h"
#include "../../scene/resources/mesh_data_tool.h"
#include "../../core/math/geometry.h"
#include "../../core/io/config_file.h"
// OMNI classes
#include "scene/rotative_joint.h"
#include "scene/prismatic_joint.h"
#include "scene/document_node.h"
#include "geometry/SimpleMesh.h"
#include "geometry/ply_serializer.h"
#include "geometry/stl_serializer.h"
#include "geometry/mesh_formats.h"
#include "uv_mapping.h"
// EIGEN
#include <Eigen/Dense>

#include <vector>
#include <chrono>
#include <fstream>
#include <iostream>
#include <corecrt_math_defines.h>

namespace aos
{
    using namespace std::literals::chrono_literals;

    std::string to_std_string(String godot_string)
    {
        std::wstring ws = godot_string.c_str();
        std::string str( ws.begin(), ws.end() );
        return str;
    }

    static std::string load_meshlabserver_path()
    {
        auto config_file = new ConfigFile();
        auto err = config_file->load("user://settings.cfg");

        if (err)
        {
            throw std::exception("Unable to read user://settings.cfg. Make sure this file exists in your %APPDATA%/Roaming/Godot/app_userdata/Aos Simulation Environment/ folder.");
        }

        // Read path in section meshlabserver. If fails use default : C:/Users/Admin/Desktop/Godot/godot/modules/aos/meshlab_ascii/meshlabserver.exe
        auto meshlabserver_path = config_file->get_value("meshlabserver", "path", "C:/Users/Admin/Desktop/Godot/godot/modules/aos/meshlab_ascii/meshlabserver.exe");
        return to_std_string(meshlabserver_path);
    }

    static int to_ascii(const std::string& in_path, const std::string& out_path, const std::string& script_path)
    {
        // Load the path everytime so that we can change it at anytime.
        auto meshlabserver_path = load_meshlabserver_path();
        std::cout << "[DEBUG] Using meshlaberserver at path " << meshlabserver_path << std::endl;

        std::string command = "cmd /C \"\"" + meshlabserver_path + "\" -i \""
            + in_path
            + "\" -o \""
            + out_path
            + "\""
            + " -m sa"
            + " -s \""
            + script_path
            + "\""
            + "\"";
        return system(command.c_str());
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

        _aos_scene = manager::deserialize<omni::scene::spatial>(input_stream);

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

	//double squared_dist(CppMath::Vector3 v0, CppMath::Vector3 v1)
    //{
	//	auto diff = v1 - v0;
	//	auto sum = diff.X * diff.X + diff.Y * diff.Y + diff.Z * diff.Z;
	//	return sqrt(sum);
    //}
	//
	//int find_longest_edge(CppMath::Vector3 v0, CppMath::Vector3 v1, CppMath::Vector3 v2)
    //{
	//	int res = 0;
	//	double maxd01 = squared_dist(v0, v1);
	//	double maxd12 = squared_dist(v1, v2);
	//	double maxd20 = squared_dist(v2, v0);
	//	if (maxd01 > maxd12)
	//		if (maxd01 > maxd20)
	//			res = 0;
	//		else
	//			res = 2;
	//	else if (maxd12 > maxd20)
	//		res = 1;
	//	else
	//		res = 2;
	//	return res;
    //}

	// TODO - This is an attempt at translating the meshlab basic uv mapping.
	// We generated the dae with meshlab and used it in godot. The result of the painted mesh was okay, but we could see the borders of the uv triangles. With a seam fixer shader, we are confident the effect of this mapping would have been good.
	// This transaltion did not have the same result as the dae generated from meshlab, so there is still work to be done for the translation of the mapping algo.
	// For now, we will stop working on this
  //  Eigen::MatrixXd test_trivial_meshlab_mapping(Omni::Geometry::Mesh::SimpleMesh* mesh)
  //  {
		//int textDim = 1024;
  //      int pxBorder = 2;

  //      //Get total faces and total undeleted face
  //      //int faceNo = m.cm.face.size();
  //      auto face_indexes = mesh->GetFaceIndexes();
  //      auto nb_face = static_cast<int>(face_indexes.size() / 3);
		//auto vertices = mesh->GetVertices();

		//Eigen::MatrixXd uv(face_indexes.size(), 2);

  //      int faceNotD = nb_face;
  //      // Minimum side dimension to get correct halfsquared triangles
  //      int optimalDim = ceilf(sqrtf(faceNotD/2.));
  //      int dim = optimalDim;
  //      
  //      //Calculating border size in UV space
  //      float border = ((float)pxBorder) / textDim;
  //      float bordersq2 = border / M_SQRT2;
  //      float halfborder = border / 2;
  //      bool odd = true;

		//double botl_u, botl_v, topr_u, topr_v;
  //      int face=0;
		//botl_v = 1.;
		//for (int i = 0; i < dim && face < nb_face; ++i)
  //      {
		//	topr_v = botl_v;
		//	topr_u = 0.;
		//	botl_v = 1.0 - 1.0 / dim * (i + 1);
		//	for (int j = 0; j < 2 * dim && face < nb_face; ++face)
  //          {
  //              if (odd) {
		//			botl_u = topr_u;
		//			topr_u = 1.0 / dim * (j / 2 + 1);
		//			double bl_u = botl_u + halfborder;
		//			double bl_v = botl_v + halfborder + bordersq2;
		//			double tr_u = topr_u - (halfborder + bordersq2);
		//			double tr_v = topr_v - halfborder;

		//			auto face_vertices_start_index = 3 * face;
		//			auto v0_index = face_indexes[face_vertices_start_index];
		//			auto v0 = vertices[v0_index];
		//			auto v1_index = face_indexes[face_vertices_start_index+1];
		//			auto v1 = vertices[v1_index];
		//			auto v2_index = face_indexes[face_vertices_start_index + 2];
		//			auto v2 = vertices[v2_index];
		//			auto longest_edge_index = find_longest_edge(v0, v1, v2);

		//			// SET UV of V1 to bl
		//			auto vertex_index_in_face = face_vertices_start_index + longest_edge_index;
		//			uv(vertex_index_in_face, 0) = bl_u;
		//			uv(vertex_index_in_face, 1) = bl_v;
		//			// SET UV of V2 to tr
		//			vertex_index_in_face = face_vertices_start_index + ((longest_edge_index + 1) % 3);
		//			uv(vertex_index_in_face, 0) = tr_u;
		//			uv(vertex_index_in_face, 1) = tr_v;
		//			// SET UV of V3 to (bl_u, tr_v)
		//			vertex_index_in_face = face_vertices_start_index + ((longest_edge_index + 2) % 3);
		//			uv(vertex_index_in_face, 0) = bl_u;
		//			uv(vertex_index_in_face, 1) = tr_v;
  //              } else {
		//			double bl_u = botl_u + (halfborder + bordersq2);
		//			double bl_v = botl_v + halfborder;
		//			double tr_u = topr_u - halfborder;
		//			double tr_v = topr_v - (halfborder + bordersq2);

		//			auto face_vertices_start_index = 3 * face;
		//			auto v0_index = face_indexes[face_vertices_start_index];
		//			auto v0 = vertices[v0_index];
		//			auto v1_index = face_indexes[face_vertices_start_index + 1];
		//			auto v1 = vertices[v1_index];
		//			auto v2_index = face_indexes[face_vertices_start_index + 2];
		//			auto v2 = vertices[v2_index];
		//			auto longest_edge_index = find_longest_edge(v0, v1, v2);

		//			// SET UV of V1 to bl
		//			auto vertex_index_in_face = face_vertices_start_index + longest_edge_index;
		//			uv(vertex_index_in_face, 0) = bl_u;
		//			uv(vertex_index_in_face, 1) = bl_v;
		//			// SET UV of V2 to tr
		//			vertex_index_in_face = face_vertices_start_index + ((longest_edge_index + 1) % 3);
		//			uv(vertex_index_in_face, 0) = tr_u;
		//			uv(vertex_index_in_face, 1) = tr_v;
		//			// SET UV of V3 to (bl_u, tr_v)
		//			vertex_index_in_face = face_vertices_start_index + ((longest_edge_index + 2) % 3);
		//			uv(vertex_index_in_face, 0) = bl_u;
		//			uv(vertex_index_in_face, 1) = tr_v;
  //              }
  //              odd=!odd; 
		//		++j;
  //          }
  //      }
  //      std::cout << "Triangles' catheti are %.2f px long, " << (1.0/dim-border-bordersq2)*textDim << std::endl;

		//return uv;
  //  }

    MeshInstance* to_godot_mesh(Omni::Geometry::Mesh::SimpleMesh* mesh, std::string node_name, bool want_to_compute_uv_mapping)
    {
        if (want_to_compute_uv_mapping)
        {
            typedef omni::serialization::serialization_manager manager;

            std::filebuf fb_out;
            fb_out.open("C:/ProgramData/Omnirobotic/test.ply", std::ios::out);
            std::ostream os(&fb_out);

            manager::serialize(os, *mesh);
            fb_out.close();

            to_ascii("C:/ProgramData/Omnirobotic/test.ply", "C:/ProgramData/Omnirobotic/ascii.ply", "C:/ProgramData/Omnirobotic/cleaning_script.mlx");

            std::filebuf fb_in;
            fb_in.open("C:/ProgramData/Omnirobotic/ascii.ply", std::ios::in);
            std::istream is(&fb_in);
            *mesh = manager::deserialize<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>(is);
            fb_in.close();            
        }

        auto godot_mesh_ptr = new ArrayMesh();
        auto mesh_data = Geometry::MeshData();

        auto godot_faces = Vector<Geometry::MeshData::Face>();
        auto face_indexes = mesh->GetFaceIndexes();
        auto nb_face = static_cast<int>(face_indexes.size() / 3);
        auto vertices = mesh->GetVertices();

        Eigen::MatrixXd V(vertices.size(),3);
        Eigen::MatrixXi F(nb_face,3);

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

        for(auto vertex_index = 0; vertex_index < vertices.size(); vertex_index++)
        {
            auto vertex = vertices[vertex_index];
			V(vertex_index,0) = vertex.X;
			V(vertex_index,1) = vertex.Y;
			V(vertex_index,2) = vertex.Z;
        }

        auto godot_vertices_map = Vector<int>();
        auto godot_vertices = Vector<Vector3>();

        for(auto face_index = 0; face_index < F.rows(); face_index++)
        {
            auto godot_face = Geometry::MeshData::Face();

            //get the 3 face points;
			int index1 = F(face_index,0);
			int index2 = F(face_index,1);
			int index3 = F(face_index,2);

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
        }


        mesh_data.faces = godot_faces;
        mesh_data.vertices = godot_vertices;
        godot_mesh_ptr->add_surface_from_mesh_data(mesh_data);
        auto godot_mesh_ref = Ref<Mesh>(godot_mesh_ptr);

        if (want_to_compute_uv_mapping)
        {
            Eigen::MatrixXd uv_init, V_uv;
			auto success = compute_uv_mapping(V, F, uv_init);

            V_uv = uv_init;


            MeshDataTool godot_data_tool;
            auto bug = godot_data_tool.create_from_surface(godot_mesh_ref, 0);

            // If mapping failed, use XZ plane projection mapping
            if (!success)
            {
                Eigen::MatrixXd temp_uv(V.rows(),2);

                for (size_t i=0; i < godot_vertices_map.size(); ++i)
                {
                    temp_uv(godot_vertices_map[i],0) = V(godot_vertices_map[i], 0);// + V(i, 1))/2;
                    temp_uv(godot_vertices_map[i],1) = V(godot_vertices_map[i], 2);
                }

                V_uv = temp_uv;
            }

            double max_u = -100.0;
            double min_u = 100.0;
            double max_v = -100.0;
            double min_v = 100.0;
            for(size_t i=0; i < V_uv.rows();++i)
            {   
                if (V_uv(i,0) < min_u)
                    min_u = V_uv(i,0);
                if (V_uv(i,0) > max_u)
                    max_u = V_uv(i,0);


                if (V_uv(i,1) < min_v)
                    min_v = V_uv(i,1);
                if (V_uv(i,1) > max_v)
                    max_v = V_uv(i,1);        
            }

            for(size_t i=0; i < godot_vertices_map.size();++i)
            {
                Vector2 uv1((V_uv(godot_vertices_map[i],0)-min_u)/(max_u-min_u),(V_uv(godot_vertices_map[i],1)-min_v)/(max_v-min_v));
                godot_data_tool.set_vertex_uv(i,uv1);
            }            
        
            godot_mesh_ptr->surface_remove(0);
            godot_data_tool.commit_to_surface(godot_mesh_ref);
        }
  
        auto godot_mesh_instance = new MeshInstance();
        godot_mesh_instance->set_mesh(godot_mesh_ref);
        godot_mesh_instance->set_name(String(node_name.c_str()));
        return godot_mesh_instance;
    }

    Dictionary load_database_roots()
    {
        auto config_file = new ConfigFile();
        auto err = config_file->load("user://settings.cfg");

        if (err)
        {
            throw std::exception("Unable to read user://settings.cfg. Make sure this file exists in your %APPDATA%/Roaming/Godot/app_userdata/Aos Simulation Environment/ folder.");
        }

        // Read database roots
        auto config_db_root = config_file->get_value("database", "config_db_root");
        auto wo_db_root = config_file->get_value("database", "wo_db_root");
        auto part_db_root = config_file->get_value("database", "part_db_root");
        auto wv_db_root = config_file->get_value("database", "wv_db_root");
        auto omni_db_root = config_file->get_value("database", "omni_db_root");

        Dictionary database_roots;
        database_roots["Config"] = config_db_root;
        database_roots["WO"] = wo_db_root;
        database_roots["Part"] = part_db_root;
        database_roots["WV"] = wv_db_root;
        database_roots["Omni"] = omni_db_root;

        return database_roots;
    }

    std::stringstream read_file(std::string store_key)
    {
        // Load everytime so that we can change it at anytime.
        auto database_roots = load_database_roots();

        auto first_slash_pos = store_key.find("/");
        if(first_slash_pos == std::string::npos)
        {
            first_slash_pos = store_key.find("\\");
        }

        auto db_prefix = store_key.substr(0, first_slash_pos);
        // Rest of path
        std::string file_path = store_key.substr(first_slash_pos);

        auto database_root_path = to_std_string(database_roots[db_prefix.c_str()]);

        // Get data from FileSystem and put it in stringstream
        auto full_file_path = database_root_path + file_path;
        std::ifstream file( full_file_path );

        std::stringstream buffer;
        if ( file )
        {
            buffer << file.rdbuf();

            file.close();
        }
        else
        {
            std::cout << "[ERROR] Error reading the file. " << full_file_path << std::endl;
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
            std::cout << "[ERROR] Deserialization failed." << std::endl;
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
            std::cout << "[ERROR] Deserialization failed." << std::endl;
            delete object;
            return nullptr;
        }

        return object;
    }

    MeshInstance* to_godot_mesh(std::string name, omni::document::document_info doc_info, bool want_to_compute_uv_mapping)
    {
        std::ofstream outdata;
        outdata.open("C:/ProgramData/Omnirobotic/aoscene.log", std::ofstream::out | std::ofstream::app);

        auto store_key = doc_info.store_key;
        auto type_name = doc_info.type_name;
        auto format_name = doc_info.format_name;
        outdata << "format_name : " << format_name << std::endl;
        outdata.flush();
        outdata.close();
        Omni::Geometry::Mesh::SimpleMesh* mesh;
        if(format_name == "class Omni::Geometry::Mesh::ply_serializer")
        {
            //omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>* doc;
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
            //omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::stl>* doc;
            //doc = new omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::stl>(store_key);
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
        auto godot_mesh_instance = to_godot_mesh(mesh, name, want_to_compute_uv_mapping);
        return godot_mesh_instance;
    }

    MeshInstance* to_godot_mesh(omni::scene::node* node, bool want_to_compute_uv_mapping)
    {
        auto doc_node = reinterpret_cast<omni::scene::document_node*>(node);
        auto doc_info = doc_node->get_document_info();
        auto node_name = doc_node->get_name();
        auto godot_mesh_instance = to_godot_mesh(node_name, doc_info, want_to_compute_uv_mapping);
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
            return to_godot_mesh(node, false); // False for Dont compute uv_mapping
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

        auto mesh = to_godot_mesh(to_std_string(object_name), doc_info, true); // True to compute uv mapping
        
        return mesh;
    }
}
