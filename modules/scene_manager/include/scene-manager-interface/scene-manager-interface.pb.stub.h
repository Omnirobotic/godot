#ifndef _SCENE_MANAGER_INTERFACE_PB_STUB_H_
#define _SCENE_MANAGER_INTERFACE_PB_STUB_H_

#include "ipc/rpc_request_protobuf.h"
#include "scene-manager-interface/scene-manager-interface.pb.h"

namespace aos
{
namespace ipc
{
namespace scene_manager
{
    class SceneManagerServiceStub : public aos::core::ipc::protobuf_request_service
    {
    public:
        SceneManagerServiceStub(std::shared_ptr<aos::core::ipc::rpc_client> rpc_client, const std::string& service_name)
            : aos::core::ipc::protobuf_request_service(rpc_client, service_name) { }
        
    protected:
        SceneManagerServiceStub(const std::string& service_name)
            : aos::core::ipc::protobuf_request_service(service_name) { }
        
    public:
        void AddMesh(const AddMeshRequest& request, AddMeshResponse& response)
        {
            this->request("AddMesh", request, response);
        }

        void GetState(const GetStateRequest& request, GetStateResponse& response)
        {
            this->request("GetState", request, response);
        }

        void RemoveMesh(const RemoveMeshRequest& request, RemoveMeshResponse& response)
        {
            this->request("RemoveMesh", request, response);
        }

    };
}
}
}

#endif
