#ifndef _SPATIAL_H
#define _SPATIAL_H

#include "node.h"
#include "Vector7.h"

namespace omni
{
    namespace scene
    {
        class spatial : public node
        {
        protected:
            CppMath::Vector7 _transform;

            SCENE_CLASS(spatial, node)

        public:
            spatial();
            virtual ~spatial();

            CppMath::Vector7 get_transform() const { return _transform; }
            void set_transform(const CppMath::Vector7& transform) { _transform = transform; }
        };
    }
}

#endif // _SPATIAL_H
