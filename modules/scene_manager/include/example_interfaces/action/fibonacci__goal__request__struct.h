// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__REQUEST__STRUCT_H_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// action_goal_id
#include "unique_identifier_msgs/msg/uuid__struct.h"

/// Struct of message example_interfaces/Fibonacci_Goal_Request
typedef struct example_interfaces__action__Fibonacci_Goal_Request
{
  unique_identifier_msgs__msg__UUID action_goal_id;
  int32_t order;
} example_interfaces__action__Fibonacci_Goal_Request;

/// Struct for an array of messages
typedef struct example_interfaces__action__Fibonacci_Goal_Request__Sequence
{
  example_interfaces__action__Fibonacci_Goal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_Goal_Request__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__REQUEST__STRUCT_H_
