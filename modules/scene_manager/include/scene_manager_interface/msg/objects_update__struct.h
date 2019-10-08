// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__STRUCT_H_
#define SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// added_object_name
// added_object_parent_name
// removed_object_name
#include "rosidl_generator_c/string.h"
// added_object_document_info
#include "scene_manager_interface/msg/document_info__struct.h"

/// Struct of message scene_manager_interface/ObjectsUpdate
typedef struct scene_manager_interface__msg__ObjectsUpdate
{
  rosidl_generator_c__String added_object_name;
  rosidl_generator_c__String added_object_parent_name;
  scene_manager_interface__msg__DocumentInfo added_object_document_info;
  rosidl_generator_c__String removed_object_name;
} scene_manager_interface__msg__ObjectsUpdate;

/// Struct for an array of messages
typedef struct scene_manager_interface__msg__ObjectsUpdate__Sequence
{
  scene_manager_interface__msg__ObjectsUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scene_manager_interface__msg__ObjectsUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__STRUCT_H_
