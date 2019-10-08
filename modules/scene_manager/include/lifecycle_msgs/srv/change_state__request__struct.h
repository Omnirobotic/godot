// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__CHANGE_STATE__REQUEST__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__CHANGE_STATE__REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// transition
#include "lifecycle_msgs/msg/transition__struct.h"

/// Struct of message lifecycle_msgs/ChangeState_Request
typedef struct lifecycle_msgs__srv__ChangeState_Request
{
  lifecycle_msgs__msg__Transition transition;
} lifecycle_msgs__srv__ChangeState_Request;

/// Struct for an array of messages
typedef struct lifecycle_msgs__srv__ChangeState_Request__Sequence
{
  lifecycle_msgs__srv__ChangeState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__ChangeState_Request__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__CHANGE_STATE__REQUEST__STRUCT_H_
