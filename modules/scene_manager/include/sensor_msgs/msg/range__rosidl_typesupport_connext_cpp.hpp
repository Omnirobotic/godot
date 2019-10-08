// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__RANGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define SENSOR_MSGS__MSG__RANGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "sensor_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "sensor_msgs/msg/range__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "sensor_msgs/msg/dds_connext/Range_Support.h"
#include "sensor_msgs/msg/dds_connext/Range_Plugin.h"

#include "ndds/ndds_cpp.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;

namespace sensor_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Range();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_ros_message_to_dds(
  const sensor_msgs::msg::Range & ros_message,
  sensor_msgs::msg::dds_::Range_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_dds_message_to_ros(
  const sensor_msgs::msg::dds_::Range_ & dds_message,
  sensor_msgs::msg::Range & ros_message);

bool
to_cdr_stream__Range(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Range(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, sensor_msgs, msg, Range)();

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__RANGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
