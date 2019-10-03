// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__STRUCT_H_
#define ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// goals_canceling
#include "action_msgs/msg/goal_info__struct.h"

/// Struct of message action_msgs/CancelGoal_Response
typedef struct action_msgs__srv__CancelGoal_Response
{
  action_msgs__msg__GoalInfo__Sequence goals_canceling;
} action_msgs__srv__CancelGoal_Response;

/// Struct for an array of messages
typedef struct action_msgs__srv__CancelGoal_Response__Sequence
{
  action_msgs__srv__CancelGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__srv__CancelGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__STRUCT_H_
