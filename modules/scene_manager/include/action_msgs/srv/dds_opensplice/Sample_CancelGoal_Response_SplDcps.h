#ifndef SAMPLE_CANCELGOAL_RESPONSE_SPLTYPES_H
#define SAMPLE_CANCELGOAL_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_CancelGoal_Response_.h"
#include "action_msgs/srv/dds_opensplice/CancelGoal_Response_SplDcps.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_CancelGoal_Response__action_msgs__load (c_base base);

extern c_metaObject __Sample_CancelGoal_Response__action_msgs_srv__load (c_base base);

extern c_metaObject __Sample_CancelGoal_Response__action_msgs_srv_dds___load (c_base base);

extern const char *action_msgs_srv_dds__Sample_CancelGoal_Response__metaDescriptor[];
extern const int action_msgs_srv_dds__Sample_CancelGoal_Response__metaDescriptorArrLength;
extern const int action_msgs_srv_dds__Sample_CancelGoal_Response__metaDescriptorLength;
extern c_metaObject __action_msgs_srv_dds__Sample_CancelGoal_Response___load (c_base base);
struct _action_msgs_srv_dds__Sample_CancelGoal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_srv_dds__Sample_CancelGoal_Response___copyIn(c_base base, const struct action_msgs::srv::dds_::Sample_CancelGoal_Response_ *from, struct _action_msgs_srv_dds__Sample_CancelGoal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_srv_dds__Sample_CancelGoal_Response___copyOut(const void *_from, void *_to);
struct _action_msgs_srv_dds__Sample_CancelGoal_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _action_msgs_srv_dds__CancelGoal_Response_ response_;
};

#undef OS_API
#endif
