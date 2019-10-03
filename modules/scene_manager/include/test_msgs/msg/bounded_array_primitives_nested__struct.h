// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES_NESTED__STRUCT_H_
#define TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES_NESTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// bounded_array_primitive_values
#include "test_msgs/msg/bounded_array_primitives__struct.h"

// constants for array fields with an upper bound
// bounded_array_primitive_values
enum
{
  test_msgs__msg__BoundedArrayPrimitivesNested__bounded_array_primitive_values__MAX_SIZE = 3
};

/// Struct of message test_msgs/BoundedArrayPrimitivesNested
typedef struct test_msgs__msg__BoundedArrayPrimitivesNested
{
  test_msgs__msg__BoundedArrayPrimitives__Sequence bounded_array_primitive_values;
} test_msgs__msg__BoundedArrayPrimitivesNested;

/// Struct for an array of messages
typedef struct test_msgs__msg__BoundedArrayPrimitivesNested__Sequence
{
  test_msgs__msg__BoundedArrayPrimitivesNested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__BoundedArrayPrimitivesNested__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES_NESTED__STRUCT_H_
