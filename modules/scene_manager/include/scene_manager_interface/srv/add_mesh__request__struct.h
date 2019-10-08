// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__SRV__ADD_MESH__REQUEST__STRUCT_H_
#define SCENE_MANAGER_INTERFACE__SRV__ADD_MESH__REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// scene_object_name
// parent_object_name
#include "rosidl_generator_c/string.h"
// document_info
#include "scene_manager_interface/msg/document_info__struct.h"

/// Struct of message scene_manager_interface/AddMesh_Request
typedef struct scene_manager_interface__srv__AddMesh_Request
{
  rosidl_generator_c__String scene_object_name;
  scene_manager_interface__msg__DocumentInfo document_info;
  rosidl_generator_c__String parent_object_name;
} scene_manager_interface__srv__AddMesh_Request;

/// Struct for an array of messages
typedef struct scene_manager_interface__srv__AddMesh_Request__Sequence
{
  scene_manager_interface__srv__AddMesh_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scene_manager_interface__srv__AddMesh_Request__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__SRV__ADD_MESH__REQUEST__STRUCT_H_
