#ifndef _DOCUMENT_NODE_SERIALIZER_H
#define _DOCUMENT_NODE_SERIALIZER_H

#include "document_node.h"
#include "node_serializer.h"

namespace omni
{
    namespace scene
    {
        class document_node_serializer
            : public node_serializer<document_node>
        {
        public:
            typedef std::shared_ptr<document_node_serializer> ptr;

            document_node_serializer() = default;
            virtual ~document_node_serializer() = default;
        };

        struct style_of_document_node : public omni::serialization::format
        {
            typedef document_node_serializer serializer_type;
            typedef document_node serializer_object_type;

            static document_node_serializer::ptr get_serializer()
            {
                static document_node_serializer::ptr instance(new serializer_type());
                return instance;
            }
        };
    }
}

namespace omni
{
    namespace serialization
    {
        template <>
        struct default_format<omni::scene::document_node>
        {
            typedef omni::scene::style_of_document_node default_format_type;
        };
    }
}
#endif

