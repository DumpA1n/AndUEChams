#include "RuntimeHttpRequest.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// URuntimeHttpRequest
void URuntimeHttpRequest::OnHttpRequestComplete__DelegateSignature(struct FString URL, uint8_t Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeHttpRequest", "OnHttpRequestComplete__DelegateSignature");
    struct
    {
        struct FString URL;
        uint8_t Result;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Result = (uint8_t)Result;
    this->ProcessEvent(Func, &Parms);
}

uint8_t URuntimeHttpRequest::HttpRequest(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeHttpRequest", "HttpRequest");
    struct
    {
        struct FString URL;
        uint8_t ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URuntimeHttpRequest* URuntimeHttpRequest::GetRuntimeHttpRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RuntimeHttpRequest", "GetRuntimeHttpRequest");
    struct
    {
        struct URuntimeHttpRequest* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
