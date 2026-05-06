#include "MFDestructionCommon.hpp"
#include "PhysicsCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFDestructibleObjParamManager
struct FDestructibleObjParam UMFDestructibleObjParamManager::GetDestructibleObjParamFromPhysicalMaterial(struct UPhysicalMaterial* InPhysicalMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFDestructibleObjParamManager", "GetDestructibleObjParamFromPhysicalMaterial");
    struct
    {
        struct UPhysicalMaterial* InPhysicalMaterial;
        struct FDestructibleObjParam ReturnValue;
    } Parms{};
    Parms.InPhysicalMaterial = (struct UPhysicalMaterial*)InPhysicalMaterial;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
