// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#include "kimera_pgmo_msgs/msg/detail/mesh__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kimera_pgmo_msgs
const rosidl_type_hash_t *
kimera_pgmo_msgs__msg__Mesh__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x6f, 0xf2, 0x51, 0x58, 0x66, 0xa9, 0x50,
      0x8e, 0xf8, 0x6d, 0xb3, 0x01, 0xeb, 0xe1, 0x99,
      0xea, 0xc8, 0x6e, 0x5b, 0xb9, 0x91, 0x1c, 0x3b,
      0x33, 0x36, 0xb8, 0x0a, 0x34, 0xb5, 0x54, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "std_msgs/msg/detail/color_rgba__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t kimera_pgmo_msgs__msg__TriangleIndices__EXPECTED_HASH = {1, {
    0xe2, 0x02, 0x3f, 0xd1, 0xac, 0xe6, 0x25, 0xff,
    0x25, 0xe7, 0x0b, 0xf6, 0x02, 0xb7, 0x4c, 0xed,
    0x6a, 0x9a, 0xec, 0xc3, 0x3d, 0x47, 0x25, 0xe2,
    0x05, 0x3d, 0x1e, 0x9a, 0xb3, 0x42, 0x88, 0x3c,
  }};
static const rosidl_type_hash_t std_msgs__msg__ColorRGBA__EXPECTED_HASH = {1, {
    0x77, 0xa7, 0xa5, 0xb9, 0xae, 0x47, 0x73, 0x06,
    0x09, 0x76, 0x65, 0x10, 0x6e, 0x04, 0x13, 0xba,
    0x74, 0x44, 0x02, 0x45, 0xb1, 0xf3, 0xd0, 0xc6,
    0xd6, 0x40, 0x5f, 0xe5, 0xc7, 0x81, 0x3f, 0xe8,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char kimera_pgmo_msgs__msg__Mesh__TYPE_NAME[] = "kimera_pgmo_msgs/msg/Mesh";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char kimera_pgmo_msgs__msg__TriangleIndices__TYPE_NAME[] = "kimera_pgmo_msgs/msg/TriangleIndices";
static char std_msgs__msg__ColorRGBA__TYPE_NAME[] = "std_msgs/msg/ColorRGBA";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__header[] = "header";
static char kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__ns[] = "ns";
static char kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__triangles[] = "triangles";
static char kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertices[] = "vertices";
static char kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertex_stamps[] = "vertex_stamps";
static char kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertex_indices[] = "vertex_indices";
static char kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertex_colors[] = "vertex_colors";

static rosidl_runtime_c__type_description__Field kimera_pgmo_msgs__msg__Mesh__FIELDS[] = {
  {
    {kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__ns, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__triangles, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {kimera_pgmo_msgs__msg__TriangleIndices__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertices, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertex_stamps, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertex_indices, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__msg__Mesh__FIELD_NAME__vertex_colors, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {std_msgs__msg__ColorRGBA__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kimera_pgmo_msgs__msg__Mesh__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {kimera_pgmo_msgs__msg__TriangleIndices__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__ColorRGBA__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kimera_pgmo_msgs__msg__Mesh__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kimera_pgmo_msgs__msg__Mesh__TYPE_NAME, 25, 25},
      {kimera_pgmo_msgs__msg__Mesh__FIELDS, 7, 7},
    },
    {kimera_pgmo_msgs__msg__Mesh__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&kimera_pgmo_msgs__msg__TriangleIndices__EXPECTED_HASH, kimera_pgmo_msgs__msg__TriangleIndices__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = kimera_pgmo_msgs__msg__TriangleIndices__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__ColorRGBA__EXPECTED_HASH, std_msgs__msg__ColorRGBA__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__ColorRGBA__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message encodes Triangle mesh message\n"
  "\n"
  "std_msgs/Header header\n"
  "string ns # namespace of the mesh used to identify the corresponding robot and visual. Separating hierarchical namespaces with '/' is supported (e.g. robot0/mesh123)\n"
  "kimera_pgmo_msgs/TriangleIndices[] triangles # list of triangles; the index values refer to positions in vertices (and vertex_normals, if given)\n"
  "geometry_msgs/Point[] vertices # the actual vertices that make up the mesh\n"
  "builtin_interfaces/Time[] vertex_stamps # time stamps associated to each of the vertices\n"
  "int32[] vertex_indices # index of mesh graph vertex associated to each of the vertices\n"
  "std_msgs/ColorRGBA[] vertex_colors";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kimera_pgmo_msgs__msg__Mesh__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kimera_pgmo_msgs__msg__Mesh__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 666, 666},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kimera_pgmo_msgs__msg__Mesh__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kimera_pgmo_msgs__msg__Mesh__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *kimera_pgmo_msgs__msg__TriangleIndices__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__ColorRGBA__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
