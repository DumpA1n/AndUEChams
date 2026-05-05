#include "DFMGameLaunch.hpp"
#include "DFMGameSDK.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFBHDCPUController
void UDFBHDCPUController::OnFPSLimitSateChanged__DelegateSignature(uint8_t bLimited)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDCPUController", "OnFPSLimitSateChanged__DelegateSignature");
    struct
    {
        uint8_t bLimited;
    } Parms{};
    Parms.bLimited = (uint8_t)bLimited;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFBHDCPUController::IsLimitingMaxFPS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDCPUController", "IsLimitingMaxFPS");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFBHDCPUController::GetMaxFPSBackground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDCPUController", "GetMaxFPSBackground");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFBHDCPUController* UDFBHDCPUController::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFBHDCPUController", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFBHDCPUController* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFBHDEnergyController
struct UDFBHDSubEnergyController* UDFBHDEnergyController::GetSubControllerByClass(struct UObject* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDEnergyController", "GetSubControllerByClass");
    struct
    {
        struct UObject* InClass;
        struct UDFBHDSubEnergyController* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UObject*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFBHDHelper
void UDFBHDHelper::StoreJsonString(struct FString MessageType, struct FString JsonStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "StoreJsonString");
    struct
    {
        struct FString MessageType;
        struct FString JsonStr;
    } Parms{};
    Parms.MessageType = (struct FString)MessageType;
    Parms.JsonStr = (struct FString)JsonStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::SetDFExhibitionChange(uint8_t bConnectBHD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "SetDFExhibitionChange");
    struct
    {
        uint8_t bConnectBHD;
    } Parms{};
    Parms.bConnectBHD = (uint8_t)bConnectBHD;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::SendJsonString(struct FString JsonStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "SendJsonString");
    struct
    {
        struct FString JsonStr;
    } Parms{};
    Parms.JsonStr = (struct FString)JsonStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::OnSocketSendMessage(struct FString Data, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "OnSocketSendMessage");
    struct
    {
        struct FString Data;
        uint8_t bSuccess;
    } Parms{};
    Parms.Data = (struct FString)Data;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::OnSocketRecvMessage(struct FString JsonString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "OnSocketRecvMessage");
    struct
    {
        struct FString JsonString;
    } Parms{};
    Parms.JsonString = (struct FString)JsonString;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::OnLostBHDProc(uint8_t IsLost)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "OnLostBHDProc");
    struct
    {
        uint8_t IsLost;
    } Parms{};
    Parms.IsLost = (uint8_t)IsLost;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::OnCreateBHDProc(uint8_t IsCreated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "OnCreateBHDProc");
    struct
    {
        uint8_t IsCreated;
    } Parms{};
    Parms.IsCreated = (uint8_t)IsCreated;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::OnClientConnected(struct FString ClientIP, int32_t ClientPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "OnClientConnected");
    struct
    {
        struct FString ClientIP;
        int32_t ClientPort;
    } Parms{};
    Parms.ClientIP = (struct FString)ClientIP;
    Parms.ClientPort = (int32_t)ClientPort;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::KillBHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "KillBHD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFBHDSubEnergyController* UDFBHDHelper::GetSubEnergyControllerByClass(struct UObject* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "GetSubEnergyControllerByClass");
    struct
    {
        struct UObject* InClass;
        struct UDFBHDSubEnergyController* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UObject*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFBHDHelper* UDFBHDHelper::GetInstance(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFBHDHelper", "GetInstance");
    struct
    {
        struct UObject* Context;
        struct UDFBHDHelper* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFBHDHelper::GetFreePort()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFBHDHelper", "GetFreePort");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFBHDHelper::GetDlcRootPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFBHDHelper", "GetDlcRootPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFBHDHelper::GetDlcBinaryPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFBHDHelper", "GetDlcBinaryPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFBHDHelper::GetBHDBinRelativePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFBHDHelper", "GetBHDBinRelativePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFBHDHelper::FindGameExeUnderDir(struct FString Dir, struct FString RegexPattern)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFBHDHelper", "FindGameExeUnderDir");
    struct
    {
        struct FString Dir;
        struct FString RegexPattern;
        struct FString ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.RegexPattern = (struct FString)RegexPattern;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFBHDHelper::CreateListenServer(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "CreateListenServer");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
        int32_t ReceiveBufferSize;
        int32_t SendBufferSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    Parms.ReceiveBufferSize = (int32_t)ReceiveBufferSize;
    Parms.SendBufferSize = (int32_t)SendBufferSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFBHDHelper::CreateBHDSingleProc(struct FString UE5ProgramPath, struct FString CommandLineArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "CreateBHDSingleProc");
    struct
    {
        struct FString UE5ProgramPath;
        struct FString CommandLineArgs;
    } Parms{};
    Parms.UE5ProgramPath = (struct FString)UE5ProgramPath;
    Parms.CommandLineArgs = (struct FString)CommandLineArgs;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::CreateBHD(struct FString UE5ProgramPath, struct FString CommandLineArgs, int32_t Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "CreateBHD");
    struct
    {
        struct FString UE5ProgramPath;
        struct FString CommandLineArgs;
        int32_t Port;
    } Parms{};
    Parms.UE5ProgramPath = (struct FString)UE5ProgramPath;
    Parms.CommandLineArgs = (struct FString)CommandLineArgs;
    Parms.Port = (int32_t)Port;
    this->ProcessEvent(Func, &Parms);
}

void UDFBHDHelper::CloseListenServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFBHDHelper", "CloseListenServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFDevopsTest
uint8_t UDFDevopsTest::IsBlueprintClassExist(struct FString InClassPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFDevopsTest", "IsBlueprintClassExist");
    struct
    {
        struct FString InClassPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InClassPath = (struct FString)InClassPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFDevopsTest::Echo(struct FString InInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFDevopsTest", "Echo");
    struct
    {
        struct FString InInfo;
        struct FString ReturnValue;
    } Parms{};
    Parms.InInfo = (struct FString)InInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFGameLaunchManager
void UDFGameLaunchManager::StartPreCompilePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "StartPreCompilePSO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFGameLaunchManager::ShouldPreCompilePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "ShouldPreCompilePSO");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFGameLaunchManager::SetPSODoneVersion(struct FString InVerStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "SetPSODoneVersion");
    struct
    {
        struct FString InVerStr;
    } Parms{};
    Parms.InVerStr = (struct FString)InVerStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::SetPreCompilePSOBegin(uint8_t bHasBegin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "SetPreCompilePSOBegin");
    struct
    {
        uint8_t bHasBegin;
    } Parms{};
    Parms.bHasBegin = (uint8_t)bHasBegin;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::SetFirstLaunchEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "SetFirstLaunchEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::RunFlow(const struct FName& FlowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "RunFlow");
    struct
    {
        struct FName FlowName;
    } Parms{};
    Parms.FlowName = (struct FName)FlowName;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::ReportGameLaunchStepOutOfLogin(struct FString InStepName, struct FString InMsg, ELaunchStepResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "ReportGameLaunchStepOutOfLogin");
    struct
    {
        struct FString InStepName;
        struct FString InMsg;
        enum ELaunchStepResult Result;
    } Parms{};
    Parms.InStepName = (struct FString)InStepName;
    Parms.InMsg = (struct FString)InMsg;
    Parms.Result = (enum ELaunchStepResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::ReportGameLaunchStepEnd(struct FString InOpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "ReportGameLaunchStepEnd");
    struct
    {
        struct FString InOpenId;
    } Parms{};
    Parms.InOpenId = (struct FString)InOpenId;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::ReportException()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "ReportException");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::OnSettingsDataLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "OnSettingsDataLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::OnFlowStepEnd(const struct FName& InStepName, ELaunchStepResult InResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "OnFlowStepEnd");
    struct
    {
        struct FName InStepName;
        enum ELaunchStepResult InResult;
    } Parms{};
    Parms.InStepName = (struct FName)InStepName;
    Parms.InResult = (enum ELaunchStepResult)InResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::OnFlowStepBegin(const struct FName& InStepName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "OnFlowStepBegin");
    struct
    {
        struct FName InStepName;
    } Parms{};
    Parms.InStepName = (struct FName)InStepName;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchManager::OnFlowEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "OnFlowEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFGameLaunchManager::LastReportID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "LastReportID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFGameLaunchManager::IsEnablePreCompilePSOOnDownloading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "IsEnablePreCompilePSOOnDownloading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFGameLaunchManager::GetPSODoneVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "GetPSODoneVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFGameLaunchManager::GetIsFirstLaunch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "GetIsFirstLaunch");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFGameLaunchManager* UDFGameLaunchManager::GetGameLaunchManager(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFGameLaunchManager", "GetGameLaunchManager");
    struct
    {
        struct UObject* Context;
        struct UDFGameLaunchManager* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UDFGameLaunchManager::GetCurRunningStepName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "GetCurRunningStepName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UDFGameLaunchManager::GetCurRunningFlowName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "GetCurRunningFlowName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFGameLaunchManager::FinishStep(const struct FName& StepName, ELaunchStepResult InStepResult, struct FString CustomMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchManager", "FinishStep");
    struct
    {
        struct FName StepName;
        enum ELaunchStepResult InStepResult;
        struct FString CustomMsg;
    } Parms{};
    Parms.StepName = (struct FName)StepName;
    Parms.InStepResult = (enum ELaunchStepResult)InStepResult;
    Parms.CustomMsg = (struct FString)CustomMsg;
    this->ProcessEvent(Func, &Parms);
}

// UDFGameLaunchUserCache
void UDFGameLaunchUserCache::UpdateConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchUserCache", "UpdateConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchUserCache::SetPSODoneVersion(struct FString InVerStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchUserCache", "SetPSODoneVersion");
    struct
    {
        struct FString InVerStr;
    } Parms{};
    Parms.InVerStr = (struct FString)InVerStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchUserCache::SetIsFirstLaunch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchUserCache", "SetIsFirstLaunch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFGameLaunchUserCache::GetPSODoneVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchUserCache", "GetPSODoneVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFGameLaunchUserCache::GetIsFirstLaunch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchUserCache", "GetIsFirstLaunch");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFGameLaunchStepBase
void UDFGameLaunchStepBase::UpdateBackgroundInfo(struct FText InTipText, float InLoadingPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "UpdateBackgroundInfo");
    struct
    {
        struct FText InTipText;
        float InLoadingPercent;
    } Parms{};
    Parms.InTipText = (struct FText)InTipText;
    Parms.InLoadingPercent = (float)InLoadingPercent;
    this->ProcessEvent(Func, &Parms);
}

struct FTimerHandle UDFGameLaunchStepBase::GLS_SetTimerByEvent(struct FDelegate Delegate, float Time, uint8_t bLooping, float InitialStartDelay, float InitialStartDelayVariance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "GLS_SetTimerByEvent");
    struct
    {
        struct FDelegate Delegate;
        float Time;
        uint8_t bLooping;
        float InitialStartDelay;
        float InitialStartDelayVariance;
        struct FTimerHandle ReturnValue;
    } Parms{};
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.Time = (float)Time;
    Parms.bLooping = (uint8_t)bLooping;
    Parms.InitialStartDelay = (float)InitialStartDelay;
    Parms.InitialStartDelayVariance = (float)InitialStartDelayVariance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFGameLaunchStepBase::GLS_RemoveTimerByHandle(struct FTimerHandle TimerHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "GLS_RemoveTimerByHandle");
    struct
    {
        struct FTimerHandle TimerHandle;
    } Parms{};
    Parms.TimerHandle = (struct FTimerHandle)TimerHandle;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchStepBase::GLS_ClearAllTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "GLS_ClearAllTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FName UDFGameLaunchStepBase::GetStepName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "GetStepName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameInstance* UDFGameLaunchStepBase::GetGameInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "GetGameInstance");
    struct
    {
        struct UGameInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFGameLaunchStepBase::CallLuaModuleFunction(struct FString ModuleFunc, struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "CallLuaModuleFunction");
    struct
    {
        struct FString ModuleFunc;
        struct FString ArgStr;
    } Parms{};
    Parms.ModuleFunc = (struct FString)ModuleFunc;
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchStepBase::CallLuaGlobalFunction(struct FString FuncName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBase", "CallLuaGlobalFunction");
    struct
    {
        struct FString FuncName;
    } Parms{};
    Parms.FuncName = (struct FString)FuncName;
    this->ProcessEvent(Func, &Parms);
}

// UDFGameLaunchStepBPBase
void UDFGameLaunchStepBPBase::EndStep(ELaunchStepResult Result, struct FString ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBPBase", "EndStep");
    struct
    {
        enum ELaunchStepResult Result;
        struct FString ErrorCode;
    } Parms{};
    Parms.Result = (enum ELaunchStepResult)Result;
    Parms.ErrorCode = (struct FString)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchStepBPBase::BP_OnStepEnd(ELaunchStepResult Result, struct FString ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBPBase", "BP_OnStepEnd");
    struct
    {
        enum ELaunchStepResult Result;
        struct FString ErrorCode;
    } Parms{};
    Parms.Result = (enum ELaunchStepResult)Result;
    Parms.ErrorCode = (struct FString)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchStepBPBase::BP_OnStepBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBPBase", "BP_OnStepBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFGameLaunchStepBPBase::BP_Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepBPBase", "BP_Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFGameLaunchStepFlowManager
void UDFGameLaunchStepFlowManager::RunStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFGameLaunchStepFlowManager", "RunStep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGLS_CheckNetStatus
void UGLS_CheckNetStatus::OnConfirmBtnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_CheckNetStatus", "OnConfirmBtnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGLS_CheckPhysicSpace
void UGLS_CheckPhysicSpace::OnConfirmBtnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_CheckPhysicSpace", "OnConfirmBtnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGLS_OpenHealthTip
void UGLS_OpenHealthTip::WarmupSteps()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_OpenHealthTip", "WarmupSteps");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_OpenHealthTip::WarmupMaple()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_OpenHealthTip", "WarmupMaple");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_OpenHealthTip::OpenHealthTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_OpenHealthTip", "OpenHealthTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_OpenHealthTip::EndStep_Manual()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_OpenHealthTip", "EndStep_Manual");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_OpenHealthTip::CheckAppVersionChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_OpenHealthTip", "CheckAppVersionChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGLS_RequestCDNMeta
void UGLS_RequestCDNMeta::RequestMetaFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestCDNMeta", "RequestMetaFile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestCDNMeta::OnLoadConfigEnd(EConfigState ConfigState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestCDNMeta", "OnLoadConfigEnd");
    struct
    {
        enum EConfigState ConfigState;
    } Parms{};
    Parms.ConfigState = (enum EConfigState)ConfigState;
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestCDNMeta::OnGetMetaDataFailed(EMetaError MetaError, int32_t InErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestCDNMeta", "OnGetMetaDataFailed");
    struct
    {
        enum EMetaError MetaError;
        int32_t InErrorCode;
    } Parms{};
    Parms.MetaError = (enum EMetaError)MetaError;
    Parms.InErrorCode = (int32_t)InErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestCDNMeta::OnGetMetaData(const struct FMetaInfo& MetaInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestCDNMeta", "OnGetMetaData");
    struct
    {
        struct FMetaInfo MetaInfo;
    } Parms{};
    Parms.MetaInfo = (struct FMetaInfo)MetaInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestCDNMeta::BP_OnGetMetaDataFailed(EMetaError MetaError, int32_t InErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestCDNMeta", "BP_OnGetMetaDataFailed");
    struct
    {
        enum EMetaError MetaError;
        int32_t InErrorCode;
    } Parms{};
    Parms.MetaError = (enum EMetaError)MetaError;
    Parms.InErrorCode = (int32_t)InErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestCDNMeta::BP_OnGetMetaData(const struct FMetaInfo& MetaInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestCDNMeta", "BP_OnGetMetaData");
    struct
    {
        struct FMetaInfo MetaInfo;
    } Parms{};
    Parms.MetaInfo = (struct FMetaInfo)MetaInfo;
    this->ProcessEvent(Func, &Parms);
}

// UGLS_RequestMapleData
void UGLS_RequestMapleData::StartRequestMapleData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestMapleData", "StartRequestMapleData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestMapleData::RequestMapleData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestMapleData", "RequestMapleData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestMapleData::OnPopWindowConfirmBtnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestMapleData", "OnPopWindowConfirmBtnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestMapleData::OnGetMapleDataFailed(EMapleError InErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestMapleData", "OnGetMapleDataFailed");
    struct
    {
        enum EMapleError InErrorCode;
    } Parms{};
    Parms.InErrorCode = (enum EMapleError)InErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UGLS_RequestMapleData::OnGetMapleData(struct FMapleData MapleData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GLS_RequestMapleData", "OnGetMapleData");
    struct
    {
        struct FMapleData MapleData;
    } Parms{};
    Parms.MapleData = (struct FMapleData)MapleData;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
