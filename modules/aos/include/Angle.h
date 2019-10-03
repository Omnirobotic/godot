#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

namespace CppMath
{
    namespace Angle
    {
        const float _PI = M_PI;

        bool NormalizeAngle(float& val, const float& min, const float& max);

        void NormalizeAngle(float& val, const float& target);
    }
}

