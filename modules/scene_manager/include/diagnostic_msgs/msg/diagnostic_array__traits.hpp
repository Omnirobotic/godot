// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__TRAITS_HPP_

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

#include "diagnostic_msgs/msg/diagnostic_array__struct.hpp"


template<>
struct has_fixed_size<diagnostic_msgs::msg::DiagnosticArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::msg::DiagnosticArray>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<diagnostic_msgs::msg::DiagnosticArray>()
{
  return "diagnostic_msgs::msg::DiagnosticArray";
}

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__TRAITS_HPP_
