// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POSE_ARRAY__STRUCT_H_
#define GEOMETRY_MSGS__MSG__POSE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// poses
#include "geometry_msgs/msg/pose__struct.h"

/// Struct of message geometry_msgs/PoseArray
typedef struct geometry_msgs__msg__PoseArray
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose__Sequence poses;
} geometry_msgs__msg__PoseArray;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__PoseArray__Sequence
{
  geometry_msgs__msg__PoseArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__POSE_ARRAY__STRUCT_H_
