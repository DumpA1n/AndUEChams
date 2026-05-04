#include "WBP_SlotCompIconFX_Loading.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWBP_SlotCompIconFX_Loading_C::* ----
void UWBP_SlotCompIconFX_Loading_C::PlayLoadingAnim_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SlotCompIconFX_Loading_C", "PlayLoadingAnim_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_SlotCompIconFX_Loading_C::StopLoadingAnim_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SlotCompIconFX_Loading_C", "StopLoadingAnim_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_SlotCompIconFX_Loading_C::OnIconSizeChange(struct FVector2D LocalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SlotCompIconFX_Loading_C", "OnIconSizeChange");
    struct
    {
        struct FVector2D LocalSize;
    } Parms{};
    Parms.LocalSize = (struct FVector2D)LocalSize;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_SlotCompIconFX_Loading_C::ExecuteUbergraph_WBP_SlotCompIconFX_Loading(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_SlotCompIconFX_Loading_C", "ExecuteUbergraph_WBP_SlotCompIconFX_Loading");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
