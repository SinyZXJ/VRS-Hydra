# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kimera_pgmo_msgs:msg/Mesh.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'vertex_indices'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mesh(type):
    """Metaclass of message 'Mesh'."""

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
                'kimera_pgmo_msgs.msg.Mesh')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mesh
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mesh
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mesh
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mesh
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mesh

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

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


class Mesh(metaclass=Metaclass_Mesh):
    """Message class 'Mesh'."""

    __slots__ = [
        '_header',
        '_ns',
        '_triangles',
        '_vertices',
        '_vertex_stamps',
        '_vertex_indices',
        '_vertex_colors',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ns': 'string',
        'triangles': 'sequence<kimera_pgmo_msgs/TriangleIndices>',
        'vertices': 'sequence<geometry_msgs/Point>',
        'vertex_stamps': 'sequence<builtin_interfaces/Time>',
        'vertex_indices': 'sequence<int32>',
        'vertex_colors': 'sequence<std_msgs/ColorRGBA>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['kimera_pgmo_msgs', 'msg'], 'TriangleIndices')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA')),  # noqa: E501
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
        self.ns = kwargs.get('ns', str())
        self.triangles = kwargs.get('triangles', [])
        self.vertices = kwargs.get('vertices', [])
        self.vertex_stamps = kwargs.get('vertex_stamps', [])
        self.vertex_indices = array.array('i', kwargs.get('vertex_indices', []))
        self.vertex_colors = kwargs.get('vertex_colors', [])

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
        if self.ns != other.ns:
            return False
        if self.triangles != other.triangles:
            return False
        if self.vertices != other.vertices:
            return False
        if self.vertex_stamps != other.vertex_stamps:
            return False
        if self.vertex_indices != other.vertex_indices:
            return False
        if self.vertex_colors != other.vertex_colors:
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
    def ns(self):
        """Message field 'ns'."""
        return self._ns

    @ns.setter
    def ns(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'ns' field must be of type 'str'"
        self._ns = value

    @builtins.property
    def triangles(self):
        """Message field 'triangles'."""
        return self._triangles

    @triangles.setter
    def triangles(self, value):
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
                "The 'triangles' field must be a set or sequence and each value of type 'TriangleIndices'"
        self._triangles = value

    @builtins.property
    def vertices(self):
        """Message field 'vertices'."""
        return self._vertices

    @vertices.setter
    def vertices(self, value):
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
                "The 'vertices' field must be a set or sequence and each value of type 'Point'"
        self._vertices = value

    @builtins.property
    def vertex_stamps(self):
        """Message field 'vertex_stamps'."""
        return self._vertex_stamps

    @vertex_stamps.setter
    def vertex_stamps(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
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
                 all(isinstance(v, Time) for v in value) and
                 True), \
                "The 'vertex_stamps' field must be a set or sequence and each value of type 'Time'"
        self._vertex_stamps = value

    @builtins.property
    def vertex_indices(self):
        """Message field 'vertex_indices'."""
        return self._vertex_indices

    @vertex_indices.setter
    def vertex_indices(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'vertex_indices' array.array() must have the type code of 'i'"
                self._vertex_indices = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'vertex_indices' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._vertex_indices = array.array('i', value)

    @builtins.property
    def vertex_colors(self):
        """Message field 'vertex_colors'."""
        return self._vertex_colors

    @vertex_colors.setter
    def vertex_colors(self, value):
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
                "The 'vertex_colors' field must be a set or sequence and each value of type 'ColorRGBA'"
        self._vertex_colors = value
