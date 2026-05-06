#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"

namespace SDK
{

// Package: MFQuestSystem
// Enums: 15
// Structs: 7
// Classes: 60

struct AActor;
struct ACharacter;
struct AController;
struct APlayerController;
struct AVolume;
struct FGameplayTag;
struct FHitResult;
struct FLatentActionInfo;
struct UPrimitiveComponent;
struct FQuestContextPair;
struct FQuestState;
struct FQuestContextPairConfig;
struct FNestedIntArray;
struct FNestedObjectArray;
struct FQuestDistributerBlackboard;
struct FQuestGraphConnection;
struct UMFQuestComponentBase;
struct UMFQuestActionComponentBase;
struct UMFBPQuestActionComponentBase;
struct UMFQuestActivationComponentBase;
struct UMFQuestActivationComp_TriggerVolume;
struct UMFQuestNode;
struct UMFQuestAffiliateNode;
struct UMFQuestAssembleNode;
struct AMFQuestBase;
struct UMFQuestCheckNode;
struct UCheckActorParamBase;
struct UCheckActorClass;
struct UCheckActorLocation;
struct UMFQuestConditionComponentBase;
struct UMFQuestConditionComp_CheckActorProperty;
struct UCheckBlackboardBase;
struct UCheckIntMapValue;
struct UCheckIntArrayMapNum;
struct UCheckObjectArrayMapNum;
struct UMFQuestConditionComp_CheckBlackboard;
struct UMFQuestConditionComp_Dist;
struct UMFQuestConditionComp_RandomProbability;
struct UMFQuestContextBase;
struct UMFQuestContext_Actor;
struct UMFQuestContext_GameplayTag;
struct UMFQuestContext_Number;
struct UMFQuestContext_Object;
struct UMFQuestContextSourceBase;
struct UMFQuestContextSource_BlackboardKey;
struct UMFQuestContextSource_BlackboardTarget;
struct UMFQuestContextSource_CurrentValue;
struct UMFQuestContextSource_ObjectiveInstigator;
struct UMFQuestContextSource_ObjectiveTarget;
struct UMFQuestContextSource_PreviousValue;
struct UMFQuestContextSource_QuestDistributer;
struct UQuestConditionEffectContainer;
struct AMFQuestDistributerBase;
struct UBlackboardOperatorBase;
struct UIntMapAddValue;
struct UIntMapSetValue;
struct UIntArrayMapAddValue;
struct UIntArrayMapRemoveValue;
struct UObjectArrayMapAddUnique;
struct UObjectArrayMapEmpty;
struct UMFQuestEffectBase;
struct UMFQuestEffect_ModifyBlackboard;
struct UMFQuestEndNode;
struct UMFQuestEventManager;
struct UMFQuestInstigatorComponentBase;
struct AMFQuestManagerActor;
struct UMFQuestManagerComponent;
struct UMFQuestNodeGraph;
struct UMFQuestObjectiveComponentBase;
struct UMFQuestPrimaryConditionBase;
struct UMFQuestPrimaryCondition_IntMapChanged;
struct UMFQuestPrimaryCondition_ObjArrMapChanged;
struct UMFQuestProgressComponentBase;
struct UMFQuestProgressComp_Count;
struct UMFQuestStartNode;
struct UMFQuestStatics;

// Object: Enum MFQuestSystem.EQuestStatus
enum class EQuestStatus : uint8_t
{
	EQuestStatus_Inactive = 0,
	EQuestStatus_InProcess = 1,
	EQuestStatus_Success = 2,
	EQuestStatus_Failed = 3,
	EQuestStatus_MAX = 4
};

// Object: Enum MFQuestSystem.EQuestNodeType
enum class EQuestNodeType : uint8_t
{
	BaseNode = 0,
	CheckNode = 1,
	AssembleNode = 2,
	AffiliateNode = 3,
	EQuestNodeType_MAX = 4
};

// Object: Enum MFQuestSystem.ERecoveryAttributeChangeType
enum class ERecoveryAttributeChangeType : uint8_t
{
	Recover = 0,
	Lose = 1,
	ERecoveryAttributeChangeType_MAX = 2
};

// Object: Enum MFQuestSystem.ETaskType
enum class ETaskType : uint8_t
{
	E_TASK_TYPE_NONE = 0,
	E_TASK_TYPE_MAIN = 1,
	E_TASK_TYPE_DAILY = 2,
	E_TASK_TYPE_ACT = 3,
	E_TASK_TYPE_WEEKLY = 4,
	E_TASK_TYPE_ERGENT = 5,
	E_TASK_TYPE_SEASON_WEEK = 6,
	E_TASK_TYPE_PERK_UNLOCK = 7,
	E_TASK_TYPE_MENTOR = 8,
	E_TASK_TYPE_INFLUENCE = 9,
	E_TASK_TYPE_POSTMAN = 10,
	E_TASK_TYPE_MAX = 11
};

// Object: Enum MFQuestSystem.EQuestType
enum class EQuestType : uint8_t
{
	Normal = 0,
	Distributer = 1,
	Activity = 2,
	Achievement = 3,
	EQuestType_MAX = 4
};

// Object: Enum MFQuestSystem.EQuestObjectiveType
enum class EQuestObjectiveType : uint8_t
{
	Percentage = 0,
	ClearArea = 1,
	OccupiedArea = 2,
	EQuestObjectiveType_MAX = 3
};

// Object: Enum MFQuestSystem.ERelatedTargetType
enum class ERelatedTargetType : uint8_t
{
	TargetOnly = 0,
	TargetTeammateOnly = 1,
	RandomTeam = 2,
	AllPMC = 3,
	AllSCAV = 4,
	ERelatedTargetType_MAX = 5
};

// Object: Enum MFQuestSystem.ENumberCompareType
enum class ENumberCompareType : uint8_t
{
	CMP_Equals = 0,
	CMP_NotEqual = 1,
	CMP_Greater = 2,
	CMP_Less = 3,
	CMP_GreaterEqual = 4,
	CMP_LessEqual = 5,
	CMP_Between = 6,
	CMP_MAX = 7
};

// Object: Enum MFQuestSystem.ERunQuestResult
enum class ERunQuestResult : uint8_t
{
	Success = 0,
	Failed = 1,
	ERunQuestResult_MAX = 2
};

// Object: Enum MFQuestSystem.EQuestNodeStatus
enum class EQuestNodeStatus : uint8_t
{
	EQuestNodeStatus_Active = 0,
	EQuestNodeStatus_Inactive = 1,
	EQuestNodeStatus_MAX = 2
};

// Object: Enum MFQuestSystem.EQuestNodeConnectionType
enum class EQuestNodeConnectionType : uint8_t
{
	EQuestNodeConnectionType_And = 0,
	EQuestNodeConnectionType_Or = 1,
	EQuestNodeConnectionType_MAX = 2
};

// Object: Enum MFQuestSystem.EQuestInstigatorType
enum class EQuestInstigatorType : uint8_t
{
	EQuestInstigatorType_None = 0,
	EQuestInstigatorType_Individual = 1,
	EQuestInstigatorType_Team = 2,
	EQuestInstigatorType_Public = 3,
	EQuestInstigatorType_MAX = 4
};

// Object: Enum MFQuestSystem.EQuestConditionCheckType
enum class EQuestConditionCheckType : uint8_t
{
	EQuestConditionCheckType_Event = 0,
	EQuestConditionCheckType_Tick = 1,
	EQuestConditionCheckType_Both = 2,
	EQuestConditionCheckType_MAX = 3
};

// Object: Enum MFQuestSystem.EQuestConditionType
enum class EQuestConditionType : uint8_t
{
	EQuestConditionType_Keeping = 0,
	EQuestConditionType_Filter = 1,
	EQuestConditionType_MAX = 2
};

// Object: Enum MFQuestSystem.EQuestFailedType
enum class EQuestFailedType : uint8_t
{
	EQuestFailed_Normal = 0,
	EQuestFailed_TimeOut = 1,
	EQuestFailed_MAX = 2
};

// Object: ScriptStruct MFQuestSystem.QuestContextPair
// Size: 0x10 (Inherited: 0x0)
struct FQuestContextPair
{
	struct UMFQuestContextSourceBase* ContextSource; // 0x0(0x8)
	struct UMFQuestContextBase* Context; // 0x8(0x8)
};

// Object: ScriptStruct MFQuestSystem.QuestState
// Size: 0x2 (Inherited: 0x0)
struct FQuestState
{
	EQuestStatus CurrQuestStatus; // 0x0(0x1)
	EQuestStatus OldQuestStatus; // 0x1(0x1)
};

// Object: ScriptStruct MFQuestSystem.QuestContextPairConfig
// Size: 0x10 (Inherited: 0x0)
struct FQuestContextPairConfig
{
	struct UMFQuestContextSourceBase* ContextSourceClass; // 0x0(0x8)
	struct UMFQuestContextBase* ContextClass; // 0x8(0x8)
};

// Object: ScriptStruct MFQuestSystem.NestedIntArray
// Size: 0x10 (Inherited: 0x0)
struct FNestedIntArray
{
	struct TArray<int32_t> IntArray; // 0x0(0x10)
};

// Object: ScriptStruct MFQuestSystem.NestedObjectArray
// Size: 0x10 (Inherited: 0x0)
struct FNestedObjectArray
{
	struct TArray<struct UObject*> ObjectArray; // 0x0(0x10)
};

// Object: ScriptStruct MFQuestSystem.QuestDistributerBlackboard
// Size: 0x140 (Inherited: 0x0)
struct FQuestDistributerBlackboard
{
	struct TMap<struct FGameplayTag, int32_t> IntMap; // 0x0(0x50)
	struct TMap<struct FGameplayTag, struct FNestedIntArray> IntArrayMap; // 0x50(0x50)
	struct TMap<struct FGameplayTag, struct FNestedObjectArray> ObjectArrayMap; // 0xA0(0x50)
	struct TMap<struct FGameplayTag, struct UObject*> ObjectMap; // 0xF0(0x50)
};

// Object: ScriptStruct MFQuestSystem.QuestGraphConnection
// Size: 0x8 (Inherited: 0x0)
struct FQuestGraphConnection
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: Class MFQuestSystem.MFQuestComponentBase
// Size: 0xE8 (Inherited: 0xE0)
struct UMFQuestComponentBase : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestComponentBase, "MFQuestComponentBase")

	struct AMFQuestBase* OwnerQuest; // 0xE0(0x8)

	// Object: Function MFQuestSystem.MFQuestComponentBase.InitializeQuestComponent
	// Flags: [Native|Public]
	// Offset: 0x4f08050
	// Params: [ Num(1) Size(0x8) ]
	void InitializeQuestComponent(struct AMFQuestBase* InOwner);

	// Object: Function MFQuestSystem.MFQuestComponentBase.DeactivateQuestComponent
	// Flags: [Native|Public]
	// Offset: 0x4f07f84
	// Params: [ Num(1) Size(0x1) ]
	void DeactivateQuestComponent(EQuestStatus InResult);

	// Object: Function MFQuestSystem.MFQuestComponentBase.ActivateQuestComponent
	// Flags: [Native|Public]
	// Offset: 0x4f08034
	// Params: [ Num(0) Size(0x0) ]
	void ActivateQuestComponent();
};

