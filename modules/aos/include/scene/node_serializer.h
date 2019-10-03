#ifndef _NODE_SERIALIZER_H
#define _NODE_SERIALIZER_H

#include "serialization/i_serializer.h"
#include "serialization/serialization_manager.h"
#include "serializer_helper.h"
#include "stream_parser.h"
#include "node.h"
#include <unordered_map>

namespace omni
{
    namespace scene
    {
        typedef omni::serialization::serialization_manager manager;


        template <typename type>
        class node_serializer : public omni::serialization::i_serializer<type>
        {
        public:
            void serialize(std::ostream& stream, const type& instance) override
            {
                stream << serializer_helper::get_stream_content(instance);
                stream << "\n";
                int number_of_children = instance.get_children_count();
                if (number_of_children > 0)
                {
                    std::vector<std::shared_ptr<node>> children = instance.get_children();
                    for (int i=0; i < number_of_children; i++)
                    {
                        //const typespec& val = static_cast
                        std::shared_ptr<node> child = children[i];
                        serializer_helper::serialize_child(stream, child);
                    }
                }

            }
            type deserialize(std::istream& stream) override
            {
                std::string type_key = "type";
                std::unordered_map<std::string, std::shared_ptr<node>> node_map;
                stream_parser s_p;
                tag node_tag;
                type root;
                std::shared_ptr<type> p_root = nullptr;
                bool is_root = true;

                std::vector<tag> node_tag_vector = s_p.read_stream(stream);

                for (int i = 0; i < node_tag_vector.size(); i++)
                {
                    node_tag = node_tag_vector[i];

                    std::shared_ptr<node> deserialized_node = serializer_helper::deserialize_implementation(node_tag);

                    if (is_root)
                    {
                        p_root = std::static_pointer_cast<type>(deserialized_node);
                        is_root = false;
                    }
                    else
                    {
                        // check if parent in list
                        std::string parent_name = node_tag.fields["parent"];

                        if (node_map.find(parent_name) != node_map.end())
                        {
                            node_map[parent_name]->add_child(deserialized_node);
                        }
                    }
                    node_map[node_tag.fields["name"]] = deserialized_node;
                }

                root = *p_root;
                return root;
            }
        };
    }
}
#endif