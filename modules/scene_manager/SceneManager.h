#ifndef _SCENE_MANAGER_H
#define _SCENE_MANAGER_H

#include "../../core/vector.h"
#include "../../core/object.h"
#include "../../core/os/thread.h"
#include "../../core/dictionary.h"
#include "../../core/array.h"
#include "../../core/ustring.h"

#include "rclcpp/rclcpp.hpp"
#include "scene_manager_interface/msg/document_info.hpp"
#include "scene_manager_interface/msg/joints_update.hpp"
#include "scene_manager_interface/msg/objects_update.hpp"
#include "scene_manager_interface/msg/ios_update.hpp"
#include "scene_manager_interface/srv/get_state.hpp"


#include<memory>
#include<string>


class SceneManager : public Object  {
    typedef scene_manager_interface::msg::DocumentInfo document_info_msg;
    typedef scene_manager_interface::msg::JointsUpdate joints_update_msg;
    typedef scene_manager_interface::msg::ObjectsUpdate objects_update_msg;
    typedef scene_manager_interface::msg::IosUpdate ios_update_msg;
    typedef scene_manager_interface::srv::GetState get_state_srv;

    GDCLASS(SceneManager, Object);

    static SceneManager *singleton;
    // TODO rename
    static void thread_func(void *p_udata);

private:
    bool thread_exited;
    mutable bool exit_thread;
    Thread *thread;

    std::shared_ptr<rclcpp::Node> _node = nullptr;
    std::shared_ptr<rclcpp::Subscription<joints_update_msg>> _joints_update_subscriber;
    std::shared_ptr<rclcpp::Subscription<objects_update_msg>> _objects_update_subscriber;
    std::shared_ptr<rclcpp::Subscription<ios_update_msg>> _ios_update_subscriber;
    std::shared_ptr<rclcpp::Client<get_state_srv>> _get_state_srv;

    std::shared_ptr<std::thread> _spin;

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

	static int create_uv_mapping(const std::string &in_path, const std::string &out_path, const std::string &script_path)
	{
		std::string command = "cmd /C \"\"C:/Program Files/VCG/MeshLab/meshlabserver.exe\" -i \"" + in_path + "\" -o \"" + out_path + "\" -m wt -s \"" + script_path + "\"\"";
		return system(command.c_str());
	}

    SceneManager();

private:
    void _message_joints_update_received(const joints_update_msg::SharedPtr msg);
    void _message_objects_update_received(const objects_update_msg::SharedPtr msg);
    void _message_ios_update_received(const ios_update_msg::SharedPtr msg);

};

class _SceneManager : public Object {
    typedef scene_manager_interface::msg::DocumentInfo document_info_msg;
    typedef scene_manager_interface::msg::JointsUpdate joints_update_msg;
    typedef scene_manager_interface::msg::ObjectsUpdate objects_update_msg;
    //TODO change name
    typedef scene_manager_interface::msg::ObjectsUpdate ios_update_msg;
    typedef scene_manager_interface::srv::GetState get_state_srv;
    GDCLASS(_SceneManager, Object);

    friend class SceneManager;
    static _SceneManager *singleton;

protected:
    static void _bind_methods();

private:


    void _message_joints_update_received(const joints_update_msg::SharedPtr msg);
    void _message_objects_update_received(const objects_update_msg::SharedPtr msg);
    void _message_ios_update_received(const ios_update_msg::SharedPtr msg);
    void _update_joints(Dictionary message);
    void _update_objects(Dictionary message);
    void _update_ios(Dictionary message);

public:
    Dictionary get_initial_state();

    void connect_signals();
    static _SceneManager *get_singleton();
	int create_uv_mapping(String in_path, String out_path, String script_path)
	{
		std::wstring in_path_w(in_path.c_str());
		std::wstring out_path_w(out_path.c_str());
		std::wstring script_path_w(script_path.c_str());

		std::string in_path_r(in_path_w.begin(), in_path_w.end());
		std::string out_path_r(out_path_w.begin(), out_path_w.end());
		std::string script_path_r(script_path_w.begin(), script_path_w.end());

		return SceneManager::create_uv_mapping(in_path_r, out_path_r, script_path_r);
	}

    _SceneManager();
    ~_SceneManager();
};

#endif // _SCENE_MANAGER_H
