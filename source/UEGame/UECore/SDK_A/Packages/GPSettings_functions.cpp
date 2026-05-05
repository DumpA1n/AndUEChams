#include "GPSettings.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPScalabilityBlueprintTools
void UGPScalabilityBlueprintTools::SetMaxFPS(float InMaxFPS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "SetMaxFPS");
    struct
    {
        float InMaxFPS;
    } Parms{};
    Parms.InMaxFPS = (float)InMaxFPS;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPScalabilityBlueprintTools::SetMainFlowState(EMainFlowState InCurrentMainFlowState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "SetMainFlowState");
    struct
    {
        enum EMainFlowState InCurrentMainFlowState;
    } Parms{};
    Parms.InCurrentMainFlowState = (enum EMainFlowState)InCurrentMainFlowState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPScalabilityBlueprintTools::SetGameQuality(int32_t InGameQualityLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "SetGameQuality");
    struct
    {
        int32_t InGameQualityLevel;
    } Parms{};
    Parms.InGameQualityLevel = (int32_t)InGameQualityLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPScalabilityBlueprintTools::SetGameModeName(struct FString InGameModeName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "SetGameModeName");
    struct
    {
        struct FString InGameModeName;
    } Parms{};
    Parms.InGameModeName = (struct FString)InGameModeName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPScalabilityBlueprintTools::SetGameMode(int32_t InGameMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "SetGameMode");
    struct
    {
        int32_t InGameMode;
    } Parms{};
    Parms.InGameMode = (int32_t)InGameMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

EMainFlowState UGPScalabilityBlueprintTools::GetMainFlowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "GetMainFlowState");
    struct
    {
        enum EMainFlowState ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPScalabilityBlueprintTools::GetGameQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "GetGameQuality");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPScalabilityBlueprintTools::GetGameMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPScalabilityBlueprintTools", "GetGameMode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHardwareParamHelper
