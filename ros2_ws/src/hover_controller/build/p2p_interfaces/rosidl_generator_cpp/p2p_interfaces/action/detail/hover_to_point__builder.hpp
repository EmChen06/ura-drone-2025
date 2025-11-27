// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from p2p_interfaces:action/HoverToPoint.idl
// generated code does not contain a copyright notice

#ifndef P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__BUILDER_HPP_
#define P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "p2p_interfaces/action/detail/hover_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_Goal_z
{
public:
  explicit Init_HoverToPoint_Goal_z(::p2p_interfaces::action::HoverToPoint_Goal & msg)
  : msg_(msg)
  {}
  ::p2p_interfaces::action::HoverToPoint_Goal z(::p2p_interfaces::action::HoverToPoint_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Goal msg_;
};

class Init_HoverToPoint_Goal_y
{
public:
  explicit Init_HoverToPoint_Goal_y(::p2p_interfaces::action::HoverToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_HoverToPoint_Goal_z y(::p2p_interfaces::action::HoverToPoint_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_HoverToPoint_Goal_z(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Goal msg_;
};

class Init_HoverToPoint_Goal_x
{
public:
  Init_HoverToPoint_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverToPoint_Goal_y x(::p2p_interfaces::action::HoverToPoint_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_HoverToPoint_Goal_y(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_Goal>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_Goal_x();
}

}  // namespace p2p_interfaces


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_Result_message
{
public:
  explicit Init_HoverToPoint_Result_message(::p2p_interfaces::action::HoverToPoint_Result & msg)
  : msg_(msg)
  {}
  ::p2p_interfaces::action::HoverToPoint_Result message(::p2p_interfaces::action::HoverToPoint_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Result msg_;
};

class Init_HoverToPoint_Result_success
{
public:
  Init_HoverToPoint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverToPoint_Result_message success(::p2p_interfaces::action::HoverToPoint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HoverToPoint_Result_message(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_Result>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_Result_success();
}

}  // namespace p2p_interfaces


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_Feedback_current_z
{
public:
  explicit Init_HoverToPoint_Feedback_current_z(::p2p_interfaces::action::HoverToPoint_Feedback & msg)
  : msg_(msg)
  {}
  ::p2p_interfaces::action::HoverToPoint_Feedback current_z(::p2p_interfaces::action::HoverToPoint_Feedback::_current_z_type arg)
  {
    msg_.current_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Feedback msg_;
};

class Init_HoverToPoint_Feedback_current_y
{
public:
  explicit Init_HoverToPoint_Feedback_current_y(::p2p_interfaces::action::HoverToPoint_Feedback & msg)
  : msg_(msg)
  {}
  Init_HoverToPoint_Feedback_current_z current_y(::p2p_interfaces::action::HoverToPoint_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_HoverToPoint_Feedback_current_z(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Feedback msg_;
};

class Init_HoverToPoint_Feedback_current_x
{
public:
  Init_HoverToPoint_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverToPoint_Feedback_current_y current_x(::p2p_interfaces::action::HoverToPoint_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_HoverToPoint_Feedback_current_y(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_Feedback>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_Feedback_current_x();
}

}  // namespace p2p_interfaces


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_SendGoal_Request_goal
{
public:
  explicit Init_HoverToPoint_SendGoal_Request_goal(::p2p_interfaces::action::HoverToPoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::p2p_interfaces::action::HoverToPoint_SendGoal_Request goal(::p2p_interfaces::action::HoverToPoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_SendGoal_Request msg_;
};

class Init_HoverToPoint_SendGoal_Request_goal_id
{
public:
  Init_HoverToPoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverToPoint_SendGoal_Request_goal goal_id(::p2p_interfaces::action::HoverToPoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_HoverToPoint_SendGoal_Request_goal(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_SendGoal_Request>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_SendGoal_Request_goal_id();
}

}  // namespace p2p_interfaces


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_SendGoal_Response_stamp
{
public:
  explicit Init_HoverToPoint_SendGoal_Response_stamp(::p2p_interfaces::action::HoverToPoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::p2p_interfaces::action::HoverToPoint_SendGoal_Response stamp(::p2p_interfaces::action::HoverToPoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_SendGoal_Response msg_;
};

class Init_HoverToPoint_SendGoal_Response_accepted
{
public:
  Init_HoverToPoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverToPoint_SendGoal_Response_stamp accepted(::p2p_interfaces::action::HoverToPoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_HoverToPoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_SendGoal_Response>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_SendGoal_Response_accepted();
}

}  // namespace p2p_interfaces


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_GetResult_Request_goal_id
{
public:
  Init_HoverToPoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::p2p_interfaces::action::HoverToPoint_GetResult_Request goal_id(::p2p_interfaces::action::HoverToPoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_GetResult_Request>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_GetResult_Request_goal_id();
}

}  // namespace p2p_interfaces


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_GetResult_Response_result
{
public:
  explicit Init_HoverToPoint_GetResult_Response_result(::p2p_interfaces::action::HoverToPoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::p2p_interfaces::action::HoverToPoint_GetResult_Response result(::p2p_interfaces::action::HoverToPoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_GetResult_Response msg_;
};

class Init_HoverToPoint_GetResult_Response_status
{
public:
  Init_HoverToPoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverToPoint_GetResult_Response_result status(::p2p_interfaces::action::HoverToPoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_HoverToPoint_GetResult_Response_result(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_GetResult_Response>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_GetResult_Response_status();
}

}  // namespace p2p_interfaces


namespace p2p_interfaces
{

namespace action
{

namespace builder
{

class Init_HoverToPoint_FeedbackMessage_feedback
{
public:
  explicit Init_HoverToPoint_FeedbackMessage_feedback(::p2p_interfaces::action::HoverToPoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::p2p_interfaces::action::HoverToPoint_FeedbackMessage feedback(::p2p_interfaces::action::HoverToPoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_FeedbackMessage msg_;
};

class Init_HoverToPoint_FeedbackMessage_goal_id
{
public:
  Init_HoverToPoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverToPoint_FeedbackMessage_feedback goal_id(::p2p_interfaces::action::HoverToPoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_HoverToPoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::p2p_interfaces::action::HoverToPoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p2p_interfaces::action::HoverToPoint_FeedbackMessage>()
{
  return p2p_interfaces::action::builder::Init_HoverToPoint_FeedbackMessage_goal_id();
}

}  // namespace p2p_interfaces

#endif  // P2P_INTERFACES__ACTION__DETAIL__HOVER_TO_POINT__BUILDER_HPP_
