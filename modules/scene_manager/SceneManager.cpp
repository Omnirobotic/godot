/* summator.cpp */

#include "SceneManager.h"
#include <string>
#include <thread>
#include <chrono>
#include "../aos/scene/AosScene.h"


using namespace std::literals::chrono_literals;



void SceneManager::init() {
}

SceneManager *SceneManager::singleton = NULL;

SceneManager *SceneManager::get_singleton() {
    return singleton;
}

void SceneManager::finish() {
}

void SceneManager::_bind_methods() {
}

void SceneManager::_message_joints_update_received(const joints_update_msg& msg) {
    Dictionary message;

    Vector<String> joints_name; 
    Vector<Variant> joints_value;

	for (int joint_index = 0; joint_index < msg.joints_value().size(); joint_index++)
	{
		joints_value.push_back(msg.joints_value(joint_index));
		joints_name.push_back(msg.joints_name(joint_index).c_str());
	}


    message["joints_name"] = joints_name;
	message["joints_value"] = joints_value;

    _SceneManager::get_singleton()->_update_joints(message);
}

void SceneManager::_message_objects_update_received(const objects_update_msg& msg)
{
    outdata.open("C:/ProgramData/Omnirobotic/test.txt", std::ofstream::out | std::ofstream::app);
    static int counter = 0;
    Dictionary message;
    String parent_name;
    String object_name;
    Dictionary added_object_document_info;
    String removed_object_name;
    String removed_object_parent_name;

    parent_name = msg.added_object_parent_name().c_str();
	object_name = msg.added_object_name().c_str();
	removed_object_name = msg.removed_object_name().c_str();
    removed_object_parent_name = msg.removed_object_parent_name().c_str();

    added_object_document_info["store_key"] = msg.added_object_document_info().store_key().c_str();
    added_object_document_info["type_name"] = msg.added_object_document_info().type_name().c_str();
    added_object_document_info["format_name"] = msg.added_object_document_info().format_name().c_str();
    Node* object;
    if (added_object_document_info["store_key"] != "")
    {
        outdata << "format_name : " << msg.added_object_document_info().format_name() << std::endl;
        counter++;
        outdata << "Counter:"<< counter << std::endl;
        outdata << "Adding object using AosScene" << std::endl;
        outdata << std::this_thread::get_id() << std::endl;

        auto aosSceneInstance = new aos::AosScene();
        object = aosSceneInstance->add_object(object_name, added_object_document_info);
        outdata << "Done adding object using AosScene" << std::endl;

    }
    outdata.flush();
    outdata.close();
    message["added_object_name"] = object_name;
    message["added_object_parent_name"] = parent_name;
    message["added_object"] = object;
    message["document_info"] = added_object_document_info;
    message["removed_object_name"] = removed_object_name;
    message["removed_object_parent_name"] = removed_object_parent_name;

    _SceneManager::get_singleton()->_update_objects(message);
}

void SceneManager::_message_ios_update_received(const ios_update_msg& msg)
{
    Dictionary message;

	Vector<String> ios_name;
	Vector<Variant> ios_value;

	for (int ios_index = 0; ios_index < msg.ios_value().size(); ios_index++) {
		ios_value.push_back(msg.ios_value(ios_index));
		ios_name.push_back(msg.ios_name(ios_index).c_str());
	}

	message["ios_name"] = ios_name;
	message["ios_value"] = ios_value;

    _SceneManager::get_singleton()->_update_ios(message);
}

SceneManager::SceneManager()
{
    singleton = this;

    std::string joints_subscriber_topic_name = "SceneManager/joints_update";
    std::string objects_subscriber_topic_name = "SceneManager/objects_update";
    std::string ios_subscriber_topic_name = "SceneManager/ios_update";
    std::string initial_state_srv_name = "SceneManager/get_state";

	_joints_update_subscriber = std::make_shared<aos::ipc::scene_manager::JointsUpdateHelper::Subscriber>(joints_subscriber_topic_name, "", std::bind(&SceneManager::_message_joints_update_received, this, std::placeholders::_1));
	_objects_update_subscriber = std::make_shared<aos::ipc::scene_manager::ObjectsUpdateHelper::Subscriber>(objects_subscriber_topic_name,"", std::bind(&SceneManager::_message_objects_update_received, this, std::placeholders::_1));
	_ios_update_subscriber = std::make_shared<aos::ipc::scene_manager::IosUpdateHelper::Subscriber>(ios_subscriber_topic_name, "", std::bind(&SceneManager::_message_ios_update_received, this, std::placeholders::_1));
	_scene_manager_stub = std::make_shared<aos::ipc::scene_manager::SceneManagerServiceHelper::Stub>("SceneManager");
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

	auto get_initial_state_request = aos::ipc::scene_manager::GetStateRequest();
	auto get_initial_state_response = aos::ipc::scene_manager::GetStateResponse();

	_scene_manager_stub->GetState(get_initial_state_request, get_initial_state_response);

	for (int object_index = 0; object_index < get_initial_state_response.objects_name().size(); object_index++) {
		objects_name_cpp.push_back(get_initial_state_response.objects_name(object_index).c_str());
		objects_parent_name_cpp.push_back(get_initial_state_response.objects_parent_name(object_index).c_str());
		objects_document_info_cpp.push_back(get_initial_state_response.objects_document_info(object_index));
	}

    for (int i=0; i < objects_name_cpp.size(); i++)
    {
        objects_name_godot.push_back(objects_name_cpp[i].c_str());
        objects_parent_name_godot.push_back(objects_parent_name_cpp[i].c_str());

        Dictionary document_info_godot;
        document_info_godot["store_key"] = objects_document_info_cpp[i].store_key().c_str();
        document_info_godot["type_name"] = objects_document_info_cpp[i].type_name().c_str();
        document_info_godot["format_name"] = objects_document_info_cpp[i].format_name().c_str();

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

