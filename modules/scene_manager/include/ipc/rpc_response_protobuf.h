#pragma once
#ifndef _AOS_CORE_IPC_RPC_RESPONSE_PROTOBUF_H_
#define _AOS_CORE_IPC_RPC_RESPONSE_PROTOBUF_H_

#include <string>

#include "message_protobuf.h"
#include "rpc_server.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            class protobuf_response_service : public rpc_server::rpc_response_service
            {
            protected:
                protobuf_response_service(const std::string& service_name) : rpc_server::rpc_response_service(service_name) { }

                template<typename request_type, typename response_type>
                void register_response(const std::string& function, std::function<void(const request_type&, response_type&)> on_msg)
                {
                    rpc_response_service::register_response(function, [on_msg](const message& req_msg, message& rep_msg)
                    {
                        request_type req;
                        message_protobuf req_pb_msg;
                        req_pb_msg.zero_copy_from(req_msg);
                        req_pb_msg.get_data(req);

                        response_type rep;
                        on_msg(req, rep);

                        message_protobuf rep_pb_msg(rep);
                        rep_msg.zero_copy_from(rep_pb_msg);
                    });
                }
            };
        }
    }
}

#endif // _AOS_CORE_IPC_RPC_RESPONSE_PROTOBUF_H_