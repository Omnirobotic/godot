// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__INITIAL_STATE__STRUCT_H_
#define SCENE_MANAGER_INTERFACE__MSG__INITIAL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// objects_name
// objects_parent_name
#include "rosidl_generator_c/string.h"
// objects_document_info
#include "scene_manager_interface/msg/document_info__struct.h"

/// Struct of message scene_manager_interface/InitialState
typedef struct scene_manager_interface__msg__InitialState
{
  rosidl_generator_c__String__Sequence objects_name;
  rosidl_generator_c__String__Sequence objects_parent_name;
  scene_manager_interface__msg__DocumentInfo__Sequence objects_document_info;
} scene_manager_interface__msg__InitialState;

/// Struct for an array of messages
typedef struct scene_manager_interface__msg__InitialState__Sequence
{
  scene_manager_interface__msg__InitialState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scene_manager_interface__msg__InitialState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__MSG__INITIAL_STATE__STRUCT_H_
