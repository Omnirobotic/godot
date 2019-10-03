// generated from
// rosidl_typesupport_fastrtps_cpp/resource/msg__rosidl_typesupport_fastrtps_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__FLOAT64_MULTI_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STD_MSGS__MSG__FLOAT64_MULTI_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "std_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#include "std_msgs/msg/float64_multi_array__struct.hpp"
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace std_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_std_msgs
cdr_serialize(
  const std_msgs::msg::Float64MultiArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_std_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs::msg::Float64MultiArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_std_msgs
get_serialized_size(
  const std_msgs::msg::Float64MultiArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_std_msgs
max_serialized_size_Float64MultiArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace std_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_std_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, std_msgs, msg, Float64MultiArray)();

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__FLOAT64_MULTI_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