// Object: Class MFQuestSystem.MFQuestActionComponentBase
// Size: 0xE8 (Inherited: 0xE8)
struct UMFQuestActionComponentBase : UMFQuestComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestActionComponentBase, "MFQuestActionComponentBase")
};

// Object: Class MFQuestSystem.MFBPQuestActionComponentBase
// Size: 0xE8 (Inherited: 0xE8)
struct UMFBPQuestActionComponentBase : UMFQuestActionComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFBPQuestActionComponentBase, "MFBPQuestActionComponentBase")

	// Object: Function MFQuestSystem.MFBPQuestActionComponentBase.BP_InitializeQuestComponent
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void BP_InitializeQuestComponent(struct AMFQuestBase* InOwner);

	// Object: Function MFQuestSystem.MFBPQuestActionComponentBase.BP_DeactivateQuestComponent
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void BP_DeactivateQuestComponent(EQuestStatus InResult);

	// Object: Function MFQuestSystem.MFBPQuestActionComponentBase.BP_ActivateQuestComponentBP
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void BP_ActivateQuestComponentBP();
};

// Object: Class MFQuestSystem.MFQuestActivationComponentBase
// Size: 0xE8 (Inherited: 0xE8)
struct UMFQuestActivationComponentBase : UMFQuestComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestActivationComponentBase, "MFQuestActivationComponentBase")
};

// Object: Class MFQuestSystem.MFQuestActivationComp_TriggerVolume
// Size: 0xF0 (Inherited: 0xE8)
struct UMFQuestActivationComp_TriggerVolume : UMFQuestActivationComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestActivationComp_TriggerVolume, "MFQuestActivationComp_TriggerVolume")

	struct AVolume* TriggerVolume; // 0xE8(0x8)

	// Object: Function MFQuestSystem.MFQuestActivationComp_TriggerVolume.OnTrigger
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4f06418
	// Params: [ Num(6) Size(0xB8) ]
	void OnTrigger(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};

// Object: Class MFQuestSystem.MFQuestNode
// Size: 0x58 (Inherited: 0x28)
struct UMFQuestNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestNode, "MFQuestNode")

	uint8_t Pad_0x28[0x22]; // 0x28(0x22)
	bool bFailedWhenAndParallelNodeFailed; // 0x4A(0x1)
	uint8_t Pad_0x4B[0xA]; // 0x4B(0xA)
	bool bForceCheck; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)

	// Object: Function MFQuestSystem.MFQuestNode.TickNode
	// Flags: [Native|Public]
	// Offset: 0x4f0bd14
	// Params: [ Num(1) Size(0x1) ]
	EQuestNodeStatus TickNode();

	// Object: Function MFQuestSystem.MFQuestNode.ShouldFailedWhenAndParallelNodeFailed
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0ba5c
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldFailedWhenAndParallelNodeFailed();

	// Object: Function MFQuestSystem.MFQuestNode.SetupPrevConnections
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x4f0bf84
	// Params: [ Num(1) Size(0x10) ]
	void SetupPrevConnections(const struct TArray<struct UMFQuestNode*>& InNodeList);

	// Object: Function MFQuestSystem.MFQuestNode.SetupNextConnection
	// Flags: [Native|Public]
	// Offset: 0x4f0bed4
	// Params: [ Num(1) Size(0x8) ]
	void SetupNextConnection(struct UMFQuestNode* InNode);

	// Object: Function MFQuestSystem.MFQuestNode.SetForceCheck
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b824
	// Params: [ Num(1) Size(0x1) ]
	void SetForceCheck(bool State);

	// Object: Function MFQuestSystem.MFQuestNode.IsMyQuest
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b9a8
	// Params: [ Num(2) Size(0x9) ]
	bool IsMyQuest(struct AMFQuestBase* InQuest);

	// Object: Function MFQuestSystem.MFQuestNode.InitQuestNode
	// Flags: [Native|Public]
	// Offset: 0x4f0c04c
	// Params: [ Num(3) Size(0xA) ]
	void InitQuestNode(struct AMFQuestBase* InQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed);

	// Object: Function MFQuestSystem.MFQuestNode.HasPrevConnection
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b970
	// Params: [ Num(1) Size(0x1) ]
	bool HasPrevConnection();

	// Object: Function MFQuestSystem.MFQuestNode.GetQuestNodeType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f0b954
	// Params: [ Num(1) Size(0x1) ]
	EQuestNodeType GetQuestNodeType();

	// Object: Function MFQuestSystem.MFQuestNode.GetPrevConnections
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0bb30
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFQuestNode*> GetPrevConnections();

	// Object: Function MFQuestSystem.MFQuestNode.GetNodeQuestStatus
	// Flags: [Native|Public]
	// Offset: 0x4f0bd50
	// Params: [ Num(2) Size(0x9) ]
	EQuestStatus GetNodeQuestStatus(struct UMFQuestNode* GetNode);

	// Object: Function MFQuestSystem.MFQuestNode.GetNodeQuestCustomIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b920
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNodeQuestCustomIndex();

	// Object: Function MFQuestSystem.MFQuestNode.GetNextConnections
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0ba94
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFQuestNode*> GetNextConnections();

	// Object: Function MFQuestSystem.MFQuestNode.GetForceCheck
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b808
	// Params: [ Num(1) Size(0x1) ]
	bool GetForceCheck();

	// Object: Function MFQuestSystem.MFQuestNode.GetConnectionType
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b8ec
	// Params: [ Num(1) Size(0x1) ]
	EQuestNodeConnectionType GetConnectionType();

	// Object: Function MFQuestSystem.MFQuestNode.DestroyNode
	// Flags: [Native|Public]
	// Offset: 0x4f0b8d0
	// Params: [ Num(0) Size(0x0) ]
	void DestroyNode();

	// Object: Function MFQuestSystem.MFQuestNode.DeactivateNode
	// Flags: [Native|Public]
	// Offset: 0x4f0be08
	// Params: [ Num(1) Size(0x1) ]
	void DeactivateNode(EQuestStatus InResult);

	// Object: Function MFQuestSystem.MFQuestNode.CheckQuestNode
	// Flags: [Native|Public]
	// Offset: 0x4f0bcd4
	// Params: [ Num(1) Size(0x1) ]
	bool CheckQuestNode();

	// Object: Function MFQuestSystem.MFQuestNode.CheckPrevConnections
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x4f0bbcc
	// Params: [ Num(2) Size(0x2) ]
	void CheckPrevConnections(bool& bFail, bool& bSuccess);

	// Object: Function MFQuestSystem.MFQuestNode.ActivateNode
	// Flags: [Native|Public]
	// Offset: 0x4f0beb8
	// Params: [ Num(0) Size(0x0) ]
	void ActivateNode();
};

