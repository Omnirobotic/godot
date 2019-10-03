// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__TRAITS_HPP_

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

#include "geometry_msgs/msg/twist_with_covariance__struct.hpp"


template<>
struct has_fixed_size<geometry_msgs::msg::TwistWithCovariance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::TwistWithCovariance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
inline const char * data_type<geometry_msgs::msg::TwistWithCovariance>()
{
  return "geometry_msgs::msg::TwistWithCovariance";
}

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__TRAITS_HPP_
