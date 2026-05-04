#include "MetaDorian.hpp"
#include "Engine.hpp"
#include "GameplayTasks.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UMetaDorianUtils::* ----
struct UMetaDorianUtils* UMetaDorianUtils::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianUtils", "Get");
    struct
    {
        struct UMetaDorianUtils* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMetaDorianUtils::DisplayMessage(struct FString Title, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianUtils", "DisplayMessage");
    struct
    {
        struct FString Title;
        struct FString Content;
    } Parms{};
    Parms.Title = (struct FString)Title;
    Parms.Content = (struct FString)Content;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UMetaDorianManager::* ----
struct FString UMetaDorianManager::TryGetLuaScriptRealPath(struct FString ScriptPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "TryGetLuaScriptRealPath");
    struct
    {
        struct FString ScriptPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.ScriptPath = (struct FString)ScriptPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMetaDorianManager::StopStubTesting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "StopStubTesting");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::StartStubTesting(struct FString ModuleName, struct FString HubFuncName, int32_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "StartStubTesting");
    struct
    {
        struct FString ModuleName;
        struct FString HubFuncName;
        int32_t Flag;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.HubFuncName = (struct FString)HubFuncName;
    Parms.Flag = (int32_t)Flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::ShowStat(uint8_t bShow, uint8_t bFull)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "ShowStat");
    struct
    {
        uint8_t bShow;
        uint8_t bFull;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    Parms.bFull = (uint8_t)bFull;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::SetStubProfilerRecordSize(int32_t size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "SetStubProfilerRecordSize");
    struct
    {
        int32_t size;
    } Parms{};
    Parms.size = (int32_t)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::SetStubProfilerEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "SetStubProfilerEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::SetSingleDorianFunction(int32_t ModuleID, int32_t StubId, struct FString FuncAliasName, int32_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "SetSingleDorianFunction");
    struct
    {
        int32_t ModuleID;
        int32_t StubId;
        struct FString FuncAliasName;
        int32_t Flag;
    } Parms{};
    Parms.ModuleID = (int32_t)ModuleID;
    Parms.StubId = (int32_t)StubId;
    Parms.FuncAliasName = (struct FString)FuncAliasName;
    Parms.Flag = (int32_t)Flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::SetMTLogLevel(int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "SetMTLogLevel");
    struct
    {
        int32_t Level;
    } Parms{};
    Parms.Level = (int32_t)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::SetMetaDorianOption(struct FString OptName, struct FString OptValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "SetMetaDorianOption");
    struct
    {
        struct FString OptName;
        struct FString OptValue;
    } Parms{};
    Parms.OptName = (struct FString)OptName;
    Parms.OptValue = (struct FString)OptValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::SetDorianFunction(struct FString ModuleName, struct FString FuncName, int32_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "SetDorianFunction");
    struct
    {
        struct FString ModuleName;
        struct FString FuncName;
        int32_t Flag;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.FuncName = (struct FString)FuncName;
    Parms.Flag = (int32_t)Flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::SetCurrentStubFlag(int32_t Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "SetCurrentStubFlag");
    struct
    {
        int32_t Flag;
    } Parms{};
    Parms.Flag = (int32_t)Flag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::RunDorianScripts(struct FString ScriptPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "RunDorianScripts");
    struct
    {
        struct FString ScriptPath;
    } Parms{};
    Parms.ScriptPath = (struct FString)ScriptPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::RunAllDorianScriptsUnderDir(struct FString DirPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "RunAllDorianScriptsUnderDir");
    struct
    {
        struct FString DirPath;
    } Parms{};
    Parms.DirPath = (struct FString)DirPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::RestStubProfilerInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "RestStubProfilerInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::ResetStat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "ResetStat");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::ResetDorianSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "ResetDorianSO");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::ResetAllStubs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "ResetAllStubs");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UMetaDorianManager::QueryType(struct FString TypeName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "QueryType");
    struct
    {
        struct FString TypeName;
        struct FString ReturnValue;
    } Parms{};
    Parms.TypeName = (struct FString)TypeName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMetaDorianManager::QueryStub(struct FString ModuleName, struct FString FunctionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "QueryStub");
    struct
    {
        struct FString ModuleName;
        struct FString FunctionName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.FunctionName = (struct FString)FunctionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMetaDorianManager::QueryPropOffset(struct FString ClassName, struct FString PropName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "QueryPropOffset");
    struct
    {
        struct FString ClassName;
        struct FString PropName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ClassName = (struct FString)ClassName;
    Parms.PropName = (struct FString)PropName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::QueryClass(struct FString ClassName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "QueryClass");
    struct
    {
        struct FString ClassName;
        struct FString ReturnValue;
    } Parms{};
    Parms.ClassName = (struct FString)ClassName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::PrintStubProfilerInfo(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "PrintStubProfilerInfo");
    struct
    {
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::PrintStagedLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "PrintStagedLog");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMetaDorianManager::ModifyCurrentFuncArgNum(int32_t I, double Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "ModifyCurrentFuncArgNum");
    struct
    {
        int32_t I;
        double Value;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.Value = (double)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::ModifyCurrentFuncArgInt(int32_t I, int64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "ModifyCurrentFuncArgInt");
    struct
    {
        int32_t I;
        int64_t Value;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.Value = (int64_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::MetaDorianDriverInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "MetaDorianDriverInit");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMetaDorianManager::IsNeedUpdateDorianSO(struct FString JTextVerInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "IsNeedUpdateDorianSO");
    struct
    {
        struct FString JTextVerInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.JTextVerInfo = (struct FString)JTextVerInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMetaDorianManager::InstallDorianSO(struct FString InZipPath, struct FString InHashValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "InstallDorianSO");
    struct
    {
        struct FString InZipPath;
        struct FString InHashValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InZipPath = (struct FString)InZipPath;
    Parms.InHashValue = (struct FString)InHashValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMetaDorianManager::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "Init");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UMetaDorianManager::GetStubModuleNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetStubModuleNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMetaDorianManager::GetStubFuncNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetStubFuncNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::GetStatInfo(uint8_t bFull)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetStatInfo");
    struct
    {
        uint8_t bFull;
        struct FString ReturnValue;
    } Parms{};
    Parms.bFull = (uint8_t)bFull;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMetaDorianManager::GetRTTITypeNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetRTTITypeNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::GetPlatformName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetPlatformName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMetaDorianManager::GetMTLogLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetMTLogLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::GetMetaGlueStat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetMetaGlueStat");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::GetInternalFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetInternalFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMetaDorianManager* UMetaDorianManager::GetInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetInstance");
    struct
    {
        struct UMetaDorianManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::GetDorianSOStubPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetDorianSOStubPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMetaDorianManager::GetDorianSOLibPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "GetDorianSOLibPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMetaDorianManager::CheckDorianSOVersion(struct FString TargetUrl, struct FString HashValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "CheckDorianSOVersion");
    struct
    {
        struct FString TargetUrl;
        struct FString HashValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetUrl = (struct FString)TargetUrl;
    Parms.HashValue = (struct FString)HashValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMetaDorianManager::AddSingleDorianFunction(int32_t ModuleID, int32_t StubId, struct FString FuncAliasName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "AddSingleDorianFunction");
    struct
    {
        int32_t ModuleID;
        int32_t StubId;
        struct FString FuncAliasName;
    } Parms{};
    Parms.ModuleID = (int32_t)ModuleID;
    Parms.StubId = (int32_t)StubId;
    Parms.FuncAliasName = (struct FString)FuncAliasName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaDorianManager::AddDorianFunction(struct FString ModuleName, struct FString FuncName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaDorianManager", "AddDorianFunction");
    struct
    {
        struct FString ModuleName;
        struct FString FuncName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.FuncName = (struct FString)FuncName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UMTAndroidJNI::* ----
uint8_t UMTAndroidJNI::IsOverrideAndroidLogDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "IsOverrideAndroidLogDir");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAndroidJNI::IsOBBinAPK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "IsOBBinAPK");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAndroidJNI::GetOBBFilePathBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "GetOBBFilePathBase");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAndroidJNI::GetInternalFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "GetInternalFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAndroidJNI::GetFontPathBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "GetFontPathBase");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAndroidJNI::GetFilePathBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "GetFilePathBase");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAndroidJNI::GetExternalFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "GetExternalFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAndroidJNI::GetAPKFilename()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAndroidJNI", "GetAPKFilename");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UWidget::* ----
uint8_t UMTAPI_UWidget::CanSafelyRouteEvent(struct UWidget* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWidget", "CanSafelyRouteEvent");
    struct
    {
        struct UWidget* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UWidget*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UPanelWidget::* ----
uint8_t UMTAPI_UPanelWidget::CanAddMoreChildren(struct UPanelWidget* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPanelWidget", "CanAddMoreChildren");
    struct
    {
        struct UPanelWidget* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UPanelWidget*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_FGameplayResourceSet::* ----
struct FGameplayResourceSet UMTAPI_FGameplayResourceSet::AddID(struct FGameplayResourceSet& Self, uint8_t ResourceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FGameplayResourceSet", "AddID");
    struct
    {
        struct FGameplayResourceSet Self;
        uint8_t ResourceID;
        struct FGameplayResourceSet ReturnValue;
    } Parms{};
    Parms.ResourceID = (uint8_t)ResourceID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Self = Parms.Self;
    return Parms.ReturnValue;
}

// ---- UMTAPI_UEngine::* ----
void UMTAPI_UEngine::Tick(struct UEngine* Self, float DeltaSeconds, uint8_t bIdleMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "Tick");
    struct
    {
        struct UEngine* Self;
        float DeltaSeconds;
        uint8_t bIdleMode;
    } Parms{};
    Parms.Self = (struct UEngine*)Self;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    Parms.bIdleMode = (uint8_t)bIdleMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_UEngine::SetConsoleVarOrExecuteConsoleCommand(struct FString ConsoleName, struct FString ConsoleValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "SetConsoleVarOrExecuteConsoleCommand");
    struct
    {
        struct FString ConsoleName;
        struct FString ConsoleValue;
    } Parms{};
    Parms.ConsoleName = (struct FString)ConsoleName;
    Parms.ConsoleValue = (struct FString)ConsoleValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTAPI_UEngine::NetworkRemapPath(struct UEngine* Self, struct UPendingNetGame* PendingNetGame, struct FString& str, uint8_t bReading)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "NetworkRemapPath");
    struct
    {
        struct UEngine* Self;
        struct UPendingNetGame* PendingNetGame;
        struct FString str;
        uint8_t bReading;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UEngine*)Self;
    Parms.PendingNetGame = (struct UPendingNetGame*)PendingNetGame;
    Parms.bReading = (uint8_t)bReading;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    str = Parms.str;
    return Parms.ReturnValue;
}

struct UWorld* UMTAPI_UEngine::GetWorldFromContextObject(struct UEngine* Self, struct UObject* Object, uint8_t bChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetWorldFromContextObject");
    struct
    {
        struct UEngine* Self;
        struct UObject* Object;
        uint8_t bChecked;
        struct UWorld* ReturnValue;
    } Parms{};
    Parms.Self = (struct UEngine*)Self;
    Parms.Object = (struct UObject*)Object;
    Parms.bChecked = (uint8_t)bChecked;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FWorldContext> UMTAPI_UEngine::GetWorldContexts(struct UEngine* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetWorldContexts");
    struct
    {
        struct UEngine* Self;
        struct TArray<struct FWorldContext> ReturnValue;
    } Parms{};
    Parms.Self = (struct UEngine*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FWorldContext UMTAPI_UEngine::GetWorldContextFromWorldChecked(struct UEngine* Engine, struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetWorldContextFromWorldChecked");
    struct
    {
        struct UEngine* Engine;
        struct UWorld* InWorld;
        struct FWorldContext ReturnValue;
    } Parms{};
    Parms.Engine = (struct UEngine*)Engine;
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FURL UMTAPI_UEngine::GetUrl(struct FURL Base, struct FString TextURL, ETravelType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetUrl");
    struct
    {
        struct FURL Base;
        struct FString TextURL;
        enum ETravelType Type;
        struct FURL ReturnValue;
    } Parms{};
    Parms.Base = (struct FURL)Base;
    Parms.TextURL = (struct FString)TextURL;
    Parms.Type = (enum ETravelType)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UEngineSubsystem* UMTAPI_UEngine::GetEngineSubsystemBase(struct UEngine* Self, struct UEngineSubsystem* SubsystemClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetEngineSubsystemBase");
    struct
    {
        struct UEngine* Self;
        struct UEngineSubsystem* SubsystemClass;
        struct UEngineSubsystem* ReturnValue;
    } Parms{};
    Parms.Self = (struct UEngine*)Self;
    Parms.SubsystemClass = (struct UEngineSubsystem*)SubsystemClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UEngine* UMTAPI_UEngine::GetEngine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetEngine");
    struct
    {
        struct UEngine* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_UEngine::GetConsoleVarStrValue(struct FString ConsoleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetConsoleVarStrValue");
    struct
    {
        struct FString ConsoleName;
        struct FString ReturnValue;
    } Parms{};
    Parms.ConsoleName = (struct FString)ConsoleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_UEngine::GetConsoleVarIntValue(struct FString ConsoleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetConsoleVarIntValue");
    struct
    {
        struct FString ConsoleName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ConsoleName = (struct FString)ConsoleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_UEngine::GetConsoleVarFloatValue(struct FString ConsoleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetConsoleVarFloatValue");
    struct
    {
        struct FString ConsoleName;
        float ReturnValue;
    } Parms{};
    Parms.ConsoleName = (struct FString)ConsoleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UEngine::GetConsoleVarBoolValue(struct FString ConsoleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "GetConsoleVarBoolValue");
    struct
    {
        struct FString ConsoleName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ConsoleName = (struct FString)ConsoleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorld* UMTAPI_UEngine::FWorldContext_World(struct FWorldContext& Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "FWorldContext_World");
    struct
    {
        struct FWorldContext Self;
        struct UWorld* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Self = Parms.Self;
    return Parms.ReturnValue;
}

void UMTAPI_UEngine::DumpStackTraceToLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UEngine", "DumpStackTraceToLog");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UMTAPI_UGameInstance::* ----
struct UGameInstanceSubsystem* UMTAPI_UGameInstance::GetSubsystemBase(struct UGameInstance* Self, struct UGameInstanceSubsystem* SubsystemClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UGameInstance", "GetSubsystemBase");
    struct
    {
        struct UGameInstance* Self;
        struct UGameInstanceSubsystem* SubsystemClass;
        struct UGameInstanceSubsystem* ReturnValue;
    } Parms{};
    Parms.Self = (struct UGameInstance*)Self;
    Parms.SubsystemClass = (struct UGameInstanceSubsystem*)SubsystemClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UWorld::* ----
float UMTAPI_UWorld::TimeSince(struct UWorld* Self, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "TimeSince");
    struct
    {
        struct UWorld* Self;
        float Time;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_UWorld::SetGameInstance(struct UWorld* Self, struct UGameInstance* NewGI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "SetGameInstance");
    struct
    {
        struct UWorld* Self;
        struct UGameInstance* NewGI;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    Parms.NewGI = (struct UGameInstance*)NewGI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTAPI_UWorld::IsNetMode(struct UWorld* Self, int32_t Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "IsNetMode");
    struct
    {
        struct UWorld* Self;
        int32_t Mode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    Parms.Mode = (int32_t)Mode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_UWorld::GetTimeSeconds(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetTimeSeconds");
    struct
    {
        struct UWorld* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorldSubsystem* UMTAPI_UWorld::GetSubsystemBase(struct UWorld* Self, struct UWorldSubsystem* SubsystemClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetSubsystemBase");
    struct
    {
        struct UWorld* Self;
        struct UWorldSubsystem* SubsystemClass;
        struct UWorldSubsystem* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    Parms.SubsystemClass = (struct UWorldSubsystem*)SubsystemClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ULevelStreaming*> UMTAPI_UWorld::GetStreamingLevels(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetStreamingLevels");
    struct
    {
        struct UWorld* Self;
        struct TArray<struct ULevelStreaming*> ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_UWorld::GetRealTimeSeconds(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetRealTimeSeconds");
    struct
    {
        struct UWorld* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_UWorld::GetNetMode(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetNetMode");
    struct
    {
        struct UWorld* Self;
        int32_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNetDriver* UMTAPI_UWorld::GetNetDriver(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetNetDriver");
    struct
    {
        struct UWorld* Self;
        struct UNetDriver* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNavigationSystemBase* UMTAPI_UWorld::GetNavigationSystem(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetNavigationSystem");
    struct
    {
        struct UWorld* Self;
        struct UNavigationSystemBase* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGameStateBase* UMTAPI_UWorld::GetGameState(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetGameState");
    struct
    {
        struct UWorld* Self;
        struct AGameStateBase* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameInstance* UMTAPI_UWorld::GetGameInstance(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetGameInstance");
    struct
    {
        struct UWorld* Self;
        struct UGameInstance* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_UWorld::GetDeltaSeconds(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetDeltaSeconds");
    struct
    {
        struct UWorld* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAvoidanceManager* UMTAPI_UWorld::GetAvoidanceManager(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetAvoidanceManager");
    struct
    {
        struct UWorld* Self;
        struct UAvoidanceManager* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGameModeBase* UMTAPI_UWorld::GetAuthGameMode(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetAuthGameMode");
    struct
    {
        struct UWorld* Self;
        struct AGameModeBase* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISystemBase* UMTAPI_UWorld::GetAISystem(struct UWorld* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UWorld", "GetAISystem");
    struct
    {
        struct UWorld* Self;
        struct UAISystemBase* ReturnValue;
    } Parms{};
    Parms.Self = (struct UWorld*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_ABrush::* ----
struct UBrushComponent* UMTAPI_ABrush::GetBrushComponent(struct ABrush* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ABrush", "GetBrushComponent");
    struct
    {
        struct ABrush* Self;
        struct UBrushComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ABrush*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_ASceneCapture2D::* ----
struct USceneCaptureComponent2D* UMTAPI_ASceneCapture2D::GetCaptureComponent2D(struct ASceneCapture2D* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ASceneCapture2D", "GetCaptureComponent2D");
    struct
    {
        struct ASceneCapture2D* Self;
        struct USceneCaptureComponent2D* ReturnValue;
    } Parms{};
    Parms.Self = (struct ASceneCapture2D*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_AStaticMeshActor::* ----
struct UStaticMeshComponent* UMTAPI_AStaticMeshActor::GetStaticMeshComponent(struct AStaticMeshActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AStaticMeshActor", "GetStaticMeshComponent");
    struct
    {
        struct AStaticMeshActor* Self;
        struct UStaticMeshComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct AStaticMeshActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_ATriggerBase::* ----
struct UShapeComponent* UMTAPI_ATriggerBase::GetCollisionComponent(struct ATriggerBase* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ATriggerBase", "GetCollisionComponent");
    struct
    {
        struct ATriggerBase* Self;
        struct UShapeComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ATriggerBase*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_AActor::* ----
void UMTAPI_AActor::OnConstruction(struct AActor* Self, const struct FTransform& Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "OnConstruction");
    struct
    {
        struct AActor* Self;
        struct FTransform Transform;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    Parms.Transform = (struct FTransform)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_AActor::OnChildAttached(struct AActor* Self, struct USceneComponent* MySourceComponent, struct USceneComponent* NewChildComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "OnChildAttached");
    struct
    {
        struct AActor* Self;
        struct USceneComponent* MySourceComponent;
        struct USceneComponent* NewChildComponent;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    Parms.MySourceComponent = (struct USceneComponent*)MySourceComponent;
    Parms.NewChildComponent = (struct USceneComponent*)NewChildComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_AActor::OnAttachmentChanged(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "OnAttachmentChanged");
    struct
    {
        struct AActor* Self;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FRotator UMTAPI_AActor::K2_GetActorRotation(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "K2_GetActorRotation");
    struct
    {
        struct AActor* Self;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::IsReplicatingMovement(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "IsReplicatingMovement");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::IsPendingKillPending(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "IsPendingKillPending");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::IsOwnedBy(struct AActor* Self, struct AActor* TestOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "IsOwnedBy");
    struct
    {
        struct AActor* Self;
        struct AActor* TestOwner;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    Parms.TestOwner = (struct AActor*)TestOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::IsNetMode(struct AActor* Self, int32_t InMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "IsNetMode");
    struct
    {
        struct AActor* Self;
        int32_t InMode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    Parms.InMode = (int32_t)InMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::IsHidden(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "IsHidden");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::IsActorInitialized(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "IsActorInitialized");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::HasAuthority(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "HasAuthority");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::HasActorBegunPlay(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "HasActorBegunPlay");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::GetTearOff(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetTearOff");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_AActor::GetSimpleCollisionRadius(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetSimpleCollisionRadius");
    struct
    {
        struct AActor* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_AActor::GetSimpleCollisionHalfHeight(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetSimpleCollisionHalfHeight");
    struct
    {
        struct AActor* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* UMTAPI_AActor::GetRootComponent(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetRootComponent");
    struct
    {
        struct AActor* Self;
        struct USceneComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRepMovement UMTAPI_AActor::GetReplicatedMovement(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetReplicatedMovement");
    struct
    {
        struct AActor* Self;
        struct FRepMovement ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENetRole UMTAPI_AActor::GetRemoteRole(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetRemoteRole");
    struct
    {
        struct AActor* Self;
        enum ENetRole ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_AActor::GetPlayerViewZoomingFactor(struct APlayerController* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetPlayerViewZoomingFactor");
    struct
    {
        struct APlayerController* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct APlayerController*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UMTAPI_AActor::GetOwner(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetOwner");
    struct
    {
        struct AActor* Self;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_AActor::GetNetMode(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetNetMode");
    struct
    {
        struct AActor* Self;
        int32_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENetRole UMTAPI_AActor::GetLocalRole(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetLocalRole");
    struct
    {
        struct AActor* Self;
        enum ENetRole ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::GetIsReplicated(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetIsReplicated");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UActorComponent*> UMTAPI_AActor::GetComponentsByClass(struct AActor* Self, struct UActorComponent* ComponentClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetComponentsByClass");
    struct
    {
        struct AActor* Self;
        struct UActorComponent* ComponentClass;
        struct TArray<struct UActorComponent*> ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    Parms.ComponentClass = (struct UActorComponent*)ComponentClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TSet<struct UActorComponent*> UMTAPI_AActor::GetComponents(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetComponents");
    struct
    {
        struct AActor* Self;
        struct TSet<struct UActorComponent*> ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEncTransform UMTAPI_AActor::GetActorTransform(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetActorTransform");
    struct
    {
        struct AActor* Self;
        struct FEncTransform ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_AActor::GetActorScale(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetActorScale");
    struct
    {
        struct AActor* Self;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMTAPI_AActor::GetActorRotation(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetActorRotation");
    struct
    {
        struct AActor* Self;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat UMTAPI_AActor::GetActorQuat(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetActorQuat");
    struct
    {
        struct AActor* Self;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_AActor::GetActorLocation(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetActorLocation");
    struct
    {
        struct AActor* Self;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::GetActorEnableCollision(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "GetActorEnableCollision");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::CanEverTick(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "CanEverTick");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AActor::CanBeDamaged(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "CanBeDamaged");
    struct
    {
        struct AActor* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEncTransform UMTAPI_AActor::ActorToWorld(struct AActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AActor", "ActorToWorld");
    struct
    {
        struct AActor* Self;
        struct FEncTransform ReturnValue;
    } Parms{};
    Parms.Self = (struct AActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_APlayerState::* ----
struct APawn* UMTAPI_APlayerState::GetPawn(struct APlayerState* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APlayerState", "GetPawn");
    struct
    {
        struct APlayerState* Self;
        struct APawn* ReturnValue;
    } Parms{};
    Parms.Self = (struct APlayerState*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_APlayerCameraManager::* ----
float UMTAPI_APlayerCameraManager::GetLockedFOV(struct APlayerCameraManager* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APlayerCameraManager", "GetLockedFOV");
    struct
    {
        struct APlayerCameraManager* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct APlayerCameraManager*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_ACameraActor::* ----
struct UCameraComponent* UMTAPI_ACameraActor::GetCameraComponent(struct ACameraActor* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACameraActor", "GetCameraComponent");
    struct
    {
        struct ACameraActor* Self;
        struct UCameraComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ACameraActor*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_AController::* ----
uint8_t UMTAPI_AController::IsPlayerController(struct AController* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AController", "IsPlayerController");
    struct
    {
        struct AController* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AController*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_AController::IsLocalPlayerController(struct AController* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AController", "IsLocalPlayerController");
    struct
    {
        struct AController* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct AController*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APawn* UMTAPI_AController::GetPawn(struct AController* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AController", "GetPawn");
    struct
    {
        struct AController* Self;
        struct APawn* ReturnValue;
    } Parms{};
    Parms.Self = (struct AController*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* UMTAPI_AController::GetCharacter(struct AController* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_AController", "GetCharacter");
    struct
    {
        struct AController* Self;
        struct ACHARACTER* ReturnValue;
    } Parms{};
    Parms.Self = (struct AController*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_APawn::* ----
void UMTAPI_APawn::SetupPlayerInputComponent(struct APawn* Self, struct UInputComponent* PlayerInputComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APawn", "SetupPlayerInputComponent");
    struct
    {
        struct APawn* Self;
        struct UInputComponent* PlayerInputComponent;
    } Parms{};
    Parms.Self = (struct APawn*)Self;
    Parms.PlayerInputComponent = (struct UInputComponent*)PlayerInputComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct APlayerState* UMTAPI_APawn::GetPlayerState(struct APawn* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APawn", "GetPlayerState");
    struct
    {
        struct APawn* Self;
        struct APlayerState* ReturnValue;
    } Parms{};
    Parms.Self = (struct APawn*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPrimitiveComponent* UMTAPI_APawn::GetMovementBase(struct APawn* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APawn", "GetMovementBase");
    struct
    {
        struct APawn* Self;
        struct UPrimitiveComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct APawn*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UStaticMeshComponent* UMTAPI_APawn::GetMeshComponent(struct ADefaultPawn* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APawn", "GetMeshComponent");
    struct
    {
        struct ADefaultPawn* Self;
        struct UStaticMeshComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ADefaultPawn*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AController* UMTAPI_APawn::GetController(struct APawn* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APawn", "GetController");
    struct
    {
        struct APawn* Self;
        struct AController* ReturnValue;
    } Parms{};
    Parms.Self = (struct APawn*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USphereComponent* UMTAPI_APawn::GetCollisionComponent(struct ADefaultPawn* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_APawn", "GetCollisionComponent");
    struct
    {
        struct ADefaultPawn* Self;
        struct USphereComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ADefaultPawn*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_ACharacter::* ----
uint8_t UMTAPI_ACharacter::MovementBaseUtility_UseRelativeLocation(struct UPrimitiveComponent* MovementBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "MovementBaseUtility_UseRelativeLocation");
    struct
    {
        struct UPrimitiveComponent* MovementBase;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MovementBase = (struct UPrimitiveComponent*)MovementBase;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_ACharacter::MovementBaseUtility_TransformToWorld(struct UCharacterMovementComponent* CharacterMovement, struct UPrimitiveComponent* MovementBase, struct FName BoneName, struct FVector& BaseLocation, struct FQuat& BaseQuat, const struct FVector& InLocalLocation, struct FVector& OutWorldLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "MovementBaseUtility_TransformToWorld");
    struct
    {
        struct UCharacterMovementComponent* CharacterMovement;
        struct UPrimitiveComponent* MovementBase;
        struct FName BoneName;
        struct FVector BaseLocation;
        struct FQuat BaseQuat;
        struct FVector InLocalLocation;
        struct FVector OutWorldLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CharacterMovement = (struct UCharacterMovementComponent*)CharacterMovement;
    Parms.MovementBase = (struct UPrimitiveComponent*)MovementBase;
    Parms.BoneName = (struct FName)BoneName;
    Parms.InLocalLocation = (struct FVector)InLocalLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BaseLocation = Parms.BaseLocation;
    BaseQuat = Parms.BaseQuat;
    OutWorldLocation = Parms.OutWorldLocation;
    return Parms.ReturnValue;
}

float UMTAPI_ACharacter::GetReplicatedServerLastTransformUpdateTimeStamp(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetReplicatedServerLastTransformUpdateTimeStamp");
    struct
    {
        struct ACHARACTER* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_ACharacter::GetReplicatedMovementMode(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetReplicatedMovementMode");
    struct
    {
        struct ACHARACTER* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPrimitiveComponent* UMTAPI_ACharacter::GetMovementBase(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetMovementBase");
    struct
    {
        struct ACHARACTER* Self;
        struct UPrimitiveComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* UMTAPI_ACharacter::GetMesh(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetMesh");
    struct
    {
        struct ACHARACTER* Self;
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCharacterMovementComponent* UMTAPI_ACharacter::GetCharacterMovement(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetCharacterMovement");
    struct
    {
        struct ACHARACTER* Self;
        struct UCharacterMovementComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCapsuleComponent* UMTAPI_ACharacter::GetCapsuleComponent(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetCapsuleComponent");
    struct
    {
        struct ACHARACTER* Self;
        struct UCapsuleComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_ACharacter::GetBaseTranslationOffset(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetBaseTranslationOffset");
    struct
    {
        struct ACHARACTER* Self;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBasedMovementInfo UMTAPI_ACharacter::GetBasedMovement(struct ACHARACTER* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_ACharacter", "GetBasedMovement");
    struct
    {
        struct ACHARACTER* Self;
        struct FBasedMovementInfo ReturnValue;
    } Parms{};
    Parms.Self = (struct ACHARACTER*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UMovementComponent::* ----
void UMTAPI_UMovementComponent::StopMovementImmediately(struct UMovementComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UMovementComponent", "StopMovementImmediately");
    struct
    {
        struct UMovementComponent* Self;
    } Parms{};
    Parms.Self = (struct UMovementComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTAPI_UMovementComponent::SafeMoveUpdatedComponent(struct UMovementComponent* Self, const struct FVector& Delta, const struct FRotator& NewRotation, uint8_t bSweep, struct FHitResult& OutHit, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UMovementComponent", "SafeMoveUpdatedComponent");
    struct
    {
        struct UMovementComponent* Self;
        struct FVector Delta;
        struct FRotator NewRotation;
        uint8_t bSweep;
        struct FHitResult OutHit;
        enum ETeleportType Teleport;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UMovementComponent*)Self;
    Parms.Delta = (struct FVector)Delta;
    Parms.NewRotation = (struct FRotator)NewRotation;
    Parms.bSweep = (uint8_t)bSweep;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UMovementComponent::ResolvePenetration(struct UMovementComponent* Self, const struct FVector& Adjustment, const struct FHitResult& Hit, const struct FQuat& NewRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UMovementComponent", "ResolvePenetration");
    struct
    {
        struct UMovementComponent* Self;
        struct FVector Adjustment;
        struct FHitResult Hit;
        struct FQuat NewRotation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UMovementComponent*)Self;
    Parms.Adjustment = (struct FVector)Adjustment;
    Parms.Hit = (struct FHitResult)Hit;
    Parms.NewRotation = (struct FQuat)NewRotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UMovementComponent::MoveUpdatedComponent2(struct UMovementComponent* Self, const struct FVector& Delta, const struct FQuat& NewRotation, uint8_t bSweep, struct FHitResult& OutHit, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UMovementComponent", "MoveUpdatedComponent2");
    struct
    {
        struct UMovementComponent* Self;
        struct FVector Delta;
        struct FQuat NewRotation;
        uint8_t bSweep;
        struct FHitResult OutHit;
        enum ETeleportType Teleport;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UMovementComponent*)Self;
    Parms.Delta = (struct FVector)Delta;
    Parms.NewRotation = (struct FQuat)NewRotation;
    Parms.bSweep = (uint8_t)bSweep;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UMovementComponent::MoveUpdatedComponent(struct UMovementComponent* Self, const struct FVector& Delta, const struct FRotator& NewRotation, uint8_t bSweep, struct FHitResult& OutHit, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UMovementComponent", "MoveUpdatedComponent");
    struct
    {
        struct UMovementComponent* Self;
        struct FVector Delta;
        struct FRotator NewRotation;
        uint8_t bSweep;
        struct FHitResult OutHit;
        enum ETeleportType Teleport;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UMovementComponent*)Self;
    Parms.Delta = (struct FVector)Delta;
    Parms.NewRotation = (struct FRotator)NewRotation;
    Parms.bSweep = (uint8_t)bSweep;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

float UMTAPI_UMovementComponent::GetMaxSpeed(struct UMovementComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UMovementComponent", "GetMaxSpeed");
    struct
    {
        struct UMovementComponent* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UMovementComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UCharacterMovementComponent::* ----
uint8_t UMTAPI_UCharacterMovementComponent::IsWalking(struct UCharacterMovementComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UCharacterMovementComponent", "IsWalking");
    struct
    {
        struct UCharacterMovementComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UCharacterMovementComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UCharacterMovementComponent::HasAnimRootMotion(struct UCharacterMovementComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UCharacterMovementComponent", "HasAnimRootMotion");
    struct
    {
        struct UCharacterMovementComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UCharacterMovementComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_UCharacterMovementComponent::GetServerLastTransformUpdateTimeStamp(struct UCharacterMovementComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UCharacterMovementComponent", "GetServerLastTransformUpdateTimeStamp");
    struct
    {
        struct UCharacterMovementComponent* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UCharacterMovementComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UStaticMeshComponent::* ----
struct UStaticMesh* UMTAPI_UStaticMeshComponent::GetStaticMesh(struct UStaticMeshComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UStaticMeshComponent", "GetStaticMesh");
    struct
    {
        struct UStaticMeshComponent* Self;
        struct UStaticMesh* ReturnValue;
    } Parms{};
    Parms.Self = (struct UStaticMeshComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UActorComponent::* ----
void UMTAPI_UActorComponent::MarkAsEditorOnlySubobject(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "MarkAsEditorOnlySubobject");
    struct
    {
        struct UActorComponent* Self;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTAPI_UActorComponent::IsRegistered(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "IsRegistered");
    struct
    {
        struct UActorComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UActorComponent::IsRegisterAsData(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "IsRegisterAsData");
    struct
    {
        struct UActorComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UActorComponent::IsPhysicsStateCreated(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "IsPhysicsStateCreated");
    struct
    {
        struct UActorComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UActorComponent::IsNetMode(struct UActorComponent* Self, int32_t Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "IsNetMode");
    struct
    {
        struct UActorComponent* Self;
        int32_t Mode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    Parms.Mode = (int32_t)Mode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UActorComponent::IsEditorOnly(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "IsEditorOnly");
    struct
    {
        struct UActorComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UActorComponent::HasBegunPlay(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "HasBegunPlay");
    struct
    {
        struct UActorComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UActorComponent::HasBeenInitialized(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "HasBeenInitialized");
    struct
    {
        struct UActorComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorld* UMTAPI_UActorComponent::GetWorld(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "GetWorld");
    struct
    {
        struct UActorComponent* Self;
        struct UWorld* ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EComponentReplicationFlags UMTAPI_UActorComponent::GetReplicationFlag(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "GetReplicationFlag");
    struct
    {
        struct UActorComponent* Self;
        enum EComponentReplicationFlags ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UMTAPI_UActorComponent::GetOwner(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "GetOwner");
    struct
    {
        struct UActorComponent* Self;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_UActorComponent::GetNetMode(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "GetNetMode");
    struct
    {
        struct UActorComponent* Self;
        int32_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UActorComponent::GetIsReplicated(struct UActorComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "GetIsReplicated");
    struct
    {
        struct UActorComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_UActorComponent::ApplyWorldOffset(struct UActorComponent* Self, const struct FVector& InOffset, uint8_t bWorldShift)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UActorComponent", "ApplyWorldOffset");
    struct
    {
        struct UActorComponent* Self;
        struct FVector InOffset;
        uint8_t bWorldShift;
    } Parms{};
    Parms.Self = (struct UActorComponent*)Self;
    Parms.InOffset = (struct FVector)InOffset;
    Parms.bWorldShift = (uint8_t)bWorldShift;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UMTAPI_UPrimitiveComponent::* ----
void UMTAPI_UPrimitiveComponent::SetRenderMatrixMode(struct UPrimitiveComponent* Self, ERenderMatrixMode Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPrimitiveComponent", "SetRenderMatrixMode");
    struct
    {
        struct UPrimitiveComponent* Self;
        enum ERenderMatrixMode Mode;
    } Parms{};
    Parms.Self = (struct UPrimitiveComponent*)Self;
    Parms.Mode = (enum ERenderMatrixMode)Mode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct UMaterialInterface*> UMTAPI_UPrimitiveComponent::GetUsedMaterials(struct UPrimitiveComponent* Self, uint8_t bGetDebugMaterials)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPrimitiveComponent", "GetUsedMaterials");
    struct
    {
        struct UPrimitiveComponent* Self;
        uint8_t bGetDebugMaterials;
        struct TArray<struct UMaterialInterface*> ReturnValue;
    } Parms{};
    Parms.Self = (struct UPrimitiveComponent*)Self;
    Parms.bGetDebugMaterials = (uint8_t)bGetDebugMaterials;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UPrimitiveComponent::GetMoveIgnoreMask(struct UPrimitiveComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPrimitiveComponent", "GetMoveIgnoreMask");
    struct
    {
        struct UPrimitiveComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UPrimitiveComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_UPrimitiveComponent::GetLastRenderTimeOnScreen(struct UPrimitiveComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPrimitiveComponent", "GetLastRenderTimeOnScreen");
    struct
    {
        struct UPrimitiveComponent* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UPrimitiveComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_UPrimitiveComponent::GetLastRenderTime(struct UPrimitiveComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPrimitiveComponent", "GetLastRenderTime");
    struct
    {
        struct UPrimitiveComponent* Self;
        float ReturnValue;
    } Parms{};
    Parms.Self = (struct UPrimitiveComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UPrimitiveComponent::GetGenerateOverlapEvents(struct UPrimitiveComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPrimitiveComponent", "GetGenerateOverlapEvents");
    struct
    {
        struct UPrimitiveComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UPrimitiveComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_UPrimitiveComponent::AddTorqueInDegrees(struct UPrimitiveComponent* Self, struct FVector Torque, struct FName BoneName, uint8_t bAccelChange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UPrimitiveComponent", "AddTorqueInDegrees");
    struct
    {
        struct UPrimitiveComponent* Self;
        struct FVector Torque;
        struct FName BoneName;
        uint8_t bAccelChange;
    } Parms{};
    Parms.Self = (struct UPrimitiveComponent*)Self;
    Parms.Torque = (struct FVector)Torque;
    Parms.BoneName = (struct FName)BoneName;
    Parms.bAccelChange = (uint8_t)bAccelChange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UMTAPI_USceneComponent::* ----
void UMTAPI_USceneComponent::UpdateComponentToWorld(struct USceneComponent* Self, int32_t UpdateTransformFlags, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "UpdateComponentToWorld");
    struct
    {
        struct USceneComponent* Self;
        int32_t UpdateTransformFlags;
        enum ETeleportType Teleport;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    Parms.UpdateTransformFlags = (int32_t)UpdateTransformFlags;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_USceneComponent::SetRelativeRotation(struct USceneComponent* Self, const struct FQuat& NewRotation, uint8_t bSweep, struct FHitResult& OutSweepHitResult, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "SetRelativeRotation");
    struct
    {
        struct USceneComponent* Self;
        struct FQuat NewRotation;
        uint8_t bSweep;
        struct FHitResult OutSweepHitResult;
        enum ETeleportType Teleport;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    Parms.NewRotation = (struct FQuat)NewRotation;
    Parms.bSweep = (uint8_t)bSweep;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutSweepHitResult = Parms.OutSweepHitResult;
}

void UMTAPI_USceneComponent::SetRelativeLocation(struct USceneComponent* Self, struct FVector NewLocation, uint8_t bSweep, struct FHitResult& OutSweepHitResult, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "SetRelativeLocation");
    struct
    {
        struct USceneComponent* Self;
        struct FVector NewLocation;
        uint8_t bSweep;
        struct FHitResult OutSweepHitResult;
        enum ETeleportType Teleport;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    Parms.NewLocation = (struct FVector)NewLocation;
    Parms.bSweep = (uint8_t)bSweep;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutSweepHitResult = Parms.OutSweepHitResult;
}

uint8_t UMTAPI_USceneComponent::MoveComponent(struct USceneComponent* Self, const struct FVector& Delta, const struct FQuat& NewRotation, uint8_t bSweep, struct FHitResult& Hit, int32_t MoveFlags, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "MoveComponent");
    struct
    {
        struct USceneComponent* Self;
        struct FVector Delta;
        struct FQuat NewRotation;
        uint8_t bSweep;
        struct FHitResult Hit;
        int32_t MoveFlags;
        enum ETeleportType Teleport;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    Parms.Delta = (struct FVector)Delta;
    Parms.NewRotation = (struct FQuat)NewRotation;
    Parms.bSweep = (uint8_t)bSweep;
    Parms.MoveFlags = (int32_t)MoveFlags;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Hit = Parms.Hit;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_USceneComponent::IsQueryCollisionEnabled(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "IsQueryCollisionEnabled");
    struct
    {
        struct USceneComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_USceneComponent::IsCollisionEnabled(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "IsCollisionEnabled");
    struct
    {
        struct USceneComponent* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMTAPI_USceneComponent::GetRelativeRotation(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "GetRelativeRotation");
    struct
    {
        struct USceneComponent* Self;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_USceneComponent::GetRelativeLocation(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "GetRelativeLocation");
    struct
    {
        struct USceneComponent* Self;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UMTAPI_USceneComponent::GetComponentTransform(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "GetComponentTransform");
    struct
    {
        struct USceneComponent* Self;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMTAPI_USceneComponent::GetComponentRotation(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "GetComponentRotation");
    struct
    {
        struct USceneComponent* Self;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_USceneComponent::GetComponentLocation(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "GetComponentLocation");
    struct
    {
        struct USceneComponent* Self;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* UMTAPI_USceneComponent::GetAttachParent(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "GetAttachParent");
    struct
    {
        struct USceneComponent* Self;
        struct USceneComponent* ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct USceneComponent*> UMTAPI_USceneComponent::GetAttachChildren(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "GetAttachChildren");
    struct
    {
        struct USceneComponent* Self;
        struct TArray<struct USceneComponent*> ReturnValue;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_USceneComponent::ConditionalUpdateComponentToWorld(struct USceneComponent* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "ConditionalUpdateComponentToWorld");
    struct
    {
        struct USceneComponent* Self;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_USceneComponent::AddRelativeRotation(struct USceneComponent* Self, struct FRotator DeltaRotation, uint8_t bSweep, struct FHitResult& OutSweepHitResult, ETeleportType Teleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_USceneComponent", "AddRelativeRotation");
    struct
    {
        struct USceneComponent* Self;
        struct FRotator DeltaRotation;
        uint8_t bSweep;
        struct FHitResult OutSweepHitResult;
        enum ETeleportType Teleport;
    } Parms{};
    Parms.Self = (struct USceneComponent*)Self;
    Parms.DeltaRotation = (struct FRotator)DeltaRotation;
    Parms.bSweep = (uint8_t)bSweep;
    Parms.Teleport = (enum ETeleportType)Teleport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutSweepHitResult = Parms.OutSweepHitResult;
}

// ---- UMTAPI_UObject::* ----
void UMTAPI_UObject::SetFlags(struct UObject* Self, int32_t NewFlags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "SetFlags");
    struct
    {
        struct UObject* Self;
        int32_t NewFlags;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    Parms.NewFlags = (int32_t)NewFlags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_UObject::RemoveFromRoot(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "RemoveFromRoot");
    struct
    {
        struct UObject* Self;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_UObject::MarkPendingKill(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "MarkPendingKill");
    struct
    {
        struct UObject* Self;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTAPI_UObject::IsValid(struct UObject* Test)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "IsValid");
    struct
    {
        struct UObject* Test;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Test = (struct UObject*)Test;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::IsUnreachable(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "IsUnreachable");
    struct
    {
        struct UObject* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::IsRooted(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "IsRooted");
    struct
    {
        struct UObject* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::IsPendingKillOrUnreachable(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "IsPendingKillOrUnreachable");
    struct
    {
        struct UObject* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::IsPendingKill(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "IsPendingKill");
    struct
    {
        struct UObject* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::IsNative(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "IsNative");
    struct
    {
        struct UObject* Self;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::HasAnyInternalFlags(struct UObject* Self, int32_t FlagsToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "HasAnyInternalFlags");
    struct
    {
        struct UObject* Self;
        int32_t FlagsToCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    Parms.FlagsToCheck = (int32_t)FlagsToCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::HasAnyFlags(struct UObject* Self, int32_t FlagsToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "HasAnyFlags");
    struct
    {
        struct UObject* Self;
        int32_t FlagsToCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    Parms.FlagsToCheck = (int32_t)FlagsToCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_UObject::HasAllFlags(struct UObject* Self, int32_t FlagsToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "HasAllFlags");
    struct
    {
        struct UObject* Self;
        int32_t FlagsToCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    Parms.FlagsToCheck = (int32_t)FlagsToCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_UObject::GetUniqueID(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "GetUniqueID");
    struct
    {
        struct UObject* Self;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UMTAPI_UObject::GetOuter(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "GetOuter");
    struct
    {
        struct UObject* Self;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_UObject::GetName(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "GetName");
    struct
    {
        struct UObject* Self;
        struct FString ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UMTAPI_UObject::GetFName(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "GetFName");
    struct
    {
        struct UObject* Self;
        struct FName ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UMTAPI_UObject::GetClass(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "GetClass");
    struct
    {
        struct UObject* Self;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_UObject::ClearPendingKill(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "ClearPendingKill");
    struct
    {
        struct UObject* Self;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_UObject::ClearFlags(struct UObject* Self, int32_t NewFlags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "ClearFlags");
    struct
    {
        struct UObject* Self;
        int32_t NewFlags;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    Parms.NewFlags = (int32_t)NewFlags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAPI_UObject::AddToRoot(struct UObject* Self)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UObject", "AddToRoot");
    struct
    {
        struct UObject* Self;
    } Parms{};
    Parms.Self = (struct UObject*)Self;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UMTAPI_FUObjectArray::* ----
uint8_t UMTAPI_FUObjectArray::IsDisregardForGC(struct UObject* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FUObjectArray", "IsDisregardForGC");
    struct
    {
        struct UObject* Object;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UMTAPI_FUObjectArray::IndexToObjectExtra(int32_t Index, uint8_t bEvenIfPendingKill)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FUObjectArray", "IndexToObjectExtra");
    struct
    {
        int32_t Index;
        uint8_t bEvenIfPendingKill;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.bEvenIfPendingKill = (uint8_t)bEvenIfPendingKill;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UMTAPI_FUObjectArray::IndexToObject(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FUObjectArray", "IndexToObject");
    struct
    {
        int32_t Index;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_FUObjectArray::GetObjectArrayNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FUObjectArray", "GetObjectArrayNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_NameTypes::* ----
uint32_t UMTAPI_NameTypes::GetTypeHash(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_NameTypes", "GetTypeHash");
    struct
    {
        struct FName Name;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_TypeHash::* ----
uint32_t UMTAPI_TypeHash::HashCombine(uint32_t A, uint32_t C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_TypeHash", "HashCombine");
    struct
    {
        uint32_t A;
        uint32_t C;
        uint32_t ReturnValue;
    } Parms{};
    Parms.A = (uint32_t)A;
    Parms.C = (uint32_t)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_TypeHash::GetTypeHashUInt64(uint64_t A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_TypeHash", "GetTypeHashUInt64");
    struct
    {
        uint64_t A;
        uint32_t ReturnValue;
    } Parms{};
    Parms.A = (uint64_t)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_TypeHash::GetTypeHashInt64(int64_t A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_TypeHash", "GetTypeHashInt64");
    struct
    {
        int64_t A;
        uint32_t ReturnValue;
    } Parms{};
    Parms.A = (int64_t)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_TypeHash::GetTypeHashFloat(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_TypeHash", "GetTypeHashFloat");
    struct
    {
        float Value;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_TypeHash::GetTypeHashDouble(double Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_TypeHash", "GetTypeHashDouble");
    struct
    {
        double Value;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Value = (double)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_CoreMisc::* ----
uint8_t UMTAPI_CoreMisc::IsRunningGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreMisc", "IsRunningGame");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreMisc::IsRunningDedicatedServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreMisc", "IsRunningDedicatedServer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_FGenericPlatformTime::* ----
double UMTAPI_FGenericPlatformTime::ToSeconds64(uint64_t Cycles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FGenericPlatformTime", "ToSeconds64");
    struct
    {
        uint64_t Cycles;
        double ReturnValue;
    } Parms{};
    Parms.Cycles = (uint64_t)Cycles;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_FGenericPlatformTime::ToMilliseconds(uint32_t Cycles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FGenericPlatformTime", "ToMilliseconds");
    struct
    {
        uint32_t Cycles;
        float ReturnValue;
    } Parms{};
    Parms.Cycles = (uint32_t)Cycles;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_FGenericPlatformMisc::* ----
int32_t UMTAPI_FGenericPlatformMisc::GetNetworkConnectionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FGenericPlatformMisc", "GetNetworkConnectionType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_FGenericPlatformMemory::* ----
uint64_t UMTAPI_FGenericPlatformMemory::GetMemoryUsedFast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FGenericPlatformMemory", "GetMemoryUsedFast");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_FApp::* ----
double UMTAPI_FApp::GetCurrentTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FApp", "GetCurrentTime");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_FApp::CanEverRender()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_FApp", "CanEverRender");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_UnrealString::* ----
uint32_t UMTAPI_UnrealString::GetTypeHash(struct FString S)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_UnrealString", "GetTypeHash");
    struct
    {
        struct FString S;
        uint32_t ReturnValue;
    } Parms{};
    Parms.S = (struct FString)S;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_CoreGlobals::* ----
uint8_t UMTAPI_CoreGlobals::IsRunningCommandlet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "IsRunningCommandlet");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::IsInGameThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "IsInGameThread");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetPRIVATE_GIsRunningCommandlet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetPRIVATE_GIsRunningCommandlet");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetPRIVATE_GAllowCommandletRendering()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetPRIVATE_GAllowCommandletRendering");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetPRIVATE_GAllowCommandletAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetPRIVATE_GAllowCommandletAudio");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGVerifyObjectReferencesOnly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGVerifyObjectReferencesOnly");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_CoreGlobals::GetGUITextureAmplifiedRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGUITextureAmplifiedRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGSystemStartTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGSystemStartTime");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_CoreGlobals::GetGStartTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGStartTime");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGSlowTaskOccurred()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGSlowTaskOccurred");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGSlateLoadingThreadId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGSlateLoadingThreadId");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGShouldSuspendRenderingThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGShouldSuspendRenderingThread");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGScreenshotResolutionY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGScreenshotResolutionY");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGScreenshotResolutionX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGScreenshotResolutionX");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGScreenMessagesRestoreState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGScreenMessagesRestoreState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGScalabilityIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGScalabilityIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_CoreGlobals::GetGSavingCompressionChunkSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGSavingCompressionChunkSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGRuntimeOptionsIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGRuntimeOptionsIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGRHIThreadId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGRHIThreadId");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGRHICurrentFrameCounterInputTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGRHICurrentFrameCounterInputTime");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGRHICurrentFrameCounter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGRHICurrentFrameCounter");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGRenderThreadId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGRenderThreadId");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGRenderThreadCurrentFrameCounterInputTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGRenderThreadCurrentFrameCounterInputTime");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGRenderThreadCurrentFrameCounter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGRenderThreadCurrentFrameCounter");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGPumpingMessagesOutsideOfMainLoop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGPumpingMessagesOutsideOfMainLoop");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGPumpingMessages()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGPumpingMessages");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGPrintLogVerbosity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGPrintLogVerbosity");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGPrintLogCategory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGPrintLogCategory");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_CoreGlobals::GetGPlayInEditorID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGPlayInEditorID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGPlatformNeedsPowerOfTwoTextures()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGPlatformNeedsPowerOfTwoTextures");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_CoreGlobals::GetGNearClippingPlane()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGNearClippingPlane");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGMakeCacheIDIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGMakeCacheIDIndex");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGLightmassIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGLightmassIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGLastGCFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGLastGCFrame");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsUsingHDInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsUsingHDInput");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsUCCMakeStandaloneHeaderGenerator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsUCCMakeStandaloneHeaderGenerator");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsSlowTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsSlowTask");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsSilent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsSilent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsServer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsRunningUnattendedScript()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsRunningUnattendedScript");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsRetrievingVTablePtr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsRetrievingVTablePtr");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsRequestingExit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsRequestingExit");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsReinstancing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsReinstancing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsReconstructingBlueprintInstances()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsReconstructingBlueprintInstances");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsPlayInEditorWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsPlayInEditorWorld");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsPIEUsingPlayerStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsPIEUsingPlayerStart");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsMultiWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsMultiWorld");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsMobileWin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsMobileWin");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsInitialLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsInitialLoad");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsHighResScreenshot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsHighResScreenshot");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsHD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsGuarded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsGuarded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsGCingAfterBlueprintCompile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsGCingAfterBlueprintCompile");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsGameThreadIdInitialized()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsGameThreadIdInitialized");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsGameAgnosticExe()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsGameAgnosticExe");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsFirstInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsFirstInstance");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsEnableBuildMapsHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsEnableBuildMapsHD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsEditorLoadingPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsEditorLoadingPackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsEditor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsDuplicatingClassForReinstancing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsDuplicatingClassForReinstancing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_CoreGlobals::GetGIsDumpingMovie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsDumpingMovie");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsDemoMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsDemoMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsCriticalError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsCriticalError");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsCookerLoadingPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsCookerLoadingPackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsClient");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsBuildMachine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsBuildMachine");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIsAutomationTesting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIsAutomationTesting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGIntraFrameDebuggingGameThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGIntraFrameDebuggingGameThread");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGInputTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGInputTime");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGInputIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGInputIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_CoreGlobals::GetGHitchThresholdMS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGHitchThresholdMS");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGHardwareIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGHardwareIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGGameUserSettingsIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGGameUserSettingsIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGGameThreadId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGGameThreadId");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGGameIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGGameIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGFrameNumberRenderThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFrameNumberRenderThread");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGFrameNumberAuxRHISkipCompile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFrameNumberAuxRHISkipCompile");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGFrameNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFrameNumber");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGFrameCounterRenderThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFrameCounterRenderThread");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::GetGFrameCounter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFrameCounter");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGForwardCommonToPlatformContent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGForwardCommonToPlatformContent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGForceLoadEditorOnly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGForceLoadEditorOnly");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGFMessageDialogUseWarnLogf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFMessageDialogUseWarnLogf");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGFirstFrameIntraFrameDebugging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFirstFrameIntraFrameDebugging");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGFastPathUniqueNameGeneration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGFastPathUniqueNameGeneration");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGExitPurge()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGExitPurge");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGEventDrivenLoaderEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEventDrivenLoaderEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGEngineIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEngineIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGEnableVREditorHacks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEnableVREditorHacks");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGEdSelectionLock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEdSelectionLock");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGEditorSettingsIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEditorSettingsIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGEditorPerProjectIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEditorPerProjectIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGEditorLayoutIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEditorLayoutIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGEditorKeyBindingsIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEditorKeyBindingsIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGEditorIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGEditorIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_CoreGlobals::GetGCycleStatsShouldEmitNamedEvents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGCycleStatsShouldEmitNamedEvents");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGCompilingBlueprint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGCompilingBlueprint");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_CoreGlobals::GetGCompatIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGCompatIni");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGAuxRHIThreadId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGAuxRHIThreadId");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTAPI_CoreGlobals::GetGAudioThreadId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGAudioThreadId");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGAreScreenMessagesEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGAreScreenMessagesEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_CoreGlobals::GetGAllowActorScriptExecutionInEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "GetGAllowActorScriptExecutionInEditor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::Get_GlobalCostCyclesPerFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "Get_GlobalCostCyclesPerFrame");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UMTAPI_CoreGlobals::Get_GlobalBudgetCyclesPerFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_CoreGlobals", "Get_GlobalBudgetCyclesPerFrame");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTAPI_Math::* ----
void UMTAPI_Math::WindRelativeAnglesDegrees(float InAngle0, float& InOutAngle1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "WindRelativeAnglesDegrees");
    struct
    {
        float InAngle0;
        float InOutAngle1;
    } Parms{};
    Parms.InAngle0 = (float)InAngle0;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutAngle1 = Parms.InOutAngle1;
}

float UMTAPI_Math::WeightedMovingAverage(float CurrentSample, float PreviousSample, float Weight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "WeightedMovingAverage");
    struct
    {
        float CurrentSample;
        float PreviousSample;
        float Weight;
        float ReturnValue;
    } Parms{};
    Parms.CurrentSample = (float)CurrentSample;
    Parms.PreviousSample = (float)PreviousSample;
    Parms.Weight = (float)Weight;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::VRandConeV2(const struct FVector& Dir, float HorizontalConeHalfAngleRad, float VerticalConeHalfAngleRad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "VRandConeV2");
    struct
    {
        struct FVector Dir;
        float HorizontalConeHalfAngleRad;
        float VerticalConeHalfAngleRad;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Dir = (struct FVector)Dir;
    Parms.HorizontalConeHalfAngleRad = (float)HorizontalConeHalfAngleRad;
    Parms.VerticalConeHalfAngleRad = (float)VerticalConeHalfAngleRad;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::VRandCone(const struct FVector& Dir, float ConeHalfAngleRad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "VRandCone");
    struct
    {
        struct FVector Dir;
        float ConeHalfAngleRad;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Dir = (struct FVector)Dir;
    Parms.ConeHalfAngleRad = (float)ConeHalfAngleRad;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::VRand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "VRand");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "VInterpTo");
    struct
    {
        struct FVector Current;
        struct FVector Target;
        float DeltaTime;
        float InterpSpeed;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Current = (struct FVector)Current;
    Parms.Target = (struct FVector)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::VInterpNormalRotationTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float RotationSpeedDegrees)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "VInterpNormalRotationTo");
    struct
    {
        struct FVector Current;
        struct FVector Target;
        float DeltaTime;
        float RotationSpeedDegrees;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Current = (struct FVector)Current;
    Parms.Target = (struct FVector)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.RotationSpeedDegrees = (float)RotationSpeedDegrees;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::VInterpConstantTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "VInterpConstantTo");
    struct
    {
        struct FVector Current;
        struct FVector Target;
        float DeltaTime;
        float InterpSpeed;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Current = (struct FVector)Current;
    Parms.Target = (struct FVector)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMTAPI_Math::Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Vector2DInterpTo");
    struct
    {
        struct FVector2D Current;
        struct FVector2D Target;
        float DeltaTime;
        float InterpSpeed;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Current = (struct FVector2D)Current;
    Parms.Target = (struct FVector2D)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMTAPI_Math::Vector2DInterpConstantTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Vector2DInterpConstantTo");
    struct
    {
        struct FVector2D Current;
        struct FVector2D Target;
        float DeltaTime;
        float InterpSpeed;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Current = (struct FVector2D)Current;
    Parms.Target = (struct FVector2D)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::UnwindRadians(float A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "UnwindRadians");
    struct
    {
        float A;
        float ReturnValue;
    } Parms{};
    Parms.A = (float)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::UnwindDegrees(float A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "UnwindDegrees");
    struct
    {
        float A;
        float ReturnValue;
    } Parms{};
    Parms.A = (float)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::TruncateToHalfIfClose(double F, double Tolerance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "TruncateToHalfIfClose");
    struct
    {
        double F;
        double Tolerance;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    Parms.Tolerance = (double)Tolerance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::Square(double A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Square");
    struct
    {
        double A;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_Math::SphereDistToLine(struct FVector SphereOrigin, float SphereRadius, struct FVector LineOrigin, struct FVector LineDir, struct FVector& OutClosestPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SphereDistToLine");
    struct
    {
        struct FVector SphereOrigin;
        float SphereRadius;
        struct FVector LineOrigin;
        struct FVector LineDir;
        struct FVector OutClosestPoint;
    } Parms{};
    Parms.SphereOrigin = (struct FVector)SphereOrigin;
    Parms.SphereRadius = (float)SphereRadius;
    Parms.LineOrigin = (struct FVector)LineOrigin;
    Parms.LineDir = (struct FVector)LineDir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutClosestPoint = Parms.OutClosestPoint;
}

uint8_t UMTAPI_Math::SphereConeIntersection(const struct FVector& SphereCenter, float SphereRadius, const struct FVector& ConeAxis, float ConeAngleSin, float ConeAngleCos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SphereConeIntersection");
    struct
    {
        struct FVector SphereCenter;
        float SphereRadius;
        struct FVector ConeAxis;
        float ConeAngleSin;
        float ConeAngleCos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SphereCenter = (struct FVector)SphereCenter;
    Parms.SphereRadius = (float)SphereRadius;
    Parms.ConeAxis = (struct FVector)ConeAxis;
    Parms.ConeAngleSin = (float)ConeAngleSin;
    Parms.ConeAngleCos = (float)ConeAngleCos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::SphereAABBIntersection(const struct FVector& SphereCenter, float RadiusSquared, const struct FBox& AABB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SphereAABBIntersection");
    struct
    {
        struct FVector SphereCenter;
        float RadiusSquared;
        struct FBox AABB;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SphereCenter = (struct FVector)SphereCenter;
    Parms.RadiusSquared = (float)RadiusSquared;
    Parms.AABB = (struct FBox)AABB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::SmoothStep(float A, float B, float X)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SmoothStep");
    struct
    {
        float A;
        float B;
        float X;
        float ReturnValue;
    } Parms{};
    Parms.A = (float)A;
    Parms.B = (float)B;
    Parms.X = (float)X;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_Math::SinCos(float& ScalarSin, float& ScalarCos, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SinCos");
    struct
    {
        float ScalarSin;
        float ScalarCos;
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ScalarSin = Parms.ScalarSin;
    ScalarCos = Parms.ScalarCos;
}

uint8_t UMTAPI_Math::SegmentTriangleIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& A, const struct FVector& B, const struct FVector& C, struct FVector& OutIntersectPoint, struct FVector& OutTriangleNormal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SegmentTriangleIntersection");
    struct
    {
        struct FVector StartPoint;
        struct FVector EndPoint;
        struct FVector A;
        struct FVector B;
        struct FVector C;
        struct FVector OutIntersectPoint;
        struct FVector OutTriangleNormal;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.C = (struct FVector)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutIntersectPoint = Parms.OutIntersectPoint;
    OutTriangleNormal = Parms.OutTriangleNormal;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::SegmentPlaneIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FPlane& Plane, struct FVector& out_IntersectionPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SegmentPlaneIntersection");
    struct
    {
        struct FVector StartPoint;
        struct FVector EndPoint;
        struct FPlane Plane;
        struct FVector out_IntersectionPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    Parms.Plane = (struct FPlane)Plane;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_IntersectionPoint = Parms.out_IntersectionPoint;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::SegmentIntersection2D(const struct FVector& SegmentStartA, const struct FVector& SegmentEndA, const struct FVector& SegmentStartB, const struct FVector& SegmentEndB, struct FVector& out_IntersectionPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SegmentIntersection2D");
    struct
    {
        struct FVector SegmentStartA;
        struct FVector SegmentEndA;
        struct FVector SegmentStartB;
        struct FVector SegmentEndB;
        struct FVector out_IntersectionPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SegmentStartA = (struct FVector)SegmentStartA;
    Parms.SegmentEndA = (struct FVector)SegmentEndA;
    Parms.SegmentStartB = (struct FVector)SegmentStartB;
    Parms.SegmentEndB = (struct FVector)SegmentEndB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_IntersectionPoint = Parms.out_IntersectionPoint;
    return Parms.ReturnValue;
}

void UMTAPI_Math::SegmentDistToSegmentSafe(struct FVector A1, struct FVector B1, struct FVector A2, struct FVector B2, struct FVector& OutP1, struct FVector& OutP2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SegmentDistToSegmentSafe");
    struct
    {
        struct FVector A1;
        struct FVector B1;
        struct FVector A2;
        struct FVector B2;
        struct FVector OutP1;
        struct FVector OutP2;
    } Parms{};
    Parms.A1 = (struct FVector)A1;
    Parms.B1 = (struct FVector)B1;
    Parms.A2 = (struct FVector)A2;
    Parms.B2 = (struct FVector)B2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutP1 = Parms.OutP1;
    OutP2 = Parms.OutP2;
}

void UMTAPI_Math::SegmentDistToSegment(struct FVector A1, struct FVector B1, struct FVector A2, struct FVector B2, struct FVector& OutP1, struct FVector& OutP2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "SegmentDistToSegment");
    struct
    {
        struct FVector A1;
        struct FVector B1;
        struct FVector A2;
        struct FVector B2;
        struct FVector OutP1;
        struct FVector OutP2;
    } Parms{};
    Parms.A1 = (struct FVector)A1;
    Parms.B1 = (struct FVector)B1;
    Parms.A2 = (struct FVector)A2;
    Parms.B2 = (struct FVector)B2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutP1 = Parms.OutP1;
    OutP2 = Parms.OutP2;
}

float UMTAPI_Math::Saturate(float X)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Saturate");
    struct
    {
        float X;
        float ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RoundToZero(double F)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RoundToZero");
    struct
    {
        double F;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RoundToPositiveInfinity(double F)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RoundToPositiveInfinity");
    struct
    {
        double F;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RoundToNegativeInfinity(double F)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RoundToNegativeInfinity");
    struct
    {
        double F;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RoundHalfToZero(double F)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RoundHalfToZero");
    struct
    {
        double F;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RoundHalfToEven(double F)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RoundHalfToEven");
    struct
    {
        double F;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RoundHalfFromZero(double F)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RoundHalfFromZero");
    struct
    {
        double F;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RoundFromZero(double F)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RoundFromZero");
    struct
    {
        double F;
        double ReturnValue;
    } Parms{};
    Parms.F = (double)F;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMTAPI_Math::RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RInterpTo");
    struct
    {
        struct FRotator Current;
        struct FRotator Target;
        float DeltaTime;
        float InterpSpeed;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Current = (struct FRotator)Current;
    Parms.Target = (struct FRotator)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMTAPI_Math::RInterpConstantTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RInterpConstantTo");
    struct
    {
        struct FRotator Current;
        struct FRotator Target;
        float DeltaTime;
        float InterpSpeed;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Current = (struct FRotator)Current;
    Parms.Target = (struct FRotator)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::RayPlaneIntersection(const struct FVector& RayOrigin, const struct FVector& RayDirection, const struct FPlane& Plane)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RayPlaneIntersection");
    struct
    {
        struct FVector RayOrigin;
        struct FVector RayDirection;
        struct FPlane Plane;
        struct FVector ReturnValue;
    } Parms{};
    Parms.RayOrigin = (struct FVector)RayOrigin;
    Parms.RayDirection = (struct FVector)RayDirection;
    Parms.Plane = (struct FPlane)Plane;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::RandRangeFloat(float InMin, float InMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandRangeFloat");
    struct
    {
        float InMin;
        float InMax;
        float ReturnValue;
    } Parms{};
    Parms.InMin = (float)InMin;
    Parms.InMax = (float)InMax;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMTAPI_Math::RandRange64(int64_t Min, int64_t Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandRange64");
    struct
    {
        int64_t Min;
        int64_t Max;
        int64_t ReturnValue;
    } Parms{};
    Parms.Min = (int64_t)Min;
    Parms.Max = (int64_t)Max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_Math::RandRange32(int32_t Min, int32_t Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandRange32");
    struct
    {
        int32_t Min;
        int32_t Max;
        int32_t ReturnValue;
    } Parms{};
    Parms.Min = (int32_t)Min;
    Parms.Max = (int32_t)Max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMTAPI_Math::RandPointInCircle(float CircleRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandPointInCircle");
    struct
    {
        float CircleRadius;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.CircleRadius = (float)CircleRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::RandPointInBox(const struct FBox& Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandPointInBox");
    struct
    {
        struct FBox Box;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMTAPI_Math::RandHelper64(int64_t A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandHelper64");
    struct
    {
        int64_t A;
        int64_t ReturnValue;
    } Parms{};
    Parms.A = (int64_t)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_Math::RandHelper(int32_t A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandHelper");
    struct
    {
        int32_t A;
        int32_t ReturnValue;
    } Parms{};
    Parms.A = (int32_t)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::RandBool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RandBool");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::RadiansToDegrees(const double& RadVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "RadiansToDegrees");
    struct
    {
        double RadVal;
        double ReturnValue;
    } Parms{};
    Parms.RadVal = (double)RadVal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::Quantize8UnsignedByte(float X)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Quantize8UnsignedByte");
    struct
    {
        float X;
        uint8_t ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::Quantize8SignedByte(float X)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Quantize8SignedByte");
    struct
    {
        float X;
        uint8_t ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat UMTAPI_Math::QInterpTo(const struct FQuat& Current, const struct FQuat& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "QInterpTo");
    struct
    {
        struct FQuat Current;
        struct FQuat Target;
        float DeltaTime;
        float InterpSpeed;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.Current = (struct FQuat)Current;
    Parms.Target = (struct FQuat)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat UMTAPI_Math::QInterpConstantTo(const struct FQuat& Current, const struct FQuat& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "QInterpConstantTo");
    struct
    {
        struct FQuat Current;
        struct FQuat Target;
        float DeltaTime;
        float InterpSpeed;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.Current = (struct FQuat)Current;
    Parms.Target = (struct FQuat)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::PointsAreCoplanar(const struct TArray<struct FVector>& Points, float Tolerance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PointsAreCoplanar");
    struct
    {
        struct TArray<struct FVector> Points;
        float Tolerance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Points = (struct TArray<struct FVector>)Points;
    Parms.Tolerance = (float)Tolerance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::PointDistToSegmentSquared(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PointDistToSegmentSquared");
    struct
    {
        struct FVector Point;
        struct FVector StartPoint;
        struct FVector EndPoint;
        float ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PointDistToSegment");
    struct
    {
        struct FVector Point;
        struct FVector StartPoint;
        struct FVector EndPoint;
        float ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::PointDistToLineExtend(const struct FVector& Point, const struct FVector& Direction, const struct FVector& Origin, struct FVector& OutClosestPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PointDistToLineExtend");
    struct
    {
        struct FVector Point;
        struct FVector Direction;
        struct FVector Origin;
        struct FVector OutClosestPoint;
        float ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.Direction = (struct FVector)Direction;
    Parms.Origin = (struct FVector)Origin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutClosestPoint = Parms.OutClosestPoint;
    return Parms.ReturnValue;
}

float UMTAPI_Math::PointDistToLine(const struct FVector& Point, const struct FVector& Direction, const struct FVector& Origin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PointDistToLine");
    struct
    {
        struct FVector Point;
        struct FVector Direction;
        struct FVector Origin;
        float ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.Direction = (struct FVector)Direction;
    Parms.Origin = (struct FVector)Origin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::PointBoxIntersection(const struct FVector& Point, const struct FBox& Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PointBoxIntersection");
    struct
    {
        struct FVector Point;
        struct FBox Box;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.Box = (struct FBox)Box;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_Math::PlaneAABBRelativePosition(const struct FPlane& P, const struct FBox& AABB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PlaneAABBRelativePosition");
    struct
    {
        struct FPlane P;
        struct FBox AABB;
        int32_t ReturnValue;
    } Parms{};
    Parms.P = (struct FPlane)P;
    Parms.AABB = (struct FBox)AABB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::PlaneAABBIntersection(const struct FPlane& P, const struct FBox& AABB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PlaneAABBIntersection");
    struct
    {
        struct FPlane P;
        struct FBox AABB;
        uint8_t ReturnValue;
    } Parms{};
    Parms.P = (struct FPlane)P;
    Parms.AABB = (struct FBox)AABB;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::PerlinNoise3D(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PerlinNoise3D");
    struct
    {
        struct FVector Location;
        float ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::PerlinNoise2D(const struct FVector2D& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PerlinNoise2D");
    struct
    {
        struct FVector2D Location;
        float ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector2D)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::PerlinNoise1D(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "PerlinNoise1D");
    struct
    {
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::Min3(double A, double B, double C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Min3");
    struct
    {
        double A;
        double B;
        double C;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.C = (double)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::Max3(double A, double B, double C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Max3");
    struct
    {
        double A;
        double B;
        double C;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.C = (double)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::MakePulsatingValue(double InCurrentTime, float InPulsesPerSecond, float InPhase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "MakePulsatingValue");
    struct
    {
        double InCurrentTime;
        float InPulsesPerSecond;
        float InPhase;
        float ReturnValue;
    } Parms{};
    Parms.InCurrentTime = (double)InCurrentTime;
    Parms.InPulsesPerSecond = (float)InPulsesPerSecond;
    Parms.InPhase = (float)InPhase;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::Log2(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Log2");
    struct
    {
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::LineSphereIntersection(const struct FVector& Start, const struct FVector& Dir, float Length, const struct FVector& Origin, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LineSphereIntersection");
    struct
    {
        struct FVector Start;
        struct FVector Dir;
        float Length;
        struct FVector Origin;
        float radius;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.Dir = (struct FVector)Dir;
    Parms.Length = (float)Length;
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::LinePlaneIntersection2(const struct FVector& Point1, const struct FVector& Point2, const struct FPlane& Plane)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LinePlaneIntersection2");
    struct
    {
        struct FVector Point1;
        struct FVector Point2;
        struct FPlane Plane;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Point1 = (struct FVector)Point1;
    Parms.Point2 = (struct FVector)Point2;
    Parms.Plane = (struct FPlane)Plane;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::LinePlaneIntersection(const struct FVector& Point1, const struct FVector& Point2, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LinePlaneIntersection");
    struct
    {
        struct FVector Point1;
        struct FVector Point2;
        struct FVector PlaneOrigin;
        struct FVector PlaneNormal;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Point1 = (struct FVector)Point1;
    Parms.Point2 = (struct FVector)Point2;
    Parms.PlaneOrigin = (struct FVector)PlaneOrigin;
    Parms.PlaneNormal = (struct FVector)PlaneNormal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::LineExtentBoxIntersection(const struct FBox& InBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector& HitLocation, struct FVector& HitNormal, float& hitTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LineExtentBoxIntersection");
    struct
    {
        struct FBox InBox;
        struct FVector Start;
        struct FVector End;
        struct FVector Extent;
        struct FVector HitLocation;
        struct FVector HitNormal;
        float hitTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InBox = (struct FBox)InBox;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.Extent = (struct FVector)Extent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    HitLocation = Parms.HitLocation;
    HitNormal = Parms.HitNormal;
    hitTime = Parms.hitTime;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::LineBoxIntersectionExtend(const struct FBox& Box, const struct FVector& Start, const struct FVector& End, const struct FVector& Direction, const struct FVector& OneOverDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LineBoxIntersectionExtend");
    struct
    {
        struct FBox Box;
        struct FVector Start;
        struct FVector End;
        struct FVector Direction;
        struct FVector OneOverDirection;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.Direction = (struct FVector)Direction;
    Parms.OneOverDirection = (struct FVector)OneOverDirection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::LineBoxIntersection(const struct FBox& Box, const struct FVector& Start, const struct FVector& End, const struct FVector& Direction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LineBoxIntersection");
    struct
    {
        struct FBox Box;
        struct FVector Start;
        struct FVector End;
        struct FVector Direction;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.Direction = (struct FVector)Direction;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::LerpStable(const double& A, const double& B, double Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LerpStable");
    struct
    {
        double A;
        double B;
        double Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (double)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMTAPI_Math::LerpRotator(const struct FRotator& A, const struct FRotator& B, const double& Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LerpRotator");
    struct
    {
        struct FRotator A;
        struct FRotator B;
        double Alpha;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.A = (struct FRotator)A;
    Parms.B = (struct FRotator)B;
    Parms.Alpha = (double)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMTAPI_Math::LerpRange(const struct FRotator& A, const struct FRotator& B, const double& Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LerpRange");
    struct
    {
        struct FRotator A;
        struct FRotator B;
        double Alpha;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.A = (struct FRotator)A;
    Parms.B = (struct FRotator)B;
    Parms.Alpha = (double)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat UMTAPI_Math::LerpQuat(const struct FQuat& A, const struct FQuat& B, const double& Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LerpQuat");
    struct
    {
        struct FQuat A;
        struct FQuat B;
        double Alpha;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.A = (struct FQuat)A;
    Parms.B = (struct FQuat)B;
    Parms.Alpha = (double)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::Lerp(const double& A, const double& B, const double& Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Lerp");
    struct
    {
        double A;
        double B;
        double Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (double)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_Math::LeastCommonMultiplier(int32_t A, int32_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "LeastCommonMultiplier");
    struct
    {
        int32_t A;
        int32_t B;
        int32_t ReturnValue;
    } Parms{};
    Parms.A = (int32_t)A;
    Parms.B = (int32_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::IsWithinInclusive(const double& TestValue, const double& MinValue, const double& MaxValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "IsWithinInclusive");
    struct
    {
        double TestValue;
        double MinValue;
        double MaxValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TestValue = (double)TestValue;
    Parms.MinValue = (double)MinValue;
    Parms.MaxValue = (double)MaxValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::IsWithin(const double& TestValue, const double& MinValue, const double& MaxValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "IsWithin");
    struct
    {
        double TestValue;
        double MinValue;
        double MaxValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TestValue = (double)TestValue;
    Parms.MinValue = (double)MinValue;
    Parms.MaxValue = (double)MaxValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::IsPowerOfTwo(int64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "IsPowerOfTwo");
    struct
    {
        int64_t Value;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Value = (int64_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::IsNearlyZero(double Value, double ErrorTolerance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "IsNearlyZero");
    struct
    {
        double Value;
        double ErrorTolerance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Value = (double)Value;
    Parms.ErrorTolerance = (double)ErrorTolerance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::IsNearlyEqual(double A, double B, double ErrorTolerance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "IsNearlyEqual");
    struct
    {
        double A;
        double B;
        double ErrorTolerance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.ErrorTolerance = (double)ErrorTolerance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::IntersectPlanes3(struct FVector& I, const struct FPlane& p1, const struct FPlane& p2, const struct FPlane& p3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "IntersectPlanes3");
    struct
    {
        struct FVector I;
        struct FPlane p1;
        struct FPlane p2;
        struct FPlane p3;
        uint8_t ReturnValue;
    } Parms{};
    Parms.p1 = (struct FPlane)p1;
    Parms.p2 = (struct FPlane)p2;
    Parms.p3 = (struct FPlane)p3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    I = Parms.I;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::IntersectPlanes2(struct FVector& I, struct FVector& D, const struct FPlane& p1, const struct FPlane& p2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "IntersectPlanes2");
    struct
    {
        struct FVector I;
        struct FVector D;
        struct FPlane p1;
        struct FPlane p2;
        uint8_t ReturnValue;
    } Parms{};
    Parms.p1 = (struct FPlane)p1;
    Parms.p2 = (struct FPlane)p2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    I = Parms.I;
    D = Parms.D;
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpStep(const double& A, const double& B, float Alpha, int32_t Steps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpStep");
    struct
    {
        double A;
        double B;
        float Alpha;
        int32_t Steps;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    Parms.Steps = (int32_t)Steps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpSinOut(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpSinOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpSinInOut(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpSinInOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpSinIn(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpSinIn");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpExpoOut(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpExpoOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpExpoInOut(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpExpoInOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpExpoIn(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpExpoIn");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpEaseOut(const double& A, const double& B, float Alpha, float Exp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpEaseOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        float Exp;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    Parms.Exp = (float)Exp;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpEaseInOut(const double& A, const double& B, float Alpha, float Exp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpEaseInOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        float Exp;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    Parms.Exp = (float)Exp;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpEaseIn(const double& A, const double& B, float Alpha, float Exp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpEaseIn");
    struct
    {
        double A;
        double B;
        float Alpha;
        float Exp;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    Parms.Exp = (float)Exp;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpCircularOut(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpCircularOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpCircularInOut(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpCircularInOut");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::InterpCircularIn(const double& A, const double& B, float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "InterpCircularIn");
    struct
    {
        double A;
        double B;
        float Alpha;
        double ReturnValue;
    } Parms{};
    Parms.A = (double)A;
    Parms.B = (double)B;
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::GridSnap(double Location, double Grid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GridSnap");
    struct
    {
        double Location;
        double Grid;
        double ReturnValue;
    } Parms{};
    Parms.Location = (double)Location;
    Parms.Grid = (double)Grid;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAPI_Math::GreatestCommonDivisor(int32_t A, int32_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GreatestCommonDivisor");
    struct
    {
        int32_t A;
        int32_t B;
        int32_t ReturnValue;
    } Parms{};
    Parms.A = (int32_t)A;
    Parms.B = (int32_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::GetTForSegmentPlaneIntersect(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FPlane& Plane)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetTForSegmentPlaneIntersect");
    struct
    {
        struct FVector StartPoint;
        struct FVector EndPoint;
        struct FPlane Plane;
        float ReturnValue;
    } Parms{};
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    Parms.Plane = (struct FPlane)Plane;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::GetReflectionVector(const struct FVector& Direction, const struct FVector& SurfaceNormal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetReflectionVector");
    struct
    {
        struct FVector Direction;
        struct FVector SurfaceNormal;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Direction = (struct FVector)Direction;
    Parms.SurfaceNormal = (struct FVector)SurfaceNormal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::GetRangeValue(const struct FVector2D& Range, float Pct)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetRangeValue");
    struct
    {
        struct FVector2D Range;
        float Pct;
        float ReturnValue;
    } Parms{};
    Parms.Range = (struct FVector2D)Range;
    Parms.Pct = (float)Pct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::GetRangePct(float MinValue, float MaxValue, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetRangePct");
    struct
    {
        float MinValue;
        float MaxValue;
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.MinValue = (float)MinValue;
    Parms.MaxValue = (float)MaxValue;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::GetMappedRangeValueUnclamped(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetMappedRangeValueUnclamped");
    struct
    {
        struct FVector2D InputRange;
        struct FVector2D OutputRange;
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.InputRange = (struct FVector2D)InputRange;
    Parms.OutputRange = (struct FVector2D)OutputRange;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::GetMappedRangeValueClamped(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetMappedRangeValueClamped");
    struct
    {
        struct FVector2D InputRange;
        struct FVector2D OutputRange;
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.InputRange = (struct FVector2D)InputRange;
    Parms.OutputRange = (struct FVector2D)OutputRange;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::GetDotDistance(struct FVector2D& OutDotDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetDotDistance");
    struct
    {
        struct FVector2D OutDotDist;
        struct FVector Direction;
        struct FVector AxisX;
        struct FVector AxisY;
        struct FVector AxisZ;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Direction = (struct FVector)Direction;
    Parms.AxisX = (struct FVector)AxisX;
    Parms.AxisY = (struct FVector)AxisY;
    Parms.AxisZ = (struct FVector)AxisZ;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDotDist = Parms.OutDotDist;
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::GetDistanceWithinConeSegment(struct FVector Point, struct FVector ConeStartPoint, struct FVector ConeLine, float RadiusAtStart, float RadiusAtEnd, float& PercentageOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetDistanceWithinConeSegment");
    struct
    {
        struct FVector Point;
        struct FVector ConeStartPoint;
        struct FVector ConeLine;
        float RadiusAtStart;
        float RadiusAtEnd;
        float PercentageOut;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.ConeStartPoint = (struct FVector)ConeStartPoint;
    Parms.ConeLine = (struct FVector)ConeLine;
    Parms.RadiusAtStart = (float)RadiusAtStart;
    Parms.RadiusAtEnd = (float)RadiusAtEnd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PercentageOut = Parms.PercentageOut;
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::GetBaryCentric2D(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetBaryCentric2D");
    struct
    {
        struct FVector Point;
        struct FVector A;
        struct FVector B;
        struct FVector C;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.C = (struct FVector)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMTAPI_Math::GetAzimuthAndElevation(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "GetAzimuthAndElevation");
    struct
    {
        struct FVector Direction;
        struct FVector AxisX;
        struct FVector AxisY;
        struct FVector AxisZ;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Direction = (struct FVector)Direction;
    Parms.AxisX = (struct FVector)AxisX;
    Parms.AxisY = (struct FVector)AxisY;
    Parms.AxisZ = (struct FVector)AxisZ;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::FRandRange(float InMin, float InMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FRandRange");
    struct
    {
        float InMin;
        float InMax;
        float ReturnValue;
    } Parms{};
    Parms.InMin = (float)InMin;
    Parms.InMax = (float)InMax;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAPI_Math::FormatIntToHumanReadable(int32_t Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FormatIntToHumanReadable");
    struct
    {
        int32_t Val;
        struct FString ReturnValue;
    } Parms{};
    Parms.Val = (int32_t)Val;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::FixedTurn(float InCurrent, float InDesired, float InDeltaRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FixedTurn");
    struct
    {
        float InCurrent;
        float InDesired;
        float InDeltaRate;
        float ReturnValue;
    } Parms{};
    Parms.InCurrent = (float)InCurrent;
    Parms.InDesired = (float)InDesired;
    Parms.InDeltaRate = (float)InDeltaRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FInterpTo");
    struct
    {
        float Current;
        float Target;
        float DeltaTime;
        float InterpSpeed;
        float ReturnValue;
    } Parms{};
    Parms.Current = (float)Current;
    Parms.Target = (float)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FInterpConstantTo");
    struct
    {
        float Current;
        float Target;
        float DeltaTime;
        float InterpSpeed;
        float ReturnValue;
    } Parms{};
    Parms.Current = (float)Current;
    Parms.Target = (float)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::FindDeltaAngleRadians(float A1, float A2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FindDeltaAngleRadians");
    struct
    {
        float A1;
        float A2;
        float ReturnValue;
    } Parms{};
    Parms.A1 = (float)A1;
    Parms.A2 = (float)A2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::FindDeltaAngleDegrees(float A1, float A2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FindDeltaAngleDegrees");
    struct
    {
        float A1;
        float A2;
        float ReturnValue;
    } Parms{};
    Parms.A1 = (float)A1;
    Parms.A2 = (float)A2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::FastAsin(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "FastAsin");
    struct
    {
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTAPI_Math::Eval(struct FString str, float& OutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Eval");
    struct
    {
        struct FString str;
        float OutValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str = (struct FString)str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
    return Parms.ReturnValue;
}

float UMTAPI_Math::DynamicWeightedMovingAverage(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "DynamicWeightedMovingAverage");
    struct
    {
        float CurrentSample;
        float PreviousSample;
        float MaxDistance;
        float MinWeight;
        float MaxWeight;
        float ReturnValue;
    } Parms{};
    Parms.CurrentSample = (float)CurrentSample;
    Parms.PreviousSample = (float)PreviousSample;
    Parms.MaxDistance = (float)MaxDistance;
    Parms.MinWeight = (float)MinWeight;
    Parms.MaxWeight = (float)MaxWeight;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::DivideAndRoundUp(double Dividend, double Divisor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "DivideAndRoundUp");
    struct
    {
        double Dividend;
        double Divisor;
        double ReturnValue;
    } Parms{};
    Parms.Dividend = (double)Dividend;
    Parms.Divisor = (double)Divisor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::DivideAndRoundNearest(double Dividend, double Divisor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "DivideAndRoundNearest");
    struct
    {
        double Dividend;
        double Divisor;
        double ReturnValue;
    } Parms{};
    Parms.Dividend = (double)Dividend;
    Parms.Divisor = (double)Divisor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::DivideAndRoundDown(double Dividend, double Divisor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "DivideAndRoundDown");
    struct
    {
        double Dividend;
        double Divisor;
        double ReturnValue;
    } Parms{};
    Parms.Dividend = (double)Dividend;
    Parms.Divisor = (double)Divisor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::DegreesToRadians(const double& DegVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "DegreesToRadians");
    struct
    {
        double DegVal;
        double ReturnValue;
    } Parms{};
    Parms.DegVal = (double)DegVal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::CubicInterpSecondDerivative(const double& p0, const double& T0, const double& p1, const double& T1, const double& A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "CubicInterpSecondDerivative");
    struct
    {
        double p0;
        double T0;
        double p1;
        double T1;
        double A;
        double ReturnValue;
    } Parms{};
    Parms.p0 = (double)p0;
    Parms.T0 = (double)T0;
    Parms.p1 = (double)p1;
    Parms.T1 = (double)T1;
    Parms.A = (double)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat UMTAPI_Math::CubicInterpQuat(const struct FQuat& p0, const struct FQuat& T0, const struct FQuat& p1, const struct FQuat& T1, const double& A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "CubicInterpQuat");
    struct
    {
        struct FQuat p0;
        struct FQuat T0;
        struct FQuat p1;
        struct FQuat T1;
        double A;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.p0 = (struct FQuat)p0;
    Parms.T0 = (struct FQuat)T0;
    Parms.p1 = (struct FQuat)p1;
    Parms.T1 = (struct FQuat)T1;
    Parms.A = (double)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::CubicInterpDerivative(const double& p0, const double& T0, const double& p1, const double& T1, const double& A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "CubicInterpDerivative");
    struct
    {
        double p0;
        double T0;
        double p1;
        double T1;
        double A;
        double ReturnValue;
    } Parms{};
    Parms.p0 = (double)p0;
    Parms.T0 = (double)T0;
    Parms.p1 = (double)p1;
    Parms.T1 = (double)T1;
    Parms.A = (double)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::CubicInterp(const double& p0, const double& T0, const double& p1, const double& T1, const double& A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "CubicInterp");
    struct
    {
        double p0;
        double T0;
        double p1;
        double T1;
        double A;
        double ReturnValue;
    } Parms{};
    Parms.p0 = (double)p0;
    Parms.T0 = (double)T0;
    Parms.p1 = (double)p1;
    Parms.T1 = (double)T1;
    Parms.A = (double)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::CubicCRSplineInterpSafe(const double& p0, const double& p1, const double& p2, const double& p3, float T0, float T1, float T2, float T3, float T)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "CubicCRSplineInterpSafe");
    struct
    {
        double p0;
        double p1;
        double p2;
        double p3;
        float T0;
        float T1;
        float T2;
        float T3;
        float T;
        double ReturnValue;
    } Parms{};
    Parms.p0 = (double)p0;
    Parms.p1 = (double)p1;
    Parms.p2 = (double)p2;
    Parms.p3 = (double)p3;
    Parms.T0 = (float)T0;
    Parms.T1 = (float)T1;
    Parms.T2 = (float)T2;
    Parms.T3 = (float)T3;
    Parms.T = (float)T;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::CubicCRSplineInterp(const double& p0, const double& p1, const double& p2, const double& p3, float T0, float T1, float T2, float T3, float T)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "CubicCRSplineInterp");
    struct
    {
        double p0;
        double p1;
        double p2;
        double p3;
        float T0;
        float T1;
        float T2;
        float T3;
        float T;
        double ReturnValue;
    } Parms{};
    Parms.p0 = (double)p0;
    Parms.p1 = (double)p1;
    Parms.p2 = (double)p2;
    Parms.p3 = (double)p3;
    Parms.T0 = (float)T0;
    Parms.T1 = (float)T1;
    Parms.T2 = (float)T2;
    Parms.T3 = (float)T3;
    Parms.T = (float)T;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector4 UMTAPI_Math::ComputeBaryCentric3D(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ComputeBaryCentric3D");
    struct
    {
        struct FVector Point;
        struct FVector A;
        struct FVector B;
        struct FVector C;
        struct FVector D;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.C = (struct FVector)C;
    Parms.D = (struct FVector)D;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::ComputeBaryCentric2D(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ComputeBaryCentric2D");
    struct
    {
        struct FVector Point;
        struct FVector A;
        struct FVector B;
        struct FVector C;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.C = (struct FVector)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::ClosestPointOnTriangleToPoint(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ClosestPointOnTriangleToPoint");
    struct
    {
        struct FVector Point;
        struct FVector A;
        struct FVector B;
        struct FVector C;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.C = (struct FVector)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::ClosestPointOnTetrahedronToPoint(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ClosestPointOnTetrahedronToPoint");
    struct
    {
        struct FVector Point;
        struct FVector A;
        struct FVector B;
        struct FVector C;
        struct FVector D;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.C = (struct FVector)C;
    Parms.D = (struct FVector)D;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMTAPI_Math::ClosestPointOnSegment2D(const struct FVector2D& Point, const struct FVector2D& StartPoint, const struct FVector2D& EndPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ClosestPointOnSegment2D");
    struct
    {
        struct FVector2D Point;
        struct FVector2D StartPoint;
        struct FVector2D EndPoint;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector2D)Point;
    Parms.StartPoint = (struct FVector2D)StartPoint;
    Parms.EndPoint = (struct FVector2D)EndPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::ClosestPointOnSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ClosestPointOnSegment");
    struct
    {
        struct FVector Point;
        struct FVector StartPoint;
        struct FVector EndPoint;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ClosestPointOnLine");
    struct
    {
        struct FVector LineStart;
        struct FVector LineEnd;
        struct FVector Point;
        struct FVector ReturnValue;
    } Parms{};
    Parms.LineStart = (struct FVector)LineStart;
    Parms.LineEnd = (struct FVector)LineEnd;
    Parms.Point = (struct FVector)Point;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMTAPI_Math::ClosestPointOnInfiniteLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ClosestPointOnInfiniteLine");
    struct
    {
        struct FVector LineStart;
        struct FVector LineEnd;
        struct FVector Point;
        struct FVector ReturnValue;
    } Parms{};
    Parms.LineStart = (struct FVector)LineStart;
    Parms.LineEnd = (struct FVector)LineEnd;
    Parms.Point = (struct FVector)Point;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAPI_Math::ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ClampAngle");
    struct
    {
        float AngleDegrees;
        float MinAngleDegrees;
        float MaxAngleDegrees;
        float ReturnValue;
    } Parms{};
    Parms.AngleDegrees = (float)AngleDegrees;
    Parms.MinAngleDegrees = (float)MinAngleDegrees;
    Parms.MaxAngleDegrees = (float)MaxAngleDegrees;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::Clamp(double X, double Min, double Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "Clamp");
    struct
    {
        double X;
        double Min;
        double Max;
        double ReturnValue;
    } Parms{};
    Parms.X = (double)X;
    Parms.Min = (double)Min;
    Parms.Max = (double)Max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UMTAPI_Math::CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "CInterpTo");
    struct
    {
        struct FLinearColor Current;
        struct FLinearColor Target;
        float DeltaTime;
        float InterpSpeed;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.Current = (struct FLinearColor)Current;
    Parms.Target = (struct FLinearColor)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeed = (float)InterpSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat UMTAPI_Math::BiLerpQuat(const struct FQuat& P00, const struct FQuat& P10, const struct FQuat& P01, const struct FQuat& P11, float FracX, float FracY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "BiLerpQuat");
    struct
    {
        struct FQuat P00;
        struct FQuat P10;
        struct FQuat P01;
        struct FQuat P11;
        float FracX;
        float FracY;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.P00 = (struct FQuat)P00;
    Parms.P10 = (struct FQuat)P10;
    Parms.P01 = (struct FQuat)P01;
    Parms.P11 = (struct FQuat)P11;
    Parms.FracX = (float)FracX;
    Parms.FracY = (float)FracY;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAPI_Math::BiLerp(const double& P00, const double& P10, const double& P01, const double& P11, const double& FracX, const double& FracY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "BiLerp");
    struct
    {
        double P00;
        double P10;
        double P01;
        double P11;
        double FracX;
        double FracY;
        double ReturnValue;
    } Parms{};
    Parms.P00 = (double)P00;
    Parms.P10 = (double)P10;
    Parms.P01 = (double)P01;
    Parms.P11 = (double)P11;
    Parms.FracX = (double)FracX;
    Parms.FracY = (double)FracY;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTAPI_Math::ApplyScaleToFloat(float& Dst, const struct FVector& DeltaScale, float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAPI_Math", "ApplyScaleToFloat");
    struct
    {
        float Dst;
        struct FVector DeltaScale;
        float Magnitude;
    } Parms{};
    Parms.DeltaScale = (struct FVector)DeltaScale;
    Parms.Magnitude = (float)Magnitude;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Dst = Parms.Dst;
}

// ---- UMTAppUtils::* ----
void UMTAppUtils::SetVolumeMultiplier(float InVolumeMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "SetVolumeMultiplier");
    struct
    {
        float InVolumeMultiplier;
    } Parms{};
    Parms.InVolumeMultiplier = (float)InVolumeMultiplier;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAppUtils::SetUnfocusedVolumeMultiplier(float InVolumeMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "SetUnfocusedVolumeMultiplier");
    struct
    {
        float InVolumeMultiplier;
    } Parms{};
    Parms.InVolumeMultiplier = (float)InVolumeMultiplier;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTAppUtils::PrintStartupLogMessages()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "PrintStartupLogMessages");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTAppUtils::IsGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "IsGame");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAppUtils::GetVolumeMultiplier()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetVolumeMultiplier");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAppUtils::GetUnixTimestamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetUnixTimestamp");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAppUtils::GetUnfocusedVolumeMultiplier()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetUnfocusedVolumeMultiplier");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAppUtils::GetTimecode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetTimecode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAppUtils::GetProjectName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetProjectName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAppUtils::GetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAppUtils::GetLastTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetLastTime");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAppUtils::GetGraphicsRHI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetGraphicsRHI");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAppUtils::GetEpicProductIdentifier()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetEpicProductIdentifier");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAppUtils::GetEngineIsPromotedBuild()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetEngineIsPromotedBuild");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAppUtils::GetDeltaTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetDeltaTime");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAppUtils::GetCyclesMilliseconds64()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetCyclesMilliseconds64");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMTAppUtils::GetCyclesMilliseconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetCyclesMilliseconds");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTAppUtils::GetCurrentTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetCurrentTime");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAppUtils::GetBuildVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetBuildVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAppUtils::GetBuildTargetType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetBuildTargetType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTAppUtils::GetBuildDate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetBuildDate");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMTAppUtils::GetBuildConfiguration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTAppUtils", "GetBuildConfiguration");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTDorianSOVerInfo::* ----
struct UMTDorianSOVerInfo* UMTDorianSOVerInfo::Create(struct FString JsonText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTDorianSOVerInfo", "Create");
    struct
    {
        struct FString JsonText;
        struct UMTDorianSOVerInfo* ReturnValue;
    } Parms{};
    Parms.JsonText = (struct FString)JsonText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTDorianSOUpdater::* ----
uint8_t UMTDorianSOUpdater::IsDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MTDorianSOUpdater", "IsDone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTDorianSOUpdater::IsDoing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MTDorianSOUpdater", "IsDoing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTDorianSOUpdater::Install(struct FString InZipPath, struct FString InLibPath, struct FString InStubPath, struct FString InHashValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTDorianSOUpdater", "Install");
    struct
    {
        struct FString InZipPath;
        struct FString InLibPath;
        struct FString InStubPath;
        struct FString InHashValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InZipPath = (struct FString)InZipPath;
    Parms.InLibPath = (struct FString)InLibPath;
    Parms.InStubPath = (struct FString)InStubPath;
    Parms.InHashValue = (struct FString)InHashValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTDorianSOUpdater::Init(struct UMTDorianSOVerInfo* InVerInfo, struct FString InLibPath, struct FString InStubPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MTDorianSOUpdater", "Init");
    struct
    {
        struct UMTDorianSOVerInfo* InVerInfo;
        struct FString InLibPath;
        struct FString InStubPath;
    } Parms{};
    Parms.InVerInfo = (struct UMTDorianSOVerInfo*)InVerInfo;
    Parms.InLibPath = (struct FString)InLibPath;
    Parms.InStubPath = (struct FString)InStubPath;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMTDorianSOUpdater::GetUnzipTempOutDir(struct FString InZipFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTDorianSOUpdater", "GetUnzipTempOutDir");
    struct
    {
        struct FString InZipFilePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InZipFilePath = (struct FString)InZipFilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTDorianSOUpdater::Download()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MTDorianSOUpdater", "Download");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTFileUtils::* ----
uint8_t UMTFileUtils::UnzipFileSync(struct FString ZipFilePath, struct FString TargetLocation, struct FString Password, uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "UnzipFileSync");
    struct
    {
        struct FString ZipFilePath;
        struct FString TargetLocation;
        struct FString Password;
        uint8_t bForce;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ZipFilePath = (struct FString)ZipFilePath;
    Parms.TargetLocation = (struct FString)TargetLocation;
    Parms.Password = (struct FString)Password;
    Parms.bForce = (uint8_t)bForce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::UnzipFileSimpleSync(struct FString ZipFilePath, struct FString TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "UnzipFileSimpleSync");
    struct
    {
        struct FString ZipFilePath;
        struct FString TargetLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ZipFilePath = (struct FString)ZipFilePath;
    Parms.TargetLocation = (struct FString)TargetLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTFileUtils::SetSandboxEnabled(uint8_t bInEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "SetSandboxEnabled");
    struct
    {
        uint8_t bInEnabled;
    } Parms{};
    Parms.bInEnabled = (uint8_t)bInEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTFileUtils::Move(struct FString Dest, struct FString Src, uint8_t Replace, uint8_t EvenIfReadOnly, uint8_t Attributes, uint8_t bDoNotRetryOrError)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "Move");
    struct
    {
        struct FString Dest;
        struct FString Src;
        uint8_t Replace;
        uint8_t EvenIfReadOnly;
        uint8_t Attributes;
        uint8_t bDoNotRetryOrError;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Dest = (struct FString)Dest;
    Parms.Src = (struct FString)Src;
    Parms.Replace = (uint8_t)Replace;
    Parms.EvenIfReadOnly = (uint8_t)EvenIfReadOnly;
    Parms.Attributes = (uint8_t)Attributes;
    Parms.bDoNotRetryOrError = (uint8_t)bDoNotRetryOrError;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMTFileUtils::MakeSureParentDir(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "MakeSureParentDir");
    struct
    {
        struct FString InPath;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTFileUtils::MakeSureDir(struct FString InDirPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "MakeSureDir");
    struct
    {
        struct FString InDirPath;
    } Parms{};
    Parms.InDirPath = (struct FString)InDirPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMTFileUtils::MakeDirectory(struct FString Path, uint8_t Tree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "MakeDirectory");
    struct
    {
        struct FString Path;
        uint8_t Tree;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.Tree = (uint8_t)Tree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::IsSandboxEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "IsSandboxEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::IsReadOnly(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "IsReadOnly");
    struct
    {
        struct FString Filename;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::IsFileExists(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "IsFileExists");
    struct
    {
        struct FString InPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::IsFile(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "IsFile");
    struct
    {
        struct FString InPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::IsDirectoryExists(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "IsDirectoryExists");
    struct
    {
        struct FString InPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::IsDirectory(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "IsDirectory");
    struct
    {
        struct FString InPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMTFileUtils::GetFileSize(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "GetFileSize");
    struct
    {
        struct FString Filename;
        int64_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTFileUtils::GetFilenameOnDisk(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "GetFilenameOnDisk");
    struct
    {
        struct FString Filename;
        struct FString ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTFileUtils::GetFileMd5(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "GetFileMd5");
    struct
    {
        struct FString InPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UMTFileUtils::GetFileAgeSeconds(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "GetFileAgeSeconds");
    struct
    {
        struct FString Filename;
        double ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UMTFileUtils::FindFilesRecursive(struct FString StartDirectory, struct FString Filename, uint8_t bFiles, uint8_t bDirectories, uint8_t bClearFileNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "FindFilesRecursive");
    struct
    {
        struct FString StartDirectory;
        struct FString Filename;
        uint8_t bFiles;
        uint8_t bDirectories;
        uint8_t bClearFileNames;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.StartDirectory = (struct FString)StartDirectory;
    Parms.Filename = (struct FString)Filename;
    Parms.bFiles = (uint8_t)bFiles;
    Parms.bDirectories = (uint8_t)bDirectories;
    Parms.bClearFileNames = (uint8_t)bClearFileNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UMTFileUtils::FindFiles(struct FString Directory, struct FString FileExtension)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "FindFiles");
    struct
    {
        struct FString Directory;
        struct FString FileExtension;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Directory = (struct FString)Directory;
    Parms.FileExtension = (struct FString)FileExtension;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UMTFileUtils::FindFileOrDirs(struct FString Filename, uint8_t bFiles, uint8_t bDirectories)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "FindFileOrDirs");
    struct
    {
        struct FString Filename;
        uint8_t bFiles;
        uint8_t bDirectories;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    Parms.bFiles = (uint8_t)bFiles;
    Parms.bDirectories = (uint8_t)bDirectories;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::DeleteDirectory(struct FString Path, uint8_t RequireExists, uint8_t Tree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "DeleteDirectory");
    struct
    {
        struct FString Path;
        uint8_t RequireExists;
        uint8_t Tree;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.RequireExists = (uint8_t)RequireExists;
    Parms.Tree = (uint8_t)Tree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMTFileUtils::Delete(struct FString Filename, uint8_t RequireExists, uint8_t EvenReadOnly, uint8_t Quiet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "Delete");
    struct
    {
        struct FString Filename;
        uint8_t RequireExists;
        uint8_t EvenReadOnly;
        uint8_t Quiet;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    Parms.RequireExists = (uint8_t)RequireExists;
    Parms.EvenReadOnly = (uint8_t)EvenReadOnly;
    Parms.Quiet = (uint8_t)Quiet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UMTFileUtils::Copy(struct FString Dest, struct FString Src, uint8_t Replace, uint8_t EvenIfReadOnly, uint8_t Attributes, int32_t ReadFlags, int32_t WriteFlags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "Copy");
    struct
    {
        struct FString Dest;
        struct FString Src;
        uint8_t Replace;
        uint8_t EvenIfReadOnly;
        uint8_t Attributes;
        int32_t ReadFlags;
        int32_t WriteFlags;
        uint32_t ReturnValue;
    } Parms{};
    Parms.Dest = (struct FString)Dest;
    Parms.Src = (struct FString)Src;
    Parms.Replace = (uint8_t)Replace;
    Parms.EvenIfReadOnly = (uint8_t)EvenIfReadOnly;
    Parms.Attributes = (uint8_t)Attributes;
    Parms.ReadFlags = (int32_t)ReadFlags;
    Parms.WriteFlags = (int32_t)WriteFlags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTFileUtils::ConvertToRelativePath(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "ConvertToRelativePath");
    struct
    {
        struct FString Filename;
        struct FString ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTFileUtils::ConvertToAbsolutePathForExternalAppForWrite(struct FString AbsolutePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "ConvertToAbsolutePathForExternalAppForWrite");
    struct
    {
        struct FString AbsolutePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.AbsolutePath = (struct FString)AbsolutePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTFileUtils::ConvertToAbsolutePathForExternalAppForRead(struct FString AbsolutePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "ConvertToAbsolutePathForExternalAppForRead");
    struct
    {
        struct FString AbsolutePath;
        struct FString ReturnValue;
    } Parms{};
    Parms.AbsolutePath = (struct FString)AbsolutePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTFileUtils::ConvertRelativePathToFull(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTFileUtils", "ConvertRelativePathToFull");
    struct
    {
        struct FString InPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTHttpLoader::* ----
uint8_t UMTHttpLoader::Load(struct FString InURL, struct FString InContentType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MTHttpLoader", "Load");
    struct
    {
        struct FString InURL;
        struct FString InContentType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InURL = (struct FString)InURL;
    Parms.InContentType = (struct FString)InContentType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMTOpenHarmony::* ----
uint8_t UMTOpenHarmony::IsOverrideOpenHarmonyLogDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTOpenHarmony", "IsOverrideOpenHarmonyLogDir");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTOpenHarmony::GetProjectName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTOpenHarmony", "GetProjectName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTOpenHarmony::GetInternalFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTOpenHarmony", "GetInternalFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTOpenHarmony::GetFilePathBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTOpenHarmony", "GetFilePathBase");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMTOpenHarmony::GetExternalFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTOpenHarmony", "GetExternalFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
