
#ifndef PRISMATIC_JOINT_H
#define PRISMATIC_JOINT_H

#include "KinematicJoint.h"

namespace aos
{

class PrismaticJoint : public KinematicJoint
{
    GDCLASS(PrismaticJoint, KinematicJoint);

    public:
        PrismaticJoint();
        ~PrismaticJoint();

        void set_joint_value(real_t value);
        real_t get_joint_value() const;

        void set_min_limit(real_t min);
        real_t get_min_limit() const { return _joint_min_limit;}

        void set_max_limit(real_t max);
        real_t get_max_limit() const { return _joint_max_limit;}

    protected:
        static void _bind_methods();
        void _notification(int p_what);

    private:
        Transform _compute_joint_transform() const override;
};

}
#endif //ROTATIVE_JOINT_H