#pragma once
#include "Topology/TopoMesh.h"

namespace Omni
{
namespace Geometry
{
namespace Mesh
{
	void RemoveDuplicateVertex(TopoMesh& m);
	void RemoveUnreferencedVertex(TopoMesh& m);
}//end of namespace Mesh
}//end of namespace Geometry
}//end of namespace Omni