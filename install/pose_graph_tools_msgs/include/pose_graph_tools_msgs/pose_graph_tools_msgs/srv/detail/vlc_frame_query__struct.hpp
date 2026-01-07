// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:srv/VLCFrameQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/vlc_frame_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Request __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Request __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VLCFrameQuery_Request_
{
  using Type = VLCFrameQuery_Request_<ContainerAllocator>;

  explicit VLCFrameQuery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  explicit VLCFrameQuery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _pose_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _pose_ids_type pose_ids;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__pose_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->pose_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Request
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Request
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VLCFrameQuery_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->pose_ids != other.pose_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const VLCFrameQuery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VLCFrameQuery_Request_

// alias to use template instance with default allocator
using VLCFrameQuery_Request =
  pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs


// Include directives for member types
// Member 'frames'
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Response __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Response __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VLCFrameQuery_Response_
{
  using Type = VLCFrameQuery_Response_<ContainerAllocator>;

  explicit VLCFrameQuery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VLCFrameQuery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _frames_type =
    std::vector<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>>>;
  _frames_type frames;

  // setters for named parameter idiom
  Type & set__frames(
    const std::vector<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::msg::VLCFrameMsg_<ContainerAllocator>>> & _arg)
  {
    this->frames = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Response
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Response
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VLCFrameQuery_Response_ & other) const
  {
    if (this->frames != other.frames) {
      return false;
    }
    return true;
  }
  bool operator!=(const VLCFrameQuery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VLCFrameQuery_Response_

// alias to use template instance with default allocator
using VLCFrameQuery_Response =
  pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Event __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Event __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VLCFrameQuery_Event_
{
  using Type = VLCFrameQuery_Event_<ContainerAllocator>;

  explicit VLCFrameQuery_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit VLCFrameQuery_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::VLCFrameQuery_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::VLCFrameQuery_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Event
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__VLCFrameQuery_Event
    std::shared_ptr<pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VLCFrameQuery_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const VLCFrameQuery_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VLCFrameQuery_Event_

// alias to use template instance with default allocator
using VLCFrameQuery_Event =
  pose_graph_tools_msgs::srv::VLCFrameQuery_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs

namespace pose_graph_tools_msgs
{

namespace srv
{

struct VLCFrameQuery
{
  using Request = pose_graph_tools_msgs::srv::VLCFrameQuery_Request;
  using Response = pose_graph_tools_msgs::srv::VLCFrameQuery_Response;
  using Event = pose_graph_tools_msgs::srv::VLCFrameQuery_Event;
};

}  // namespace srv

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__STRUCT_HPP_
