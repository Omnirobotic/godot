#ifndef STATICARRAYPRIMITIVESNESTED_SPLTYPES_H
#define STATICARRAYPRIMITIVESNESTED_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_StaticArrayPrimitivesNested_.h"
#include "test_msgs/msg/dds_opensplice/StaticArrayPrimitives_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __StaticArrayPrimitivesNested__test_msgs__load (c_base base);

extern c_metaObject __StaticArrayPrimitivesNested__test_msgs_msg__load (c_base base);

extern c_metaObject __StaticArrayPrimitivesNested__test_msgs_msg_dds___load (c_base base);

extern c_metaObject __test_msgs_msg_dds__test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4__load (c_base base);
typedef struct _test_msgs_msg_dds__StaticArrayPrimitives_ _test_msgs_msg_dds__test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4[4];

extern const char *test_msgs_msg_dds__StaticArrayPrimitivesNested__metaDescriptor[];
extern const int test_msgs_msg_dds__StaticArrayPrimitivesNested__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__StaticArrayPrimitivesNested__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__StaticArrayPrimitivesNested___load (c_base base);
struct _test_msgs_msg_dds__StaticArrayPrimitivesNested_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__StaticArrayPrimitivesNested___copyIn(c_base base, const struct test_msgs::msg::dds_::StaticArrayPrimitivesNested_ *from, struct _test_msgs_msg_dds__StaticArrayPrimitivesNested_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__StaticArrayPrimitivesNested___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__StaticArrayPrimitivesNested_ {
    _test_msgs_msg_dds__test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4 static_array_primitive_values_;
};

#undef OS_API
#endif
