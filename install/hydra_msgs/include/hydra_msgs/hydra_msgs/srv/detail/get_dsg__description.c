// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hydra_msgs:srv/GetDsg.idl
// generated code does not contain a copyright notice

#include "hydra_msgs/srv/detail/get_dsg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__srv__GetDsg__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0x18, 0x0a, 0xcb, 0xba, 0x65, 0xee, 0xdd,
      0x5f, 0x8e, 0xcc, 0x81, 0xe6, 0x38, 0x35, 0x08,
      0x6a, 0x00, 0x1d, 0x31, 0x24, 0x62, 0x8d, 0x9c,
      0xa6, 0x41, 0xc9, 0xdb, 0x6c, 0xc5, 0x5c, 0x36,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__srv__GetDsg_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x5c, 0x1c, 0xa8, 0x51, 0x4c, 0x65, 0x83,
      0xd1, 0x48, 0x64, 0x3e, 0xd0, 0x39, 0x40, 0x0e,
      0xa9, 0xf7, 0x5d, 0xf0, 0xef, 0x9f, 0xe3, 0x2b,
      0x46, 0x21, 0x5e, 0x7f, 0x0e, 0x0a, 0x53, 0x4f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__srv__GetDsg_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xe2, 0x44, 0x0a, 0x5a, 0x1f, 0x9d, 0x60,
      0xab, 0x8d, 0x02, 0xc2, 0x4e, 0x83, 0x2f, 0x16,
      0x5c, 0x75, 0xd3, 0x2b, 0xd1, 0xdd, 0xee, 0x8d,
      0x51, 0x83, 0x2e, 0x29, 0xef, 0xde, 0xdb, 0x48,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__srv__GetDsg_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x4d, 0xc8, 0xdc, 0x4e, 0x9f, 0x3e, 0xf5,
      0x83, 0x10, 0x19, 0xf5, 0xab, 0xa2, 0x2b, 0x75,
      0xff, 0x09, 0x75, 0x43, 0xf7, 0xf4, 0xe7, 0xf1,
      0x54, 0x66, 0x0f, 0xf2, 0xaf, 0xdb, 0x6e, 0x02,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "hydra_msgs/msg/detail/dsg_update__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t hydra_msgs__msg__DsgUpdate__EXPECTED_HASH = {1, {
    0xc0, 0xaf, 0xbf, 0xb8, 0xc1, 0xb7, 0xc1, 0x6d,
    0xea, 0x79, 0xd2, 0x19, 0xa2, 0x59, 0xc9, 0x05,
    0x9a, 0x64, 0xcc, 0x2b, 0x9c, 0x70, 0x0f, 0xf7,
    0x1f, 0x5a, 0xfe, 0x6f, 0x8b, 0xf0, 0xc8, 0x2a,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char hydra_msgs__srv__GetDsg__TYPE_NAME[] = "hydra_msgs/srv/GetDsg";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hydra_msgs__msg__DsgUpdate__TYPE_NAME[] = "hydra_msgs/msg/DsgUpdate";
