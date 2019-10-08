#pragma once

#include "serialization/i_serializer.h"
#include "serialization/serialization_manager.h"
#include "document/document_info.h"
#include "document/document.h"
#include "document/document_info_serializer.h"

namespace omni
{
    namespace document
    {
        // specific usage
        template<typename type, typename format = omni::serialization::default_format<type>::default_format_type>
        class document_serializer :
            public omni::serialization::i_serializer<document<type,format>>
        {
        public:

            void serialize(std::ostream& stream, const document<type, format>& instance) override
            {
                // serialize the doc info
                document_info_serializer_format::get_serializer()
                    ->serialize(stream, instance.get_document_info());
                // serialize the object
                format::get_serializer()
                    ->serialize(stream, *instance.get_object());
            }
            document<type, format> deserialize(std::istream& stream) override
            {
                document_info info = document_info_serializer_format::get_serializer()
                    ->deserialize(stream);

                if(info.type_name != typeid(type).name() )
                {
                    std::string message = std::string("Try to deserialize a document of type")
                        + info.type_name + "as a document of type " + typeid(type).name();
                    throw std::exception(message.c_str());
                }
                if(info.format_name != typeid(format).name())
                {
                    std::string message = std::string("Try to deserialize a document of format")
                        + info.format_name + "as a document of format " + typeid(format).name();
                    throw std::exception(message.c_str());
                }

                document<type, format> out(info.store_key);
                type object = format::get_serializer()
                    ->deserialize(stream);

                out.set_object(object);
                return out;
            }
        };

        template<typename type, typename format = omni::serialization::default_format<type>::default_format_type>
        struct document_format : public omni::serialization::format
        {
           typedef document<type,format> serializer_type;
           typedef std::shared_ptr<serializer_type> serializer_type_ptr;
           typedef document_serializer<type,format> serializer_object_type;
           static serializer_type_ptr get_serializer() 
           {
               static serializer_type_ptr instance(new serializer_type());
               return instance;
           }                       
        };
    }

    namespace serialization
    {
        template<typename type, typename format = omni::serialization::default_format<type>::default_format_type>
        struct default_format<omni::document::document<type,format>>
        {
            typedef omni::document::document_format<type,format> default_format_type; // default format of this type
        };
    }

}


