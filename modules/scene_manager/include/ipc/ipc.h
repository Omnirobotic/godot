#pragma once
#ifndef _AOS_CORE_IPC_IPC_H_
#define _AOS_CORE_IPC_IPC_H_

#include <string>

#include "exports.h"
#include "message.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            struct ipc_address
            {
                ipc_address() { }
                ipc_address(const std::string& hostname_, int port_) : hostname(hostname_), port(port_) { }

                bool operator<(const ipc_address& other) const
                {
                    return hostname + ":" + std::to_string(port) < other.hostname + ":" + std::to_string(other.port);
                }

                std::string resource_name;
                std::string hostname;
                int port;
            };

            class rpc_reponse_exception : public std::exception
            {
            public:
                rpc_reponse_exception(const char* error_message) : std::exception(error_message) { }
                rpc_reponse_exception(std::shared_ptr<char[]> error_message) : std::exception(error_message.get()) { }
                rpc_reponse_exception(const std::string& error_message) : std::exception(error_message.c_str()) { }
            };

            class AOS_CORE_IPC_API _ipc
            {
            protected:
                class timeout_exception : public std::exception {};
                class connection_closed_exception : public std::exception {};

                enum mode
                {
                    PUBLISHER,
                    SUBSCRIBER,
                    RPC_CLIENT,
                    RPC_SERVER
                };

                enum protocol
                {
                    TCP,
                    UDP
                };

                enum option
                {
                    DEFAULT,
                    HIGH_THROUGHPUT, // Millions of small (< 100KB) messages per second
                    BIG_MESSAGES // Thousands of big (> 500KB) messages per second
                };

                void* _context = nullptr;
                void* _socket = nullptr;
                option _option;

            protected:
                _ipc(const std::string& hostname, int port, mode mode, protocol protocol = protocol::TCP, option option = option::DEFAULT);
                ~_ipc();

                int send(void* data, int size) const;
                void send(const message& msg) const;

                int recv(void* data, int size) const;
                void recv(message& msg) const;

            private:
                int _safe_send(void* data, int size, bool more = false) const;
                int _safe_recv(void* data, int size) const;
            };
        }
    }
}

#endif // _AOS_CORE_IPC_IPC_H_