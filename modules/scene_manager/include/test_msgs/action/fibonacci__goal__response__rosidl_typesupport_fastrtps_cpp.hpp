// generated from
// rosidl_typesupport_fastrtps_cpp/resource/msg__rosidl_typesupport_fastrtps_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__FIBONACCI__GOAL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TEST_MSGS__ACTION__FIBONACCI__GOAL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "test_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#include "test_msgs/action/fibonacci__goal__response__struct.hpp"
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

namespace test_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::Fibonacci_Goal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs::action::Fibonacci_Goal_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::Fibonacci_Goal_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
max_serialized_size_Fibonacci_Goal_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, action, Fibonacci_Goal_Response)();

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__FIBONACCI__GOAL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
