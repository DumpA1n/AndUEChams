#include "PixUILog.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UPxLogMgr::* ----
void UPxLogMgr::PxLogToggleSwitchLevel(EPxLogLevels eLogLevel, uint8_t beOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxLogMgr", "PxLogToggleSwitchLevel");
    struct
    {
        enum EPxLogLevels eLogLevel;
        uint8_t beOpen;
    } Parms{};
    Parms.eLogLevel = (enum EPxLogLevels)eLogLevel;
    Parms.beOpen = (uint8_t)beOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPxLogMgr::PxLogToggleSwitchGroup(EPxLogGroups eLogGroup, uint8_t beOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxLogMgr", "PxLogToggleSwitchGroup");
    struct
    {
        enum EPxLogGroups eLogGroup;
        uint8_t beOpen;
    } Parms{};
    Parms.eLogGroup = (enum EPxLogGroups)eLogGroup;
    Parms.beOpen = (uint8_t)beOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPxLogMgr::PxLogToggleForceLocalOutPut(uint8_t beOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxLogMgr", "PxLogToggleForceLocalOutPut");
    struct
    {
        uint8_t beOpen;
    } Parms{};
    Parms.beOpen = (uint8_t)beOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPxLogMgr::PxLogEnable(uint8_t beEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxLogMgr", "PxLogEnable");
    struct
    {
        uint8_t beEnable;
    } Parms{};
    Parms.beEnable = (uint8_t)beEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UPxLogMgr* UPxLogMgr::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxLogMgr", "Get");
    struct
    {
        struct UPxLogMgr* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPxLogMgr::DispatchLog(EPxLogGroups eLogGroup, EPxLogLevels eLogLevel, struct FString strLogContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxLogMgr", "DispatchLog");
    struct
    {
        enum EPxLogGroups eLogGroup;
        enum EPxLogLevels eLogLevel;
        struct FString strLogContent;
    } Parms{};
    Parms.eLogGroup = (enum EPxLogGroups)eLogGroup;
    Parms.eLogLevel = (enum EPxLogLevels)eLogLevel;
    Parms.strLogContent = (struct FString)strLogContent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
