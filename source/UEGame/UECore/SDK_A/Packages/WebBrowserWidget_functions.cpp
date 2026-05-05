#include "WebBrowserWidget.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UWebBrowser
void UWebBrowser::OnUrlChanged__DelegateSignature(const struct FText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WebBrowser", "OnUrlChanged__DelegateSignature");
    struct
    {
        struct FText Text;
    } Parms{};
    Parms.Text = (struct FText)Text;
    this->ProcessEvent(Func, &Parms);
}

void UWebBrowser::OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WebBrowser", "OnBeforePopup__DelegateSignature");
    struct
    {
        struct FString URL;
        struct FString Frame;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Frame = (struct FString)Frame;
    this->ProcessEvent(Func, &Parms);
}

void UWebBrowser::LoadURL(struct FString NewURL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WebBrowser", "LoadURL");
    struct
    {
        struct FString NewURL;
    } Parms{};
    Parms.NewURL = (struct FString)NewURL;
    this->ProcessEvent(Func, &Parms);
}

void UWebBrowser::LoadString(struct FString Contents, struct FString DummyURL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WebBrowser", "LoadString");
    struct
    {
        struct FString Contents;
        struct FString DummyURL;
    } Parms{};
    Parms.Contents = (struct FString)Contents;
    Parms.DummyURL = (struct FString)DummyURL;
    this->ProcessEvent(Func, &Parms);
}

struct FString UWebBrowser::GetUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WebBrowser", "GetUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UWebBrowser::GetTitleText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WebBrowser", "GetTitleText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWebBrowser::ExecuteJavascript(struct FString ScriptText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WebBrowser", "ExecuteJavascript");
    struct
    {
        struct FString ScriptText;
    } Parms{};
    Parms.ScriptText = (struct FString)ScriptText;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
