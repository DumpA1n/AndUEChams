#include "LF_EnterMainLobby.hpp"
#include "DFMGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULF_EnterMainLobby_C::* ----
void ULF_EnterMainLobby_C::BP_Init(struct UDFMFlowManager* inFlowManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_EnterMainLobby_C", "BP_Init");
    struct
    {
        struct UDFMFlowManager* inFlowManager;
    } Parms{};
    Parms.inFlowManager = (struct UDFMFlowManager*)inFlowManager;
    this->ProcessEvent(Func, &Parms);
}

void ULF_EnterMainLobby_C::ExecuteUbergraph_LF_EnterMainLobby(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_EnterMainLobby_C", "ExecuteUbergraph_LF_EnterMainLobby");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
