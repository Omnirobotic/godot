// generated from rosidl_generator_cpp/resource/action__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__NESTED_MESSAGE__STRUCT_HPP_
#define TEST_MSGS__ACTION__NESTED_MESSAGE__STRUCT_HPP_

#include <action_msgs/srv/cancel_goal.hpp>
#include <action_msgs/msg/goal_info.hpp>
#include <action_msgs/msg/goal_status_array.hpp>
#include <test_msgs/action/nested_message__feedback.hpp>
#include <test_msgs/action/nested_message__goal.hpp>
#include <test_msgs/action/nested_message__result.hpp>

namespace test_msgs
{

namespace action
{

struct NestedMessage
{
  using CancelGoalService = action_msgs::srv::CancelGoal;
  using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  using GoalRequestService = test_msgs::action::NestedMessage_Goal;
  using GoalResultService = test_msgs::action::NestedMessage_Result;

  using Goal = GoalRequestService::Request;
  using Result = GoalResultService::Response;
  using Feedback = test_msgs::action::NestedMessage_Feedback;
};

typedef struct NestedMessage NestedMessage;

}  // namespace action

}  // namespace test_msgs

#endif  // TEST_MSGS__ACTION__NESTED_MESSAGE__STRUCT_HPP_
