#include "LF_JustShutdownLua.hpp"
#include "DFMGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ULF_JustShutdownLua_C
uint8_t ULF_JustShutdownLua_C::BP_IsMainFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_JustShutdownLua_C", "BP_IsMainFlow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULF_JustShutdownLua_C::BP_IfStopOnError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_JustShutdownLua_C", "BP_IfStopOnError");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULF_JustShutdownLua_C::BP_Init(struct UDFMFlowManager* inFlowManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_JustShutdownLua_C", "BP_Init");
    struct
    {
        struct UDFMFlowManager* inFlowManager;
    } Parms{};
    Parms.inFlowManager = (struct UDFMFlowManager*)inFlowManager;
    this->ProcessEvent(Func, &Parms);
}

void ULF_JustShutdownLua_C::BP_OnFlowStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_JustShutdownLua_C", "BP_OnFlowStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULF_JustShutdownLua_C::ExecuteUbergraph_LF_JustShutdownLua(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LF_JustShutdownLua_C", "ExecuteUbergraph_LF_JustShutdownLua");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
