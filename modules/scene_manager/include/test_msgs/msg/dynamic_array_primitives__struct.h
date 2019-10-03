// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES__STRUCT_H_
#define TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// bool_values
// byte_values
// char_values
// float32_values
// float64_values
// int8_values
// uint8_values
// int16_values
// uint16_values
// int32_values
// uint32_values
// int64_values
// uint64_values
#include "rosidl_generator_c/primitives_sequence.h"
// string_values
#include "rosidl_generator_c/string.h"

/// Struct of message test_msgs/DynamicArrayPrimitives
typedef struct test_msgs__msg__DynamicArrayPrimitives
{
  rosidl_generator_c__bool__Sequence bool_values;
  rosidl_generator_c__byte__Sequence byte_values;
  rosidl_generator_c__char__Sequence char_values;
  rosidl_generator_c__float32__Sequence float32_values;
  rosidl_generator_c__float64__Sequence float64_values;
  rosidl_generator_c__int8__Sequence int8_values;
  rosidl_generator_c__uint8__Sequence uint8_values;
  rosidl_generator_c__int16__Sequence int16_values;
  rosidl_generator_c__uint16__Sequence uint16_values;
  rosidl_generator_c__int32__Sequence int32_values;
  rosidl_generator_c__uint32__Sequence uint32_values;
  rosidl_generator_c__int64__Sequence int64_values;
  rosidl_generator_c__uint64__Sequence uint64_values;
  rosidl_generator_c__String__Sequence string_values;
  int32_t check;
} test_msgs__msg__DynamicArrayPrimitives;

/// Struct for an array of messages
typedef struct test_msgs__msg__DynamicArrayPrimitives__Sequence
{
  test_msgs__msg__DynamicArrayPrimitives * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__DynamicArrayPrimitives__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES__STRUCT_H_
