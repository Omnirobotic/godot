#ifndef _CYLINDER_SERIALIZER_H
#define _CYLINDER_SERIALIZER_H

#include "cylinder.h"
#include "node_serializer.h"

namespace omni
{
    namespace scene
    {
        class cylinder_serializer
            : public godot_style_node_serializer<cylinder>
        {
        public:
            typedef std::shared_ptr<cylinder_serializer> ptr;

            cylinder_serializer() = default;
            virtual ~cylinder_serializer() = default;
        };

        struct godot_style_cylinder : public omni::serialization::format
        {
            typedef cylinder_serializer serializer_type;
            typedef cylinder serializer_object_type;

            static cylinder_serializer::ptr get_serializer()
            {
                static cylinder_serializer::ptr instance(new serializer_type());
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
        struct default_format<omni::scene::cylinder>
        {
            typedef omni::scene::godot_style_cylinder default_format_type;
        };
    }
}

#endif // _CYLINDER_SERIALIZER_H