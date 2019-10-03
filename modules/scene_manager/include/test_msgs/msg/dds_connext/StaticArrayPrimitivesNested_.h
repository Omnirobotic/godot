

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StaticArrayPrimitivesNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StaticArrayPrimitivesNested__1177824487_h
#define StaticArrayPrimitivesNested__1177824487_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "test_msgs/msg/dds_connext/StaticArrayPrimitives_.h"
namespace test_msgs {
    namespace msg {
        namespace dds_ {

            typedef    test_msgs::msg::dds_::StaticArrayPrimitives_   test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4 [4];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4Seq, test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_initialize(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_initialize_ex(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_initialize_w_params(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_finalize(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_finalize_ex(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_finalize_w_params(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_finalize_optional_members(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4_copy(
                test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* dst,
                const test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *StaticArrayPrimitivesNested_TYPENAME;

            struct StaticArrayPrimitivesNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StaticArrayPrimitivesNested_TypeSupport;
            class StaticArrayPrimitivesNested_DataWriter;
            class StaticArrayPrimitivesNested_DataReader;
            #endif

            class StaticArrayPrimitivesNested_ 
            {
              public:
                typedef struct StaticArrayPrimitivesNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StaticArrayPrimitivesNested_TypeSupport TypeSupport;
                typedef StaticArrayPrimitivesNested_DataWriter DataWriter;
                typedef StaticArrayPrimitivesNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitivesNested__test_msgs__msg__dds___StaticArrayPrimitives__array_4   static_array_primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StaticArrayPrimitivesNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StaticArrayPrimitivesNested_Seq, StaticArrayPrimitivesNested_);

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitivesNested__initialize(
                StaticArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitivesNested__initialize_ex(
                StaticArrayPrimitivesNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitivesNested__initialize_w_params(
                StaticArrayPrimitivesNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StaticArrayPrimitivesNested__finalize(
                StaticArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            void StaticArrayPrimitivesNested__finalize_ex(
                StaticArrayPrimitivesNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StaticArrayPrimitivesNested__finalize_w_params(
                StaticArrayPrimitivesNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StaticArrayPrimitivesNested__finalize_optional_members(
                StaticArrayPrimitivesNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitivesNested__copy(
                StaticArrayPrimitivesNested_* dst,
                const StaticArrayPrimitivesNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* StaticArrayPrimitivesNested_ */

