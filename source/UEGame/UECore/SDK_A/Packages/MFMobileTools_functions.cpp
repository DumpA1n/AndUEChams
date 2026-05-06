#include "MFMobileTools.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFMobileToolsModuleHelper
void UMFMobileToolsModuleHelper::WriteEvent2Calendar(int32_t InStartMillis, int32_t InPreviousMinutes, struct FString InZoneTime, struct FString InTitle, struct FString InContent, int32_t InEndMillis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMobileToolsModuleHelper", "WriteEvent2Calendar");
    struct
    {
        int32_t InStartMillis;
        int32_t InPreviousMinutes;
        struct FString InZoneTime;
        struct FString InTitle;
        struct FString InContent;
        int32_t InEndMillis;
    } Parms{};
    Parms.InStartMillis = (int32_t)InStartMillis;
    Parms.InPreviousMinutes = (int32_t)InPreviousMinutes;
    Parms.InZoneTime = (struct FString)InZoneTime;
    Parms.InTitle = (struct FString)InTitle;
    Parms.InContent = (struct FString)InContent;
    Parms.InEndMillis = (int32_t)InEndMillis;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFMobileToolsModuleHelper::DeleteEventFromeCalendar(struct FString InTitle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMobileToolsModuleHelper", "DeleteEventFromeCalendar");
    struct
    {
        struct FString InTitle;
    } Parms{};
    Parms.InTitle = (struct FString)InTitle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
