// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__REQUEST__TRAITS_HPP_
#define TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
inline const char * data_type();

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "test_msgs/action/nested_message__goal__request__struct.hpp"


template<>
struct has_fixed_size<test_msgs::action::NestedMessage_Goal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<test_msgs::msg::Builtins>::value && has_fixed_size<test_msgs::msg::Primitives>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<test_msgs::action::NestedMessage_Goal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<test_msgs::msg::Builtins>::value && has_bounded_size<test_msgs::msg::Primitives>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
inline const char * data_type<test_msgs::action::NestedMessage_Goal_Request>()
{
  return "test_msgs::action::NestedMessage_Goal_Request";
}

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__ACTION__NESTED_MESSAGE__GOAL__REQUEST__TRAITS_HPP_