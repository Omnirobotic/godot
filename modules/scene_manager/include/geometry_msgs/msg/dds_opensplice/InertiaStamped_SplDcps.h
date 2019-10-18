#ifndef INERTIASTAMPED_SPLTYPES_H
#define INERTIASTAMPED_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_InertiaStamped_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Inertia_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __InertiaStamped__geometry_msgs__load (c_base base);

extern c_metaObject __InertiaStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __InertiaStamped__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__InertiaStamped__metaDescriptor[];
extern const int geometry_msgs_msg_dds__InertiaStamped__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__InertiaStamped__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__InertiaStamped___load (c_base base);
struct _geometry_msgs_msg_dds__InertiaStamped_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__InertiaStamped___copyIn(c_base base, const struct geometry_msgs::msg::dds_::InertiaStamped_ *from, struct _geometry_msgs_msg_dds__InertiaStamped_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__InertiaStamped___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__InertiaStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Inertia_ inertia_;
};

#undef OS_API
#endif