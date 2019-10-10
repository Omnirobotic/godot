//MeshSegmentation.h
#pragma once
#include "Topology/TopoMesh.h"
#include "MeshConnectivity.h"

namespace Omni
{
namespace Geometry
{
namespace Mesh
{
	int MeshFaceNormalSegmentation(TopoMesh& inMesh, float thetaThreshold, ConnectedComponents& faceNormalSegmentationCC);
	int AgreggateSmallComponents(TopoMesh& inMesh, float thetaThreshold, int minNbFaces, ConnectedComponents& cc);
}//end of namespace Mesh
}//end of namespace Geometry
}//end of namespace Omni

