#pragma once

#include <string>

namespace Omni
{
namespace Geometry
{
namespace Mesh
{

	class TopoMesh;
	class SimpleMesh;
	bool ReadBinarySTLMeshFile(std::string fileName, SimpleMesh& mesh);
	bool WriteBinarySTLMeshFile(std::string fileName, SimpleMesh& mesh);
	bool ReadBinarySTLMeshFile(std::string fileName, TopoMesh& mesh);
	bool WriteBinarySTLMeshFile(std::string fileName, TopoMesh& mesh);

}//end of namespace Mesh
}//end of namespace Geometry
}//end of namespace Omni
