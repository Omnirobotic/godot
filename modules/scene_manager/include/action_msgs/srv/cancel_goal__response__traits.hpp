// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__TRAITS_HPP_
#define ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__TRAITS_HPP_

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

#include "action_msgs/srv/cancel_goal__response__struct.hpp"


template<>
struct has_fixed_size<action_msgs::srv::CancelGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_msgs::srv::CancelGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<action_msgs::srv::CancelGoal_Response>()
{
  return "action_msgs::srv::CancelGoal_Response";
}

}  // namespace rosidl_generator_traits

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__RESPONSE__TRAITS_HPP_
