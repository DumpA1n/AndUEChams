#include "GPGameFlow.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGPGameFlowStringArg::* ----
struct FString UGPGameFlowStringArg::ToString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameFlowStringArg", "ToString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPGameFlowStringArg* UGPGameFlowStringArg::FromString(struct UObject* WorldContextObject, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGameFlowStringArg", "FromString");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString Value;
        struct UGPGameFlowStringArg* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameFlowDelegates::* ----
void UGameFlowDelegates::UpdatePendingNextFlowStage(EGameFlowStageType InGameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowDelegates", "UpdatePendingNextFlowStage");
    struct
    {
        enum EGameFlowStageType InGameFlowStage;
    } Parms{};
    Parms.InGameFlowStage = (enum EGameFlowStageType)InGameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowDelegates::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowDelegates", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

EGameFlowStageType UGameFlowDelegates::GetPreGameFlowStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowDelegates", "GetPreGameFlowStage");
    struct
    {
        enum EGameFlowStageType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameFlowStageType UGameFlowDelegates::GetPendingNextGameFlowStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowDelegates", "GetPendingNextGameFlowStage");
    struct
    {
        enum EGameFlowStageType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameFlowDelegates* UGameFlowDelegates::GetGameFlowDelegates(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameFlowDelegates", "GetGameFlowDelegates");
    struct
    {
        struct UObject* Context;
        struct UGameFlowDelegates* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGameFlowStageType UGameFlowDelegates::GetCurGameFlowStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowDelegates", "GetCurGameFlowStage");
    struct
    {
        enum EGameFlowStageType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameFlowGraph::* ----
void UGameFlowGraph::OnLuaGameFlowEvent(struct UGameInstance* GameInst, struct FString MdlName, struct FString EvtName, struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameFlowGraph", "OnLuaGameFlowEvent");
    struct
    {
        struct UGameInstance* GameInst;
        struct FString MdlName;
        struct FString EvtName;
        struct FString ArgStr;
    } Parms{};
    Parms.GameInst = (struct UGameInstance*)GameInst;
    Parms.MdlName = (struct FString)MdlName;
    Parms.EvtName = (struct FString)EvtName;
    Parms.ArgStr = (struct FString)ArgStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGameFlowGraph::OnEndFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowGraph", "OnEndFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowGraph::OnBeginFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowGraph", "OnBeginFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowGraph::GotoStage(struct UGameFlowStage* GFStageClass, struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowGraph", "GotoStage");
    struct
    {
        struct UGameFlowStage* GFStageClass;
        struct UObject* Args;
    } Parms{};
    Parms.GFStageClass = (struct UGameFlowStage*)GFStageClass;
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowGraph::EndFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowGraph", "EndFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowGraph::BeginFlow(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowGraph", "BeginFlow");
    struct
    {
        struct UGameInstance* GameInstance;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPLuaGameFlowEventListener::* ----
struct UGPLuaGameFlowEventListener* UGPLuaGameFlowEventListener::ListenLuaModuleEvent(struct UGameFlowStage* GFStage, struct FString ModuleEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPLuaGameFlowEventListener", "ListenLuaModuleEvent");
    struct
    {
        struct UGameFlowStage* GFStage;
        struct FString ModuleEvent;
        struct UGPLuaGameFlowEventListener* ReturnValue;
    } Parms{};
    Parms.GFStage = (struct UGameFlowStage*)GFStage;
    Parms.ModuleEvent = (struct FString)ModuleEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameFlowStage::* ----
void UGameFlowStage::OnTick(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "OnTick");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::LeaveToStage(struct UGameFlowStage* GFStageClass, struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "LeaveToStage");
    struct
    {
        struct UGameFlowStage* GFStageClass;
        struct UObject* Args;
    } Parms{};
    Parms.GFStageClass = (struct UGameFlowStage*)GFStageClass;
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::LeaveToBack(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "LeaveToBack");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::Leave(struct FString FlowBranch, struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "Leave");
    struct
    {
        struct FString FlowBranch;
        struct UObject* Args;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGameFlowStage::IsAsanOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameFlowStage", "IsAsanOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameFlowStage::EndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "EndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::Delay(float Duration, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "Delay");
    struct
    {
        float Duration;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.Duration = (float)Duration;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::CallLuaModuleFunction(struct FString ModuleFunc, struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "CallLuaModuleFunction");
    struct
    {
        struct FString ModuleFunc;
        struct FString ArgStr;
    } Parms{};
    Parms.ModuleFunc = (struct FString)ModuleFunc;
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::CallLuaGlobalFunction(struct FString FuncName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "CallLuaGlobalFunction");
    struct
    {
        struct FString FuncName;
    } Parms{};
    Parms.FuncName = (struct FString)FuncName;
    this->ProcessEvent(Func, &Parms);
}

void UGameFlowStage::BeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameFlowStage", "BeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPGameFlowStagePlayer::* ----
struct UGPGameFlowStagePlayer* UGPGameFlowStagePlayer::EnterGameFlowStage(struct UGameFlowGraph* GFGraph, struct UGameFlowStage* GFStageClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGameFlowStagePlayer", "EnterGameFlowStage");
    struct
    {
        struct UGameFlowGraph* GFGraph;
        struct UGameFlowStage* GFStageClass;
        struct UGPGameFlowStagePlayer* ReturnValue;
    } Parms{};
    Parms.GFGraph = (struct UGameFlowGraph*)GFGraph;
    Parms.GFStageClass = (struct UGameFlowStage*)GFStageClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPGameFlowGraphPlayer::* ----
void UGPGameFlowGraphPlayer::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameFlowGraphPlayer", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UGameFlowGraph* UGPGameFlowGraphPlayer::Play(struct UGameFlowGraph* GFGraphClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameFlowGraphPlayer", "Play");
    struct
    {
        struct UGameFlowGraph* GFGraphClass;
        struct UGameFlowGraph* ReturnValue;
    } Parms{};
    Parms.GFGraphClass = (struct UGameFlowGraph*)GFGraphClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
