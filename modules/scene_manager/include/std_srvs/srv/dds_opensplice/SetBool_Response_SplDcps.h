#ifndef SETBOOL_RESPONSE_SPLTYPES_H
#define SETBOOL_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetBool_Response_.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SetBool_Response__std_srvs__load (c_base base);

extern c_metaObject __SetBool_Response__std_srvs_srv__load (c_base base);

extern c_metaObject __SetBool_Response__std_srvs_srv_dds___load (c_base base);

extern const char *std_srvs_srv_dds__SetBool_Response__metaDescriptor[];
extern const int std_srvs_srv_dds__SetBool_Response__metaDescriptorArrLength;
extern const int std_srvs_srv_dds__SetBool_Response__metaDescriptorLength;
extern c_metaObject __std_srvs_srv_dds__SetBool_Response___load (c_base base);
struct _std_srvs_srv_dds__SetBool_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs v_copyin_result __std_srvs_srv_dds__SetBool_Response___copyIn(c_base base, const struct std_srvs::srv::dds_::SetBool_Response_ *from, struct _std_srvs_srv_dds__SetBool_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs void __std_srvs_srv_dds__SetBool_Response___copyOut(const void *_from, void *_to);
struct _std_srvs_srv_dds__SetBool_Response_ {
    c_bool success_;
    c_string message_;
};

#undef OS_API
#endif
