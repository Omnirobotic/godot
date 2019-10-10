#ifndef _PLANE_SERIALIZER_H
#define _PLANE_SERIALIZER_H

#include "plane.h"
#include "node_serializer.h"

namespace omni
{
    namespace scene
    {
        class plane_serializer
            : public godot_style_node_serializer<plane>
        {
        public:
            typedef std::shared_ptr<plane_serializer> ptr;

            plane_serializer() = default;
            virtual ~plane_serializer() = default;
        };

        struct godot_style_plane : public omni::serialization::format
        {
            typedef plane_serializer serializer_type;
            typedef plane serializer_object_type;

            static plane_serializer::ptr get_serializer()
            {
                static plane_serializer::ptr instance(new serializer_type());
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
        struct default_format<omni::scene::plane>
        {
            typedef omni::scene::godot_style_plane default_format_type;
        };
    }
}

#endif // _PLANE_SERIALIZER_H