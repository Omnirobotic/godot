#ifndef _ROTATIVE_JOINT_SERIALIZER_H
#define _ROTATIVE_JOINT_SERIALIZER_H

#include "rotative_joint.h"
#include "node_serializer.h"

namespace omni
{
    namespace scene
    {
        class rotative_joint_serializer
            : public node_serializer<rotative_joint>
        {
        public:
            typedef std::shared_ptr<rotative_joint_serializer> ptr;

            rotative_joint_serializer() = default;
            virtual ~rotative_joint_serializer() = default;
        };

        struct style_of_rotative_joint : public omni::serialization::format
        {
            typedef rotative_joint_serializer serializer_type;
            typedef rotative_joint serializer_object_type;

            static rotative_joint_serializer::ptr get_serializer()
            {
                static rotative_joint_serializer::ptr instance(new serializer_type());
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
        struct default_format<omni::scene::rotative_joint>
        {
            typedef omni::scene::style_of_rotative_joint default_format_type;
        };
    }
}
#endif

