#include "WBP_ModeLoading2.hpp"
#include "GPGameLoading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWBP_ModeLoading2_C::* ----
void UWBP_ModeLoading2_C::SetStyle(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_ModeLoading2_C", "SetStyle");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_ModeLoading2_C::PreConstruct(uint8_t IsDesignTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_ModeLoading2_C", "PreConstruct");
    struct
    {
        uint8_t IsDesignTime;
    } Parms{};
    Parms.IsDesignTime = (uint8_t)IsDesignTime;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_ModeLoading2_C::BP_InitMode(EGPLoadingDestination LoadingDestination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_ModeLoading2_C", "BP_InitMode");
    struct
    {
        enum EGPLoadingDestination LoadingDestination;
    } Parms{};
    Parms.LoadingDestination = (enum EGPLoadingDestination)LoadingDestination;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_ModeLoading2_C::LoadingViewDelayClose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_ModeLoading2_C", "LoadingViewDelayClose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_ModeLoading2_C::ExecuteUbergraph_WBP_ModeLoading2(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_ModeLoading2_C", "ExecuteUbergraph_WBP_ModeLoading2");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
