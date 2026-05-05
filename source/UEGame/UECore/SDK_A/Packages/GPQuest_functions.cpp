#include "GPQuest.hpp"
#include "Engine.hpp"
#include "GPGameHud.hpp"
#include "GPGlobalDefines.hpp"
#include "HudFramework.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AGPQuestActionContext
void AGPQuestActionContext::StageGraphJumpObjective(int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestActionContext", "StageGraphJumpObjective");
    struct
    {
        int32_t objectiveId;
    } Parms{};
    Parms.objectiveId = (int32_t)objectiveId;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestActionContext::OnJumpObjective(int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestActionContext", "OnJumpObjective");
    struct
    {
        int32_t objectiveId;
    } Parms{};
    Parms.objectiveId = (int32_t)objectiveId;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestActionContext::GotoObjective(int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestActionContext", "GotoObjective");
    struct
    {
        int32_t objectiveId;
    } Parms{};
    Parms.objectiveId = (int32_t)objectiveId;
    this->ProcessEvent(Func, &Parms);
}

// AGPQuest
void AGPQuest::ServerAcceptContractForOfflinePlayer(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "ServerAcceptContractForOfflinePlayer");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::QuestGraphJumpStage(struct FString StageName, EGPQuestPlayReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "QuestGraphJumpStage");
    struct
    {
        struct FString StageName;
        enum EGPQuestPlayReason Reason;
    } Parms{};
    Parms.StageName = (struct FString)StageName;
    Parms.Reason = (enum EGPQuestPlayReason)Reason;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::QuestGraphCallFunctionByName(struct FString Function)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "QuestGraphCallFunctionByName");
    struct
    {
        struct FString Function;
    } Parms{};
    Parms.Function = (struct FString)Function;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::PlunderQuest(int32_t TeamID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "PlunderQuest");
    struct
    {
        int32_t TeamID;
    } Parms{};
    Parms.TeamID = (int32_t)TeamID;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnWaitingPlunder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnWaitingPlunder");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnReplayQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnReplayQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnRep_GPQuestMarkerArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnRep_GPQuestMarkerArray");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnRep_CurrentStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnRep_CurrentStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnRep_ClientProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnRep_ClientProxy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnPlunder(int32_t TeamID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnPlunder");
    struct
    {
        int32_t TeamID;
    } Parms{};
    Parms.TeamID = (int32_t)TeamID;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnNewPlayerEnterVolume(struct AActor* NewPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnNewPlayerEnterVolume");
    struct
    {
        struct AActor* NewPlayer;
    } Parms{};
    Parms.NewPlayer = (struct AActor*)NewPlayer;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnJumpStage(struct FString StageName, EGPQuestPlayReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnJumpStage");
    struct
    {
        struct FString StageName;
        enum EGPQuestPlayReason Reason;
    } Parms{};
    Parms.StageName = (struct FString)StageName;
    Parms.Reason = (enum EGPQuestPlayReason)Reason;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnEndQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnEndQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnBeginQuestManually()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnBeginQuestManually");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::OnBeginQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "OnBeginQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::GotoStage(struct FString StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "GotoStage");
    struct
    {
        struct FString StageName;
    } Parms{};
    Parms.StageName = (struct FString)StageName;
    this->ProcessEvent(Func, &Parms);
}

struct FString AGPQuest::GetStageFullName(struct FString StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "GetStageFullName");
    struct
    {
        struct FString StageName;
        struct FString ReturnValue;
    } Parms{};
    Parms.StageName = (struct FString)StageName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPQuest::EndQuestOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "EndQuestOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::EndQuest(EGPQuestEndReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "EndQuest");
    struct
    {
        enum EGPQuestEndReason Reason;
    } Parms{};
    Parms.Reason = (enum EGPQuestEndReason)Reason;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::BreakQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "BreakQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::BeginQuestOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "BeginQuestOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuest::BeginQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuest", "BeginQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGPQuestObjectiveAsyncReturnActionBase
void UGPQuestObjectiveAsyncReturnActionBase::FireReturnAction(EGPQuestObjectiveAsyncReturnBranch Branch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestObjectiveAsyncReturnActionBase", "FireReturnAction");
    struct
    {
        enum EGPQuestObjectiveAsyncReturnBranch Branch;
    } Parms{};
    Parms.Branch = (enum EGPQuestObjectiveAsyncReturnBranch)Branch;
    this->ProcessEvent(Func, &Parms);
}

// UGPQuestActionLib_Basic
void UGPQuestActionLib_Basic::QA_SetStageTitle(struct AGPQuestActionContext* QAContext, struct FText InStageTitle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_SetStageTitle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InStageTitle;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InStageTitle = (struct FText)InStageTitle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_SetScreenLogVisible(struct AGPQuestActionContext* QAContext, uint8_t bVisible, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_SetScreenLogVisible");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        uint8_t bVisible;
        float Duration;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.bVisible = (uint8_t)bVisible;
    Parms.Duration = (float)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_SetOptionalObjectiveTitleWithHealthBar(struct AGPQuestActionContext* QAContext, struct FText InTitle, EGPQuestObjectiveHUDType InMissionType, struct AActor* ActorClass, struct FName QATag_TargetTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_SetOptionalObjectiveTitleWithHealthBar");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InTitle;
        enum EGPQuestObjectiveHUDType InMissionType;
        struct AActor* ActorClass;
        struct FName QATag_TargetTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InTitle = (struct FText)InTitle;
    Parms.InMissionType = (enum EGPQuestObjectiveHUDType)InMissionType;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_SetOptionalObjectiveTitle(struct AGPQuestActionContext* QAContext, struct FText InTitle, EGPQuestObjectiveHUDType InMissionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_SetOptionalObjectiveTitle");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InTitle;
        enum EGPQuestObjectiveHUDType InMissionType;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InTitle = (struct FText)InTitle;
    Parms.InMissionType = (enum EGPQuestObjectiveHUDType)InMissionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_SetObjectiveTitleWithType(struct AGPQuestActionContext* QAContext, struct FText InText, EGPQuestObjectiveHUDType InMissionHUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_SetObjectiveTitleWithType");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InText;
        enum EGPQuestObjectiveHUDType InMissionHUDType;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InText = (struct FText)InText;
    Parms.InMissionHUDType = (enum EGPQuestObjectiveHUDType)InMissionHUDType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_SetObjectiveTitleAutoParams(struct AGPQuestActionContext* QAContext, struct FText InText, EGPQuestObjectiveHUDType InMissionHUDType, struct TArray<struct FString> InArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_SetObjectiveTitleAutoParams");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InText;
        enum EGPQuestObjectiveHUDType InMissionHUDType;
        struct TArray<struct FString> InArgs;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InText = (struct FText)InText;
    Parms.InMissionHUDType = (enum EGPQuestObjectiveHUDType)InMissionHUDType;
    Parms.InArgs = (struct TArray<struct FString>)InArgs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_RemoveSpecifiedMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_RemoveSpecifiedMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerActor;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerActor = (struct AGPQuestMarkerBase*)MarkerActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_RemoveMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct FName QATag_TargetTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_RemoveMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerClass;
        struct FName QATag_TargetTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_RemoveAllMarker(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_RemoveAllMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_RemoveActorMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActor, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_RemoveActorMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerClass;
        struct AActor* TargetActor;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_QuestStateUpdateTips(struct AGPQuestActionContext* QAContext, struct FText PopText, EGPQuestStageState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_QuestStateUpdateTips");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText PopText;
        enum EGPQuestStageState State;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.PopText = (struct FText)PopText;
    Parms.State = (enum EGPQuestStageState)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_PlayObjectiveNotice(struct AGPQuestActionContext* QAContext, struct FText NoticeText, uint8_t bNoticeAudio, float Duration, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_PlayObjectiveNotice");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText NoticeText;
        uint8_t bNoticeAudio;
        float Duration;
        int32_t Priority;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.NoticeText = (struct FText)NoticeText;
    Parms.bNoticeAudio = (uint8_t)bNoticeAudio;
    Parms.Duration = (float)Duration;
    Parms.Priority = (int32_t)Priority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_ObjectiveTips(struct AGPQuestActionContext* QAContext, struct FText InTipsText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_ObjectiveTips");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InTipsText;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InTipsText = (struct FText)InTipsText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_ObjectiveHint(struct AGPQuestActionContext* QAContext, struct FText InHintText, EGPQuestObjectiveHUDType InObjectiveHUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_ObjectiveHint");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FText InHintText;
        enum EGPQuestObjectiveHUDType InObjectiveHUDType;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.InHintText = (struct FText)InHintText;
    Parms.InObjectiveHUDType = (enum EGPQuestObjectiveHUDType)InObjectiveHUDType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UActorComponent* UGPQuestActionLib_Basic::QA_FindFirstActorWithComponent(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, struct UActorComponent* ComponentClass, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_FindFirstActorWithComponent");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        struct UActorComponent* ComponentClass;
        enum EGPQuestActionScope Scope;
        struct UActorComponent* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.ComponentClass = (struct UActorComponent*)ComponentClass;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPQuestActionLib_Basic::QA_FindFirstActor(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_FindFirstActor");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        enum EGPQuestActionScope Scope;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPQuestActionLib_Basic::QA_FindAllActor(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_FindAllActor");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        enum EGPQuestActionScope Scope;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UGPQuestActionLib_Basic::QA_DeactivateMarker(struct AGPQuestActionContext* QAContext, struct FName QATag_TargetTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_DeactivateMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_TargetTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestActionLib_Basic::QA_ClearOptionalObjective(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_ClearOptionalObjective");
    struct
    {
        struct AGPQuestActionContext* QAContext;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct AGPQuestMarkerBase* UGPQuestActionLib_Basic::QA_AddMarkerToSpecifiedTarget(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActor, struct FVector OffsetLocation, float DistanceThreshold, EGPQuestActionMarkerType MarkerType, struct FName SocketName, uint8_t ShowInBigMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_AddMarkerToSpecifiedTarget");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerClass;
        struct AActor* TargetActor;
        struct FVector OffsetLocation;
        float DistanceThreshold;
        enum EGPQuestActionMarkerType MarkerType;
        struct FName SocketName;
        uint8_t ShowInBigMap;
        struct AGPQuestMarkerBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.OffsetLocation = (struct FVector)OffsetLocation;
    Parms.DistanceThreshold = (float)DistanceThreshold;
    Parms.MarkerType = (enum EGPQuestActionMarkerType)MarkerType;
    Parms.SocketName = (struct FName)SocketName;
    Parms.ShowInBigMap = (uint8_t)ShowInBigMap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPQuestActionLib_Basic::QA_AddMarkerOnAllActors(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName TargetTag, struct FVector OffsetLocation, float DistanceThreshold, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_AddMarkerOnAllActors");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerClass;
        struct AActor* TargetActorClass;
        struct FName TargetTag;
        struct FVector OffsetLocation;
        float DistanceThreshold;
        enum EGPQuestActionMarkerType MarkerType;
        enum EGPQuestActionScope Scope;
        uint8_t ShowInBigMap;
        struct FName SocketName;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    Parms.TargetActorClass = (struct AActor*)TargetActorClass;
    Parms.TargetTag = (struct FName)TargetTag;
    Parms.OffsetLocation = (struct FVector)OffsetLocation;
    Parms.DistanceThreshold = (float)DistanceThreshold;
    Parms.MarkerType = (enum EGPQuestActionMarkerType)MarkerType;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.ShowInBigMap = (uint8_t)ShowInBigMap;
    Parms.SocketName = (struct FName)SocketName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct AGPQuestMarkerBase* UGPQuestActionLib_Basic::QA_AddMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName QATag_TargetTag, struct FVector OffsetLocation, float DistanceThreshold, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_AddMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuestMarkerBase* MarkerClass;
        struct AActor* TargetActorClass;
        struct FName QATag_TargetTag;
        struct FVector OffsetLocation;
        float DistanceThreshold;
        enum EGPQuestActionMarkerType MarkerType;
        enum EGPQuestActionScope Scope;
        uint8_t ShowInBigMap;
        struct FName SocketName;
        struct AGPQuestMarkerBase* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.MarkerClass = (struct AGPQuestMarkerBase*)MarkerClass;
    Parms.TargetActorClass = (struct AActor*)TargetActorClass;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.OffsetLocation = (struct FVector)OffsetLocation;
    Parms.DistanceThreshold = (float)DistanceThreshold;
    Parms.MarkerType = (enum EGPQuestActionMarkerType)MarkerType;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    Parms.ShowInBigMap = (uint8_t)ShowInBigMap;
    Parms.SocketName = (struct FName)SocketName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPQuestActionLib_Basic::QA_ActivateMarker(struct AGPQuestActionContext* QAContext, struct FName QATag_TargetTag, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestActionLib_Basic", "QA_ActivateMarker");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct FName QATag_TargetTag;
        enum EGPQuestActionScope Scope;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    Parms.QATag_TargetTag = (struct FName)QATag_TargetTag;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// AGPQuestAudioSubsystem
void AGPQuestAudioSubsystem::StopAudio(struct FName AudioDataTableKey, int32_t TransitionMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestAudioSubsystem", "StopAudio");
    struct
    {
        struct FName AudioDataTableKey;
        int32_t TransitionMS;
    } Parms{};
    Parms.AudioDataTableKey = (struct FName)AudioDataTableKey;
    Parms.TransitionMS = (int32_t)TransitionMS;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestAudioSubsystem::Play3DAudio(struct FName AudioDataTableKey, struct FVector PlayingLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestAudioSubsystem", "Play3DAudio");
    struct
    {
        struct FName AudioDataTableKey;
        struct FVector PlayingLocation;
    } Parms{};
    Parms.AudioDataTableKey = (struct FName)AudioDataTableKey;
    Parms.PlayingLocation = (struct FVector)PlayingLocation;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestAudioSubsystem::Play2DAudio(struct FName AudioDataTableKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestAudioSubsystem", "Play2DAudio");
    struct
    {
        struct FName AudioDataTableKey;
    } Parms{};
    Parms.AudioDataTableKey = (struct FName)AudioDataTableKey;
    this->ProcessEvent(Func, &Parms);
}

// AGPQuestClientProxy
void AGPQuestClientProxy::SetOptionalObjectiveInfo(const struct FGPQuestObjectiveHUDInfo& InObjectiveInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "SetOptionalObjectiveInfo");
    struct
    {
        struct FGPQuestObjectiveHUDInfo InObjectiveInfo;
    } Parms{};
    Parms.InObjectiveInfo = (struct FGPQuestObjectiveHUDInfo)InObjectiveInfo;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::SetObjectiveHUDInfo(const struct FGPQuestObjectiveHUDInfo& InObjectiveInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "SetObjectiveHUDInfo");
    struct
    {
        struct FGPQuestObjectiveHUDInfo InObjectiveInfo;
    } Parms{};
    Parms.InObjectiveInfo = (struct FGPQuestObjectiveHUDInfo)InObjectiveInfo;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::SetActorDisableCollision(struct UObject* ActorClass, struct FName ActorTag, uint8_t bDisableCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "SetActorDisableCollision");
    struct
    {
        struct UObject* ActorClass;
        struct FName ActorTag;
        uint8_t bDisableCollision;
    } Parms{};
    Parms.ActorClass = (struct UObject*)ActorClass;
    Parms.ActorTag = (struct FName)ActorTag;
    Parms.bDisableCollision = (uint8_t)bDisableCollision;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::OnRep_RomoveGameHudState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "OnRep_RomoveGameHudState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::OnRep_OptionalObjectiveHUDInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "OnRep_OptionalObjectiveHUDInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::OnRep_ObjectiveInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "OnRep_ObjectiveInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::OnRep_AddGameHudState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "OnRep_AddGameHudState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::OnCommonBannerShowed(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "OnCommonBannerShowed");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::NotifyServerMediaEnd(int64_t PlayerUin, uint32_t MediaNameCrc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "NotifyServerMediaEnd");
    struct
    {
        int64_t PlayerUin;
        uint32_t MediaNameCrc;
    } Parms{};
    Parms.PlayerUin = (int64_t)PlayerUin;
    Parms.MediaNameCrc = (uint32_t)MediaNameCrc;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::NotifyServerLevelsLoaded(uint64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "NotifyServerLevelsLoaded");
    struct
    {
        uint64_t PlayerUin;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::NotifyHudViewLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "NotifyHudViewLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FGPQuestObjectiveHUDInfo AGPQuestClientProxy::GetOptionalObjectiveInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "GetOptionalObjectiveInfo");
    struct
    {
        struct FGPQuestObjectiveHUDInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPQuestObjectiveHUDInfo AGPQuestClientProxy::GetObjectiveInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "GetObjectiveInfo");
    struct
    {
        struct FGPQuestObjectiveHUDInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPQuestClientProxy::ClientUpdateQuestState(struct FText PopText, EGPQuestStageState QuestState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientUpdateQuestState");
    struct
    {
        struct FText PopText;
        enum EGPQuestStageState QuestState;
    } Parms{};
    Parms.PopText = (struct FText)PopText;
    Parms.QuestState = (enum EGPQuestStageState)QuestState;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientsNotifyPlayObjectiveNotice(struct FGPQuestObjectiveNoticeInfo ObjectiveNoticeInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientsNotifyPlayObjectiveNotice");
    struct
    {
        struct FGPQuestObjectiveNoticeInfo ObjectiveNoticeInfo;
    } Parms{};
    Parms.ObjectiveNoticeInfo = (struct FGPQuestObjectiveNoticeInfo)ObjectiveNoticeInfo;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientShowObjectiveTips(struct FString TipsText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientShowObjectiveTips");
    struct
    {
        struct FString TipsText;
    } Parms{};
    Parms.TipsText = (struct FString)TipsText;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientShowObjectiveHint(struct FString HintText, EGPQuestObjectiveHUDType InObjectiveHUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientShowObjectiveHint");
    struct
    {
        struct FString HintText;
        enum EGPQuestObjectiveHUDType InObjectiveHUDType;
    } Parms{};
    Parms.HintText = (struct FString)HintText;
    Parms.InObjectiveHUDType = (enum EGPQuestObjectiveHUDType)InObjectiveHUDType;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientShowHUDPanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientShowHUDPanel");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientRemoveGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientRemoveGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientHUDPanelsOperateGameHudState(struct TArray<struct FName> PanelConfigNames, EGameHUDSate State, EVisibleGameHUDStateOperators Operator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientHUDPanelsOperateGameHudState");
    struct
    {
        struct TArray<struct FName> PanelConfigNames;
        enum EGameHUDSate State;
        enum EVisibleGameHUDStateOperators Operator;
    } Parms{};
    Parms.PanelConfigNames = (struct TArray<struct FName>)PanelConfigNames;
    Parms.State = (enum EGameHUDSate)State;
    Parms.Operator = (enum EVisibleGameHUDStateOperators)Operator;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientHideHUDPanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientHideHUDPanel");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientHideActorInGame(struct UObject* ActorClass, struct FName ActorTag, uint8_t bHideInGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientHideActorInGame");
    struct
    {
        struct UObject* ActorClass;
        struct FName ActorTag;
        uint8_t bHideInGame;
    } Parms{};
    Parms.ActorClass = (struct UObject*)ActorClass;
    Parms.ActorTag = (struct FName)ActorTag;
    Parms.bHideInGame = (uint8_t)bHideInGame;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClientAddGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClientAddGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestClientProxy::ClearOptionalObjective()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestClientProxy", "ClearOptionalObjective");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AGPQuestCountdownBase
void AGPQuestCountdownBase::Recountdown(int32_t Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "Recountdown");
    struct
    {
        int32_t Duration;
    } Parms{};
    Parms.Duration = (int32_t)Duration;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestCountdownBase::OnRep_CountdownType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "OnRep_CountdownType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestCountdownBase::OnRep_CountDownHUDClassType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "OnRep_CountDownHUDClassType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t AGPQuestCountdownBase::GetRemainingTimeOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "GetRemainingTimeOnClient");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPQuestCountdownBase::GetRemainingTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "GetRemainingTime");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPQuestCountdownBase::BP_RefreshCountdownType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "BP_RefreshCountdownType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestCountdownBase::BP_OnServerStopCountDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "BP_OnServerStopCountDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestCountdownBase::BP_OnServerStartCountDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "BP_OnServerStartCountDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestCountdownBase::BP_CreateCountDownHUD(uint8_t bShowHUD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestCountdownBase", "BP_CreateCountDownHUD");
    struct
    {
        uint8_t bShowHUD;
    } Parms{};
    Parms.bShowHUD = (uint8_t)bShowHUD;
    this->ProcessEvent(Func, &Parms);
}

// UGPQuestTextUtils
struct FText UGPQuestTextUtils::GetFinalText(const struct FGPQuestText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestTextUtils", "GetFinalText");
    struct
    {
        struct FGPQuestText Text;
        struct FText ReturnValue;
    } Parms{};
    Parms.Text = (struct FGPQuestText)Text;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPQuestTextUtils::GetDisplayString(const struct FGPQuestText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestTextUtils", "GetDisplayString");
    struct
    {
        struct FGPQuestText Text;
        struct FString ReturnValue;
    } Parms{};
    Parms.Text = (struct FGPQuestText)Text;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IGPQuestInteractorInterface
void IGPQuestInteractorInterface::OnStatusChanged_Broadcast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestInteractorInterface", "OnStatusChanged_Broadcast");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPQuestInteractorInterface::MakeInteractorSuccessful()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestInteractorInterface", "MakeInteractorSuccessful");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPQuestInteractorInterface::MakeInteractorFail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestInteractorInterface", "MakeInteractorFail");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EGPQuestInteractorStatus IGPQuestInteractorInterface::GetInteractorStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestInteractorInterface", "GetInteractorStatus");
    struct
    {
        enum EGPQuestInteractorStatus ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPQuestInteractorInterface::DeactivateInteractor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestInteractorInterface", "DeactivateInteractor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPQuestInteractorInterface::ActivateInteractor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestInteractorInterface", "ActivateInteractor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGPQuestLevelResetComponent
void UGPQuestLevelResetComponent::TestReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestLevelResetComponent", "TestReset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPQuestLevelResetComponent::OnResetStage(struct AGPQuestStage* QStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestLevelResetComponent", "OnResetStage");
    struct
    {
        struct AGPQuestStage* QStage;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    this->ProcessEvent(Func, &Parms);
}

void UGPQuestLevelResetComponent::ListenLevelResetEventOnce()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestLevelResetComponent", "ListenLevelResetEventOnce");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AGPQuestMarkerBase
void AGPQuestMarkerBase::UpdateMarkerLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "UpdateMarkerLoc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::ShowMarkCircelOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "ShowMarkCircelOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::SetTargetWidgetScale(float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "SetTargetWidgetScale");
    struct
    {
        float Scale;
    } Parms{};
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::SetMarkerActive(uint8_t Active)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "SetMarkerActive");
    struct
    {
        uint8_t Active;
    } Parms{};
    Parms.Active = (uint8_t)Active;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnRep_ValidUins()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnRep_ValidUins");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnRep_ShowMarkCircel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnRep_ShowMarkCircel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnRep_ShowInBigMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnRep_ShowInBigMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnRep_MarkerServerPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnRep_MarkerServerPos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnRep_MarkerScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnRep_MarkerScale");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnRep_MarkerActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnRep_MarkerActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnNewGameHudStateChanged(struct UHudManager* HudManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnNewGameHudStateChanged");
    struct
    {
        struct UHudManager* HudManager;
    } Parms{};
    Parms.HudManager = (struct UHudManager*)HudManager;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnMarkerViewCreatedOnClient(struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnMarkerViewCreatedOnClient");
    struct
    {
        struct UBaseUIView* View;
    } Parms{};
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnDeactivateMarkerOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnDeactivateMarkerOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::OnActivateMarkerOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "OnActivateMarkerOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D AGPQuestMarkerBase::GetViewportLocation(struct FVector2D AnchorCenterOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "GetViewportLocation");
    struct
    {
        struct FVector2D AnchorCenterOffset;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.AnchorCenterOffset = (struct FVector2D)AnchorCenterOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPQuestMarkerBase::GetViewportAimMarkerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "GetViewportAimMarkerActor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D AGPQuestMarkerBase::GetUserWidgetLocation(struct FVector2D WidgetSize, struct FVector2D AnchorCenterOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "GetUserWidgetLocation");
    struct
    {
        struct FVector2D WidgetSize;
        struct FVector2D AnchorCenterOffset;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.WidgetSize = (struct FVector2D)WidgetSize;
    Parms.AnchorCenterOffset = (struct FVector2D)AnchorCenterOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPQuestMarkerBase::DeactivateMarkerOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "DeactivateMarkerOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::DeactivateMarker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "DeactivateMarker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::ActivateMarkerOnClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "ActivateMarkerOnClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestMarkerBase::ActivateMarker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestMarkerBase", "ActivateMarker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGPQuestObjectiveAsyncReturnAction_Default
void UGPQuestObjectiveAsyncReturnAction_Default::EndQuestObjectiveNew(struct AGPQuest* Quest, EGPQuestObjectiveAsyncReturnBranch Branch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestObjectiveAsyncReturnAction_Default", "EndQuestObjectiveNew");
    struct
    {
        struct AGPQuest* Quest;
        enum EGPQuestObjectiveAsyncReturnBranch Branch;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.Branch = (enum EGPQuestObjectiveAsyncReturnBranch)Branch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPQuestObjectiveAsyncReturnAction_Default::EndQuestObjective(struct AGPQuestStage* QStage, EGPQuestObjectiveAsyncReturnBranch Branch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestObjectiveAsyncReturnAction_Default", "EndQuestObjective");
    struct
    {
        struct AGPQuestStage* QStage;
        enum EGPQuestObjectiveAsyncReturnBranch Branch;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    Parms.Branch = (enum EGPQuestObjectiveAsyncReturnBranch)Branch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UGPQuestObjectiveAsyncReturnAction_Default* UGPQuestObjectiveAsyncReturnAction_Default::BeginQuestObjectiveNewWithTargetType(struct AGPQuest* Quest, ESOLTargetType TargetType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestObjectiveAsyncReturnAction_Default", "BeginQuestObjectiveNewWithTargetType");
    struct
    {
        struct AGPQuest* Quest;
        enum ESOLTargetType TargetType;
        struct UGPQuestObjectiveAsyncReturnAction_Default* ReturnValue;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.TargetType = (enum ESOLTargetType)TargetType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPQuestObjectiveAsyncReturnAction_Default* UGPQuestObjectiveAsyncReturnAction_Default::BeginQuestObjectiveNew(struct AGPQuest* Quest, int32_t QObjective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestObjectiveAsyncReturnAction_Default", "BeginQuestObjectiveNew");
    struct
    {
        struct AGPQuest* Quest;
        int32_t QObjective;
        struct UGPQuestObjectiveAsyncReturnAction_Default* ReturnValue;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.QObjective = (int32_t)QObjective;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPQuestObjectiveAsyncReturnAction_Default* UGPQuestObjectiveAsyncReturnAction_Default::BeginQuestObjective(struct AGPQuestStage* QStage, int32_t QObjective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestObjectiveAsyncReturnAction_Default", "BeginQuestObjective");
    struct
    {
        struct AGPQuestStage* QStage;
        int32_t QObjective;
        struct UGPQuestObjectiveAsyncReturnAction_Default* ReturnValue;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    Parms.QObjective = (int32_t)QObjective;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPQuestSettings
struct UGPQuestSettings* UGPQuestSettings::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestSettings", "Get");
    struct
    {
        struct UGPQuestSettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPQuestStageAsyncReturnActionBase
void UGPQuestStageAsyncReturnActionBase::FireReturnAction(EGPQuestStageAsyncReturnBranch Branch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStageAsyncReturnActionBase", "FireReturnAction");
    struct
    {
        enum EGPQuestStageAsyncReturnBranch Branch;
    } Parms{};
    Parms.Branch = (enum EGPQuestStageAsyncReturnBranch)Branch;
    this->ProcessEvent(Func, &Parms);
}

// AGPQuestStage
void AGPQuestStage::ResetStageBroadcast(EGPQuestPlayReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "ResetStageBroadcast");
    struct
    {
        enum EGPQuestPlayReason Reason;
    } Parms{};
    Parms.Reason = (enum EGPQuestPlayReason)Reason;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnStageFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnStageFailed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnResetStageComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnResetStageComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnResetStageClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnResetStageClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnResetStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnResetStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnRep_StageState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnRep_StageState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnPreBeginStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnPreBeginStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnPlayerReconnectToStage(struct APlayerController* ReconnectPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnPlayerReconnectToStage");
    struct
    {
        struct APlayerController* ReconnectPlayer;
    } Parms{};
    Parms.ReconnectPlayer = (struct APlayerController*)ReconnectPlayer;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnEndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnEndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::OnBeginStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "OnBeginStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::EndStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "EndStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AGPQuestClientProxy* AGPQuestStage::ClientProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "ClientProxy");
    struct
    {
        struct AGPQuestClientProxy* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPQuestStage::CleanupLastStageRelevantLevelBroadcast(struct AGPQuestStage* LastStageClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "CleanupLastStageRelevantLevelBroadcast");
    struct
    {
        struct AGPQuestStage* LastStageClass;
    } Parms{};
    Parms.LastStageClass = (struct AGPQuestStage*)LastStageClass;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::BreakStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "BreakStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestStage::BeginStage(EGPQuestPlayReason Reason, struct AGPQuestStage* LastStageClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestStage", "BeginStage");
    struct
    {
        enum EGPQuestPlayReason Reason;
        struct AGPQuestStage* LastStageClass;
    } Parms{};
    Parms.Reason = (enum EGPQuestPlayReason)Reason;
    Parms.LastStageClass = (struct AGPQuestStage*)LastStageClass;
    this->ProcessEvent(Func, &Parms);
}

// UGPQuestStageAsyncReturnAction_Default
void UGPQuestStageAsyncReturnAction_Default::ReplayQuestStage(struct AGPQuest* Quest, EGPQuestPlayReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageAsyncReturnAction_Default", "ReplayQuestStage");
    struct
    {
        struct AGPQuest* Quest;
        enum EGPQuestPlayReason Reason;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.Reason = (enum EGPQuestPlayReason)Reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UGPQuestStageAsyncReturnAction_Default* UGPQuestStageAsyncReturnAction_Default::PlayQuestStageAsync(struct AGPQuest* Quest, struct FText StageTitle, struct FString StageName, EGPQuestPlayReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageAsyncReturnAction_Default", "PlayQuestStageAsync");
    struct
    {
        struct AGPQuest* Quest;
        struct FText StageTitle;
        struct FString StageName;
        enum EGPQuestPlayReason Reason;
        struct UGPQuestStageAsyncReturnAction_Default* ReturnValue;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.StageTitle = (struct FText)StageTitle;
    Parms.StageName = (struct FString)StageName;
    Parms.Reason = (enum EGPQuestPlayReason)Reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPQuestStageAsyncReturnAction_Default* UGPQuestStageAsyncReturnAction_Default::PlayQuestStage(struct AGPQuest* Quest, struct FText StageTitle, struct FString QStage, EGPQuestPlayReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageAsyncReturnAction_Default", "PlayQuestStage");
    struct
    {
        struct AGPQuest* Quest;
        struct FText StageTitle;
        struct FString QStage;
        enum EGPQuestPlayReason Reason;
        struct UGPQuestStageAsyncReturnAction_Default* ReturnValue;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.StageTitle = (struct FText)StageTitle;
    Parms.QStage = (struct FString)QStage;
    Parms.Reason = (enum EGPQuestPlayReason)Reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPQuestStageAsyncReturnAction_Default::EndStage(struct AGPQuestStage* QStage, EGPQuestStageAsyncReturnBranch Branch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageAsyncReturnAction_Default", "EndStage");
    struct
    {
        struct AGPQuestStage* QStage;
        enum EGPQuestStageAsyncReturnBranch Branch;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    Parms.Branch = (enum EGPQuestStageAsyncReturnBranch)Branch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGPQuestStageUtils
struct FString UGPQuestStageUtils::GetStageTitleKey(struct AGPQuestStage* QStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageUtils", "GetStageTitleKey");
    struct
    {
        struct AGPQuestStage* QStage;
        struct FString ReturnValue;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPQuestStageUtils::GetStageSummaryKey(struct AGPQuestStage* QStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageUtils", "GetStageSummaryKey");
    struct
    {
        struct AGPQuestStage* QStage;
        struct FString ReturnValue;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULevelStreaming* UGPQuestStageUtils::GetStageLevelStreaming(struct AGPQuestStage* QStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageUtils", "GetStageLevelStreaming");
    struct
    {
        struct AGPQuestStage* QStage;
        struct ULevelStreaming* ReturnValue;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPQuestStageData UGPQuestStageUtils::GetStageData(struct AGPQuestStage* QStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageUtils", "GetStageData");
    struct
    {
        struct AGPQuestStage* QStage;
        struct FGPQuestStageData ReturnValue;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPQuestStageUtils::GetObjectiveTitleKey(struct AGPQuestStage* QStage, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageUtils", "GetObjectiveTitleKey");
    struct
    {
        struct AGPQuestStage* QStage;
        int32_t objectiveId;
        struct FString ReturnValue;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    Parms.objectiveId = (int32_t)objectiveId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULevelStreaming* UGPQuestStageUtils::GetLevelStreamingByName(struct AGPQuestStage* QStage, struct FName QLevelFullName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestStageUtils", "GetLevelStreamingByName");
    struct
    {
        struct AGPQuestStage* QStage;
        struct FName QLevelFullName;
        struct ULevelStreaming* ReturnValue;
    } Parms{};
    Parms.QStage = (struct AGPQuestStage*)QStage;
    Parms.QLevelFullName = (struct FName)QLevelFullName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPQuestSystem
void UGPQuestSystem::UnloadQuest(struct UObject* WorldContextObject, int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "UnloadQuest");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    this->ProcessEvent(Func, &Parms);
}

void UGPQuestSystem::QuitQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "QuitQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AGPQuest* UGPQuestSystem::LoadQuestInSpecifiedDirWithReturn(struct UObject* WorldContextObject, struct FString QuestDir, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "LoadQuestInSpecifiedDirWithReturn");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString QuestDir;
        int32_t QuestID;
        struct AGPQuestVolume* GPQuestVolume;
        struct AGPQuest* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestDir = (struct FString)QuestDir;
    Parms.QuestID = (int32_t)QuestID;
    Parms.GPQuestVolume = (struct AGPQuestVolume*)GPQuestVolume;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPQuestSystem::LoadQuestInSpecifiedDir(struct UObject* WorldContextObject, struct FString QuestDir, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "LoadQuestInSpecifiedDir");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString QuestDir;
        int32_t QuestID;
        struct AGPQuestVolume* GPQuestVolume;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestDir = (struct FString)QuestDir;
    Parms.QuestID = (int32_t)QuestID;
    Parms.GPQuestVolume = (struct AGPQuestVolume*)GPQuestVolume;
    this->ProcessEvent(Func, &Parms);
}

void UGPQuestSystem::LoadQuestByQuestPathName(struct UObject* WorldContextObject, struct FString QuestPathName, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "LoadQuestByQuestPathName");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString QuestPathName;
        int32_t QuestID;
        struct AGPQuestVolume* GPQuestVolume;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestPathName = (struct FString)QuestPathName;
    Parms.QuestID = (int32_t)QuestID;
    Parms.GPQuestVolume = (struct AGPQuestVolume*)GPQuestVolume;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPQuestSystem::LoadQuest(struct UObject* WorldContextObject, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "LoadQuest");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct AGPQuestVolume* GPQuestVolume;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.GPQuestVolume = (struct AGPQuestVolume*)GPQuestVolume;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPQuestSystem::GotoStage(int32_t QuestID, struct FString StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "GotoStage");
    struct
    {
        int32_t QuestID;
        struct FString StageName;
    } Parms{};
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    this->ProcessEvent(Func, &Parms);
}

void UGPQuestSystem::GotoObjective(int32_t QuestID, struct FString StageName, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "GotoObjective");
    struct
    {
        int32_t QuestID;
        struct FString StageName;
        int32_t objectiveId;
    } Parms{};
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    Parms.objectiveId = (int32_t)objectiveId;
    this->ProcessEvent(Func, &Parms);
}

struct AGPQuest* UGPQuestSystem::GetQuest(int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestSystem", "GetQuest");
    struct
    {
        int32_t QuestID;
        struct AGPQuest* ReturnValue;
    } Parms{};
    Parms.QuestID = (int32_t)QuestID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPQuestUtils
struct AGPQuest* UGPQuestUtils::ToQuest(struct AGPQuestActionContext* QAContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "ToQuest");
    struct
    {
        struct AGPQuestActionContext* QAContext;
        struct AGPQuest* ReturnValue;
    } Parms{};
    Parms.QAContext = (struct AGPQuestActionContext*)QAContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPQuestUtils::IsStandalone(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "IsStandalone");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPQuestUtils::IsServer(struct UObject* WorldContextObject, uint8_t bIncludeStandalone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "IsServer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t bIncludeStandalone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bIncludeStandalone = (uint8_t)bIncludeStandalone;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPQuestUtils::IsPC(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "IsPC");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPQuestUtils::IsEditor(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "IsEditor");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPQuestUtils::IsClient(struct UObject* WorldContextObject, uint8_t bIncludeStandalone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "IsClient");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t bIncludeStandalone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bIncludeStandalone = (uint8_t)bIncludeStandalone;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPQuestUtils::HasLocalPlayer(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "HasLocalPlayer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UGPQuestUtils::GetStagesInQuest(struct UObject* WorldContextObject, int32_t QuestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetStagesInQuest");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPQuestUtils::GetStageName(int32_t QuestID, int32_t StageId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetStageName");
    struct
    {
        int32_t QuestID;
        int32_t StageId;
        struct FString ReturnValue;
    } Parms{};
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageId = (int32_t)StageId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPQuestUtils::GetStageId(struct FString StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetStageId");
    struct
    {
        struct FString StageName;
        int32_t ReturnValue;
    } Parms{};
    Parms.StageName = (struct FString)StageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UGPQuestUtils::GetQuestsInWorld(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetQuestsInWorld");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPQuestUtils::GetObjectivesNumInStage(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetObjectivesNumInStage");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t QuestID;
        struct FString StageName;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuestID = (int32_t)QuestID;
    Parms.StageName = (struct FString)StageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPQuestUtils::GetObjectivesNameInStage(struct AGPQuestStage* StageClass, struct TArray<struct FString>& OutNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetObjectivesNameInStage");
    struct
    {
        struct AGPQuestStage* StageClass;
        struct TArray<struct FString> OutNames;
        int32_t ReturnValue;
    } Parms{};
    Parms.StageClass = (struct AGPQuestStage*)StageClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutNames = Parms.OutNames;
    return Parms.ReturnValue;
}

struct APlayerController* UGPQuestUtils::GetLocalPlayerController(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetLocalPlayerController");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UGPQuestUtils::GetAllQuests()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetAllQuests");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPQuestUtils::GetActorByName(struct UObject* WorldContextObject, struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "GetActorByName");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName Name;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Name = (struct FName)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPQuestUtils::FindFirstActorWithInterface(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, struct IInterface* InterfaceClass, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "FindFirstActorWithInterface");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        struct IInterface* InterfaceClass;
        enum EGPQuestActionScope Scope;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.InterfaceClass = (struct IInterface*)InterfaceClass;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UActorComponent* UGPQuestUtils::FindFirstActorWithComponent(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, struct UActorComponent* ComponentClass, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "FindFirstActorWithComponent");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        struct UActorComponent* ComponentClass;
        enum EGPQuestActionScope Scope;
        struct UActorComponent* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.ComponentClass = (struct UActorComponent*)ComponentClass;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPQuestUtils::FindFirstActor(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "FindFirstActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        enum EGPQuestActionScope Scope;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPQuestStage* UGPQuestUtils::FindCurrentStage(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "FindCurrentStage");
    struct
    {
        struct UObject* WorldContextObject;
        struct AGPQuestStage* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPQuest* UGPQuestUtils::FindCurrentQuest(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "FindCurrentQuest");
    struct
    {
        struct UObject* WorldContextObject;
        struct AGPQuest* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPQuestUtils::FindAllActor(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "FindAllActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FName Tag;
        struct FString Name;
        enum EGPQuestActionScope Scope;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    Parms.Name = (struct FString)Name;
    Parms.Scope = (enum EGPQuestActionScope)Scope;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UGPQuestUtils::EndQuest(struct AGPQuest* Quest, EGPQuestEndReason EndReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPQuestUtils", "EndQuest");
    struct
    {
        struct AGPQuest* Quest;
        enum EGPQuestEndReason EndReason;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.EndReason = (enum EGPQuestEndReason)EndReason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// AGPQuestVolume
void AGPQuestVolume::UpdateQuestVolumeTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "UpdateQuestVolumeTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestVolume::UpdateCylinderSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "UpdateCylinderSize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestVolume::ResetContractCamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "ResetContractCamp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestVolume::OnQuestAreaTriggerEndOverlapped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "OnQuestAreaTriggerEndOverlapped");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestVolume::OnQuestAreaTriggerBeginOverlapped(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "OnQuestAreaTriggerBeginOverlapped");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* Other;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.Other = (struct AActor*)Other;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPQuestVolume::IsRelevancyForConnection(struct AActor* ViewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "IsRelevancyForConnection");
    struct
    {
        struct AActor* ViewTarget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ViewTarget = (struct AActor*)ViewTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString AGPQuestVolume::GetQuestIDString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "GetQuestIDString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuestFullID AGPQuestVolume::GetQuestFullID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "GetQuestFullID");
    struct
    {
        struct FQuestFullID ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPQuestVolume::ChangeContractCamp(int32_t CampId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "ChangeContractCamp");
    struct
    {
        int32_t CampId;
    } Parms{};
    Parms.CampId = (int32_t)CampId;
    this->ProcessEvent(Func, &Parms);
}

void AGPQuestVolume::BP_InitQuestData(struct AGPQuest* InGPQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPQuestVolume", "BP_InitQuestData");
    struct
    {
        struct AGPQuest* InGPQuest;
    } Parms{};
    Parms.InGPQuest = (struct AGPQuest*)InGPQuest;
    this->ProcessEvent(Func, &Parms);
}

// UGPTRPCQuestComponent
void UGPTRPCQuestComponent::ServerReplayStage(struct AGPQuest* Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTRPCQuestComponent", "ServerReplayStage");
    struct
    {
        struct AGPQuest* Quest;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    this->ProcessEvent(Func, &Parms);
}

void UGPTRPCQuestComponent::ServerGotoStage(struct AGPQuest* Quest, struct FString StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTRPCQuestComponent", "ServerGotoStage");
    struct
    {
        struct AGPQuest* Quest;
        struct FString StageName;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.StageName = (struct FString)StageName;
    this->ProcessEvent(Func, &Parms);
}

void UGPTRPCQuestComponent::ServerGotoObjective(struct AGPQuestStage* Stage, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTRPCQuestComponent", "ServerGotoObjective");
    struct
    {
        struct AGPQuestStage* Stage;
        int32_t objectiveId;
    } Parms{};
    Parms.Stage = (struct AGPQuestStage*)Stage;
    Parms.objectiveId = (int32_t)objectiveId;
    this->ProcessEvent(Func, &Parms);
}

void UGPTRPCQuestComponent::ServerBeginQuest(struct AGPQuest* Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTRPCQuestComponent", "ServerBeginQuest");
    struct
    {
        struct AGPQuest* Quest;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    this->ProcessEvent(Func, &Parms);
}

void UGPTRPCQuestComponent::ReplayStage(struct AGPQuest* Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTRPCQuestComponent", "ReplayStage");
    struct
    {
        struct AGPQuest* Quest;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPTRPCQuestComponent::GotoStage(struct AGPQuest* Quest, struct FString StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTRPCQuestComponent", "GotoStage");
    struct
    {
        struct AGPQuest* Quest;
        struct FString StageName;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    Parms.StageName = (struct FString)StageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPTRPCQuestComponent::GotoObjective(struct AGPQuestStage* Stage, int32_t objectiveId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTRPCQuestComponent", "GotoObjective");
    struct
    {
        struct AGPQuestStage* Stage;
        int32_t objectiveId;
    } Parms{};
    Parms.Stage = (struct AGPQuestStage*)Stage;
    Parms.objectiveId = (int32_t)objectiveId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPTRPCQuestComponent::BeginQuest(struct AGPQuest* Quest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTRPCQuestComponent", "BeginQuest");
    struct
    {
        struct AGPQuest* Quest;
    } Parms{};
    Parms.Quest = (struct AGPQuest*)Quest;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
