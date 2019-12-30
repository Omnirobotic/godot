#pragma once

#ifndef _AOS_CORE_IPC_MESSAGE_PROTOBUF_H_
#define _AOS_CORE_IPC_MESSAGE_PROTOBUF_H_

#include <string>

#include <google/protobuf/message.h>

#include "message.h"

namespace aos
{
    namespace core
    {
        namespace ipc
        {
            class message_protobuf : public message
            {
            public:
                message_protobuf(int size = 0) : message(size) {}
                message_protobuf(const message& other) { copy_from(other); }
                message_protobuf(message&& other) { zero_copy_move_from(other); }

                template <typename protobuf_message_lite>
                message_protobuf(const protobuf_message_lite& pb_msg, const std::string& topic = "")
                {
                    static_assert(std::is_base_of<google::protobuf::Message, protobuf_message_lite>::value,
                        "Argument must be derived from class google::protobuf::MessageLite.");

                    set_data(pb_msg);
                    set_topic(topic);
                }

                template <typename protobuf_message_lite>
                void set_data(const protobuf_message_lite& pb_msg)
                {
                    static_assert(std::is_base_of<google::protobuf::Message, protobuf_message_lite>::value,
                        "Argument must be derived from class google::protobuf::MessageLite.");

                    _size = (int)pb_msg.ByteSizeLong();

#if !SHARED_PTR
                    destroy_buffer();
#endif
                    if (_buffer_size < _size)
                    {
                        allocate_buffer(_size);
                    }

#if SHARED_PTR
                    pb_msg.SerializeToArray(_data.get(), _size);
#else
                    pb_msg.SerializeToArray(_data, _size);
#endif
                }

                template <typename protobuf_message_lite>
                void get_data(protobuf_message_lite& pb_msg) const
                {
                    static_assert(std::is_base_of<google::protobuf::Message, protobuf_message_lite>::value,
                        "Argument must be derived from class google::protobuf::MessageLite.");

#if SHARED_PTR
                    pb_msg.ParseFromArray(_data.get(), _size);
#else
                    pb_msg.ParseFromArray(_data, _size);
#endif
                }

            };
        }
    }
}

#endif // _AOS_CORE_IPC_MESSAGE_PROTOBUF_H_