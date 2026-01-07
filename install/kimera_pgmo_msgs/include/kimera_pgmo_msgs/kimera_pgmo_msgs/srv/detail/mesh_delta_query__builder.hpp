// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kimera_pgmo_msgs:srv/MeshDeltaQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/srv/mesh_delta_query.hpp"


#ifndef KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__BUILDER_HPP_
#define KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kimera_pgmo_msgs
{

namespace srv
{

namespace builder
{

class Init_MeshDeltaQuery_Request_sequence_numbers
{
public:
  Init_MeshDeltaQuery_Request_sequence_numbers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Request sequence_numbers(::kimera_pgmo_msgs::srv::MeshDeltaQuery_Request::_sequence_numbers_type arg)
  {
    msg_.sequence_numbers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>()
{
  return kimera_pgmo_msgs::srv::builder::Init_MeshDeltaQuery_Request_sequence_numbers();
}

}  // namespace kimera_pgmo_msgs


namespace kimera_pgmo_msgs
{

namespace srv
{

namespace builder
{

class Init_MeshDeltaQuery_Response_deltas
{
public:
  Init_MeshDeltaQuery_Response_deltas()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Response deltas(::kimera_pgmo_msgs::srv::MeshDeltaQuery_Response::_deltas_type arg)
  {
    msg_.deltas = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>()
{
  return kimera_pgmo_msgs::srv::builder::Init_MeshDeltaQuery_Response_deltas();
}

}  // namespace kimera_pgmo_msgs


namespace kimera_pgmo_msgs
{

namespace srv
{

namespace builder
{

class Init_MeshDeltaQuery_Event_response
{
public:
  explicit Init_MeshDeltaQuery_Event_response(::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event & msg)
  : msg_(msg)
  {}
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event response(::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event msg_;
};

class Init_MeshDeltaQuery_Event_request
{
public:
  explicit Init_MeshDeltaQuery_Event_request(::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event & msg)
  : msg_(msg)
  {}
  Init_MeshDeltaQuery_Event_response request(::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MeshDeltaQuery_Event_response(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event msg_;
};

class Init_MeshDeltaQuery_Event_info
{
public:
  Init_MeshDeltaQuery_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeshDeltaQuery_Event_request info(::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MeshDeltaQuery_Event_request(msg_);
  }

private:
  ::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::srv::MeshDeltaQuery_Event>()
{
  return kimera_pgmo_msgs::srv::builder::Init_MeshDeltaQuery_Event_info();
}

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__BUILDER_HPP_
