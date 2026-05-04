#include "ScreenCapture.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UIScreenCapture::* ----
void UIScreenCapture::OnScreenCaptureDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IScreenCapture", "OnScreenCaptureDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UIScreenCapture* UIScreenCapture::GetScreenCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IScreenCapture", "GetScreenCapture");
    struct
    {
        struct UIScreenCapture* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
