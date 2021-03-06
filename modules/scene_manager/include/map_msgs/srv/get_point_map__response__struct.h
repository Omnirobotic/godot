// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__GET_POINT_MAP__RESPONSE__STRUCT_H_
#define MAP_MSGS__SRV__GET_POINT_MAP__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// map
#include "sensor_msgs/msg/point_cloud2__struct.h"

/// Struct of message map_msgs/GetPointMap_Response
typedef struct map_msgs__srv__GetPointMap_Response
{
  sensor_msgs__msg__PointCloud2 map;
} map_msgs__srv__GetPointMap_Response;

/// Struct for an array of messages
typedef struct map_msgs__srv__GetPointMap_Response__Sequence
{
  map_msgs__srv__GetPointMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__GetPointMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__GET_POINT_MAP__RESPONSE__STRUCT_H_
