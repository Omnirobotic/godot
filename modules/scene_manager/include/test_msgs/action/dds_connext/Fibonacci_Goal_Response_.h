

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_Goal_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Fibonacci_Goal_Response__1126982925_h
#define Fibonacci_Goal_Response__1126982925_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_Goal_Response_TYPENAME;

            struct Fibonacci_Goal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_Goal_Response_TypeSupport;
            class Fibonacci_Goal_Response_DataWriter;
            class Fibonacci_Goal_Response_DataReader;
            #endif

            class Fibonacci_Goal_Response_ 
            {
              public:
                typedef struct Fibonacci_Goal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_Goal_Response_TypeSupport TypeSupport;
                typedef Fibonacci_Goal_Response_DataWriter DataWriter;
                typedef Fibonacci_Goal_Response_DataReader DataReader;
                #endif

                DDS_Boolean   accepted_ ;
                builtin_interfaces::msg::dds_::Time_   stamp_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_Goal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_Goal_Response_Seq, Fibonacci_Goal_Response_);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Response__initialize(
                Fibonacci_Goal_Response_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Response__initialize_ex(
                Fibonacci_Goal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Response__initialize_w_params(
                Fibonacci_Goal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_Goal_Response__finalize(
                Fibonacci_Goal_Response_* self);

            NDDSUSERDllExport
            void Fibonacci_Goal_Response__finalize_ex(
                Fibonacci_Goal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_Goal_Response__finalize_w_params(
                Fibonacci_Goal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_Goal_Response__finalize_optional_members(
                Fibonacci_Goal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Response__copy(
                Fibonacci_Goal_Response_* dst,
                const Fibonacci_Goal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

#endif /* Fibonacci_Goal_Response_ */

