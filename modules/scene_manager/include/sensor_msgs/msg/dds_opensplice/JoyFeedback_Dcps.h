//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: JoyFeedback_Dcps.h
//  Source: sensor_msgs\msg\dds_opensplice\JoyFeedback_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _JOYFEEDBACK_DCPS_H_
#define _JOYFEEDBACK_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "JoyFeedback_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_TypeSupportInterface;

         typedef JoyFeedback_TypeSupportInterface * JoyFeedback_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < JoyFeedback_TypeSupportInterface> JoyFeedback_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < JoyFeedback_TypeSupportInterface> JoyFeedback_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_DataWriter;

         typedef JoyFeedback_DataWriter * JoyFeedback_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < JoyFeedback_DataWriter> JoyFeedback_DataWriter_var;
         typedef DDS_DCPSInterface_out < JoyFeedback_DataWriter> JoyFeedback_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_DataReader;

         typedef JoyFeedback_DataReader * JoyFeedback_DataReader_ptr;
         typedef DDS_DCPSInterface_var < JoyFeedback_DataReader> JoyFeedback_DataReader_var;
         typedef DDS_DCPSInterface_out < JoyFeedback_DataReader> JoyFeedback_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_DataReaderView;

         typedef JoyFeedback_DataReaderView * JoyFeedback_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < JoyFeedback_DataReaderView> JoyFeedback_DataReaderView_var;
         typedef DDS_DCPSInterface_out < JoyFeedback_DataReaderView> JoyFeedback_DataReaderView_out;

         struct JoyFeedback_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < JoyFeedback_, struct JoyFeedback_Seq_uniq_> JoyFeedback_Seq;
         typedef DDS_DCPSSequence_var < JoyFeedback_Seq> JoyFeedback_Seq_var;
         typedef DDS_DCPSSequence_out < JoyFeedback_Seq> JoyFeedback_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef JoyFeedback_TypeSupportInterface_ptr _ptr_type;
            typedef JoyFeedback_TypeSupportInterface_var _var_type;

            static JoyFeedback_TypeSupportInterface_ptr _duplicate (JoyFeedback_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static JoyFeedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static JoyFeedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static JoyFeedback_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            JoyFeedback_TypeSupportInterface_ptr _this () { return this; }


         protected:
            JoyFeedback_TypeSupportInterface () {};
            ~JoyFeedback_TypeSupportInterface () {};
         private:
            JoyFeedback_TypeSupportInterface (const JoyFeedback_TypeSupportInterface &);
            JoyFeedback_TypeSupportInterface & operator = (const JoyFeedback_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef JoyFeedback_DataWriter_ptr _ptr_type;
            typedef JoyFeedback_DataWriter_var _var_type;

            static JoyFeedback_DataWriter_ptr _duplicate (JoyFeedback_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static JoyFeedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static JoyFeedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static JoyFeedback_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            JoyFeedback_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const JoyFeedback_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const JoyFeedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const JoyFeedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const JoyFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const JoyFeedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const JoyFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const JoyFeedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const JoyFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const JoyFeedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const JoyFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (JoyFeedback_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const JoyFeedback_& instance_data) = 0;

         protected:
            JoyFeedback_DataWriter () {};
            ~JoyFeedback_DataWriter () {};
         private:
            JoyFeedback_DataWriter (const JoyFeedback_DataWriter &);
            JoyFeedback_DataWriter & operator = (const JoyFeedback_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef JoyFeedback_DataReader_ptr _ptr_type;
            typedef JoyFeedback_DataReader_var _var_type;

            static JoyFeedback_DataReader_ptr _duplicate (JoyFeedback_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static JoyFeedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static JoyFeedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static JoyFeedback_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            JoyFeedback_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (JoyFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (JoyFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (JoyFeedback_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const JoyFeedback_& instance) = 0;

         protected:
            JoyFeedback_DataReader () {};
            ~JoyFeedback_DataReader () {};
         private:
            JoyFeedback_DataReader (const JoyFeedback_DataReader &);
            JoyFeedback_DataReader & operator = (const JoyFeedback_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef JoyFeedback_DataReaderView_ptr _ptr_type;
            typedef JoyFeedback_DataReaderView_var _var_type;

            static JoyFeedback_DataReaderView_ptr _duplicate (JoyFeedback_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static JoyFeedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static JoyFeedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static JoyFeedback_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            JoyFeedback_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (JoyFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (JoyFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (JoyFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (JoyFeedback_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const JoyFeedback_& instance) = 0;

         protected:
            JoyFeedback_DataReaderView () {};
            ~JoyFeedback_DataReaderView () {};
         private:
            JoyFeedback_DataReaderView (const JoyFeedback_DataReaderView &);
            JoyFeedback_DataReaderView & operator = (const JoyFeedback_DataReaderView &);
         };

      }
   }
}




#endif
