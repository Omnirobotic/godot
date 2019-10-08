#ifndef SAMPLE_SETPARAMETERSATOMICALLY_REQUEST_SPLTYPES_H
#define SAMPLE_SETPARAMETERSATOMICALLY_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_SetParametersAtomically_Request_.h"
#include "rcl_interfaces/srv/dds_opensplice/SetParametersAtomically_Request_SplDcps.h"

#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_SetParametersAtomically_Request__rcl_interfaces__load (c_base base);

extern c_metaObject __Sample_SetParametersAtomically_Request__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __Sample_SetParametersAtomically_Request__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_SetParametersAtomically_Request_ *from, struct _rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_SetParametersAtomically_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__SetParametersAtomically_Request_ request_;
};

#undef OS_API
#endif
