#ifndef _CYLINDER_H
#define _CYLINDER_H

#include <map>

#include "spatial.h"

namespace omni
{
    namespace scene
    {
        class cylinder : public spatial
        {
            float _height = 0.0f;
            float _radius = 0.0f;

            SCENE_CLASS(cylinder, spatial)

        public:
            cylinder();
            virtual ~cylinder();

            float get_height() const { return _height; }
            void set_height(const float height) { _height = height; }

            float get_radius() const { return _radius; }
            void set_radius(const float radius) { _radius = radius; }
        };
    }
}

#endif // _CYLINDER_H