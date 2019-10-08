#include "RotativeJoint.h"

namespace aos
{

RotativeJoint::RotativeJoint()
:   KinematicJoint(0.0, 2*Math_PI,-2*Math_PI, true),
    _value_mode(ValueMode::RADIAN)
{

}

RotativeJoint::~RotativeJoint()
{
    
}

void RotativeJoint::set_joint_value(real_t value)
{
    if (value > _joint_max_limit || value < _joint_min_limit)
    {
        // Todo - Add notification that joint is out limit (visual notification)
    }

    _joint_value = (_value_mode==ValueMode::RADIAN) ? value : value * DEG_TO_RAD;
    _joint_transform = _compute_joint_transform();
    _update_global_transform();
}

real_t RotativeJoint::get_joint_value() const
{    
    return (_value_mode==ValueMode::RADIAN) ? _joint_value : _joint_value * RAD_TO_DEG;
}

void RotativeJoint::set_joint_value_mode(RotativeJoint::ValueMode mode)
{
    _value_mode = (ValueMode)mode;
    _change_notify("joint value");
    _change_notify("joint max limit");
    _change_notify("joint min limit");
}

RotativeJoint::ValueMode RotativeJoint::get_joint_value_mode() const
{
    return _value_mode;
}

void RotativeJoint::set_min_limit(real_t min)
{
    _joint_min_limit = (_value_mode==ValueMode::RADIAN) ? min : min * DEG_TO_RAD;
}

void RotativeJoint::set_max_limit(real_t max)
{
    _joint_max_limit = (_value_mode==ValueMode::RADIAN) ? max : max * DEG_TO_RAD;
}

void RotativeJoint::_notification(int p_what) 
{
}

Transform RotativeJoint::_compute_joint_transform() const
{    
    Transform t;
    t.rotate(Vector3(0.0, 0.0, 1.0), _joint_value);
    return t;
}

void RotativeJoint::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_joint_value", "joint_value"), &RotativeJoint::set_joint_value);
    ClassDB::bind_method(D_METHOD("get_joint_value"), &RotativeJoint::get_joint_value);

    ClassDB::bind_method(D_METHOD("set_joint_value_mode", "mode"), &RotativeJoint::set_joint_value_mode);
    ClassDB::bind_method(D_METHOD("get_joint_value_mode"), &RotativeJoint::get_joint_value_mode);

    ClassDB::bind_method(D_METHOD("set_joint_min_limit", "min_limit"), &RotativeJoint::set_min_limit);
    ClassDB::bind_method(D_METHOD("get_joint_min_limit"), &RotativeJoint::get_min_limit);

    ClassDB::bind_method(D_METHOD("set_joint_max_limit", "max"), &RotativeJoint::set_max_limit);
    ClassDB::bind_method(D_METHOD("get_joint_max_limit"), &RotativeJoint::get_max_limit);

    ADD_PROPERTY(PropertyInfo(Variant::REAL, "joint value"), "set_joint_value", "get_joint_value");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "joint max limit"), "set_joint_max_limit", "get_joint_max_limit");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "joint min limit"), "set_joint_min_limit", "get_joint_min_limit");    
    ADD_PROPERTY(PropertyInfo(Variant::INT, "value format", PROPERTY_HINT_ENUM, "DEGREE,RADIAN"), "set_joint_value_mode", "get_joint_value_mode");
}


}