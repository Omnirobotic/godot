// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__FIBONACCI__FEEDBACK__STRUCT_H_
#define TEST_MSGS__ACTION__FIBONACCI__FEEDBACK__STRUCT_H_

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
// sequence
#include "rosidl_generator_c/primitives_sequence.h"

/// Struct of message test_msgs/Fibonacci_Feedback
typedef struct test_msgs__action__Fibonacci_Feedback
{
  unique_identifier_msgs__msg__UUID action_goal_id;
  rosidl_generator_c__int32__Sequence sequence;
} test_msgs__action__Fibonacci_Feedback;

/// Struct for an array of messages
typedef struct test_msgs__action__Fibonacci_Feedback__Sequence
{
  test_msgs__action__Fibonacci_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__FIBONACCI__FEEDBACK__STRUCT_H_
