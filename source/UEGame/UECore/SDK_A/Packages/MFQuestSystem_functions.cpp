#include "MFQuestSystem.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFQuestComponentBase
void UMFQuestComponentBase::InitializeQuestComponent(struct AMFQuestBase* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestComponentBase", "InitializeQuestComponent");
    struct
    {
        struct AMFQuestBase* InOwner;
    } Parms{};
    Parms.InOwner = (struct AMFQuestBase*)InOwner;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestComponentBase::DeactivateQuestComponent(EQuestStatus InResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestComponentBase", "DeactivateQuestComponent");
    struct
    {
        enum EQuestStatus InResult;
    } Parms{};
    Parms.InResult = (enum EQuestStatus)InResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestComponentBase::ActivateQuestComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestComponentBase", "ActivateQuestComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFBPQuestActionComponentBase
void UMFBPQuestActionComponentBase::BP_InitializeQuestComponent(struct AMFQuestBase* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBPQuestActionComponentBase", "BP_InitializeQuestComponent");
    struct
    {
        struct AMFQuestBase* InOwner;
    } Parms{};
    Parms.InOwner = (struct AMFQuestBase*)InOwner;
    this->ProcessEvent(Func, &Parms);
}

void UMFBPQuestActionComponentBase::BP_DeactivateQuestComponent(EQuestStatus InResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBPQuestActionComponentBase", "BP_DeactivateQuestComponent");
    struct
    {
        enum EQuestStatus InResult;
    } Parms{};
    Parms.InResult = (enum EQuestStatus)InResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFBPQuestActionComponentBase::BP_ActivateQuestComponentBP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBPQuestActionComponentBase", "BP_ActivateQuestComponentBP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestActivationComp_TriggerVolume
void UMFQuestActivationComp_TriggerVolume::OnTrigger(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestActivationComp_TriggerVolume", "OnTrigger");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* Other;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        bool bFromSweep;
        struct FHitResult OverlapInfo;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.Other = (struct AActor*)Other;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (bool)bFromSweep;
    Parms.OverlapInfo = (struct FHitResult)OverlapInfo;
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestNode
EQuestNodeStatus UMFQuestNode::TickNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "TickNode");
    struct
    {
        enum EQuestNodeStatus ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFQuestNode::ShouldFailedWhenAndParallelNodeFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "ShouldFailedWhenAndParallelNodeFailed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestNode::SetupPrevConnections(const struct TArray<struct UMFQuestNode*>& InNodeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "SetupPrevConnections");
    struct
    {
        struct TArray<struct UMFQuestNode*> InNodeList;
    } Parms{};
    Parms.InNodeList = (struct TArray<struct UMFQuestNode*>)InNodeList;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNode::SetupNextConnection(struct UMFQuestNode* InNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "SetupNextConnection");
    struct
    {
        struct UMFQuestNode* InNode;
    } Parms{};
    Parms.InNode = (struct UMFQuestNode*)InNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNode::SetForceCheck(bool State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "SetForceCheck");
    struct
    {
        bool State;
    } Parms{};
    Parms.State = (bool)State;
    this->ProcessEvent(Func, &Parms);
}

bool UMFQuestNode::IsMyQuest(struct AMFQuestBase* InQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "IsMyQuest");
    struct
    {
        struct AMFQuestBase* InQuest;
        bool ReturnValue;
    } Parms{};
    Parms.InQuest = (struct AMFQuestBase*)InQuest;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestNode::InitQuestNode(struct AMFQuestBase* InQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "InitQuestNode");
    struct
    {
        struct AMFQuestBase* InQuest;
        enum EQuestNodeConnectionType InType;
        bool InFailedWhenAndParallelNodeFailed;
    } Parms{};
    Parms.InQuest = (struct AMFQuestBase*)InQuest;
    Parms.InType = (enum EQuestNodeConnectionType)InType;
    Parms.InFailedWhenAndParallelNodeFailed = (bool)InFailedWhenAndParallelNodeFailed;
    this->ProcessEvent(Func, &Parms);
}

bool UMFQuestNode::HasPrevConnection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "HasPrevConnection");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestNodeType UMFQuestNode::GetQuestNodeType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "GetQuestNodeType");
    struct
    {
        enum EQuestNodeType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFQuestNode*> UMFQuestNode::GetPrevConnections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "GetPrevConnections");
    struct
    {
        struct TArray<struct UMFQuestNode*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestStatus UMFQuestNode::GetNodeQuestStatus(struct UMFQuestNode* GetNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "GetNodeQuestStatus");
    struct
    {
        struct UMFQuestNode* GetNode;
        enum EQuestStatus ReturnValue;
    } Parms{};
    Parms.GetNode = (struct UMFQuestNode*)GetNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFQuestNode::GetNodeQuestCustomIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "GetNodeQuestCustomIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFQuestNode*> UMFQuestNode::GetNextConnections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "GetNextConnections");
    struct
    {
        struct TArray<struct UMFQuestNode*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFQuestNode::GetForceCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "GetForceCheck");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestNodeConnectionType UMFQuestNode::GetConnectionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "GetConnectionType");
    struct
    {
        enum EQuestNodeConnectionType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestNode::DestroyNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "DestroyNode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNode::DeactivateNode(EQuestStatus InResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "DeactivateNode");
    struct
    {
        enum EQuestStatus InResult;
    } Parms{};
    Parms.InResult = (enum EQuestStatus)InResult;
    this->ProcessEvent(Func, &Parms);
}

