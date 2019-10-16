#include "PrismaticJoint.h"

namespace aos
{

PrismaticJoint::PrismaticJoint()
:   KinematicJoint(0.0, 0.0, 10, true)
{

}

PrismaticJoint::~PrismaticJoint()
{
    
}

void PrismaticJoint::set_joint_value(real_t value)
{
    if (value > _joint_max_limit || value < _joint_min_limit)
    {
        // Todo - Add notification that joint is out limit (visual notification)
    }

    _joint_value = value;
    _joint_transform = _compute_joint_transform();
    _update_global_transform();
}

real_t PrismaticJoint::get_joint_value() const
{    
    return _joint_value;
}

void PrismaticJoint::set_min_limit(real_t min)
{
    _joint_min_limit = min;
}

void PrismaticJoint::set_max_limit(real_t max)
{
    _joint_max_limit = max;
}

void PrismaticJoint::_notification(int p_what) 
{
}

Transform PrismaticJoint::_compute_joint_transform() const
{    
    Transform t;
    t.translate(0.0, 0.0, _joint_value);
    return t;
}

void PrismaticJoint::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_joint_value", "joint_value"), &PrismaticJoint::set_joint_value);
    ClassDB::bind_method(D_METHOD("get_joint_value"), &PrismaticJoint::get_joint_value);

    ClassDB::bind_method(D_METHOD("set_joint_min_limit", "min_limit"), &PrismaticJoint::set_min_limit);
    ClassDB::bind_method(D_METHOD("get_joint_min_limit"), &PrismaticJoint::get_min_limit);

    ClassDB::bind_method(D_METHOD("set_joint_max_limit", "max"), &PrismaticJoint::set_max_limit);
    ClassDB::bind_method(D_METHOD("get_joint_max_limit"), &PrismaticJoint::get_max_limit);

    ADD_PROPERTY(PropertyInfo(Variant::REAL, "joint value"), "set_joint_value", "get_joint_value");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "joint max limit"), "set_joint_max_limit", "get_joint_max_limit");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "joint min limit"), "set_joint_min_limit", "get_joint_min_limit");
}

}