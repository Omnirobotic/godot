

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_Goal_Request_.idl using "rtiddsgen".
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

#include "Fibonacci_Goal_Request_.h"

#include <new>

namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_Goal_Request_TYPENAME = "test_msgs::action::dds_::Fibonacci_Goal_Request_";

            DDS_TypeCode* Fibonacci_Goal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Fibonacci_Goal_Request__g_tc_members[2]=
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
                        (char *)"order_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Fibonacci_Goal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::Fibonacci_Goal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Fibonacci_Goal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_Goal_Request_*/

                if (is_initialized) {
                    return &Fibonacci_Goal_Request__g_tc;
                }

                Fibonacci_Goal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                Fibonacci_Goal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &Fibonacci_Goal_Request__g_tc;
            }

            RTIBool Fibonacci_Goal_Request__initialize(
                Fibonacci_Goal_Request_* sample) {
                return test_msgs::action::dds_::Fibonacci_Goal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_Goal_Request__initialize_ex(
                Fibonacci_Goal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::Fibonacci_Goal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_Goal_Request__initialize_w_params(
                Fibonacci_Goal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initLong(&sample->order_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Fibonacci_Goal_Request__finalize(
                Fibonacci_Goal_Request_* sample)
            {

                test_msgs::action::dds_::Fibonacci_Goal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_Goal_Request__finalize_ex(
                Fibonacci_Goal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::Fibonacci_Goal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_Goal_Request__finalize_w_params(
                Fibonacci_Goal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->action_goal_id_,deallocParams);

            }

            void Fibonacci_Goal_Request__finalize_optional_members(
                Fibonacci_Goal_Request_* sample, RTIBool deletePointers)
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
            }

            RTIBool Fibonacci_Goal_Request__copy(
                Fibonacci_Goal_Request_* dst,
                const Fibonacci_Goal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->action_goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->action_goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyLong (
                        &dst->order_, &src->order_)) { 
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
            * Configure and implement 'Fibonacci_Goal_Request_' sequence class.
            */
            #define T Fibonacci_Goal_Request_
            #define TSeq Fibonacci_Goal_Request_Seq

            #define T_initialize_w_params test_msgs::action::dds_::Fibonacci_Goal_Request__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::Fibonacci_Goal_Request__finalize_w_params
            #define T_copy       test_msgs::action::dds_::Fibonacci_Goal_Request__copy

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
