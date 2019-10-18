//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_Primitives_Response_.h
//  Source: test_msgs\srv\dds_opensplice\Sample_Primitives_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_PRIMITIVES_RESPONSE__H_
#define _SAMPLE_PRIMITIVES_RESPONSE__H_

#include "sacpp_mapping.h"
#include "Primitives_Response_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_Primitives_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Primitives_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               Primitives_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_Primitives_Response_> Sample_Primitives_Response__var;
         typedef DDS_DCPSStruct_out < Sample_Primitives_Response_> Sample_Primitives_Response__out;
      }
   }
}




#endif