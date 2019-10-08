#ifndef UUID_SPLTYPES_H
#define UUID_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_UUID_.h"
#include "unique_identifier_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __UUID__unique_identifier_msgs__load (c_base base);

extern c_metaObject __UUID__unique_identifier_msgs_msg__load (c_base base);

extern c_metaObject __UUID__unique_identifier_msgs_msg_dds___load (c_base base);

extern c_metaObject __unique_identifier_msgs_msg_dds__unique_identifier_msgs__UUID__octet_array_16__load (c_base base);
typedef c_octet _unique_identifier_msgs_msg_dds__unique_identifier_msgs__UUID__octet_array_16[16];

extern const char *unique_identifier_msgs_msg_dds__UUID__metaDescriptor[];
extern const int unique_identifier_msgs_msg_dds__UUID__metaDescriptorArrLength;
extern const int unique_identifier_msgs_msg_dds__UUID__metaDescriptorLength;
extern c_metaObject __unique_identifier_msgs_msg_dds__UUID___load (c_base base);
struct _unique_identifier_msgs_msg_dds__UUID_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs v_copyin_result __unique_identifier_msgs_msg_dds__UUID___copyIn(c_base base, const struct unique_identifier_msgs::msg::dds_::UUID_ *from, struct _unique_identifier_msgs_msg_dds__UUID_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs void __unique_identifier_msgs_msg_dds__UUID___copyOut(const void *_from, void *_to);
struct _unique_identifier_msgs_msg_dds__UUID_ {
    _unique_identifier_msgs_msg_dds__unique_identifier_msgs__UUID__octet_array_16 uuid_;
};

#undef OS_API
#endif
