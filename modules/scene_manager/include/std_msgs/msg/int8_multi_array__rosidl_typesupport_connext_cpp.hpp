// generated from
// rosidl_typesupport_connext_cpp/resource/msg__rosidl_typesupport_connext_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__INT8_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define STD_MSGS__MSG__INT8_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "std_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

#include "std_msgs/msg/int8_multi_array__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#include "std_msgs/msg/dds_connext/Int8MultiArray_Support.h"
#include "std_msgs/msg/dds_connext/Int8MultiArray_Plugin.h"

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

namespace std_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Int8MultiArray();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_msgs
convert_ros_message_to_dds(
  const std_msgs::msg::Int8MultiArray & ros_message,
  std_msgs::msg::dds_::Int8MultiArray_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_msgs
convert_dds_message_to_ros(
  const std_msgs::msg::dds_::Int8MultiArray_ & dds_message,
  std_msgs::msg::Int8MultiArray & ros_message);

bool
to_cdr_stream__Int8MultiArray(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Int8MultiArray(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace std_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, std_msgs, msg, Int8MultiArray)();

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__INT8_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
