

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_Feedback_.idl using "rtiddsgen".
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

#include "NestedMessage_Feedback_.h"

#include <new>

namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_Feedback_TYPENAME = "test_msgs::action::dds_::NestedMessage_Feedback_";

            DDS_TypeCode* NestedMessage_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_Feedback__g_tc_members[4]=
                {

                    {
                        (char *)"action_goal_id_",/* Member name */
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
                    }, 
                    {
                        (char *)"nested_field_no_pkg_",/* Member name */
                        {
                            1,/* Representation ID */          
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
                    }, 
                    {
                        (char *)"nested_field_",/* Member name */
                        {
                            2,/* Representation ID */          
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
                    }, 
                    {
                        (char *)"nested_different_pkg_",/* Member name */
                        {
                            3,/* Representation ID */          
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

                static DDS_TypeCode NestedMessage_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        NestedMessage_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_Feedback_*/

                if (is_initialized) {
                    return &NestedMessage_Feedback__g_tc;
                }

                NestedMessage_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                NestedMessage_Feedback__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Builtins__get_typecode();

                NestedMessage_Feedback__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Primitives__get_typecode();

                NestedMessage_Feedback__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_Feedback__g_tc;
            }

            RTIBool NestedMessage_Feedback__initialize(
                NestedMessage_Feedback_* sample) {
                return test_msgs::action::dds_::NestedMessage_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_Feedback__initialize_ex(
                NestedMessage_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_Feedback__initialize_w_params(
                NestedMessage_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->action_goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::Builtins__initialize_w_params(&sample->nested_field_no_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::Primitives__initialize_w_params(&sample->nested_field_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->nested_different_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_Feedback__finalize(
                NestedMessage_Feedback_* sample)
            {

                test_msgs::action::dds_::NestedMessage_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_Feedback__finalize_ex(
                NestedMessage_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_Feedback__finalize_w_params(
                NestedMessage_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->action_goal_id_,deallocParams);

                test_msgs::msg::dds_::Builtins__finalize_w_params(&sample->nested_field_no_pkg_,deallocParams);

                test_msgs::msg::dds_::Primitives__finalize_w_params(&sample->nested_field_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->nested_different_pkg_,deallocParams);

            }

            void NestedMessage_Feedback__finalize_optional_members(
                NestedMessage_Feedback_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->action_goal_id_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::Builtins__finalize_optional_members(&sample->nested_field_no_pkg_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::Primitives__finalize_optional_members(&sample->nested_field_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->nested_different_pkg_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_Feedback__copy(
                NestedMessage_Feedback_* dst,
                const NestedMessage_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->action_goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->action_goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::Builtins__copy(
                        &dst->nested_field_no_pkg_,(const test_msgs::msg::dds_::Builtins_*)&src->nested_field_no_pkg_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::Primitives__copy(
                        &dst->nested_field_,(const test_msgs::msg::dds_::Primitives_*)&src->nested_field_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->nested_different_pkg_,(const builtin_interfaces::msg::dds_::Time_*)&src->nested_different_pkg_)) {
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
            * Configure and implement 'NestedMessage_Feedback_' sequence class.
            */
            #define T NestedMessage_Feedback_
            #define TSeq NestedMessage_Feedback_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_Feedback__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_Feedback__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_Feedback__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */

