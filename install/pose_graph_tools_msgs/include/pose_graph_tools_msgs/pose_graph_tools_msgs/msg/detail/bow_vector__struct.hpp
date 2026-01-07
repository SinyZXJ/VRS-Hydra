// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:msg/BowVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_vector.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__msg__BowVector __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__msg__BowVector __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BowVector_
{
  using Type = BowVector_<ContainerAllocator>;

  explicit BowVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BowVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _word_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _word_ids_type word_ids;
  using _word_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _word_values_type word_values;

  // setters for named parameter idiom
  Type & set__word_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->word_ids = _arg;
    return *this;
  }
  Type & set__word_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->word_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__msg__BowVector
    std::shared_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__msg__BowVector
    std::shared_ptr<pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BowVector_ & other) const
  {
    if (this->word_ids != other.word_ids) {
      return false;
    }
    if (this->word_values != other.word_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const BowVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BowVector_

// alias to use template instance with default allocator
using BowVector =
  pose_graph_tools_msgs::msg::BowVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__STRUCT_HPP_
