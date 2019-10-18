// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__STRING__STRUCT_H_
#define STD_MSGS__MSG__STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// data
#include "rosidl_generator_c/string.h"

/// Struct of message std_msgs/String
typedef struct std_msgs__msg__String
{
  rosidl_generator_c__String data;
} std_msgs__msg__String;

/// Struct for an array of messages
typedef struct std_msgs__msg__String__Sequence
{
  std_msgs__msg__String * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__String__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__STRING__STRUCT_H_