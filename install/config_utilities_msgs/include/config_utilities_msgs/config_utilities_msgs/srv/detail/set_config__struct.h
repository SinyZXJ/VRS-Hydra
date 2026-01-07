// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from config_utilities_msgs:srv/SetConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "config_utilities_msgs/srv/set_config.h"


#ifndef CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__STRUCT_H_
#define CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetConfig in the package config_utilities_msgs.
typedef struct config_utilities_msgs__srv__SetConfig_Request
{
  rosidl_runtime_c__String data;
} config_utilities_msgs__srv__SetConfig_Request;

// Struct for a sequence of config_utilities_msgs__srv__SetConfig_Request.
typedef struct config_utilities_msgs__srv__SetConfig_Request__Sequence
{
  config_utilities_msgs__srv__SetConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} config_utilities_msgs__srv__SetConfig_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'data'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetConfig in the package config_utilities_msgs.
typedef struct config_utilities_msgs__srv__SetConfig_Response
{
  rosidl_runtime_c__String data;
} config_utilities_msgs__srv__SetConfig_Response;

// Struct for a sequence of config_utilities_msgs__srv__SetConfig_Response.
typedef struct config_utilities_msgs__srv__SetConfig_Response__Sequence
{
  config_utilities_msgs__srv__SetConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} config_utilities_msgs__srv__SetConfig_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  config_utilities_msgs__srv__SetConfig_Event__request__MAX_SIZE = 1
};
// response
enum
{
  config_utilities_msgs__srv__SetConfig_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetConfig in the package config_utilities_msgs.
typedef struct config_utilities_msgs__srv__SetConfig_Event
{
  service_msgs__msg__ServiceEventInfo info;
  config_utilities_msgs__srv__SetConfig_Request__Sequence request;
  config_utilities_msgs__srv__SetConfig_Response__Sequence response;
} config_utilities_msgs__srv__SetConfig_Event;

// Struct for a sequence of config_utilities_msgs__srv__SetConfig_Event.
typedef struct config_utilities_msgs__srv__SetConfig_Event__Sequence
{
  config_utilities_msgs__srv__SetConfig_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} config_utilities_msgs__srv__SetConfig_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__STRUCT_H_