// Object: Class MFQuestSystem.MFQuestAffiliateNode
// Size: 0x58 (Inherited: 0x58)
struct UMFQuestAffiliateNode : UMFQuestNode
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestAffiliateNode, "MFQuestAffiliateNode")
};

// Object: Class MFQuestSystem.MFQuestAssembleNode
// Size: 0x68 (Inherited: 0x58)
struct UMFQuestAssembleNode : UMFQuestNode
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestAssembleNode, "MFQuestAssembleNode")

	struct TArray<struct UMFQuestAffiliateNode*> QuestAffiliateNodeArray; // 0x58(0x10)

	// Object: Function MFQuestSystem.MFQuestAssembleNode.GetAffiliateQuestNodes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f06650
	// Params: [ Num(1) Size(0x10) ]
	void GetAffiliateQuestNodes(struct TArray<struct UMFQuestAffiliateNode*>& QuestAffiliateNodeArray);

	// Object: Function MFQuestSystem.MFQuestAssembleNode.AddAffiliateQuestNode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f06710
	// Params: [ Num(1) Size(0x8) ]
	void AddAffiliateQuestNode(struct UMFQuestAffiliateNode* QuestNode);
};

// Object: Class MFQuestSystem.MFQuestBase
// Size: 0x3E0 (Inherited: 0x300)
struct AMFQuestBase : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFQuestBase, "MFQuestBase")

	uint8_t Pad_0x300[0x30]; // 0x300(0x30)
	struct FMulticastInlineDelegate OnQuestStateChange; // 0x330(0x10)
	uint8_t Pad_0x340[0x10]; // 0x340(0x10)
	struct TArray<struct UMFQuestActionComponentBase*> ActionComponents; // 0x350(0x10)
	struct TArray<struct UMFQuestActionComponentBase*> LevelUnrelatedActionComponents; // 0x360(0x10)
	struct TArray<struct UMFQuestActivationComponentBase*> ActivationComponents; // 0x370(0x10)
	bool CanRunOnClient; // 0x380(0x1)
	uint8_t Pad_0x381[0x7]; // 0x381(0x7)
	struct UMFQuestObjectiveComponentBase* ObjectiveComponent; // 0x388(0x8)
	uint8_t Pad_0x390[0x8]; // 0x390(0x8)
	int32_t CustomIndex; // 0x398(0x4)
	int32_t GraphID; // 0x39C(0x4)
	struct FQuestState QuestStatus; // 0x3A0(0x2)
	EQuestFailedType QuestFailedType; // 0x3A2(0x1)
	bool IsAffiliateQuest; // 0x3A3(0x1)
	uint8_t Pad_0x3A4[0x4]; // 0x3A4(0x4)
	struct TArray<int32_t> AssembleCustomIndexList; // 0x3A8(0x10)
	struct TArray<int32_t> QuestTemplateParams; // 0x3B8(0x10)
	bool bIsTemplate; // 0x3C8(0x1)
	uint8_t Pad_0x3C9[0x3]; // 0x3C9(0x3)
	float ActivateTime; // 0x3CC(0x4)
	float FinishTime; // 0x3D0(0x4)
	uint8_t Pad_0x3D4[0x4]; // 0x3D4(0x4)
	struct ACharacter* CacheCharacter; // 0x3D8(0x8)

	// Object: Function MFQuestSystem.MFQuestBase.ShowLog
	// Flags: [Final|Native|Public]
	// Offset: 0x4f06a90
	// Params: [ Num(2) Size(0x11) ]
	void ShowLog(struct FString LogStr, bool bImportant);

	// Object: Function MFQuestSystem.MFQuestBase.SetQuestTemplateParams
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x4f06f70
	// Params: [ Num(1) Size(0x10) ]
	void SetQuestTemplateParams(struct TArray<int32_t>& InQuestTemplateParams);

	// Object: Function MFQuestSystem.MFQuestBase.SetQuestStatus
	// Flags: [Native|Public]
	// Offset: 0x4f07688
	// Params: [ Num(1) Size(0x1) ]
	void SetQuestStatus(EQuestStatus InNewStatus);

	// Object: Function MFQuestSystem.MFQuestBase.SetQuestObjective
	// Flags: [Final|Native|Public]
	// Offset: 0x4f07838
	// Params: [ Num(1) Size(0x8) ]
	void SetQuestObjective(struct UMFQuestObjectiveComponentBase* QuestObjective);

	// Object: Function MFQuestSystem.MFQuestBase.SetQuestFailedType
	// Flags: [Final|Native|Public]
	// Offset: 0x4f074f8
	// Params: [ Num(1) Size(0x1) ]
	void SetQuestFailedType(EQuestFailedType InFailedType);

	// Object: Function MFQuestSystem.MFQuestBase.SetMissionStatus
	// Flags: [Native|Public]
	// Offset: 0x4f075d8
	// Params: [ Num(1) Size(0x1) ]
	void SetMissionStatus(EQuestStatus InNewStatus);

	// Object: Function MFQuestSystem.MFQuestBase.SetMissionCurProgress
	// Flags: [Native|Public]
	// Offset: 0x4f0732c
	// Params: [ Num(1) Size(0x4) ]
	void SetMissionCurProgress(int32_t CurProgress);

	// Object: Function MFQuestSystem.MFQuestBase.SetIsTemplateQuest
	// Flags: [Final|Native|Public]
	// Offset: 0x4f073dc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsTemplateQuest(bool bIsTemplateQuest);

	// Object: Function MFQuestSystem.MFQuestBase.SetInGraphID
	// Flags: [Native|Public]
	// Offset: 0x4f0706c
	// Params: [ Num(1) Size(0x4) ]
	void SetInGraphID(int32_t InGraphID);

	// Object: Function MFQuestSystem.MFQuestBase.SetCustomIndex
	// Flags: [Native|Public]
	// Offset: 0x4f07150
	// Params: [ Num(1) Size(0x4) ]
	void SetCustomIndex(int32_t InIndex);

	// Object: Function MFQuestSystem.MFQuestBase.SetAffiliate
	// Flags: [Native|Public]
	// Offset: 0x4f06e08
	// Params: [ Num(1) Size(0x1) ]
	void SetAffiliate(bool Value);

	// Object: Function MFQuestSystem.MFQuestBase.OnReq_QuestStatus
	// Flags: [Native|Protected]
	// Offset: 0x4f06970
	// Params: [ Num(0) Size(0x0) ]
	void OnReq_QuestStatus();

	// Object: Function MFQuestSystem.MFQuestBase.OnProgressChange
	// Flags: [Native|Public]
	// Offset: 0x4f07200
	// Params: [ Num(3) Size(0xC) ]
	void OnProgressChange(int32_t AddProgress, int32_t CurrpProgress, int32_t MaxProgress);

	// Object: Function MFQuestSystem.MFQuestBase.OnObjectiveStateChanged
	// Flags: [Native|Protected]
	// Offset: 0x4f06880
	// Params: [ Num(2) Size(0x2) ]
	void OnObjectiveStateChanged(EQuestStatus NewState, EQuestStatus OldState);

	// Object: Function MFQuestSystem.MFQuestBase.IsTemplateQuest
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0748c
	// Params: [ Num(1) Size(0x1) ]
	bool IsTemplateQuest();

	// Object: Function MFQuestSystem.MFQuestBase.IsAffiliate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f06dec
	// Params: [ Num(1) Size(0x1) ]
	bool IsAffiliate();

	// Object: Function MFQuestSystem.MFQuestBase.IsActive
	// Flags: [Final|Native|Public]
	// Offset: 0x4f075a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsActive();

	// Object: Function MFQuestSystem.MFQuestBase.GetQuestTemplateParamByIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f06ec0
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetQuestTemplateParamByIndex(int32_t InParamIndex);

	// Object: Function MFQuestSystem.MFQuestBase.GetQuestStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f07738
	// Params: [ Num(1) Size(0x1) ]
	EQuestStatus GetQuestStatus();

	// Object: Function MFQuestSystem.MFQuestBase.GetQuestState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f06864
	// Params: [ Num(1) Size(0x2) ]
	struct FQuestState GetQuestState();

	// Object: Function MFQuestSystem.MFQuestBase.GetQuestObjectiveType
	// Flags: [Final|Native|Public]
	// Offset: 0x4f06b8c
	// Params: [ Num(1) Size(0x1) ]
	EQuestObjectiveType GetQuestObjectiveType();

	// Object: Function MFQuestSystem.MFQuestBase.GetQuestObjective
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f078e0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFQuestObjectiveComponentBase* GetQuestObjective();

	// Object: Function MFQuestSystem.MFQuestBase.GetQuestInstigator
	// Flags: [Native|Public]
	// Offset: 0x4f07914
	// Params: [ Num(1) Size(0x8) ]
	struct UMFQuestInstigatorComponentBase* GetQuestInstigator();

	// Object: Function MFQuestSystem.MFQuestBase.GetQuestFailedType
	// Flags: [Final|Native|Public]
	// Offset: 0x4f074c4
	// Params: [ Num(1) Size(0x1) ]
	EQuestFailedType GetQuestFailedType();

	// Object: Function MFQuestSystem.MFQuestBase.GetOldQuestStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f0682c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOldQuestStatus();

	// Object: Function MFQuestSystem.MFQuestBase.GetInstigatorCharacter
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f067c0
	// Params: [ Num(1) Size(0x8) ]
	struct ACharacter* GetInstigatorCharacter();

	// Object: Function MFQuestSystem.MFQuestBase.GetInGraphID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f07038
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInGraphID();

	// Object: Function MFQuestSystem.MFQuestBase.GetFinishTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f067f4
	// Params: [ Num(1) Size(0x4) ]
	float GetFinishTime();

	// Object: Function MFQuestSystem.MFQuestBase.GetCustomIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f0711c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCustomIndex();

	// Object: Function MFQuestSystem.MFQuestBase.GetCurrQuestStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f06848
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrQuestStatus();

	// Object: Function MFQuestSystem.MFQuestBase.GetAssembleCustomIndexList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f06c7c
	// Params: [ Num(1) Size(0x10) ]
	void GetAssembleCustomIndexList(struct TArray<int32_t>& OutList);

	// Object: Function MFQuestSystem.MFQuestBase.GetAffiliateMissionList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f06bc0
	// Params: [ Num(1) Size(0x10) ]
	void GetAffiliateMissionList(struct TArray<struct FString>& OutList);

	// Object: Function MFQuestSystem.MFQuestBase.GetActivateTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f06810
	// Params: [ Num(1) Size(0x4) ]
	float GetActivateTime();

	// Object: Function MFQuestSystem.MFQuestBase.DeactivateQuest
	// Flags: [Native|Public]
	// Offset: 0x4f0776c
	// Params: [ Num(1) Size(0x1) ]
	void DeactivateQuest(EQuestStatus InResult);

	// Object: Function MFQuestSystem.MFQuestBase.ClientShowLog
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x4f0698c
	// Params: [ Num(2) Size(0x18) ]
	void ClientShowLog(bool bImportant, struct FString LogStr);

	// Object: Function MFQuestSystem.MFQuestBase.AssignQuestInstigator
	// Flags: [Native|Public]
	// Offset: 0x4f07950
	// Params: [ Num(1) Size(0x8) ]
	void AssignQuestInstigator(struct UMFQuestInstigatorComponentBase* InInstigator);

	// Object: Function MFQuestSystem.MFQuestBase.AddAssembleCustomIndex
	// Flags: [Native|Public]
	// Offset: 0x4f06d3c
	// Params: [ Num(1) Size(0x4) ]
	void AddAssembleCustomIndex(int32_t InCustomIndex);

	// Object: Function MFQuestSystem.MFQuestBase.ActivateQuest
	// Flags: [Native|Public]
	// Offset: 0x4f0781c
	// Params: [ Num(0) Size(0x0) ]
	void ActivateQuest();
};

