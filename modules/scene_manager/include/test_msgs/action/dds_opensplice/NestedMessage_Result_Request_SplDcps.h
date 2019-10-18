#ifndef NESTEDMESSAGE_RESULT_REQUEST_SPLTYPES_H
#define NESTEDMESSAGE_RESULT_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_NestedMessage_Result_Request_.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __NestedMessage_Result_Request__test_msgs__load (c_base base);

extern c_metaObject __NestedMessage_Result_Request__test_msgs_action__load (c_base base);

extern c_metaObject __NestedMessage_Result_Request__test_msgs_action_dds___load (c_base base);

extern const char *test_msgs_action_dds__NestedMessage_Result_Request__metaDescriptor[];
extern const int test_msgs_action_dds__NestedMessage_Result_Request__metaDescriptorArrLength;
extern const int test_msgs_action_dds__NestedMessage_Result_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__NestedMessage_Result_Request___load (c_base base);
struct _test_msgs_action_dds__NestedMessage_Result_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__NestedMessage_Result_Request___copyIn(c_base base, const struct test_msgs::action::dds_::NestedMessage_Result_Request_ *from, struct _test_msgs_action_dds__NestedMessage_Result_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__NestedMessage_Result_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__NestedMessage_Result_Request_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ action_goal_id_;
};

#undef OS_API
#endif