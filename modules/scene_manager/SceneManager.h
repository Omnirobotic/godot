#ifndef _SCENE_MANAGER_H
#define _SCENE_MANAGER_H

#include "../../core/vector.h"
#include "../../core/object.h"
#include "../../core/os/thread.h"
#include "../../core/dictionary.h"

#include "rclcpp/rclcpp.hpp"
#include "scene_manager_interface/msg/document_info.hpp"
#include "scene_manager_interface/msg/joints_update.hpp"
#include "scene_manager_interface/msg/objects_update.hpp"

#include<memory>


class SceneManager : public Object  {
    typedef scene_manager_interface::msg::JointsUpdate joints_update_msg;
    typedef scene_manager_interface::msg::ObjectsUpdate objects_update_msg;
    GDCLASS(SceneManager, Object);

    static SceneManager *singleton;
    //rename
    static void thread_func(void *p_udata);

private:
    bool thread_exited;
    mutable bool exit_thread;
    Thread *thread;

    std::shared_ptr<rclcpp::Node> _node = nullptr;
    std::shared_ptr<rclcpp::Subscription<joints_update_msg>> _joints_update_subscriber;
    std::shared_ptr<rclcpp::Subscription<objects_update_msg>> _objects_update_subscriber;
    std::shared_ptr<std::thread> _spin;

protected:
    static void _bind_methods();

public:
    static SceneManager *get_singleton();


    void init();
    void finish();

    void connect_signals();
    Dictionary get_state();

    void spin();
    void innerspin();

    SceneManager();

private:
    void _message_joints_update_received(const joints_update_msg::SharedPtr msg);
    void _message_objects_update_received(const objects_update_msg::SharedPtr msg);
    void _emit_move_private();


};

class _SceneManager : public Object {
    typedef scene_manager_interface::msg::JointsUpdate joints_update_msg;
    typedef scene_manager_interface::msg::ObjectsUpdate objects_update_msg;
    GDCLASS(_SceneManager, Object);

    friend class SceneManager;
    static _SceneManager *singleton;

protected:
    static void _bind_methods();

private:
    void _message_joints_update_received(const joints_update_msg::SharedPtr msg);
    void _message_objects_update_received(const objects_update_msg::SharedPtr msg);
    void _update_joints(Dictionary message);
    void _update_objects(Dictionary message);
public:
        void connect_signals();
        void _emit_move();
        static _SceneManager *get_singleton();

        _SceneManager();
        ~_SceneManager();
};

#endif // _SCENE_MANAGER_H
