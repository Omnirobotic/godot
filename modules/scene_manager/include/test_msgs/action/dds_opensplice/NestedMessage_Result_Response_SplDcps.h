#ifndef NESTEDMESSAGE_RESULT_RESPONSE_SPLTYPES_H
#define NESTEDMESSAGE_RESULT_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_NestedMessage_Result_Response_.h"
#include "test_msgs/msg/dds_opensplice/Builtins_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/Primitives_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __NestedMessage_Result_Response__test_msgs__load (c_base base);

extern c_metaObject __NestedMessage_Result_Response__test_msgs_action__load (c_base base);

extern c_metaObject __NestedMessage_Result_Response__test_msgs_action_dds___load (c_base base);

extern const char *test_msgs_action_dds__NestedMessage_Result_Response__metaDescriptor[];
extern const int test_msgs_action_dds__NestedMessage_Result_Response__metaDescriptorArrLength;
extern const int test_msgs_action_dds__NestedMessage_Result_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__NestedMessage_Result_Response___load (c_base base);
struct _test_msgs_action_dds__NestedMessage_Result_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__NestedMessage_Result_Response___copyIn(c_base base, const struct test_msgs::action::dds_::NestedMessage_Result_Response_ *from, struct _test_msgs_action_dds__NestedMessage_Result_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__NestedMessage_Result_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__NestedMessage_Result_Response_ {
    c_octet action_status_;
    struct _test_msgs_msg_dds__Builtins_ nested_field_no_pkg_;
    struct _test_msgs_msg_dds__Primitives_ nested_field_;
    struct _builtin_interfaces_msg_dds__Time_ nested_different_pkg_;
};

#undef OS_API
#endif
