#pragma once

#include "serialization/i_serializer.h"
#include "serialization/serialization_manager.h"
#include "document/document_info.h"
#include "document/document.h"

namespace omni
{
    namespace document
    {
        // document_info
        class document_info_serializer
            : public omni::serialization::i_serializer<document_info>
        {
        public:
            void serialize(std::ostream& stream, const serialized_type& instance) override;

            serialized_type deserialize(std::istream& stream) override;

        };

        struct document_info_serializer_format : public omni::serialization::format
        {
            typedef document_info_serializer serializer_type;
            typedef std::shared_ptr<serializer_type> serializer_type_ptr;
            typedef document_info serializer_object_type;
            static serializer_type_ptr get_serializer();
        };


    }

    namespace serialization
    {
        template <>
        struct default_format<omni::document::document_info>
        {
            typedef omni::document::document_info_serializer_format default_format_type; // default format of this type
        };

    }

}


