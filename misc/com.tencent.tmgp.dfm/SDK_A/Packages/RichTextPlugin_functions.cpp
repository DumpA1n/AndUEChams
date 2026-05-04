#include "RichTextPlugin.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- URichTextBlockExtenderDecorator::* ----
void URichTextBlockExtenderDecorator::OnRichTextClickedEvent__DelegateSignature(const struct FRichTextMetadata& InMetadata)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlockExtenderDecorator", "OnRichTextClickedEvent__DelegateSignature");
    struct
    {
        struct FRichTextMetadata InMetadata;
    } Parms{};
    Parms.InMetadata = (struct FRichTextMetadata)InMetadata;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlockExtenderDecorator::OnRichTextClicked(const struct TMap<struct FString, struct FString>& InMetadata)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlockExtenderDecorator", "OnRichTextClicked");
    struct
    {
        struct TMap<struct FString, struct FString> InMetadata;
    } Parms{};
    Parms.InMetadata = (struct TMap<struct FString, struct FString>)InMetadata;
    this->ProcessEvent(Func, &Parms);
}

struct FText URichTextBlockExtenderDecorator::OnGetTips(const struct TMap<struct FString, struct FString>& InMetadata)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlockExtenderDecorator", "OnGetTips");
    struct
    {
        struct TMap<struct FString, struct FString> InMetadata;
        struct FText ReturnValue;
    } Parms{};
    Parms.InMetadata = (struct TMap<struct FString, struct FString>)InMetadata;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
