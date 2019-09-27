#include "register_types.h"

#include "core/class_db.h"
#include "scene/KinematicJoint.h"
#include "scene/RotativeJoint.h"
#include "scene/PrismaticJoint.h"

void register_aos_types() {
    ClassDB::register_virtual_class<aos::KinematicJoint>();
    ClassDB::register_class<aos::RotativeJoint>();
    ClassDB::register_class<aos::PrismaticJoint>();
}

void unregister_aos_types() {
   // Nothing to do here in this example.
}