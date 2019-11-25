//MeshFilters.h
#pragma once
#include "Topology/TopoMesh.h"

namespace Omni
{
	namespace Geometry
	{
		namespace Mesh
		{
			void SmoothMeshWithNeighborVertices(TopoMesh& inMesh, float lambda);
            void SmoothMeshWithNeighborVertices(TopoMesh& inMesh, float lambda, int nbSmoothIteration);
            void MeshNormalFilter(TopoMesh& inMesh, CppMath::Vector3 ref_normal, float angle_threshold);
		}//end of namespace Mesh
	}//end of namespace Geometry
}//end of namespace Omni


