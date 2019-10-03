//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Fibonacci_Feedback_Dcps.h
//  Source: test_msgs\action\dds_opensplice\Fibonacci_Feedback_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _FIBONACCI_FEEDBACK_DCPS_H_
#define _FIBONACCI_FEEDBACK_DCPS_H_

#include "sacpp_mapping.h"
#include "Fibonacci_Feedback_.h"
#include "dds_dcps.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace action
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_TypeSupportInterface;

         typedef Fibonacci_Feedback_TypeSupportInterface * Fibonacci_Feedback_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Fibonacci_Feedback_TypeSupportInterface> Fibonacci_Feedback_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Fibonacci_Feedback_TypeSupportInterface> Fibonacci_Feedback_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_DataWriter;

         typedef Fibonacci_Feedback_DataWriter * Fibonacci_Feedback_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Fibonacci_Feedback_DataWriter> Fibonacci_Feedback_DataWriter_var;
         typedef DDS_DCPSInterface_out < Fibonacci_Feedback_DataWriter> Fibonacci_Feedback_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_DataReader;

         typedef Fibonacci_Feedback_DataReader * Fibonacci_Feedback_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Fibonacci_Feedback_DataReader> Fibonacci_Feedback_DataReader_var;
         typedef DDS_DCPSInterface_out < Fibonacci_Feedback_DataReader> Fibonacci_Feedback_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_DataReaderView;

         typedef Fibonacci_Feedback_DataReaderView * Fibonacci_Feedback_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Fibonacci_Feedback_DataReaderView> Fibonacci_Feedback_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Fibonacci_Feedback_DataReaderView> Fibonacci_Feedback_DataReaderView_out;

         struct Fibonacci_Feedback_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < Fibonacci_Feedback_, struct Fibonacci_Feedback_Seq_uniq_> Fibonacci_Feedback_Seq;
         typedef DDS_DCPSSequence_var < Fibonacci_Feedback_Seq> Fibonacci_Feedback_Seq_var;
         typedef DDS_DCPSSequence_out < Fibonacci_Feedback_Seq> Fibonacci_Feedback_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Fibonacci_Feedback_TypeSupportInterface_ptr _ptr_type;
            typedef Fibonacci_Feedback_TypeSupportInterface_var _var_type;

            static Fibonacci_Feedback_TypeSupportInterface_ptr _duplicate (Fibonacci_Feedback_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Fibonacci_Feedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Fibonacci_Feedback_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Fibonacci_Feedback_TypeSupportInterface () {};
            ~Fibonacci_Feedback_TypeSupportInterface () {};
         private:
            Fibonacci_Feedback_TypeSupportInterface (const Fibonacci_Feedback_TypeSupportInterface &);
            Fibonacci_Feedback_TypeSupportInterface & operator = (const Fibonacci_Feedback_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Fibonacci_Feedback_DataWriter_ptr _ptr_type;
            typedef Fibonacci_Feedback_DataWriter_var _var_type;

            static Fibonacci_Feedback_DataWriter_ptr _duplicate (Fibonacci_Feedback_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Fibonacci_Feedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Fibonacci_Feedback_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Fibonacci_Feedback_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_Feedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Fibonacci_Feedback_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Fibonacci_Feedback_& instance_data) = 0;

         protected:
            Fibonacci_Feedback_DataWriter () {};
            ~Fibonacci_Feedback_DataWriter () {};
         private:
            Fibonacci_Feedback_DataWriter (const Fibonacci_Feedback_DataWriter &);
            Fibonacci_Feedback_DataWriter & operator = (const Fibonacci_Feedback_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Fibonacci_Feedback_DataReader_ptr _ptr_type;
            typedef Fibonacci_Feedback_DataReader_var _var_type;

            static Fibonacci_Feedback_DataReader_ptr _duplicate (Fibonacci_Feedback_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Fibonacci_Feedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Fibonacci_Feedback_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Fibonacci_Feedback_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Fibonacci_Feedback_& instance) = 0;

         protected:
            Fibonacci_Feedback_DataReader () {};
            ~Fibonacci_Feedback_DataReader () {};
         private:
            Fibonacci_Feedback_DataReader (const Fibonacci_Feedback_DataReader &);
            Fibonacci_Feedback_DataReader & operator = (const Fibonacci_Feedback_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Fibonacci_Feedback_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Fibonacci_Feedback_DataReaderView_ptr _ptr_type;
            typedef Fibonacci_Feedback_DataReaderView_var _var_type;

            static Fibonacci_Feedback_DataReaderView_ptr _duplicate (Fibonacci_Feedback_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Fibonacci_Feedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Fibonacci_Feedback_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Fibonacci_Feedback_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Fibonacci_Feedback_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Fibonacci_Feedback_& instance) = 0;

         protected:
            Fibonacci_Feedback_DataReaderView () {};
            ~Fibonacci_Feedback_DataReaderView () {};
         private:
            Fibonacci_Feedback_DataReaderView (const Fibonacci_Feedback_DataReaderView &);
            Fibonacci_Feedback_DataReaderView & operator = (const Fibonacci_Feedback_DataReaderView &);
         };

      }
   }
}




#endif
