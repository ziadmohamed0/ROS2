// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlebot3_custom:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_CUSTOM__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_
#define TURTLEBOT3_CUSTOM__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlebot3_custom/action/detail/navigate_to_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Goal_target_pose
{
public:
  Init_NavigateToGoal_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_Goal target_pose(::turtlebot3_custom::action::NavigateToGoal_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_Goal>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_Goal_target_pose();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Result_final_pose
{
public:
  explicit Init_NavigateToGoal_Result_final_pose(::turtlebot3_custom::action::NavigateToGoal_Result & msg)
  : msg_(msg)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_Result final_pose(::turtlebot3_custom::action::NavigateToGoal_Result::_final_pose_type arg)
  {
    msg_.final_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_Result msg_;
};

class Init_NavigateToGoal_Result_message
{
public:
  explicit Init_NavigateToGoal_Result_message(::turtlebot3_custom::action::NavigateToGoal_Result & msg)
  : msg_(msg)
  {}
  Init_NavigateToGoal_Result_final_pose message(::turtlebot3_custom::action::NavigateToGoal_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_NavigateToGoal_Result_final_pose(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_Result msg_;
};

class Init_NavigateToGoal_Result_success
{
public:
  Init_NavigateToGoal_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_Result_message success(::turtlebot3_custom::action::NavigateToGoal_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_NavigateToGoal_Result_message(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_Result>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_Result_success();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Feedback_time_elapsed
{
public:
  explicit Init_NavigateToGoal_Feedback_time_elapsed(::turtlebot3_custom::action::NavigateToGoal_Feedback & msg)
  : msg_(msg)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_Feedback time_elapsed(::turtlebot3_custom::action::NavigateToGoal_Feedback::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_Feedback msg_;
};

class Init_NavigateToGoal_Feedback_distance_remaining
{
public:
  explicit Init_NavigateToGoal_Feedback_distance_remaining(::turtlebot3_custom::action::NavigateToGoal_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigateToGoal_Feedback_time_elapsed distance_remaining(::turtlebot3_custom::action::NavigateToGoal_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return Init_NavigateToGoal_Feedback_time_elapsed(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_Feedback msg_;
};

class Init_NavigateToGoal_Feedback_current_pose
{
public:
  Init_NavigateToGoal_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_Feedback_distance_remaining current_pose(::turtlebot3_custom::action::NavigateToGoal_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_NavigateToGoal_Feedback_distance_remaining(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_Feedback>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_Feedback_current_pose();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_SendGoal_Request_goal
{
public:
  explicit Init_NavigateToGoal_SendGoal_Request_goal(::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request goal(::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request msg_;
};

class Init_NavigateToGoal_SendGoal_Request_goal_id
{
public:
  Init_NavigateToGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_SendGoal_Request_goal goal_id(::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_SendGoal_Request>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_SendGoal_Request_goal_id();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateToGoal_SendGoal_Response_stamp(::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response stamp(::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response msg_;
};

class Init_NavigateToGoal_SendGoal_Response_accepted
{
public:
  Init_NavigateToGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_SendGoal_Response_stamp accepted(::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateToGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_SendGoal_Response>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_SendGoal_Response_accepted();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_GetResult_Request_goal_id
{
public:
  Init_NavigateToGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_GetResult_Request goal_id(::turtlebot3_custom::action::NavigateToGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_GetResult_Request>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_GetResult_Request_goal_id();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_GetResult_Response_result
{
public:
  explicit Init_NavigateToGoal_GetResult_Response_result(::turtlebot3_custom::action::NavigateToGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_GetResult_Response result(::turtlebot3_custom::action::NavigateToGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_GetResult_Response msg_;
};

class Init_NavigateToGoal_GetResult_Response_status
{
public:
  Init_NavigateToGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_GetResult_Response_result status(::turtlebot3_custom::action::NavigateToGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToGoal_GetResult_Response_result(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_GetResult_Response>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_GetResult_Response_status();
}

}  // namespace turtlebot3_custom


namespace turtlebot3_custom
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateToGoal_FeedbackMessage_feedback(::turtlebot3_custom::action::NavigateToGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtlebot3_custom::action::NavigateToGoal_FeedbackMessage feedback(::turtlebot3_custom::action::NavigateToGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_FeedbackMessage msg_;
};

class Init_NavigateToGoal_FeedbackMessage_goal_id
{
public:
  Init_NavigateToGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_FeedbackMessage_feedback goal_id(::turtlebot3_custom::action::NavigateToGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtlebot3_custom::action::NavigateToGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_custom::action::NavigateToGoal_FeedbackMessage>()
{
  return turtlebot3_custom::action::builder::Init_NavigateToGoal_FeedbackMessage_goal_id();
}

}  // namespace turtlebot3_custom

#endif  // TURTLEBOT3_CUSTOM__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_
