
#ifndef ROTATIVE_JOINT_H
#define ROTATIVE_JOINT_H

#include "KinematicJoint.h"
#include "..\math_constants.h"

namespace aos
{

class RotativeJoint : public KinematicJoint
{
    GDCLASS(RotativeJoint, KinematicJoint);

    public:
        enum ValueMode
        {
            DEGREE,
            RADIAN
        };

    private:
        ValueMode _value_mode;

    protected:
        static void _bind_methods();
        void _notification(int p_what);

    public:
        RotativeJoint();
        ~RotativeJoint();

        void set_joint_value_mode(ValueMode mode);
        ValueMode get_joint_value_mode() const;

        void set_joint_value(real_t value);
        real_t get_joint_value() const;

        real_t get_min_limit() const { return (_value_mode==ValueMode::RADIAN) ? _joint_min_limit : _joint_min_limit * RAD_TO_DEG;}
        real_t get_max_limit() const { return (_value_mode==ValueMode::RADIAN) ? _joint_max_limit : _joint_max_limit * RAD_TO_DEG;}

        void set_min_limit(real_t min);
        void set_max_limit(real_t max);

    private:
        Transform _compute_joint_transform() const override;
        //void _clamp_value_to_limit();
};

VARIANT_ENUM_CAST(RotativeJoint::ValueMode)

}

#endif //ROTATIVE_JOINT_H