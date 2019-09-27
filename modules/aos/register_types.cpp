#include "register_types.h"

#include "core/class_db.h"
#include "scene/RotativeJoint.h"

void register_aos_types() {
    ClassDB::register_class<RotativeJoint>();
}

void unregister_aos_types() {
   // Nothing to do here in this example.
}