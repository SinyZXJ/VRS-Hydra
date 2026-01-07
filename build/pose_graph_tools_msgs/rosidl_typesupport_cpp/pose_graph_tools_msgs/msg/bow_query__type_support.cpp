// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pose_graph_tools_msgs/msg/detail/bow_query__functions.h"
#include "pose_graph_tools_msgs/msg/detail/bow_query__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pose_graph_tools_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _BowQuery_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BowQuery_type_support_ids_t;

static const _BowQuery_type_support_ids_t _BowQuery_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BowQuery_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BowQuery_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BowQuery_type_support_symbol_names_t _BowQuery_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pose_graph_tools_msgs, msg, BowQuery)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pose_graph_tools_msgs, msg, BowQuery)),
  }
};

typedef struct _BowQuery_type_support_data_t
{
  void * data[2];
} _BowQuery_type_support_data_t;

static _BowQuery_type_support_data_t _BowQuery_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BowQuery_message_typesupport_map = {
  2,
  "pose_graph_tools_msgs",
  &_BowQuery_message_typesupport_ids.typesupport_identifier[0],
  &_BowQuery_message_typesupport_symbol_names.symbol_name[0],
  &_BowQuery_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BowQuery_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BowQuery_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_hash,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_description,
  &pose_graph_tools_msgs__msg__BowQuery__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace pose_graph_tools_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pose_graph_tools_msgs::msg::BowQuery>()
{
  return &::pose_graph_tools_msgs::msg::rosidl_typesupport_cpp::BowQuery_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pose_graph_tools_msgs, msg, BowQuery)() {
  return get_message_type_support_handle<pose_graph_tools_msgs::msg::BowQuery>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
