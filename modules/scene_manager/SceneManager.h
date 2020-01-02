#ifndef _SCENE_MANAGER_H
#define _SCENE_MANAGER_H

#include "../../core/vector.h"
#include "../../core/object.h"
#include "../../core/os/thread.h"
#include "../../core/dictionary.h"
#include "../../core/array.h"


#include "../../modules/scene_manager/include/ipc/ipc.h"

#include "../../modules/scene_manager/include/scene-manager-interface/scene-manager-interface.pb.helper.h"
#include "../../modules/scene_manager/include/scene-manager-interface/scene-manager-interface.pb.stub.h"

#include <fstream>
#include <iostream>



class SceneManager : public Object  {
	typedef aos::ipc::scene_manager::IosUpdate ios_update_msg;
	typedef aos::ipc::scene_manager::DocumentInfo document_info_msg;
	typedef aos::ipc::scene_manager::ObjectsUpdate objects_update_msg;
	typedef aos::ipc::scene_manager::JointsUpdate joints_update_msg;

    GDCLASS(SceneManager, Object);

    static SceneManager *singleton;

private:
	std::shared_ptr<aos::ipc::scene_manager::SceneManagerServiceHelper::Stub> _scene_manager_stub;
    std::shared_ptr<aos::ipc::scene_manager::JointsUpdateHelper::Subscriber> _joints_update_subscriber;
	std::shared_ptr<aos::ipc::scene_manager::ObjectsUpdateHelper::Subscriber> _objects_update_subscriber;
	std::shared_ptr<aos::ipc::scene_manager::IosUpdateHelper::Subscriber> _ios_update_subscriber;

    std::ofstream outdata; // outdata is like cin

protected:
    static void _bind_methods();

public:
    static SceneManager *get_singleton();


    void init();
    void finish();

    Dictionary get_initial_state();

    SceneManager();

private:
    void _message_joints_update_received(const joints_update_msg& msg);
	void _message_objects_update_received(const objects_update_msg& msg);
	void _message_ios_update_received(const ios_update_msg& msg);

};

class _SceneManager : public Object {
	typedef aos::ipc::scene_manager::IosUpdate ios_update_msg;
	typedef aos::ipc::scene_manager::DocumentInfo document_info_msg;
	typedef aos::ipc::scene_manager::ObjectsUpdate objects_update_msg;
	typedef aos::ipc::scene_manager::JointsUpdate joints_update_msg;

	GDCLASS(_SceneManager, Object);

    friend class SceneManager;
    static _SceneManager *singleton;
protected:
    static void _bind_methods();

private:
    void _update_joints(Dictionary message);
    void _update_objects(Dictionary message);
    void _update_ios(Dictionary message);

public:
    Dictionary get_initial_state();

    void connect_signals();
    static _SceneManager *get_singleton();

    _SceneManager();
    ~_SceneManager();
};

#endif // _SCENE_MANAGER_H
