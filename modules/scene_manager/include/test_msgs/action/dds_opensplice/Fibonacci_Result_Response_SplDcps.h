#ifndef FIBONACCI_RESULT_RESPONSE_SPLTYPES_H
#define FIBONACCI_RESULT_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Fibonacci_Result_Response_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Fibonacci_Result_Response__test_msgs__load (c_base base);

extern c_metaObject __Fibonacci_Result_Response__test_msgs_action__load (c_base base);

extern c_metaObject __Fibonacci_Result_Response__test_msgs_action_dds___load (c_base base);

extern const char *test_msgs_action_dds__Fibonacci_Result_Response__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_Result_Response__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_Result_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_Result_Response___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_Result_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_Result_Response___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_Result_Response_ *from, struct _test_msgs_action_dds__Fibonacci_Result_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_Result_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_Result_Response_ {
    c_octet action_status_;
    c_sequence sequence_;
};

#undef OS_API
#endif
