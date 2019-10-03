/* summator.cpp */

#include "SceneManager.h"
#include "core/ustring.h"
#include <string>
#include <thread>

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
    /*Dictionary message;

    Vector<String> joints_name; 
    Vector<Variant> joints_value;

    for (int i=0; i < msg->joints_name.size(); i++)
    {
        joints_name.push_back(msg->joints_name[i].c_str());
        joints_value.push_back(msg->joints_value[i]);
    }

    message["joints_name"] = joints_name;
    message["joints_value"] = joints_value;
    _SceneManager::get_singleton()->_update_joints(message);*/
    _SceneManager::get_singleton()->_emit_move();
}

void SceneManager::_message_objects_update_received(const objects_update_msg::SharedPtr msg)
{
    Dictionary message;
    String parent_name;
    String object_name;
    Dictionary added_object_document_info;
    String removed_object_name;

    parent_name = msg->added_object_parent_name.c_str();
    object_name = msg->added_object_name.c_str();
    removed_object_name = msg->removed_object_name.c_str();

    added_object_document_info["store_key"] = msg->added_object_document_info.store_key.c_str();
    added_object_document_info["type_name"] = msg->added_object_document_info.type_name.c_str();
    added_object_document_info["format_name"] = msg->added_object_document_info.format_name.c_str();

    message["added_object_name"] = object_name;
    message["added_object_parent_name"] = parent_name;
    message["added_object_document_info"] = added_object_document_info;
    message["removed_object_name"] = removed_object_name;

    _SceneManager::get_singleton()->_update_objects(message);

}

void SceneManager::_emit_move_private()
{
    _SceneManager::get_singleton()->_emit_move();
}

SceneManager::SceneManager()
{
    singleton = this;

    if (!rclcpp::ok())
    {
        rclcpp::init(0, nullptr);
    }

    _node = std::make_shared<rclcpp::Node>(std::string("test"));
    std::string joints_subscriber_topic_name = "SceneManager/joints_update";
    std::string objects_subscriber_topic_name = "SceneManager/objects_update";

    _joints_update_subscriber = _node->create_subscription<joints_update_msg>(joints_subscriber_topic_name, std::bind(&SceneManager::_message_joints_update_received, this, std::placeholders::_1), 1);
    _objects_update_subscriber = _node->create_subscription<objects_update_msg>(objects_subscriber_topic_name, std::bind(&SceneManager::_message_objects_update_received, this, std::placeholders::_1), 1);
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


///Dummy class

_SceneManager *_SceneManager::singleton = NULL;
_SceneManager *_SceneManager::get_singleton() { return singleton; }

void _SceneManager::_update_joints(Dictionary message) {
        emit_signal("update_joints", message);
}
void _SceneManager::_update_objects(Dictionary message) {
        emit_signal("update_objects", message);
}
void _SceneManager::_emit_move()
{
        emit_signal("move");
}

void _SceneManager::_bind_methods() {
        ADD_SIGNAL(MethodInfo("update_joints", PropertyInfo(Variant::DICTIONARY , "joints")));
        ADD_SIGNAL(MethodInfo("update_objects", PropertyInfo(Variant::DICTIONARY , "objects")));
        ADD_SIGNAL(MethodInfo("move"));
        ClassDB::bind_method(D_METHOD("_emit_move"), &_SceneManager::_emit_move);
}

void _SceneManager::connect_signals() {
        SceneManager::get_singleton()->connect("update_joints", _SceneManager::get_singleton(), "_update_joints");
        SceneManager::get_singleton()->connect("update_objects", _SceneManager::get_singleton(), "_update_objects");
        SceneManager::get_singleton()->connect("move", _SceneManager::get_singleton(), "_emit_move");

}

_SceneManager::_SceneManager() {
        singleton = this;
}

_SceneManager::~_SceneManager() {
}

