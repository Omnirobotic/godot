#ifndef _CUBOID_H
#define _CUBOID_H

#include "spatial.h"

namespace omni
{
    namespace scene
    {
        class cuboid : public spatial
        {
            CppMath::Vector3 _dimension;

            SCENE_CLASS(cuboid, spatial)

        public:
            cuboid();
            virtual ~cuboid();

            CppMath::Vector3 get_dimension() const { return _dimension; }
            void set_dimension(const CppMath::Vector3& dimension) { _dimension = dimension; }
        };
    }
}

#endif // _CUBOID_H