//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: DynamicArrayNested_Dcps.h
//  Source: test_msgs\msg\dds_opensplice\DynamicArrayNested_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _DYNAMICARRAYNESTED_DCPS_H_
#define _DYNAMICARRAYNESTED_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "DynamicArrayNested_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_TypeSupportInterface;

         typedef DynamicArrayNested_TypeSupportInterface * DynamicArrayNested_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayNested_TypeSupportInterface> DynamicArrayNested_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < DynamicArrayNested_TypeSupportInterface> DynamicArrayNested_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_DataWriter;

         typedef DynamicArrayNested_DataWriter * DynamicArrayNested_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayNested_DataWriter> DynamicArrayNested_DataWriter_var;
         typedef DDS_DCPSInterface_out < DynamicArrayNested_DataWriter> DynamicArrayNested_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_DataReader;

         typedef DynamicArrayNested_DataReader * DynamicArrayNested_DataReader_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayNested_DataReader> DynamicArrayNested_DataReader_var;
         typedef DDS_DCPSInterface_out < DynamicArrayNested_DataReader> DynamicArrayNested_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_DataReaderView;

         typedef DynamicArrayNested_DataReaderView * DynamicArrayNested_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayNested_DataReaderView> DynamicArrayNested_DataReaderView_var;
         typedef DDS_DCPSInterface_out < DynamicArrayNested_DataReaderView> DynamicArrayNested_DataReaderView_out;

         struct DynamicArrayNested_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < DynamicArrayNested_, struct DynamicArrayNested_Seq_uniq_> DynamicArrayNested_Seq;
         typedef DDS_DCPSSequence_var < DynamicArrayNested_Seq> DynamicArrayNested_Seq_var;
         typedef DDS_DCPSSequence_out < DynamicArrayNested_Seq> DynamicArrayNested_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef DynamicArrayNested_TypeSupportInterface_ptr _ptr_type;
            typedef DynamicArrayNested_TypeSupportInterface_var _var_type;

            static DynamicArrayNested_TypeSupportInterface_ptr _duplicate (DynamicArrayNested_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayNested_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayNested_TypeSupportInterface_ptr _this () { return this; }


         protected:
            DynamicArrayNested_TypeSupportInterface () {};
            ~DynamicArrayNested_TypeSupportInterface () {};
         private:
            DynamicArrayNested_TypeSupportInterface (const DynamicArrayNested_TypeSupportInterface &);
            DynamicArrayNested_TypeSupportInterface & operator = (const DynamicArrayNested_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef DynamicArrayNested_DataWriter_ptr _ptr_type;
            typedef DynamicArrayNested_DataWriter_var _var_type;

            static DynamicArrayNested_DataWriter_ptr _duplicate (DynamicArrayNested_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayNested_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayNested_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const DynamicArrayNested_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const DynamicArrayNested_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const DynamicArrayNested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const DynamicArrayNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const DynamicArrayNested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const DynamicArrayNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const DynamicArrayNested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const DynamicArrayNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const DynamicArrayNested_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const DynamicArrayNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (DynamicArrayNested_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const DynamicArrayNested_& instance_data) = 0;

         protected:
            DynamicArrayNested_DataWriter () {};
            ~DynamicArrayNested_DataWriter () {};
         private:
            DynamicArrayNested_DataWriter (const DynamicArrayNested_DataWriter &);
            DynamicArrayNested_DataWriter & operator = (const DynamicArrayNested_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef DynamicArrayNested_DataReader_ptr _ptr_type;
            typedef DynamicArrayNested_DataReader_var _var_type;

            static DynamicArrayNested_DataReader_ptr _duplicate (DynamicArrayNested_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayNested_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayNested_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (DynamicArrayNested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (DynamicArrayNested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (DynamicArrayNested_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const DynamicArrayNested_& instance) = 0;

         protected:
            DynamicArrayNested_DataReader () {};
            ~DynamicArrayNested_DataReader () {};
         private:
            DynamicArrayNested_DataReader (const DynamicArrayNested_DataReader &);
            DynamicArrayNested_DataReader & operator = (const DynamicArrayNested_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayNested_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef DynamicArrayNested_DataReaderView_ptr _ptr_type;
            typedef DynamicArrayNested_DataReaderView_var _var_type;

            static DynamicArrayNested_DataReaderView_ptr _duplicate (DynamicArrayNested_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayNested_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayNested_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayNested_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (DynamicArrayNested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (DynamicArrayNested_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (DynamicArrayNested_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (DynamicArrayNested_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const DynamicArrayNested_& instance) = 0;

         protected:
            DynamicArrayNested_DataReaderView () {};
            ~DynamicArrayNested_DataReaderView () {};
         private:
            DynamicArrayNested_DataReaderView (const DynamicArrayNested_DataReaderView &);
            DynamicArrayNested_DataReaderView & operator = (const DynamicArrayNested_DataReaderView &);
         };

      }
   }
}




#endif
