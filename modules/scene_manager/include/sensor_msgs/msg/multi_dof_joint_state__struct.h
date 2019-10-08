// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__MULTI_DOF_JOINT_STATE__STRUCT_H_
#define SENSOR_MSGS__MSG__MULTI_DOF_JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// joint_names
#include "rosidl_generator_c/string.h"
// transforms
#include "geometry_msgs/msg/transform__struct.h"
// twist
#include "geometry_msgs/msg/twist__struct.h"
// wrench
#include "geometry_msgs/msg/wrench__struct.h"

/// Struct of message sensor_msgs/MultiDOFJointState
typedef struct sensor_msgs__msg__MultiDOFJointState
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String__Sequence joint_names;
  geometry_msgs__msg__Transform__Sequence transforms;
  geometry_msgs__msg__Twist__Sequence twist;
  geometry_msgs__msg__Wrench__Sequence wrench;
} sensor_msgs__msg__MultiDOFJointState;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__MultiDOFJointState__Sequence
{
  sensor_msgs__msg__MultiDOFJointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__MultiDOFJointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__MULTI_DOF_JOINT_STATE__STRUCT_H_