// Object: Class MFQuestSystem.MFQuestCheckNode
// Size: 0x58 (Inherited: 0x58)
struct UMFQuestCheckNode : UMFQuestNode
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestCheckNode, "MFQuestCheckNode")

	bool bSuccessWhenParallelNodeSuccess; // 0x56(0x1)

	// Object: Function MFQuestSystem.MFQuestCheckNode.InitCheckQuestNode
	// Flags: [Native|Public]
	// Offset: 0x4f07ea0
	// Params: [ Num(1) Size(0x1) ]
	void InitCheckQuestNode(bool InSuccessWhenParallelNodeSuccess);

	// Object: Function MFQuestSystem.MFQuestCheckNode.GetSuccessWhenParallelNodeSuccess
	// Flags: [Final|Native|Public]
	// Offset: 0x4f07e68
	// Params: [ Num(1) Size(0x1) ]
	bool GetSuccessWhenParallelNodeSuccess();
};

// Object: Class MFQuestSystem.CheckActorParamBase
// Size: 0x28 (Inherited: 0x28)
struct UCheckActorParamBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCheckActorParamBase, "CheckActorParamBase")
};

// Object: Class MFQuestSystem.CheckActorClass
// Size: 0x50 (Inherited: 0x28)
struct UCheckActorClass : UCheckActorParamBase
{
	DEFINE_UE_CLASS_HELPERS(UCheckActorClass, "CheckActorClass")

	struct TSoftClassPtr<struct AActor*> ParentClass; // 0x28(0x28)
};

// Object: Class MFQuestSystem.CheckActorLocation
// Size: 0x38 (Inherited: 0x28)
struct UCheckActorLocation : UCheckActorParamBase
{
	DEFINE_UE_CLASS_HELPERS(UCheckActorLocation, "CheckActorLocation")

	struct FVector Center; // 0x28(0xC)
	float Radius; // 0x34(0x4)
};

// Object: Class MFQuestSystem.MFQuestConditionComponentBase
// Size: 0x50 (Inherited: 0x28)
struct UMFQuestConditionComponentBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestConditionComponentBase, "MFQuestConditionComponentBase")

	struct FMulticastInlineDelegate OnGenerateDebugInfo; // 0x28(0x10)
	struct AMFQuestBase* OwnerQuest; // 0x38(0x8)
	bool bAdvanceEdit; // 0x40(0x1)
	EQuestConditionType ConditionType; // 0x41(0x1)
	EQuestConditionCheckType CheckType; // 0x42(0x1)
	bool bExpectConditionResult; // 0x43(0x1)
	float CustomTickInterval; // 0x44(0x4)
	struct FTimerHandle CustomTickTimerHandle; // 0x48(0x8)

	// Object: Function MFQuestSystem.MFQuestConditionComponentBase.CustomTick
	// Flags: [Native|Protected]
	// Offset: 0x4f08198
	// Params: [ Num(0) Size(0x0) ]
	void CustomTick();
};

