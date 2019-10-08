//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Fibonacci_Goal_Response_.h
//  Source: example_interfaces\action\dds_opensplice\Fibonacci_Goal_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _FIBONACCI_GOAL_RESPONSE__H_
#define _FIBONACCI_GOAL_RESPONSE__H_

#include "sacpp_mapping.h"
#include "Time_.h"
#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace example_interfaces
{
   namespace action
   {
      namespace dds_
      {
         struct Fibonacci_Goal_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Fibonacci_Goal_Response_
         {
               DDS::Boolean accepted_;
               ::builtin_interfaces::msg::dds_::Time_ stamp_;
         };

         typedef DDS_DCPSStruct_var < Fibonacci_Goal_Response_> Fibonacci_Goal_Response__var;
         typedef Fibonacci_Goal_Response_&Fibonacci_Goal_Response__out;
      }
   }
}




#endif
