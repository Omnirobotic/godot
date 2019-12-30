#pragma once
#ifndef _AOS_CORE_IPC_RPC_REQUEST_PROTOBUF_H_
#define _AOS_CORE_IPC_RPC_REQUEST_PROTOBUF_H_

#include <string>

#include "message_protobuf.h"
#include "rpc_client.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            class protobuf_request_service : public rpc_client::rpc_request_service
            {
            protected:
                protobuf_request_service(std::shared_ptr<rpc_client> rpc_client, const std::string& service_name) : rpc_client::rpc_request_service(rpc_client, service_name) { }
                protobuf_request_service(const std::string& service_name) : rpc_client::rpc_request_service(service_name) { }

                template<typename request_type, typename response_type>
                void request(const std::string& function, const request_type& req, response_type& rep) const
                {
                    message_protobuf request(req);
                    message_protobuf response;

                    rpc_client::rpc_request_service::request(function, request, response);

                    response.get_data(rep);
                }
            };
        }
    }
}

#endif // _AOS_CORE_IPC_RPC_REQUEST_PROTOBUF_H_