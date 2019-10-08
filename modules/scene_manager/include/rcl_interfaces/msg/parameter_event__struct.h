// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__PARAMETER_EVENT__STRUCT_H_
#define RCL_INTERFACES__MSG__PARAMETER_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// stamp
#include "builtin_interfaces/msg/time__struct.h"
// node
#include "rosidl_generator_c/string.h"
// new_parameters
// changed_parameters
// deleted_parameters
#include "rcl_interfaces/msg/parameter__struct.h"

/// Struct of message rcl_interfaces/ParameterEvent
typedef struct rcl_interfaces__msg__ParameterEvent
{
  builtin_interfaces__msg__Time stamp;
  rosidl_generator_c__String node;
  rcl_interfaces__msg__Parameter__Sequence new_parameters;
  rcl_interfaces__msg__Parameter__Sequence changed_parameters;
  rcl_interfaces__msg__Parameter__Sequence deleted_parameters;
} rcl_interfaces__msg__ParameterEvent;

/// Struct for an array of messages
typedef struct rcl_interfaces__msg__ParameterEvent__Sequence
{
  rcl_interfaces__msg__ParameterEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__ParameterEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__PARAMETER_EVENT__STRUCT_H_
