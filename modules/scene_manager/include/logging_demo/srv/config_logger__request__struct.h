// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__REQUEST__STRUCT_H_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// logger_name
// level
#include "rosidl_generator_c/string.h"

/// Struct of message logging_demo/ConfigLogger_Request
typedef struct logging_demo__srv__ConfigLogger_Request
{
  rosidl_generator_c__String logger_name;
  rosidl_generator_c__String level;
} logging_demo__srv__ConfigLogger_Request;

/// Struct for an array of messages
typedef struct logging_demo__srv__ConfigLogger_Request__Sequence
{
  logging_demo__srv__ConfigLogger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} logging_demo__srv__ConfigLogger_Request__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__REQUEST__STRUCT_H_