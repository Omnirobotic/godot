

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_Feedback_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Fibonacci_Feedback__1733298434_h
#define Fibonacci_Feedback__1733298434_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_Feedback_TYPENAME;

            struct Fibonacci_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_Feedback_TypeSupport;
            class Fibonacci_Feedback_DataWriter;
            class Fibonacci_Feedback_DataReader;
            #endif

            class Fibonacci_Feedback_ 
            {
              public:
                typedef struct Fibonacci_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_Feedback_TypeSupport TypeSupport;
                typedef Fibonacci_Feedback_DataWriter DataWriter;
                typedef Fibonacci_Feedback_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   action_goal_id_ ;
                DDS_LongSeq  sequence_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_Feedback_Seq, Fibonacci_Feedback_);

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__initialize(
                Fibonacci_Feedback_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__initialize_ex(
                Fibonacci_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__initialize_w_params(
                Fibonacci_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize(
                Fibonacci_Feedback_* self);

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize_ex(
                Fibonacci_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize_w_params(
                Fibonacci_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize_optional_members(
                Fibonacci_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__copy(
                Fibonacci_Feedback_* dst,
                const Fibonacci_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

#endif /* Fibonacci_Feedback_ */

