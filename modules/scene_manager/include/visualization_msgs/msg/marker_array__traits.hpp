// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MARKER_ARRAY__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__MARKER_ARRAY__TRAITS_HPP_

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

#include "visualization_msgs/msg/marker_array__struct.hpp"


template<>
struct has_fixed_size<visualization_msgs::msg::MarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::MarkerArray>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<visualization_msgs::msg::MarkerArray>()
{
  return "visualization_msgs::msg::MarkerArray";
}

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__MARKER_ARRAY__TRAITS_HPP_
