#ifndef SAMPLE_ADDDIAGNOSTICS_RESPONSE_SPLTYPES_H
#define SAMPLE_ADDDIAGNOSTICS_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_AddDiagnostics_Response_.h"
#include "diagnostic_msgs/srv/dds_opensplice/AddDiagnostics_Response_SplDcps.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_AddDiagnostics_Response__diagnostic_msgs__load (c_base base);

extern c_metaObject __Sample_AddDiagnostics_Response__diagnostic_msgs_srv__load (c_base base);

extern c_metaObject __Sample_AddDiagnostics_Response__diagnostic_msgs_srv_dds___load (c_base base);

extern const char *diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response__metaDescriptor[];
extern const int diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response__metaDescriptorArrLength;
extern const int diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response___load (c_base base);
struct _diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response___copyIn(c_base base, const struct diagnostic_msgs::srv::dds_::Sample_AddDiagnostics_Response_ *from, struct _diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_srv_dds__Sample_AddDiagnostics_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _diagnostic_msgs_srv_dds__AddDiagnostics_Response_ response_;
};

#undef OS_API
#endif
