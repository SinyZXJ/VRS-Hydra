// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:srv/VLCFrameQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/vlc_frame_query.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/VLCFrameQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__VLCFrameQuery_Request
{
  uint32_t robot_id;
  rosidl_runtime_c__uint32__Sequence pose_ids;
} pose_graph_tools_msgs__srv__VLCFrameQuery_Request;

// Struct for a sequence of pose_graph_tools_msgs__srv__VLCFrameQuery_Request.
typedef struct pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence
{
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'frames'
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__struct.h"

/// Struct defined in srv/VLCFrameQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__VLCFrameQuery_Response
{
  pose_graph_tools_msgs__msg__VLCFrameMsg__Sequence frames;
} pose_graph_tools_msgs__srv__VLCFrameQuery_Response;

// Struct for a sequence of pose_graph_tools_msgs__srv__VLCFrameQuery_Response.
typedef struct pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence
{
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/VLCFrameQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__VLCFrameQuery_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pose_graph_tools_msgs__srv__VLCFrameQuery_Request__Sequence request;
  pose_graph_tools_msgs__srv__VLCFrameQuery_Response__Sequence response;
} pose_graph_tools_msgs__srv__VLCFrameQuery_Event;

// Struct for a sequence of pose_graph_tools_msgs__srv__VLCFrameQuery_Event.
typedef struct pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence
{
  pose_graph_tools_msgs__srv__VLCFrameQuery_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__VLCFrameQuery_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__STRUCT_H_
