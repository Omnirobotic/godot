// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__FEEDBACK__TRAITS_HPP_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__FEEDBACK__TRAITS_HPP_

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

#include "example_interfaces/action/fibonacci__feedback__struct.hpp"


template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_Feedback>()
{
  return "example_interfaces::action::Fibonacci_Feedback";
}

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__FEEDBACK__TRAITS_HPP_
