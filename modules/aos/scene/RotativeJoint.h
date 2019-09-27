
#ifndef ROTATIVE_JOINT_H
#define ROTATIVE_JOINT_H

#include "..\..\..\scene\3d\spatial.h"

#define RAD_TO_DEG Math_PI/180
#define DEG_TO_RAD 180/Math_PI

class RotativeJoint : public Spatial
{
    GDCLASS(RotativeJoint, Spatial);

    public:
        enum ValueMode
        {
            DEGREE,
            RADIAN
        };

    private:
        ValueMode _value_mode;
        real_t _joint_value;
        real_t _joint_max_limit;
        real_t _joint_min_limit;
        bool _apply_value_to_transform;
        Transform _joint_transform;

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

        void set_apply_value_to_transform(bool apply_value_to_transform);
        bool get_apply_value_to_transform() const;

    private:
        void _update_global_transform();
        Transform _compute_joint_transform() const;
        //void _clamp_value_to_limit();
};

VARIANT_ENUM_CAST(RotativeJoint::ValueMode)

#endif //ROTATIVE_JOINT_H