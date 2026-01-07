// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from config_utilities_msgs:srv/SetConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "config_utilities_msgs/srv/detail/set_config__rosidl_typesupport_introspection_c.h"
#include "config_utilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "config_utilities_msgs/srv/detail/set_config__functions.h"
#include "config_utilities_msgs/srv/detail/set_config__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  config_utilities_msgs__srv__SetConfig_Request__init(message_memory);
}

void config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_fini_function(void * message_memory)
{
  config_utilities_msgs__srv__SetConfig_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(config_utilities_msgs__srv__SetConfig_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_members = {
  "config_utilities_msgs__srv",  // message namespace
  "SetConfig_Request",  // message name
  1,  // number of fields
  sizeof(config_utilities_msgs__srv__SetConfig_Request),
  false,  // has_any_key_member_
  config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_member_array,  // message members
  config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_type_support_handle = {
  0,
  &config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_members,
  get_message_typesupport_handle_function,
  &config_utilities_msgs__srv__SetConfig_Request__get_type_hash,
  &config_utilities_msgs__srv__SetConfig_Request__get_type_description,
  &config_utilities_msgs__srv__SetConfig_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_config_utilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Request)() {
  if (!config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_type_support_handle.typesupport_identifier) {
    config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "config_utilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__functions.h"
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__struct.h"


// Include directives for member types
// Member `data`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  config_utilities_msgs__srv__SetConfig_Response__init(message_memory);
}

void config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_fini_function(void * message_memory)
{
  config_utilities_msgs__srv__SetConfig_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(config_utilities_msgs__srv__SetConfig_Response, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_members = {
  "config_utilities_msgs__srv",  // message namespace
  "SetConfig_Response",  // message name
  1,  // number of fields
  sizeof(config_utilities_msgs__srv__SetConfig_Response),
  false,  // has_any_key_member_
  config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_member_array,  // message members
  config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_type_support_handle = {
  0,
  &config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_members,
  get_message_typesupport_handle_function,
  &config_utilities_msgs__srv__SetConfig_Response__get_type_hash,
  &config_utilities_msgs__srv__SetConfig_Response__get_type_description,
  &config_utilities_msgs__srv__SetConfig_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_config_utilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Response)() {
  if (!config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_type_support_handle.typesupport_identifier) {
    config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "config_utilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__functions.h"
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "config_utilities_msgs/srv/set_config.h"
// Member `request`
// Member `response`
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  config_utilities_msgs__srv__SetConfig_Event__init(message_memory);
}

void config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_fini_function(void * message_memory)
{
  config_utilities_msgs__srv__SetConfig_Event__fini(message_memory);
}

size_t config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__size_function__SetConfig_Event__request(
  const void * untyped_member)
{
  const config_utilities_msgs__srv__SetConfig_Request__Sequence * member =
    (const config_utilities_msgs__srv__SetConfig_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetConfig_Event__request(
  const void * untyped_member, size_t index)
{
  const config_utilities_msgs__srv__SetConfig_Request__Sequence * member =
    (const config_utilities_msgs__srv__SetConfig_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_function__SetConfig_Event__request(
  void * untyped_member, size_t index)
{
  config_utilities_msgs__srv__SetConfig_Request__Sequence * member =
    (config_utilities_msgs__srv__SetConfig_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetConfig_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const config_utilities_msgs__srv__SetConfig_Request * item =
    ((const config_utilities_msgs__srv__SetConfig_Request *)
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetConfig_Event__request(untyped_member, index));
  config_utilities_msgs__srv__SetConfig_Request * value =
    (config_utilities_msgs__srv__SetConfig_Request *)(untyped_value);
  *value = *item;
}

void config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetConfig_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  config_utilities_msgs__srv__SetConfig_Request * item =
    ((config_utilities_msgs__srv__SetConfig_Request *)
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_function__SetConfig_Event__request(untyped_member, index));
  const config_utilities_msgs__srv__SetConfig_Request * value =
    (const config_utilities_msgs__srv__SetConfig_Request *)(untyped_value);
  *item = *value;
}

bool config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetConfig_Event__request(
  void * untyped_member, size_t size)
{
  config_utilities_msgs__srv__SetConfig_Request__Sequence * member =
    (config_utilities_msgs__srv__SetConfig_Request__Sequence *)(untyped_member);
  config_utilities_msgs__srv__SetConfig_Request__Sequence__fini(member);
  return config_utilities_msgs__srv__SetConfig_Request__Sequence__init(member, size);
}

size_t config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__size_function__SetConfig_Event__response(
  const void * untyped_member)
{
  const config_utilities_msgs__srv__SetConfig_Response__Sequence * member =
    (const config_utilities_msgs__srv__SetConfig_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetConfig_Event__response(
  const void * untyped_member, size_t index)
{
  const config_utilities_msgs__srv__SetConfig_Response__Sequence * member =
    (const config_utilities_msgs__srv__SetConfig_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_function__SetConfig_Event__response(
  void * untyped_member, size_t index)
{
  config_utilities_msgs__srv__SetConfig_Response__Sequence * member =
    (config_utilities_msgs__srv__SetConfig_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetConfig_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const config_utilities_msgs__srv__SetConfig_Response * item =
    ((const config_utilities_msgs__srv__SetConfig_Response *)
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetConfig_Event__response(untyped_member, index));
  config_utilities_msgs__srv__SetConfig_Response * value =
    (config_utilities_msgs__srv__SetConfig_Response *)(untyped_value);
  *value = *item;
}

void config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetConfig_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  config_utilities_msgs__srv__SetConfig_Response * item =
    ((config_utilities_msgs__srv__SetConfig_Response *)
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_function__SetConfig_Event__response(untyped_member, index));
  const config_utilities_msgs__srv__SetConfig_Response * value =
    (const config_utilities_msgs__srv__SetConfig_Response *)(untyped_value);
  *item = *value;
}

bool config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetConfig_Event__response(
  void * untyped_member, size_t size)
{
  config_utilities_msgs__srv__SetConfig_Response__Sequence * member =
    (config_utilities_msgs__srv__SetConfig_Response__Sequence *)(untyped_member);
  config_utilities_msgs__srv__SetConfig_Response__Sequence__fini(member);
  return config_utilities_msgs__srv__SetConfig_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(config_utilities_msgs__srv__SetConfig_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(config_utilities_msgs__srv__SetConfig_Event, request),  // bytes offset in struct
    NULL,  // default value
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__size_function__SetConfig_Event__request,  // size() function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetConfig_Event__request,  // get_const(index) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_function__SetConfig_Event__request,  // get(index) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetConfig_Event__request,  // fetch(index, &value) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetConfig_Event__request,  // assign(index, value) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetConfig_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(config_utilities_msgs__srv__SetConfig_Event, response),  // bytes offset in struct
    NULL,  // default value
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__size_function__SetConfig_Event__response,  // size() function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetConfig_Event__response,  // get_const(index) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__get_function__SetConfig_Event__response,  // get(index) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetConfig_Event__response,  // fetch(index, &value) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetConfig_Event__response,  // assign(index, value) function pointer
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetConfig_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_members = {
  "config_utilities_msgs__srv",  // message namespace
  "SetConfig_Event",  // message name
  3,  // number of fields
  sizeof(config_utilities_msgs__srv__SetConfig_Event),
  false,  // has_any_key_member_
  config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_member_array,  // message members
  config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_type_support_handle = {
  0,
  &config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_members,
  get_message_typesupport_handle_function,
  &config_utilities_msgs__srv__SetConfig_Event__get_type_hash,
  &config_utilities_msgs__srv__SetConfig_Event__get_type_description,
  &config_utilities_msgs__srv__SetConfig_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_config_utilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Event)() {
  config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Request)();
  config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Response)();
  if (!config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_type_support_handle.typesupport_identifier) {
    config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "config_utilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "config_utilities_msgs/srv/detail/set_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_service_members = {
  "config_utilities_msgs__srv",  // service namespace
  "SetConfig",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_Request_message_type_support_handle,
  NULL,  // response message
  // config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_Response_message_type_support_handle
  NULL  // event_message
  // config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_Response_message_type_support_handle
};


static rosidl_service_type_support_t config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_service_type_support_handle = {
  0,
  &config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_service_members,
  get_service_typesupport_handle_function,
  &config_utilities_msgs__srv__SetConfig_Request__rosidl_typesupport_introspection_c__SetConfig_Request_message_type_support_handle,
  &config_utilities_msgs__srv__SetConfig_Response__rosidl_typesupport_introspection_c__SetConfig_Response_message_type_support_handle,
  &config_utilities_msgs__srv__SetConfig_Event__rosidl_typesupport_introspection_c__SetConfig_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    config_utilities_msgs,
    srv,
    SetConfig
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    config_utilities_msgs,
    srv,
    SetConfig
  ),
  &config_utilities_msgs__srv__SetConfig__get_type_hash,
  &config_utilities_msgs__srv__SetConfig__get_type_description,
  &config_utilities_msgs__srv__SetConfig__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_config_utilities_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig)(void) {
  if (!config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_service_type_support_handle.typesupport_identifier) {
    config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, config_utilities_msgs, srv, SetConfig_Event)()->data;
  }

  return &config_utilities_msgs__srv__detail__set_config__rosidl_typesupport_introspection_c__SetConfig_service_type_support_handle;
}
