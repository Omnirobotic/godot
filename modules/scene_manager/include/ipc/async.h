#pragma once
#ifndef _AOS_CORE_IPC_ASYNC_H_
#define _AOS_CORE_IPC_ASYNC_H_

#include <iostream>
#include <thread>

#include "exports.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            class AOS_CORE_IPC_API _async
            {
            protected:
                bool m_canceled = false;

            private:
                std::unique_ptr<std::thread> m_thread;

            public:
                virtual void start()
                {
                    if (m_thread != nullptr)
                    {
                        // Thread already started
                        return;
                    }

                    m_canceled = false;
                    m_thread = std::make_unique<std::thread>([&]()
                    {
                        while (!m_canceled)
                        {
                            try
                            {
                                this->run();
                            }
                            catch (std::exception e)
                            {
                                std::cerr << "Unexpected exception in IPC thread: " << e.what() << std::endl;
                            }
                        }
                    });
                }

                virtual void stop()
                {
                    m_canceled = true;
                    if (m_thread != nullptr)
                    {
                        m_thread->join();
                        m_thread = nullptr;
                    }
                }

                virtual void run() = 0;

            protected:
                _async() = default;
                ~_async()
                {
                    stop();
                }
            };
        }
    }
}

#endif // _AOS_CORE_IPC_ASYNC_H_