#include "PrepareMainFlowLobbyMap.hpp"
#include "DFMGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPrepareMainFlowLobbyMap_C
void UPrepareMainFlowLobbyMap_C::BP_Init(struct UDFMFlowManager* inFlowManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrepareMainFlowLobbyMap_C", "BP_Init");
    struct
    {
        struct UDFMFlowManager* inFlowManager;
    } Parms{};
    Parms.inFlowManager = (struct UDFMFlowManager*)inFlowManager;
    this->ProcessEvent(Func, &Parms);
}

void UPrepareMainFlowLobbyMap_C::ExecuteUbergraph_PrepareMainFlowLobbyMap(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrepareMainFlowLobbyMap_C", "ExecuteUbergraph_PrepareMainFlowLobbyMap");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
