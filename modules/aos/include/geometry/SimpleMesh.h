#pragma once
#include "Vector3.h"
#include <vector>


namespace Omni
{
namespace Geometry
{
namespace Mesh
{
	class SimpleMesh
	{
	public:
		SimpleMesh();
		~SimpleMesh();
		//mesh access methods
		std::vector<CppMath::Vector3>&	GetVertices() { return _vertices; }
		std::vector<CppMath::Vector3>&	GetVertexNormals() { return _vertexNormals; }
		std::vector<int>&				GetFaceIndexes() { return _faceIndexes; }
		std::vector<CppMath::Vector3>&	GetFaceNormals() { return _faceNormals; }

		//mesh creation methods
		void AddVertex(CppMath::Vector3 vertex) { _vertices.push_back((vertex)); }
		void AddVertexNormal(CppMath::Vector3 normal) { _vertexNormals.push_back((normal)); }
		void AddFaceIndex(int index1, int index2, int index3);
		void AddFace(CppMath::Vector3 vertex1, CppMath::Vector3 vertex2, CppMath::Vector3 vertex3);
		void AddFaceNormal(CppMath::Vector3 normal) { _faceNormals.push_back((normal)); }
		void SetName(std::string name) { _name = name; }
		std::string GetName() { return _name; }
		void Clear();
		void Copy(SimpleMesh meshToCopy);
		void AddSubMesh(SimpleMesh& meshToAdd);

	private:
		std::string						_name;
		std::vector<CppMath::Vector3>	_vertices;
		std::vector<CppMath::Vector3>	_vertexNormals;
		std::vector<int>				_faceIndexes;
		std::vector<CppMath::Vector3>	_faceNormals;




	};
}//end of namespace Mesh
}//end of namespace Geometry
}//end of namespace Omni

