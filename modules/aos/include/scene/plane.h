#ifndef _PLANE_H
#define _PLANE_H

#include "spatial.h"

namespace omni
{
    namespace scene
    {
        class plane : public spatial
        {
            float _length_x = 0.0;
            float _length_y = 0.0;

            SCENE_CLASS(plane, spatial)

        public:
            plane();
            virtual ~plane();

            float get_length_x() const { return _length_x; }
            void set_length_x(float length_x) { _length_x = length_x; }

            float get_length_y() const { return _length_y; }
            void set_length_y(float length_y) { _length_y = length_y; }
        };
    }
}

#endif // _PLANE_H