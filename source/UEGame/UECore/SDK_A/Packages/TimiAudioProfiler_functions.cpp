#include "TimiAudioProfiler.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UTAProfilerBPFuncLibrary
void UTAProfilerBPFuncLibrary::CreateProfilerWidget(struct APlayerController* InPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TAProfilerBPFuncLibrary", "CreateProfilerWidget");
    struct
    {
        struct APlayerController* InPlayerController;
    } Parms{};
    Parms.InPlayerController = (struct APlayerController*)InPlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UTAProfilerBPFuncLibrary::ChangeMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TAProfilerBPFuncLibrary", "ChangeMode");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UTAProfilerPanel
void UTAProfilerPanel::StartLogOnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TAProfilerPanel", "StartLogOnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTAProfilerPanel::ShowRTPC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TAProfilerPanel", "ShowRTPC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTAProfilerPanel::ShowEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TAProfilerPanel", "ShowEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTAProfilerPanel::SearchTextCommitted(const struct FText& InNewString, ETextCommit InTextCommit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TAProfilerPanel", "SearchTextCommitted");
    struct
    {
        struct FText InNewString;
        enum ETextCommit InTextCommit;
    } Parms{};
    Parms.InNewString = (struct FText)InNewString;
    Parms.InTextCommit = (enum ETextCommit)InTextCommit;
    this->ProcessEvent(Func, &Parms);
}

void UTAProfilerPanel::EndLogOnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TAProfilerPanel", "EndLogOnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTAProfilerPanel::CloseBtnOnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TAProfilerPanel", "CloseBtnOnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTAProfilerPanel::CleanUpOnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TAProfilerPanel", "CleanUpOnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