static char hydra_msgs__srv__GetDsg_Event__TYPE_NAME[] = "hydra_msgs/srv/GetDsg_Event";
static char hydra_msgs__srv__GetDsg_Request__TYPE_NAME[] = "hydra_msgs/srv/GetDsg_Request";
static char hydra_msgs__srv__GetDsg_Response__TYPE_NAME[] = "hydra_msgs/srv/GetDsg_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char hydra_msgs__srv__GetDsg__FIELD_NAME__request_message[] = "request_message";
static char hydra_msgs__srv__GetDsg__FIELD_NAME__response_message[] = "response_message";
static char hydra_msgs__srv__GetDsg__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field hydra_msgs__srv__GetDsg__FIELDS[] = {
  {
    {hydra_msgs__srv__GetDsg__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hydra_msgs__srv__GetDsg_Request__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hydra_msgs__srv__GetDsg_Response__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hydra_msgs__srv__GetDsg_Event__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hydra_msgs__srv__GetDsg__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__msg__DsgUpdate__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg_Event__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg_Request__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg_Response__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__srv__GetDsg__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hydra_msgs__srv__GetDsg__TYPE_NAME, 21, 21},
      {hydra_msgs__srv__GetDsg__FIELDS, 3, 3},
    },
    {hydra_msgs__srv__GetDsg__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&hydra_msgs__msg__DsgUpdate__EXPECTED_HASH, hydra_msgs__msg__DsgUpdate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = hydra_msgs__msg__DsgUpdate__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hydra_msgs__srv__GetDsg_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = hydra_msgs__srv__GetDsg_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = hydra_msgs__srv__GetDsg_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hydra_msgs__srv__GetDsg_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field hydra_msgs__srv__GetDsg_Request__FIELDS[] = {
  {
    {hydra_msgs__srv__GetDsg_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__srv__GetDsg_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hydra_msgs__srv__GetDsg_Request__TYPE_NAME, 29, 29},
      {hydra_msgs__srv__GetDsg_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hydra_msgs__srv__GetDsg_Response__FIELD_NAME__graph[] = "graph";

static rosidl_runtime_c__type_description__Field hydra_msgs__srv__GetDsg_Response__FIELDS[] = {
  {
    {hydra_msgs__srv__GetDsg_Response__FIELD_NAME__graph, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hydra_msgs__msg__DsgUpdate__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hydra_msgs__srv__GetDsg_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__msg__DsgUpdate__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__srv__GetDsg_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hydra_msgs__srv__GetDsg_Response__TYPE_NAME, 30, 30},
      {hydra_msgs__srv__GetDsg_Response__FIELDS, 1, 1},
    },
    {hydra_msgs__srv__GetDsg_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&hydra_msgs__msg__DsgUpdate__EXPECTED_HASH, hydra_msgs__msg__DsgUpdate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = hydra_msgs__msg__DsgUpdate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hydra_msgs__srv__GetDsg_Event__FIELD_NAME__info[] = "info";
static char hydra_msgs__srv__GetDsg_Event__FIELD_NAME__request[] = "request";
static char hydra_msgs__srv__GetDsg_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field hydra_msgs__srv__GetDsg_Event__FIELDS[] = {
  {
    {hydra_msgs__srv__GetDsg_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hydra_msgs__srv__GetDsg_Request__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hydra_msgs__srv__GetDsg_Response__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hydra_msgs__srv__GetDsg_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__msg__DsgUpdate__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg_Request__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__srv__GetDsg_Response__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__srv__GetDsg_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hydra_msgs__srv__GetDsg_Event__TYPE_NAME, 27, 27},
      {hydra_msgs__srv__GetDsg_Event__FIELDS, 3, 3},
    },
    {hydra_msgs__srv__GetDsg_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&hydra_msgs__msg__DsgUpdate__EXPECTED_HASH, hydra_msgs__msg__DsgUpdate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = hydra_msgs__msg__DsgUpdate__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hydra_msgs__srv__GetDsg_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = hydra_msgs__srv__GetDsg_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "hydra_msgs/DsgUpdate graph";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__srv__GetDsg__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hydra_msgs__srv__GetDsg__TYPE_NAME, 21, 21},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__srv__GetDsg_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hydra_msgs__srv__GetDsg_Request__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__srv__GetDsg_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hydra_msgs__srv__GetDsg_Response__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__srv__GetDsg_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hydra_msgs__srv__GetDsg_Event__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__srv__GetDsg__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hydra_msgs__srv__GetDsg__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hydra_msgs__msg__DsgUpdate__get_individual_type_description_source(NULL);
    sources[3] = *hydra_msgs__srv__GetDsg_Event__get_individual_type_description_source(NULL);
    sources[4] = *hydra_msgs__srv__GetDsg_Request__get_individual_type_description_source(NULL);
    sources[5] = *hydra_msgs__srv__GetDsg_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__srv__GetDsg_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hydra_msgs__srv__GetDsg_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__srv__GetDsg_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hydra_msgs__srv__GetDsg_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hydra_msgs__msg__DsgUpdate__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__srv__GetDsg_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hydra_msgs__srv__GetDsg_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hydra_msgs__msg__DsgUpdate__get_individual_type_description_source(NULL);
    sources[3] = *hydra_msgs__srv__GetDsg_Request__get_individual_type_description_source(NULL);
    sources[4] = *hydra_msgs__srv__GetDsg_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
