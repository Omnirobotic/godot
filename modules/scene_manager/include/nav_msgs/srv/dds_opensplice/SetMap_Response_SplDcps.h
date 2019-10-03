#ifndef SETMAP_RESPONSE_SPLTYPES_H
#define SETMAP_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetMap_Response_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SetMap_Response__nav_msgs__load (c_base base);

extern c_metaObject __SetMap_Response__nav_msgs_srv__load (c_base base);

extern c_metaObject __SetMap_Response__nav_msgs_srv_dds___load (c_base base);

extern const char *nav_msgs_srv_dds__SetMap_Response__metaDescriptor[];
extern const int nav_msgs_srv_dds__SetMap_Response__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__SetMap_Response__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__SetMap_Response___load (c_base base);
struct _nav_msgs_srv_dds__SetMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__SetMap_Response___copyIn(c_base base, const struct nav_msgs::srv::dds_::SetMap_Response_ *from, struct _nav_msgs_srv_dds__SetMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__SetMap_Response___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__SetMap_Response_ {
    c_bool success_;
};

#undef OS_API
#endif
