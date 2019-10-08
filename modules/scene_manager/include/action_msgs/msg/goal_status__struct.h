// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__GOAL_STATUS__STRUCT_H_
#define ACTION_MSGS__MSG__GOAL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// goal_info
#include "action_msgs/msg/goal_info__struct.h"

// constants defined in the message
// STATUS_UNKNOWN
enum
{
  action_msgs__msg__GoalStatus__STATUS_UNKNOWN = 0
};
// STATUS_ACCEPTED
enum
{
  action_msgs__msg__GoalStatus__STATUS_ACCEPTED = 1
};
// STATUS_EXECUTING
enum
{
  action_msgs__msg__GoalStatus__STATUS_EXECUTING = 2
};
// STATUS_CANCELING
enum
{
  action_msgs__msg__GoalStatus__STATUS_CANCELING = 3
};
// STATUS_SUCCEEDED
enum
{
  action_msgs__msg__GoalStatus__STATUS_SUCCEEDED = 4
};
// STATUS_CANCELED
enum
{
  action_msgs__msg__GoalStatus__STATUS_CANCELED = 5
};
// STATUS_ABORTED
enum
{
  action_msgs__msg__GoalStatus__STATUS_ABORTED = 6
};

/// Struct of message action_msgs/GoalStatus
typedef struct action_msgs__msg__GoalStatus
{
  action_msgs__msg__GoalInfo goal_info;
  int8_t status;
} action_msgs__msg__GoalStatus;

/// Struct for an array of messages
typedef struct action_msgs__msg__GoalStatus__Sequence
{
  action_msgs__msg__GoalStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__msg__GoalStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__GOAL_STATUS__STRUCT_H_