void UHardwareParamHelper::Warning(struct FString InMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "Warning");
    struct
    {
        struct FString InMessage;
    } Parms{};
    Parms.InMessage = (struct FString)InMessage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::SetWorkingSetSize(int32_t MiniWorkingSetSizeGB, int32_t MaxWorkingSetSizeGB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "SetWorkingSetSize");
    struct
    {
        int32_t MiniWorkingSetSizeGB;
        int32_t MaxWorkingSetSizeGB;
    } Parms{};
    Parms.MiniWorkingSetSizeGB = (int32_t)MiniWorkingSetSizeGB;
    Parms.MaxWorkingSetSizeGB = (int32_t)MaxWorkingSetSizeGB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::SetMemoryMiniSpeed(int32_t Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "SetMemoryMiniSpeed");
    struct
    {
        int32_t Speed;
    } Parms{};
    Parms.Speed = (int32_t)Speed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::PrintCurrentVideoMemoryInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "PrintCurrentVideoMemoryInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::LogMemoryStat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "LogMemoryStat");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::Log(struct FString InMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "Log");
    struct
    {
        struct FString InMessage;
    } Parms{};
    Parms.InMessage = (struct FString)InMessage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UHardwareParamHelper::IsMemoryEnough(int32_t MemorySizeMB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "IsMemoryEnough");
    struct
    {
        int32_t MemorySizeMB;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MemorySizeMB = (int32_t)MemorySizeMB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHardwareParamHelper::IsMemoryBandWidthEnough(struct TArray<struct FMemoryDeviceInfo> MemoryArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "IsMemoryBandWidthEnough");
    struct
    {
        struct TArray<struct FMemoryDeviceInfo> MemoryArray;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MemoryArray = (struct TArray<struct FMemoryDeviceInfo>)MemoryArray;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHardwareParamHelper::IsMeetMemoryStandards()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "IsMeetMemoryStandards");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHardwareParamHelper::IsHardDriveHDD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "IsHardDriveHDD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHardwareParamHelper::HasNVIDIADevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "HasNVIDIADevice");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHardwareParamHelper::GetTotalDedicatedVideoMemoryMB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetTotalDedicatedVideoMemoryMB");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHardwareParamHelper::GetTotalBudgetVideoMemoryMB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetTotalBudgetVideoMemoryMB");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UHardwareParamHelper::GetSystemHandleCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetSystemHandleCount");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHardwareParamHelper::GetPlatformPhysicalMemoryLeft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetPlatformPhysicalMemoryLeft");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHardwareParamHelper::GetPlatformCommittedMemoryLeft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetPlatformCommittedMemoryLeft");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHardwareParamHelper::GetNumberOfCores()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetNumberOfCores");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHardwareParamHelper::GetMemoryMiniSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetMemoryMiniSpeed");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMemoryDeviceInfo> UHardwareParamHelper::GetMemoryInfoInterface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetMemoryInfoInterface");
    struct
    {
        struct TArray<struct FMemoryDeviceInfo> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHardwareParamHelper::GetGameUsedVideoMemory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetGameUsedVideoMemory");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHardwareParamHelper::GetCurrentUsedVideoMemoryOnLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetCurrentUsedVideoMemoryOnLogin");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHardwareParamHelper::GetCurrentUsedVideoMemory_Deprecated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetCurrentUsedVideoMemory_Deprecated");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHardwareParamHelper::GetCurrentUsedVideoMemory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetCurrentUsedVideoMemory");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHardwareParamHelper::GetConsoleVariableRefIntValue(struct FString VariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetConsoleVariableRefIntValue");
    struct
    {
        struct FString VariableName;
        int32_t ReturnValue;
    } Parms{};
    Parms.VariableName = (struct FString)VariableName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHardwareParamHelper::GetConsoleVariableRefFloatValue(struct FString VariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetConsoleVariableRefFloatValue");
    struct
    {
        struct FString VariableName;
        float ReturnValue;
    } Parms{};
    Parms.VariableName = (struct FString)VariableName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHardwareParamHelper::GetConsoleVariableRefBoolValue(struct FString VariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetConsoleVariableRefBoolValue");
    struct
    {
        struct FString VariableName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VariableName = (struct FString)VariableName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHardwareParamHelper::GetAvailablePageFileMB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetAvailablePageFileMB");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHardwareParamHelper::GetAllMappedFileMemorySizeMB(uint8_t isPrintLog, float& OutCommittedMB, float& OutWorkingsetMB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetAllMappedFileMemorySizeMB");
    struct
    {
        uint8_t isPrintLog;
        float OutCommittedMB;
        float OutWorkingsetMB;
    } Parms{};
    Parms.isPrintLog = (uint8_t)isPrintLog;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCommittedMB = Parms.OutCommittedMB;
    OutWorkingsetMB = Parms.OutWorkingsetMB;
}

void UHardwareParamHelper::GetAllImagesMemorySizeMB(uint8_t isPrintLog, float& OutCommittedMB, float& OutWorkingsetMB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "GetAllImagesMemorySizeMB");
    struct
    {
        uint8_t isPrintLog;
        float OutCommittedMB;
        float OutWorkingsetMB;
    } Parms{};
    Parms.isPrintLog = (uint8_t)isPrintLog;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCommittedMB = Parms.OutCommittedMB;
    OutWorkingsetMB = Parms.OutWorkingsetMB;
}

void UHardwareParamHelper::Error(struct FString InMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "Error");
    struct
    {
        struct FString InMessage;
    } Parms{};
    Parms.InMessage = (struct FString)InMessage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::CrashSightSetCustomKeyValTypeI(struct FString CustomKey, struct FString CustomValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "CrashSightSetCustomKeyValTypeI");
    struct
    {
        struct FString CustomKey;
        struct FString CustomValue;
    } Parms{};
    Parms.CustomKey = (struct FString)CustomKey;
    Parms.CustomValue = (struct FString)CustomValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::CrashSightSetCustomKeyVal(struct FString CustomKey, struct FString CustomValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "CrashSightSetCustomKeyVal");
    struct
    {
        struct FString CustomKey;
        struct FString CustomValue;
    } Parms{};
    Parms.CustomKey = (struct FString)CustomKey;
    Parms.CustomValue = (struct FString)CustomValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UHardwareParamHelper::CheckHardDriveType(uint8_t& isHDD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "CheckHardDriveType");
    struct
    {
        uint8_t isHDD;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    isHDD = Parms.isHDD;
    return Parms.ReturnValue;
}

void UHardwareParamHelper::ApplyCVarSettings(struct FString InSectionBaseName, struct FString InIniFilename, uint32_t SetBy, uint8_t bAllowCheating)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "ApplyCVarSettings");
    struct
    {
        struct FString InSectionBaseName;
        struct FString InIniFilename;
        uint32_t SetBy;
        uint8_t bAllowCheating;
    } Parms{};
    Parms.InSectionBaseName = (struct FString)InSectionBaseName;
    Parms.InIniFilename = (struct FString)InIniFilename;
    Parms.SetBy = (uint32_t)SetBy;
    Parms.bAllowCheating = (uint8_t)bAllowCheating;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::AddXMemTransferMemoryOnlyOnce(int32_t var)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "AddXMemTransferMemoryOnlyOnce");
    struct
    {
        int32_t var;
    } Parms{};
    Parms.var = (int32_t)var;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHardwareParamHelper::AddXMemTransferMemory(int32_t var)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HardwareParamHelper", "AddXMemTransferMemory");
    struct
    {
        int32_t var;
    } Parms{};
    Parms.var = (int32_t)var;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UVideoSettingHelper
