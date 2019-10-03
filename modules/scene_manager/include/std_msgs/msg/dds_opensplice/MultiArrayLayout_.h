//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MultiArrayLayout_.h
//  Source: std_msgs\msg\dds_opensplice\MultiArrayLayout_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _MULTIARRAYLAYOUT__H_
#define _MULTIARRAYLAYOUT__H_

#include "sacpp_mapping.h"
#include "MultiArrayDimension_.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct MultiArrayLayout_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs MultiArrayLayout_
         {
               struct _dim__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < MultiArrayDimension_, struct _dim__seq_uniq_> _dim__seq;
               typedef DDS_DCPSSequence_var < _dim__seq> _dim__seq_var;
               typedef DDS_DCPSSequence_out < _dim__seq> _dim__seq_out;
               _dim__seq dim_;
               DDS::ULong data_offset_;
         };

         typedef DDS_DCPSStruct_var < MultiArrayLayout_> MultiArrayLayout__var;
         typedef DDS_DCPSStruct_out < MultiArrayLayout_> MultiArrayLayout__out;
      }
   }
}




#endif
