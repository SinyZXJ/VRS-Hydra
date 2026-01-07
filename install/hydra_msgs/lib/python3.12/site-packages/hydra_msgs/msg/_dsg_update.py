# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hydra_msgs:msg/DsgUpdate.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'layer_contents'
# Member 'deleted_nodes'
# Member 'deleted_edges'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DsgUpdate(type):
    """Metaclass of message 'DsgUpdate'."""

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
            module = import_type_support('hydra_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hydra_msgs.msg.DsgUpdate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dsg_update
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dsg_update
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dsg_update
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dsg_update
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dsg_update

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


class DsgUpdate(metaclass=Metaclass_DsgUpdate):
    """Message class 'DsgUpdate'."""

    __slots__ = [
        '_header',
        '_layer_contents',
        '_deleted_nodes',
        '_deleted_edges',
        '_full_update',
        '_sequence_number',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'layer_contents': 'sequence<uint8>',
        'deleted_nodes': 'sequence<uint64>',
        'deleted_edges': 'sequence<uint64>',
        'full_update': 'boolean',
        'sequence_number': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
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
        self.layer_contents = array.array('B', kwargs.get('layer_contents', []))
        self.deleted_nodes = array.array('Q', kwargs.get('deleted_nodes', []))
        self.deleted_edges = array.array('Q', kwargs.get('deleted_edges', []))
        self.full_update = kwargs.get('full_update', bool())
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
        if self.layer_contents != other.layer_contents:
            return False
        if self.deleted_nodes != other.deleted_nodes:
            return False
        if self.deleted_edges != other.deleted_edges:
            return False
        if self.full_update != other.full_update:
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
    def layer_contents(self):
        """Message field 'layer_contents'."""
        return self._layer_contents

    @layer_contents.setter
    def layer_contents(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'layer_contents' array.array() must have the type code of 'B'"
                self._layer_contents = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'layer_contents' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._layer_contents = array.array('B', value)

    @builtins.property
    def deleted_nodes(self):
        """Message field 'deleted_nodes'."""
        return self._deleted_nodes

    @deleted_nodes.setter
    def deleted_nodes(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'Q', \
                    "The 'deleted_nodes' array.array() must have the type code of 'Q'"
                self._deleted_nodes = value
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
                "The 'deleted_nodes' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._deleted_nodes = array.array('Q', value)

    @builtins.property
    def deleted_edges(self):
        """Message field 'deleted_edges'."""
        return self._deleted_edges

    @deleted_edges.setter
    def deleted_edges(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'Q', \
                    "The 'deleted_edges' array.array() must have the type code of 'Q'"
                self._deleted_edges = value
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
                "The 'deleted_edges' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._deleted_edges = array.array('Q', value)

    @builtins.property
    def full_update(self):
        """Message field 'full_update'."""
        return self._full_update

    @full_update.setter
    def full_update(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'full_update' field must be of type 'bool'"
        self._full_update = value

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
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sequence_number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sequence_number = value
