/* register_types.cpp */
#include "register_types.h"

#include "core/class_db.h"
#include "core/engine.h"

#include "SceneManager.h"

static SceneManager *scene_manager = NULL;
static _SceneManager  *_scene_manager = NULL;

void register_scene_manager_types() {
    scene_manager = memnew(SceneManager);
    scene_manager->init();

    _scene_manager = memnew(_SceneManager);
    ClassDB::register_class<_SceneManager>();
    Engine::get_singleton()->add_singleton(Engine::Singleton("SceneManager", _SceneManager::get_singleton()));
}

void unregister_scene_manager_types() {
    if (scene_manager) {
            scene_manager->finish();
            memdelete(scene_manager);
    }

    if (_scene_manager) {
            memdelete(_scene_manager);
    }
}