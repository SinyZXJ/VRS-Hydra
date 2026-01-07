// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/srv/load_graph_mesh.hpp"


#ifndef KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__STRUCT_HPP_
#define KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Request __attribute__((deprecated))
#else
# define DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Request __declspec(deprecated)
#endif

namespace kimera_pgmo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadGraphMesh_Request_
{
  using Type = LoadGraphMesh_Request_<ContainerAllocator>;

  explicit LoadGraphMesh_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->dgrf_file = "";
      this->ply_file = "";
    }
  }

  explicit LoadGraphMesh_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dgrf_file(_alloc),
    ply_file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->dgrf_file = "";
      this->ply_file = "";
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _dgrf_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dgrf_file_type dgrf_file;
  using _ply_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ply_file_type ply_file;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__dgrf_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dgrf_file = _arg;
    return *this;
  }
  Type & set__ply_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ply_file = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Request
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Request
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadGraphMesh_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->dgrf_file != other.dgrf_file) {
      return false;
    }
    if (this->ply_file != other.ply_file) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadGraphMesh_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadGraphMesh_Request_

// alias to use template instance with default allocator
using LoadGraphMesh_Request =
  kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kimera_pgmo_msgs


#ifndef _WIN32
# define DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Response __attribute__((deprecated))
#else
# define DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Response __declspec(deprecated)
#endif

namespace kimera_pgmo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadGraphMesh_Response_
{
  using Type = LoadGraphMesh_Response_<ContainerAllocator>;

  explicit LoadGraphMesh_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit LoadGraphMesh_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Response
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Response
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadGraphMesh_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadGraphMesh_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadGraphMesh_Response_

// alias to use template instance with default allocator
using LoadGraphMesh_Response =
  kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kimera_pgmo_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Event __attribute__((deprecated))
#else
# define DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Event __declspec(deprecated)
#endif

namespace kimera_pgmo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadGraphMesh_Event_
{
  using Type = LoadGraphMesh_Event_<ContainerAllocator>;

  explicit LoadGraphMesh_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LoadGraphMesh_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::srv::LoadGraphMesh_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::srv::LoadGraphMesh_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Event
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kimera_pgmo_msgs__srv__LoadGraphMesh_Event
    std::shared_ptr<kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadGraphMesh_Event_ & other) const
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
  bool operator!=(const LoadGraphMesh_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadGraphMesh_Event_

// alias to use template instance with default allocator
using LoadGraphMesh_Event =
  kimera_pgmo_msgs::srv::LoadGraphMesh_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kimera_pgmo_msgs

namespace kimera_pgmo_msgs
{

namespace srv
{

struct LoadGraphMesh
{
  using Request = kimera_pgmo_msgs::srv::LoadGraphMesh_Request;
  using Response = kimera_pgmo_msgs::srv::LoadGraphMesh_Response;
  using Event = kimera_pgmo_msgs::srv::LoadGraphMesh_Event;
};

}  // namespace srv

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__STRUCT_HPP_
