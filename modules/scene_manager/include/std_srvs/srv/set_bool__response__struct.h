// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__SET_BOOL__RESPONSE__STRUCT_H_
#define STD_SRVS__SRV__SET_BOOL__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// message
#include "rosidl_generator_c/string.h"

/// Struct of message std_srvs/SetBool_Response
typedef struct std_srvs__srv__SetBool_Response
{
  bool success;
  rosidl_generator_c__String message;
} std_srvs__srv__SetBool_Response;

/// Struct for an array of messages
typedef struct std_srvs__srv__SetBool_Response__Sequence
{
  std_srvs__srv__SetBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__SET_BOOL__RESPONSE__STRUCT_H_