// Object: Class MFQuestSystem.MFQuestConditionComp_CheckActorProperty
// Size: 0x68 (Inherited: 0x50)
struct UMFQuestConditionComp_CheckActorProperty : UMFQuestConditionComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestConditionComp_CheckActorProperty, "MFQuestConditionComp_CheckActorProperty")

	struct UMFQuestContextSourceBase* CheckTargetContextSource; // 0x50(0x8)
	struct TArray<struct UCheckActorParamBase*> CheckParams; // 0x58(0x10)
};

// Object: Class MFQuestSystem.CheckBlackboardBase
// Size: 0x30 (Inherited: 0x28)
struct UCheckBlackboardBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCheckBlackboardBase, "CheckBlackboardBase")

	struct UMFQuestContextSourceBase* TargetActor; // 0x28(0x8)
};

// Object: Class MFQuestSystem.CheckIntMapValue
// Size: 0x48 (Inherited: 0x30)
struct UCheckIntMapValue : UCheckBlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UCheckIntMapValue, "CheckIntMapValue")

	struct FGameplayTag Key; // 0x30(0x8)
	ENumberCompareType CompareType; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t Value1; // 0x3C(0x4)
	int32_t Value2; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: Class MFQuestSystem.CheckIntArrayMapNum
// Size: 0x48 (Inherited: 0x30)
struct UCheckIntArrayMapNum : UCheckBlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UCheckIntArrayMapNum, "CheckIntArrayMapNum")

	struct FGameplayTag Key; // 0x30(0x8)
	ENumberCompareType CompareType; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t Value1; // 0x3C(0x4)
	int32_t Value2; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: Class MFQuestSystem.CheckObjectArrayMapNum
// Size: 0x48 (Inherited: 0x30)
struct UCheckObjectArrayMapNum : UCheckBlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UCheckObjectArrayMapNum, "CheckObjectArrayMapNum")

	struct FGameplayTag Key; // 0x30(0x8)
	ENumberCompareType CompareType; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t Value1; // 0x3C(0x4)
	int32_t Value2; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: Class MFQuestSystem.MFQuestConditionComp_CheckBlackboard
// Size: 0x60 (Inherited: 0x50)
struct UMFQuestConditionComp_CheckBlackboard : UMFQuestConditionComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestConditionComp_CheckBlackboard, "MFQuestConditionComp_CheckBlackboard")

	struct TArray<struct UCheckBlackboardBase*> CheckParams; // 0x50(0x10)
};

// Object: Class MFQuestSystem.MFQuestConditionComp_Dist
// Size: 0x68 (Inherited: 0x50)
struct UMFQuestConditionComp_Dist : UMFQuestConditionComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestConditionComp_Dist, "MFQuestConditionComp_Dist")

	struct UMFQuestContextSourceBase* SourceActorContextConfig; // 0x50(0x8)
	struct UMFQuestContextSourceBase* DestActorContextConfig; // 0x58(0x8)
	float MinDist; // 0x60(0x4)
	float MaxDist; // 0x64(0x4)
};

// Object: Class MFQuestSystem.MFQuestConditionComp_RandomProbability
// Size: 0x58 (Inherited: 0x50)
struct UMFQuestConditionComp_RandomProbability : UMFQuestConditionComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestConditionComp_RandomProbability, "MFQuestConditionComp_RandomProbability")

	float ProbabilityPercent; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: Class MFQuestSystem.MFQuestContextBase
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextBase, "MFQuestContextBase")
};

// Object: Class MFQuestSystem.MFQuestContext_Actor
// Size: 0x30 (Inherited: 0x28)
struct UMFQuestContext_Actor : UMFQuestContextBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContext_Actor, "MFQuestContext_Actor")

	struct AActor* ContextActor; // 0x28(0x8)
};

// Object: Class MFQuestSystem.MFQuestContext_GameplayTag
// Size: 0x30 (Inherited: 0x28)
struct UMFQuestContext_GameplayTag : UMFQuestContextBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContext_GameplayTag, "MFQuestContext_GameplayTag")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class MFQuestSystem.MFQuestContext_Number
// Size: 0x38 (Inherited: 0x28)
struct UMFQuestContext_Number : UMFQuestContextBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContext_Number, "MFQuestContext_Number")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
};

// Object: Class MFQuestSystem.MFQuestContext_Object
// Size: 0x30 (Inherited: 0x28)
struct UMFQuestContext_Object : UMFQuestContextBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContext_Object, "MFQuestContext_Object")

	struct UObject* Object; // 0x28(0x8)
};

// Object: Class MFQuestSystem.MFQuestContextSourceBase
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSourceBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSourceBase, "MFQuestContextSourceBase")
};

// Object: Class MFQuestSystem.MFQuestContextSource_BlackboardKey
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSource_BlackboardKey : UMFQuestContextSourceBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSource_BlackboardKey, "MFQuestContextSource_BlackboardKey")
};

// Object: Class MFQuestSystem.MFQuestContextSource_BlackboardTarget
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSource_BlackboardTarget : UMFQuestContextSourceBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSource_BlackboardTarget, "MFQuestContextSource_BlackboardTarget")
};

// Object: Class MFQuestSystem.MFQuestContextSource_CurrentValue
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSource_CurrentValue : UMFQuestContextSourceBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSource_CurrentValue, "MFQuestContextSource_CurrentValue")
};

// Object: Class MFQuestSystem.MFQuestContextSource_ObjectiveInstigator
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSource_ObjectiveInstigator : UMFQuestContextSourceBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSource_ObjectiveInstigator, "MFQuestContextSource_ObjectiveInstigator")
};

// Object: Class MFQuestSystem.MFQuestContextSource_ObjectiveTarget
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSource_ObjectiveTarget : UMFQuestContextSourceBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSource_ObjectiveTarget, "MFQuestContextSource_ObjectiveTarget")
};

// Object: Class MFQuestSystem.MFQuestContextSource_PreviousValue
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSource_PreviousValue : UMFQuestContextSourceBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSource_PreviousValue, "MFQuestContextSource_PreviousValue")
};

// Object: Class MFQuestSystem.MFQuestContextSource_QuestDistributer
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestContextSource_QuestDistributer : UMFQuestContextSourceBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestContextSource_QuestDistributer, "MFQuestContextSource_QuestDistributer")
};

// Object: Class MFQuestSystem.QuestConditionEffectContainer
// Size: 0x68 (Inherited: 0x28)
struct UQuestConditionEffectContainer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UQuestConditionEffectContainer, "QuestConditionEffectContainer")

	struct AMFQuestDistributerBase* QuestDistributer; // 0x28(0x8)
	struct UMFQuestPrimaryConditionBase* PrimaryCondition; // 0x30(0x8)
	struct TArray<struct UMFQuestConditionComponentBase*> SubConditions; // 0x38(0x10)
	struct TArray<struct UMFQuestEffectBase*> QuestEffects; // 0x48(0x10)
	struct TArray<struct UMFQuestEffectBase*> FailQuestEffects; // 0x58(0x10)

	// Object: Function MFQuestSystem.QuestConditionEffectContainer.OnTriggerPrimaryCondition
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x4f0b09c
	// Params: [ Num(1) Size(0x10) ]
	void OnTriggerPrimaryCondition(const struct TArray<struct FQuestContextPair>& QuestContextList);
};

