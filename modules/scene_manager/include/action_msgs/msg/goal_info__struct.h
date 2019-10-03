// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__GOAL_INFO__STRUCT_H_
#define ACTION_MSGS__MSG__GOAL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// goal_id
#include "unique_identifier_msgs/msg/uuid__struct.h"
// stamp
#include "builtin_interfaces/msg/time__struct.h"

/// Struct of message action_msgs/GoalInfo
typedef struct action_msgs__msg__GoalInfo
{
  unique_identifier_msgs__msg__UUID goal_id;
  builtin_interfaces__msg__Time stamp;
} action_msgs__msg__GoalInfo;

/// Struct for an array of messages
typedef struct action_msgs__msg__GoalInfo__Sequence
{
  action_msgs__msg__GoalInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__msg__GoalInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__GOAL_INFO__STRUCT_H_
