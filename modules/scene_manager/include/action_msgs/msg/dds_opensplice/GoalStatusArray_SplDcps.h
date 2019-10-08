#ifndef GOALSTATUSARRAY_SPLTYPES_H
#define GOALSTATUSARRAY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GoalStatusArray_.h"
#include "action_msgs/msg/dds_opensplice/GoalStatus_SplDcps.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GoalStatusArray__action_msgs__load (c_base base);

extern c_metaObject __GoalStatusArray__action_msgs_msg__load (c_base base);

extern c_metaObject __GoalStatusArray__action_msgs_msg_dds___load (c_base base);

extern const char *action_msgs_msg_dds__GoalStatusArray__metaDescriptor[];
extern const int action_msgs_msg_dds__GoalStatusArray__metaDescriptorArrLength;
extern const int action_msgs_msg_dds__GoalStatusArray__metaDescriptorLength;
extern c_metaObject __action_msgs_msg_dds__GoalStatusArray___load (c_base base);
struct _action_msgs_msg_dds__GoalStatusArray_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_msg_dds__GoalStatusArray___copyIn(c_base base, const struct action_msgs::msg::dds_::GoalStatusArray_ *from, struct _action_msgs_msg_dds__GoalStatusArray_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_msg_dds__GoalStatusArray___copyOut(const void *_from, void *_to);
struct _action_msgs_msg_dds__GoalStatusArray_ {
    c_sequence status_list_;
};

#undef OS_API
#endif
