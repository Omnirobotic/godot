// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__STRUCT_HPP_
#define SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__STRUCT_HPP_

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
#include "scene_manager_interface/msg/document_info.hpp"  // added_object_document_info

#ifndef _WIN32
# define DEPRECATED_scene_manager_interface_msg_ObjectsUpdate __attribute__((deprecated))
#else
# define DEPRECATED_scene_manager_interface_msg_ObjectsUpdate __declspec(deprecated)
#endif

namespace scene_manager_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectsUpdate_
{
  using Type = ObjectsUpdate_<ContainerAllocator>;

  explicit ObjectsUpdate_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : added_object_document_info(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->added_object_name = "";
      this->added_object_parent_name = "";
      this->removed_object_name = "";
      this->removed_object_parent_name = "";
    }
  }

  explicit ObjectsUpdate_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : added_object_name(_alloc),
    added_object_parent_name(_alloc),
    added_object_document_info(_alloc, _init),
    removed_object_name(_alloc),
    removed_object_parent_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->added_object_name = "";
      this->added_object_parent_name = "";
      this->removed_object_name = "";
      this->removed_object_parent_name = "";
    }
  }

  // field types and members
  using _added_object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _added_object_name_type added_object_name;
  using _added_object_parent_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _added_object_parent_name_type added_object_parent_name;
  using _added_object_document_info_type =
    scene_manager_interface::msg::DocumentInfo_<ContainerAllocator>;
  _added_object_document_info_type added_object_document_info;
  using _removed_object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _removed_object_name_type removed_object_name;
  using _removed_object_parent_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _removed_object_parent_name_type removed_object_parent_name;

  // setters for named parameter idiom
  Type * set__added_object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->added_object_name = _arg;
    return this;
  }
  Type * set__added_object_parent_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->added_object_parent_name = _arg;
    return this;
  }
  Type * set__added_object_document_info(
    const scene_manager_interface::msg::DocumentInfo_<ContainerAllocator> & _arg)
  {
    this->added_object_document_info = _arg;
    return this;
  }
  Type * set__removed_object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->removed_object_name = _arg;
    return this;
  }
  Type * set__removed_object_parent_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->removed_object_parent_name = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_scene_manager_interface_msg_ObjectsUpdate
    std::shared_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_scene_manager_interface_msg_ObjectsUpdate
    std::shared_ptr<scene_manager_interface::msg::ObjectsUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectsUpdate_ & other) const
  {
    if (this->added_object_name != other.added_object_name) {
      return false;
    }
    if (this->added_object_parent_name != other.added_object_parent_name) {
      return false;
    }
    if (this->added_object_document_info != other.added_object_document_info) {
      return false;
    }
    if (this->removed_object_name != other.removed_object_name) {
      return false;
    }
    if (this->removed_object_parent_name != other.removed_object_parent_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectsUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectsUpdate_

// alias to use template instance with default allocator
using ObjectsUpdate =
  scene_manager_interface::msg::ObjectsUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scene_manager_interface

#endif  // SCENE_MANAGER_INTERFACE__MSG__OBJECTS_UPDATE__STRUCT_HPP_
