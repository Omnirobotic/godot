#pragma once
#include <vector>
#include <Math.h>
#include <istream>

namespace CppMath
{
    struct Vector3
    {
        float X;
        float Y;
        float Z;

		Vector3(const Vector3&) = default;
		Vector3& operator=(const Vector3&) = default;

		Vector3()
		{
			X = 0.0;
			Y = 0.0;
			Z = 0.0;
		}

        Vector3(float x, float y, float z)
        {
            X = x;
            Y = y;
            Z = z;
        }

        Vector3(const Vector3& p1, const Vector3& p2)
        {
            X = p2.X - p1.X;
            Y = p2.Y - p1.Y;
            Z = p2.Z - p1.Z;
        }

		Vector3 operator+ (const Vector3& v1) const
        {
            return Vector3(this->X + v1.X, this->Y + v1.Y, this->Z + v1.Z);
        }

		Vector3 operator- (const Vector3& v1) const
        {
            return  Vector3(this->X - v1.X, this->Y - v1.Y, this->Z - v1.Z);
        }

		Vector3 operator *(const  float& f) const
        {
            return Vector3(this->X * f, this->Y * f, this->Z * f);
        }

		bool operator == (const Vector3& v1) const
		{
			return (this->X == v1.X && this->Y == v1.Y && this->Z == v1.Z);
		}

        Vector3 GetNorm() const
        {
			Vector3 retV;
			const float length = Length();

			if (length == 0.0)
			{
				return Vector3(0.0f, 0.0f, 0.0f);
			}

			retV.X = X / length;
			retV.Y = Y / length;
			retV.Z = Z / length;

			return retV;
        }

		Vector3 GetPositive() const
		{
			Vector3 retV;

			retV.X = abs(X);
			retV.Y = abs(Y);
			retV.Z = abs(Z);

			return retV;
		}

        float Length() const
        {
            return sqrt(X * X + Y * Y + Z * Z);
            
        }

        bool IsLengthZero() const
        {
			const float epsilon = 1e-15f;
            return (abs(X) < epsilon) && (abs(Y) < epsilon) && (abs(Z) < epsilon);
        }

        float Length2() const
        {
            return X * X + Y * Y + Z * Z;
        }

        float Dist2(const Vector3& p2) const
        {
            return (p2.X - X) * (p2.X - X) + (p2.Y - Y) * (p2.Y - Y) + (p2.Z - Z) * (p2.Z - Z);
        }

        float Dist(const Vector3& p2) const
        {
            return sqrt(Dist2(p2));
        }

        Vector3 Cross(const Vector3& v) const
        {
            return Vector3(Y * v.Z - Z * v.Y, Z * v.X - X * v.Z, X * v.Y - Y * v.X );
        }

        float Dot(const Vector3& v) const
        {
            return X * v.X + Y * v.Y + Z * v.Z;
        }

        void SetZero()
        {
            X = 0;
            Y = 0;
            Z = 0;
        }

		inline static float SafeAcos(float x)
		{
			if (x < -1.0)
			{
				x = -1.0;
			}
			else if (x > 1.0)
			{
				x = 1.0;
			}
			return acosf(x);
		}

        static float Angle(const Vector3& u, const Vector3& v)
        {
            const float scalar = u.Dot(v);
            const float magnitude = u.Length()*v.Length();
			//protect against division by zero
			if (magnitude == 0.0f)
			{
				return 0.0f;
			}

            return SafeAcos(scalar / magnitude);
        }

		static Vector3 UnitXVector() { return Vector3(1, 0, 0); };
		static Vector3 UnitYVector() { return Vector3(0, 1, 0); };
		static Vector3 UnitZVector() { return Vector3(0, 0, 1); };
		static Vector3 OneOneOneVector() { return Vector3(1, 1, 1); };
	};

    inline std::istream& operator>> (std::istream& in, Vector3& v)
    {
        in.read(reinterpret_cast<char*>(&v.X), sizeof v.X);
        in.read(reinterpret_cast<char*>(&v.Y), sizeof v.Y);
        in.read(reinterpret_cast<char*>(&v.Z), sizeof v.Z);
        return in;
    }

    inline std::ostream& operator<< (std::ostream& out, Vector3& v)
    {
        out.write(reinterpret_cast<char*>(&v.X), sizeof v.X);
        out.write(reinterpret_cast<char*>(&v.Y), sizeof v.Y);
        out.write(reinterpret_cast<char*>(&v.Z), sizeof v.Z);
        return out;
    }
}
