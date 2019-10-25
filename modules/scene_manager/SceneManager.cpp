/* summator.cpp */

#include "SceneManager.h"
#include <string>
#include <thread>
#include <chrono>
#include "scene\AosScene.h"

using namespace std::literals::chrono_literals;


void SceneManager::thread_func(void *p_udata) {
    SceneManager *ac = (SceneManager *) p_udata;
    ac->spin();
}

void SceneManager::init() {
    thread_exited = false;
    thread = Thread::create(SceneManager::thread_func, this);
}

SceneManager *SceneManager::singleton = NULL;

SceneManager *SceneManager::get_singleton() {
    return singleton;
}

void SceneManager::finish() {
    if (!thread) {
        return;
    }

    exit_thread = true;
    Thread::wait_to_finish(thread);

    memdelete(thread);

    thread = NULL;
}

void SceneManager::_bind_methods() {
}

void SceneManager::_message_joints_update_received(const joints_update_msg::SharedPtr msg)
{
    Dictionary message;

    Vector<String> joints_name; 
    Vector<Variant> joints_value;

    for (int i=0; i < msg->joints_name.size(); i++)
    {
        joints_name.push_back(msg->joints_name[i].c_str());
        joints_value.push_back(msg->joints_value[i]);
    }

    message["joints_name"] = joints_name;
    message["joints_value"] = joints_value;

    _SceneManager::get_singleton()->_update_joints(message);
}

void SceneManager::_message_objects_update_received(const objects_update_msg::SharedPtr msg)
{
    Dictionary message;
    String parent_name;
    String object_name;
    Dictionary added_object_document_info;
    String removed_object_name;
    String removed_object_parent_name;

    parent_name = msg->added_object_parent_name.c_str();
    object_name = msg->added_object_name.c_str();
    removed_object_name = msg->removed_object_name.c_str();
    removed_object_parent_name = msg->removed_object_parent_name.c_str();

    added_object_document_info["store_key"] = msg->added_object_document_info.store_key.c_str();
    added_object_document_info["type_name"] = msg->added_object_document_info.type_name.c_str();
    added_object_document_info["format_name"] = msg->added_object_document_info.format_name.c_str();

    std::cout << "Adding object using AosScene" << std::endl;
    auto aosSceneInstance = new aos::AosScene();
    auto object = aosSceneInstance->add_object(object_name, added_object_document_info);
    std::cout << "Done adding object using AosScene" << std::endl;

    message["added_object_name"] = object_name;
    message["added_object_parent_name"] = parent_name;
    message["added_object"] = object;
    message["removed_object_name"] = removed_object_name;
    message["removed_object_parent_name"] = removed_object_parent_name;

    _SceneManager::get_singleton()->_update_objects(message);

}

void SceneManager::_message_ios_update_received(const ios_update_msg::SharedPtr msg)
{
    Dictionary message;

    message["gun_io"] = msg->gun_io;

    _SceneManager::get_singleton()->_update_ios(message);
}

SceneManager::SceneManager()
{
    singleton = this;

    if (!rclcpp::ok())
    {
        rclcpp::init(0, nullptr);
    }

    _node = std::make_shared<rclcpp::Node>(std::string("Godot"));
    std::string joints_subscriber_topic_name = "SceneManager/joints_update";
    std::string objects_subscriber_topic_name = "SceneManager/objects_update";
    std::string ios_subscriber_topic_name = "SceneManager/ios_update";
    std::string initial_state_srv_name = "SceneManager/get_state";


    _joints_update_subscriber = _node->create_subscription<joints_update_msg>(joints_subscriber_topic_name, std::bind(&SceneManager::_message_joints_update_received, this, std::placeholders::_1), 1);
    _objects_update_subscriber = _node->create_subscription<objects_update_msg>(objects_subscriber_topic_name, std::bind(&SceneManager::_message_objects_update_received, this, std::placeholders::_1), 1);
    _ios_update_subscriber = _node->create_subscription<ios_update_msg>(ios_subscriber_topic_name, std::bind(&SceneManager::_message_ios_update_received, this, std::placeholders::_1), 1);
    _get_state_srv = _node->create_client<get_state_srv>(initial_state_srv_name);

}

