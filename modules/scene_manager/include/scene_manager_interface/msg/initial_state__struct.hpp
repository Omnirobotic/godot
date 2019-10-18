// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__INITIAL_STATE__STRUCT_HPP_
#define SCENE_MANAGER_INTERFACE__MSG__INITIAL_STATE__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "scene_manager_interface/msg/document_info.hpp"  // objects_document_info

#ifndef _WIN32
# define DEPRECATED_scene_manager_interface_msg_InitialState __attribute__((deprecated))
#else
# define DEPRECATED_scene_manager_interface_msg_InitialState __declspec(deprecated)
#endif

namespace scene_manager_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InitialState_
{
  using Type = InitialState_<ContainerAllocator>;

  explicit InitialState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit InitialState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _objects_name_type objects_name;
  using _objects_parent_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _objects_parent_name_type objects_parent_name;
  using _objects_document_info_type =
    std::vector<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>>::other>;
  _objects_document_info_type objects_document_info;

  // setters for named parameter idiom
  Type * set__objects_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->objects_name = _arg;
    return this;
  }
  Type * set__objects_parent_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->objects_parent_name = _arg;
    return this;
  }
  Type * set__objects_document_info(
    const std::vector<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_document_info = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scene_manager_interface::msg::InitialState_<ContainerAllocator> *;
  using ConstRawPtr =
    const scene_manager_interface::msg::InitialState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::InitialState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::InitialState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_scene_manager_interface_msg_InitialState
    std::shared_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_scene_manager_interface_msg_InitialState
    std::shared_ptr<scene_manager_interface::msg::InitialState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitialState_ & other) const
  {
    if (this->objects_name != other.objects_name) {
      return false;
    }
    if (this->objects_parent_name != other.objects_parent_name) {
      return false;
    }
    if (this->objects_document_info != other.objects_document_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitialState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitialState_

// alias to use template instance with default allocator
using InitialState =
  scene_manager_interface::msg::InitialState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scene_manager_interface

#endif  // SCENE_MANAGER_INTERFACE__MSG__INITIAL_STATE__STRUCT_HPP_