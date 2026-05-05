#include "BPFuncLibrary.hpp"
#include "GPUserInterface.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBPFuncLibrary_C
void UBPFuncLibrary_C::SetTextWidthToFontMaterial(struct UTextBlock* TextBlock, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPFuncLibrary_C", "SetTextWidthToFontMaterial");
    struct
    {
        struct UTextBlock* TextBlock;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.TextBlock = (struct UTextBlock*)TextBlock;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBPFuncLibrary_C::Set_Led_Stripe_By_Font_Size(struct URetainerBox* TargetRetainerBox, struct UDFTextBlock* TragetTextBlock, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPFuncLibrary_C", "Set Led Stripe By Font Size");
    struct
    {
        struct URetainerBox* TargetRetainerBox;
        struct UDFTextBlock* TragetTextBlock;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.TargetRetainerBox = (struct URetainerBox*)TargetRetainerBox;
    Parms.TragetTextBlock = (struct UDFTextBlock*)TragetTextBlock;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
