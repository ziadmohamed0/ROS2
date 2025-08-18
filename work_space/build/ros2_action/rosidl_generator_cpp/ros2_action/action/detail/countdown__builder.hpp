// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_action:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef ROS2_ACTION__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_
#define ROS2_ACTION__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_action/action/detail/countdown__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_Goal_start
{
public:
  Init_Countdown_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_action::action::Countdown_Goal start(::ros2_action::action::Countdown_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_Goal>()
{
  return ros2_action::action::builder::Init_Countdown_Goal_start();
}

}  // namespace ros2_action


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_Result_final
{
public:
  Init_Countdown_Result_final()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_action::action::Countdown_Result final(::ros2_action::action::Countdown_Result::_final_type arg)
  {
    msg_.final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_Result>()
{
  return ros2_action::action::builder::Init_Countdown_Result_final();
}

}  // namespace ros2_action


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_Feedback_current
{
public:
  Init_Countdown_Feedback_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_action::action::Countdown_Feedback current(::ros2_action::action::Countdown_Feedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_Feedback>()
{
  return ros2_action::action::builder::Init_Countdown_Feedback_current();
}

}  // namespace ros2_action


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_SendGoal_Request_goal
{
public:
  explicit Init_Countdown_SendGoal_Request_goal(::ros2_action::action::Countdown_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2_action::action::Countdown_SendGoal_Request goal(::ros2_action::action::Countdown_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_SendGoal_Request msg_;
};

class Init_Countdown_SendGoal_Request_goal_id
{
public:
  Init_Countdown_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_SendGoal_Request_goal goal_id(::ros2_action::action::Countdown_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Countdown_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2_action::action::Countdown_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_SendGoal_Request>()
{
  return ros2_action::action::builder::Init_Countdown_SendGoal_Request_goal_id();
}

}  // namespace ros2_action


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_SendGoal_Response_stamp
{
public:
  explicit Init_Countdown_SendGoal_Response_stamp(::ros2_action::action::Countdown_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2_action::action::Countdown_SendGoal_Response stamp(::ros2_action::action::Countdown_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_SendGoal_Response msg_;
};

class Init_Countdown_SendGoal_Response_accepted
{
public:
  Init_Countdown_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_SendGoal_Response_stamp accepted(::ros2_action::action::Countdown_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Countdown_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2_action::action::Countdown_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_SendGoal_Response>()
{
  return ros2_action::action::builder::Init_Countdown_SendGoal_Response_accepted();
}

}  // namespace ros2_action


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_GetResult_Request_goal_id
{
public:
  Init_Countdown_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_action::action::Countdown_GetResult_Request goal_id(::ros2_action::action::Countdown_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_GetResult_Request>()
{
  return ros2_action::action::builder::Init_Countdown_GetResult_Request_goal_id();
}

}  // namespace ros2_action


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_GetResult_Response_result
{
public:
  explicit Init_Countdown_GetResult_Response_result(::ros2_action::action::Countdown_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2_action::action::Countdown_GetResult_Response result(::ros2_action::action::Countdown_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_GetResult_Response msg_;
};

class Init_Countdown_GetResult_Response_status
{
public:
  Init_Countdown_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_GetResult_Response_result status(::ros2_action::action::Countdown_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Countdown_GetResult_Response_result(msg_);
  }

private:
  ::ros2_action::action::Countdown_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_GetResult_Response>()
{
  return ros2_action::action::builder::Init_Countdown_GetResult_Response_status();
}

}  // namespace ros2_action


namespace ros2_action
{

namespace action
{

namespace builder
{

class Init_Countdown_FeedbackMessage_feedback
{
public:
  explicit Init_Countdown_FeedbackMessage_feedback(::ros2_action::action::Countdown_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2_action::action::Countdown_FeedbackMessage feedback(::ros2_action::action::Countdown_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_action::action::Countdown_FeedbackMessage msg_;
};

class Init_Countdown_FeedbackMessage_goal_id
{
public:
  Init_Countdown_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_FeedbackMessage_feedback goal_id(::ros2_action::action::Countdown_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Countdown_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2_action::action::Countdown_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_action::action::Countdown_FeedbackMessage>()
{
  return ros2_action::action::builder::Init_Countdown_FeedbackMessage_goal_id();
}

}  // namespace ros2_action

#endif  // ROS2_ACTION__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_
