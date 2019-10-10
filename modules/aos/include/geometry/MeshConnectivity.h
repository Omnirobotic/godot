#pragma once
#include "Topology/TopoMesh.h"
#include "Vector4.h"

namespace Omni
{
namespace Geometry
{
namespace Mesh
{

	class Component
	{
	public:
		std::vector<int> indexes;
		MeshFlag flag;
	};

	class ConnectedComponents
	{
	public:
		std::vector<Component> components;
	};




	int FindDistinctObjectsFaces(TopoMesh& m, ConnectedComponents& cc);

    std::vector<CppMath::Vector3> GetVerticesInOppositeToPlane(const TopoMesh& m, const CppMath::Vector4& plane);
    int FindVerticeInOppositeToPlane(const TopoMesh& m, const CppMath::Vector4& plane, std::vector<bool>& isOnOppositeSide);
    bool IsMeshHavePointsOppositeToPlane(const TopoMesh& m, const CppMath::Vector4& plane);
	int SelectComponentsWithPointsOppositeToPlane(const TopoMesh& m, ConnectedComponents& cc, const CppMath::Vector4& plane);
	
	void CopySelectedComponentsToMesh(const TopoMesh& inMesh, TopoMesh& outMesh, const ConnectedComponents& cc);
	
	void TagDeleteSelectedComponents(ConnectedComponents& cc);

	void TagDeleteSmallComponent(ConnectedComponents& cc, int minNbFace);

    std::vector<TopoMesh_ptr> GenerateMeshesFromConnectedComponents(TopoMesh& inMesh, ConnectedComponents& cc);

	void ClearAllComponentsFlag();

    void FusionMeshes(TopoMesh& m, const TopoMesh& meshToFusion);

}//end of namespace Mesh
}//end of namespace Geometry
}//end of namespace Omni

