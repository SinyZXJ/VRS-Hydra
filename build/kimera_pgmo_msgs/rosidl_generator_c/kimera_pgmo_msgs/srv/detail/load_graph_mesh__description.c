// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice

#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kimera_pgmo_msgs
const rosidl_type_hash_t *
kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xe6, 0xd9, 0x6d, 0xc1, 0x31, 0x9e, 0xd9,
      0x81, 0x0f, 0xe0, 0x6b, 0x84, 0x4b, 0x64, 0xac,
      0xaf, 0x7f, 0x7d, 0xfd, 0x53, 0xbd, 0xaa, 0x5f,
      0x43, 0xb2, 0x9b, 0x39, 0x0f, 0x8f, 0x42, 0xe7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_kimera_pgmo_msgs
const rosidl_type_hash_t *
kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x01, 0x33, 0xb2, 0xfc, 0x21, 0xe5, 0x29,
      0xf6, 0x77, 0x6d, 0xc5, 0xfc, 0x8b, 0xe8, 0xc9,
      0xca, 0x27, 0x77, 0xe6, 0x08, 0x54, 0x02, 0xcc,
      0x60, 0xb7, 0x49, 0xa4, 0xb8, 0xfa, 0x99, 0xec,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_kimera_pgmo_msgs
const rosidl_type_hash_t *
kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x4b, 0xce, 0x72, 0x4a, 0x71, 0x8d, 0xf7,
      0x11, 0xf5, 0xf0, 0x61, 0x4b, 0x08, 0x76, 0xd4,
      0x61, 0x3f, 0xbc, 0xb7, 0x3c, 0x94, 0xca, 0x9b,
      0x45, 0x4f, 0x90, 0xb6, 0x0c, 0x4a, 0x12, 0xaa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_kimera_pgmo_msgs
const rosidl_type_hash_t *
kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x60, 0x95, 0x51, 0x67, 0x76, 0xc9, 0x65,
      0x1d, 0xbd, 0xc7, 0x62, 0x98, 0x77, 0xad, 0xe3,
      0xa7, 0x94, 0xfd, 0x79, 0x6e, 0x5d, 0x84, 0x32,
      0x07, 0x85, 0x72, 0xe9, 0x49, 0x52, 0xb4, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char kimera_pgmo_msgs__srv__LoadGraphMesh__TYPE_NAME[] = "kimera_pgmo_msgs/srv/LoadGraphMesh";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Event__TYPE_NAME[] = "kimera_pgmo_msgs/srv/LoadGraphMesh_Event";
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Request__TYPE_NAME[] = "kimera_pgmo_msgs/srv/LoadGraphMesh_Request";
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Response__TYPE_NAME[] = "kimera_pgmo_msgs/srv/LoadGraphMesh_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char kimera_pgmo_msgs__srv__LoadGraphMesh__FIELD_NAME__request_message[] = "request_message";
static char kimera_pgmo_msgs__srv__LoadGraphMesh__FIELD_NAME__response_message[] = "response_message";
static char kimera_pgmo_msgs__srv__LoadGraphMesh__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field kimera_pgmo_msgs__srv__LoadGraphMesh__FIELDS[] = {
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kimera_pgmo_msgs__srv__LoadGraphMesh__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kimera_pgmo_msgs__srv__LoadGraphMesh__TYPE_NAME, 34, 34},
      {kimera_pgmo_msgs__srv__LoadGraphMesh__FIELDS, 3, 3},
    },
    {kimera_pgmo_msgs__srv__LoadGraphMesh__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELD_NAME__robot_id[] = "robot_id";
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELD_NAME__dgrf_file[] = "dgrf_file";
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELD_NAME__ply_file[] = "ply_file";

static rosidl_runtime_c__type_description__Field kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELDS[] = {
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELD_NAME__dgrf_file, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELD_NAME__ply_file, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__TYPE_NAME, 42, 42},
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field kimera_pgmo_msgs__srv__LoadGraphMesh_Response__FIELDS[] = {
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__TYPE_NAME, 43, 43},
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELD_NAME__info[] = "info";
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELD_NAME__request[] = "request";
static char kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELDS[] = {
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kimera_pgmo_msgs__srv__LoadGraphMesh_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__TYPE_NAME, 40, 40},
      {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__FIELDS, 3, 3},
    },
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 robot_id\n"
  "string dgrf_file\n"
  "string ply_file\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kimera_pgmo_msgs__srv__LoadGraphMesh__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kimera_pgmo_msgs__srv__LoadGraphMesh__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 66, 66},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kimera_pgmo_msgs__srv__LoadGraphMesh_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kimera_pgmo_msgs__srv__LoadGraphMesh__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_individual_type_description_source(NULL);
    sources[3] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_individual_type_description_source(NULL);
    sources[4] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_individual_type_description_source(NULL);
    sources[3] = *kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
