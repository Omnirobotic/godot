//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetPlan_Response_Dcps.h
//  Source: nav_msgs\srv\dds_opensplice\Sample_GetPlan_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _SAMPLE_GETPLAN_RESPONSE_DCPS_H_
#define _SAMPLE_GETPLAN_RESPONSE_DCPS_H_

#include "sacpp_mapping.h"
#include "Sample_GetPlan_Response_.h"
#include "dds_dcps.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace nav_msgs
{
   namespace srv
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_TypeSupportInterface;

         typedef Sample_GetPlan_Response_TypeSupportInterface * Sample_GetPlan_Response_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetPlan_Response_TypeSupportInterface> Sample_GetPlan_Response_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Sample_GetPlan_Response_TypeSupportInterface> Sample_GetPlan_Response_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_DataWriter;

         typedef Sample_GetPlan_Response_DataWriter * Sample_GetPlan_Response_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetPlan_Response_DataWriter> Sample_GetPlan_Response_DataWriter_var;
         typedef DDS_DCPSInterface_out < Sample_GetPlan_Response_DataWriter> Sample_GetPlan_Response_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_DataReader;

         typedef Sample_GetPlan_Response_DataReader * Sample_GetPlan_Response_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetPlan_Response_DataReader> Sample_GetPlan_Response_DataReader_var;
         typedef DDS_DCPSInterface_out < Sample_GetPlan_Response_DataReader> Sample_GetPlan_Response_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_DataReaderView;

         typedef Sample_GetPlan_Response_DataReaderView * Sample_GetPlan_Response_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Sample_GetPlan_Response_DataReaderView> Sample_GetPlan_Response_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Sample_GetPlan_Response_DataReaderView> Sample_GetPlan_Response_DataReaderView_out;

         struct Sample_GetPlan_Response_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < Sample_GetPlan_Response_, struct Sample_GetPlan_Response_Seq_uniq_> Sample_GetPlan_Response_Seq;
         typedef DDS_DCPSSequence_var < Sample_GetPlan_Response_Seq> Sample_GetPlan_Response_Seq_var;
         typedef DDS_DCPSSequence_out < Sample_GetPlan_Response_Seq> Sample_GetPlan_Response_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Sample_GetPlan_Response_TypeSupportInterface_ptr _ptr_type;
            typedef Sample_GetPlan_Response_TypeSupportInterface_var _var_type;

            static Sample_GetPlan_Response_TypeSupportInterface_ptr _duplicate (Sample_GetPlan_Response_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetPlan_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetPlan_Response_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Sample_GetPlan_Response_TypeSupportInterface () {};
            ~Sample_GetPlan_Response_TypeSupportInterface () {};
         private:
            Sample_GetPlan_Response_TypeSupportInterface (const Sample_GetPlan_Response_TypeSupportInterface &);
            Sample_GetPlan_Response_TypeSupportInterface & operator = (const Sample_GetPlan_Response_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Sample_GetPlan_Response_DataWriter_ptr _ptr_type;
            typedef Sample_GetPlan_Response_DataWriter_var _var_type;

            static Sample_GetPlan_Response_DataWriter_ptr _duplicate (Sample_GetPlan_Response_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetPlan_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetPlan_Response_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Sample_GetPlan_Response_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetPlan_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Sample_GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Sample_GetPlan_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Sample_GetPlan_Response_& instance_data) = 0;

         protected:
            Sample_GetPlan_Response_DataWriter () {};
            ~Sample_GetPlan_Response_DataWriter () {};
         private:
            Sample_GetPlan_Response_DataWriter (const Sample_GetPlan_Response_DataWriter &);
            Sample_GetPlan_Response_DataWriter & operator = (const Sample_GetPlan_Response_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Sample_GetPlan_Response_DataReader_ptr _ptr_type;
            typedef Sample_GetPlan_Response_DataReader_var _var_type;

            static Sample_GetPlan_Response_DataReader_ptr _duplicate (Sample_GetPlan_Response_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetPlan_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetPlan_Response_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Sample_GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Sample_GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Sample_GetPlan_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Sample_GetPlan_Response_& instance) = 0;

         protected:
            Sample_GetPlan_Response_DataReader () {};
            ~Sample_GetPlan_Response_DataReader () {};
         private:
            Sample_GetPlan_Response_DataReader (const Sample_GetPlan_Response_DataReader &);
            Sample_GetPlan_Response_DataReader & operator = (const Sample_GetPlan_Response_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Sample_GetPlan_Response_DataReaderView_ptr _ptr_type;
            typedef Sample_GetPlan_Response_DataReaderView_var _var_type;

            static Sample_GetPlan_Response_DataReaderView_ptr _duplicate (Sample_GetPlan_Response_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Sample_GetPlan_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Sample_GetPlan_Response_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Sample_GetPlan_Response_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Sample_GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Sample_GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Sample_GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Sample_GetPlan_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Sample_GetPlan_Response_& instance) = 0;

         protected:
            Sample_GetPlan_Response_DataReaderView () {};
            ~Sample_GetPlan_Response_DataReaderView () {};
         private:
            Sample_GetPlan_Response_DataReaderView (const Sample_GetPlan_Response_DataReaderView &);
            Sample_GetPlan_Response_DataReaderView & operator = (const Sample_GetPlan_Response_DataReaderView &);
         };

      }
   }
}




#endif
