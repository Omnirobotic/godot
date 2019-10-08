// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__HEADER__TRAITS_HPP_
#define STD_MSGS__MSG__HEADER__TRAITS_HPP_

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

#include "std_msgs/msg/header__struct.hpp"


template<>
struct has_fixed_size<std_msgs::msg::Header>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::Header>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<std_msgs::msg::Header>()
{
  return "std_msgs::msg::Header";
}

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__HEADER__TRAITS_HPP_
