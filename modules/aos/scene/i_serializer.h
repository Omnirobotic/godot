#pragma once
#include <memory>
#include <type_traits>

namespace omni
{
    namespace serialization
    {
        class i_serializer_base
        {
        public:
            i_serializer_base() = default;
            i_serializer_base(const i_serializer_base&) = delete;
            i_serializer_base& operator=(const i_serializer_base&) = delete;
            virtual ~i_serializer_base() = default;


        };

        template <typename t>
        class i_serializer : public i_serializer_base
        {
        public:
            typedef t serialized_type;
            typedef std::shared_ptr<serialized_type> serialized_type_ptr;

            virtual ~i_serializer() = default;
            virtual void serialize(std::ostream& stream, const t& instance) = 0;
            virtual t deserialize(std::istream& stream) = 0;

            // must have (replace xxx)

            // typedef std::shared_ptr<xxx> ptr;

        };

        struct format 
        {
            // when inherit
            // must have (replace xxx)

            //typedef xxx serializer_type;
            //typedef std::shared_ptr<serializer_type> serializer_type_ptr;
            //typedef xxx serializer_object_type;
            //static serializer_type_ptr get_serializer() // implement this in a .cpp
            //{
            //    static serializer_type_ptr instance(new serializer_type());
            //    return instance;
            //}
        };

        template <typename type> 
        struct default_format 
        {
           // must have (replace xxx)

           // typedef xxx default_format_type; // default format of this type
        };

        }
}
