#pragma once
#include <fstream>

namespace Omni
{
namespace Geometry
{
namespace Mesh
{
	class TopoMesh;

	enum
	{
		text=0,
		binary=1
	};

	bool ReadTextPlyCMeshFile(std::string fileName, TopoMesh& mesh);
	bool WriteTextPlyCMeshFile(std::string fileName, const TopoMesh& mesh);

	void SerializeCMeshToPlyAscII(const TopoMesh& mesh, std::ostream& output);
    void DeserializeCMeshFromPlyAscii(TopoMesh& mesh, std::istream& input);
	void SerializeCMeshToPlyBinary(const TopoMesh& mesh, std::ostream& output);

}//end of namespace Mesh
}//end of namespace Geometry
}//end of namespace Omni
