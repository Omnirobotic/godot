#ifndef _CUBOID_SERIALIZER_H
#define _CUBOID_SERIALIZER_H

#include "cuboid.h"
#include "node_serializer.h"

namespace omni
{
    namespace scene
    {
        class cuboid_serializer
            : public godot_style_node_serializer<cuboid>
        {
        public:
            typedef std::shared_ptr<cuboid_serializer> ptr;

            cuboid_serializer() = default;
            virtual ~cuboid_serializer() = default;
        };

        struct godot_style_cuboid : public omni::serialization::format
        {
            typedef cuboid_serializer serializer_type;
            typedef cuboid serializer_object_type;

            static cuboid_serializer::ptr get_serializer()
            {
                static cuboid_serializer::ptr instance(new serializer_type());
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
        struct default_format<omni::scene::cuboid>
        {
            typedef omni::scene::godot_style_cuboid default_format_type;
        };
    }
}

#endif // _CUBOID_SERIALIZER_H