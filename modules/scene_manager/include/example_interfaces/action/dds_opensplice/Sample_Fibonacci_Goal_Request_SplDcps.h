#ifndef SAMPLE_FIBONACCI_GOAL_REQUEST_SPLTYPES_H
#define SAMPLE_FIBONACCI_GOAL_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_Fibonacci_Goal_Request_.h"
#include "example_interfaces/action/dds_opensplice/Fibonacci_Goal_Request_SplDcps.h"

#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_Fibonacci_Goal_Request__example_interfaces__load (c_base base);

extern c_metaObject __Sample_Fibonacci_Goal_Request__example_interfaces_action__load (c_base base);

extern c_metaObject __Sample_Fibonacci_Goal_Request__example_interfaces_action_dds___load (c_base base);

extern const char *example_interfaces_action_dds__Sample_Fibonacci_Goal_Request__metaDescriptor[];
extern const int example_interfaces_action_dds__Sample_Fibonacci_Goal_Request__metaDescriptorArrLength;
extern const int example_interfaces_action_dds__Sample_Fibonacci_Goal_Request__metaDescriptorLength;
extern c_metaObject __example_interfaces_action_dds__Sample_Fibonacci_Goal_Request___load (c_base base);
struct _example_interfaces_action_dds__Sample_Fibonacci_Goal_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces v_copyin_result __example_interfaces_action_dds__Sample_Fibonacci_Goal_Request___copyIn(c_base base, const struct example_interfaces::action::dds_::Sample_Fibonacci_Goal_Request_ *from, struct _example_interfaces_action_dds__Sample_Fibonacci_Goal_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces void __example_interfaces_action_dds__Sample_Fibonacci_Goal_Request___copyOut(const void *_from, void *_to);
struct _example_interfaces_action_dds__Sample_Fibonacci_Goal_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _example_interfaces_action_dds__Fibonacci_Goal_Request_ request_;
};

#undef OS_API
#endif
