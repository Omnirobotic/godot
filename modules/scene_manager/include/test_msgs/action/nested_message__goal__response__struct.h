// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__RESPONSE__STRUCT_H_
#define TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// stamp
#include "builtin_interfaces/msg/time__struct.h"

/// Struct of message test_msgs/NestedMessage_Goal_Response
typedef struct test_msgs__action__NestedMessage_Goal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} test_msgs__action__NestedMessage_Goal_Response;

/// Struct for an array of messages
typedef struct test_msgs__action__NestedMessage_Goal_Response__Sequence
{
  test_msgs__action__NestedMessage_Goal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_Goal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__RESPONSE__STRUCT_H_
