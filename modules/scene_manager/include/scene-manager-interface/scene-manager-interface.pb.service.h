#ifndef _SCENE_MANAGER_INTERFACE_PB_SERVICE_H_
#define _SCENE_MANAGER_INTERFACE_PB_SERVICE_H_

#include "ipc/rpc_response_protobuf.h"
#include "scene-manager-interface/scene-manager-interface.pb.h"

namespace aos
{
namespace ipc
{
namespace scene_manager
{
    class SceneManagerService : public aos::core::ipc::protobuf_response_service
    {
    public:
        SceneManagerService(const std::string& service_name)
            : aos::core::ipc::protobuf_response_service(service_name)
        {
            register_response<AddMeshRequest, AddMeshResponse>("AddMesh", [&](const AddMeshRequest& request, AddMeshResponse& response) { this->AddMesh(request, response); });
            register_response<GetStateRequest, GetStateResponse>("GetState", [&](const GetStateRequest& request, GetStateResponse& response) { this->GetState(request, response); });
            register_response<RemoveMeshRequest, RemoveMeshResponse>("RemoveMesh", [&](const RemoveMeshRequest& request, RemoveMeshResponse& response) { this->RemoveMesh(request, response); });
        }
        
        virtual ~SceneManagerService() { }

        virtual void AddMesh(const AddMeshRequest& request, AddMeshResponse& response) = 0;
        virtual void GetState(const GetStateRequest& request, GetStateResponse& response) = 0;
        virtual void RemoveMesh(const RemoveMeshRequest& request, RemoveMeshResponse& response) = 0;
    };
}
}
}

#endif
