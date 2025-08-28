# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtlebot3_custom:srv/GetRobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRobotStatus_Request(type):
    """Metaclass of message 'GetRobotStatus_Request'."""

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
            module = import_type_support('turtlebot3_custom')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtlebot3_custom.srv.GetRobotStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRobotStatus_Request(metaclass=Metaclass_GetRobotStatus_Request):
    """Message class 'GetRobotStatus_Request'."""

    __slots__ = [
        '_query_type',
    ]

    _fields_and_field_types = {
        'query_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.query_type = kwargs.get('query_type', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.query_type != other.query_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def query_type(self):
        """Message field 'query_type'."""
        return self._query_type

    @query_type.setter
    def query_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'query_type' field must be of type 'str'"
        self._query_type = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRobotStatus_Response(type):
    """Metaclass of message 'GetRobotStatus_Response'."""

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
            module = import_type_support('turtlebot3_custom')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtlebot3_custom.srv.GetRobotStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_status__response

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from sensor_msgs.msg import BatteryState
            if BatteryState.__class__._TYPE_SUPPORT is None:
                BatteryState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRobotStatus_Response(metaclass=Metaclass_GetRobotStatus_Response):
    """Message class 'GetRobotStatus_Response'."""

    __slots__ = [
        '_success',
        '_status_message',
        '_current_pose',
        '_battery_info',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'status_message': 'string',
        'current_pose': 'geometry_msgs/Pose',
        'battery_info': 'sensor_msgs/BatteryState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'BatteryState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.status_message = kwargs.get('status_message', str())
        from geometry_msgs.msg import Pose
        self.current_pose = kwargs.get('current_pose', Pose())
        from sensor_msgs.msg import BatteryState
        self.battery_info = kwargs.get('battery_info', BatteryState())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.status_message != other.status_message:
            return False
        if self.current_pose != other.current_pose:
            return False
        if self.battery_info != other.battery_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def status_message(self):
        """Message field 'status_message'."""
        return self._status_message

    @status_message.setter
    def status_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_message' field must be of type 'str'"
        self._status_message = value

    @builtins.property
    def current_pose(self):
        """Message field 'current_pose'."""
        return self._current_pose

    @current_pose.setter
    def current_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'current_pose' field must be a sub message of type 'Pose'"
        self._current_pose = value

    @builtins.property
    def battery_info(self):
        """Message field 'battery_info'."""
        return self._battery_info

    @battery_info.setter
    def battery_info(self, value):
        if __debug__:
            from sensor_msgs.msg import BatteryState
            assert \
                isinstance(value, BatteryState), \
                "The 'battery_info' field must be a sub message of type 'BatteryState'"
        self._battery_info = value


class Metaclass_GetRobotStatus(type):
    """Metaclass of service 'GetRobotStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtlebot3_custom')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtlebot3_custom.srv.GetRobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_robot_status

            from turtlebot3_custom.srv import _get_robot_status
            if _get_robot_status.Metaclass_GetRobotStatus_Request._TYPE_SUPPORT is None:
                _get_robot_status.Metaclass_GetRobotStatus_Request.__import_type_support__()
            if _get_robot_status.Metaclass_GetRobotStatus_Response._TYPE_SUPPORT is None:
                _get_robot_status.Metaclass_GetRobotStatus_Response.__import_type_support__()


class GetRobotStatus(metaclass=Metaclass_GetRobotStatus):
    from turtlebot3_custom.srv._get_robot_status import GetRobotStatus_Request as Request
    from turtlebot3_custom.srv._get_robot_status import GetRobotStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
