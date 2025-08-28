// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlebot3_custom:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_HPP_
#define TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Request __declspec(deprecated)
#endif

namespace turtlebot3_custom
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotStatus_Request_
{
  using Type = GetRobotStatus_Request_<ContainerAllocator>;

  explicit GetRobotStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_type = "";
    }
  }

  explicit GetRobotStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : query_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_type = "";
    }
  }

  // field types and members
  using _query_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _query_type_type query_type;

  // setters for named parameter idiom
  Type & set__query_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->query_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Request
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Request
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotStatus_Request_ & other) const
  {
    if (this->query_type != other.query_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotStatus_Request_

// alias to use template instance with default allocator
using GetRobotStatus_Request =
  turtlebot3_custom::srv::GetRobotStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlebot3_custom


// Include directives for member types
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'battery_info'
#include "sensor_msgs/msg/detail/battery_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Response __declspec(deprecated)
#endif

namespace turtlebot3_custom
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotStatus_Response_
{
  using Type = GetRobotStatus_Response_<ContainerAllocator>;

  explicit GetRobotStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_init),
    battery_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit GetRobotStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_message(_alloc),
    current_pose(_alloc, _init),
    battery_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;
  using _current_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _battery_info_type =
    sensor_msgs::msg::BatteryState_<ContainerAllocator>;
  _battery_info_type battery_info;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }
  Type & set__current_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__battery_info(
    const sensor_msgs::msg::BatteryState_<ContainerAllocator> & _arg)
  {
    this->battery_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Response
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlebot3_custom__srv__GetRobotStatus_Response
    std::shared_ptr<turtlebot3_custom::srv::GetRobotStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotStatus_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->battery_info != other.battery_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotStatus_Response_

// alias to use template instance with default allocator
using GetRobotStatus_Response =
  turtlebot3_custom::srv::GetRobotStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlebot3_custom

namespace turtlebot3_custom
{

namespace srv
{

struct GetRobotStatus
{
  using Request = turtlebot3_custom::srv::GetRobotStatus_Request;
  using Response = turtlebot3_custom::srv::GetRobotStatus_Response;
};

}  // namespace srv

}  // namespace turtlebot3_custom

#endif  // TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_HPP_
