// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__VECTOR3__STRUCT_H_
#define GEOMETRY_MSGS__MSG__VECTOR3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message geometry_msgs/Vector3
typedef struct geometry_msgs__msg__Vector3
{
  double x;
  double y;
  double z;
} geometry_msgs__msg__Vector3;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__Vector3__Sequence
{
  geometry_msgs__msg__Vector3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Vector3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__VECTOR3__STRUCT_H_
