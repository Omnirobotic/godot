#pragma once
#include <vector>
#include <Math.h>
#include "Vector3.h"
#include "Vector4.h"

namespace CppMath
{
	CppMath::Vector4 GetQuaternion(CppMath::Matrix3X3 m)
	{
		float Q0, Q1, Q2, Q3;
		// The Trace is the sum of the diagonal elements
		float trace = m._mat[0][0] + m._mat[1][1] + m._mat[2][2];

		if (trace > 0)
		{
			float s = (float)sqrt(trace + 1.0) * 2; // s=4*qw 
			Q0 = 0.25f * s;
			Q1 = (m._mat[2][1] - m._mat[1][2]) / s;
			Q2 = (m._mat[0][2] - m._mat[2][0]) / s;
			Q3 = (m._mat[1][0] - m._mat[0][1]) / s;
			return CppMath::Vector4(Q0, Q1, Q2, Q3);
		}
		else if ((m._mat[0][0] > m._mat[1][1]) && (m._mat[0][0] > m._mat[2][2]))
		{
			float s = (float)sqrt(1.0 + m._mat[0][0] - m._mat[1][1] - m._mat[2][2]) * 2; // s=4*qx 
			Q0 = (m._mat[2][1] - m._mat[1][2]) / s;
			Q1 = 0.25f * s;
			Q2 = (m._mat[0][1] + m._mat[1][0]) / s;
			Q3 = (m._mat[0][2] + m._mat[2][0]) / s;
			return CppMath::Vector4(Q0, Q1, Q2, Q3);
		}
		else if (m._mat[1][1] > m._mat[2][2])
		{
			float s = (float)sqrt(1.0 + m._mat[1][1] - m._mat[0][0] - m._mat[2][2]) * 2; // s=4*qy
			Q0 = (m._mat[0][2] - m._mat[2][0]) / s;
			Q1 = (m._mat[0][1] + m._mat[1][0]) / s;
			Q2 = 0.25f * s;
			Q3 = (m._mat[1][2] + m._mat[2][1]) / s;
			return CppMath::Vector4(Q0, Q1, Q2, Q3);
		}
		else
		{
			float s = (float)sqrt(1.0 + m._mat[2][2] - m._mat[0][0] - m._mat[1][1]) * 2; // s=4*qz
			Q0 = (m._mat[1][0] - m._mat[0][1]) / s;
			Q1 = (m._mat[0][2] + m._mat[2][0]) / s;
			Q2 = (m._mat[1][2] + m._mat[2][1]) / s;
			Q3 = 0.25f * s;
			return CppMath::Vector4(Q0, Q1, Q2, Q3);
		}
	}
}
