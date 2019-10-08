//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: DynamicArrayPrimitives_.h
//  Source: test_msgs\msg\dds_opensplice\DynamicArrayPrimitives_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _DYNAMICARRAYPRIMITIVES__H_
#define _DYNAMICARRAYPRIMITIVES__H_

#include "sacpp_mapping.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct DynamicArrayPrimitives_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_
         {
               struct _bool_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Boolean, struct _bool_values__seq_uniq_> _bool_values__seq;
               typedef DDS_DCPSSequence_var < _bool_values__seq> _bool_values__seq_var;
               typedef DDS_DCPSSequence_out < _bool_values__seq> _bool_values__seq_out;
               struct _byte_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Octet, struct _byte_values__seq_uniq_> _byte_values__seq;
               typedef DDS_DCPSSequence_var < _byte_values__seq> _byte_values__seq_var;
               typedef DDS_DCPSSequence_out < _byte_values__seq> _byte_values__seq_out;
               struct _char_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Char, struct _char_values__seq_uniq_> _char_values__seq;
               typedef DDS_DCPSSequence_var < _char_values__seq> _char_values__seq_var;
               typedef DDS_DCPSSequence_out < _char_values__seq> _char_values__seq_out;
               struct _float32_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Float, struct _float32_values__seq_uniq_> _float32_values__seq;
               typedef DDS_DCPSSequence_var < _float32_values__seq> _float32_values__seq_var;
               typedef DDS_DCPSSequence_out < _float32_values__seq> _float32_values__seq_out;
               struct _float64_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Double, struct _float64_values__seq_uniq_> _float64_values__seq;
               typedef DDS_DCPSSequence_var < _float64_values__seq> _float64_values__seq_var;
               typedef DDS_DCPSSequence_out < _float64_values__seq> _float64_values__seq_out;
               struct _int8_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Octet, struct _int8_values__seq_uniq_> _int8_values__seq;
               typedef DDS_DCPSSequence_var < _int8_values__seq> _int8_values__seq_var;
               typedef DDS_DCPSSequence_out < _int8_values__seq> _int8_values__seq_out;
               struct _uint8_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Octet, struct _uint8_values__seq_uniq_> _uint8_values__seq;
               typedef DDS_DCPSSequence_var < _uint8_values__seq> _uint8_values__seq_var;
               typedef DDS_DCPSSequence_out < _uint8_values__seq> _uint8_values__seq_out;
               struct _int16_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Short, struct _int16_values__seq_uniq_> _int16_values__seq;
               typedef DDS_DCPSSequence_var < _int16_values__seq> _int16_values__seq_var;
               typedef DDS_DCPSSequence_out < _int16_values__seq> _int16_values__seq_out;
               struct _uint16_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::UShort, struct _uint16_values__seq_uniq_> _uint16_values__seq;
               typedef DDS_DCPSSequence_var < _uint16_values__seq> _uint16_values__seq_var;
               typedef DDS_DCPSSequence_out < _uint16_values__seq> _uint16_values__seq_out;
               struct _int32_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Long, struct _int32_values__seq_uniq_> _int32_values__seq;
               typedef DDS_DCPSSequence_var < _int32_values__seq> _int32_values__seq_var;
               typedef DDS_DCPSSequence_out < _int32_values__seq> _int32_values__seq_out;
               struct _uint32_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::ULong, struct _uint32_values__seq_uniq_> _uint32_values__seq;
               typedef DDS_DCPSSequence_var < _uint32_values__seq> _uint32_values__seq_var;
               typedef DDS_DCPSSequence_out < _uint32_values__seq> _uint32_values__seq_out;
               struct _int64_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::LongLong, struct _int64_values__seq_uniq_> _int64_values__seq;
               typedef DDS_DCPSSequence_var < _int64_values__seq> _int64_values__seq_var;
               typedef DDS_DCPSSequence_out < _int64_values__seq> _int64_values__seq_out;
               struct _uint64_values__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::ULongLong, struct _uint64_values__seq_uniq_> _uint64_values__seq;
               typedef DDS_DCPSSequence_var < _uint64_values__seq> _uint64_values__seq_var;
               typedef DDS_DCPSSequence_out < _uint64_values__seq> _uint64_values__seq_out;
               struct _string_values__seq_uniq_ {};
               typedef DDS_DCPSUStrSeqT <struct _string_values__seq_uniq_> _string_values__seq;
               typedef DDS_DCPSUStrSeq_var < _string_values__seq> _string_values__seq_var;
               typedef DDS_DCPSUStrSeq_out < _string_values__seq> _string_values__seq_out;
               _bool_values__seq bool_values_;
               _byte_values__seq byte_values_;
               _char_values__seq char_values_;
               _float32_values__seq float32_values_;
               _float64_values__seq float64_values_;
               _int8_values__seq int8_values_;
               _uint8_values__seq uint8_values_;
               _int16_values__seq int16_values_;
               _uint16_values__seq uint16_values_;
               _int32_values__seq int32_values_;
               _uint32_values__seq uint32_values_;
               _int64_values__seq int64_values_;
               _uint64_values__seq uint64_values_;
               _string_values__seq string_values_;
               DDS::Long check_;
         };

         typedef DDS_DCPSStruct_var < DynamicArrayPrimitives_> DynamicArrayPrimitives__var;
         typedef DDS_DCPSStruct_out < DynamicArrayPrimitives_> DynamicArrayPrimitives__out;
      }
   }
}




#endif
