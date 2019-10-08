

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundedArrayPrimitivesNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "BoundedArrayPrimitivesNested_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *BoundedArrayPrimitivesNested_TYPENAME = "test_msgs::msg::dds_::BoundedArrayPrimitivesNested_";

            DDS_TypeCode* BoundedArrayPrimitivesNested__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BoundedArrayPrimitivesNested__g_tc_bounded_array_primitive_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);
                static DDS_TypeCode_Member BoundedArrayPrimitivesNested__g_tc_members[1]=
                {

                    {
                        (char *)"bounded_array_primitive_values_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode BoundedArrayPrimitivesNested__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::BoundedArrayPrimitivesNested_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        BoundedArrayPrimitivesNested__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for BoundedArrayPrimitivesNested_*/

                if (is_initialized) {
                    return &BoundedArrayPrimitivesNested__g_tc;
                }

                BoundedArrayPrimitivesNested__g_tc_bounded_array_primitive_values__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::BoundedArrayPrimitives__get_typecode();

                BoundedArrayPrimitivesNested__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& BoundedArrayPrimitivesNested__g_tc_bounded_array_primitive_values__sequence;

                is_initialized = RTI_TRUE;

                return &BoundedArrayPrimitivesNested__g_tc;
            }

            RTIBool BoundedArrayPrimitivesNested__initialize(
                BoundedArrayPrimitivesNested_* sample) {
                return test_msgs::msg::dds_::BoundedArrayPrimitivesNested__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool BoundedArrayPrimitivesNested__initialize_ex(
                BoundedArrayPrimitivesNested_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::BoundedArrayPrimitivesNested__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool BoundedArrayPrimitivesNested__initialize_w_params(
                BoundedArrayPrimitivesNested_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_initialize(&sample->bounded_array_primitive_values_ );
                    test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_set_element_allocation_params(&sample->bounded_array_primitive_values_ ,allocParams);
                    test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_set_absolute_maximum(&sample->bounded_array_primitive_values_ , (3));
                    if (!test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_set_maximum(&sample->bounded_array_primitive_values_, (3))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_set_length(&sample->bounded_array_primitive_values_, 0);
                }
                return RTI_TRUE;
            }

            void BoundedArrayPrimitivesNested__finalize(
                BoundedArrayPrimitivesNested_* sample)
            {

                test_msgs::msg::dds_::BoundedArrayPrimitivesNested__finalize_ex(sample,RTI_TRUE);
            }

            void BoundedArrayPrimitivesNested__finalize_ex(
                BoundedArrayPrimitivesNested_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::BoundedArrayPrimitivesNested__finalize_w_params(
                    sample,&deallocParams);
            }

            void BoundedArrayPrimitivesNested__finalize_w_params(
                BoundedArrayPrimitivesNested_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_set_element_deallocation_params(
                    &sample->bounded_array_primitive_values_,deallocParams);
                test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_finalize(&sample->bounded_array_primitive_values_);

            }

            void BoundedArrayPrimitivesNested__finalize_optional_members(
                BoundedArrayPrimitivesNested_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_get_length(
                        &sample->bounded_array_primitive_values_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::BoundedArrayPrimitives__finalize_optional_members(
                            test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_get_reference(
                                &sample->bounded_array_primitive_values_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool BoundedArrayPrimitivesNested__copy(
                BoundedArrayPrimitivesNested_* dst,
                const BoundedArrayPrimitivesNested_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::BoundedArrayPrimitives_Seq_copy(&dst->bounded_array_primitive_values_ ,
                    &src->bounded_array_primitive_values_ )) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'BoundedArrayPrimitivesNested_' sequence class.
            */
            #define T BoundedArrayPrimitivesNested_
            #define TSeq BoundedArrayPrimitivesNested_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::BoundedArrayPrimitivesNested__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::BoundedArrayPrimitivesNested__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::BoundedArrayPrimitivesNested__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

