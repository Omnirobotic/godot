#pragma once
#include <vector>
#include <Math.h>
#include "Vector3.h"
#include "Matrix3x3.h"
namespace CppMath
{
    class Vector4
    {
	public:
		float Q0;
		float Q1;
		float Q2;
		float Q3;

		const float epsilon = 1e-15f;

    	Vector4()
        {
           // SetIdentity();
			Q0 = 1;
			Q1 = 0;
			Q2 = 0;
			Q3 = 0;
        }

        Vector4(float q0, float q1, float q2, float q3)
        {
            Q0 = q0;
            Q1 = q1;
            Q2 = q2;
            Q3 = q3;
        }

        Vector4(const Vector4& q)
        {
            Q0 = q.Q0;
            Q1 = q.Q1;
            Q2 = q.Q2;
            Q3 = q.Q3;
        }

        Vector4& operator=(const Vector4& q)
        {
            Q0 = q.Q0;
            Q1 = q.Q1;
            Q2 = q.Q2;
            Q3 = q.Q3;
            return *this;
        }

        Vector3 ComputeAxis(int index) const
        {  
            return ComputeMatrix().GetColumn(index);
        }

        Vector4(float angleInRadian, const Vector3& rotationAxis)
        {            
            FromAngleAndAxis(angleInRadian, rotationAxis);
        }

        // Rx Ry Rz as extrincsect angles
        Vector4(float alpha, float beta, float gamma)
        {
            FromEulerAngles(alpha, beta, gamma);
        }

        Vector4(const Vector3& startV, const Vector3& endV)
        {
            FromVectorToVector(startV, endV);
        }

        void FromVectorToVector(const Vector3& initialVector, const Vector3& goalVector)
        {
            const Vector3 v1 = initialVector.GetNorm();
			const Vector3 v2 = goalVector.GetNorm();
			Vector3 axis = v1.Cross(v2);
            const float angle = v1.Dot(v2);

            if (axis.IsLengthZero())
            {                
                axis = v2.Cross(Vector3::OneOneOneVector());
            }

            if (angle < 1.0f)
            {
                FromAngleAndAxis(acos(angle), axis);
            }
            else
            {
                SetIdentity();                
            }
        }

        void FromEulerAngles(float rx, float ry, float rz)
        {     
			CopyFrom(Vector4(rz, Vector3(0, 0, 1)) * Vector4(ry, Vector3(0, 1, 0)) * Vector4(rx, Vector3(1, 0, 0)));
        }

        void FromIntrinsicEulerAngles(float rx, float ry, float rz)
        {
			const Vector3 x(1, 0, 0);
            const Vector3 y(0, 1, 0);
            const Vector3 z(0, 0, 1);

            const Vector4 rotOnX(rx, x);
            const Vector3 yPrim = rotOnX * y;
            const Vector3 zPrim = rotOnX * z;
            const Vector4 rotOnYprim(ry, yPrim);
            const Vector3 zPrimPrim = rotOnYprim * zPrim;
            const Vector4 rotOnZprim(rz, zPrimPrim);

            CopyFrom(rotOnZprim * rotOnYprim * rotOnX);
        }

		void FromAngleAndAxis(float angle, const Vector3& axis)
		{
			Q0 = cos(angle / 2.0f);

			const Vector3 axisDir = axis.GetNorm();
			const float sinValue = sin(angle / 2.0f);
			Q1 = axisDir.X * sinValue;
			Q2 = axisDir.Y * sinValue;
			Q3 = axisDir.Z * sinValue;
		}

        float GetRotationAngle()
        {
            if ((Q0 >= 1.0f)|| (Q0 < -1))
            {
                Normalize();   
            }
			return (2 * Vector3::SafeAcos(Q0));
        }

        Vector3 GetRotationAxis()
        {
            if (Q0 > 1)
            {
                Normalize();
            }
			
            const float s = sqrt(1 - Q0 * Q0);
            return (s < epsilon)?Vector3(Q1, Q2,Q3):Vector3(Q1 / s, Q2 / s, Q3 / s);
        }

        void CopyFrom(const Vector4& v)
        {
            Q0 = v.Q0;
			Q1 = v.Q1;
			Q2 = v.Q2;
			Q3 = v.Q3;
        }

