//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ByteMultiArray_.h
//  Source: std_msgs\msg\dds_opensplice\ByteMultiArray_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _BYTEMULTIARRAY__H_
#define _BYTEMULTIARRAY__H_

#include "sacpp_mapping.h"
#include "MultiArrayLayout_.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct ByteMultiArray_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs ByteMultiArray_
         {
               struct _data__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Octet, struct _data__seq_uniq_> _data__seq;
               typedef DDS_DCPSSequence_var < _data__seq> _data__seq_var;
               typedef DDS_DCPSSequence_out < _data__seq> _data__seq_out;
               MultiArrayLayout_ layout_;
               _data__seq data_;
         };

         typedef DDS_DCPSStruct_var < ByteMultiArray_> ByteMultiArray__var;
         typedef DDS_DCPSStruct_out < ByteMultiArray_> ByteMultiArray__out;
      }
   }
}




#endif