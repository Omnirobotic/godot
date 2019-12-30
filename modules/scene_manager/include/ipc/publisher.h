#pragma once
#ifndef _AOS_CORE_IPC_PUBLISHER_H_
#define _AOS_CORE_IPC_PUBLISHER_H_

#include <string>

#include "ipc.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            // Forward declaration
            class factory;

            // Class definition
            class AOS_CORE_IPC_API publisher : private _ipc
            {
                friend class factory;

            public:
                using option = _ipc::option;

            public:
                void publish(const message& msg);

                option get_option() const;

            private:
                publisher(const std::string& hostname, int port, option option = option::DEFAULT)
                    : _ipc(hostname, port, mode::PUBLISHER, protocol::TCP, option) {};
            };
        }
    }
}

#endif // _AOS_CORE_IPC_PUBLISHER_H_