bool UMFQuestNode::CheckQuestNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "CheckQuestNode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestNode::CheckPrevConnections(bool& bFail, bool& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "CheckPrevConnections");
    struct
    {
        bool bFail;
        bool bSuccess;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    bFail = Parms.bFail;
    bSuccess = Parms.bSuccess;
}

void UMFQuestNode::ActivateNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNode", "ActivateNode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestAssembleNode
void UMFQuestAssembleNode::GetAffiliateQuestNodes(struct TArray<struct UMFQuestAffiliateNode*>& QuestAffiliateNodeArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestAssembleNode", "GetAffiliateQuestNodes");
    struct
    {
        struct TArray<struct UMFQuestAffiliateNode*> QuestAffiliateNodeArray;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    QuestAffiliateNodeArray = Parms.QuestAffiliateNodeArray;
}

void UMFQuestAssembleNode::AddAffiliateQuestNode(struct UMFQuestAffiliateNode* QuestNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestAssembleNode", "AddAffiliateQuestNode");
    struct
    {
        struct UMFQuestAffiliateNode* QuestNode;
    } Parms{};
    Parms.QuestNode = (struct UMFQuestAffiliateNode*)QuestNode;
    this->ProcessEvent(Func, &Parms);
}

// AMFQuestBase
void AMFQuestBase::ShowLog(struct FString LogStr, bool bImportant)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "ShowLog");
    struct
    {
        struct FString LogStr;
        bool bImportant;
    } Parms{};
    Parms.LogStr = (struct FString)LogStr;
    Parms.bImportant = (bool)bImportant;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetQuestTemplateParams(struct TArray<int32_t>& InQuestTemplateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetQuestTemplateParams");
    struct
    {
        struct TArray<int32_t> InQuestTemplateParams;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InQuestTemplateParams = Parms.InQuestTemplateParams;
}

void AMFQuestBase::SetQuestStatus(EQuestStatus InNewStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetQuestStatus");
    struct
    {
        enum EQuestStatus InNewStatus;
    } Parms{};
    Parms.InNewStatus = (enum EQuestStatus)InNewStatus;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetQuestObjective(struct UMFQuestObjectiveComponentBase* QuestObjective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetQuestObjective");
    struct
    {
        struct UMFQuestObjectiveComponentBase* QuestObjective;
    } Parms{};
    Parms.QuestObjective = (struct UMFQuestObjectiveComponentBase*)QuestObjective;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetQuestFailedType(EQuestFailedType InFailedType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetQuestFailedType");
    struct
    {
        enum EQuestFailedType InFailedType;
    } Parms{};
    Parms.InFailedType = (enum EQuestFailedType)InFailedType;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetMissionStatus(EQuestStatus InNewStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetMissionStatus");
    struct
    {
        enum EQuestStatus InNewStatus;
    } Parms{};
    Parms.InNewStatus = (enum EQuestStatus)InNewStatus;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetMissionCurProgress(int32_t CurProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetMissionCurProgress");
    struct
    {
        int32_t CurProgress;
    } Parms{};
    Parms.CurProgress = (int32_t)CurProgress;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetIsTemplateQuest(bool bIsTemplateQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetIsTemplateQuest");
    struct
    {
        bool bIsTemplateQuest;
    } Parms{};
    Parms.bIsTemplateQuest = (bool)bIsTemplateQuest;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetInGraphID(int32_t InGraphID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetInGraphID");
    struct
    {
        int32_t InGraphID;
    } Parms{};
    Parms.InGraphID = (int32_t)InGraphID;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetCustomIndex(int32_t InIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetCustomIndex");
    struct
    {
        int32_t InIndex;
    } Parms{};
    Parms.InIndex = (int32_t)InIndex;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::SetAffiliate(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "SetAffiliate");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::OnReq_QuestStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "OnReq_QuestStatus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::OnProgressChange(int32_t AddProgress, int32_t CurrpProgress, int32_t MaxProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "OnProgressChange");
    struct
    {
        int32_t AddProgress;
        int32_t CurrpProgress;
        int32_t MaxProgress;
    } Parms{};
    Parms.AddProgress = (int32_t)AddProgress;
    Parms.CurrpProgress = (int32_t)CurrpProgress;
    Parms.MaxProgress = (int32_t)MaxProgress;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::OnObjectiveStateChanged(EQuestStatus NewState, EQuestStatus OldState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "OnObjectiveStateChanged");
    struct
    {
        enum EQuestStatus NewState;
        enum EQuestStatus OldState;
    } Parms{};
    Parms.NewState = (enum EQuestStatus)NewState;
    Parms.OldState = (enum EQuestStatus)OldState;
    this->ProcessEvent(Func, &Parms);
}

bool AMFQuestBase::IsTemplateQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "IsTemplateQuest");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFQuestBase::IsAffiliate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "IsAffiliate");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFQuestBase::IsActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "IsActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AMFQuestBase::GetQuestTemplateParamByIndex(int32_t InParamIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetQuestTemplateParamByIndex");
    struct
    {
        int32_t InParamIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.InParamIndex = (int32_t)InParamIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestStatus AMFQuestBase::GetQuestStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetQuestStatus");
    struct
    {
        enum EQuestStatus ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuestState AMFQuestBase::GetQuestState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetQuestState");
    struct
    {
        struct FQuestState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestObjectiveType AMFQuestBase::GetQuestObjectiveType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetQuestObjectiveType");
    struct
    {
        enum EQuestObjectiveType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFQuestObjectiveComponentBase* AMFQuestBase::GetQuestObjective()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetQuestObjective");
    struct
    {
        struct UMFQuestObjectiveComponentBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFQuestInstigatorComponentBase* AMFQuestBase::GetQuestInstigator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetQuestInstigator");
    struct
    {
        struct UMFQuestInstigatorComponentBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestFailedType AMFQuestBase::GetQuestFailedType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetQuestFailedType");
    struct
    {
        enum EQuestFailedType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AMFQuestBase::GetOldQuestStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetOldQuestStatus");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* AMFQuestBase::GetInstigatorCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetInstigatorCharacter");
    struct
    {
        struct ACharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AMFQuestBase::GetInGraphID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetInGraphID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AMFQuestBase::GetFinishTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetFinishTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AMFQuestBase::GetCustomIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetCustomIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AMFQuestBase::GetCurrQuestStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetCurrQuestStatus");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AMFQuestBase::GetAssembleCustomIndexList(struct TArray<int32_t>& OutList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetAssembleCustomIndexList");
    struct
    {
        struct TArray<int32_t> OutList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutList = Parms.OutList;
}

void AMFQuestBase::GetAffiliateMissionList(struct TArray<struct FString>& OutList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetAffiliateMissionList");
    struct
    {
        struct TArray<struct FString> OutList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutList = Parms.OutList;
}

float AMFQuestBase::GetActivateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "GetActivateTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AMFQuestBase::DeactivateQuest(EQuestStatus InResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "DeactivateQuest");
    struct
    {
        enum EQuestStatus InResult;
    } Parms{};
    Parms.InResult = (enum EQuestStatus)InResult;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::ClientShowLog(bool bImportant, struct FString LogStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "ClientShowLog");
    struct
    {
        bool bImportant;
        struct FString LogStr;
    } Parms{};
    Parms.bImportant = (bool)bImportant;
    Parms.LogStr = (struct FString)LogStr;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::AssignQuestInstigator(struct UMFQuestInstigatorComponentBase* InInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "AssignQuestInstigator");
    struct
    {
        struct UMFQuestInstigatorComponentBase* InInstigator;
    } Parms{};
    Parms.InInstigator = (struct UMFQuestInstigatorComponentBase*)InInstigator;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::AddAssembleCustomIndex(int32_t InCustomIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "AddAssembleCustomIndex");
    struct
    {
        int32_t InCustomIndex;
    } Parms{};
    Parms.InCustomIndex = (int32_t)InCustomIndex;
    this->ProcessEvent(Func, &Parms);
}

void AMFQuestBase::ActivateQuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestBase", "ActivateQuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestCheckNode
void UMFQuestCheckNode::InitCheckQuestNode(bool InSuccessWhenParallelNodeSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestCheckNode", "InitCheckQuestNode");
    struct
    {
        bool InSuccessWhenParallelNodeSuccess;
    } Parms{};
    Parms.InSuccessWhenParallelNodeSuccess = (bool)InSuccessWhenParallelNodeSuccess;
    this->ProcessEvent(Func, &Parms);
}

bool UMFQuestCheckNode::GetSuccessWhenParallelNodeSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestCheckNode", "GetSuccessWhenParallelNodeSuccess");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFQuestConditionComponentBase
void UMFQuestConditionComponentBase::CustomTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestConditionComponentBase", "CustomTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UQuestConditionEffectContainer
void UQuestConditionEffectContainer::OnTriggerPrimaryCondition(const struct TArray<struct FQuestContextPair>& QuestContextList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuestConditionEffectContainer", "OnTriggerPrimaryCondition");
    struct
    {
        struct TArray<struct FQuestContextPair> QuestContextList;
    } Parms{};
    Parms.QuestContextList = (struct TArray<struct FQuestContextPair>)QuestContextList;
    this->ProcessEvent(Func, &Parms);
}

// AMFQuestDistributerBase
void AMFQuestDistributerBase::ShowLog(struct FString LogStr, bool bImportant)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestDistributerBase", "ShowLog");
    struct
    {
        struct FString LogStr;
        bool bImportant;
    } Parms{};
    Parms.LogStr = (struct FString)LogStr;
    Parms.bImportant = (bool)bImportant;
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestEndNode
EQuestStatus UMFQuestEndNode::GetFinalNodeQuestStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestEndNode", "GetFinalNodeQuestStatus");
    struct
    {
        enum EQuestStatus ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFQuestInstigatorComponentBase
bool UMFQuestInstigatorComponentBase::IsObjectiveInstigatorSupported(struct AActor* InQuestInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestInstigatorComponentBase", "IsObjectiveInstigatorSupported");
    struct
    {
        struct AActor* InQuestInstigator;
        bool ReturnValue;
    } Parms{};
    Parms.InQuestInstigator = (struct AActor*)InQuestInstigator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestInstigatorType UMFQuestInstigatorComponentBase::GetQuestInstigatorType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestInstigatorComponentBase", "GetQuestInstigatorType");
    struct
    {
        enum EQuestInstigatorType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestInstigatorComponentBase::ClientSetQuestDistInfos(struct TArray<struct FString> infos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestInstigatorComponentBase", "ClientSetQuestDistInfos");
    struct
    {
        struct TArray<struct FString> infos;
    } Parms{};
    Parms.infos = (struct TArray<struct FString>)infos;
    this->ProcessEvent(Func, &Parms);
}

// AMFQuestManagerActor
void AMFQuestManagerActor::GetQuestNodeGraphFromPC(struct APlayerController* InOwnerPC, struct TArray<struct UMFQuestNodeGraph*>& InGraphList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestManagerActor", "GetQuestNodeGraphFromPC");
    struct
    {
        struct APlayerController* InOwnerPC;
        struct TArray<struct UMFQuestNodeGraph*> InGraphList;
    } Parms{};
    Parms.InOwnerPC = (struct APlayerController*)InOwnerPC;
    this->ProcessEvent(Func, &Parms);
    InGraphList = Parms.InGraphList;
}

struct UMFQuestNodeGraph* AMFQuestManagerActor::CreateNewQuestGraph(struct AController* InOwnerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestManagerActor", "CreateNewQuestGraph");
    struct
    {
        struct AController* InOwnerController;
        struct UMFQuestNodeGraph* ReturnValue;
    } Parms{};
    Parms.InOwnerController = (struct AController*)InOwnerController;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFQuestManagerComponent
struct AMFQuestManagerActor* UMFQuestManagerComponent::GetQuestManagerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestManagerComponent", "GetQuestManagerActor");
    struct
    {
        struct AMFQuestManagerActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFQuestManagerActor* UMFQuestManagerComponent::CreateQuestManagerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestManagerComponent", "CreateQuestManagerActor");
    struct
    {
        struct AMFQuestManagerActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFQuestNodeGraph
void UMFQuestNodeGraph::TickQuestNodeGraph()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "TickQuestNodeGraph");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::SetOwnerController(struct AController* InPC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "SetOwnerController");
    struct
    {
        struct AController* InPC;
    } Parms{};
    Parms.InPC = (struct AController*)InPC;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::SetIsCompleteInOneBattle(bool In)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "SetIsCompleteInOneBattle");
    struct
    {
        bool In;
    } Parms{};
    Parms.In = (bool)In;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::SetIsActTask(bool In)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "SetIsActTask");
    struct
    {
        bool In;
    } Parms{};
    Parms.In = (bool)In;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::SetCustomIndex(int32_t InIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "SetCustomIndex");
    struct
    {
        int32_t InIndex;
    } Parms{};
    Parms.InIndex = (int32_t)InIndex;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::NodeGraphCheck(struct AMFQuestBase* QuestBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "NodeGraphCheck");
    struct
    {
        struct AMFQuestBase* QuestBase;
    } Parms{};
    Parms.QuestBase = (struct AMFQuestBase*)QuestBase;
    this->ProcessEvent(Func, &Parms);
}

struct UMFQuestNode* UMFQuestNodeGraph::GetQuestNodeFromNodeQuest(struct AMFQuestBase* InQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetQuestNodeFromNodeQuest");
    struct
    {
        struct AMFQuestBase* InQuest;
        struct UMFQuestNode* ReturnValue;
    } Parms{};
    Parms.InQuest = (struct AMFQuestBase*)InQuest;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFQuestBase* UMFQuestNodeGraph::GetQuestFromCustomIndex(int32_t InIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetQuestFromCustomIndex");
    struct
    {
        int32_t InIndex;
        struct AMFQuestBase* ReturnValue;
    } Parms{};
    Parms.InIndex = (int32_t)InIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AController* UMFQuestNodeGraph::GetOwnerController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetOwnerController");
    struct
    {
        struct AController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFQuestNodeGraph::GetIsCompleteInOneBattle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetIsCompleteInOneBattle");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFQuestNodeGraph::GetIsActTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetIsActTask");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFQuestEndNode* UMFQuestNodeGraph::GetEndNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetEndNode");
    struct
    {
        struct UMFQuestEndNode* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFQuestNodeGraph::GetCustomIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetCustomIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestNodeGraph::GetAllQuest(struct TArray<struct AMFQuestBase*>& InQuestList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "GetAllQuest");
    struct
    {
        struct TArray<struct AMFQuestBase*> InQuestList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InQuestList = Parms.InQuestList;
}

void UMFQuestNodeGraph::DestroyGraph()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "DestroyGraph");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::DeactivateQuestNodeGraph()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "DeactivateQuestNodeGraph");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::CreateNewQuestNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "CreateNewQuestNode");
    struct
    {
        struct AMFQuestBase* InNewQuest;
        enum EQuestNodeConnectionType InType;
        bool InFailedWhenAndParallelNodeFailed;
    } Parms{};
    Parms.InNewQuest = (struct AMFQuestBase*)InNewQuest;
    Parms.InType = (enum EQuestNodeConnectionType)InType;
    Parms.InFailedWhenAndParallelNodeFailed = (bool)InFailedWhenAndParallelNodeFailed;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::CreateNewQuestCheckNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed, bool InSuccessWhenParallelNodeSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "CreateNewQuestCheckNode");
    struct
    {
        struct AMFQuestBase* InNewQuest;
        enum EQuestNodeConnectionType InType;
        bool InFailedWhenAndParallelNodeFailed;
        bool InSuccessWhenParallelNodeSuccess;
    } Parms{};
    Parms.InNewQuest = (struct AMFQuestBase*)InNewQuest;
    Parms.InType = (enum EQuestNodeConnectionType)InType;
    Parms.InFailedWhenAndParallelNodeFailed = (bool)InFailedWhenAndParallelNodeFailed;
    Parms.InSuccessWhenParallelNodeSuccess = (bool)InSuccessWhenParallelNodeSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::CreateNewQuestAssembleNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "CreateNewQuestAssembleNode");
    struct
    {
        struct AMFQuestBase* InNewQuest;
        enum EQuestNodeConnectionType InType;
        bool InFailedWhenAndParallelNodeFailed;
    } Parms{};
    Parms.InNewQuest = (struct AMFQuestBase*)InNewQuest;
    Parms.InType = (enum EQuestNodeConnectionType)InType;
    Parms.InFailedWhenAndParallelNodeFailed = (bool)InFailedWhenAndParallelNodeFailed;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::CreateNewQuestAffiliateNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "CreateNewQuestAffiliateNode");
    struct
    {
        struct AMFQuestBase* InNewQuest;
        enum EQuestNodeConnectionType InType;
        bool InFailedWhenAndParallelNodeFailed;
    } Parms{};
    Parms.InNewQuest = (struct AMFQuestBase*)InNewQuest;
    Parms.InType = (enum EQuestNodeConnectionType)InType;
    Parms.InFailedWhenAndParallelNodeFailed = (bool)InFailedWhenAndParallelNodeFailed;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::CompleteQuestNodeGraph(EQuestNodeConnectionType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "CompleteQuestNodeGraph");
    struct
    {
        enum EQuestNodeConnectionType InType;
    } Parms{};
    Parms.InType = (enum EQuestNodeConnectionType)InType;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::BuildQuestNodeRelation(struct AMFQuestBase* TargetNodeQuest, struct TArray<struct AMFQuestBase*> PrevNodeQuestList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "BuildQuestNodeRelation");
    struct
    {
        struct AMFQuestBase* TargetNodeQuest;
        struct TArray<struct AMFQuestBase*> PrevNodeQuestList;
    } Parms{};
    Parms.TargetNodeQuest = (struct AMFQuestBase*)TargetNodeQuest;
    Parms.PrevNodeQuestList = (struct TArray<struct AMFQuestBase*>)PrevNodeQuestList;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::BeginGraph()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "BeginGraph");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestNodeGraph::ActivateQuestNodeGraph()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestNodeGraph", "ActivateQuestNodeGraph");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestObjectiveComponentBase
void UMFQuestObjectiveComponentBase::SetQuestCompStatus(EQuestStatus InNewStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "SetQuestCompStatus");
    struct
    {
        enum EQuestStatus InNewStatus;
    } Parms{};
    Parms.InNewStatus = (enum EQuestStatus)InNewStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestObjectiveComponentBase::SetObjectiveProgress(int32_t MaxCount, int32_t CurrCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "SetObjectiveProgress");
    struct
    {
        int32_t MaxCount;
        int32_t CurrCount;
    } Parms{};
    Parms.MaxCount = (int32_t)MaxCount;
    Parms.CurrCount = (int32_t)CurrCount;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestObjectiveComponentBase::SetBringInObjectiveProgress(int32_t MaxCount, int32_t CurrCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "SetBringInObjectiveProgress");
    struct
    {
        int32_t MaxCount;
        int32_t CurrCount;
    } Parms{};
    Parms.MaxCount = (int32_t)MaxCount;
    Parms.CurrCount = (int32_t)CurrCount;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestObjectiveComponentBase::OnQuestProgressedChanged(int32_t ProgressToAdd, int32_t CurrentProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "OnQuestProgressedChanged");
    struct
    {
        int32_t ProgressToAdd;
        int32_t CurrentProgress;
    } Parms{};
    Parms.ProgressToAdd = (int32_t)ProgressToAdd;
    Parms.CurrentProgress = (int32_t)CurrentProgress;
    this->ProcessEvent(Func, &Parms);
}

bool UMFQuestObjectiveComponentBase::IsQuestCompActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "IsQuestCompActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFQuestObjectiveComponentBase::IsFailWhenAchieved()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "IsFailWhenAchieved");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestObjectiveType UMFQuestObjectiveComponentBase::GetQuestObjectiveType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetQuestObjectiveType");
    struct
    {
        enum EQuestObjectiveType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EQuestStatus UMFQuestObjectiveComponentBase::GetQuestCompStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetQuestCompStatus");
    struct
    {
        enum EQuestStatus ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFQuestConditionComponentBase*> UMFQuestObjectiveComponentBase::GetOrConditionList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetOrConditionList");
    struct
    {
        struct TArray<struct UMFQuestConditionComponentBase*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestObjectiveComponentBase::GetObjectiveProgress(int32_t& Out_MaxCount, int32_t& Out_CurrCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetObjectiveProgress");
    struct
    {
        int32_t Out_MaxCount;
        int32_t Out_CurrCount;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Out_MaxCount = Parms.Out_MaxCount;
    Out_CurrCount = Parms.Out_CurrCount;
}

int32_t UMFQuestObjectiveComponentBase::GetMaxObjectiveProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetMaxObjectiveProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFQuestObjectiveComponentBase::GetBringInObjectiveProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetBringInObjectiveProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFQuestConditionComponentBase*> UMFQuestObjectiveComponentBase::GetAndConditionList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetAndConditionList");
    struct
    {
        struct TArray<struct UMFQuestConditionComponentBase*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFQuestObjectiveComponentBase::GetActivationTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "GetActivationTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestObjectiveComponentBase::ClearCurrQuestProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestObjectiveComponentBase", "ClearCurrQuestProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestPrimaryConditionBase
void UMFQuestPrimaryConditionBase::RemoveEventListener()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestPrimaryConditionBase", "RemoveEventListener");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestPrimaryConditionBase::Initialize(struct UQuestConditionEffectContainer* InConditionEffectContainer, struct AMFQuestDistributerBase* InQuestDistributer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestPrimaryConditionBase", "Initialize");
    struct
    {
        struct UQuestConditionEffectContainer* InConditionEffectContainer;
        struct AMFQuestDistributerBase* InQuestDistributer;
    } Parms{};
    Parms.InConditionEffectContainer = (struct UQuestConditionEffectContainer*)InConditionEffectContainer;
    Parms.InQuestDistributer = (struct AMFQuestDistributerBase*)InQuestDistributer;
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestPrimaryConditionBase::AddEventListener()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestPrimaryConditionBase", "AddEventListener");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestPrimaryCondition_IntMapChanged
void UMFQuestPrimaryCondition_IntMapChanged::OnBlackboardIntMapChanged(struct AActor* ObjectiveInstigator, struct AActor* TargetActor, const struct FGameplayTag& Key, int32_t CurrentValue, int32_t PreviousValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestPrimaryCondition_IntMapChanged", "OnBlackboardIntMapChanged");
    struct
    {
        struct AActor* ObjectiveInstigator;
        struct AActor* TargetActor;
        struct FGameplayTag Key;
        int32_t CurrentValue;
        int32_t PreviousValue;
    } Parms{};
    Parms.ObjectiveInstigator = (struct AActor*)ObjectiveInstigator;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.Key = (struct FGameplayTag)Key;
    Parms.CurrentValue = (int32_t)CurrentValue;
    Parms.PreviousValue = (int32_t)PreviousValue;
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestPrimaryCondition_ObjArrMapChanged
void UMFQuestPrimaryCondition_ObjArrMapChanged::OnBlackboardObjectArrayMapChanged(struct AActor* TargetActor, const struct FGameplayTag& Key, const struct TArray<struct UObject*>& ObjectArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestPrimaryCondition_ObjArrMapChanged", "OnBlackboardObjectArrayMapChanged");
    struct
    {
        struct AActor* TargetActor;
        struct FGameplayTag Key;
        struct TArray<struct UObject*> ObjectArray;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.Key = (struct FGameplayTag)Key;
    Parms.ObjectArray = (struct TArray<struct UObject*>)ObjectArray;
    this->ProcessEvent(Func, &Parms);
}

// UMFQuestProgressComponentBase
void UMFQuestProgressComponentBase::OnReq_MaxProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestProgressComponentBase", "OnReq_MaxProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFQuestProgressComponentBase::OnReq_CurrProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestProgressComponentBase", "OnReq_CurrProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFQuestProgressComponentBase::IsQuestProgressFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQuestProgressComponentBase", "IsQuestProgressFinished");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFQuestStatics
void UMFQuestStatics::RunQuest(struct AMFQuestBase* InQuest, struct AActor* InInsitigator, bool bGiveUpOldQuest, struct FLatentActionInfo LatentInfo, ERunQuestResult& RunResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQuestStatics", "RunQuest");
    struct
    {
        struct AMFQuestBase* InQuest;
        struct AActor* InInsitigator;
        bool bGiveUpOldQuest;
        struct FLatentActionInfo LatentInfo;
        enum ERunQuestResult RunResult;
    } Parms{};
    Parms.InQuest = (struct AMFQuestBase*)InQuest;
    Parms.InInsitigator = (struct AActor*)InInsitigator;
    Parms.bGiveUpOldQuest = (bool)bGiveUpOldQuest;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    RunResult = Parms.RunResult;
}

void UMFQuestStatics::ResetQuest(struct AMFQuestBase* InQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQuestStatics", "ResetQuest");
    struct
    {
        struct AMFQuestBase* InQuest;
    } Parms{};
    Parms.InQuest = (struct AMFQuestBase*)InQuest;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UMFQuestManagerComponent* UMFQuestStatics::GetQuestManagerComponent(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQuestStatics", "GetQuestManagerComponent");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMFQuestManagerComponent* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFQuestManagerActor* UMFQuestStatics::GetQuestManagerActor(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQuestStatics", "GetQuestManagerActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AMFQuestManagerActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFQuestStatics::GetCompareResult(int64_t CheckNum, ENumberCompareType CompareType, int64_t Value1, int64_t Value2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQuestStatics", "GetCompareResult");
    struct
    {
        int64_t CheckNum;
        enum ENumberCompareType CompareType;
        int64_t Value1;
        int64_t Value2;
        bool ReturnValue;
    } Parms{};
    Parms.CheckNum = (int64_t)CheckNum;
    Parms.CompareType = (enum ENumberCompareType)CompareType;
    Parms.Value1 = (int64_t)Value1;
    Parms.Value2 = (int64_t)Value2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFQuestBase* UMFQuestStatics::CreateNewQuestFromClass(struct UObject* WorldContextObject, struct AMFQuestBase* InQuestClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQuestStatics", "CreateNewQuestFromClass");
    struct
    {
        struct UObject* WorldContextObject;
        struct AMFQuestBase* InQuestClass;
        struct AMFQuestBase* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InQuestClass = (struct AMFQuestBase*)InQuestClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQuestStatics::AssignQuestInstigator(struct AMFQuestBase* InQuest, struct AActor* InInstigator, bool bGiveUpOldQuest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQuestStatics", "AssignQuestInstigator");
    struct
    {
        struct AMFQuestBase* InQuest;
        struct AActor* InInstigator;
        bool bGiveUpOldQuest;
    } Parms{};
    Parms.InQuest = (struct AMFQuestBase*)InQuest;
    Parms.InInstigator = (struct AActor*)InInstigator;
    Parms.bGiveUpOldQuest = (bool)bGiveUpOldQuest;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
