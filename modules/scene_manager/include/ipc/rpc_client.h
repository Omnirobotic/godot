#pragma once
#ifndef _AOS_CORE_IPC_RPC_CLIENT_H_
#define _AOS_CORE_IPC_RPC_CLIENT_H_

#include <string>

#include "ipc.h"
#include "message.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            // Forward declaration
            class factory;

            // Class definition
            class AOS_CORE_IPC_API rpc_client : private _ipc
            {
                friend class factory;

            public:
                //
                // rpc_request_service
                //
                class AOS_CORE_IPC_API rpc_request_service
                {
                protected:
                    std::shared_ptr<rpc_client> _rpc_client;

                private:
                    std::string _service_name;

                protected:
                    rpc_request_service(std::shared_ptr<rpc_client> rpc_client, const std::string& service_name) : _rpc_client(rpc_client), _service_name(service_name) { }
                    rpc_request_service(const std::string& service_name) : _service_name(service_name) { }

                    void set_rpc_client(std::shared_ptr<rpc_client> rpc_client);

                public:
                    void request(const std::string& function_name, const message& request, message& response) const;
                };

                //
                // rpc_client
                //
            public:
                void request(const std::string& service_name, const std::string& function_name, const message& request, message& response) const;

            private:
                rpc_client(const std::string& hostname, int port)
                    : _ipc(hostname, port, mode::RPC_CLIENT, protocol::TCP) {};
            };
        }
    }
}

#endif // _AOS_CORE_IPC_RPC_CLIENT_H_