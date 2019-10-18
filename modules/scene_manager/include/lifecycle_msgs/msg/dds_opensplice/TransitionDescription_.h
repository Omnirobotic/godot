//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: TransitionDescription_.h
//  Source: lifecycle_msgs\msg\dds_opensplice\TransitionDescription_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _TRANSITIONDESCRIPTION__H_
#define _TRANSITIONDESCRIPTION__H_

#include "sacpp_mapping.h"
#include "Transition_.h"
#include "State_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace lifecycle_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct TransitionDescription_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionDescription_
         {
               Transition_ transition_;
               State_ start_state_;
               State_ goal_state_;
         };

         typedef DDS_DCPSStruct_var < TransitionDescription_> TransitionDescription__var;
         typedef DDS_DCPSStruct_out < TransitionDescription_> TransitionDescription__out;
      }
   }
}




#endif