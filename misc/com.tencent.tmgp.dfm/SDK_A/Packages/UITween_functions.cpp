#include "UITween.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UTestUserWidget::* ----
void UTestUserWidget::OnBtnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestUserWidget", "OnBtnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UUITweenLiteLib::* ----
void UUITweenLiteLib::StartupTween()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UITweenLiteLib", "StartupTween");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUITweenLiteLib::ShutdownTween()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UITweenLiteLib", "ShutdownTween");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
