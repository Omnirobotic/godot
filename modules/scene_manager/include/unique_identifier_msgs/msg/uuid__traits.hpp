// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__UUID__TRAITS_HPP_
#define UNIQUE_IDENTIFIER_MSGS__MSG__UUID__TRAITS_HPP_

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

#include "unique_identifier_msgs/msg/uuid__struct.hpp"


template<>
struct has_fixed_size<unique_identifier_msgs::msg::UUID>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unique_identifier_msgs::msg::UUID>
  : std::integral_constant<bool, true> {};

template<>
inline const char * data_type<unique_identifier_msgs::msg::UUID>()
{
  return "unique_identifier_msgs::msg::UUID";
}

}  // namespace rosidl_generator_traits

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__UUID__TRAITS_HPP_
