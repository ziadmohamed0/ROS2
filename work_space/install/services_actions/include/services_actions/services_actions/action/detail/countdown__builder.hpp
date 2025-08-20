// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from services_actions:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_ACTIONS__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_
#define SERVICES_ACTIONS__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "services_actions/action/detail/countdown__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace services_actions
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
  ::services_actions::action::Countdown_Goal start(::services_actions::action::Countdown_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_Goal>()
{
  return services_actions::action::builder::Init_Countdown_Goal_start();
}

}  // namespace services_actions


namespace services_actions
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
  ::services_actions::action::Countdown_Result final(::services_actions::action::Countdown_Result::_final_type arg)
  {
    msg_.final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_Result>()
{
  return services_actions::action::builder::Init_Countdown_Result_final();
}

}  // namespace services_actions


namespace services_actions
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
  ::services_actions::action::Countdown_Feedback current(::services_actions::action::Countdown_Feedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_Feedback>()
{
  return services_actions::action::builder::Init_Countdown_Feedback_current();
}

}  // namespace services_actions


namespace services_actions
{

namespace action
{

namespace builder
{

class Init_Countdown_SendGoal_Request_goal
{
public:
  explicit Init_Countdown_SendGoal_Request_goal(::services_actions::action::Countdown_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::services_actions::action::Countdown_SendGoal_Request goal(::services_actions::action::Countdown_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_SendGoal_Request msg_;
};

class Init_Countdown_SendGoal_Request_goal_id
{
public:
  Init_Countdown_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_SendGoal_Request_goal goal_id(::services_actions::action::Countdown_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Countdown_SendGoal_Request_goal(msg_);
  }

private:
  ::services_actions::action::Countdown_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_SendGoal_Request>()
{
  return services_actions::action::builder::Init_Countdown_SendGoal_Request_goal_id();
}

}  // namespace services_actions


namespace services_actions
{

namespace action
{

namespace builder
{

class Init_Countdown_SendGoal_Response_stamp
{
public:
  explicit Init_Countdown_SendGoal_Response_stamp(::services_actions::action::Countdown_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::services_actions::action::Countdown_SendGoal_Response stamp(::services_actions::action::Countdown_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_SendGoal_Response msg_;
};

class Init_Countdown_SendGoal_Response_accepted
{
public:
  Init_Countdown_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_SendGoal_Response_stamp accepted(::services_actions::action::Countdown_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Countdown_SendGoal_Response_stamp(msg_);
  }

private:
  ::services_actions::action::Countdown_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_SendGoal_Response>()
{
  return services_actions::action::builder::Init_Countdown_SendGoal_Response_accepted();
}

}  // namespace services_actions


namespace services_actions
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
  ::services_actions::action::Countdown_GetResult_Request goal_id(::services_actions::action::Countdown_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_GetResult_Request>()
{
  return services_actions::action::builder::Init_Countdown_GetResult_Request_goal_id();
}

}  // namespace services_actions


namespace services_actions
{

namespace action
{

namespace builder
{

class Init_Countdown_GetResult_Response_result
{
public:
  explicit Init_Countdown_GetResult_Response_result(::services_actions::action::Countdown_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::services_actions::action::Countdown_GetResult_Response result(::services_actions::action::Countdown_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_GetResult_Response msg_;
};

class Init_Countdown_GetResult_Response_status
{
public:
  Init_Countdown_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_GetResult_Response_result status(::services_actions::action::Countdown_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Countdown_GetResult_Response_result(msg_);
  }

private:
  ::services_actions::action::Countdown_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_GetResult_Response>()
{
  return services_actions::action::builder::Init_Countdown_GetResult_Response_status();
}

}  // namespace services_actions


namespace services_actions
{

namespace action
{

namespace builder
{

class Init_Countdown_FeedbackMessage_feedback
{
public:
  explicit Init_Countdown_FeedbackMessage_feedback(::services_actions::action::Countdown_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::services_actions::action::Countdown_FeedbackMessage feedback(::services_actions::action::Countdown_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::action::Countdown_FeedbackMessage msg_;
};

class Init_Countdown_FeedbackMessage_goal_id
{
public:
  Init_Countdown_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_FeedbackMessage_feedback goal_id(::services_actions::action::Countdown_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Countdown_FeedbackMessage_feedback(msg_);
  }

private:
  ::services_actions::action::Countdown_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::action::Countdown_FeedbackMessage>()
{
  return services_actions::action::builder::Init_Countdown_FeedbackMessage_goal_id();
}

}  // namespace services_actions

#endif  // SERVICES_ACTIONS__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_
