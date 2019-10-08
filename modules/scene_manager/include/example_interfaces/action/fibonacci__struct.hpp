// generated from rosidl_generator_cpp/resource/action__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__FIBONACCI__STRUCT_HPP_
#define EXAMPLE_INTERFACES__ACTION__FIBONACCI__STRUCT_HPP_

#include <action_msgs/srv/cancel_goal.hpp>
#include <action_msgs/msg/goal_info.hpp>
#include <action_msgs/msg/goal_status_array.hpp>
#include <example_interfaces/action/fibonacci__feedback.hpp>
#include <example_interfaces/action/fibonacci__goal.hpp>
#include <example_interfaces/action/fibonacci__result.hpp>

namespace example_interfaces
{

namespace action
{

struct Fibonacci
{
  using CancelGoalService = action_msgs::srv::CancelGoal;
  using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  using GoalRequestService = example_interfaces::action::Fibonacci_Goal;
  using GoalResultService = example_interfaces::action::Fibonacci_Result;

  using Goal = GoalRequestService::Request;
  using Result = GoalResultService::Response;
  using Feedback = example_interfaces::action::Fibonacci_Feedback;
};

typedef struct Fibonacci Fibonacci;

}  // namespace action

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__ACTION__FIBONACCI__STRUCT_HPP_