	    Vector3 GetEulerAngles() const
        {
            return ComputeMatrix().GetEulerAngles();
        }

        void Normalize()
        {
            const float norm = sqrt(Q0 * Q0 + Q1 * Q1+ Q2 * Q2 + Q3 * Q3);
            if (!(abs(norm) <= epsilon))
            {
                Q0 /= norm;
                Q1 /= norm;
                Q2 /= norm;
                Q3 /= norm;
            }
        }

        Vector4 GetNormalize() const
        {
			Vector4 quat = *this;
            quat.Normalize();
            return quat;
        }

       // static Vector4 Identity(){return Vector4(1.0f, 0.0f, 0.0f, 0.0f));

        void SetIdentity()
        {
            Q0=1;
            Q1=0;
            Q2=0;
            Q3=0;
        }

        Vector4 GetInverse() const
        {
            return Vector4(Q0, -Q1, -Q2, -Q3);
        }

        float Dot(const Vector4& q) const
        {
            return Q0*q.Q0 + Q1*q.Q1 + Q2*q.Q2 + Q3*q.Q3;
        }

        Vector3 operator *(const Vector3& vector) const
        {
            const Vector4 vectorAsQuat = Vector4(1, vector.X, vector.Y, vector.Z);
			const Vector4 result4(*this * (vectorAsQuat * this->GetInverse()));
			return Vector3(result4.Q1, result4.Q2, result4.Q3);
        }

        Vector4 operator *(const Vector4& t2) const
	    {
			Vector4 tmp;
			tmp.Q0 = this->Q0*t2.Q0 - this->Q1*t2.Q1 - this->Q2*t2.Q2 -this->Q3*t2.Q3;
			tmp.Q1 = this->Q0*t2.Q1 + t2.Q0*this->Q1 + this->Q2*t2.Q3 -this->Q3*t2.Q2;
			tmp.Q2 = this->Q0*t2.Q2 + t2.Q0*this->Q2 + this->Q3*t2.Q1 -this->Q1*t2.Q3;
			tmp.Q3 = this->Q0*t2.Q3 + t2.Q0*this->Q3 + this->Q1*t2.Q2 -this->Q2*t2.Q1;
			return tmp;
	    }


        Matrix3X3 ComputeMatrix() const
        {
			Matrix3X3 matrix;
            const float xx = Q1 * Q1;
            const float xy = Q1 * Q2;
            const float xz = Q1 * Q3;
            const float xw = Q1 * Q0;
            const float yy = Q2 * Q2;
            const float yz = Q2 * Q3;
            const float yw = Q2 * Q0;
            const float zz = Q3 * Q3;
            const float zw = Q3 * Q0;
            matrix._mat[0][0] = 1.0f - 2.0f * (yy + zz);
            matrix._mat[0][1] = 2.0f * (xy - zw);
            matrix._mat[0][2] = 2.0f * (xz + yw);
            matrix._mat[1][0] = 2.0f * (xy + zw);
            matrix._mat[1][1] = 1.0f - 2.0f * (xx + zz);
            matrix._mat[1][2] = 2.0f * (yz - xw);
            matrix._mat[2][0] = 2.0f * (xz - yw);
            matrix._mat[2][1] = 2.0f * (yz + xw);
            matrix._mat[2][2] = 1.0f - 2.0f * (xx + yy);

            return matrix;
        }

        // Equals should not be used because of the ambiguity of 
        // orientation vs rotation
        //[Obsolete]
        bool Equals(const Vector4& q) const
        {
			throw std::exception("Please use OrientationsAreEqual or RotationsAreEqual");
        }

        //float[] ToArray()
        //{
        //    return new[] { Q0, Q1, Q2, Q3 };
        //}

        bool OrientationsAreEqual(const Vector4& q) const
        {
            const Vector4 q1 = this->GetNormalize();
			const Vector4 q2 = q.GetNormalize();

            return abs(q1.Dot(q2)) > 1 - epsilon;
        }

        bool RotationsAreEqual(Vector4& q) const
        {
			const Vector4 q1 = this->GetNormalize();
			const Vector4 q2 = q.GetNormalize();

            return q1.Dot(q2) > 1 - epsilon;
        }
	};
}
