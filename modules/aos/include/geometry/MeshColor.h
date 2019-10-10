#pragma once
#include "MeshConnectivity.h"

namespace Omni
{
namespace Geometry
{
namespace Mesh
{
	void RandomFaceColorMesh(TopoMesh& m);
	void FaceNormalColorMesh(TopoMesh& m);
	void RandomColorConnectedComponents(TopoMesh& m, ConnectedComponents& cc);
	void BorderFaceColorMesh(TopoMesh& m, colorType borderColor, colorType internalColor);
}//end of namespace Mesh
}//end of namespace Geometry
}//end of namespace Omni
