//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Fibonacci_Result_Request_.h
//  Source: test_msgs\action\dds_opensplice\Fibonacci_Result_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _FIBONACCI_RESULT_REQUEST__H_
#define _FIBONACCI_RESULT_REQUEST__H_

#include "sacpp_mapping.h"
#include "UUID_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace action
   {
      namespace dds_
      {
         struct Fibonacci_Result_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Result_Request_
         {
               ::unique_identifier_msgs::msg::dds_::UUID_ action_goal_id_;
         };

         typedef DDS_DCPSStruct_var < Fibonacci_Result_Request_> Fibonacci_Result_Request__var;
         typedef Fibonacci_Result_Request_&Fibonacci_Result_Request__out;
      }
   }
}




#endif
