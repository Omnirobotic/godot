// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__UUID__STRUCT_H_
#define UNIQUE_IDENTIFIER_MSGS__MSG__UUID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message unique_identifier_msgs/UUID
typedef struct unique_identifier_msgs__msg__UUID
{
  uint8_t uuid[16];
} unique_identifier_msgs__msg__UUID;

/// Struct for an array of messages
typedef struct unique_identifier_msgs__msg__UUID__Sequence
{
  unique_identifier_msgs__msg__UUID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unique_identifier_msgs__msg__UUID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__UUID__STRUCT_H_
