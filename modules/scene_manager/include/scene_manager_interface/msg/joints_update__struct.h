// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__JOINTS_UPDATE__STRUCT_H_
#define SCENE_MANAGER_INTERFACE__MSG__JOINTS_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// joints_name
#include "rosidl_generator_c/string.h"
// joints_value
#include "rosidl_generator_c/primitives_sequence.h"

/// Struct of message scene_manager_interface/JointsUpdate
typedef struct scene_manager_interface__msg__JointsUpdate
{
  rosidl_generator_c__String__Sequence joints_name;
  rosidl_generator_c__float64__Sequence joints_value;
} scene_manager_interface__msg__JointsUpdate;

/// Struct for an array of messages
typedef struct scene_manager_interface__msg__JointsUpdate__Sequence
{
  scene_manager_interface__msg__JointsUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scene_manager_interface__msg__JointsUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__MSG__JOINTS_UPDATE__STRUCT_H_
