// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__RESPONSE__STRUCT_H_
#define RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// types
#include "rosidl_generator_c/primitives_sequence.h"

/// Struct of message rcl_interfaces/GetParameterTypes_Response
typedef struct rcl_interfaces__srv__GetParameterTypes_Response
{
  rosidl_generator_c__uint8__Sequence types;
} rcl_interfaces__srv__GetParameterTypes_Response;

/// Struct for an array of messages
typedef struct rcl_interfaces__srv__GetParameterTypes_Response__Sequence
{
  rcl_interfaces__srv__GetParameterTypes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__GetParameterTypes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__GET_PARAMETER_TYPES__RESPONSE__STRUCT_H_