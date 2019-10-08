#ifndef SAMPLE_NESTEDMESSAGE_GOAL_RESPONSE_SPLTYPES_H
#define SAMPLE_NESTEDMESSAGE_GOAL_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_NestedMessage_Goal_Response_.h"
#include "test_msgs/action/dds_opensplice/NestedMessage_Goal_Response_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_NestedMessage_Goal_Response__test_msgs__load (c_base base);

extern c_metaObject __Sample_NestedMessage_Goal_Response__test_msgs_action__load (c_base base);

extern c_metaObject __Sample_NestedMessage_Goal_Response__test_msgs_action_dds___load (c_base base);

extern const char *test_msgs_action_dds__Sample_NestedMessage_Goal_Response__metaDescriptor[];
extern const int test_msgs_action_dds__Sample_NestedMessage_Goal_Response__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Sample_NestedMessage_Goal_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Sample_NestedMessage_Goal_Response___load (c_base base);
struct _test_msgs_action_dds__Sample_NestedMessage_Goal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Sample_NestedMessage_Goal_Response___copyIn(c_base base, const struct test_msgs::action::dds_::Sample_NestedMessage_Goal_Response_ *from, struct _test_msgs_action_dds__Sample_NestedMessage_Goal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Sample_NestedMessage_Goal_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Sample_NestedMessage_Goal_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_action_dds__NestedMessage_Goal_Response_ response_;
};

#undef OS_API
#endif
