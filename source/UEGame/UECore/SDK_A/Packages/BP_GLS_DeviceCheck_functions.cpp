#include "BP_GLS_DeviceCheck.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GLS_DeviceCheck_C
void UBP_GLS_DeviceCheck_C::BP_OnStepBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_DeviceCheck_C", "BP_OnStepBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_DeviceCheck_C::ExecuteUbergraph_BP_GLS_DeviceCheck(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_DeviceCheck_C", "ExecuteUbergraph_BP_GLS_DeviceCheck");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
