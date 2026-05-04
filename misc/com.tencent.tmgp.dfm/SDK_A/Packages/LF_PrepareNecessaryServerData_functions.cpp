#include "LF_PrepareNecessaryServerData.hpp"
#include "DFMGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULF_PrepareNecessaryServerData_C::* ----
void ULF_PrepareNecessaryServerData_C::BP_Init(struct UDFMFlowManager* inFlowManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_PrepareNecessaryServerData_C", "BP_Init");
    struct
    {
        struct UDFMFlowManager* inFlowManager;
    } Parms{};
    Parms.inFlowManager = (struct UDFMFlowManager*)inFlowManager;
    this->ProcessEvent(Func, &Parms);
}

void ULF_PrepareNecessaryServerData_C::ExecuteUbergraph_LF_PrepareNecessaryServerData(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_PrepareNecessaryServerData_C", "ExecuteUbergraph_LF_PrepareNecessaryServerData");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
