// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__IOS_UPDATE__STRUCT_HPP_
#define SCENE_MANAGER_INTERFACE__MSG__IOS_UPDATE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED_scene_manager_interface_msg_IosUpdate __attribute__((deprecated))
#else
# define DEPRECATED_scene_manager_interface_msg_IosUpdate __declspec(deprecated)
#endif

namespace scene_manager_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IosUpdate_
{
  using Type = IosUpdate_<ContainerAllocator>;

  explicit IosUpdate_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IosUpdate_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ios_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _ios_name_type ios_name;
  using _ios_value_type =
    std::vector<bool, typename ContainerAllocator::template rebind<bool>::other>;
  _ios_value_type ios_value;

  // setters for named parameter idiom
  Type * set__ios_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->ios_name = _arg;
    return this;
  }
  Type * set__ios_value(
    const std::vector<bool, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->ios_value = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scene_manager_interface::msg::IosUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const scene_manager_interface::msg::IosUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::IosUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::IosUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_scene_manager_interface_msg_IosUpdate
    std::shared_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_scene_manager_interface_msg_IosUpdate
    std::shared_ptr<scene_manager_interface::msg::IosUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IosUpdate_ & other) const
  {
    if (this->ios_name != other.ios_name) {
      return false;
    }
    if (this->ios_value != other.ios_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const IosUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IosUpdate_

// alias to use template instance with default allocator
using IosUpdate =
  scene_manager_interface::msg::IosUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scene_manager_interface

#endif  // SCENE_MANAGER_INTERFACE__MSG__IOS_UPDATE__STRUCT_HPP_
