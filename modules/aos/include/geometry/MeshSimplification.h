//MeshSimplification.h
#pragma once

#include "Topology/TopoMesh.h"

namespace Omni
{
	namespace Geometry
	{
		namespace Mesh
		{
			class SymetricMatrix {

			public:

				// Constructor

				SymetricMatrix(double c = 0) 
				{
					for (int i = 0; i < 10; ++i)
					{
						m[i] = c;
					}
				}

				SymetricMatrix(double m11, double m12, double m13, double m14,
					double m22, double m23, double m24,
					double m33, double m34,
					double m44) {
					m[0] = m11;  m[1] = m12;  m[2] = m13;  m[3] = m14;
					m[4] = m22;  m[5] = m23;  m[6] = m24;
					m[7] = m33;  m[8] = m34;
					m[9] = m44;
				}

				// Make plane

				SymetricMatrix(double a, double b, double c, double d)
				{
					m[0] = a*a;  m[1] = a*b;  m[2] = a*c;  m[3] = a*d;
					m[4] = b*b;  m[5] = b*c;  m[6] = b*d;
					m[7] = c*c; m[8] = c*d;
					m[9] = d*d;
				}

				double operator[](int c) const { return m[c]; }

				// Determinant

				double det(int a11, int a12, int a13,
					int a21, int a22, int a23,
					int a31, int a32, int a33)
				{
					double det = m[a11] * m[a22] * m[a33] + m[a13] * m[a21] * m[a32] + m[a12] * m[a23] * m[a31]
						- m[a13] * m[a22] * m[a31] - m[a11] * m[a23] * m[a32] - m[a12] * m[a21] * m[a33];
					return det;
				}

				const SymetricMatrix operator+(const SymetricMatrix& n) const
				{
					return SymetricMatrix(m[0] + n[0], m[1] + n[1], m[2] + n[2], m[3] + n[3],
						m[4] + n[4], m[5] + n[5], m[6] + n[6],
						m[7] + n[7], m[8] + n[8],
						m[9] + n[9]);
				}

				SymetricMatrix& operator+=(const SymetricMatrix& n)
				{
					m[0] += n[0];   m[1] += n[1];   m[2] += n[2];   m[3] += n[3];
					m[4] += n[4];   m[5] += n[5];   m[6] += n[6];   m[7] += n[7];
					m[8] += n[8];   m[9] += n[9];
					return *this;
				}

				double m[10];
			};

			struct SimplifyTriangle 
			{
				int v[3]; 
				double err[4]; 
				int deleted;
				int dirty; 
				CppMath::Vector3 n;
			};

			struct SimplifyVertex 
			{ 
				CppMath::Vector3 p; 
				int tstart;
				int tcount; 
				SymetricMatrix q;
				int border;
			};

			struct SimplifyRef 
			{ 
				int tid;
				int	tvertex; 
			};

			// Helper functions
			inline double CalculateVertexQuadricError(const SymetricMatrix& q, double x, double y, double z);
			inline double CalculateEdgeQuadricError(int id_v1, int id_v2, CppMath::Vector3 &p_result, std::vector<SimplifyVertex>& vertices);
			inline bool CheckFlipped(CppMath::Vector3 p, int indexV0, int indexV1, SimplifyVertex &v0, SimplifyVertex &v1, std::vector<int> &deleted, std::vector<SimplifyTriangle>& triangles, std::vector<SimplifyVertex>& vertices, std::vector<SimplifyRef>& refs);
			inline void UpdateSimplifyTriangles(int indexV0, SimplifyVertex &v, std::vector<int> &deleted, int &deleted_triangles, std::vector<SimplifyTriangle>& triangles, std::vector<SimplifyVertex>& vertices, std::vector<SimplifyRef>& refs);
			void UpdateMesh(int iteration, std::vector<SimplifyTriangle>& triangles, std::vector<SimplifyVertex>& vertices, std::vector<SimplifyRef>& refs);
			void CompactMesh(std::vector<SimplifyTriangle>& triangles, std::vector<SimplifyVertex>& vertices);


			// based on code by Sven Forstmann in 2014
			// https://github.com/sp4cerat/Fast-Quadric-Mesh-Simplification
			// License : MIT  http://opensource.org/licenses/MIT
			// which is based on the publish article
			// Simplifying Surfaces with Color and Texture using Quadric Error Metrics
			// Michael Garland and Paul S.Heckbert
			// Carnegie Mellon University
            void SimplifyMeshWithQuadricEdgeCollapse(TopoMesh& inMesh, int targetNbFaces, int nbMaxIteration, float agressiveness);

		}//end of namespace Mesh
	}//end of namespace Geometry
}//end of namespace Omni

