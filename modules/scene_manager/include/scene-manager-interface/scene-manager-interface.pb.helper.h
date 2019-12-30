#ifndef _SCENE_MANAGER_INTERFACE_PB_HELPER_H_
#define _SCENE_MANAGER_INTERFACE_PB_HELPER_H_

#include "ipc/publisher_helper.h"
#include "ipc/subscriber_helper.h"
#include "ipc/rpc_request_helper.h"
#include "ipc/rpc_response_helper.h"
#include "scene-manager-interface/scene-manager-interface.pb.h"
#include "scene-manager-interface/scene-manager-interface.pb.service.h"
#include "scene-manager-interface/scene-manager-interface.pb.stub.h"

namespace aos
{
namespace ipc
{
namespace scene_manager
{
    class DocumentInfoHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<DocumentInfo> Publisher;
        typedef aos::core::ipc::helper::subscriber<DocumentInfo> Subscriber;
    };

    class IosUpdateHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<IosUpdate> Publisher;
        typedef aos::core::ipc::helper::subscriber<IosUpdate> Subscriber;
    };

    class JointsUpdateHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<JointsUpdate> Publisher;
        typedef aos::core::ipc::helper::subscriber<JointsUpdate> Subscriber;
    };

    class ObjectsUpdateHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<ObjectsUpdate> Publisher;
        typedef aos::core::ipc::helper::subscriber<ObjectsUpdate> Subscriber;
    };

    class AddMeshRequestHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<AddMeshRequest> Publisher;
        typedef aos::core::ipc::helper::subscriber<AddMeshRequest> Subscriber;
    };

    class AddMeshResponseHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<AddMeshResponse> Publisher;
        typedef aos::core::ipc::helper::subscriber<AddMeshResponse> Subscriber;
    };

    class GetStateRequestHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<GetStateRequest> Publisher;
        typedef aos::core::ipc::helper::subscriber<GetStateRequest> Subscriber;
    };

    class GetStateResponseHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<GetStateResponse> Publisher;
        typedef aos::core::ipc::helper::subscriber<GetStateResponse> Subscriber;
    };

    class RemoveMeshRequestHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<RemoveMeshRequest> Publisher;
        typedef aos::core::ipc::helper::subscriber<RemoveMeshRequest> Subscriber;
    };

    class RemoveMeshResponseHelper
    {
    public:
        typedef aos::core::ipc::helper::publisher<RemoveMeshResponse> Publisher;
        typedef aos::core::ipc::helper::subscriber<RemoveMeshResponse> Subscriber;
    };

    class SceneManagerServiceHelper
    {
    public:
        typedef aos::core::ipc::helper::rpc_request_service<SceneManagerServiceStub> Stub;
        typedef aos::core::ipc::helper::rpc_response_service<SceneManagerService> Service;
    };
}
}
}

#endif
