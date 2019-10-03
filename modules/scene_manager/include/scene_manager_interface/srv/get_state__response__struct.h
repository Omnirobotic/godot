// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__SRV__GET_STATE__RESPONSE__STRUCT_H_
#define SCENE_MANAGER_INTERFACE__SRV__GET_STATE__RESPONSE__STRUCT_H_

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
// joints_state
#include "scene_manager_interface/msg/joints_update__struct.h"

/// Struct of message scene_manager_interface/GetState_Response
typedef struct scene_manager_interface__srv__GetState_Response
{
  rosidl_generator_c__String__Sequence objects_name;
  rosidl_generator_c__String__Sequence objects_parent_name;
  scene_manager_interface__msg__DocumentInfo__Sequence objects_document_info;
  scene_manager_interface__msg__JointsUpdate joints_state;
} scene_manager_interface__srv__GetState_Response;

/// Struct for an array of messages
typedef struct scene_manager_interface__srv__GetState_Response__Sequence
{
  scene_manager_interface__srv__GetState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scene_manager_interface__srv__GetState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__SRV__GET_STATE__RESPONSE__STRUCT_H_
