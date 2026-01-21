// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from config_utilities_msgs:srv/SetConfig.idl
// generated code does not contain a copyright notice

#include "config_utilities_msgs/srv/detail/set_config__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_config_utilities_msgs
const rosidl_type_hash_t *
config_utilities_msgs__srv__SetConfig__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xbb, 0xe3, 0x98, 0x98, 0x6f, 0xe4, 0xcf,
      0xb6, 0x15, 0x35, 0x59, 0xd1, 0x2c, 0x84, 0xdf,
      0x14, 0xd0, 0xb7, 0x3f, 0x06, 0x1b, 0x88, 0x0d,
      0xdc, 0x48, 0x12, 0x01, 0x66, 0x71, 0x90, 0x4d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_config_utilities_msgs
const rosidl_type_hash_t *
config_utilities_msgs__srv__SetConfig_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0x2b, 0xb4, 0xa2, 0xe8, 0x44, 0x5c, 0xf3,
      0xcd, 0x78, 0xc7, 0x87, 0x3f, 0x18, 0x36, 0xbd,
      0xe1, 0x97, 0x5c, 0xea, 0x80, 0x15, 0xb8, 0xdb,
      0xb0, 0x35, 0xc9, 0xa0, 0xbe, 0x3d, 0x41, 0x0b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_config_utilities_msgs
const rosidl_type_hash_t *
config_utilities_msgs__srv__SetConfig_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x95, 0xca, 0x35, 0x1c, 0xc4, 0x5d, 0xb6,
      0xaa, 0x87, 0xf2, 0x6c, 0xcc, 0x2b, 0x1f, 0x6c,
      0xf9, 0xc7, 0xba, 0x55, 0x21, 0x87, 0xdb, 0x76,
      0x0e, 0x16, 0xc6, 0x77, 0x8e, 0xe6, 0xf3, 0x1a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_config_utilities_msgs
const rosidl_type_hash_t *
config_utilities_msgs__srv__SetConfig_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x33, 0x24, 0xec, 0xa8, 0x31, 0x9d, 0x8b,
      0xbf, 0xbd, 0x1b, 0x11, 0xf2, 0xa7, 0xbe, 0x6c,
      0x8e, 0x87, 0x99, 0xe5, 0x65, 0xd3, 0xa8, 0x06,
      0xe8, 0x63, 0x48, 0x63, 0xdf, 0x7c, 0x52, 0x74,
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

static char config_utilities_msgs__srv__SetConfig__TYPE_NAME[] = "config_utilities_msgs/srv/SetConfig";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char config_utilities_msgs__srv__SetConfig_Event__TYPE_NAME[] = "config_utilities_msgs/srv/SetConfig_Event";
static char config_utilities_msgs__srv__SetConfig_Request__TYPE_NAME[] = "config_utilities_msgs/srv/SetConfig_Request";
static char config_utilities_msgs__srv__SetConfig_Response__TYPE_NAME[] = "config_utilities_msgs/srv/SetConfig_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char config_utilities_msgs__srv__SetConfig__FIELD_NAME__request_message[] = "request_message";
static char config_utilities_msgs__srv__SetConfig__FIELD_NAME__response_message[] = "response_message";
static char config_utilities_msgs__srv__SetConfig__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field config_utilities_msgs__srv__SetConfig__FIELDS[] = {
  {
    {config_utilities_msgs__srv__SetConfig__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {config_utilities_msgs__srv__SetConfig_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {config_utilities_msgs__srv__SetConfig_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {config_utilities_msgs__srv__SetConfig_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription config_utilities_msgs__srv__SetConfig__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
config_utilities_msgs__srv__SetConfig__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {config_utilities_msgs__srv__SetConfig__TYPE_NAME, 35, 35},
      {config_utilities_msgs__srv__SetConfig__FIELDS, 3, 3},
    },
    {config_utilities_msgs__srv__SetConfig__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = config_utilities_msgs__srv__SetConfig_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = config_utilities_msgs__srv__SetConfig_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = config_utilities_msgs__srv__SetConfig_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char config_utilities_msgs__srv__SetConfig_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field config_utilities_msgs__srv__SetConfig_Request__FIELDS[] = {
  {
    {config_utilities_msgs__srv__SetConfig_Request__FIELD_NAME__data, 4, 4},
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
config_utilities_msgs__srv__SetConfig_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {config_utilities_msgs__srv__SetConfig_Request__TYPE_NAME, 43, 43},
      {config_utilities_msgs__srv__SetConfig_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char config_utilities_msgs__srv__SetConfig_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field config_utilities_msgs__srv__SetConfig_Response__FIELDS[] = {
  {
    {config_utilities_msgs__srv__SetConfig_Response__FIELD_NAME__data, 4, 4},
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
config_utilities_msgs__srv__SetConfig_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {config_utilities_msgs__srv__SetConfig_Response__TYPE_NAME, 44, 44},
      {config_utilities_msgs__srv__SetConfig_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char config_utilities_msgs__srv__SetConfig_Event__FIELD_NAME__info[] = "info";
static char config_utilities_msgs__srv__SetConfig_Event__FIELD_NAME__request[] = "request";
static char config_utilities_msgs__srv__SetConfig_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field config_utilities_msgs__srv__SetConfig_Event__FIELDS[] = {
  {
    {config_utilities_msgs__srv__SetConfig_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {config_utilities_msgs__srv__SetConfig_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {config_utilities_msgs__srv__SetConfig_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription config_utilities_msgs__srv__SetConfig_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {config_utilities_msgs__srv__SetConfig_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
config_utilities_msgs__srv__SetConfig_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {config_utilities_msgs__srv__SetConfig_Event__TYPE_NAME, 41, 41},
      {config_utilities_msgs__srv__SetConfig_Event__FIELDS, 3, 3},
    },
    {config_utilities_msgs__srv__SetConfig_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = config_utilities_msgs__srv__SetConfig_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = config_utilities_msgs__srv__SetConfig_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Requested data by the client as YAML string data.\n"
  "string data\n"
  "---\n"
  "# Response from the server as YAML string data. \n"
  "string data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
config_utilities_msgs__srv__SetConfig__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {config_utilities_msgs__srv__SetConfig__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 128, 128},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
config_utilities_msgs__srv__SetConfig_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {config_utilities_msgs__srv__SetConfig_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
config_utilities_msgs__srv__SetConfig_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {config_utilities_msgs__srv__SetConfig_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
config_utilities_msgs__srv__SetConfig_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {config_utilities_msgs__srv__SetConfig_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
config_utilities_msgs__srv__SetConfig__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *config_utilities_msgs__srv__SetConfig__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *config_utilities_msgs__srv__SetConfig_Event__get_individual_type_description_source(NULL);
    sources[3] = *config_utilities_msgs__srv__SetConfig_Request__get_individual_type_description_source(NULL);
    sources[4] = *config_utilities_msgs__srv__SetConfig_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
config_utilities_msgs__srv__SetConfig_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *config_utilities_msgs__srv__SetConfig_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
config_utilities_msgs__srv__SetConfig_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *config_utilities_msgs__srv__SetConfig_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
config_utilities_msgs__srv__SetConfig_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *config_utilities_msgs__srv__SetConfig_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *config_utilities_msgs__srv__SetConfig_Request__get_individual_type_description_source(NULL);
    sources[3] = *config_utilities_msgs__srv__SetConfig_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
