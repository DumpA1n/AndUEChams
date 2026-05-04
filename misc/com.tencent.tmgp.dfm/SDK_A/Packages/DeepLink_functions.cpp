#include "DeepLink.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDeepLink::* ----
void UDeepLink::OnDeepLinkDelegate__DelegateSignature(struct FString DeepLinkUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DeepLink", "OnDeepLinkDelegate__DelegateSignature");
    struct
    {
        struct FString DeepLinkUrl;
    } Parms{};
    Parms.DeepLinkUrl = (struct FString)DeepLinkUrl;
    this->ProcessEvent(Func, &Parms);
}

void UDeepLink::OnDeepLinkCallback(struct FString UrlStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeepLink", "OnDeepLinkCallback");
    struct
    {
        struct FString UrlStr;
    } Parms{};
    Parms.UrlStr = (struct FString)UrlStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UDeepLink::GetLastDeepLinkUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeepLink", "GetLastDeepLinkUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDeepLink* UDeepLink::GetDeepLink()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DeepLink", "GetDeepLink");
    struct
    {
        struct UDeepLink* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
