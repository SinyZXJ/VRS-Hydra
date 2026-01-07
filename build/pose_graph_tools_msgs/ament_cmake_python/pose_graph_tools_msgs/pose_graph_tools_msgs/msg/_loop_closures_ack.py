# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'robot_src'
# Member 'frame_src'
# Member 'robot_dst'
# Member 'frame_dst'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoopClosuresAck(type):
    """Metaclass of message 'LoopClosuresAck'."""

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
            module = import_type_support('pose_graph_tools_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pose_graph_tools_msgs.msg.LoopClosuresAck')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__loop_closures_ack
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__loop_closures_ack
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__loop_closures_ack
            cls._TYPE_SUPPORT = module.type_support_msg__msg__loop_closures_ack
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__loop_closures_ack

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoopClosuresAck(metaclass=Metaclass_LoopClosuresAck):
    """Message class 'LoopClosuresAck'."""

    __slots__ = [
        '_publishing_robot_id',
        '_destination_robot_id',
        '_robot_src',
        '_frame_src',
        '_robot_dst',
        '_frame_dst',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'publishing_robot_id': 'uint16',
        'destination_robot_id': 'uint16',
        'robot_src': 'sequence<uint32>',
        'frame_src': 'sequence<uint32>',
        'robot_dst': 'sequence<uint32>',
        'frame_dst': 'sequence<uint32>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
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
        self.publishing_robot_id = kwargs.get('publishing_robot_id', int())
        self.destination_robot_id = kwargs.get('destination_robot_id', int())
        self.robot_src = array.array('I', kwargs.get('robot_src', []))
        self.frame_src = array.array('I', kwargs.get('frame_src', []))
        self.robot_dst = array.array('I', kwargs.get('robot_dst', []))
        self.frame_dst = array.array('I', kwargs.get('frame_dst', []))

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
        if self.publishing_robot_id != other.publishing_robot_id:
            return False
        if self.destination_robot_id != other.destination_robot_id:
            return False
        if self.robot_src != other.robot_src:
            return False
        if self.frame_src != other.frame_src:
            return False
        if self.robot_dst != other.robot_dst:
            return False
        if self.frame_dst != other.frame_dst:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def publishing_robot_id(self):
        """Message field 'publishing_robot_id'."""
        return self._publishing_robot_id

    @publishing_robot_id.setter
    def publishing_robot_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'publishing_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'publishing_robot_id' field must be an unsigned integer in [0, 65535]"
        self._publishing_robot_id = value

    @builtins.property
    def destination_robot_id(self):
        """Message field 'destination_robot_id'."""
        return self._destination_robot_id

    @destination_robot_id.setter
    def destination_robot_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'destination_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'destination_robot_id' field must be an unsigned integer in [0, 65535]"
        self._destination_robot_id = value

    @builtins.property
    def robot_src(self):
        """Message field 'robot_src'."""
        return self._robot_src

    @robot_src.setter
    def robot_src(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'robot_src' array.array() must have the type code of 'I'"
                self._robot_src = value
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
                "The 'robot_src' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._robot_src = array.array('I', value)

    @builtins.property
    def frame_src(self):
        """Message field 'frame_src'."""
        return self._frame_src

    @frame_src.setter
    def frame_src(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'frame_src' array.array() must have the type code of 'I'"
                self._frame_src = value
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
                "The 'frame_src' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._frame_src = array.array('I', value)

    @builtins.property
    def robot_dst(self):
        """Message field 'robot_dst'."""
        return self._robot_dst

    @robot_dst.setter
    def robot_dst(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'robot_dst' array.array() must have the type code of 'I'"
                self._robot_dst = value
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
                "The 'robot_dst' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._robot_dst = array.array('I', value)

    @builtins.property
    def frame_dst(self):
        """Message field 'frame_dst'."""
        return self._frame_dst

    @frame_dst.setter
    def frame_dst(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'frame_dst' array.array() must have the type code of 'I'"
                self._frame_dst = value
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
                "The 'frame_dst' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._frame_dst = array.array('I', value)
