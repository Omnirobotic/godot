//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: CancelGoal_Request_Dcps.h
//  Source: action_msgs\srv\dds_opensplice\CancelGoal_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _CANCELGOAL_REQUEST_DCPS_H_
#define _CANCELGOAL_REQUEST_DCPS_H_

#include "sacpp_mapping.h"
#include "CancelGoal_Request_.h"
#include "dds_dcps.h"
#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace action_msgs
{
   namespace srv
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_TypeSupportInterface;

         typedef CancelGoal_Request_TypeSupportInterface * CancelGoal_Request_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < CancelGoal_Request_TypeSupportInterface> CancelGoal_Request_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < CancelGoal_Request_TypeSupportInterface> CancelGoal_Request_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataWriter;

         typedef CancelGoal_Request_DataWriter * CancelGoal_Request_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < CancelGoal_Request_DataWriter> CancelGoal_Request_DataWriter_var;
         typedef DDS_DCPSInterface_out < CancelGoal_Request_DataWriter> CancelGoal_Request_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataReader;

         typedef CancelGoal_Request_DataReader * CancelGoal_Request_DataReader_ptr;
         typedef DDS_DCPSInterface_var < CancelGoal_Request_DataReader> CancelGoal_Request_DataReader_var;
         typedef DDS_DCPSInterface_out < CancelGoal_Request_DataReader> CancelGoal_Request_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataReaderView;

         typedef CancelGoal_Request_DataReaderView * CancelGoal_Request_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < CancelGoal_Request_DataReaderView> CancelGoal_Request_DataReaderView_var;
         typedef DDS_DCPSInterface_out < CancelGoal_Request_DataReaderView> CancelGoal_Request_DataReaderView_out;

         struct CancelGoal_Request_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < CancelGoal_Request_, struct CancelGoal_Request_Seq_uniq_> CancelGoal_Request_Seq;
         typedef DDS_DCPSSequence_var < CancelGoal_Request_Seq> CancelGoal_Request_Seq_var;
         typedef DDS_DCPSSequence_out < CancelGoal_Request_Seq> CancelGoal_Request_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef CancelGoal_Request_TypeSupportInterface_ptr _ptr_type;
            typedef CancelGoal_Request_TypeSupportInterface_var _var_type;

            static CancelGoal_Request_TypeSupportInterface_ptr _duplicate (CancelGoal_Request_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CancelGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            CancelGoal_Request_TypeSupportInterface_ptr _this () { return this; }


         protected:
            CancelGoal_Request_TypeSupportInterface () {};
            ~CancelGoal_Request_TypeSupportInterface () {};
         private:
            CancelGoal_Request_TypeSupportInterface (const CancelGoal_Request_TypeSupportInterface &);
            CancelGoal_Request_TypeSupportInterface & operator = (const CancelGoal_Request_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef CancelGoal_Request_DataWriter_ptr _ptr_type;
            typedef CancelGoal_Request_DataWriter_var _var_type;

            static CancelGoal_Request_DataWriter_ptr _duplicate (CancelGoal_Request_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CancelGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            CancelGoal_Request_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const CancelGoal_Request_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const CancelGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const CancelGoal_Request_& instance_data) = 0;

         protected:
            CancelGoal_Request_DataWriter () {};
            ~CancelGoal_Request_DataWriter () {};
         private:
            CancelGoal_Request_DataWriter (const CancelGoal_Request_DataWriter &);
            CancelGoal_Request_DataWriter & operator = (const CancelGoal_Request_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef CancelGoal_Request_DataReader_ptr _ptr_type;
            typedef CancelGoal_Request_DataReader_var _var_type;

            static CancelGoal_Request_DataReader_ptr _duplicate (CancelGoal_Request_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CancelGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            CancelGoal_Request_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const CancelGoal_Request_& instance) = 0;

         protected:
            CancelGoal_Request_DataReader () {};
            ~CancelGoal_Request_DataReader () {};
         private:
            CancelGoal_Request_DataReader (const CancelGoal_Request_DataReader &);
            CancelGoal_Request_DataReader & operator = (const CancelGoal_Request_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef CancelGoal_Request_DataReaderView_ptr _ptr_type;
            typedef CancelGoal_Request_DataReaderView_var _var_type;

            static CancelGoal_Request_DataReaderView_ptr _duplicate (CancelGoal_Request_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CancelGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CancelGoal_Request_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            CancelGoal_Request_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const CancelGoal_Request_& instance) = 0;

         protected:
            CancelGoal_Request_DataReaderView () {};
            ~CancelGoal_Request_DataReaderView () {};
         private:
            CancelGoal_Request_DataReaderView (const CancelGoal_Request_DataReaderView &);
            CancelGoal_Request_DataReaderView & operator = (const CancelGoal_Request_DataReaderView &);
         };

      }
   }
}




#endif