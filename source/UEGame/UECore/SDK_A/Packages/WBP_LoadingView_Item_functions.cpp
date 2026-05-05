#include "WBP_LoadingView_Item.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UWBP_LoadingView_Item_C
void UWBP_LoadingView_Item_C::SetInfo(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_Item_C", "SetInfo");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_Item_C::PreConstruct(uint8_t IsDesignTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_Item_C", "PreConstruct");
    struct
    {
        uint8_t IsDesignTime;
    } Parms{};
    Parms.IsDesignTime = (uint8_t)IsDesignTime;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_Item_C::ExecuteUbergraph_WBP_LoadingView_Item(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_Item_C", "ExecuteUbergraph_WBP_LoadingView_Item");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
