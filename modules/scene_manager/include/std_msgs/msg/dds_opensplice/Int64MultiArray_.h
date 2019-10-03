//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Int64MultiArray_.h
//  Source: std_msgs\msg\dds_opensplice\Int64MultiArray_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _INT64MULTIARRAY__H_
#define _INT64MULTIARRAY__H_

#include "sacpp_mapping.h"
#include "MultiArrayLayout_.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Int64MultiArray_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs Int64MultiArray_
         {
               struct _data__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::LongLong, struct _data__seq_uniq_> _data__seq;
               typedef DDS_DCPSSequence_var < _data__seq> _data__seq_var;
               typedef DDS_DCPSSequence_out < _data__seq> _data__seq_out;
               MultiArrayLayout_ layout_;
               _data__seq data_;
         };

         typedef DDS_DCPSStruct_var < Int64MultiArray_> Int64MultiArray__var;
         typedef DDS_DCPSStruct_out < Int64MultiArray_> Int64MultiArray__out;
      }
   }
}




#endif
