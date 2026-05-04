#include "FetchServerData.hpp"
#include "DFMGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UFetchServerData_C::* ----
void UFetchServerData_C::BP_Init(struct UDFMFlowManager* inFlowManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FetchServerData_C", "BP_Init");
    struct
    {
        struct UDFMFlowManager* inFlowManager;
    } Parms{};
    Parms.inFlowManager = (struct UDFMFlowManager*)inFlowManager;
    this->ProcessEvent(Func, &Parms);
}

void UFetchServerData_C::ExecuteUbergraph_FetchServerData(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FetchServerData_C", "ExecuteUbergraph_FetchServerData");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
