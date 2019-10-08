// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__JOINT_STATE__TRAITS_HPP_
#define PENDULUM_MSGS__MSG__JOINT_STATE__TRAITS_HPP_

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

#include "pendulum_msgs/msg/joint_state__struct.hpp"


template<>
struct has_fixed_size<pendulum_msgs::msg::JointState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pendulum_msgs::msg::JointState>
  : std::integral_constant<bool, true> {};

template<>
inline const char * data_type<pendulum_msgs::msg::JointState>()
{
  return "pendulum_msgs::msg::JointState";
}

}  // namespace rosidl_generator_traits

#endif  // PENDULUM_MSGS__MSG__JOINT_STATE__TRAITS_HPP_
