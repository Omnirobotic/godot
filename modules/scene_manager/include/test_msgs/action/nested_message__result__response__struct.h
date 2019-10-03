// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__NESTED_MESSAGE__RESULT__RESPONSE__STRUCT_H_
#define TEST_MSGS__ACTION__NESTED_MESSAGE__RESULT__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// nested_field_no_pkg
#include "test_msgs/msg/builtins__struct.h"
// nested_field
#include "test_msgs/msg/primitives__struct.h"
// nested_different_pkg
#include "builtin_interfaces/msg/time__struct.h"

/// Struct of message test_msgs/NestedMessage_Result_Response
typedef struct test_msgs__action__NestedMessage_Result_Response
{
  int8_t action_status;
  test_msgs__msg__Builtins nested_field_no_pkg;
  test_msgs__msg__Primitives nested_field;
  builtin_interfaces__msg__Time nested_different_pkg;
} test_msgs__action__NestedMessage_Result_Response;

/// Struct for an array of messages
typedef struct test_msgs__action__NestedMessage_Result_Response__Sequence
{
  test_msgs__action__NestedMessage_Result_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_Result_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__NESTED_MESSAGE__RESULT__RESPONSE__STRUCT_H_
