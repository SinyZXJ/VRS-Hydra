// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:msg/VLCFrameMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_frame_msg.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'descriptors_mat'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'versors'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'submap_from_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__msg__VLCFrameMsg __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__msg__VLCFrameMsg __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VLCFrameMsg_
{
  using Type = VLCFrameMsg_<ContainerAllocator>;

  explicit VLCFrameMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : descriptors_mat(_init),
    versors(_init),
    submap_from_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->pose_id = 0ul;
      this->submap_id = 0ul;
    }
  }

  explicit VLCFrameMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : descriptors_mat(_alloc, _init),
    versors(_alloc, _init),
    submap_from_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->pose_id = 0ul;
      this->submap_id = 0ul;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _pose_id_type =
    uint32_t;
  _pose_id_type pose_id;
  using _submap_id_type =
    uint32_t;
  _submap_id_type submap_id;
  using _descriptors_mat_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _descriptors_mat_type descriptors_mat;
  using _versors_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _versors_type versors;
  using _depths_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _depths_type depths;
  using _submap_from_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _submap_from_pose_type submap_from_pose;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__pose_id(
    const uint32_t & _arg)
  {
    this->pose_id = _arg;
    return *this;
  }
  Type & set__submap_id(
    const uint32_t & _arg)
  {
    this->submap_id = _arg;
    return *this;
  }
  Type & set__descriptors_mat(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->descriptors_mat = _arg;
    return *this;
  }
  Type & set__versors(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->versors = _arg;
    return *this;
  }
  Type & set__depths(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->depths = _arg;
    return *this;
  }
  Type & set__submap_from_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->submap_from_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__msg__VLCFrameMsg
    std::shared_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__msg__VLCFrameMsg
    std::shared_ptr<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VLCFrameMsg_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->pose_id != other.pose_id) {
      return false;
    }
    if (this->submap_id != other.submap_id) {
      return false;
    }
    if (this->descriptors_mat != other.descriptors_mat) {
      return false;
    }
    if (this->versors != other.versors) {
      return false;
    }
    if (this->depths != other.depths) {
      return false;
    }
    if (this->submap_from_pose != other.submap_from_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const VLCFrameMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VLCFrameMsg_

// alias to use template instance with default allocator
using VLCFrameMsg =
  pose_graph_tools_msgs::msg::VLCFrameMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__STRUCT_HPP_
