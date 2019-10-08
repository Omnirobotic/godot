#ifndef KINEMATIC_JOINT_H
#define KINEMATIC_JOINT_H

#include "..\..\..\scene\3d\spatial.h"

namespace aos
{

class KinematicJoint : public Spatial
{
    GDCLASS(KinematicJoint, Spatial);

    protected:        
        real_t _joint_value;
        real_t _joint_max_limit;
        real_t _joint_min_limit;
        bool _apply_value_to_transform;
        Transform _joint_transform;

    protected:
        virtual Transform _compute_joint_transform() const = 0;
        void _update_global_transform();
        static void _bind_methods();

    public:
        KinematicJoint(){}
        KinematicJoint(real_t value, real_t max, real_t min, bool apply_value);
        ~KinematicJoint();

        void set_apply_value_to_transform(bool apply_value_to_transform);
        bool get_apply_value_to_transform() const;
};


}

#endif // KINEMATIC_JOINT_H