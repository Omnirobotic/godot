// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_H_
#define ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// status_list
#include "action_msgs/msg/goal_status__struct.h"

/// Struct of message action_msgs/GoalStatusArray
typedef struct action_msgs__msg__GoalStatusArray
{
  action_msgs__msg__GoalStatus__Sequence status_list;
} action_msgs__msg__GoalStatusArray;

/// Struct for an array of messages
typedef struct action_msgs__msg__GoalStatusArray__Sequence
{
  action_msgs__msg__GoalStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__msg__GoalStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_H_
