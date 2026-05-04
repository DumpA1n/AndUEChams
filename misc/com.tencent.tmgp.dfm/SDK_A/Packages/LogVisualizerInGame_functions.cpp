#include "LogVisualizerInGame.hpp"
#include "Engine.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULogVisualizerInGame::* ----
void ULogVisualizerInGame::UpdateFilteredLogContent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "UpdateFilteredLogContent");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::SetLineNumPerPage(int32_t _LineNumberPerPage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "SetLineNumPerPage");
    struct
    {
        int32_t _LineNumberPerPage;
    } Parms{};
    Parms._LineNumberPerPage = (int32_t)_LineNumberPerPage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::SetDeniedCategories(uint8_t IsChecked, struct FString Category)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "SetDeniedCategories");
    struct
    {
        uint8_t IsChecked;
        struct FString Category;
    } Parms{};
    Parms.IsChecked = (uint8_t)IsChecked;
    Parms.Category = (struct FString)Category;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::SetAllowWarning(uint8_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "SetAllowWarning");
    struct
    {
        uint8_t Flag;
    } Parms{};
    Parms.Flag = (uint8_t)Flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::SetAllowMessage(uint8_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "SetAllowMessage");
    struct
    {
        uint8_t Flag;
    } Parms{};
    Parms.Flag = (uint8_t)Flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::SetAllowError(uint8_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "SetAllowError");
    struct
    {
        uint8_t Flag;
    } Parms{};
    Parms.Flag = (uint8_t)Flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::ResumeLogRecoding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "ResumeLogRecoding");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::PauseLogRecoding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "PauseLogRecoding");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString ULogVisualizerInGame::GetOnePageForShare()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "GetOnePageForShare");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULogVisualizerInGame::GetMaxSearchResultPageNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "GetMaxSearchResultPageNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULogVisualizerInGame::GetMaxPageNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "GetMaxPageNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULogVisualizerInGame::GetFinalShowText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "GetFinalShowText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULogVisualizerInGame::GetCategoryArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "GetCategoryArray");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULogVisualizerInGame::GetAllPagesForShare(uint8_t isSearch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "GetAllPagesForShare");
    struct
    {
        uint8_t isSearch;
        struct FString ReturnValue;
    } Parms{};
    Parms.isSearch = (uint8_t)isSearch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULogVisualizerInGame::EmptySearchResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "EmptySearchResult");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::EmptyFilteredResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "EmptyFilteredResult");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t ULogVisualizerInGame::DestroyLogWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "DestroyLogWidget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* ULogVisualizerInGame::CreateUWidget(struct UUserWidget* InWidget, struct UWidget* WidgetToCreate, struct FName WidgetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "CreateUWidget");
    struct
    {
        struct UUserWidget* InWidget;
        struct UWidget* WidgetToCreate;
        struct FName WidgetName;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UUserWidget*)InWidget;
    Parms.WidgetToCreate = (struct UWidget*)WidgetToCreate;
    Parms.WidgetName = (struct FName)WidgetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULogVisualizerInGame::CreateTaggedLogContent(int32_t PageNum, uint8_t isLastPage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "CreateTaggedLogContent");
    struct
    {
        int32_t PageNum;
        uint8_t isLastPage;
    } Parms{};
    Parms.PageNum = (int32_t)PageNum;
    Parms.isLastPage = (uint8_t)isLastPage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::CreateSearchTaggedLogContent(struct FString SubString, int32_t PageNum, uint8_t isLastPage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "CreateSearchTaggedLogContent");
    struct
    {
        struct FString SubString;
        int32_t PageNum;
        uint8_t isLastPage;
    } Parms{};
    Parms.SubString = (struct FString)SubString;
    Parms.PageNum = (int32_t)PageNum;
    Parms.isLastPage = (uint8_t)isLastPage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t ULogVisualizerInGame::CreateLogWidget(struct APlayerController* OwningPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "CreateLogWidget");
    struct
    {
        struct APlayerController* OwningPlayer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwningPlayer = (struct APlayerController*)OwningPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULogVisualizerInGame::CreateLogVisualizerInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "CreateLogVisualizerInstance");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::ClearLogRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "ClearLogRecord");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogVisualizerInGame::ClearDeniedCategories()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogVisualizerInGame", "ClearDeniedCategories");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
