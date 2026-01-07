# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pose_graph_tools_msgs:msg/PoseGraphEdge.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseGraphEdge(type):
    """Metaclass of message 'PoseGraphEdge'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': -1,
        'ODOM': 0,
        'LOOPCLOSE': 1,
        'LANDMARK': 2,
        'REJECTED_LOOPCLOSE': 3,
        'MESH': 4,
        'POSE_MESH': 5,
        'MESH_POSE': 6,
        'PRIOR': 7,
        'REJECTED_PRIOR': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pose_graph_tools_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pose_graph_tools_msgs.msg.PoseGraphEdge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_graph_edge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_graph_edge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_graph_edge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_graph_edge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_graph_edge

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'ODOM': cls.__constants['ODOM'],
            'LOOPCLOSE': cls.__constants['LOOPCLOSE'],
            'LANDMARK': cls.__constants['LANDMARK'],
            'REJECTED_LOOPCLOSE': cls.__constants['REJECTED_LOOPCLOSE'],
            'MESH': cls.__constants['MESH'],
            'POSE_MESH': cls.__constants['POSE_MESH'],
            'MESH_POSE': cls.__constants['MESH_POSE'],
            'PRIOR': cls.__constants['PRIOR'],
            'REJECTED_PRIOR': cls.__constants['REJECTED_PRIOR'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_PoseGraphEdge.__constants['UNKNOWN']

    @property
    def ODOM(self):
        """Message constant 'ODOM'."""
        return Metaclass_PoseGraphEdge.__constants['ODOM']

    @property
    def LOOPCLOSE(self):
        """Message constant 'LOOPCLOSE'."""
        return Metaclass_PoseGraphEdge.__constants['LOOPCLOSE']

    @property
    def LANDMARK(self):
        """Message constant 'LANDMARK'."""
        return Metaclass_PoseGraphEdge.__constants['LANDMARK']

    @property
    def REJECTED_LOOPCLOSE(self):
        """Message constant 'REJECTED_LOOPCLOSE'."""
        return Metaclass_PoseGraphEdge.__constants['REJECTED_LOOPCLOSE']

    @property
    def MESH(self):
        """Message constant 'MESH'."""
        return Metaclass_PoseGraphEdge.__constants['MESH']

    @property
    def POSE_MESH(self):
        """Message constant 'POSE_MESH'."""
        return Metaclass_PoseGraphEdge.__constants['POSE_MESH']

    @property
    def MESH_POSE(self):
        """Message constant 'MESH_POSE'."""
        return Metaclass_PoseGraphEdge.__constants['MESH_POSE']

    @property
    def PRIOR(self):
        """Message constant 'PRIOR'."""
        return Metaclass_PoseGraphEdge.__constants['PRIOR']

    @property
    def REJECTED_PRIOR(self):
        """Message constant 'REJECTED_PRIOR'."""
        return Metaclass_PoseGraphEdge.__constants['REJECTED_PRIOR']


class PoseGraphEdge(metaclass=Metaclass_PoseGraphEdge):
    """
    Message class 'PoseGraphEdge'.

    Constants:
      UNKNOWN
      ODOM
      LOOPCLOSE
      LANDMARK
      REJECTED_LOOPCLOSE
      MESH
      POSE_MESH
      MESH_POSE
      PRIOR
      REJECTED_PRIOR
    """

    __slots__ = [
        '_header',
        '_key_from',
        '_key_to',
        '_robot_from',
        '_robot_to',
        '_type',
        '_pose',
        '_covariance',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'key_from': 'uint64',
        'key_to': 'uint64',
        'robot_from': 'int32',
        'robot_to': 'int32',
        'type': 'int32',
        'pose': 'geometry_msgs/Pose',
        'covariance': 'double[36]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 36),  # noqa: E501
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
        self.key_from = kwargs.get('key_from', int())
        self.key_to = kwargs.get('key_to', int())
        self.robot_from = kwargs.get('robot_from', int())
        self.robot_to = kwargs.get('robot_to', int())
        self.type = kwargs.get('type', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        if 'covariance' not in kwargs:
            self.covariance = numpy.zeros(36, dtype=numpy.float64)
        else:
            self.covariance = kwargs.get('covariance')

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
        if self.key_from != other.key_from:
            return False
        if self.key_to != other.key_to:
            return False
        if self.robot_from != other.robot_from:
            return False
        if self.robot_to != other.robot_to:
            return False
        if self.type != other.type:
            return False
        if self.pose != other.pose:
            return False
        if any(self.covariance != other.covariance):
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
    def key_from(self):
        """Message field 'key_from'."""
        return self._key_from

    @key_from.setter
    def key_from(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'key_from' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'key_from' field must be an unsigned integer in [0, 18446744073709551615]"
        self._key_from = value

    @builtins.property
    def key_to(self):
        """Message field 'key_to'."""
        return self._key_to

    @key_to.setter
    def key_to(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'key_to' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'key_to' field must be an unsigned integer in [0, 18446744073709551615]"
        self._key_to = value

    @builtins.property
    def robot_from(self):
        """Message field 'robot_from'."""
        return self._robot_from

    @robot_from.setter
    def robot_from(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'robot_from' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_from' field must be an integer in [-2147483648, 2147483647]"
        self._robot_from = value

    @builtins.property
    def robot_to(self):
        """Message field 'robot_to'."""
        return self._robot_to

    @robot_to.setter
    def robot_to(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'robot_to' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_to' field must be an integer in [-2147483648, 2147483647]"
        self._robot_to = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 36, \
                    "The 'covariance' numpy.ndarray() must have a size of 36"
                self._covariance = value
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
                 len(value) == 36 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'covariance' field must be a set or sequence with length 36 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._covariance = numpy.array(value, dtype=numpy.float64)
