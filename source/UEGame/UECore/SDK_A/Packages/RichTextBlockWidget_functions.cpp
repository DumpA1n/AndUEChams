#include "RichTextBlockWidget.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// URichTextBox
void URichTextBox::SetText(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBox", "SetText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBox::SetHighlightText(const struct FText& InHighlightText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBox", "SetHighlightText");
    struct
    {
        struct FText InHighlightText;
    } Parms{};
    Parms.InHighlightText = (struct FText)InHighlightText;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBox::RemoveFrontTextLines(int32_t RemovedLineCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBox", "RemoveFrontTextLines");
    struct
    {
        int32_t RemovedLineCount;
    } Parms{};
    Parms.RemovedLineCount = (int32_t)RemovedLineCount;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBox::OnRichTextHyperlinkClicked__DelegateSignature(const struct TArray<struct FString>& MetaData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBox", "OnRichTextHyperlinkClicked__DelegateSignature");
    struct
    {
        struct TArray<struct FString> MetaData;
    } Parms{};
    Parms.MetaData = (struct TArray<struct FString>)MetaData;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBox::OnDynamicTextAppendedEvent__DelegateSignature(struct FString AppendString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBox", "OnDynamicTextAppendedEvent__DelegateSignature");
    struct
    {
        struct FString AppendString;
    } Parms{};
    Parms.AppendString = (struct FString)AppendString;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBox::ClearAllDisplayText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBox", "ClearAllDisplayText");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t URichTextBox::AppendDynamicTextString(struct FString AppendString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBox", "AppendDynamicTextString");
    struct
    {
        struct FString AppendString;
        int32_t ReturnValue;
    } Parms{};
    Parms.AppendString = (struct FString)AppendString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
