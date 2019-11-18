#ifndef _SERIALIZER_HELPER_H
#define _SERIALIZER_HELPER_H

#include <string>
#include "stream_parser.h"

namespace omni
{
    namespace scene 
    {
        class node;
        class document_node;
        class spatial;
        class prismatic_joint;
        class rotative_joint;
        class cuboid;
        class plane;
        class cylinder;

        class serializer_helper
        {
        public:
            inline const static float epsilon = 1e-15;

            template<typename T>
            static std::string get_stream_content(const T& instance)
            {
                static_assert(false, "Invalid type.");
            }

            static std::string get_stream_content(const node& instance);
            static std::string get_stream_content(const document_node& instance);
            static std::string get_stream_content(const spatial& instance);
            static std::string get_stream_content(const prismatic_joint& instance);
            static std::string get_stream_content(const rotative_joint& instance);
            static std::string get_stream_content(const cuboid& instance);
            static std::string get_stream_content(const plane& instance);
            static std::string get_stream_content(const cylinder& instance);

            static void fill_node_info(tag& node_tag, std::shared_ptr<node> node);
            static void fill_document_node_info(tag& node_tag, std::shared_ptr<document_node> node);
            static void fill_spatial_info(tag& node_tag, std::shared_ptr<spatial> node);
            static std::shared_ptr<prismatic_joint> create_prismatic_joint_with_info(tag& node_tag);
            static std::shared_ptr<rotative_joint> create_rotative_joint_with_info(tag& node_tag);
            static void fill_cuboid_info(tag& node_tag, std::shared_ptr<cuboid> node);
            static void fill_plane_info(tag& node_tag, std::shared_ptr<plane> node);
            static void fill_cylinder_info(tag& node_tag, std::shared_ptr<cylinder> node);

            static void serialize_child(std::ostream& stream, std::shared_ptr<node> instance);

            static std::shared_ptr<node> deserialize_implementation(tag& node_tag);

            static std::string get_last_tag(const std::string& node_path);
        };
    }
}
#endif
