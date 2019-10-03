//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: BoundedArrayPrimitivesNested_.h
//  Source: test_msgs\msg\dds_opensplice\BoundedArrayPrimitivesNested_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _BOUNDEDARRAYPRIMITIVESNESTED__H_
#define _BOUNDEDARRAYPRIMITIVESNESTED__H_

#include "sacpp_mapping.h"
#include "BoundedArrayPrimitives_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct BoundedArrayPrimitivesNested_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BoundedArrayPrimitivesNested_
         {
               struct _bounded_array_primitive_values__seq_uniq_ {};
               typedef DDS_DCPSBVLSeq < BoundedArrayPrimitives_, 3> _bounded_array_primitive_values__seq;
               typedef DDS_DCPSSequence_var < _bounded_array_primitive_values__seq> _bounded_array_primitive_values__seq_var;
               typedef DDS_DCPSSequence_out < _bounded_array_primitive_values__seq> _bounded_array_primitive_values__seq_out;
               _bounded_array_primitive_values__seq bounded_array_primitive_values_;
         };

         typedef DDS_DCPSStruct_var < BoundedArrayPrimitivesNested_> BoundedArrayPrimitivesNested__var;
         typedef DDS_DCPSStruct_out < BoundedArrayPrimitivesNested_> BoundedArrayPrimitivesNested__out;
      }
   }
}




#endif
