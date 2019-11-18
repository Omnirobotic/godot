#ifndef _PRISMATIC_JOINT_H
#define _PRISMATIC_JOINT_H
#include "spatial.h"

namespace omni
{
    namespace scene
    {
        class prismatic_joint : public spatial
        {
            float _joint_value = 0.0;
            float _joint_min_limit = 0.0;
            float _joint_max_limit = 0.0;

            SCENE_CLASS(prismatic_joint, spatial)
        public:
            prismatic_joint();
            prismatic_joint(float min, float max, float value);
            ~prismatic_joint();

            float get_joint_value() const { return _joint_value; }
            void set_joint_value(float value);
            
            float get_min_limit() const { return _joint_min_limit; }
            float get_max_limit() const { return _joint_max_limit; }

            void set_min_limit(float min);
            void set_max_limit(float max);

        private:            
            void _update_transform();
            void _clamp_value_to_limit();
        };
    }
}

#endif // PRISMATIC_JOINT_H
