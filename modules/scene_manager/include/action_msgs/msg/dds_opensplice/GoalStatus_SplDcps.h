#ifndef GOALSTATUS_SPLTYPES_H
#define GOALSTATUS_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GoalStatus_.h"
#include "action_msgs/msg/dds_opensplice/GoalInfo_SplDcps.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GoalStatus__action_msgs__load (c_base base);

extern c_metaObject __GoalStatus__action_msgs_msg__load (c_base base);

extern c_metaObject __GoalStatus__action_msgs_msg_dds___load (c_base base);

extern const char *action_msgs_msg_dds__GoalStatus__metaDescriptor[];
extern const int action_msgs_msg_dds__GoalStatus__metaDescriptorArrLength;
extern const int action_msgs_msg_dds__GoalStatus__metaDescriptorLength;
extern c_metaObject __action_msgs_msg_dds__GoalStatus___load (c_base base);
struct _action_msgs_msg_dds__GoalStatus_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_msg_dds__GoalStatus___copyIn(c_base base, const struct action_msgs::msg::dds_::GoalStatus_ *from, struct _action_msgs_msg_dds__GoalStatus_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_msg_dds__GoalStatus___copyOut(const void *_from, void *_to);
struct _action_msgs_msg_dds__GoalStatus_ {
    struct _action_msgs_msg_dds__GoalInfo_ goal_info_;
    c_octet status_;
};

#undef OS_API
#endif
