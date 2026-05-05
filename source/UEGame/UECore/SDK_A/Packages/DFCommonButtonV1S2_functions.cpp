#include "DFCommonButtonV1S2.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFCommonButtonV1S2_C
void UDFCommonButtonV1S2_C::OnSetThemeIDChanged(struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButtonV1S2_C", "OnSetThemeIDChanged");
    struct
    {
        struct FString InThemeID;
    } Parms{};
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButtonV1S2_C::ExecuteUbergraph_DFCommonButtonV1S2(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButtonV1S2_C", "ExecuteUbergraph_DFCommonButtonV1S2");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
