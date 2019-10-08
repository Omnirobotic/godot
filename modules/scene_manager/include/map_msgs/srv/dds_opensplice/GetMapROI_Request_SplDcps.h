#ifndef GETMAPROI_REQUEST_SPLTYPES_H
#define GETMAPROI_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetMapROI_Request_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetMapROI_Request__map_msgs__load (c_base base);

extern c_metaObject __GetMapROI_Request__map_msgs_srv__load (c_base base);

extern c_metaObject __GetMapROI_Request__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__GetMapROI_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__GetMapROI_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetMapROI_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetMapROI_Request___load (c_base base);
struct _map_msgs_srv_dds__GetMapROI_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetMapROI_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::GetMapROI_Request_ *from, struct _map_msgs_srv_dds__GetMapROI_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetMapROI_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetMapROI_Request_ {
    c_double x_;
    c_double y_;
    c_double l_x_;
    c_double l_y_;
};

#undef OS_API
#endif
