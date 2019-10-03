#pragma once

#include "serialization/i_serializer.h"
#include <string>
#include <vector>
#include <map>
#include <cassert>
#include <type_traits>


// type: mean the the type we want to serialize/deserialize. Ex:Mesh
// style: mean the style of serialization we need. Ex: Ply, OBJ for a Mesh

namespace omni
{
    namespace serialization
    {
        class serialization_manager
        {
        public:
            // general case
            template<typename type, typename format>
            static void serialize(std::ostream& stream, const type& instance) 
            {
                static_assert(std::is_same<type, format::serializer_object_type>::value,
                    "No association between serialization Format and Type");

                auto serializer = format::get_serializer();
                serializer->serialize(stream, instance);
            }

            template<typename type, typename format>
            static type deserialize(std::istream& stream)
            {
                static_assert(std::is_same<type, format::serializer_object_type>::value,
                    "No association between serialization Format and Type");
                auto serializer = format::get_serializer();
                return serializer->deserialize(stream);
            }

            // use default format
            template<typename t>
            static void serialize(std::ostream& stream, const t& instance)
            {
                typedef default_format<t>::default_format_type format;

                auto serializer = format::get_serializer();
                serializer->serialize(stream, instance);
            }

            template<typename t>
            static t deserialize(std::istream& stream)
            {
                typedef default_format<t>::default_format_type format;

                auto serializer = format::get_serializer();
                return serializer->deserialize(stream);
            }



        };
    }
}
