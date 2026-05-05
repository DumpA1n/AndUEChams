#include "BP_GLS_LuaHotfix.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GLS_LuaHotfix_C
void UBP_GLS_LuaHotfix_C::BP_OnStepBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_LuaHotfix_C", "BP_OnStepBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_LuaHotfix_C::OnLaunchToLogin_OnLuaHotfixEnd_Event_1(uint8_t bEnterNextLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_LuaHotfix_C", "OnLaunchToLogin_OnLuaHotfixEnd_Event_1");
    struct
    {
        uint8_t bEnterNextLoop;
    } Parms{};
    Parms.bEnterNextLoop = (uint8_t)bEnterNextLoop;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_LuaHotfix_C::ExecuteUbergraph_BP_GLS_LuaHotfix(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_LuaHotfix_C", "ExecuteUbergraph_BP_GLS_LuaHotfix");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
