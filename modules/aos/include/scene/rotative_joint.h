#ifndef _ROTATIVE_JOINT_H
#define _ROTATIVE_JOINT_H

#include "spatial.h"

namespace omni
{
    namespace scene
    {
        /// The rotative_joint change the internal transform according to its value.
        ///  It produce a rotation around the z-axis.
        class rotative_joint : public spatial
        {
            float _joint_value = 0.0;
            float _joint_value_degree = 0.0;

            float _joint_min_limit = 0.0;
            float _joint_min_limit_degree = 0.0;

            float _joint_max_limit = 0.0;
            float _joint_max_limit_degree = 0.0;

            float _joint_max_speed = 0.0;

            SCENE_CLASS(rotative_joint, spatial)
        public:
            static rotative_joint create(float min, float max, float value);
            static rotative_joint create_degree(float min, float max, float value);
            rotative_joint();
            ~rotative_joint();

            float get_joint_value() const { return _joint_value; }
            float get_joint_value_degree() const { return _joint_value_degree; }

            void set_joint_value(float value);
            void set_joint_value_degree(float value_degree);

            float get_min_limit() const { return _joint_min_limit; }
            float get_min_limit_degree() const { return _joint_min_limit_degree; }
            float get_max_limit() const { return _joint_max_limit; }
            float get_max_limit_degree() const { return _joint_max_limit_degree; }

            void set_min_limit(float min);
            void set_min_limit_degree(float min_degree);
            void set_max_limit(float max);
            void set_max_limit_degree(float max_degree);

            void set_max_speed(float max);

        private:
            void _force_values_coherence();
            void _update_transform();
            void _clamp_value_to_limit();

            void unsafe_set_joint_value(float value);
            void unsafe_set_joint_value_degree(float value_degree);
            void unsafe_set_min_limit(float min);
            void unsafe_set_min_limit_degree(float min_degree);
            void unsafe_set_max_limit(float max);
            void unsafe_set_max_limit_degree(float max_degree);
        };
    }
}

#endif // ROTATIVE_JOINT_H
