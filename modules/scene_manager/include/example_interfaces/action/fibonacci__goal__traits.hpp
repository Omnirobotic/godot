// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "example_interfaces/action/fibonacci__goal__struct.hpp"

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__TRAITS_HPP_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_Goal>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::action::Fibonacci_Goal_Request>::value &&
    has_fixed_size<example_interfaces::action::Fibonacci_Goal_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_Goal>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::action::Fibonacci_Goal_Request>::value &&
    has_bounded_size<example_interfaces::action::Fibonacci_Goal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__GOAL__TRAITS_HPP_
