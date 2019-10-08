#ifndef FIBONACCI_RESULT_REQUEST_SPLTYPES_H
#define FIBONACCI_RESULT_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Fibonacci_Result_Request_.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_SplDcps.h"

#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Fibonacci_Result_Request__example_interfaces__load (c_base base);

extern c_metaObject __Fibonacci_Result_Request__example_interfaces_action__load (c_base base);

extern c_metaObject __Fibonacci_Result_Request__example_interfaces_action_dds___load (c_base base);

extern const char *example_interfaces_action_dds__Fibonacci_Result_Request__metaDescriptor[];
extern const int example_interfaces_action_dds__Fibonacci_Result_Request__metaDescriptorArrLength;
extern const int example_interfaces_action_dds__Fibonacci_Result_Request__metaDescriptorLength;
extern c_metaObject __example_interfaces_action_dds__Fibonacci_Result_Request___load (c_base base);
struct _example_interfaces_action_dds__Fibonacci_Result_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces v_copyin_result __example_interfaces_action_dds__Fibonacci_Result_Request___copyIn(c_base base, const struct example_interfaces::action::dds_::Fibonacci_Result_Request_ *from, struct _example_interfaces_action_dds__Fibonacci_Result_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces void __example_interfaces_action_dds__Fibonacci_Result_Request___copyOut(const void *_from, void *_to);
struct _example_interfaces_action_dds__Fibonacci_Result_Request_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ action_goal_id_;
};

#undef OS_API
#endif
