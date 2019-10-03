//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_FrameGraph_Response_.h
//  Source: tf2_msgs\srv\dds_opensplice\Sample_FrameGraph_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_FRAMEGRAPH_RESPONSE__H_
#define _SAMPLE_FRAMEGRAPH_RESPONSE__H_

#include "sacpp_mapping.h"
#include "FrameGraph_Response_.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace tf2_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_FrameGraph_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               FrameGraph_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_FrameGraph_Response_> Sample_FrameGraph_Response__var;
         typedef DDS_DCPSStruct_out < Sample_FrameGraph_Response_> Sample_FrameGraph_Response__out;
      }
   }
}




#endif
