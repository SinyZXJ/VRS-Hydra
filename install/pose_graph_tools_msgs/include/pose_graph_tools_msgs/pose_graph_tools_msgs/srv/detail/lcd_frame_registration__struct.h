// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:srv/LcdFrameRegistration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/lcd_frame_registration.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LcdFrameRegistration in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__LcdFrameRegistration_Request
{
  uint64_t query_robot;
  uint64_t match_robot;
  uint64_t query;
  uint64_t match;
} pose_graph_tools_msgs__srv__LcdFrameRegistration_Request;

// Struct for a sequence of pose_graph_tools_msgs__srv__LcdFrameRegistration_Request.
typedef struct pose_graph_tools_msgs__srv__LcdFrameRegistration_Request__Sequence
{
  pose_graph_tools_msgs__srv__LcdFrameRegistration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__LcdFrameRegistration_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'match_from_query'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/LcdFrameRegistration in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__LcdFrameRegistration_Response
{
  bool valid;
  geometry_msgs__msg__Pose match_from_query;
} pose_graph_tools_msgs__srv__LcdFrameRegistration_Response;

// Struct for a sequence of pose_graph_tools_msgs__srv__LcdFrameRegistration_Response.
typedef struct pose_graph_tools_msgs__srv__LcdFrameRegistration_Response__Sequence
{
  pose_graph_tools_msgs__srv__LcdFrameRegistration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__LcdFrameRegistration_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pose_graph_tools_msgs__srv__LcdFrameRegistration_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pose_graph_tools_msgs__srv__LcdFrameRegistration_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LcdFrameRegistration in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__LcdFrameRegistration_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pose_graph_tools_msgs__srv__LcdFrameRegistration_Request__Sequence request;
  pose_graph_tools_msgs__srv__LcdFrameRegistration_Response__Sequence response;
} pose_graph_tools_msgs__srv__LcdFrameRegistration_Event;

// Struct for a sequence of pose_graph_tools_msgs__srv__LcdFrameRegistration_Event.
typedef struct pose_graph_tools_msgs__srv__LcdFrameRegistration_Event__Sequence
{
  pose_graph_tools_msgs__srv__LcdFrameRegistration_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__LcdFrameRegistration_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__STRUCT_H_
