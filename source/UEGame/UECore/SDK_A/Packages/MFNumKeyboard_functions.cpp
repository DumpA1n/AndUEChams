#include "MFNumKeyboard.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFNumKeyboardWidget
void UMFNumKeyboardWidget::Show(struct FGeometry TextGeom, bool bShowNumKeyboardMillion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "Show");
    struct
    {
        struct FGeometry TextGeom;
        bool bShowNumKeyboardMillion;
    } Parms{};
    Parms.TextGeom = (struct FGeometry)TextGeom;
    Parms.bShowNumKeyboardMillion = (bool)bShowNumKeyboardMillion;
    this->ProcessEvent(Func, &Parms);
}

void UMFNumKeyboardWidget::SetText(struct FString Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "SetText");
    struct
    {
        struct FString Text;
    } Parms{};
    Parms.Text = (struct FString)Text;
    this->ProcessEvent(Func, &Parms);
}

void UMFNumKeyboardWidget::OnTouch(uint8_t FingerIndex, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "OnTouch");
    struct
    {
        uint8_t FingerIndex;
        struct FVector Location;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UMFNumKeyboardWidget::OnHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "OnHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFNumKeyboardWidget::GetText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "GetText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFNumKeyboardWidget::DeleteKeyChar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "DeleteKeyChar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFNumKeyboardWidget::ClearText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "ClearText");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFNumKeyboardWidget::AddkeyChar(struct FString S)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFNumKeyboardWidget", "AddkeyChar");
    struct
    {
        struct FString S;
    } Parms{};
    Parms.S = (struct FString)S;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
