

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_Goal_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Fibonacci_Goal_Request__1144971960_h
#define Fibonacci_Goal_Request__1144971960_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_Goal_Request_TYPENAME;

            struct Fibonacci_Goal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_Goal_Request_TypeSupport;
            class Fibonacci_Goal_Request_DataWriter;
            class Fibonacci_Goal_Request_DataReader;
            #endif

            class Fibonacci_Goal_Request_ 
            {
              public:
                typedef struct Fibonacci_Goal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_Goal_Request_TypeSupport TypeSupport;
                typedef Fibonacci_Goal_Request_DataWriter DataWriter;
                typedef Fibonacci_Goal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   action_goal_id_ ;
                DDS_Long   order_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_example_interfaces)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_Goal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_Goal_Request_Seq, Fibonacci_Goal_Request_);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Request__initialize(
                Fibonacci_Goal_Request_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Request__initialize_ex(
                Fibonacci_Goal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Request__initialize_w_params(
                Fibonacci_Goal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_Goal_Request__finalize(
                Fibonacci_Goal_Request_* self);

            NDDSUSERDllExport
            void Fibonacci_Goal_Request__finalize_ex(
                Fibonacci_Goal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_Goal_Request__finalize_w_params(
                Fibonacci_Goal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_Goal_Request__finalize_optional_members(
                Fibonacci_Goal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal_Request__copy(
                Fibonacci_Goal_Request_* dst,
                const Fibonacci_Goal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_example_interfaces)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */

#endif /* Fibonacci_Goal_Request_ */

