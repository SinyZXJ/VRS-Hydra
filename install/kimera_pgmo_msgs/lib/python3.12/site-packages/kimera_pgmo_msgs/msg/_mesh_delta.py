# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kimera_pgmo_msgs:msg/MeshDelta.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'stamp_updates'
# Member 'semantic_updates'
# Member 'deleted_indices'
# Member 'prev_indices'
# Member 'curr_indices'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MeshDelta(type):
    """Metaclass of message 'MeshDelta'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kimera_pgmo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kimera_pgmo_msgs.msg.MeshDelta')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mesh_delta
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mesh_delta
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mesh_delta
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mesh_delta
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mesh_delta

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from kimera_pgmo_msgs.msg import TriangleIndices
            if TriangleIndices.__class__._TYPE_SUPPORT is None:
                TriangleIndices.__class__.__import_type_support__()

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MeshDelta(metaclass=Metaclass_MeshDelta):
    """Message class 'MeshDelta'."""

    __slots__ = [
        '_header',
        '_vertex_updates',
        '_vertex_updates_colors',
        '_stamp_updates',
        '_semantic_updates',
        '_face_updates',
        '_face_archive_updates',
        '_deleted_indices',
        '_prev_indices',
        '_curr_indices',
        '_vertex_start',
        '_face_start',
        '_sequence_number',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vertex_updates': 'sequence<geometry_msgs/Point>',
        'vertex_updates_colors': 'sequence<std_msgs/ColorRGBA>',
        'stamp_updates': 'sequence<uint64>',
        'semantic_updates': 'sequence<uint32>',
        'face_updates': 'sequence<kimera_pgmo_msgs/TriangleIndices>',
        'face_archive_updates': 'sequence<kimera_pgmo_msgs/TriangleIndices>',
        'deleted_indices': 'sequence<uint64>',
        'prev_indices': 'sequence<uint64>',
        'curr_indices': 'sequence<uint64>',
        'vertex_start': 'uint64',
        'face_start': 'uint64',
        'sequence_number': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['kimera_pgmo_msgs', 'msg'], 'TriangleIndices')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['kimera_pgmo_msgs', 'msg'], 'TriangleIndices')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vertex_updates = kwargs.get('vertex_updates', [])
        self.vertex_updates_colors = kwargs.get('vertex_updates_colors', [])
        self.stamp_updates = array.array('Q', kwargs.get('stamp_updates', []))
        self.semantic_updates = array.array('I', kwargs.get('semantic_updates', []))
        self.face_updates = kwargs.get('face_updates', [])
        self.face_archive_updates = kwargs.get('face_archive_updates', [])
        self.deleted_indices = array.array('Q', kwargs.get('deleted_indices', []))
        self.prev_indices = array.array('Q', kwargs.get('prev_indices', []))
        self.curr_indices = array.array('Q', kwargs.get('curr_indices', []))
        self.vertex_start = kwargs.get('vertex_start', int())
        self.face_start = kwargs.get('face_start', int())
        self.sequence_number = kwargs.get('sequence_number', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.vertex_updates != other.vertex_updates:
            return False
        if self.vertex_updates_colors != other.vertex_updates_colors:
            return False
        if self.stamp_updates != other.stamp_updates:
            return False
        if self.semantic_updates != other.semantic_updates:
            return False
        if self.face_updates != other.face_updates:
            return False
        if self.face_archive_updates != other.face_archive_updates:
            return False
        if self.deleted_indices != other.deleted_indices:
            return False
        if self.prev_indices != other.prev_indices:
            return False
        if self.curr_indices != other.curr_indices:
            return False
        if self.vertex_start != other.vertex_start:
            return False
        if self.face_start != other.face_start:
            return False
        if self.sequence_number != other.sequence_number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def vertex_updates(self):
        """Message field 'vertex_updates'."""
        return self._vertex_updates

    @vertex_updates.setter
    def vertex_updates(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'vertex_updates' field must be a set or sequence and each value of type 'Point'"
        self._vertex_updates = value

    @builtins.property
    def vertex_updates_colors(self):
        """Message field 'vertex_updates_colors'."""
        return self._vertex_updates_colors

    @vertex_updates_colors.setter
    def vertex_updates_colors(self, value):
        if self._check_fields:
            from std_msgs.msg import ColorRGBA
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ColorRGBA) for v in value) and
                 True), \
                "The 'vertex_updates_colors' field must be a set or sequence and each value of type 'ColorRGBA'"
        self._vertex_updates_colors = value

    @builtins.property
    def stamp_updates(self):
        """Message field 'stamp_updates'."""
        return self._stamp_updates

    @stamp_updates.setter
    def stamp_updates(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'Q', \
                    "The 'stamp_updates' array.array() must have the type code of 'Q'"
                self._stamp_updates = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'stamp_updates' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._stamp_updates = array.array('Q', value)

    @builtins.property
    def semantic_updates(self):
        """Message field 'semantic_updates'."""
        return self._semantic_updates

    @semantic_updates.setter
    def semantic_updates(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'semantic_updates' array.array() must have the type code of 'I'"
                self._semantic_updates = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'semantic_updates' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._semantic_updates = array.array('I', value)

    @builtins.property
    def face_updates(self):
        """Message field 'face_updates'."""
        return self._face_updates

    @face_updates.setter
    def face_updates(self, value):
        if self._check_fields:
            from kimera_pgmo_msgs.msg import TriangleIndices
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TriangleIndices) for v in value) and
                 True), \
                "The 'face_updates' field must be a set or sequence and each value of type 'TriangleIndices'"
        self._face_updates = value

    @builtins.property
    def face_archive_updates(self):
        """Message field 'face_archive_updates'."""
        return self._face_archive_updates

    @face_archive_updates.setter
    def face_archive_updates(self, value):
        if self._check_fields:
            from kimera_pgmo_msgs.msg import TriangleIndices
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TriangleIndices) for v in value) and
                 True), \
                "The 'face_archive_updates' field must be a set or sequence and each value of type 'TriangleIndices'"
        self._face_archive_updates = value

    @builtins.property
    def deleted_indices(self):
        """Message field 'deleted_indices'."""
        return self._deleted_indices

    @deleted_indices.setter
    def deleted_indices(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'Q', \
                    "The 'deleted_indices' array.array() must have the type code of 'Q'"
                self._deleted_indices = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'deleted_indices' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._deleted_indices = array.array('Q', value)

    @builtins.property
    def prev_indices(self):
        """Message field 'prev_indices'."""
        return self._prev_indices

    @prev_indices.setter
    def prev_indices(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'Q', \
                    "The 'prev_indices' array.array() must have the type code of 'Q'"
                self._prev_indices = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'prev_indices' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._prev_indices = array.array('Q', value)

    @builtins.property
    def curr_indices(self):
        """Message field 'curr_indices'."""
        return self._curr_indices

    @curr_indices.setter
    def curr_indices(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'Q', \
                    "The 'curr_indices' array.array() must have the type code of 'Q'"
                self._curr_indices = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'curr_indices' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._curr_indices = array.array('Q', value)

    @builtins.property
    def vertex_start(self):
        """Message field 'vertex_start'."""
        return self._vertex_start

    @vertex_start.setter
    def vertex_start(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'vertex_start' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'vertex_start' field must be an unsigned integer in [0, 18446744073709551615]"
        self._vertex_start = value

    @builtins.property
    def face_start(self):
        """Message field 'face_start'."""
        return self._face_start

    @face_start.setter
    def face_start(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'face_start' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'face_start' field must be an unsigned integer in [0, 18446744073709551615]"
        self._face_start = value

    @builtins.property
    def sequence_number(self):
        """Message field 'sequence_number'."""
        return self._sequence_number

    @sequence_number.setter
    def sequence_number(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sequence_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sequence_number' field must be an unsigned integer in [0, 65535]"
        self._sequence_number = value
