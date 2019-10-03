// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__FIBONACCI__RESULT__REQUEST__STRUCT_H_
#define TEST_MSGS__ACTION__FIBONACCI__RESULT__REQUEST__STRUCT_H_

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

/// Struct of message test_msgs/Fibonacci_Result_Request
typedef struct test_msgs__action__Fibonacci_Result_Request
{
  unique_identifier_msgs__msg__UUID action_goal_id;
} test_msgs__action__Fibonacci_Result_Request;

/// Struct for an array of messages
typedef struct test_msgs__action__Fibonacci_Result_Request__Sequence
{
  test_msgs__action__Fibonacci_Result_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_Result_Request__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__FIBONACCI__RESULT__REQUEST__STRUCT_H_
