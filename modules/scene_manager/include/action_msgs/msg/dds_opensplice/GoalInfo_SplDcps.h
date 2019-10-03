#ifndef GOALINFO_SPLTYPES_H
#define GOALINFO_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GoalInfo_.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GoalInfo__action_msgs__load (c_base base);

extern c_metaObject __GoalInfo__action_msgs_msg__load (c_base base);

extern c_metaObject __GoalInfo__action_msgs_msg_dds___load (c_base base);

extern const char *action_msgs_msg_dds__GoalInfo__metaDescriptor[];
extern const int action_msgs_msg_dds__GoalInfo__metaDescriptorArrLength;
extern const int action_msgs_msg_dds__GoalInfo__metaDescriptorLength;
extern c_metaObject __action_msgs_msg_dds__GoalInfo___load (c_base base);
struct _action_msgs_msg_dds__GoalInfo_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_msg_dds__GoalInfo___copyIn(c_base base, const struct action_msgs::msg::dds_::GoalInfo_ *from, struct _action_msgs_msg_dds__GoalInfo_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_msg_dds__GoalInfo___copyOut(const void *_from, void *_to);
struct _action_msgs_msg_dds__GoalInfo_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ goal_id_;
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
};

#undef OS_API
#endif
