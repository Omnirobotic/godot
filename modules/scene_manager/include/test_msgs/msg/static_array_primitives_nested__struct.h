// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__STATIC_ARRAY_PRIMITIVES_NESTED__STRUCT_H_
#define TEST_MSGS__MSG__STATIC_ARRAY_PRIMITIVES_NESTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// static_array_primitive_values
#include "test_msgs/msg/static_array_primitives__struct.h"

/// Struct of message test_msgs/StaticArrayPrimitivesNested
typedef struct test_msgs__msg__StaticArrayPrimitivesNested
{
  test_msgs__msg__StaticArrayPrimitives static_array_primitive_values[4];
} test_msgs__msg__StaticArrayPrimitivesNested;

/// Struct for an array of messages
typedef struct test_msgs__msg__StaticArrayPrimitivesNested__Sequence
{
  test_msgs__msg__StaticArrayPrimitivesNested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__StaticArrayPrimitivesNested__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__STATIC_ARRAY_PRIMITIVES_NESTED__STRUCT_H_
