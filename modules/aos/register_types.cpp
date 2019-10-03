#include "register_types.h"

#include "core/class_db.h"
#include "scene/KinematicJoint.h"
#include "scene/RotativeJoint.h"
#include "scene/PrismaticJoint.h"
#include "scene/ResourceFormatLoaderAosScene.h"
#include "scene/AosScene.h"

static aos::ResourceFormatLoaderAosScene *aos_loader = NULL;

void register_aos_types() {
    ClassDB::register_virtual_class<aos::KinematicJoint>();
    ClassDB::register_class<aos::RotativeJoint>();
    ClassDB::register_class<aos::PrismaticJoint>();

    aos_loader = memnew(aos::ResourceFormatLoaderAosScene);
    ResourceLoader::add_resource_format_loader(aos_loader);
    ClassDB::register_class<aos::AosScene>();
}

void unregister_aos_types() {
   // Nothing to do here in this example.
}