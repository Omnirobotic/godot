#ifndef FIBONACCI_GOAL_RESPONSE_SPLTYPES_H
#define FIBONACCI_GOAL_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Fibonacci_Goal_Response_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Fibonacci_Goal_Response__example_interfaces__load (c_base base);

extern c_metaObject __Fibonacci_Goal_Response__example_interfaces_action__load (c_base base);

extern c_metaObject __Fibonacci_Goal_Response__example_interfaces_action_dds___load (c_base base);

extern const char *example_interfaces_action_dds__Fibonacci_Goal_Response__metaDescriptor[];
extern const int example_interfaces_action_dds__Fibonacci_Goal_Response__metaDescriptorArrLength;
extern const int example_interfaces_action_dds__Fibonacci_Goal_Response__metaDescriptorLength;
extern c_metaObject __example_interfaces_action_dds__Fibonacci_Goal_Response___load (c_base base);
struct _example_interfaces_action_dds__Fibonacci_Goal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces v_copyin_result __example_interfaces_action_dds__Fibonacci_Goal_Response___copyIn(c_base base, const struct example_interfaces::action::dds_::Fibonacci_Goal_Response_ *from, struct _example_interfaces_action_dds__Fibonacci_Goal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces void __example_interfaces_action_dds__Fibonacci_Goal_Response___copyOut(const void *_from, void *_to);
struct _example_interfaces_action_dds__Fibonacci_Goal_Response_ {
    c_bool accepted_;
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
};

#undef OS_API
#endif
