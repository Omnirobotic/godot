#pragma once
#include "serialization/i_serializer.h"
#include <vector>
#include <string>

namespace omni
{
    namespace document
    {
        namespace collection
        {
            namespace content 
            {
                //proxy
                struct document_collection_content_list
                {
                    // store keys contents_store_keys
                    std::vector <std::string> contents_store_keys;
                };

                struct document_collection_content_serializer
                    : public omni::serialization::i_serializer<document_collection_content_list>
                {
                    void serialize(std::ostream& stream, const serialized_type& instance) override;

                    serialized_type deserialize(std::istream& stream) override;

                };

                struct document_collection_content_format
                {
                    typedef document_collection_content_serializer serializer_type;
                    typedef std::shared_ptr<serializer_type> serializer_type_ptr;
                    typedef document_collection_content_list serializer_object_type;

                    static serializer_type_ptr get_serializer();
                };


            }
        }
    }
}

namespace omni
{
    namespace serialization
    {
        template <>
        struct default_format<omni::document::collection::content::document_collection_content_list>
        {
            typedef omni::document::collection::content::document_collection_content_format default_format_type;
        };
    }
}
