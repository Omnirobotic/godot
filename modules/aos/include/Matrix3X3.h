#pragma once
#include <vector>
#include <Math.h>
#include "Vector3.h"
#define _USE_MATH_DEFINES
#include <math.h>

namespace CppMath
{
    class Matrix3X3
    {
    public:
        float _mat[3][3];

        const float epsilon = 0.0001f;

        Matrix3X3()
        {
            SetIdentity();
        }

        //cause compilation warning: recursive on all control paths, function will cause runtime stack overflow
        //Matrix3X3(const Matrix3X3& m)
        //{
        //    Copy(m);
        //}

        // returns the column at <c>
        //Vector3 this[int k]
        //{
        //    get { return new Vector3(this[0][k]][this[1][k]][this[2][k]); }
        //    set
        //    {
        //        this[0][k] = value.X;
        //        this[1][k] = value.Y;
        //        this[2][k] = value.Z;
        //    }
        //}
        Vector3 GetColumn(int column)
        {
            return Vector3(_mat[0][column], _mat[1][column], _mat[2][column]);
        }

        void SetColumn(int column, Vector3 vector)
        {
            _mat[0][column] = vector.X;
            _mat[1][column] = vector.Y;
            _mat[2][column] = vector.Z;
        }
    
        void Set(int i, int j, float val)
        {
            _mat[i][ j] = val;
        }

        Vector3 GetIntrinsicEulerAngles()
        {
            float m02 = _mat[0][2];
            if (m02 > 1.0f)
            {
                m02 = 1.0f;
            }

            if (m02 < -1.0f)
            {
                m02 = -1.0f;
            }

            Vector3 angles = Vector3(0,asin(m02),0);
            if (m02 < 0.0)
            {
                m02 = -m02;
            }

            if (abs(m02 - 1) > epsilon)
            {
                // There is no gimbal lock
                angles.X = (float)atan2(-_mat[1][2], _mat[2][2]);
                angles.Z = (float)atan2(-_mat[0][1], _mat[0][0]);
            }
            else
            {
                //Gimbal
                angles.X = 0.0f;
                angles.Z = (float)atan2(_mat[1][0], _mat[1][1]);
            }

            return angles;
        }

        Vector3 GetEulerAngles()
        {
            float pivot = -_mat[2][0];            
            Vector3 angles;
            if (abs(abs(pivot) - 1) <= epsilon)
            {
                angles.X = (float)(atan2(-_mat[0][1] / _mat[2][0], -_mat[0][2] / _mat[2][0]));
                angles.Y = (float)((pivot > 0 ? 1 : -1) * M_PI / 2);
                angles.Z = 0;
            }
            else
            {
                float ry = asin(pivot);
                angles.Y = (float)ry;

                float tmp = cos(ry);
                if (tmp > 0)
                {
                    tmp = 1;
                }
                else
                {
                    tmp = -1;
                }

                angles.X = (float)atan2(_mat[2][1] / tmp, _mat[2][2] / tmp);                
                angles.Z = (float)atan2(_mat[1][0] / tmp, _mat[0][0] / tmp);
            }

            return angles;
        }

        void SetEulerAngles(float alpha, float beta, float gamma)
        {
            float cosa = (float)cos(alpha);
            float sina = (float)sin(alpha);

            float cosb = (float)cos(beta);
            float sinb = (float)sin(beta);

            float cosg = (float)cos(gamma);
            float sing = (float)sin(gamma);

            _mat[0][0] = cosg*cosb;
            _mat[1][0] = sing*cosb;
            _mat[2][0] = -sinb;
            _mat[0][1] = cosg*sinb*sina - sing*cosa;
            _mat[1][1] = sina*sinb*sing + cosa*cosg;
            _mat[2][1] = sina*cosb;
            _mat[0][2] = cosa*sinb*cosg + sina*sing;
            _mat[1][2] = cosa*sinb*sing - sina*cosg;
            _mat[2][2] = cosa*cosb;
        }

        void Copy(Matrix3X3 m)
        {
            _mat[0][0] = m._mat[0][0];
            _mat[1][0] = m._mat[1][0];
            _mat[2][0] = m._mat[2][0];
            _mat[0][1] = m._mat[0][1];
            _mat[1][1] = m._mat[1][1];
            _mat[2][1] = m._mat[2][1];
            _mat[0][2] = m._mat[0][2];
            _mat[1][2] = m._mat[1][2];
            _mat[2][2] = m._mat[2][2];
        }