// Object: Class MFQuestSystem.MFQuestDistributerBase
// Size: 0x3A0 (Inherited: 0x300)
struct AMFQuestDistributerBase : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFQuestDistributerBase, "MFQuestDistributerBase")

	EQuestType QuestType; // 0x300(0x1)
	uint8_t Pad_0x301[0x7]; // 0x301(0x7)
	struct TArray<struct UQuestConditionEffectContainer*> QuestConditionEffectContainers; // 0x308(0x10)
	struct TMap<struct AActor*, struct FQuestDistributerBlackboard> ActorBlackboards; // 0x318(0x50)
	struct FMulticastInlineDelegate OnBlackboardIntMapChanged; // 0x368(0x10)
	struct FMulticastInlineDelegate OnBlackboardIntArrayMapChanged; // 0x378(0x10)
	struct FMulticastInlineDelegate OnBlackboardObjectArrayMapChanged; // 0x388(0x10)
	struct ACharacter* LastTriggerCharacter; // 0x398(0x8)

	// Object: Function MFQuestSystem.MFQuestDistributerBase.ShowLog
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b16c
	// Params: [ Num(2) Size(0x11) ]
	void ShowLog(struct FString LogStr, bool bImportant);
};

// Object: Class MFQuestSystem.BlackboardOperatorBase
// Size: 0x38 (Inherited: 0x28)
struct UBlackboardOperatorBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardOperatorBase, "BlackboardOperatorBase")

	struct UMFQuestContextSourceBase* TargetActor; // 0x28(0x8)
	bool BTeamInfo; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class MFQuestSystem.IntMapAddValue
// Size: 0x50 (Inherited: 0x38)
struct UIntMapAddValue : UBlackboardOperatorBase
{
	DEFINE_UE_CLASS_HELPERS(UIntMapAddValue, "IntMapAddValue")

	struct FGameplayTag Key; // 0x34(0x8)
	struct UMFQuestContextSourceBase* ModifyValueSource; // 0x40(0x8)
	int32_t ModifyValue; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: Class MFQuestSystem.IntMapSetValue
// Size: 0x50 (Inherited: 0x38)
struct UIntMapSetValue : UBlackboardOperatorBase
{
	DEFINE_UE_CLASS_HELPERS(UIntMapSetValue, "IntMapSetValue")

	struct FGameplayTag Key; // 0x34(0x8)
	struct UMFQuestContextSourceBase* ValueSource; // 0x40(0x8)
	int32_t Value; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: Class MFQuestSystem.IntArrayMapAddValue
// Size: 0x50 (Inherited: 0x38)
struct UIntArrayMapAddValue : UBlackboardOperatorBase
{
	DEFINE_UE_CLASS_HELPERS(UIntArrayMapAddValue, "IntArrayMapAddValue")

	struct FGameplayTag Key; // 0x34(0x8)
	struct UMFQuestContextSourceBase* ModifyValueSource; // 0x40(0x8)
	int32_t ModifyValue; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: Class MFQuestSystem.IntArrayMapRemoveValue
// Size: 0x40 (Inherited: 0x38)
struct UIntArrayMapRemoveValue : UBlackboardOperatorBase
{
	DEFINE_UE_CLASS_HELPERS(UIntArrayMapRemoveValue, "IntArrayMapRemoveValue")

	struct FGameplayTag Key; // 0x34(0x8)
	int32_t RemoveIndex; // 0x3C(0x4)
};

// Object: Class MFQuestSystem.ObjectArrayMapAddUnique
// Size: 0x48 (Inherited: 0x38)
struct UObjectArrayMapAddUnique : UBlackboardOperatorBase
{
	DEFINE_UE_CLASS_HELPERS(UObjectArrayMapAddUnique, "ObjectArrayMapAddUnique")

	struct FGameplayTag Key; // 0x34(0x8)
	struct UMFQuestContextSourceBase* TargetContextSource; // 0x40(0x8)
};

// Object: Class MFQuestSystem.ObjectArrayMapEmpty
// Size: 0x40 (Inherited: 0x38)
struct UObjectArrayMapEmpty : UBlackboardOperatorBase
{
	DEFINE_UE_CLASS_HELPERS(UObjectArrayMapEmpty, "ObjectArrayMapEmpty")

	struct FGameplayTag Key; // 0x34(0x8)
};

// Object: Class MFQuestSystem.MFQuestEffectBase
// Size: 0x38 (Inherited: 0x28)
struct UMFQuestEffectBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestEffectBase, "MFQuestEffectBase")

	struct FMulticastInlineDelegate OnGenerateDebugInfo; // 0x28(0x10)
};

// Object: Class MFQuestSystem.MFQuestEffect_ModifyBlackboard
// Size: 0x48 (Inherited: 0x38)
struct UMFQuestEffect_ModifyBlackboard : UMFQuestEffectBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestEffect_ModifyBlackboard, "MFQuestEffect_ModifyBlackboard")

	struct TArray<struct UBlackboardOperatorBase*> BlackboardOperators; // 0x38(0x10)
};

// Object: Class MFQuestSystem.MFQuestEndNode
// Size: 0x58 (Inherited: 0x58)
struct UMFQuestEndNode : UMFQuestNode
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestEndNode, "MFQuestEndNode")

	// Object: Function MFQuestSystem.MFQuestEndNode.GetFinalNodeQuestStatus
	// Flags: [Native|Public]
	// Offset: 0x4f0b2f4
	// Params: [ Num(1) Size(0x1) ]
	EQuestStatus GetFinalNodeQuestStatus();
};

// Object: Class MFQuestSystem.MFQuestEventManager
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestEventManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestEventManager, "MFQuestEventManager")
};

// Object: Class MFQuestSystem.MFQuestInstigatorComponentBase
// Size: 0x100 (Inherited: 0xE8)
struct UMFQuestInstigatorComponentBase : UMFQuestComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestInstigatorComponentBase, "MFQuestInstigatorComponentBase")

	bool bLogToClient; // 0xE8(0x1)
	EQuestInstigatorType InstigatorType; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x6]; // 0xEA(0x6)
	struct TArray<struct FString> DrawTexts; // 0xF0(0x10)

	// Object: Function MFQuestSystem.MFQuestInstigatorComponentBase.IsObjectiveInstigatorSupported
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x4f0b430
	// Params: [ Num(2) Size(0x9) ]
	bool IsObjectiveInstigatorSupported(struct AActor* InQuestInstigator);

	// Object: Function MFQuestSystem.MFQuestInstigatorComponentBase.GetQuestInstigatorType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4f0b3fc
	// Params: [ Num(1) Size(0x1) ]
	EQuestInstigatorType GetQuestInstigatorType();

	// Object: Function MFQuestSystem.MFQuestInstigatorComponentBase.ClientSetQuestDistInfos
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x4f0b344
	// Params: [ Num(1) Size(0x10) ]
	void ClientSetQuestDistInfos(struct TArray<struct FString> infos);
};

// Object: Class MFQuestSystem.MFQuestManagerActor
// Size: 0x310 (Inherited: 0x300)
struct AMFQuestManagerActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFQuestManagerActor, "MFQuestManagerActor")

	struct TArray<struct UMFQuestNodeGraph*> QuestGraphList; // 0x300(0x10)

	// Object: Function MFQuestSystem.MFQuestManagerActor.GetQuestNodeGraphFromPC
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x4f0b58c
	// Params: [ Num(2) Size(0x18) ]
	void GetQuestNodeGraphFromPC(struct APlayerController* InOwnerPC, struct TArray<struct UMFQuestNodeGraph*>& InGraphList);

	// Object: Function MFQuestSystem.MFQuestManagerActor.CreateNewQuestGraph
	// Flags: [Native|Public]
	// Offset: 0x4f0b694
	// Params: [ Num(2) Size(0x10) ]
	struct UMFQuestNodeGraph* CreateNewQuestGraph(struct AController* InOwnerController);
};

// Object: Class MFQuestSystem.MFQuestManagerComponent
// Size: 0xF0 (Inherited: 0xE0)
struct UMFQuestManagerComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestManagerComponent, "MFQuestManagerComponent")

	struct AMFQuestManagerActor* QuestManagerActorClass; // 0xE0(0x8)
	struct AMFQuestManagerActor* QuestManagerActor; // 0xE8(0x8)

	// Object: Function MFQuestSystem.MFQuestManagerComponent.GetQuestManagerActor
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0b788
	// Params: [ Num(1) Size(0x8) ]
	struct AMFQuestManagerActor* GetQuestManagerActor();

	// Object: Function MFQuestSystem.MFQuestManagerComponent.CreateQuestManagerActor
	// Flags: [Final|Native|Private]
	// Offset: 0x4f0b754
	// Params: [ Num(1) Size(0x8) ]
	struct AMFQuestManagerActor* CreateQuestManagerActor();
};

