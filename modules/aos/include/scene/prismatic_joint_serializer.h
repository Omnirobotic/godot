#ifndef _PRISMATIC_JOINT_SERIALIZER_H
#define _PRISMATIC_JOINT_SERIALIZER_H

#include "prismatic_joint.h"
#include "node_serializer.h"

namespace omni
{
    namespace scene
    {
        class prismatic_joint_serializer
            : public godot_style_node_serializer<prismatic_joint>
        {
        public:
            typedef std::shared_ptr<prismatic_joint_serializer> ptr;

            prismatic_joint_serializer() = default;
            virtual ~prismatic_joint_serializer() = default;
        };

        struct godot_style_prismatic_joint : public omni::serialization::format
        {
            typedef prismatic_joint_serializer serializer_type;
            typedef prismatic_joint serializer_object_type;

            static prismatic_joint_serializer::ptr get_serializer()
            {
                static prismatic_joint_serializer::ptr instance(new serializer_type());
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
        struct default_format<omni::scene::prismatic_joint>
        {
            typedef omni::scene::godot_style_prismatic_joint default_format_type;
        };
    }
}
#endif