        Matrix3X3& operator *(const Matrix3X3& m2)
        {
            Matrix3X3 result;
            
            result._mat[0][0] = this->_mat[0][0] * m2._mat[0][0] + this->_mat[0][1] * m2._mat[1][0] + this->_mat[0][2] * m2._mat[2][0];
            result._mat[0][1] = this->_mat[0][0] * m2._mat[0][1] + this->_mat[0][1] * m2._mat[1][1] + this->_mat[0][2] * m2._mat[2][1];
            result._mat[0][2] = this->_mat[0][0] * m2._mat[0][2] + this->_mat[0][1] * m2._mat[1][2] + this->_mat[0][2] * m2._mat[2][2];
            result._mat[1][0] = this->_mat[1][0] * m2._mat[0][0] + this->_mat[1][1] * m2._mat[1][0] + this->_mat[1][2] * m2._mat[2][0];
            result._mat[1][1] = this->_mat[1][0] * m2._mat[0][1] + this->_mat[1][1] * m2._mat[1][1] + this->_mat[1][2] * m2._mat[2][1];
            result._mat[1][2] = this->_mat[1][0] * m2._mat[0][2] + this->_mat[1][1] * m2._mat[1][2] + this->_mat[1][2] * m2._mat[2][2];
            result._mat[2][0] = this->_mat[2][0] * m2._mat[0][0] + this->_mat[2][1] * m2._mat[1][0] + this->_mat[2][2] * m2._mat[2][0];
            result._mat[2][1] = this->_mat[2][0] * m2._mat[0][1] + this->_mat[2][1] * m2._mat[1][1] + this->_mat[2][2] * m2._mat[2][1];
            result._mat[2][2] = this->_mat[2][0] * m2._mat[0][2] + this->_mat[2][1] * m2._mat[1][2] + this->_mat[2][2] * m2._mat[2][2];
            
            return result;
        }

 /*       void RotateX(float angle)
        {
            Matrix3X3 r = CreateRotationX(angle);
            Copy(r*this);
        }
*/
        void SetIdentity()
        {
                _mat[0][0] = 1.0f;
                _mat[1][0] = 0.0f;
                _mat[2][0] = 0.0f;
                _mat[0][1] = 0.0f;
                _mat[1][1] = 1.0f;
                _mat[2][1] = 0.0f;
                _mat[0][2] = 0.0f;
                _mat[1][2] = 0.0f;
                _mat[2][2] = 1.0f;
        }
/*
        static Matrix3X3 CreateRotationX(float angle)
        {
            var c = (float)cos(angle);
            var s = (float)sin(angle);
            return new Matrix3X3()
            {
                [0, 0] = 1.0f,
                [1][0] = 0.0f,
                [2][0] = 0.0f,
                [0][1] = 0.0f,
                [1][1] = c,
                [2][1] = s,
                [0][2] = 0.0f,
                [1][2] = -s,
                [2][2] = c
            };
        }

        void RotateY(float angle)
        {
            var r = CreateRotationY(angle);
            Copy(r * this);
        }

        static Matrix3X3 CreateRotationY(float angle)
        {
            var c = (float)cos(angle);
            var s = (float)sin(angle);
            return new Matrix3X3()
            {
                [0][0] = c,
                [1][0] = 0.0f,
                [2][0] = -s,
                [0][1] = 0.0f,
                [1][1] = 1,
                [2][1] = 0.0f,
                [0][2] = s,
                [1][2] = 0.0f,
                [2][2] = c
            };
        }

        void RotateZ(float angle)
        {
            var r = CreateRotationZ(angle);
            Copy(r * this);
        }

        static Matrix3X3 CreateRotationZ(float angle)
        {
            var c = (float)cos(angle);
            var s = (float)sin(angle);
            return new Matrix3X3()
            {
                [0][0] = c,
                [1][0] = s,
                [2][0] = 0.0f,
                [0][1] = -s,
                [1][1] = c,
                [2][1] = 0.0f,
                [0][2] = 0.0f,
                [1][2] = 0.0f,
                [2][2] = 1
            };
        }

        bool Equals(Matrix3X3 m)
        {
            return abs(this[0][0] - m[0][0]) < epsilon &&
                   abs(this[0][1] - m[0][1]) < epsilon &&
                   abs(this[0][2] - m[0][2]) < epsilon &&
                   abs(this[1][0] - m[1][0]) < epsilon &&
                   abs(this[1][1] - m[1][1]) < epsilon &&
                   abs(this[1][2] - m[1][2]) < epsilon &&
                   abs(this[2][0] - m[2][0]) < epsilon &&
                   abs(this[2][1] - m[2][1]) < epsilon &&
                   abs(this[2][2] - m[2][2]) < epsilon;
        }
        */
    };
}
