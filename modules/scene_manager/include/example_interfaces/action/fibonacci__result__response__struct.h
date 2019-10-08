// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__RESPONSE__STRUCT_H_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// sequence
#include "rosidl_generator_c/primitives_sequence.h"

/// Struct of message example_interfaces/Fibonacci_Result_Response
typedef struct example_interfaces__action__Fibonacci_Result_Response
{
  int8_t action_status;
  rosidl_generator_c__int32__Sequence sequence;
} example_interfaces__action__Fibonacci_Result_Response;

/// Struct for an array of messages
typedef struct example_interfaces__action__Fibonacci_Result_Response__Sequence
{
  example_interfaces__action__Fibonacci_Result_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_Result_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__RESULT__RESPONSE__STRUCT_H_
