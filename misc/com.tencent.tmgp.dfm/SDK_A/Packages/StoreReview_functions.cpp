#include "StoreReview.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UIStoreReview::* ----
void UIStoreReview::ShowStoreReview()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IStoreReview", "ShowStoreReview");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIStoreReview::InitApiService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IStoreReview", "InitApiService");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UIStoreReview* UIStoreReview::GetStoreReview()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IStoreReview", "GetStoreReview");
    struct
    {
        struct UIStoreReview* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIStoreReview::EndApiService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IStoreReview", "EndApiService");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
