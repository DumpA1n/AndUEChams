#include "DFCommonButtonV1.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFCommonButtonV1_C::* ----
void UDFCommonButtonV1_C::OnSetThemeIDChanged(struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButtonV1_C", "OnSetThemeIDChanged");
    struct
    {
        struct FString InThemeID;
    } Parms{};
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void UDFCommonButtonV1_C::ExecuteUbergraph_DFCommonButtonV1(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButtonV1_C", "ExecuteUbergraph_DFCommonButtonV1");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
