#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

namespace CppMath
{
    namespace Angle
    {
        const float _PI = M_PI;
        static const float rad_to_deg = 180. / _PI;
        static const float deg_to_rad = _PI / 180.;


        bool NormalizeAngle(float& val, const float& min, const float& max);

        void NormalizeAngle(float& val, const float& target);

    }
}