uint8_t UVideoSettingHelper::WithACLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "WithACLine");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::UsingIntegratedIntelGPU(struct FString InAdatpterName, struct TArray<struct FString> InNameList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "UsingIntegratedIntelGPU");
    struct
    {
        struct FString InAdatpterName;
        struct TArray<struct FString> InNameList;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAdatpterName = (struct FString)InAdatpterName;
    Parms.InNameList = (struct TArray<struct FString>)InNameList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDateTime UVideoSettingHelper::ParseMonthDayYearDate(struct FString DateString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "ParseMonthDayYearDate");
    struct
    {
        struct FString DateString;
        struct FDateTime ReturnValue;
    } Parms{};
    Parms.DateString = (struct FString)DateString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPUDriverVersionHD UVideoSettingHelper::ParseGPUDriverHD(struct FString VersionStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "ParseGPUDriverHD");
    struct
    {
        struct FString VersionStr;
        struct FGPUDriverVersionHD ReturnValue;
    } Parms{};
    Parms.VersionStr = (struct FString)VersionStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::OnlyOneIntegratedAdapter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "OnlyOneIntegratedAdapter");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVideoSettingHelper::MarkResolutionForceRefresh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "MarkResolutionForceRefresh");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UVideoSettingHelper::LogSystemInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "LogSystemInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UVideoSettingHelper::IsWindowsVerOrGreater(int32_t InMajorVer, int32_t InMinorVer, int32_t InBuildVer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "IsWindowsVerOrGreater");
    struct
    {
        int32_t InMajorVer;
        int32_t InMinorVer;
        int32_t InBuildVer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMajorVer = (int32_t)InMajorVer;
    Parms.InMinorVer = (int32_t)InMinorVer;
    Parms.InBuildVer = (int32_t)InBuildVer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::IsValidGPUDriverVersionHD(struct FString VersionStr, struct FString DateStr, struct FString AdapterName, uint8_t bBHD, EGPDriverCompatibilityHandleMethod& OutHandleMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "IsValidGPUDriverVersionHD");
    struct
    {
        struct FString VersionStr;
        struct FString DateStr;
        struct FString AdapterName;
        uint8_t bBHD;
        enum EGPDriverCompatibilityHandleMethod OutHandleMethod;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VersionStr = (struct FString)VersionStr;
    Parms.DateStr = (struct FString)DateStr;
    Parms.AdapterName = (struct FString)AdapterName;
    Parms.bBHD = (uint8_t)bBHD;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHandleMethod = Parms.OutHandleMethod;
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::IsSystemConfigEpic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "IsSystemConfigEpic");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::IsRHIUseDualGPU()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "IsRHIUseDualGPU");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::IsGPUSupportedHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "IsGPUSupportedHD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGraphicsQualityLevelHD UVideoSettingHelper::GetVRamBenchmarkLevelHD(int32_t VRam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetVRamBenchmarkLevelHD");
    struct
    {
        int32_t VRam;
        enum EGraphicsQualityLevelHD ReturnValue;
    } Parms{};
    Parms.VRam = (int32_t)VRam;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSystemInfoHD UVideoSettingHelper::GetSystemInfoHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetSystemInfoHD");
    struct
    {
        struct FSystemInfoHD ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGraphicsQualityLevelHD UVideoSettingHelper::GetSystemConfigValueHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetSystemConfigValueHD");
    struct
    {
        enum EGraphicsQualityLevelHD ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FResizableBarInfo UVideoSettingHelper::GetResizableBarInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetResizableBarInfo");
    struct
    {
        struct FResizableBarInfo ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGraphicsQualityLevelHD UVideoSettingHelper::GetRamBenchmarkLevelHD(int32_t RamGB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetRamBenchmarkLevelHD");
    struct
    {
        int32_t RamGB;
        enum EGraphicsQualityLevelHD ReturnValue;
    } Parms{};
    Parms.RamGB = (int32_t)RamGB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FIntPoint> UVideoSettingHelper::GetPureResolutionList(const struct TArray<struct FDisplayModeHD>& DisplayModes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetPureResolutionList");
    struct
    {
        struct TArray<struct FDisplayModeHD> DisplayModes;
        struct TArray<struct FIntPoint> ReturnValue;
    } Parms{};
    Parms.DisplayModes = (struct TArray<struct FDisplayModeHD>)DisplayModes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMonitorInfoHD> UVideoSettingHelper::GetMonitorInfos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetMonitorInfos");
    struct
    {
        struct TArray<struct FMonitorInfoHD> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::GetMonitorInfoByID(struct FString MonitorID, struct FMonitorInfoHD& OutInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetMonitorInfoByID");
    struct
    {
        struct FString MonitorID;
        struct FMonitorInfoHD OutInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MonitorID = (struct FString)MonitorID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutInfo = Parms.OutInfo;
    return Parms.ReturnValue;
}

struct FString UVideoSettingHelper::GetGPUDriverVersionHD(struct FString AdapterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetGPUDriverVersionHD");
    struct
    {
        struct FString AdapterName;
        struct FString ReturnValue;
    } Parms{};
    Parms.AdapterName = (struct FString)AdapterName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UVideoSettingHelper::GetGPUDriverDateHD(struct FString AdapterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetGPUDriverDateHD");
    struct
    {
        struct FString AdapterName;
        struct FString ReturnValue;
    } Parms{};
    Parms.AdapterName = (struct FString)AdapterName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGraphicsQualityLevelHD UVideoSettingHelper::GetGPUBenchmarkLevelHD(struct FString GPUBrand, uint8_t bIntegratedGPU)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetGPUBenchmarkLevelHD");
    struct
    {
        struct FString GPUBrand;
        uint8_t bIntegratedGPU;
        enum EGraphicsQualityLevelHD ReturnValue;
    } Parms{};
    Parms.GPUBrand = (struct FString)GPUBrand;
    Parms.bIntegratedGPU = (uint8_t)bIntegratedGPU;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVideoSettingHelper::GetGPUBenchmarkHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetGPUBenchmarkHD");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVideoSettingHelper::GetGPUBenchmarkByNameHD(struct FString InGPU)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetGPUBenchmarkByNameHD");
    struct
    {
        struct FString InGPU;
        int32_t ReturnValue;
    } Parms{};
    Parms.InGPU = (struct FString)InGPU;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UVideoSettingHelper::GetGFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetGFrame");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FDisplayModeHD> UVideoSettingHelper::GetDisplayModes(int32_t AdapterID, struct FString MonitorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetDisplayModes");
    struct
    {
        int32_t AdapterID;
        struct FString MonitorID;
        struct TArray<struct FDisplayModeHD> ReturnValue;
    } Parms{};
    Parms.AdapterID = (int32_t)AdapterID;
    Parms.MonitorID = (struct FString)MonitorID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDeviceTempInfo UVideoSettingHelper::GetDeviceTempInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetDeviceTempInfo");
    struct
    {
        struct FDeviceTempInfo ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGraphicsQualityLevelHD UVideoSettingHelper::GetCPUBenchmarkLevelHD(struct FString CPUBrand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetCPUBenchmarkLevelHD");
    struct
    {
        struct FString CPUBrand;
        enum EGraphicsQualityLevelHD ReturnValue;
    } Parms{};
    Parms.CPUBrand = (struct FString)CPUBrand;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGraphicsQualityLevelHD UVideoSettingHelper::GetBenchmarkLevelHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "GetBenchmarkLevelHD");
    struct
    {
        enum EGraphicsQualityLevelHD ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVideoSettingHelper::FetchDisplayModes(int32_t ChosenAdapter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "FetchDisplayModes");
    struct
    {
        int32_t ChosenAdapter;
    } Parms{};
    Parms.ChosenAdapter = (int32_t)ChosenAdapter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UVideoSettingHelper::EnableMinimize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "EnableMinimize");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UVideoSettingHelper::CheckGPUDriverVersionV2(uint8_t bBHD, EGPDriverCompatibilityHandleMethod& OutHandleMethod, struct FString& OutAdapterName, struct FString& OutDriverVersion, struct FString& OutDriverDate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "CheckGPUDriverVersionV2");
    struct
    {
        uint8_t bBHD;
        enum EGPDriverCompatibilityHandleMethod OutHandleMethod;
        struct FString OutAdapterName;
        struct FString OutDriverVersion;
        struct FString OutDriverDate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bBHD = (uint8_t)bBHD;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHandleMethod = Parms.OutHandleMethod;
    OutAdapterName = Parms.OutAdapterName;
    OutDriverVersion = Parms.OutDriverVersion;
    OutDriverDate = Parms.OutDriverDate;
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::CheckGPUDriverVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "CheckGPUDriverVersion");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVideoSettingHelper::AnyGPUSupportedHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VideoSettingHelper", "AnyGPUSupportedHD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
