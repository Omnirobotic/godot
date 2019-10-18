//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SelfTest_Response_.h
//  Source: diagnostic_msgs\srv\dds_opensplice\Sample_SelfTest_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_SELFTEST_RESPONSE__H_
#define _SAMPLE_SELFTEST_RESPONSE__H_

#include "sacpp_mapping.h"
#include "SelfTest_Response_.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace diagnostic_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_SelfTest_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               SelfTest_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_SelfTest_Response_> Sample_SelfTest_Response__var;
         typedef DDS_DCPSStruct_out < Sample_SelfTest_Response_> Sample_SelfTest_Response__out;
      }
   }
}




#endif