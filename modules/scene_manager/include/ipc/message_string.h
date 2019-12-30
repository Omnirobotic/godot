#pragma once

#ifndef _AOS_CORE_IPC_MESSAGE_STRING_H_
#define _AOS_CORE_IPC_MESSAGE_STRING_H_

#include <string>

#include "message.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            class message_string : public message
            {
            public:
                message_string(int size = 0) : message(size) {}
                message_string(const message& other) { copy_from(other); }
                message_string(message&& other) { zero_copy_move_from(other); }

                message_string(const std::string& msg, const std::string& topic = "")
                {
                    set_data(msg);
                    set_topic(topic);
                }

                void set_data(const std::string& str_msg)
                {
                    message::set_data(str_msg.c_str(), (int)str_msg.size());
                }

                std::string get_data()
                {
#if SHARED_PTR
                    return std::string(message::get_data().get(), get_size());
#else
                    return std::string(message::get_data(), get_size());
#endif
                }

            };
        }
    }
}

#endif // _AOS_CORE_IPC_MESSAGE_STRING_H_