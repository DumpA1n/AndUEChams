#include "BP_GLS_PreloadResource.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GLS_PreloadResource_C
void UBP_GLS_PreloadResource_C::ResourcePreloadImplement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreloadResource_C", "ResourcePreloadImplement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_PreloadResource_C::BP_OnStepBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreloadResource_C", "BP_OnStepBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_PreloadResource_C::RestartLuaVM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreloadResource_C", "RestartLuaVM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_PreloadResource_C::DelayOnmore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreloadResource_C", "DelayOnmore");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_PreloadResource_C::ExecuteUbergraph_BP_GLS_PreloadResource(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreloadResource_C", "ExecuteUbergraph_BP_GLS_PreloadResource");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
