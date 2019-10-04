#include "AosScene.h"
// GODOT classes
#include "RotativeJoint.h"
#include "PrismaticJoint.h"
#include "../../scene/3d/mesh_instance.h"
#include "../../core/math/geometry.h"
// OMNI classes
#include "scene/rotative_joint.h"
#include "scene/prismatic_joint.h"
#include "scene/document_node.h"
#include "geometry/SimpleMesh.h"
#include "document/document.h"
#include "geometry/ply_serializer.h"
#include "geometry/stl_serializer.h"
#include "geometry/mesh_formats.h"
#include "database_manager/ros_database_adapter.h"
#include "database_manager/database_manager.h"

namespace aos
{
    Error AosScene::set_file(const String &p_path)
    {
        Error error_file;
        FileAccess *file = FileAccess::open(p_path, FileAccess::READ, &error_file);

        String buf = String("");
        while (!file->eof_reached())
        {
            buf += file->get_line();
        }
        
        std::wstring ws = buf.c_str();
        std::string str( ws.begin(), ws.end() );

        std::istringstream input_stream(str);

        String err_string;
        int err_line;

        // Read data
        typedef omni::serialization::serialization_manager manager;

        std::cout << "[DEBUG] Scene : " << str << std::endl;

        _aos_scene = manager::deserialize<omni::scene::spatial>(input_stream);

        std::cout << "Done deserializing." << std::endl;

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
        for(auto face_index = 0; face_index < nb_face; face_index++)
        {
            auto godot_face = Geometry::MeshData::Face();

            //get the 3 face points;
			int index1 = face_indexes[3 * face_index + 0];
			int index2 = face_indexes[3 * face_index + 1];
			int index3 = face_indexes[3 * face_index + 2];

            auto v1 = vertices[index1];
            auto v2 = vertices[index2];
            auto v3 = vertices[index3];
            auto godot_v1 = Vector3(v1.X, v1.Y, v1.Z);
            auto godot_v2 = Vector3(v2.X, v2.Y, v2.Z);
            auto godot_v3 = Vector3(v3.X, v3.Y, v3.Z);

            auto plane = Plane(godot_v1, godot_v2, godot_v3);
            auto indices = Vector<int>();
            indices.push_back(index1);
            indices.push_back(index2);
            indices.push_back(index3);

            godot_face.plane = plane;
            godot_face.indices = indices;

            godot_faces.push_back(godot_face);
        }

        auto godot_vertices = Vector<Vector3>();
        for(auto vertex_index = 0; vertex_index < vertices.size(); vertex_index++)
        {
            auto vertex = vertices[vertex_index];
            auto godot_vertex = Vector3(vertex.X, vertex.Y, vertex.Z);
            godot_vertices.push_back(godot_vertex);
        }

        mesh_data.faces = godot_faces;
        //mesh_data.edges = godot_edges;
        mesh_data.vertices = godot_vertices;
        godot_mesh_ptr->add_surface_from_mesh_data(mesh_data);
        auto godot_mesh_ref = Ref<Mesh>(godot_mesh_ptr);
        auto godot_mesh_instance = new MeshInstance();
        godot_mesh_instance->set_mesh(godot_mesh_ref);
        godot_mesh_instance->set_name(String(node_name.c_str()));
        return godot_mesh_instance;
    }

    MeshInstance* to_godot_mesh(omni::scene::node* node)
    {
        auto doc_node = reinterpret_cast<omni::scene::document_node*>(node);
        auto doc_info = doc_node->get_document_info();
        auto store_key = doc_info.store_key;
        auto type_name = doc_info.type_name;
        auto format_name = doc_info.format_name;
        Omni::Geometry::Mesh::SimpleMesh* mesh;
        if(format_name == "ply")
        {
            omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>* doc;
            doc = new omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::ply>(store_key);
            try{
                mesh = doc->resolve_object().get();
            }
            catch(std::exception ex)
            {
                std::cout << ex.what() << std::endl;
            }
        }
        else if(format_name == "stl")
        {
            omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::stl>* doc;
            doc = new omni::document::document<Omni::Geometry::Mesh::SimpleMesh, Omni::Geometry::Mesh::stl>(store_key);
            try{
                mesh = doc->resolve_object().get();
            }
            catch(std::exception ex)
            {
                std::cout << ex.what() << std::endl;
            }
        }
        else
        {
            std::cout << "Format not supported : " << format_name << std::endl;
        }
        
        auto node_name = doc_node->get_name();
        auto godot_mesh_instance = to_godot_mesh(mesh, node_name);
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
            std::cout << "Not a supported class :" << class_name << std::endl;
            return nullptr;
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
            child->set_owner(root);
        }
        
        return godot_node_ptr;
    }

    void AosScene::convert_to_scene()
    {
        auto& instance = omni::database::ros_database_adapter::get_instance();
        instance.register_database("Config", "ConfigDatabase");
        omni::document::document_base::set_database_manager(&instance);
        
        auto root  = to_godot_spatial(&_aos_scene);

        _godot_scene = translate_to_godot_equivalent_recursive(&_aos_scene, root);
    }

    void initial_update()
    {
        /*auto instance = scene_manager::get_instance();
        auto dict = instance.get_initial_state();*/
        // UPDATE JOINTS AND ADD OBJECTS
    }

    Node* AosScene::get_scene()
    {
        convert_to_scene();
        return _godot_scene;
    }

    void AosScene::connect_to_scene_manager()
    {
        std::cout << "Connected." << std::endl;
        
        auto count_before = _godot_scene->get_child(0)->get_child_count();
        auto node = _godot_scene->get_child(0)->get_child(0);
        //_godot_scene->get_child(0)->remove_child(node);
        auto joint = reinterpret_cast<RotativeJoint*>(node);
        joint->set_joint_value(3.0);
        auto count_after = _godot_scene->get_child(0)->get_child_count();

        std::cout << "Before : " << count_before << std::endl;
        std::cout << "Before : " << count_after << std::endl;
        std::wstring ws = String(node->get_name()).c_str();
        std::string str( ws.begin(), ws.end() );
        std::cout << "Removed : " << str << std::endl;
    }
}