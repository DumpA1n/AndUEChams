#include "WBP_Loading_TipView.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UWBP_Loading_TipView_C
void UWBP_Loading_TipView_C::OnCloseCalled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_Loading_TipView_C", "OnCloseCalled");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_Loading_TipView_C::Construct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_Loading_TipView_C", "Construct");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_Loading_TipView_C::ExecuteUbergraph_WBP_Loading_TipView(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_Loading_TipView_C", "ExecuteUbergraph_WBP_Loading_TipView");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
