// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "scene_manager_interface/srv/get_state__struct.hpp"

#ifndef SCENE_MANAGER_INTERFACE__SRV__GET_STATE__TRAITS_HPP_
#define SCENE_MANAGER_INTERFACE__SRV__GET_STATE__TRAITS_HPP_

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
struct has_fixed_size<scene_manager_interface::srv::GetState>
  : std::integral_constant<
    bool,
    has_fixed_size<scene_manager_interface::srv::GetState_Request>::value &&
    has_fixed_size<scene_manager_interface::srv::GetState_Response>::value
  >
{
};

template<>
struct has_bounded_size<scene_manager_interface::srv::GetState>
  : std::integral_constant<
    bool,
    has_bounded_size<scene_manager_interface::srv::GetState_Request>::value &&
    has_bounded_size<scene_manager_interface::srv::GetState_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // SCENE_MANAGER_INTERFACE__SRV__GET_STATE__TRAITS_HPP_
