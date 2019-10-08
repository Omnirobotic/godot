// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__DOCUMENT_INFO__STRUCT_H_
#define SCENE_MANAGER_INTERFACE__MSG__DOCUMENT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// store_key
// type_name
// format_name
#include "rosidl_generator_c/string.h"

/// Struct of message scene_manager_interface/DocumentInfo
typedef struct scene_manager_interface__msg__DocumentInfo
{
  rosidl_generator_c__String store_key;
  rosidl_generator_c__String type_name;
  rosidl_generator_c__String format_name;
} scene_manager_interface__msg__DocumentInfo;

/// Struct for an array of messages
typedef struct scene_manager_interface__msg__DocumentInfo__Sequence
{
  scene_manager_interface__msg__DocumentInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scene_manager_interface__msg__DocumentInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__MSG__DOCUMENT_INFO__STRUCT_H_
