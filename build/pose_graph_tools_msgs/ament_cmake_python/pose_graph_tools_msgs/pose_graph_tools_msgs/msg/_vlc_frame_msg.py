# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pose_graph_tools_msgs:msg/VLCFrameMsg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'depths'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VLCFrameMsg(type):
    """Metaclass of message 'VLCFrameMsg'."""

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
                'pose_graph_tools_msgs.msg.VLCFrameMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vlc_frame_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vlc_frame_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vlc_frame_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vlc_frame_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vlc_frame_msg

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VLCFrameMsg(metaclass=Metaclass_VLCFrameMsg):
    """Message class 'VLCFrameMsg'."""

    __slots__ = [
        '_robot_id',
        '_pose_id',
        '_submap_id',
        '_descriptors_mat',
        '_versors',
        '_depths',
        '_submap_from_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot_id': 'uint32',
        'pose_id': 'uint32',
        'submap_id': 'uint32',
        'descriptors_mat': 'sensor_msgs/Image',
        'versors': 'sensor_msgs/PointCloud2',
        'depths': 'sequence<float>',
        'submap_from_pose': 'geometry_msgs/Pose',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        self.robot_id = kwargs.get('robot_id', int())
        self.pose_id = kwargs.get('pose_id', int())
        self.submap_id = kwargs.get('submap_id', int())
        from sensor_msgs.msg import Image
        self.descriptors_mat = kwargs.get('descriptors_mat', Image())
        from sensor_msgs.msg import PointCloud2
        self.versors = kwargs.get('versors', PointCloud2())
        self.depths = array.array('f', kwargs.get('depths', []))
        from geometry_msgs.msg import Pose
        self.submap_from_pose = kwargs.get('submap_from_pose', Pose())

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
        if self.robot_id != other.robot_id:
            return False
        if self.pose_id != other.pose_id:
            return False
        if self.submap_id != other.submap_id:
            return False
        if self.descriptors_mat != other.descriptors_mat:
            return False
        if self.versors != other.versors:
            return False
        if self.depths != other.depths:
            return False
        if self.submap_from_pose != other.submap_from_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot_id = value

    @builtins.property
    def pose_id(self):
        """Message field 'pose_id'."""
        return self._pose_id

    @pose_id.setter
    def pose_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pose_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pose_id' field must be an unsigned integer in [0, 4294967295]"
        self._pose_id = value

    @builtins.property
    def submap_id(self):
        """Message field 'submap_id'."""
        return self._submap_id

    @submap_id.setter
    def submap_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'submap_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'submap_id' field must be an unsigned integer in [0, 4294967295]"
        self._submap_id = value

    @builtins.property
    def descriptors_mat(self):
        """Message field 'descriptors_mat'."""
        return self._descriptors_mat

    @descriptors_mat.setter
    def descriptors_mat(self, value):
        if self._check_fields:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'descriptors_mat' field must be a sub message of type 'Image'"
        self._descriptors_mat = value

    @builtins.property
    def versors(self):
        """Message field 'versors'."""
        return self._versors

    @versors.setter
    def versors(self, value):
        if self._check_fields:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'versors' field must be a sub message of type 'PointCloud2'"
        self._versors = value

    @builtins.property
    def depths(self):
        """Message field 'depths'."""
        return self._depths

    @depths.setter
    def depths(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'depths' array.array() must have the type code of 'f'"
                self._depths = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'depths' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._depths = array.array('f', value)

    @builtins.property
    def submap_from_pose(self):
        """Message field 'submap_from_pose'."""
        return self._submap_from_pose

    @submap_from_pose.setter
    def submap_from_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'submap_from_pose' field must be a sub message of type 'Pose'"
        self._submap_from_pose = value
