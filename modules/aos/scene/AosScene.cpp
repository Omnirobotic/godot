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
#include "geometry/ply_serializer.h"
#include "geometry/stl_serializer.h"
#include "geometry/mesh_formats.h"

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
            // Iverse Y and Z, because the normals are reversed.
            int index2 = face_indexes[3 * face_index + 2];
            int index3 = face_indexes[3 * face_index + 1];

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