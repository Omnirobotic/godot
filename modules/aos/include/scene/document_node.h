#ifndef _DOCUMENT_NODE_H
#define _DOCUMENT_NODE_H

#include "node.h"
#include "serialization/i_serializer.h"
#include "document/document_info.h"


namespace omni
{
    namespace scene
    {
        class document_node : public node
        {
        public:
            omni::document::document_info info;

        private:
            SCENE_CLASS(document_node, node)

        public:
            document_node();
            document_node(omni::document::document_info info_input);

            omni::document::document_info get_document_info();
            void set_document_info(omni::document::document_info info_input);
        };
    }
}
#endif

