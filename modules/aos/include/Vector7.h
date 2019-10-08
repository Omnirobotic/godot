#pragma once
#include <vector>
#include <Math.h>
#include "Vector3.h"
#include "Vector4.h"

namespace CppMath
{
    class Vector7
    {
    public:
		Vector3 Pos;
		Vector4 Rot;

        Vector7()
        {

        }

        Vector7(Vector3& pos, Vector4& rot)
        {
			this->Pos = pos;
            this->Rot = rot;
        }

        Vector7(float x, float y, float z, float rx, float ry, float rz)
        {
            Pos = Vector3(x, y, z);
            Rot = Vector4(rx, ry, rz);
        }

        Vector7(const Vector7& t)
        {
			Rot = t.Rot;
			Pos = t.Pos;
        }

        void CopyFrom(Vector7 t)
        {
            Rot = t.Rot;
            Pos = t.Pos;
        }

        Vector7(float angle, const Vector3& pos, const Vector3& axis)
        {            
			Vector7 translationPart;
            translationPart.SetIdentity();            
            translationPart.Pos = pos * -1;

			Vector7 translationPart2;
            translationPart2.SetIdentity();
            translationPart2.Pos = pos;
			Vector7 quat;
            quat.SetIdentity();
            quat.Rot.FromAngleAndAxis(angle, axis);

			CopyFrom(translationPart2 * quat * translationPart);
        }


        Vector7 operator *(const Vector7& t1) const
        {
            Vector3 pos = this->Pos + this->Rot*t1.Pos;
            Vector4 rot = (this->Rot * t1.Rot).GetNormalize();
            return Vector7(pos, rot);
        }

        Vector3 operator *(const Vector3& v1) const
        {
            return this->Pos + (this->Rot * v1);
        }

        void Inverse()
        {
            CopyFrom(GetInverse());
        }

        Vector7 GetInverse() const
        {
            Vector4 invRot = Rot.GetInverse();
			Vector3 position = (invRot * Pos) * -1.0f;
			const Vector7 inverse = Vector7(position, invRot);
            return inverse;
        }

        void SetIdentity()
        {
            Pos.SetZero();
            Rot.SetIdentity();
        }

        void ToMatrix4x4(float(&m4x4)[4][4]) const
        {
            const float sqw = Rot.Q0*Rot.Q0;
            const float sqx = Rot.Q1*Rot.Q1;
            const float sqy = Rot.Q2*Rot.Q2;
            const float sqz = Rot.Q3*Rot.Q3;

            // invs (inverse square length) is only required if quaternion is not already normalised
            const float denum = sqx + sqy + sqz + sqw;
            if (denum == 0)
            {
                return;
            }

            const float invs = 1 / denum;

            m4x4[0][0] = (sqx - sqy - sqz + sqw)*invs; // since sqw + sqx + sqy + sqz =1/invs*invs
            m4x4[1][1] = (-sqx + sqy - sqz + sqw)*invs;
            m4x4[2][2] = (-sqx - sqy + sqz + sqw)*invs;

            float tmp1 = Rot.Q1*Rot.Q2;
            float tmp2 = Rot.Q3*Rot.Q0;
            m4x4[0][1] = 2.0f * (tmp1 + tmp2)*invs;
            m4x4[1][0] = 2.0f * (tmp1 - tmp2)*invs;

            tmp1 = Rot.Q1*Rot.Q3;
            tmp2 = Rot.Q2*Rot.Q0;
            m4x4[0][2] = 2.0f * (tmp1 - tmp2)*invs;
            m4x4[2][0] = 2.0f * (tmp1 + tmp2)*invs;
            tmp1 = Rot.Q2*Rot.Q3;
            tmp2 = Rot.Q1*Rot.Q0;
            m4x4[1][2] = 2.0f * (tmp1 + tmp2)*invs;
            m4x4[2][1] = 2.0f * (tmp1 - tmp2)*invs;


            m4x4[0][3] = 0.0f;
            m4x4[1][3] = 0.0f;
            m4x4[2][3] = 0.0f;
            m4x4[3][3] = 1.0f;

            m4x4[3][0] = Pos.X;
            m4x4[3][1] = Pos.Y;
            m4x4[3][2] = Pos.Z;
        }


/*        bool TransformationAreEqual(Vector7 t)
        {
            return Pos.Equals(t.Pos) && Rot.RotationsAreEqual(t.Rot);
        }

        bool PositionAndOrientationAreEqual(Vector7 t)
        {
            return Pos.Equals(t.Pos) && Rot.OrientationsAreEqual(t.Rot);
        }

        bool Equals(Vector7 t)
        {
            throw new NotImplementedException("Use TransformationAreEqual or PositionAndOrientationAreEqual instead");
        }
		*/
	};
}
