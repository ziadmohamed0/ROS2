// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yahboom_rosmaster_msgs:action/TimedRotation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yahboom_rosmaster_msgs/action/timed_rotation.hpp"


#ifndef YAHBOOM_ROSMASTER_MSGS__ACTION__DETAIL__TIMED_ROTATION__BUILDER_HPP_
#define YAHBOOM_ROSMASTER_MSGS__ACTION__DETAIL__TIMED_ROTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yahboom_rosmaster_msgs/action/detail/timed_rotation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_Goal_duration
{
public:
  explicit Init_TimedRotation_Goal_duration(::yahboom_rosmaster_msgs::action::TimedRotation_Goal & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_Goal duration(::yahboom_rosmaster_msgs::action::TimedRotation_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_Goal msg_;
};

class Init_TimedRotation_Goal_angular_velocity
{
public:
  Init_TimedRotation_Goal_angular_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_Goal_duration angular_velocity(::yahboom_rosmaster_msgs::action::TimedRotation_Goal::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_TimedRotation_Goal_duration(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_Goal>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_Goal_angular_velocity();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_Result_actual_duration
{
public:
  explicit Init_TimedRotation_Result_actual_duration(::yahboom_rosmaster_msgs::action::TimedRotation_Result & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_Result actual_duration(::yahboom_rosmaster_msgs::action::TimedRotation_Result::_actual_duration_type arg)
  {
    msg_.actual_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_Result msg_;
};

class Init_TimedRotation_Result_success
{
public:
  Init_TimedRotation_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_Result_actual_duration success(::yahboom_rosmaster_msgs::action::TimedRotation_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TimedRotation_Result_actual_duration(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_Result>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_Result_success();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_Feedback_status
{
public:
  explicit Init_TimedRotation_Feedback_status(::yahboom_rosmaster_msgs::action::TimedRotation_Feedback & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_Feedback status(::yahboom_rosmaster_msgs::action::TimedRotation_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_Feedback msg_;
};

class Init_TimedRotation_Feedback_elapsed_time
{
public:
  Init_TimedRotation_Feedback_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_Feedback_status elapsed_time(::yahboom_rosmaster_msgs::action::TimedRotation_Feedback::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return Init_TimedRotation_Feedback_status(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_Feedback>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_Feedback_elapsed_time();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_SendGoal_Request_goal
{
public:
  explicit Init_TimedRotation_SendGoal_Request_goal(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Request goal(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Request msg_;
};

class Init_TimedRotation_SendGoal_Request_goal_id
{
public:
  Init_TimedRotation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_SendGoal_Request_goal goal_id(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TimedRotation_SendGoal_Request_goal(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Request>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_SendGoal_Request_goal_id();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_SendGoal_Response_stamp
{
public:
  explicit Init_TimedRotation_SendGoal_Response_stamp(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Response stamp(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Response msg_;
};

class Init_TimedRotation_SendGoal_Response_accepted
{
public:
  Init_TimedRotation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_SendGoal_Response_stamp accepted(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TimedRotation_SendGoal_Response_stamp(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Response>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_SendGoal_Response_accepted();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_SendGoal_Event_response
{
public:
  explicit Init_TimedRotation_SendGoal_Event_response(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event response(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event msg_;
};

class Init_TimedRotation_SendGoal_Event_request
{
public:
  explicit Init_TimedRotation_SendGoal_Event_request(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_TimedRotation_SendGoal_Event_response request(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TimedRotation_SendGoal_Event_response(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event msg_;
};

class Init_TimedRotation_SendGoal_Event_info
{
public:
  Init_TimedRotation_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_SendGoal_Event_request info(::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TimedRotation_SendGoal_Event_request(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_SendGoal_Event>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_SendGoal_Event_info();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_GetResult_Request_goal_id
{
public:
  Init_TimedRotation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Request goal_id(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Request>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_GetResult_Request_goal_id();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_GetResult_Response_result
{
public:
  explicit Init_TimedRotation_GetResult_Response_result(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Response result(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Response msg_;
};

class Init_TimedRotation_GetResult_Response_status
{
public:
  Init_TimedRotation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_GetResult_Response_result status(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TimedRotation_GetResult_Response_result(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Response>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_GetResult_Response_status();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_GetResult_Event_response
{
public:
  explicit Init_TimedRotation_GetResult_Event_response(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event response(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event msg_;
};

class Init_TimedRotation_GetResult_Event_request
{
public:
  explicit Init_TimedRotation_GetResult_Event_request(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_TimedRotation_GetResult_Event_response request(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TimedRotation_GetResult_Event_response(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event msg_;
};

class Init_TimedRotation_GetResult_Event_info
{
public:
  Init_TimedRotation_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_GetResult_Event_request info(::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TimedRotation_GetResult_Event_request(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_GetResult_Event>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_GetResult_Event_info();
}

}  // namespace yahboom_rosmaster_msgs


namespace yahboom_rosmaster_msgs
{

namespace action
{

namespace builder
{

class Init_TimedRotation_FeedbackMessage_feedback
{
public:
  explicit Init_TimedRotation_FeedbackMessage_feedback(::yahboom_rosmaster_msgs::action::TimedRotation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::yahboom_rosmaster_msgs::action::TimedRotation_FeedbackMessage feedback(::yahboom_rosmaster_msgs::action::TimedRotation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_FeedbackMessage msg_;
};

class Init_TimedRotation_FeedbackMessage_goal_id
{
public:
  Init_TimedRotation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedRotation_FeedbackMessage_feedback goal_id(::yahboom_rosmaster_msgs::action::TimedRotation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TimedRotation_FeedbackMessage_feedback(msg_);
  }

private:
  ::yahboom_rosmaster_msgs::action::TimedRotation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_rosmaster_msgs::action::TimedRotation_FeedbackMessage>()
{
  return yahboom_rosmaster_msgs::action::builder::Init_TimedRotation_FeedbackMessage_goal_id();
}

}  // namespace yahboom_rosmaster_msgs

#endif  // YAHBOOM_ROSMASTER_MSGS__ACTION__DETAIL__TIMED_ROTATION__BUILDER_HPP_
