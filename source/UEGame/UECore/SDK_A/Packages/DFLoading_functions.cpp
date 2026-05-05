#include "DFLoading.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFLoadingFlowBase
void UDFLoadingFlowBase::UpdateProgress(float InProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "UpdateProgress");
    struct
    {
        float InProgress;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    this->ProcessEvent(Func, &Parms);
}

struct UGameInstance* UDFLoadingFlowBase::GetGameInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "GetGameInstance");
    struct
    {
        struct UGameInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFLoadingFlowBase::Finished(EDFLoadingFlowStepResult Result, struct FString InExtraMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "Finished");
    struct
    {
        enum EDFLoadingFlowStepResult Result;
        struct FString InExtraMsg;
    } Parms{};
    Parms.Result = (enum EDFLoadingFlowStepResult)Result;
    Parms.InExtraMsg = (struct FString)InExtraMsg;
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowBase::BP_Run()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "BP_Run");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowBase::BP_OnFinished(EDFLoadingFlowStepResult Result, struct FString InExtraMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "BP_OnFinished");
    struct
    {
        enum EDFLoadingFlowStepResult Result;
        struct FString InExtraMsg;
    } Parms{};
    Parms.Result = (enum EDFLoadingFlowStepResult)Result;
    Parms.InExtraMsg = (struct FString)InExtraMsg;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFLoadingFlowBase::BP_IsBreakFlowIfFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "BP_IsBreakFlowIfFailed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFLoadingFlowBase::BP_Initialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "BP_Initialize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowBase::BP_Deinitialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowBase", "BP_Deinitialize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFLoadingFlowManager
void UDFLoadingFlowManager::SwitchLoadingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "SwitchLoadingState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::RunNextFlowSteps()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "RunNextFlowSteps");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::RunFlowByName(const struct FName& InFlowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "RunFlowByName");
    struct
    {
        struct FName InFlowName;
    } Parms{};
    Parms.InFlowName = (struct FName)InFlowName;
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::ResetRunningFlowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "ResetRunningFlowState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::ProcessFlowStepTick(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "ProcessFlowStepTick");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::InitLoadingFlowNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "InitLoadingFlowNum");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFLoadingFlowManager* UDFLoadingFlowManager::GetLoadingFlowManager(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFLoadingFlowManager", "GetLoadingFlowManager");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFLoadingFlowManager* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDFLoadingFlowStates UDFLoadingFlowManager::GetCurrentState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "GetCurrentState");
    struct
    {
        enum EDFLoadingFlowStates ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFLoadingFlowManager::GetContextData(struct FString InKey, struct FString& OutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "GetContextData");
    struct
    {
        struct FString InKey;
        struct FString OutValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    this->ProcessEvent(Func, &Parms);
    OutValue = Parms.OutValue;
    return Parms.ReturnValue;
}

void UDFLoadingFlowManager::EnqueueContextData(struct FString InKey, struct FString InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "EnqueueContextData");
    struct
    {
        struct FString InKey;
        struct FString InValue;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    Parms.InValue = (struct FString)InValue;
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFLoadingFlowManager::DumpLoadingDebugInfo(uint8_t bDumpToLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "DumpLoadingDebugInfo");
    struct
    {
        uint8_t bDumpToLog;
        struct FString ReturnValue;
    } Parms{};
    Parms.bDumpToLog = (uint8_t)bDumpToLog;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFLoadingFlowManager::ClearTimeOutFlowSteps()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "ClearTimeOutFlowSteps");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::ClearFinishedFlowSteps()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "ClearFinishedFlowSteps");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFLoadingFlowManager::CheckRunningFlowOutOfTime(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "CheckRunningFlowOutOfTime");
    struct
    {
        float DeltaTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFLoadingFlowManager::CheckFinishedFlowStateSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "CheckFinishedFlowStateSuccess");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFLoadingFlowManager::CalculateLoadingProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "CalculateLoadingProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::BreakRunningFlow(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "BreakRunningFlow");
    struct
    {
        struct FString Reason;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UDFLoadingFlowManager::BreakFlowsInternal(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLoadingFlowManager", "BreakFlowsInternal");
    struct
    {
        struct FString Reason;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
