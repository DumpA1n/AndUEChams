#include "MFMission.hpp"
#include "Engine.hpp"
#include "MFGlobalEventTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFMissionNode
bool UMFMissionNode::ShouldListener(const struct FMFGlobalEventTag& InEventTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "ShouldListener");
    struct
    {
        struct FMFGlobalEventTag InEventTag;
        bool ReturnValue;
    } Parms{};
    Parms.InEventTag = (struct FMFGlobalEventTag)InEventTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionNode::OnMissionStatusChanged(struct UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "OnMissionStatusChanged");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus NewStatus;
        enum EMissionStatus OldStatus;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.NewStatus = (enum EMissionStatus)NewStatus;
    Parms.OldStatus = (enum EMissionStatus)OldStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionNode::OnMissionProgressChanged(struct UMFMissionFlowComponent* InInstigator, int32_t NewProgress, int32_t OldProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "OnMissionProgressChanged");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        int32_t NewProgress;
        int32_t OldProgress;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.NewProgress = (int32_t)NewProgress;
    Parms.OldProgress = (int32_t)OldProgress;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionNode::InitializeNode(struct UMFMissionFlowNode* InNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "InitializeNode");
    struct
    {
        struct UMFMissionFlowNode* InNode;
    } Parms{};
    Parms.InNode = (struct UMFMissionFlowNode*)InNode;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFMissionNode::GetMissionName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "GetMissionName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionNode::GetMissionIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "GetMissionIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFMissionNode::GetMissionFlowNodeInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "GetMissionFlowNodeInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlowNode* UMFMissionNode::GetMissionFlowNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "GetMissionFlowNode");
    struct
    {
        struct UMFMissionFlowNode* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFMissionNode::GetMissionFlowName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "GetMissionFlowName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionNode::GetMissionFlowIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "GetMissionFlowIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlow* UMFMissionNode::GetMissionFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "GetMissionFlow");
    struct
    {
        struct UMFMissionFlow* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionNode::ExecuteNode(struct UMFMissionFlowComponent* InInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "ExecuteNode");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionNode::DestroyNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "DestroyNode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionNode::DeactivateNode(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "DeactivateNode");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus InStatus;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.InStatus = (enum EMissionStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionNode::ActivateNode(struct UMFMissionFlowComponent* InInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionNode", "ActivateNode");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    this->ProcessEvent(Func, &Parms);
}

// UMFMissionFlow
void UMFMissionFlow::SetVariableAsset(struct UMFMissionFlowVariableData* NewAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "SetVariableAsset");
    struct
    {
        struct UMFMissionFlowVariableData* NewAsset;
    } Parms{};
    Parms.NewAsset = (struct UMFMissionFlowVariableData*)NewAsset;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::SetStartNode(struct UMFMissionFlowNode_Start* InStartNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "SetStartNode");
    struct
    {
        struct UMFMissionFlowNode_Start* InStartNode;
    } Parms{};
    Parms.InStartNode = (struct UMFMissionFlowNode_Start*)InStartNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::SetMissionFlowName(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "SetMissionFlowName");
    struct
    {
        struct FString InName;
    } Parms{};
    Parms.InName = (struct FString)InName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::SetEndNode(struct UMFMissionFlowNode_End* InEndNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "SetEndNode");
    struct
    {
        struct UMFMissionFlowNode_End* InEndNode;
    } Parms{};
    Parms.InEndNode = (struct UMFMissionFlowNode_End*)InEndNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::SetDataType(EMissionDataType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "SetDataType");
    struct
    {
        enum EMissionDataType InType;
    } Parms{};
    Parms.InType = (enum EMissionDataType)InType;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::SetCustomName(bool bFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "SetCustomName");
    struct
    {
        bool bFlag;
    } Parms{};
    Parms.bFlag = (bool)bFlag;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::ResetNodeList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "ResetNodeList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::OnMissionFlowStatusChange(struct UMFMissionFlowComponent* InInstigator, EMissionStatus InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "OnMissionFlowStatusChange");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus InStatus;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.InStatus = (enum EMissionStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMissionFlow::IsValidMissionFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "IsValidMissionFlow");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlow::IsCustomName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "IsCustomName");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlow::InitializeMissionFlow(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "InitializeMissionFlow");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
}

