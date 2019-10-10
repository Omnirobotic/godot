#ifndef _SPATIAL_SERIALIZER_H
#define _SPATIAL_SERIALIZER_H

#include "spatial.h"
#include "node_serializer.h"

namespace omni
{
    namespace scene
    {
        class spatial_serializer
            : public godot_style_node_serializer<spatial>
        {
        public:
            typedef std::shared_ptr<spatial_serializer> ptr;

            spatial_serializer() = default;
            virtual ~spatial_serializer() = default;
        };

        struct godot_style_spatial : public omni::serialization::format
        {
            typedef spatial_serializer serializer_type;
            typedef spatial serializer_object_type;

            static spatial_serializer::ptr get_serializer()
            {
                static spatial_serializer::ptr instance(new serializer_type());
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
        struct default_format<omni::scene::spatial>
        {
            typedef omni::scene::godot_style_spatial default_format_type;
        };
    }
}
#endif

