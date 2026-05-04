#include "WBP_SOLMapLoadingView.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWBP_SOLMapLoadingView_C::* ----
void UWBP_SOLMapLoadingView_C::IsPC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SOLMapLoadingView_C", "IsPC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

ESlateVisibility UWBP_SOLMapLoadingView_C::GetVisibility_1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SOLMapLoadingView_C", "GetVisibility_1");
    struct
    {
        enum ESlateVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWBP_SOLMapLoadingView_C::Construct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SOLMapLoadingView_C", "Construct");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_SOLMapLoadingView_C::ExecuteUbergraph_WBP_SOLMapLoadingView(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SOLMapLoadingView_C", "ExecuteUbergraph_WBP_SOLMapLoadingView");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
