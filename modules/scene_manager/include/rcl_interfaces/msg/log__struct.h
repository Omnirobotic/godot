// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__LOG__STRUCT_H_
#define RCL_INTERFACES__MSG__LOG__STRUCT_H_

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
// name
// msg
// file
// function
#include "rosidl_generator_c/string.h"

// constants defined in the message
// DEBUG
enum
{
  rcl_interfaces__msg__Log__DEBUG = 10
};
// INFO
enum
{
  rcl_interfaces__msg__Log__INFO = 20
};
// WARN
enum
{
  rcl_interfaces__msg__Log__WARN = 30
};
// ERROR
enum
{
  rcl_interfaces__msg__Log__ERROR = 40
};
// FATAL
enum
{
  rcl_interfaces__msg__Log__FATAL = 50
};

/// Struct of message rcl_interfaces/Log
typedef struct rcl_interfaces__msg__Log
{
  builtin_interfaces__msg__Time stamp;
  uint8_t level;
  rosidl_generator_c__String name;
  rosidl_generator_c__String msg;
  rosidl_generator_c__String file;
  rosidl_generator_c__String function;
  uint32_t line;
} rcl_interfaces__msg__Log;

/// Struct for an array of messages
typedef struct rcl_interfaces__msg__Log__Sequence
{
  rcl_interfaces__msg__Log * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__Log__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__LOG__STRUCT_H_
