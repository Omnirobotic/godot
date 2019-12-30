#pragma once
#ifndef _AOS_CORE_IPC_RPC_RESPONSE_HELPER_H_
#define _AOS_CORE_IPC_RPC_RESPONSE_HELPER_H_

#include <string>

#include "factory.h"
#include "service_discovery.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            namespace helper
            {
                template<typename rpc_response_service_type = rpc_server::rpc_response_service>
                class rpc_response_service : public rpc_response_service_type
                {
                public:
                    rpc_response_service(const std::string& service_name, const std::string& resource_name = "") : rpc_response_service_type(service_name)
                    {
                        static_assert(std::is_base_of<rpc_server::rpc_response_service, rpc_response_service_type>::value,
                            "This constructor can only be used with template type aos::core::ipc::rpc_server::rpc_response_service.");

                        auto address = service_discovery::get_address(service_name, resource_name);
                        auto rpc_server = factory::get_rpc_server(address.hostname, address.port);

                        rpc_server->register_service(*this);

                        rpc_server->start();
                    }
                };
            }
        }
    }
}

#endif // _AOS_CORE_IPC_RPC_RESPONSE_HELPER_H_