struct UMFMissionFlowNode_Start* UMFMissionFlow::GetStartNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetStartNode");
    struct
    {
        struct UMFMissionFlowNode_Start* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFMissionFlowNode*> UMFMissionFlow::GetNodeList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetNodeList");
    struct
    {
        struct TArray<struct UMFMissionFlowNode*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlowNode* UMFMissionFlow::GetMissionFlowNode(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetMissionFlowNode");
    struct
    {
        struct FString InName;
        struct UMFMissionFlowNode* ReturnValue;
    } Parms{};
    Parms.InName = (struct FString)InName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFMissionFlow::GetMissionFlowName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetMissionFlowName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionFlow::GetMissionFlowID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetMissionFlowID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionFlow::GetLoopTimes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetLoopTimes");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlowNode_End* UMFMissionFlow::GetEndNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetEndNode");
    struct
    {
        struct UMFMissionFlowNode_End* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionDataType UMFMissionFlow::GetDataType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "GetDataType");
    struct
    {
        enum EMissionDataType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlow::DestroyFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "DestroyFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlow::AddNode(struct UMFMissionFlowNode* InNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlow", "AddNode");
    struct
    {
        struct UMFMissionFlowNode* InNode;
    } Parms{};
    Parms.InNode = (struct UMFMissionFlowNode*)InNode;
    this->ProcessEvent(Func, &Parms);
}

// UMFMissionFlowNode
void UMFMissionFlowNode::UnRegisterInstigator(struct UMFMissionFlowComponent* InInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "UnRegisterInstigator");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::SetParentNode(struct UMFMissionFlowNode* InParentNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "SetParentNode");
    struct
    {
        struct UMFMissionFlowNode* InParentNode;
    } Parms{};
    Parms.InParentNode = (struct UMFMissionFlowNode*)InParentNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::SetObjective(struct UMFMissionObjective* InObjective)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "SetObjective");
    struct
    {
        struct UMFMissionObjective* InObjective;
    } Parms{};
    Parms.InObjective = (struct UMFMissionObjective*)InObjective;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::SetMissionName(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "SetMissionName");
    struct
    {
        struct FString InName;
    } Parms{};
    Parms.InName = (struct FString)InName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::SetCustomName(bool bFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "SetCustomName");
    struct
    {
        bool bFlag;
    } Parms{};
    Parms.bFlag = (bool)bFlag;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::RegisterInstigator(struct UMFMissionFlowComponent* InInstigator, bool bReplicate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "RegisterInstigator");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        bool bReplicate;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.bReplicate = (bool)bReplicate;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::OnMissionStatusChanged(struct UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "OnMissionStatusChanged");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus NewStatus;
        enum EMissionStatus OldStatus;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.NewStatus = (enum EMissionStatus)NewStatus;
    Parms.OldStatus = (enum EMissionStatus)OldStatus;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMissionFlowNode::IsValidMission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "IsValidMission");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowNode::IsCustomName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "IsCustomName");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowNode::HasPrevConnection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "HasPrevConnection");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlow* UMFMissionFlowNode::GetVariableOwnedMissionFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetVariableOwnedMissionFlow");
    struct
    {
        struct UMFMissionFlow* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFMissionFlowNode*> UMFMissionFlowNode::GetSucceedConnections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetSucceedConnections");
    struct
    {
        struct TArray<struct UMFMissionFlowNode*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFMissionFlowNode*> UMFMissionFlowNode::GetPrevConnections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetPrevConnections");
    struct
    {
        struct TArray<struct UMFMissionFlowNode*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlowNode* UMFMissionFlowNode::GetParentNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetParentNode");
    struct
    {
        struct UMFMissionFlowNode* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlow* UMFMissionFlowNode::GetOwnMissionFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetOwnMissionFlow");
    struct
    {
        struct UMFMissionFlow* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMissionFlowOutPuts> UMFMissionFlowNode::GetOutPutList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetOutPutList");
    struct
    {
        struct TArray<struct FMissionFlowOutPuts> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionObjective* UMFMissionFlowNode::GetObjective()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetObjective");
    struct
    {
        struct UMFMissionObjective* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionStatus UMFMissionFlowNode::GetNodeMissionStatus(struct UMFMissionFlowComponent* InInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetNodeMissionStatus");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus ReturnValue;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFMissionFlowNode::GetMissionName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetMissionName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFMissionFlowNode::GetMissionFlowNodeInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetMissionFlowNodeInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFMissionFlowNode::GetMissionFlowName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetMissionFlowName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlow* UMFMissionFlowNode::GetMissionFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetMissionFlow");
    struct
    {
        struct UMFMissionFlow* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UMFMissionFlowNode*> UMFMissionFlowNode::GetFailedConnections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetFailedConnections");
    struct
    {
        struct TArray<struct UMFMissionFlowNode*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionDataType UMFMissionFlowNode::GetDataType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "GetDataType");
    struct
    {
        enum EMissionDataType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowNode::ExecuteNode(struct UMFMissionFlowComponent* InInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "ExecuteNode");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        bool ReturnValue;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowNode::EnableDeactivatePrev(struct UMFMissionFlowComponent* InInstigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "EnableDeactivatePrev");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        bool ReturnValue;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowNode::EnableActivate(struct UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "EnableActivate");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus ActivatorStatus;
        bool ReturnValue;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.ActivatorStatus = (enum EMissionStatus)ActivatorStatus;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlowNode::DestroyNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "DestroyNode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::DeactivatePrevNode(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "DeactivatePrevNode");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus InMissionStatus;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.InMissionStatus = (enum EMissionStatus)InMissionStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::DeactivatePrevConnections(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus, const struct TArray<struct UMFMissionFlowNode*>& PrevNodeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "DeactivatePrevConnections");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus InMissionStatus;
        struct TArray<struct UMFMissionFlowNode*> PrevNodeList;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.InMissionStatus = (enum EMissionStatus)InMissionStatus;
    Parms.PrevNodeList = (struct TArray<struct UMFMissionFlowNode*>)PrevNodeList;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::DeactivateNode(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "DeactivateNode");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus InMissionStatus;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.InMissionStatus = (enum EMissionStatus)InMissionStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::DeactivateNextConnections(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus, const struct TArray<struct UMFMissionFlowNode*>& NextNodeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "DeactivateNextConnections");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus InMissionStatus;
        struct TArray<struct UMFMissionFlowNode*> NextNodeList;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.InMissionStatus = (enum EMissionStatus)InMissionStatus;
    Parms.NextNodeList = (struct TArray<struct UMFMissionFlowNode*>)NextNodeList;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::AddPrevConnection(struct UMFMissionFlowNode* InNode, uint8_t InConnectionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "AddPrevConnection");
    struct
    {
        struct UMFMissionFlowNode* InNode;
        uint8_t InConnectionType;
    } Parms{};
    Parms.InNode = (struct UMFMissionFlowNode*)InNode;
    Parms.InConnectionType = (uint8_t)InConnectionType;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::AddNextConnection(struct UMFMissionFlowNode* InNode, uint8_t InConnectionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "AddNextConnection");
    struct
    {
        struct UMFMissionFlowNode* InNode;
        uint8_t InConnectionType;
    } Parms{};
    Parms.InNode = (struct UMFMissionFlowNode*)InNode;
    Parms.InConnectionType = (uint8_t)InConnectionType;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::ActivateNode(struct UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "ActivateNode");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus ActivatorStatus;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.ActivatorStatus = (enum EMissionStatus)ActivatorStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode::ActivateNextConnections(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus, const struct TArray<struct UMFMissionFlowNode*>& NextNodeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode", "ActivateNextConnections");
    struct
    {
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus InMissionStatus;
        struct TArray<struct UMFMissionFlowNode*> NextNodeList;
    } Parms{};
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.InMissionStatus = (enum EMissionStatus)InMissionStatus;
    Parms.NextNodeList = (struct TArray<struct UMFMissionFlowNode*>)NextNodeList;
    this->ProcessEvent(Func, &Parms);
}

// UMFMissionDataComponent
struct FMFMissionReplicateDataNetItem UMFMissionDataComponent::TryGetRefMissionReplicateDataByName(struct FString InMissionNodeName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "TryGetRefMissionReplicateDataByName");
    struct
    {
        struct FString InMissionNodeName;
        struct FMFMissionReplicateDataNetItem ReturnValue;
    } Parms{};
    Parms.InMissionNodeName = (struct FString)InMissionNodeName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionReplicateDataNetItem UMFMissionDataComponent::TryGetRefMissionReplicateData(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "TryGetRefMissionReplicateData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct FMFMissionReplicateDataNetItem ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowReplicateDataNetItem UMFMissionDataComponent::TryGetRefMissionFlowReplicateDataByName(struct FString InMissionFlowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "TryGetRefMissionFlowReplicateDataByName");
    struct
    {
        struct FString InMissionFlowName;
        struct FMFMissionFlowReplicateDataNetItem ReturnValue;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowReplicateDataNetItem UMFMissionDataComponent::TryGetRefMissionFlowReplicateData(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "TryGetRefMissionFlowReplicateData");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        struct FMFMissionFlowReplicateDataNetItem ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionDataComponent::SetMissionReplicateValid(struct FString InMissionName, bool bValid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "SetMissionReplicateValid");
    struct
    {
        struct FString InMissionName;
        bool bValid;
    } Parms{};
    Parms.InMissionName = (struct FString)InMissionName;
    Parms.bValid = (bool)bValid;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::SetMissionReplicateStatus(struct FString InMissionName, int32_t InNewStatus, int32_t InOldStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "SetMissionReplicateStatus");
    struct
    {
        struct FString InMissionName;
        int32_t InNewStatus;
        int32_t InOldStatus;
    } Parms{};
    Parms.InMissionName = (struct FString)InMissionName;
    Parms.InNewStatus = (int32_t)InNewStatus;
    Parms.InOldStatus = (int32_t)InOldStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::SetMissionReplicateRemainTime(struct FString InMissionName, float InRemainTime, float InRemainTimeUpdateServerTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "SetMissionReplicateRemainTime");
    struct
    {
        struct FString InMissionName;
        float InRemainTime;
        float InRemainTimeUpdateServerTime;
    } Parms{};
    Parms.InMissionName = (struct FString)InMissionName;
    Parms.InRemainTime = (float)InRemainTime;
    Parms.InRemainTimeUpdateServerTime = (float)InRemainTimeUpdateServerTime;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::SetMissionReplicateCurProgress(struct FString InMissionName, int32_t InPorgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "SetMissionReplicateCurProgress");
    struct
    {
        struct FString InMissionName;
        int32_t InPorgress;
    } Parms{};
    Parms.InMissionName = (struct FString)InMissionName;
    Parms.InPorgress = (int32_t)InPorgress;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::SetMissionFlowReplicateStatusChangeTime(struct FString InMissionFlowName, int32_t InTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "SetMissionFlowReplicateStatusChangeTime");
    struct
    {
        struct FString InMissionFlowName;
        int32_t InTime;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    Parms.InTime = (int32_t)InTime;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::SetMissionFlowReplicateStatus(struct FString InMissionFlowName, int32_t InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "SetMissionFlowReplicateStatus");
    struct
    {
        struct FString InMissionFlowName;
        int32_t InStatus;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    Parms.InStatus = (int32_t)InStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::SetMissionFlowReplicateBeforeState(struct FString InMissionFlowName, bool bBeforeState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "SetMissionFlowReplicateBeforeState");
    struct
    {
        struct FString InMissionFlowName;
        bool bBeforeState;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    Parms.bBeforeState = (bool)bBeforeState;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::ResetMissionReplicateData(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "ResetMissionReplicateData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::ResetMissionFlowReplicateData(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "ResetMissionFlowReplicateData");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::ResetMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "ResetMissionFlowNodeInstanceData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::ResetMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "ResetMissionFlowInstanceData");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::NotifyMissionReplicateDataChanged(EMFMissionDataChangeType InChangeType, struct FMFMissionReplicateData InMissionReplicateData, struct ACharacter* InSharerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "NotifyMissionReplicateDataChanged");
    struct
    {
        enum EMFMissionDataChangeType InChangeType;
        struct FMFMissionReplicateData InMissionReplicateData;
        struct ACharacter* InSharerCharacter;
    } Parms{};
    Parms.InChangeType = (enum EMFMissionDataChangeType)InChangeType;
    Parms.InMissionReplicateData = (struct FMFMissionReplicateData)InMissionReplicateData;
    Parms.InSharerCharacter = (struct ACharacter*)InSharerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::NotifyMissionInstanceDataChanged(EMFMissionDataChangeType InChangeType, struct FMFMissionFlowNodeInstanceData InMissionInstanceData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "NotifyMissionInstanceDataChanged");
    struct
    {
        enum EMFMissionDataChangeType InChangeType;
        struct FMFMissionFlowNodeInstanceData InMissionInstanceData;
    } Parms{};
    Parms.InChangeType = (enum EMFMissionDataChangeType)InChangeType;
    Parms.InMissionInstanceData = (struct FMFMissionFlowNodeInstanceData)InMissionInstanceData;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::NotifyMissionFlowReplicateDataChanged(EMFMissionDataChangeType InChangeType, struct FMFMissionFlowReplicateData InMissionFlowReplicateData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "NotifyMissionFlowReplicateDataChanged");
    struct
    {
        enum EMFMissionDataChangeType InChangeType;
        struct FMFMissionFlowReplicateData InMissionFlowReplicateData;
    } Parms{};
    Parms.InChangeType = (enum EMFMissionDataChangeType)InChangeType;
    Parms.InMissionFlowReplicateData = (struct FMFMissionFlowReplicateData)InMissionFlowReplicateData;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::InitQuestReplicateData(struct FString InMissionName, int32_t InCurPorgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "InitQuestReplicateData");
    struct
    {
        struct FString InMissionName;
        int32_t InCurPorgress;
    } Parms{};
    Parms.InMissionName = (struct FString)InMissionName;
    Parms.InCurPorgress = (int32_t)InCurPorgress;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::InitMissionReplicateData(struct UMFMissionFlowNode* InMissionFlowNode, struct FMFMissionFlowNodeInstanceData& NodeInstanceData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "InitMissionReplicateData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct FMFMissionFlowNodeInstanceData NodeInstanceData;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    NodeInstanceData = Parms.NodeInstanceData;
}

void UMFMissionDataComponent::InitMissionFlowReplicateData(struct UMFMissionFlow* InMissionFlow, const struct FMFMissionFlowInstanceData& MissionFlowInstanceData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "InitMissionFlowReplicateData");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        struct FMFMissionFlowInstanceData MissionFlowInstanceData;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.MissionFlowInstanceData = (struct FMFMissionFlowInstanceData)MissionFlowInstanceData;
    this->ProcessEvent(Func, &Parms);
}

struct FMFMissionFlowNodeInstanceData UMFMissionDataComponent::GetRefMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetRefMissionFlowNodeInstanceData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct FMFMissionFlowNodeInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowInstanceData UMFMissionDataComponent::GetRefMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetRefMissionFlowInstanceData");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        struct FMFMissionFlowInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionDataComponent::GetMissionReplicateDatasByStatus(struct FString InMissionFlowName, const struct TArray<EMissionStatus>& InStatusList, struct TArray<struct FMFMissionReplicateData>& OutDataList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetMissionReplicateDatasByStatus");
    struct
    {
        struct FString InMissionFlowName;
        struct TArray<EMissionStatus> InStatusList;
        struct TArray<struct FMFMissionReplicateData> OutDataList;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    Parms.InStatusList = (struct TArray<EMissionStatus>)InStatusList;
    this->ProcessEvent(Func, &Parms);
    OutDataList = Parms.OutDataList;
}

void UMFMissionDataComponent::GetMissionReplicateDatas(struct FString InMissionFlowName, struct TArray<struct FMFMissionReplicateData>& OutDataList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetMissionReplicateDatas");
    struct
    {
        struct FString InMissionFlowName;
        struct TArray<struct FMFMissionReplicateData> OutDataList;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    OutDataList = Parms.OutDataList;
}

struct FMFMissionReplicateData UMFMissionDataComponent::GetMissionReplicateData(struct FString InMissionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetMissionReplicateData");
    struct
    {
        struct FString InMissionName;
        struct FMFMissionReplicateData ReturnValue;
    } Parms{};
    Parms.InMissionName = (struct FString)InMissionName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowReplicateData UMFMissionDataComponent::GetMissionFlowReplicateData(struct FString InMissionFlowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetMissionFlowReplicateData");
    struct
    {
        struct FString InMissionFlowName;
        struct FMFMissionFlowReplicateData ReturnValue;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowNodeInstanceData UMFMissionDataComponent::GetMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetMissionFlowNodeInstanceData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct FMFMissionFlowNodeInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowInstanceData UMFMissionDataComponent::GetMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetMissionFlowInstanceData");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        struct FMFMissionFlowInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionDataComponent::GetAllMissionFlowReplicateDatas(struct TArray<struct FMFMissionFlowReplicateData>& OutMissionFlowReplicateDatas)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "GetAllMissionFlowReplicateDatas");
    struct
    {
        struct TArray<struct FMFMissionFlowReplicateData> OutMissionFlowReplicateDatas;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutMissionFlowReplicateDatas = Parms.OutMissionFlowReplicateDatas;
}

void UMFMissionDataComponent::AddMissionReplicateData(struct FMFMissionReplicateData& InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "AddMissionReplicateData");
    struct
    {
        struct FMFMissionReplicateData InData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InData = Parms.InData;
}

void UMFMissionDataComponent::AddMissionReplicateAffiliateIndex(struct FString InAssembleMissionName, struct FString InAffiliateMissionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "AddMissionReplicateAffiliateIndex");
    struct
    {
        struct FString InAssembleMissionName;
        struct FString InAffiliateMissionName;
    } Parms{};
    Parms.InAssembleMissionName = (struct FString)InAssembleMissionName;
    Parms.InAffiliateMissionName = (struct FString)InAffiliateMissionName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionDataComponent::AddMissionFlowReplicateData(struct FMFMissionFlowReplicateData& InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "AddMissionFlowReplicateData");
    struct
    {
        struct FMFMissionFlowReplicateData InData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InData = Parms.InData;
}

struct FMFMissionFlowNodeInstanceData UMFMissionDataComponent::Add_GetRefMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "Add_GetRefMissionFlowNodeInstanceData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct FMFMissionFlowNodeInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowInstanceData UMFMissionDataComponent::Add_GetRefMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataComponent", "Add_GetRefMissionFlowInstanceData");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        struct FMFMissionFlowInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IMFMissionDataInterface
struct UMFMissionDataComponent* IMFMissionDataInterface::GetMissionDataComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataInterface", "GetMissionDataComponent");
    struct
    {
        struct UMFMissionDataComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionDataComponent* IMFMissionDataInterface::CreateMissionDataComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionDataInterface", "CreateMissionDataComponent");
    struct
    {
        struct UMFMissionDataComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMissionFlowComponent
void UMFMissionFlowComponent::UpdateLastTriggerCharacter(struct UMFMissionFlowNode* InMissionFlowNode, struct ACharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "UpdateLastTriggerCharacter");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct ACharacter* InCharacter;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InCharacter = (struct ACharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::StopMissionFlow(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "StopMissionFlow");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::StartMissionFlow(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "StartMissionFlow");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetNodeStatus(struct UMFMissionFlowNode* InMissionFlowNode, EMissionFlowNodeStatus InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetNodeStatus");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionFlowNodeStatus InStatus;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InStatus = (enum EMissionFlowNodeStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionRemainTime(struct UMFMissionFlowNode* InMissionFlowNode, float InRemainTime, float InRemainTimeUpdateServerTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionRemainTime");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        float InRemainTime;
        float InRemainTimeUpdateServerTime;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InRemainTime = (float)InRemainTime;
    Parms.InRemainTimeUpdateServerTime = (float)InRemainTimeUpdateServerTime;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionHasTryInteract(struct UMFMissionFlowNode* InMissionFlowNode, bool bHasTry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionHasTryInteract");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        bool bHasTry;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.bHasTry = (bool)bHasTry;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionFlowLoopExit(struct UMFMissionFlow* InMissionFlow, bool bLoopExit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionFlowLoopExit");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        bool bLoopExit;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.bLoopExit = (bool)bLoopExit;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionFlowLoopCount(struct UMFMissionFlow* InMissionFlow, int32_t InLoopCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionFlowLoopCount");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        int32_t InLoopCount;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.InLoopCount = (int32_t)InLoopCount;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionFlowLastTriggerCharacter(struct UMFMissionFlow* InMissionFlow, struct ACharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionFlowLastTriggerCharacter");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        struct ACharacter* InCharacter;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.InCharacter = (struct ACharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionFlowBeforeState(struct UMFMissionFlow* InMissionFlow, bool bBeforeState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionFlowBeforeState");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        bool bBeforeState;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.bBeforeState = (bool)bBeforeState;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionFinishTime(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionFinishTime");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionFailedType(struct UMFMissionFlowNode* InMissionFlowNode, EMissionFailedType FailedType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionFailedType");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionFailedType FailedType;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.FailedType = (enum EMissionFailedType)FailedType;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetMissionActivationTime(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetMissionActivationTime");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::SetInstigatorType(EMissionDataType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "SetInstigatorType");
    struct
    {
        enum EMissionDataType InType;
    } Parms{};
    Parms.InType = (enum EMissionDataType)InType;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFMissionFlowComponent::ResetMissionProgress(struct UMFMissionFlowNode* InMissionFlowNode, struct ACharacter* InSharerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "ResetMissionProgress");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct ACharacter* InSharerCharacter;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InSharerCharacter = (struct ACharacter*)InSharerCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlowComponent::ResetMissionFlow(struct UMFMissionFlow* InMissionFlow, bool bStartImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "ResetMissionFlow");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        bool bStartImmediately;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.bStartImmediately = (bool)bStartImmediately;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::RegisterMissionFlow(struct UMFMissionFlow* InMissionFlow, bool bReplicate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "RegisterMissionFlow");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        bool bReplicate;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.bReplicate = (bool)bReplicate;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::OnMissionStatusChanged(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus, EMissionStatus InOldStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "OnMissionStatusChanged");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionStatus InStatus;
        enum EMissionStatus InOldStatus;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InStatus = (enum EMissionStatus)InStatus;
    Parms.InOldStatus = (enum EMissionStatus)InOldStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::OnMissionFlowStatusChange(struct UMFMissionFlow* InMissionFlow, EMissionStatus InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "OnMissionFlowStatusChange");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        enum EMissionStatus InStatus;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.InStatus = (enum EMissionStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMissionFlowComponent::IsReachEndNotComplete(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "IsReachEndNotComplete");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        bool ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowComponent::IsMissionFlowLoopExit(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "IsMissionFlowLoopExit");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        bool ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowComponent::IsFailWhenAchieved(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "IsFailWhenAchieved");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        bool ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionFlowComponent::InitMissionEndProgress(struct UMFMissionFlowNode* InMissionFlowNode, int32_t InPorgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "InitMissionEndProgress");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        int32_t InPorgress;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InPorgress = (int32_t)InPorgress;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionFlowComponent::InitMissionCurProgress(struct UMFMissionFlowNode* InMissionFlowNode, int32_t InPorgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "InitMissionCurProgress");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        int32_t InPorgress;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InPorgress = (int32_t)InPorgress;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionFlowNodeStatus UMFMissionFlowComponent::GetNodeStatus(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetNodeStatus");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionFlowNodeStatus ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionStatus UMFMissionFlowComponent::GetMissionStatus(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionStatus");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionStatus ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlowComponent::GetMissionReplicateDatasByStatus(struct FString InMissionFlowName, const struct TArray<EMissionStatus>& InStatusList, struct TArray<struct FMFMissionReplicateData>& OutDataList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionReplicateDatasByStatus");
    struct
    {
        struct FString InMissionFlowName;
        struct TArray<EMissionStatus> InStatusList;
        struct TArray<struct FMFMissionReplicateData> OutDataList;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    Parms.InStatusList = (struct TArray<EMissionStatus>)InStatusList;
    this->ProcessEvent(Func, &Parms);
    OutDataList = Parms.OutDataList;
}

void UMFMissionFlowComponent::GetMissionReplicateDatas(struct FString InMissionFlowName, struct TArray<struct FMFMissionReplicateData>& OutDataList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionReplicateDatas");
    struct
    {
        struct FString InMissionFlowName;
        struct TArray<struct FMFMissionReplicateData> OutDataList;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    OutDataList = Parms.OutDataList;
}

struct FMFMissionReplicateData UMFMissionFlowComponent::GetMissionReplicateData(struct FString InMissionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionReplicateData");
    struct
    {
        struct FString InMissionName;
        struct FMFMissionReplicateData ReturnValue;
    } Parms{};
    Parms.InMissionName = (struct FString)InMissionName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionFlowComponent::GetMissionFlowStatusByName_DS(struct FString InMissionFlowName, EMissionStatus& OutStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowStatusByName_DS");
    struct
    {
        struct FString InMissionFlowName;
        enum EMissionStatus OutStatus;
        bool ReturnValue;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    OutStatus = Parms.OutStatus;
    return Parms.ReturnValue;
}

bool UMFMissionFlowComponent::GetMissionFlowStatusByName(struct FString InMissionFlowName, EMissionStatus& OutStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowStatusByName");
    struct
    {
        struct FString InMissionFlowName;
        enum EMissionStatus OutStatus;
        bool ReturnValue;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    OutStatus = Parms.OutStatus;
    return Parms.ReturnValue;
}

EMissionStatus UMFMissionFlowComponent::GetMissionFlowStatus(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowStatus");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        enum EMissionStatus ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowReplicateData UMFMissionFlowComponent::GetMissionFlowReplicateData(struct FString InMissionFlowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowReplicateData");
    struct
    {
        struct FString InMissionFlowName;
        struct FMFMissionFlowReplicateData ReturnValue;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowNodeInstanceData UMFMissionFlowComponent::GetMissionFlowNodeInstanceDataByName(struct FString InMissionFlowName, struct FString InNodeName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowNodeInstanceDataByName");
    struct
    {
        struct FString InMissionFlowName;
        struct FString InNodeName;
        struct FMFMissionFlowNodeInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    Parms.InNodeName = (struct FString)InNodeName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMFMissionFlowNodeInstanceData UMFMissionFlowComponent::GetMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowNodeInstanceData");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct FMFMissionFlowNodeInstanceData ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionFlowComponent::GetMissionFlowLoopCount(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowLoopCount");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* UMFMissionFlowComponent::GetMissionFlowLastTriggerCharacter(struct UMFMissionFlow* InMissionFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowLastTriggerCharacter");
    struct
    {
        struct UMFMissionFlow* InMissionFlow;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlowComponent* UMFMissionFlowComponent::GetMissionFlowComponent(const EMissionDataType& InDataType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowComponent");
    struct
    {
        enum EMissionDataType InDataType;
        struct UMFMissionFlowComponent* ReturnValue;
    } Parms{};
    Parms.InDataType = (enum EMissionDataType)InDataType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlow* UMFMissionFlowComponent::GetMissionFlowByName(struct FString InMissionFlowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFlowByName");
    struct
    {
        struct FString InMissionFlowName;
        struct UMFMissionFlow* ReturnValue;
    } Parms{};
    Parms.InMissionFlowName = (struct FString)InMissionFlowName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMissionFlowComponent::GetMissionFinisTime(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionFinisTime");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        float ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionDataComponent* UMFMissionFlowComponent::GetMissionDataComponent(const EMissionDataType& InDataType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionDataComponent");
    struct
    {
        enum EMissionDataType InDataType;
        struct UMFMissionDataComponent* ReturnValue;
    } Parms{};
    Parms.InDataType = (enum EMissionDataType)InDataType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionFlowComponent::GetMissionCurProgress(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionCurProgress");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFMissionFlowComponent::GetMissionActivationTime(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetMissionActivationTime");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        float ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionDataType UMFMissionFlowComponent::GetInstigatorType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetInstigatorType");
    struct
    {
        enum EMissionDataType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlowComponent::GetAllMissionFlowReplicateDatas(struct TArray<struct FMFMissionFlowReplicateData>& OutDataList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "GetAllMissionFlowReplicateDatas");
    struct
    {
        struct TArray<struct FMFMissionFlowReplicateData> OutDataList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutDataList = Parms.OutDataList;
}

void UMFMissionFlowComponent::ExecuteNode(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "ExecuteNode");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::DeactivatePrevNode(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "DeactivatePrevNode");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionStatus InStatus;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InStatus = (enum EMissionStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::DeactivateNode(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "DeactivateNode");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionStatus InStatus;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InStatus = (enum EMissionStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowComponent::ClientDebugInfos(struct TArray<struct FString> InInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "ClientDebugInfos");
    struct
    {
        struct TArray<struct FString> InInfos;
    } Parms{};
    Parms.InInfos = (struct TArray<struct FString>)InInfos;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMissionFlowComponent::CheckMissionAchieved(struct UMFMissionFlowNode* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "CheckMissionAchieved");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        bool ReturnValue;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlowComponent::ActivateNode(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowComponent", "ActivateNode");
    struct
    {
        struct UMFMissionFlowNode* InMissionFlowNode;
        enum EMissionStatus InStatus;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.InStatus = (enum EMissionStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

// IMFMissionFlowInterface
struct UMFMissionFlowComponent* IMFMissionFlowInterface::GetMissionFlowComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowInterface", "GetMissionFlowComponent");
    struct
    {
        struct UMFMissionFlowComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlowComponent* IMFMissionFlowInterface::CreateMissionFlowComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowInterface", "CreateMissionFlowComponent");
    struct
    {
        struct UMFMissionFlowComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMissionFlowNode_Assemble
void UMFMissionFlowNode_Assemble::OnAffiliateNodeStatusChange(struct UMFMissionFlowNode* AffiliateNode, struct UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Assemble", "OnAffiliateNodeStatusChange");
    struct
    {
        struct UMFMissionFlowNode* AffiliateNode;
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus NewStatus;
        enum EMissionStatus OldStatus;
    } Parms{};
    Parms.AffiliateNode = (struct UMFMissionFlowNode*)AffiliateNode;
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.NewStatus = (enum EMissionStatus)NewStatus;
    Parms.OldStatus = (enum EMissionStatus)OldStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Assemble::GetAffiliateNodes(struct TArray<struct UMFMissionFlowNode_Affiliate*>& OutAffiliateNodeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Assemble", "GetAffiliateNodes");
    struct
    {
        struct TArray<struct UMFMissionFlowNode_Affiliate*> OutAffiliateNodeList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutAffiliateNodeList = Parms.OutAffiliateNodeList;
}

struct TArray<struct UMFMissionFlowNode_Affiliate*> UMFMissionFlowNode_Assemble::GetAffiliateNodeList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Assemble", "GetAffiliateNodeList");
    struct
    {
        struct TArray<struct UMFMissionFlowNode_Affiliate*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionFlowNode_Affiliate* UMFMissionFlowNode_Assemble::FindNextAffiliateNode(struct UMFMissionFlowNode* CurAffiliateNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Assemble", "FindNextAffiliateNode");
    struct
    {
        struct UMFMissionFlowNode* CurAffiliateNode;
        struct UMFMissionFlowNode_Affiliate* ReturnValue;
    } Parms{};
    Parms.CurAffiliateNode = (struct UMFMissionFlowNode*)CurAffiliateNode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMissionFlowNode_Assemble::AddAffiliateNode(struct UMFMissionFlowNode_Affiliate* InMissionFlowNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Assemble", "AddAffiliateNode");
    struct
    {
        struct UMFMissionFlowNode_Affiliate* InMissionFlowNode;
    } Parms{};
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode_Affiliate*)InMissionFlowNode;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Assemble::ActivateNextAffiliateNode(struct UMFMissionFlowNode* NextAffiliateNode, struct UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Assemble", "ActivateNextAffiliateNode");
    struct
    {
        struct UMFMissionFlowNode* NextAffiliateNode;
        struct UMFMissionFlowComponent* InInstigator;
        enum EMissionStatus ActivatorStatus;
    } Parms{};
    Parms.NextAffiliateNode = (struct UMFMissionFlowNode*)NextAffiliateNode;
    Parms.InInstigator = (struct UMFMissionFlowComponent*)InInstigator;
    Parms.ActivatorStatus = (enum EMissionStatus)ActivatorStatus;
    this->ProcessEvent(Func, &Parms);
}

// UMFMissionFlowNode_Generate
void UMFMissionFlowNode_Generate::SelectObjectiveNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "SelectObjectiveNode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::SelectConditionText(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "SelectConditionText");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::SelectConditionName(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "SelectConditionName");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::SelectActionText(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "SelectActionText");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::SelectActionName(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "SelectActionName");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::ResetState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "ResetState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::ProcessInputAsync(struct FString Prompt, struct FString OriginalText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "ProcessInputAsync");
    struct
    {
        struct FString Prompt;
        struct FString OriginalText;
    } Parms{};
    Parms.Prompt = (struct FString)Prompt;
    Parms.OriginalText = (struct FString)OriginalText;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::OpenExtraRuleFileToEdit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "OpenExtraRuleFileToEdit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::OnGenerateFlowStateChange(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "OnGenerateFlowStateChange");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::ImportTemplates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "ImportTemplates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::GenerateNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "GenerateNode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::GenerateBaseObjectiveText(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "GenerateBaseObjectiveText");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::FillObjectiveTypeText(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "FillObjectiveTypeText");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::ExportTemplates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "ExportTemplates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Generate::CallGenerateObjectiveNode(const struct FGenerateResult& InGenerateResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Generate", "CallGenerateObjectiveNode");
    struct
    {
        struct FGenerateResult InGenerateResult;
    } Parms{};
    Parms.InGenerateResult = (struct FGenerateResult)InGenerateResult;
    this->ProcessEvent(Func, &Parms);
}

// UMFMissionFlowNode_Random
void UMFMissionFlowNode_Random::SetDebugIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Random", "SetDebugIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionFlowNode_Random::InsertNextConnection(uint8_t InIndex, struct UMFMissionFlowNode* InNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Random", "InsertNextConnection");
    struct
    {
        uint8_t InIndex;
        struct UMFMissionFlowNode* InNode;
    } Parms{};
    Parms.InIndex = (uint8_t)InIndex;
    Parms.InNode = (struct UMFMissionFlowNode*)InNode;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct UMFMissionFlowNode*> UMFMissionFlowNode_Random::GetRandomConnections(const struct FMissionFlowConnections& InConnections)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowNode_Random", "GetRandomConnections");
    struct
    {
        struct FMissionFlowConnections InConnections;
        struct TArray<struct UMFMissionFlowNode*> ReturnValue;
    } Parms{};
    Parms.InConnections = (struct FMissionFlowConnections)InConnections;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IMFMissionFlowVariableAssetProvider
struct UMFMissionFlowVariableData* IMFMissionFlowVariableAssetProvider::GetVariableAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionFlowVariableAssetProvider", "GetVariableAsset");
    struct
    {
        struct UMFMissionFlowVariableData* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMissionVariableWriteBase
void UMFMissionVariableWriteBase::Write(struct UMFMissionFlowComponent* Instigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionVariableWriteBase", "Write");
    struct
    {
        struct UMFMissionFlowComponent* Instigator;
    } Parms{};
    Parms.Instigator = (struct UMFMissionFlowComponent*)Instigator;
    this->ProcessEvent(Func, &Parms);
}

struct UMFMissionFlowNode* UMFMissionVariableWriteBase::GetOuterNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionVariableWriteBase", "GetOuterNode");
    struct
    {
        struct UMFMissionFlowNode* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMissionObjective
void UMFMissionObjective::SetHelpType(int32_t InHelpValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "SetHelpType");
    struct
    {
        int32_t InHelpValue;
    } Parms{};
    Parms.InHelpValue = (int32_t)InHelpValue;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMissionObjective::IsReachEndNotComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "IsReachEndNotComplete");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionObjective::IsNeedReportProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "IsNeedReportProgress");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionObjective::IsNeedReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "IsNeedReport");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionObjective::IsFailWhenAchieved()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "IsFailWhenAchieved");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionObjective::IsActivateReachEndComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "IsActivateReachEndComplete");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionObjective::GetProgressUnit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetProgressUnit");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionObjective::GetProgressFactor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetProgressFactor");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionObjective::GetOneBattleMaxAddProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetOneBattleMaxAddProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionDataType UMFMissionObjective::GetInstigatorTypeFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetInstigatorTypeFlag");
    struct
    {
        enum EMissionDataType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionHelpType UMFMissionObjective::GetHelpType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetHelpType");
    struct
    {
        enum EMissionHelpType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionObjective::GetEndProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetEndProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMissionCompareType UMFMissionObjective::GetCompareType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetCompareType");
    struct
    {
        enum EMissionCompareType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMissionObjective::GetBeginProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionObjective", "GetBeginProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMissionStatics
struct UMFMissionFlowComponent* UMFMissionStatics::GetMissionFlowComponent(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMissionStatics", "GetMissionFlowComponent");
    struct
    {
        struct AActor* Actor;
        struct UMFMissionFlowComponent* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMissionDataComponent* UMFMissionStatics::GetMissionDataComponent(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMissionStatics", "GetMissionDataComponent");
    struct
    {
        struct AActor* Actor;
        struct UMFMissionDataComponent* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionStatics::GetCompareResultFloat(EMissionCompareType CompareType, float CheckNum, float Value1, float Value2, float Value3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMissionStatics", "GetCompareResultFloat");
    struct
    {
        enum EMissionCompareType CompareType;
        float CheckNum;
        float Value1;
        float Value2;
        float Value3;
        bool ReturnValue;
    } Parms{};
    Parms.CompareType = (enum EMissionCompareType)CompareType;
    Parms.CheckNum = (float)CheckNum;
    Parms.Value1 = (float)Value1;
    Parms.Value2 = (float)Value2;
    Parms.Value3 = (float)Value3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionStatics::GetCompareResultExp(EMissionCompareType CompareType, int64_t CheckNum, int64_t Value1, int64_t Value2, int64_t Value3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMissionStatics", "GetCompareResultExp");
    struct
    {
        enum EMissionCompareType CompareType;
        int64_t CheckNum;
        int64_t Value1;
        int64_t Value2;
        int64_t Value3;
        bool ReturnValue;
    } Parms{};
    Parms.CompareType = (enum EMissionCompareType)CompareType;
    Parms.CheckNum = (int64_t)CheckNum;
    Parms.Value1 = (int64_t)Value1;
    Parms.Value2 = (int64_t)Value2;
    Parms.Value3 = (int64_t)Value3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFMissionStatics::GetCompareResult(EMissionCompareType CompareType, int64_t CheckNum, int64_t Value1, int64_t Value2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMissionStatics", "GetCompareResult");
    struct
    {
        enum EMissionCompareType CompareType;
        int64_t CheckNum;
        int64_t Value1;
        int64_t Value2;
        bool ReturnValue;
    } Parms{};
    Parms.CompareType = (enum EMissionCompareType)CompareType;
    Parms.CheckNum = (int64_t)CheckNum;
    Parms.Value1 = (int64_t)Value1;
    Parms.Value2 = (int64_t)Value2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMissionSubsystem
void UMFMissionSubsystem::TestMissionFlowEvent__DelegateSignature(struct FString MissionFlowName, struct UMFMissionFlow* MissionFlowAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionSubsystem", "TestMissionFlowEvent__DelegateSignature");
    struct
    {
        struct FString MissionFlowName;
        struct UMFMissionFlow* MissionFlowAsset;
    } Parms{};
    Parms.MissionFlowName = (struct FString)MissionFlowName;
    Parms.MissionFlowAsset = (struct UMFMissionFlow*)MissionFlowAsset;
    this->ProcessEvent(Func, &Parms);
}

void UMFMissionSubsystem::GetDebugMissionFlowNodeInfos(struct UMFMissionFlowComponent* InMissionFlowComponent, struct UMFMissionFlowNode* InMissionFlowNode, const struct FMFMissionFlowNodeInstanceData& NodeInstanceData, struct FString& OutMissionFlowInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionSubsystem", "GetDebugMissionFlowNodeInfos");
    struct
    {
        struct UMFMissionFlowComponent* InMissionFlowComponent;
        struct UMFMissionFlowNode* InMissionFlowNode;
        struct FMFMissionFlowNodeInstanceData NodeInstanceData;
        struct FString OutMissionFlowInfo;
    } Parms{};
    Parms.InMissionFlowComponent = (struct UMFMissionFlowComponent*)InMissionFlowComponent;
    Parms.InMissionFlowNode = (struct UMFMissionFlowNode*)InMissionFlowNode;
    Parms.NodeInstanceData = (struct FMFMissionFlowNodeInstanceData)NodeInstanceData;
    this->ProcessEvent(Func, &Parms);
    OutMissionFlowInfo = Parms.OutMissionFlowInfo;
}

void UMFMissionSubsystem::GetDebugMissionFlowInfo(struct UMFMissionFlowComponent* InMissionFlowComponent, struct UMFMissionFlow* InMissionFlow, struct FString& OutMissionFlowInfo, bool bShowNodeInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMissionSubsystem", "GetDebugMissionFlowInfo");
    struct
    {
        struct UMFMissionFlowComponent* InMissionFlowComponent;
        struct UMFMissionFlow* InMissionFlow;
        struct FString OutMissionFlowInfo;
        bool bShowNodeInfo;
    } Parms{};
    Parms.InMissionFlowComponent = (struct UMFMissionFlowComponent*)InMissionFlowComponent;
    Parms.InMissionFlow = (struct UMFMissionFlow*)InMissionFlow;
    Parms.bShowNodeInfo = (bool)bShowNodeInfo;
    this->ProcessEvent(Func, &Parms);
    OutMissionFlowInfo = Parms.OutMissionFlowInfo;
}

} // namespace SDK