// Object: Class MFQuestSystem.MFQuestNodeGraph
// Size: 0xB0 (Inherited: 0x28)
struct UMFQuestNodeGraph : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestNodeGraph, "MFQuestNodeGraph")

	struct FMulticastInlineDelegate OnGraphStatusChange; // 0x28(0x10)
	bool bOwnedQuestStateChanged; // 0x38(0x1)
	bool bCompleteInOneBattle; // 0x39(0x1)
	bool bIsActTask; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x5]; // 0x3B(0x5)
	struct TArray<struct UMFQuestNode*> NodeList; // 0x40(0x10)
	struct TArray<struct UMFQuestAffiliateNode*> QuestAffiliateNodeList; // 0x50(0x10)
	struct TArray<struct AMFQuestBase*> QuestList; // 0x60(0x10)
	struct UMFQuestStartNode* StartNode; // 0x70(0x8)
	struct UMFQuestEndNode* EndNode; // 0x78(0x8)
	int32_t CustomIndex; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct AController* OwnerController; // 0x88(0x8)
	uint8_t Pad_0x90[0x8]; // 0x90(0x8)
	struct TArray<struct UMFQuestNode*> CheckNodeArray; // 0x98(0x10)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)

	// Object: Function MFQuestSystem.MFQuestNodeGraph.TickQuestNodeGraph
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c5c0
	// Params: [ Num(0) Size(0x0) ]
	void TickQuestNodeGraph();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.SetOwnerController
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c518
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerController(struct AController* InPC);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.SetIsCompleteInOneBattle
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c344
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCompleteInOneBattle(bool In);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.SetIsActTask
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c25c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsActTask(bool In);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.SetCustomIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c850
	// Params: [ Num(1) Size(0x4) ]
	void SetCustomIndex(int32_t InIndex);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.NodeGraphCheck
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c428
	// Params: [ Num(1) Size(0x8) ]
	void NodeGraphCheck(struct AMFQuestBase* QuestBase);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetQuestNodeFromNodeQuest
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c5fc
	// Params: [ Num(2) Size(0x10) ]
	struct UMFQuestNode* GetQuestNodeFromNodeQuest(struct AMFQuestBase* InQuest);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetQuestFromCustomIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c76c
	// Params: [ Num(2) Size(0x10) ]
	struct AMFQuestBase* GetQuestFromCustomIndex(int32_t InIndex);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetOwnerController
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c4e4
	// Params: [ Num(1) Size(0x8) ]
	struct AController* GetOwnerController();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetIsCompleteInOneBattle
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c30c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsCompleteInOneBattle();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetIsActTask
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c224
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsActTask();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetEndNode
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c3f4
	// Params: [ Num(1) Size(0x8) ]
	struct UMFQuestEndNode* GetEndNode();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetCustomIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c81c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCustomIndex();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.GetAllQuest
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4f0c6ac
	// Params: [ Num(1) Size(0x10) ]
	void GetAllQuest(struct TArray<struct AMFQuestBase*>& InQuestList);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.DestroyGraph
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c210
	// Params: [ Num(0) Size(0x0) ]
	void DestroyGraph();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.DeactivateQuestNodeGraph
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c5d4
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateQuestNodeGraph();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.CreateNewQuestNode
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0cec0
	// Params: [ Num(3) Size(0xA) ]
	void CreateNewQuestNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.CreateNewQuestCheckNode
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0cd48
	// Params: [ Num(4) Size(0xB) ]
	void CreateNewQuestCheckNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed, bool InSuccessWhenParallelNodeSuccess);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.CreateNewQuestAssembleNode
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0cc18
	// Params: [ Num(3) Size(0xA) ]
	void CreateNewQuestAssembleNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.CreateNewQuestAffiliateNode
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0cae8
	// Params: [ Num(3) Size(0xA) ]
	void CreateNewQuestAffiliateNode(struct AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.CompleteQuestNodeGraph
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c8f8
	// Params: [ Num(1) Size(0x1) ]
	void CompleteQuestNodeGraph(EQuestNodeConnectionType InType);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.BuildQuestNodeRelation
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c9a0
	// Params: [ Num(2) Size(0x18) ]
	void BuildQuestNodeRelation(struct AMFQuestBase* TargetNodeQuest, struct TArray<struct AMFQuestBase*> PrevNodeQuestList);

	// Object: Function MFQuestSystem.MFQuestNodeGraph.BeginGraph
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c4d0
	// Params: [ Num(0) Size(0x0) ]
	void BeginGraph();

	// Object: Function MFQuestSystem.MFQuestNodeGraph.ActivateQuestNodeGraph
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0c5e8
	// Params: [ Num(0) Size(0x0) ]
	void ActivateQuestNodeGraph();
};

// Object: Class MFQuestSystem.MFQuestObjectiveComponentBase
// Size: 0x150 (Inherited: 0xE8)
struct UMFQuestObjectiveComponentBase : UMFQuestComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestObjectiveComponentBase, "MFQuestObjectiveComponentBase")

	struct FMulticastInlineDelegate OnObjectiveStateChanged; // 0xE8(0x10)
	struct TArray<struct FQuestContextPairConfig> QuestContextPairConfigList; // 0xF8(0x10)
	EQuestObjectiveType QuestObjectiveType; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct TArray<struct UMFQuestConditionComponentBase*> AndObjectiveConditionList; // 0x110(0x10)
	struct TArray<struct UMFQuestConditionComponentBase*> OrObjectiveConditionList; // 0x120(0x10)
	struct UMFQuestProgressComponentBase* QuestProgress; // 0x130(0x8)
	bool FailWhenAchieved; // 0x138(0x1)
	EQuestStatus CurrQuestCompStatus; // 0x139(0x1)
	uint8_t Pad_0x13A[0x6]; // 0x13A(0x6)
	struct TArray<struct FQuestContextPair> QuestContextList; // 0x140(0x10)

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.SetQuestCompStatus
	// Flags: [Native|Public]
	// Offset: 0x4f0fc18
	// Params: [ Num(1) Size(0x1) ]
	void SetQuestCompStatus(EQuestStatus InNewStatus);

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.SetObjectiveProgress
	// Flags: [Native|Public]
	// Offset: 0x4f0ffbc
	// Params: [ Num(2) Size(0x8) ]
	void SetObjectiveProgress(int32_t MaxCount, int32_t CurrCount);

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.SetBringInObjectiveProgress
	// Flags: [Native|Public]
	// Offset: 0x4f0fed0
	// Params: [ Num(2) Size(0x8) ]
	void SetBringInObjectiveProgress(int32_t MaxCount, int32_t CurrCount);

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.OnQuestProgressedChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x4f0fad8
	// Params: [ Num(2) Size(0x8) ]
	void OnQuestProgressedChanged(int32_t ProgressToAdd, int32_t CurrentProgress);

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.IsQuestCompActive
	// Flags: [Native|Public]
	// Offset: 0x4f0fbd8
	// Params: [ Num(1) Size(0x1) ]
	bool IsQuestCompActive();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.IsFailWhenAchieved
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0fd04
	// Params: [ Num(1) Size(0x1) ]
	bool IsFailWhenAchieved();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetQuestObjectiveType
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0fbbc
	// Params: [ Num(1) Size(0x1) ]
	EQuestObjectiveType GetQuestObjectiveType();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetQuestCompStatus
	// Flags: [Native|Public]
	// Offset: 0x4f0fcc8
	// Params: [ Num(1) Size(0x1) ]
	EQuestStatus GetQuestCompStatus();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetOrConditionList
	// Flags: [Final|Native|Public]
	// Offset: 0x4f100a8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFQuestConditionComponentBase*> GetOrConditionList();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetObjectiveProgress
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x4f0fdc8
	// Params: [ Num(2) Size(0x8) ]
	void GetObjectiveProgress(int32_t& Out_MaxCount, int32_t& Out_CurrCount);

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetMaxObjectiveProgress
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f0fd8c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxObjectiveProgress();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetBringInObjectiveProgress
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f0fd50
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBringInObjectiveProgress();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetAndConditionList
	// Flags: [Final|Native|Public]
	// Offset: 0x4f10144
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFQuestConditionComponentBase*> GetAndConditionList();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.GetActivationTime
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0fd34
	// Params: [ Num(1) Size(0x4) ]
	float GetActivationTime();

	// Object: Function MFQuestSystem.MFQuestObjectiveComponentBase.ClearCurrQuestProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x4f0fd20
	// Params: [ Num(0) Size(0x0) ]
	void ClearCurrQuestProgress();
};

