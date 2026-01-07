// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/srv/load_graph_mesh.hpp"


#ifndef KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__BUILDER_HPP_
#define KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kimera_pgmo_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadGraphMesh_Request_ply_file
{
public:
  explicit Init_LoadGraphMesh_Request_ply_file(::kimera_pgmo_msgs::srv::LoadGraphMesh_Request & msg)
  : msg_(msg)
  {}
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Request ply_file(::kimera_pgmo_msgs::srv::LoadGraphMesh_Request::_ply_file_type arg)
  {
    msg_.ply_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Request msg_;
};

class Init_LoadGraphMesh_Request_dgrf_file
{
public:
  explicit Init_LoadGraphMesh_Request_dgrf_file(::kimera_pgmo_msgs::srv::LoadGraphMesh_Request & msg)
  : msg_(msg)
  {}
  Init_LoadGraphMesh_Request_ply_file dgrf_file(::kimera_pgmo_msgs::srv::LoadGraphMesh_Request::_dgrf_file_type arg)
  {
    msg_.dgrf_file = std::move(arg);
    return Init_LoadGraphMesh_Request_ply_file(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Request msg_;
};

class Init_LoadGraphMesh_Request_robot_id
{
public:
  Init_LoadGraphMesh_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadGraphMesh_Request_dgrf_file robot_id(::kimera_pgmo_msgs::srv::LoadGraphMesh_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_LoadGraphMesh_Request_dgrf_file(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::srv::LoadGraphMesh_Request>()
{
  return kimera_pgmo_msgs::srv::builder::Init_LoadGraphMesh_Request_robot_id();
}

}  // namespace kimera_pgmo_msgs


namespace kimera_pgmo_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadGraphMesh_Response_success
{
public:
  Init_LoadGraphMesh_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Response success(::kimera_pgmo_msgs::srv::LoadGraphMesh_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::srv::LoadGraphMesh_Response>()
{
  return kimera_pgmo_msgs::srv::builder::Init_LoadGraphMesh_Response_success();
}

}  // namespace kimera_pgmo_msgs


namespace kimera_pgmo_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadGraphMesh_Event_response
{
public:
  explicit Init_LoadGraphMesh_Event_response(::kimera_pgmo_msgs::srv::LoadGraphMesh_Event & msg)
  : msg_(msg)
  {}
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Event response(::kimera_pgmo_msgs::srv::LoadGraphMesh_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Event msg_;
};

class Init_LoadGraphMesh_Event_request
{
public:
  explicit Init_LoadGraphMesh_Event_request(::kimera_pgmo_msgs::srv::LoadGraphMesh_Event & msg)
  : msg_(msg)
  {}
  Init_LoadGraphMesh_Event_response request(::kimera_pgmo_msgs::srv::LoadGraphMesh_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LoadGraphMesh_Event_response(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Event msg_;
};

class Init_LoadGraphMesh_Event_info
{
public:
  Init_LoadGraphMesh_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadGraphMesh_Event_request info(::kimera_pgmo_msgs::srv::LoadGraphMesh_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LoadGraphMesh_Event_request(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::LoadGraphMesh_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::srv::LoadGraphMesh_Event>()
{
  return kimera_pgmo_msgs::srv::builder::Init_LoadGraphMesh_Event_info();
}

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__BUILDER_HPP_
