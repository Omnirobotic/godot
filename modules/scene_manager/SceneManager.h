#ifndef _SCENE_MANAGER_H
#define _SCENE_MANAGER_H

#include "../../core/vector.h"
#include "../../core/object.h"
#include "../../core/os/thread.h"
#include "../../core/dictionary.h"
#include "../../core/array.h"


#include "rclcpp/rclcpp.hpp"
#include "scene_manager_interface/msg/document_info.hpp"
#include "scene_manager_interface/msg/joints_update.hpp"
#include "scene_manager_interface/msg/objects_update.hpp"
#include "scene_manager_interface/msg/initial_state.hpp"
#include "scene_manager_interface/msg/initial_state_trigger.hpp"
#include "scene_manager_interface/srv/get_state.hpp"


#include<memory>


class SceneManager : public Object  {
    typedef scene_manager_interface::msg::DocumentInfo document_info_msg;
    typedef scene_manager_interface::msg::JointsUpdate joints_update_msg;
    typedef scene_manager_interface::msg::ObjectsUpdate objects_update_msg;
    typedef scene_manager_interface::msg::InitialState initial_state_msg;
    typedef scene_manager_interface::msg::InitialStateTrigger initial_state_trigger_msg;
    typedef scene_manager_interface::srv::GetState get_state_srv;

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
    std::shared_ptr<rclcpp::Subscription<initial_state_msg>> _initial_state_subscriber;
    std::shared_ptr<rclcpp::Publisher<initial_state_trigger_msg>> _initial_state_trigger_publisher;
    std::shared_ptr<rclcpp::Client<get_state_srv>> _get_state_srv;

    std::shared_ptr<std::thread> _spin;
    bool is_callback_received = false;
    initial_state_msg last_received_initial_state;

protected:
    static void _bind_methods();

public:
    static SceneManager *get_singleton();


    void init();
    void finish();

    void connect_signals();

    void spin();
    void innerspin();
    Dictionary get_initial_state();
    Dictionary get_initial_state_srv();

    SceneManager();

private:
    void _message_joints_update_received(const joints_update_msg::SharedPtr msg);
    void _message_objects_update_received(const objects_update_msg::SharedPtr msg);
    void _get_initial_state_callback(const initial_state_msg::SharedPtr msg);


};

class _SceneManager : public Object {
    typedef scene_manager_interface::msg::DocumentInfo document_info_msg;
    typedef scene_manager_interface::msg::JointsUpdate joints_update_msg;
    typedef scene_manager_interface::msg::ObjectsUpdate objects_update_msg;
    typedef scene_manager_interface::msg::InitialState initial_state_msg;
    typedef scene_manager_interface::msg::InitialStateTrigger initial_state_trigger_msg;
    typedef scene_manager_interface::srv::GetState get_state_srv;
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
    Dictionary get_initial_state();
    Dictionary get_initial_state_srv();

    void connect_signals();
    static _SceneManager *get_singleton();

    _SceneManager();
    ~_SceneManager();
};

#endif // _SCENE_MANAGER_H