// Object: Class MFQuestSystem.MFQuestPrimaryConditionBase
// Size: 0x78 (Inherited: 0x28)
struct UMFQuestPrimaryConditionBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestPrimaryConditionBase, "MFQuestPrimaryConditionBase")

	struct FMulticastInlineDelegate OnTriggerPrimaryCondition; // 0x28(0x10)
	struct FMulticastInlineDelegate OnGenerateDebugInfo; // 0x38(0x10)
	struct TArray<struct FQuestContextPairConfig> QuestContextPairConfigList; // 0x48(0x10)
	struct UQuestConditionEffectContainer* ConditionEffectContainer; // 0x58(0x8)
	struct AMFQuestDistributerBase* QuestDistributer; // 0x60(0x8)
	struct TArray<struct FQuestContextPair> QuestContextList; // 0x68(0x10)

	// Object: Function MFQuestSystem.MFQuestPrimaryConditionBase.RemoveEventListener
	// Flags: [Native|Public]
	// Offset: 0x4f10538
	// Params: [ Num(0) Size(0x0) ]
	void RemoveEventListener();

	// Object: Function MFQuestSystem.MFQuestPrimaryConditionBase.Initialize
	// Flags: [Native|Public]
	// Offset: 0x4f10554
	// Params: [ Num(2) Size(0x10) ]
	void Initialize(struct UQuestConditionEffectContainer* InConditionEffectContainer, struct AMFQuestDistributerBase* InQuestDistributer);

	// Object: Function MFQuestSystem.MFQuestPrimaryConditionBase.AddEventListener
	// Flags: [Native|Public]
	// Offset: 0x4f1051c
	// Params: [ Num(0) Size(0x0) ]
	void AddEventListener();
};

// Object: Class MFQuestSystem.MFQuestPrimaryCondition_IntMapChanged
// Size: 0x78 (Inherited: 0x78)
struct UMFQuestPrimaryCondition_IntMapChanged : UMFQuestPrimaryConditionBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestPrimaryCondition_IntMapChanged, "MFQuestPrimaryCondition_IntMapChanged")

	// Object: Function MFQuestSystem.MFQuestPrimaryCondition_IntMapChanged.OnBlackboardIntMapChanged
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4f1020c
	// Params: [ Num(5) Size(0x20) ]
	void OnBlackboardIntMapChanged(struct AActor* ObjectiveInstigator, struct AActor* TargetActor, const struct FGameplayTag& Key, int32_t CurrentValue, int32_t PreviousValue);
};

// Object: Class MFQuestSystem.MFQuestPrimaryCondition_ObjArrMapChanged
// Size: 0x78 (Inherited: 0x78)
struct UMFQuestPrimaryCondition_ObjArrMapChanged : UMFQuestPrimaryConditionBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestPrimaryCondition_ObjArrMapChanged, "MFQuestPrimaryCondition_ObjArrMapChanged")

	// Object: Function MFQuestSystem.MFQuestPrimaryCondition_ObjArrMapChanged.OnBlackboardObjectArrayMapChanged
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4f103c4
	// Params: [ Num(3) Size(0x20) ]
	void OnBlackboardObjectArrayMapChanged(struct AActor* TargetActor, const struct FGameplayTag& Key, const struct TArray<struct UObject*>& ObjectArray);
};

// Object: Class MFQuestSystem.MFQuestProgressComponentBase
// Size: 0x100 (Inherited: 0xE8)
struct UMFQuestProgressComponentBase : UMFQuestComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestProgressComponentBase, "MFQuestProgressComponentBase")

	int32_t BringInProgress; // 0xE8(0x4)
	int32_t CurrProgress; // 0xEC(0x4)
	int32_t MaxProgress; // 0xF0(0x4)
	int32_t OldProgress; // 0xF4(0x4)
	bool bClearWhenFail; // 0xF8(0x1)
	bool bCanBringInProgress; // 0xF9(0x1)
	uint8_t Pad_0xFA[0x6]; // 0xFA(0x6)

	// Object: Function MFQuestSystem.MFQuestProgressComponentBase.OnReq_MaxProgress
	// Flags: [Native|Protected]
	// Offset: 0x4f10660
	// Params: [ Num(0) Size(0x0) ]
	void OnReq_MaxProgress();

	// Object: Function MFQuestSystem.MFQuestProgressComponentBase.OnReq_CurrProgress
	// Flags: [Native|Protected]
	// Offset: 0x4f1067c
	// Params: [ Num(0) Size(0x0) ]
	void OnReq_CurrProgress();

	// Object: Function MFQuestSystem.MFQuestProgressComponentBase.IsQuestProgressFinished
	// Flags: [Native|Public]
	// Offset: 0x4f10698
	// Params: [ Num(1) Size(0x1) ]
	bool IsQuestProgressFinished();
};

// Object: Class MFQuestSystem.MFQuestProgressComp_Count
// Size: 0x110 (Inherited: 0x100)
struct UMFQuestProgressComp_Count : UMFQuestProgressComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestProgressComp_Count, "MFQuestProgressComp_Count")

	int32_t ProgressUnit; // 0xFC(0x4)
	int32_t CachedProgress; // 0x100(0x4)
	bool bReachMaxNotComplete; // 0x104(0x1)
	int32_t OneBattleMaxAddProgress; // 0x108(0x4)
	int32_t OneBattleAddedProgress; // 0x10C(0x4)
};

// Object: Class MFQuestSystem.MFQuestStartNode
// Size: 0x58 (Inherited: 0x58)
struct UMFQuestStartNode : UMFQuestNode
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestStartNode, "MFQuestStartNode")
};

// Object: Class MFQuestSystem.MFQuestStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFQuestStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFQuestStatics, "MFQuestStatics")

	// Object: Function MFQuestSystem.MFQuestStatics.RunQuest
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f10bf0
	// Params: [ Num(5) Size(0x31) ]
	static void RunQuest(struct AMFQuestBase* InQuest, struct AActor* InInsitigator, bool bGiveUpOldQuest, struct FLatentActionInfo LatentInfo, ERunQuestResult& RunResult);

	// Object: Function MFQuestSystem.MFQuestStatics.ResetQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f10b58
	// Params: [ Num(1) Size(0x8) ]
	static void ResetQuest(struct AMFQuestBase* InQuest);

	// Object: Function MFQuestSystem.MFQuestStatics.GetQuestManagerComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f10fb8
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFQuestManagerComponent* GetQuestManagerComponent(struct UObject* WorldContextObject);

	// Object: Function MFQuestSystem.MFQuestStatics.GetQuestManagerActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x969f21c
	// Params: [ Num(2) Size(0x10) ]
	static struct AMFQuestManagerActor* GetQuestManagerActor(struct UObject* WorldContextObject);

	// Object: Function MFQuestSystem.MFQuestStatics.GetCompareResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f109f0
	// Params: [ Num(5) Size(0x21) ]
	static bool GetCompareResult(int64_t CheckNum, ENumberCompareType CompareType, int64_t Value1, int64_t Value2);

	// Object: Function MFQuestSystem.MFQuestStatics.CreateNewQuestFromClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f10ed4
	// Params: [ Num(3) Size(0x18) ]
	static struct AMFQuestBase* CreateNewQuestFromClass(struct UObject* WorldContextObject, struct AMFQuestBase* InQuestClass);

	// Object: Function MFQuestSystem.MFQuestStatics.AssignQuestInstigator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f10db8
	// Params: [ Num(3) Size(0x11) ]
	static void AssignQuestInstigator(struct AMFQuestBase* InQuest, struct AActor* InInstigator, bool bGiveUpOldQuest);
};

} // namespace SDK
