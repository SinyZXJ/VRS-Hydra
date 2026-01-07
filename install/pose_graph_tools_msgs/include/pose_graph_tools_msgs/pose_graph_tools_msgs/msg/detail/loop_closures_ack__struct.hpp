// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/loop_closures_ack.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__msg__LoopClosuresAck __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__msg__LoopClosuresAck __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoopClosuresAck_
{
  using Type = LoopClosuresAck_<ContainerAllocator>;

  explicit LoopClosuresAck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publishing_robot_id = 0;
      this->destination_robot_id = 0;
    }
  }

  explicit LoopClosuresAck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publishing_robot_id = 0;
      this->destination_robot_id = 0;
    }
  }

  // field types and members
  using _publishing_robot_id_type =
    uint16_t;
  _publishing_robot_id_type publishing_robot_id;
  using _destination_robot_id_type =
    uint16_t;
  _destination_robot_id_type destination_robot_id;
  using _robot_src_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _robot_src_type robot_src;
  using _frame_src_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _frame_src_type frame_src;
  using _robot_dst_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _robot_dst_type robot_dst;
  using _frame_dst_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _frame_dst_type frame_dst;

  // setters for named parameter idiom
  Type & set__publishing_robot_id(
    const uint16_t & _arg)
  {
    this->publishing_robot_id = _arg;
    return *this;
  }
  Type & set__destination_robot_id(
    const uint16_t & _arg)
  {
    this->destination_robot_id = _arg;
    return *this;
  }
  Type & set__robot_src(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->robot_src = _arg;
    return *this;
  }
  Type & set__frame_src(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->frame_src = _arg;
    return *this;
  }
  Type & set__robot_dst(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->robot_dst = _arg;
    return *this;
  }
  Type & set__frame_dst(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->frame_dst = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__msg__LoopClosuresAck
    std::shared_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__msg__LoopClosuresAck
    std::shared_ptr<pose_graph_tools_msgs::msg::LoopClosuresAck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoopClosuresAck_ & other) const
  {
    if (this->publishing_robot_id != other.publishing_robot_id) {
      return false;
    }
    if (this->destination_robot_id != other.destination_robot_id) {
      return false;
    }
    if (this->robot_src != other.robot_src) {
      return false;
    }
    if (this->frame_src != other.frame_src) {
      return false;
    }
    if (this->robot_dst != other.robot_dst) {
      return false;
    }
    if (this->frame_dst != other.frame_dst) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoopClosuresAck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoopClosuresAck_

// alias to use template instance with default allocator
using LoopClosuresAck =
  pose_graph_tools_msgs::msg::LoopClosuresAck_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__STRUCT_HPP_
