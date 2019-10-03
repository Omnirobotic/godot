
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_Goal_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "Fibonacci_Goal_Request_Support.h"
#include "Fibonacci_Goal_Request_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_Goal_Request_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   Fibonacci_Goal_Request_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_Goal_Request_DataWriter
            #define TData       test_msgs::action::dds_::Fibonacci_Goal_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   Fibonacci_Goal_Request_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_Goal_Request_DataReader
            #define TDataSeq    Fibonacci_Goal_Request_Seq
            #define TData       test_msgs::action::dds_::Fibonacci_Goal_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    Fibonacci_Goal_Request_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::Fibonacci_Goal_Request_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::Fibonacci_Goal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_Goal_Request_TypeSupport
            #define TData        test_msgs::action::dds_::Fibonacci_Goal_Request_
            #define TDataReader  Fibonacci_Goal_Request_DataReader
            #define TDataWriter  Fibonacci_Goal_Request_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

