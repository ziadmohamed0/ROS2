// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from services_actions:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_
#define SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "services_actions/srv/detail/add_two_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace services_actions
{

namespace srv
{

namespace builder
{

class Init_AddTwoInt_Request_b
{
public:
  explicit Init_AddTwoInt_Request_b(::services_actions::srv::AddTwoInt_Request & msg)
  : msg_(msg)
  {}
  ::services_actions::srv::AddTwoInt_Request b(::services_actions::srv::AddTwoInt_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::srv::AddTwoInt_Request msg_;
};

class Init_AddTwoInt_Request_a
{
public:
  Init_AddTwoInt_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInt_Request_b a(::services_actions::srv::AddTwoInt_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInt_Request_b(msg_);
  }

private:
  ::services_actions::srv::AddTwoInt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::srv::AddTwoInt_Request>()
{
  return services_actions::srv::builder::Init_AddTwoInt_Request_a();
}

}  // namespace services_actions


namespace services_actions
{

namespace srv
{

namespace builder
{

class Init_AddTwoInt_Response_sum
{
public:
  Init_AddTwoInt_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::services_actions::srv::AddTwoInt_Response sum(::services_actions::srv::AddTwoInt_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_actions::srv::AddTwoInt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_actions::srv::AddTwoInt_Response>()
{
  return services_actions::srv::builder::Init_AddTwoInt_Response_sum();
}

}  // namespace services_actions

#endif  // SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_