void SceneManager::spin()
{
    _spin = std::make_shared<std::thread>(&SceneManager::innerspin, this);
}

void SceneManager::innerspin()
{
    std::shared_ptr<rclcpp::Node> ptr(_node);
    rclcpp::spin(ptr);
}

Dictionary SceneManager::get_initial_state()
{

    Dictionary initial_state;
    Vector<String> objects_name_godot; 
    Vector<String> objects_parent_name_godot;   
    Array objects_godot;

    std::vector<std::string> objects_name_cpp; 
    std::vector<std::string> objects_parent_name_cpp;   
    std::vector<document_info_msg> objects_document_info_cpp;

    while (!_get_state_srv->wait_for_service(1s)) 
    {
        if (!rclcpp::ok()) {
            return initial_state;
        }
    }
    auto request = std::make_shared<get_state_srv::Request>();

    // We give the async_send_request() method a callback that will get executed once the response
    // is received.
    // This way we can return immediately from this method and allow other work to be done by the
    // executor in `spin` while waiting for the response.
    using ServiceResponseFuture =
    rclcpp::Client<get_state_srv>::SharedFuture;
    auto response_received_callback = [this](ServiceResponseFuture future) {
    const auto& result = future.get();
    return result;
    };
    auto future_result = _get_state_srv->async_send_request(request, response_received_callback);
    future_result.wait();

    objects_name_cpp = future_result.get()->objects_name;
    objects_parent_name_cpp = future_result.get()->objects_parent_name;
    objects_document_info_cpp = future_result.get()->objects_document_info;

    for (int i=0; i < objects_name_cpp.size(); i++)
    {
        objects_name_godot.push_back(objects_name_cpp[i].c_str());
        objects_parent_name_godot.push_back(objects_parent_name_cpp[i].c_str());

        Dictionary document_info_godot;
        document_info_godot["store_key"] = objects_document_info_cpp[i].store_key.c_str();
        document_info_godot["type_name"] = objects_document_info_cpp[i].type_name.c_str();
        document_info_godot["format_name"] = objects_document_info_cpp[i].format_name.c_str();

        std::cout << "Adding object using AosScene" << std::endl;
        auto aosSceneInstance = new aos::AosScene();
        auto object = aosSceneInstance->add_object(objects_name_godot[i], document_info_godot);
        std::cout << "Done adding object using AosScene" << std::endl;

        objects_godot.push_back(object);
    }

    initial_state["objects_name"] = objects_name_godot;
    initial_state["objects_parent_name"] = objects_parent_name_godot;
    initial_state["objects"] = objects_godot;
    return initial_state;
}


///Dummy class

_SceneManager *_SceneManager::singleton = NULL;
_SceneManager *_SceneManager::get_singleton() { return singleton; }

void _SceneManager::_update_joints(Dictionary message) {
    emit_signal("update_joints", message);
}
void _SceneManager::_update_objects(Dictionary message) {
    emit_signal("update_objects", message);
}
void _SceneManager::_update_ios(Dictionary message) {
    emit_signal("update_ios", message);
}

void _SceneManager::_bind_methods() {
    ADD_SIGNAL(MethodInfo("update_joints", PropertyInfo(Variant::DICTIONARY , "joints")));
    ADD_SIGNAL(MethodInfo("update_objects", PropertyInfo(Variant::DICTIONARY , "objects")));
    ADD_SIGNAL(MethodInfo("update_ios", PropertyInfo(Variant::DICTIONARY , "ios")));
    ClassDB::bind_method(D_METHOD("get_initial_state"), &_SceneManager::get_initial_state);

}

void _SceneManager::connect_signals() {
    SceneManager::get_singleton()->connect("update_joints", _SceneManager::get_singleton(), "_update_joints");
    SceneManager::get_singleton()->connect("update_objects", _SceneManager::get_singleton(), "_update_objects");
    SceneManager::get_singleton()->connect("update_ios", _SceneManager::get_singleton(), "_update_ios");
}


Dictionary _SceneManager::get_initial_state()
{
    return SceneManager::get_singleton()->get_initial_state();
}


_SceneManager::_SceneManager() {
    singleton = this;
}

_SceneManager::~_SceneManager() {
}

