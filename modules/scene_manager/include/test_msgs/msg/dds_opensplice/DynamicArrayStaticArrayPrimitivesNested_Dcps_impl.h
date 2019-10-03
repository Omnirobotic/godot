#ifndef DYNAMICARRAYSTATICARRAYPRIMITIVESNESTED_DCPS_IMPL_H_
#define DYNAMICARRAYSTATICARRAYPRIMITIVESNESTED_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_DynamicArrayStaticArrayPrimitivesNested_.h"
#include "TypeSupportMetaHolder.h"
#include "TypeSupport.h"
#include "FooDataWriter_impl.h"
#include "FooDataReader_impl.h"
#include "FooDataReaderView_impl.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs {

    namespace msg {

        namespace dds_ {

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayStaticArrayPrimitivesNested_TypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
            {
            public:
                DynamicArrayStaticArrayPrimitivesNested_TypeSupportMetaHolder ();
                virtual ~DynamicArrayStaticArrayPrimitivesNested_TypeSupportMetaHolder ();
            
            private:
                ::DDS::OpenSplice::TypeSupportMetaHolder * clone();
            
                ::DDS::OpenSplice::DataWriter * create_datawriter ();
            
                ::DDS::OpenSplice::DataReader * create_datareader ();
            
                ::DDS::OpenSplice::DataReaderView * create_view ();
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayStaticArrayPrimitivesNested_TypeSupport : public virtual DynamicArrayStaticArrayPrimitivesNested_TypeSupportInterface,
                                                               public ::DDS::OpenSplice::TypeSupport
            {
            public:
                DynamicArrayStaticArrayPrimitivesNested_TypeSupport ();
            
                virtual ~DynamicArrayStaticArrayPrimitivesNested_TypeSupport ();
            
            private:
                DynamicArrayStaticArrayPrimitivesNested_TypeSupport (const DynamicArrayStaticArrayPrimitivesNested_TypeSupport &);
            
                DynamicArrayStaticArrayPrimitivesNested_TypeSupport & operator= (const DynamicArrayStaticArrayPrimitivesNested_TypeSupport &);
            };
            
            typedef DynamicArrayStaticArrayPrimitivesNested_TypeSupportInterface_var DynamicArrayStaticArrayPrimitivesNested_TypeSupport_var;
            typedef DynamicArrayStaticArrayPrimitivesNested_TypeSupportInterface_ptr DynamicArrayStaticArrayPrimitivesNested_TypeSupport_ptr;
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayStaticArrayPrimitivesNested_DataWriter_impl : public virtual DynamicArrayStaticArrayPrimitivesNested_DataWriter,
                                                                   public ::DDS::OpenSplice::FooDataWriter_impl
            {
                friend class DDS::OpenSplice::Publisher;
                friend class DynamicArrayStaticArrayPrimitivesNested_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::InstanceHandle_t register_instance (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    DynamicArrayStaticArrayPrimitivesNested_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            protected:
                DynamicArrayStaticArrayPrimitivesNested_DataWriter_impl ();
            
                virtual ~DynamicArrayStaticArrayPrimitivesNested_DataWriter_impl ();
            
                virtual DDS::ReturnCode_t init (
                                DDS::OpenSplice::Publisher *publisher,
                                DDS::OpenSplice::DomainParticipant *participant,
                                const DDS::DataWriterQos &qos,
                                DDS::OpenSplice::Topic *a_topic,
                                const char *name,
                                DDS::OpenSplice::cxxCopyIn copyIn,
                                DDS::OpenSplice::cxxCopyOut copyOut,
                                u_writerCopy writerCopy,
                                void *cdrMarshaler);
            
            private:
                DynamicArrayStaticArrayPrimitivesNested_DataWriter_impl (const DynamicArrayStaticArrayPrimitivesNested_DataWriter_impl &);
            
                DynamicArrayStaticArrayPrimitivesNested_DataWriter_impl & operator= (const DynamicArrayStaticArrayPrimitivesNested_DataWriter_impl &);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayStaticArrayPrimitivesNested_DataReader_impl : public virtual DynamicArrayStaticArrayPrimitivesNested_DataReader,
                                                                   public ::DDS::OpenSplice::FooDataReader_impl
            {
                friend class DDS::OpenSplice::Subscriber;
                friend class DynamicArrayStaticArrayPrimitivesNested_TypeSupportMetaHolder;
                friend class DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    DynamicArrayStaticArrayPrimitivesNested_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    DynamicArrayStaticArrayPrimitivesNested_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    DynamicArrayStaticArrayPrimitivesNested_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                DynamicArrayStaticArrayPrimitivesNested_DataReader_impl ();
            
                virtual ~DynamicArrayStaticArrayPrimitivesNested_DataReader_impl ();
            
                DDS::ReturnCode_t init (
                        DDS::OpenSplice::Subscriber *subscriber,
                        const DDS::DataReaderQos &qos,
                        DDS::OpenSplice::TopicDescription *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut,
                        DDS::OpenSplice::cxxReaderCopy readerCopy,
                        void *cdrMarshaler);
            
                static void* dataSeqAlloc (
                    void * data_values,
                    DDS::ULong len);
            
                static void dataSeqLength (
                    void * data_values,
                    DDS::ULong len);
            
                static void * dataSeqGetBuffer (
                    void * data_values,
                    DDS::ULong index);
            
                static void dataSeqCopyOut (
                    const void * from,
                    void * received_data);
                static void copyDataOut(const void *from, void *to);
            
            private:
                DynamicArrayStaticArrayPrimitivesNested_DataReader_impl (const DynamicArrayStaticArrayPrimitivesNested_DataReader_impl &);
                DynamicArrayStaticArrayPrimitivesNested_DataReader_impl & operator= (const DynamicArrayStaticArrayPrimitivesNested_DataReader_impl &);
            
                static ::DDS::ReturnCode_t check_preconditions (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl : public virtual DynamicArrayStaticArrayPrimitivesNested_DataReaderView,
                                                                       public ::DDS::OpenSplice::FooDataReaderView_impl
            {
                friend class DDS::OpenSplice::DataReader;
                friend class DynamicArrayStaticArrayPrimitivesNested_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    DynamicArrayStaticArrayPrimitivesNested_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    DynamicArrayStaticArrayPrimitivesNested_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    DynamicArrayStaticArrayPrimitivesNested_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    DynamicArrayStaticArrayPrimitivesNested_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const DynamicArrayStaticArrayPrimitivesNested_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl ();
            
                virtual ~DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl ();
            
                virtual DDS::ReturnCode_t init (
                    DDS::OpenSplice::DataReader *reader,
                    const char *name,
                    const DDS::DataReaderViewQos &qos,
                    DDS::OpenSplice::cxxCopyIn copyIn,
                    DDS::OpenSplice::cxxCopyOut copyOut);
            
            private:
                DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl (const DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl &);
            
                DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl & operator= (const DynamicArrayStaticArrayPrimitivesNested_DataReaderView_impl &);
            };
            
        }

    }

}

#undef OS_API
#endif
