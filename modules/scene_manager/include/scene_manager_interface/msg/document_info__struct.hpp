// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__DOCUMENT_INFO__STRUCT_HPP_
#define SCENE_MANAGER_INTERFACE__MSG__DOCUMENT_INFO__STRUCT_HPP_

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
# define DEPRECATED_scene_manager_interface_msg_DocumentInfo __attribute__((deprecated))
#else
# define DEPRECATED_scene_manager_interface_msg_DocumentInfo __declspec(deprecated)
#endif

namespace scene_manager_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DocumentInfo_
{
  using Type = DocumentInfo_<ContainerAllocator>;

  explicit DocumentInfo_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->store_key = "";
      this->type_name = "";
      this->format_name = "";
    }
  }

  explicit DocumentInfo_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : store_key(_alloc),
    type_name(_alloc),
    format_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->store_key = "";
      this->type_name = "";
      this->format_name = "";
    }
  }

  // field types and members
  using _store_key_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _store_key_type store_key;
  using _type_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_name_type type_name;
  using _format_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _format_name_type format_name;

  // setters for named parameter idiom
  Type * set__store_key(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->store_key = _arg;
    return this;
  }
  Type * set__type_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type_name = _arg;
    return this;
  }
  Type * set__format_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->format_name = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_scene_manager_interface_msg_DocumentInfo
    std::shared_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_scene_manager_interface_msg_DocumentInfo
    std::shared_ptr<scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DocumentInfo_ & other) const
  {
    if (this->store_key != other.store_key) {
      return false;
    }
    if (this->type_name != other.type_name) {
      return false;
    }
    if (this->format_name != other.format_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const DocumentInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DocumentInfo_

// alias to use template instance with default allocator
using DocumentInfo =
  scene_manager_interface::msg::DocumentInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scene_manager_interface

#endif  // SCENE_MANAGER_INTERFACE__MSG__DOCUMENT_INFO__STRUCT_HPP_
