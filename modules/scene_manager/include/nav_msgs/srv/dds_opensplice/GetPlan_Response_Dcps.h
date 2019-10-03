//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GetPlan_Response_Dcps.h
//  Source: nav_msgs\srv\dds_opensplice\GetPlan_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _GETPLAN_RESPONSE_DCPS_H_
#define _GETPLAN_RESPONSE_DCPS_H_

#include "sacpp_mapping.h"
#include "GetPlan_Response_.h"
#include "dds_dcps.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace nav_msgs
{
   namespace srv
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_TypeSupportInterface;

         typedef GetPlan_Response_TypeSupportInterface * GetPlan_Response_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < GetPlan_Response_TypeSupportInterface> GetPlan_Response_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < GetPlan_Response_TypeSupportInterface> GetPlan_Response_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_DataWriter;

         typedef GetPlan_Response_DataWriter * GetPlan_Response_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < GetPlan_Response_DataWriter> GetPlan_Response_DataWriter_var;
         typedef DDS_DCPSInterface_out < GetPlan_Response_DataWriter> GetPlan_Response_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_DataReader;

         typedef GetPlan_Response_DataReader * GetPlan_Response_DataReader_ptr;
         typedef DDS_DCPSInterface_var < GetPlan_Response_DataReader> GetPlan_Response_DataReader_var;
         typedef DDS_DCPSInterface_out < GetPlan_Response_DataReader> GetPlan_Response_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_DataReaderView;

         typedef GetPlan_Response_DataReaderView * GetPlan_Response_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < GetPlan_Response_DataReaderView> GetPlan_Response_DataReaderView_var;
         typedef DDS_DCPSInterface_out < GetPlan_Response_DataReaderView> GetPlan_Response_DataReaderView_out;

         struct GetPlan_Response_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < GetPlan_Response_, struct GetPlan_Response_Seq_uniq_> GetPlan_Response_Seq;
         typedef DDS_DCPSSequence_var < GetPlan_Response_Seq> GetPlan_Response_Seq_var;
         typedef DDS_DCPSSequence_out < GetPlan_Response_Seq> GetPlan_Response_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef GetPlan_Response_TypeSupportInterface_ptr _ptr_type;
            typedef GetPlan_Response_TypeSupportInterface_var _var_type;

            static GetPlan_Response_TypeSupportInterface_ptr _duplicate (GetPlan_Response_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetPlan_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static GetPlan_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetPlan_Response_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            GetPlan_Response_TypeSupportInterface_ptr _this () { return this; }


         protected:
            GetPlan_Response_TypeSupportInterface () {};
            ~GetPlan_Response_TypeSupportInterface () {};
         private:
            GetPlan_Response_TypeSupportInterface (const GetPlan_Response_TypeSupportInterface &);
            GetPlan_Response_TypeSupportInterface & operator = (const GetPlan_Response_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef GetPlan_Response_DataWriter_ptr _ptr_type;
            typedef GetPlan_Response_DataWriter_var _var_type;

            static GetPlan_Response_DataWriter_ptr _duplicate (GetPlan_Response_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetPlan_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static GetPlan_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetPlan_Response_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            GetPlan_Response_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const GetPlan_Response_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const GetPlan_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const GetPlan_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const GetPlan_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (GetPlan_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const GetPlan_Response_& instance_data) = 0;

         protected:
            GetPlan_Response_DataWriter () {};
            ~GetPlan_Response_DataWriter () {};
         private:
            GetPlan_Response_DataWriter (const GetPlan_Response_DataWriter &);
            GetPlan_Response_DataWriter & operator = (const GetPlan_Response_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef GetPlan_Response_DataReader_ptr _ptr_type;
            typedef GetPlan_Response_DataReader_var _var_type;

            static GetPlan_Response_DataReader_ptr _duplicate (GetPlan_Response_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetPlan_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static GetPlan_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetPlan_Response_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            GetPlan_Response_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (GetPlan_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const GetPlan_Response_& instance) = 0;

         protected:
            GetPlan_Response_DataReader () {};
            ~GetPlan_Response_DataReader () {};
         private:
            GetPlan_Response_DataReader (const GetPlan_Response_DataReader &);
            GetPlan_Response_DataReader & operator = (const GetPlan_Response_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef GetPlan_Response_DataReaderView_ptr _ptr_type;
            typedef GetPlan_Response_DataReaderView_var _var_type;

            static GetPlan_Response_DataReaderView_ptr _duplicate (GetPlan_Response_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetPlan_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static GetPlan_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetPlan_Response_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            GetPlan_Response_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (GetPlan_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (GetPlan_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (GetPlan_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const GetPlan_Response_& instance) = 0;

         protected:
            GetPlan_Response_DataReaderView () {};
            ~GetPlan_Response_DataReaderView () {};
         private:
            GetPlan_Response_DataReaderView (const GetPlan_Response_DataReaderView &);
            GetPlan_Response_DataReaderView & operator = (const GetPlan_Response_DataReaderView &);
         };

      }
   }
}




#endif
