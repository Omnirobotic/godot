

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_Result_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Fibonacci_Result_Response__752257621_h
#define Fibonacci_Result_Response__752257621_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_Result_Response_TYPENAME;

            struct Fibonacci_Result_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_Result_Response_TypeSupport;
            class Fibonacci_Result_Response_DataWriter;
            class Fibonacci_Result_Response_DataReader;
            #endif

            class Fibonacci_Result_Response_ 
            {
              public:
                typedef struct Fibonacci_Result_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_Result_Response_TypeSupport TypeSupport;
                typedef Fibonacci_Result_Response_DataWriter DataWriter;
                typedef Fibonacci_Result_Response_DataReader DataReader;
                #endif

                DDS_Octet   action_status_ ;
                DDS_LongSeq  sequence_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_example_interfaces)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_Result_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_Result_Response_Seq, Fibonacci_Result_Response_);

            NDDSUSERDllExport
            RTIBool Fibonacci_Result_Response__initialize(
                Fibonacci_Result_Response_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_Result_Response__initialize_ex(
                Fibonacci_Result_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_Result_Response__initialize_w_params(
                Fibonacci_Result_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_Result_Response__finalize(
                Fibonacci_Result_Response_* self);

            NDDSUSERDllExport
            void Fibonacci_Result_Response__finalize_ex(
                Fibonacci_Result_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_Result_Response__finalize_w_params(
                Fibonacci_Result_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_Result_Response__finalize_optional_members(
                Fibonacci_Result_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_Result_Response__copy(
                Fibonacci_Result_Response_* dst,
                const Fibonacci_Result_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_example_interfaces)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */

#endif /* Fibonacci_Result_Response_ */

