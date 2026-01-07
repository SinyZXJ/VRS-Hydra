# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pose_graph_tools_msgs:srv/LcdFrameRegistration.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LcdFrameRegistration_Request(type):
    """Metaclass of message 'LcdFrameRegistration_Request'."""

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
                'pose_graph_tools_msgs.srv.LcdFrameRegistration_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__lcd_frame_registration__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__lcd_frame_registration__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__lcd_frame_registration__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__lcd_frame_registration__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__lcd_frame_registration__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LcdFrameRegistration_Request(metaclass=Metaclass_LcdFrameRegistration_Request):
    """Message class 'LcdFrameRegistration_Request'."""

    __slots__ = [
        '_query_robot',
        '_match_robot',
        '_query',
        '_match',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'query_robot': 'uint64',
        'match_robot': 'uint64',
        'query': 'uint64',
        'match': 'uint64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.query_robot = kwargs.get('query_robot', int())
        self.match_robot = kwargs.get('match_robot', int())
        self.query = kwargs.get('query', int())
        self.match = kwargs.get('match', int())

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
        if self.query_robot != other.query_robot:
            return False
        if self.match_robot != other.match_robot:
            return False
        if self.query != other.query:
            return False
        if self.match != other.match:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def query_robot(self):
        """Message field 'query_robot'."""
        return self._query_robot

    @query_robot.setter
    def query_robot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'query_robot' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'query_robot' field must be an unsigned integer in [0, 18446744073709551615]"
        self._query_robot = value

    @builtins.property
    def match_robot(self):
        """Message field 'match_robot'."""
        return self._match_robot

    @match_robot.setter
    def match_robot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'match_robot' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'match_robot' field must be an unsigned integer in [0, 18446744073709551615]"
        self._match_robot = value

    @builtins.property
    def query(self):
        """Message field 'query'."""
        return self._query

    @query.setter
    def query(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'query' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'query' field must be an unsigned integer in [0, 18446744073709551615]"
        self._query = value

    @builtins.property
    def match(self):
        """Message field 'match'."""
        return self._match

    @match.setter
    def match(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'match' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'match' field must be an unsigned integer in [0, 18446744073709551615]"
        self._match = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LcdFrameRegistration_Response(type):
    """Metaclass of message 'LcdFrameRegistration_Response'."""

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
                'pose_graph_tools_msgs.srv.LcdFrameRegistration_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__lcd_frame_registration__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__lcd_frame_registration__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__lcd_frame_registration__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__lcd_frame_registration__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__lcd_frame_registration__response

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LcdFrameRegistration_Response(metaclass=Metaclass_LcdFrameRegistration_Response):
    """Message class 'LcdFrameRegistration_Response'."""

    __slots__ = [
        '_valid',
        '_match_from_query',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'valid': 'boolean',
        'match_from_query': 'geometry_msgs/Pose',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
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
        self.valid = kwargs.get('valid', bool())
        from geometry_msgs.msg import Pose
        self.match_from_query = kwargs.get('match_from_query', Pose())

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
        if self.valid != other.valid:
            return False
        if self.match_from_query != other.match_from_query:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def match_from_query(self):
        """Message field 'match_from_query'."""
        return self._match_from_query

    @match_from_query.setter
    def match_from_query(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'match_from_query' field must be a sub message of type 'Pose'"
        self._match_from_query = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LcdFrameRegistration_Event(type):
    """Metaclass of message 'LcdFrameRegistration_Event'."""

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
                'pose_graph_tools_msgs.srv.LcdFrameRegistration_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__lcd_frame_registration__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__lcd_frame_registration__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__lcd_frame_registration__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__lcd_frame_registration__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__lcd_frame_registration__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LcdFrameRegistration_Event(metaclass=Metaclass_LcdFrameRegistration_Event):
    """Message class 'LcdFrameRegistration_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<pose_graph_tools_msgs/LcdFrameRegistration_Request, 1>',
        'response': 'sequence<pose_graph_tools_msgs/LcdFrameRegistration_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['pose_graph_tools_msgs', 'srv'], 'LcdFrameRegistration_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['pose_graph_tools_msgs', 'srv'], 'LcdFrameRegistration_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from pose_graph_tools_msgs.srv import LcdFrameRegistration_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, LcdFrameRegistration_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'LcdFrameRegistration_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from pose_graph_tools_msgs.srv import LcdFrameRegistration_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, LcdFrameRegistration_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'LcdFrameRegistration_Response'"
        self._response = value


class Metaclass_LcdFrameRegistration(type):
    """Metaclass of service 'LcdFrameRegistration'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pose_graph_tools_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pose_graph_tools_msgs.srv.LcdFrameRegistration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__lcd_frame_registration

            from pose_graph_tools_msgs.srv import _lcd_frame_registration
            if _lcd_frame_registration.Metaclass_LcdFrameRegistration_Request._TYPE_SUPPORT is None:
                _lcd_frame_registration.Metaclass_LcdFrameRegistration_Request.__import_type_support__()
            if _lcd_frame_registration.Metaclass_LcdFrameRegistration_Response._TYPE_SUPPORT is None:
                _lcd_frame_registration.Metaclass_LcdFrameRegistration_Response.__import_type_support__()
            if _lcd_frame_registration.Metaclass_LcdFrameRegistration_Event._TYPE_SUPPORT is None:
                _lcd_frame_registration.Metaclass_LcdFrameRegistration_Event.__import_type_support__()


class LcdFrameRegistration(metaclass=Metaclass_LcdFrameRegistration):
    from pose_graph_tools_msgs.srv._lcd_frame_registration import LcdFrameRegistration_Request as Request
    from pose_graph_tools_msgs.srv._lcd_frame_registration import LcdFrameRegistration_Response as Response
    from pose_graph_tools_msgs.srv._lcd_frame_registration import LcdFrameRegistration_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
