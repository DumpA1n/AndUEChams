#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MFGlobalEventParameterTags.hpp"

namespace SDK
{

// Package: MFMission
// Enums: 24
// Structs: 37
// Classes: 48

struct AActor;
struct ACharacter;
struct FMFGlobalEventTag;
struct UWorld;
struct FMFMissionFlowNodeInstanceData;
struct FMFMissionReplicateData;
struct FMFMissionFlowReplicateData;
struct FMFMissionReplicateDataNetItemArray;
struct FMFMissionReplicateDataNetItem;
struct FMFMissionFlowReplicateDataNetItemArray;
struct FMFMissionFlowReplicateDataNetItem;
struct FMFMissionFlowExecutingNodeConfig;
struct FMFMissionFlowInstanceData;
struct FMFMissionFlowVariableInstanceData;
struct FMFMissionFlowVariableKeySelector;
struct FMissionFlowOutPuts;
struct FMissionFlowConnections;
struct FMissionFlowConnection;
struct FMissionFlowPrevConnection;
struct FGenerateResult;
struct FGenerateDescriptionTexts;
struct FWoaModelConfig;
struct FMissionFlowConnectionWeight;
struct FMFMissionFlowVariableEntry;
struct FMFMissionVariableReadBase;
struct FMFMissionVariableRead_Int;
struct FMFMissionVariableRead_Object;
struct FMFMissionVariableRead_Rotator;
struct FMFMissionVariableRead_String;
struct FMFMissionVariableRead_StringArray;
struct FMFMissionVariableRead_Vector;
struct FDebugMissionAnnounceInfo;
struct FDebugAnnounceInfo;
struct FMFMissionSelectParameter;
struct FMissionObjectivePreConditions;
struct FMissionObjectiveConditionContainer;
struct FMissionObjectiveCheckConditions;
struct FMissionInstigatorInfo;
struct FMFGlobalEventMessage_MissionSuccess;
struct FMFGlobalEventMessage_MissionFailed;
struct FMFGlobalEventMessage_MissionActivate;
struct UMFMission;
struct UMFMissionNode;
struct UMFMissionAction;
struct UMFMissionCondition;
struct UMFMissionFlow;
struct UMFMissionFlowNode;
struct UMFMissionDataComponent;
struct IMFMissionDataInterface;
struct UMFMissionFlowComponent;
struct IMFMissionFlowInterface;
struct UMFMissionFlowNode_Affiliate;
struct UMFMissionFlowNode_Composite;
struct UMFMissionFlowNode_And;
struct UMFMissionFlowNode_Assemble;
struct UMFMissionFlowNode_End;
struct UMFMissionFlowNode_Generate;
struct UMFMissionFlowNode_MakeContainer;
struct UMFMissionFlowNode_MakeArray;
struct UMFMissionFlowNode_Mission;
struct UMFMissionFlowNode_MissionFlow;
struct UMFMissionFlowNode_MultipleGates;
struct UMFMissionFlowNode_Or;
struct UMFMissionFlowNode_Pin;
struct UMFMissionFlowNode_Random;
struct UMFMissionFlowNode_Start;
struct UMFMissionFlowNode_Variable;
struct UMFMissionFlowNode_VariableGet;
struct UMFMissionFlowNode_VariableSet;
struct IMFMissionFlowVariableAssetProvider;
struct UMFMissionFlowVariableData;
struct UMFMissionFlowVariableKeyType;
struct UMFMissionVariableWriteBase;
struct UMFMissionFlowVariableKeyType_Int;
struct UMFMissionVariableWrite_Int;
struct UMFMissionFlowVariableKeyType_Object;
struct UMFMissionVariableWrite_Object;
struct UMFMissionFlowVariableKeyType_Rotator;
struct UMFMissionVariableWrite_Rotator;
struct UMFMissionFlowVariableKeyType_String;
struct UMFMissionVariableWrite_String;
struct UMFMissionFlowVariableKeyType_StringArray;
struct UMFMissionVariableWrite_StringArray;
struct UMFMissionFlowVariableKeyType_Vector;
struct UMFMissionVariableWrite_Vector;
struct UMFMissionObjective;
struct UMFMissionStatics;
struct UMFMissionSubsystem;
struct UMissionFlowTypes;

// Object: Enum MFMission.EMissionStatus
enum class EMissionStatus : uint8_t
{
	Inactive = 0,
	InProcess = 1,
	Success = 2,
	Failed = 3,
	EMissionStatus_MAX = 4
};

// Object: Enum MFMission.EMissionFailedType
enum class EMissionFailedType : uint8_t
{
	Normal = 0,
	TimeOut = 1,
	EMissionFailedType_MAX = 2
};

// Object: Enum MFMission.EMissionFlowNodeStatus
enum class EMissionFlowNodeStatus : uint8_t
{
	Inactive = 0,
	Active = 1,
	EMissionFlowNodeStatus_MAX = 2
};

// Object: Enum MFMission.EMissionTimeLimitType
enum class EMissionTimeLimitType : uint8_t
{
	None = 0,
	EnterGame = 1,
	TimeRecord = 2,
	EMissionTimeLimitType_MAX = 3
};

// Object: Enum MFMission.EMissionFlowConnectionType
enum class EMissionFlowConnectionType : uint8_t
{
	ProgressChanged = 0,
	StatusSucceed = 1,
	StatusFailed = 2,
	EMissionFlowConnectionType_MAX = 3
};

// Object: Enum MFMission.EMissionGenerateFlowState
enum class EMissionGenerateFlowState : uint8_t
{
	Wait = 0,
	SelectObjectiveNode = 1,
	GenerateBaseObjectiveText = 2,
	SelectConditionName = 3,
	SelectConditionText = 4,
	SelectActionName = 5,
	SelectActionText = 6,
	FillObjectiveTypeText = 7,
	CallGenerateObjectiveNode = 8,
	EMissionGenerateFlowState_MAX = 9
};

// Object: Enum MFMission.EMFMissionFlowTextKeyOperation
enum class EMFMissionFlowTextKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	EMFMissionFlowTextKeyOperation_MAX = 4
};

// Object: Enum MFMission.EMFMissionFlowArithmeticKeyOperation
enum class EMFMissionFlowArithmeticKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EMFMissionFlowArithmeticKeyOperation_MAX = 6
};

// Object: Enum MFMission.EMFMissionFlowBasicKeyOperation
enum class EMFMissionFlowBasicKeyOperation : uint8_t
{
	Set = 0,
	NotSet = 1,
	EMFMissionFlowBasicKeyOperation_MAX = 2
};

// Object: Enum MFMission.EMissionFlowCompleteType
enum class EMissionFlowCompleteType : uint8_t
{
	OneBattle = 0,
	MultipleBattle = 1,
	EMissionFlowCompleteType_MAX = 2
};

// Object: Enum MFMission.EMissionFlowType
enum class EMissionFlowType : uint8_t
{
	Normal = 0,
	Activity = 1,
	EMissionFlowType_MAX = 2
};

// Object: Enum MFMission.EMissionSelectParameterType
enum class EMissionSelectParameterType : uint8_t
{
	None = 0,
	Tag = 1,
	Variable = 2,
	EMissionSelectParameterType_MAX = 3
};

// Object: Enum MFMission.EMissionFlowNodeType
enum class EMissionFlowNodeType : uint8_t
{
	BaseNode = 0,
	CheckNode = 1,
	RelationNode = 2,
	AssembleNode = 3,
	AffiliateNode = 4,
	BehaviorNode = 5,
	EMissionFlowNodeType_MAX = 6
};

// Object: Enum MFMission.EMissionObjectiveConditionCheckType
enum class EMissionObjectiveConditionCheckType : uint8_t
{
	And = 0,
	Or = 1,
	EMissionObjectiveConditionCheckType_MAX = 2
};

// Object: Enum MFMission.EMissionRelatedTeamType
enum class EMissionRelatedTeamType : uint8_t
{
	TargetTeammateOnly = 0,
	RandomTeam = 1,
	EMissionRelatedTeamType_MAX = 2
};

// Object: Enum MFMission.EMissionRelatedTargetType
enum class EMissionRelatedTargetType : uint8_t
{
	TargetOnly = 0,
	TargetTeammateOnly = 1,
	RandomTeam = 2,
	AllPMC = 3,
	AllSCAV = 4,
	SameFactionOtherTeam = 5,
	AllOtherTeam = 6,
	TargetExcludeTeammateOnly = 7,
	AllEnemyPMC = 8,
	AllCompetitionOBPlayer = 9,
	EMissionRelatedTargetType_MAX = 10
};

// Object: Enum MFMission.EMissionCompareType
enum class EMissionCompareType : uint8_t
{
	CMP_None = 0,
	CMP_Equals = 1,
	CMP_NotEqual = 2,
	CMP_Greater = 3,
	CMP_Less = 4,
	CMP_GreaterEqual = 5,
	CMP_LessEqual = 6,
	CMP_Between = 7,
	CMP_MAX = 8
};

// Object: Enum MFMission.EMissionInstigatorType
enum class EMissionInstigatorType : uint8_t
{
	None = 0,
	Individual = 1,
	Team = 2,
	Public = 3,
	EMissionInstigatorType_MAX = 4
};

// Object: Enum MFMission.EMissionConditionCheckType
enum class EMissionConditionCheckType : uint8_t
{
	Event = 0,
	Tick = 1,
	Both = 2,
	EMissionConditionCheckType_MAX = 3
};

// Object: Enum MFMission.EMissionConditionType
enum class EMissionConditionType : uint8_t
{
	Keeping = 0,
	Filter = 1,
	EMissionConditionType_MAX = 2
};

// Object: Enum MFMission.EMissionHelpType
enum class EMissionHelpType : uint8_t
{
	Alone = 0,
	Teammate = 1,
	Anyone = 2,
	EMissionHelpType_MAX = 3
};

// Object: Enum MFMission.EMissionDataType
enum class EMissionDataType : uint8_t
{
	None = 0,
	Person = 1,
	Team = 2,
	Faction = 4,
	World = 8,
	EMissionDataType_MAX = 9
};

// Object: Enum MFMission.ERunMissionResult
enum class ERunMissionResult : uint8_t
{
	Success = 0,
	Failed = 1,
	ERunMissionResult_MAX = 2
};

// Object: Enum MFMission.EMFMissionDataChangeType
enum class EMFMissionDataChangeType : uint8_t
{
	MissionFlowStatus = 0,
	MissionStatus = 1,
	CurProgress = 2,
	RemainTime = 3,
	AttributeReplicate = 4,
	EMFMissionDataChangeType_MAX = 5
};

// Object: ScriptStruct MFMission.MFMissionFlowNodeInstanceData
// Size: 0x58 (Inherited: 0x0)
struct FMFMissionFlowNodeInstanceData
{
	struct AActor* Instigator; // 0x0(0x8)
	struct UMFMissionFlowNode* MissionFlowNode; // 0x8(0x8)
	EMissionFlowNodeStatus NodeStatus; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UMFMissionObjective* Objective; // 0x18(0x8)
	EMissionStatus MissionStatus; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t InitialProgress; // 0x24(0x4)
	int32_t OldProgress; // 0x28(0x4)
	int32_t CurProgress; // 0x2C(0x4)
	int32_t BeginProgress; // 0x30(0x4)
	int32_t EndProgress; // 0x34(0x4)
	int32_t CachedProgress; // 0x38(0x4)
	int32_t OneBattleAddedProgress; // 0x3C(0x4)
	float ActivationTime; // 0x40(0x4)
	float FinishTime; // 0x44(0x4)
	float RemainTime; // 0x48(0x4)
	float RemainTimeUpdateServerTime; // 0x4C(0x4)
	bool bHasTryInteract; // 0x50(0x1)
	EMissionFailedType FailedType; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
};

// Object: ScriptStruct MFMission.MFMissionReplicateData
// Size: 0x60 (Inherited: 0x0)
struct FMFMissionReplicateData
{
	struct AActor* Instigator; // 0x0(0x8)
	struct FString MissionName; // 0x8(0x10)
	struct FString MissionFlowName; // 0x18(0x10)
	EMissionStatus MissionStatus; // 0x28(0x1)
	EMissionStatus OldMissionStatus; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t InitialProgress; // 0x2C(0x4)
	int32_t OldProgress; // 0x30(0x4)
	int32_t CurProgress; // 0x34(0x4)
	float RemainTime; // 0x38(0x4)
	float RemainTimeUpdateServerTime; // 0x3C(0x4)
	bool bFailWhenAchieved; // 0x40(0x1)
	bool bNeedReport; // 0x41(0x1)
	bool bNeedReportProgress; // 0x42(0x1)
	uint8_t Pad_0x43[0x5]; // 0x43(0x5)
	struct TArray<struct FString> AffiliateMissionList; // 0x48(0x10)
	bool bValid; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
};

// Object: ScriptStruct MFMission.MFMissionFlowReplicateData
// Size: 0x20 (Inherited: 0x0)
struct FMFMissionFlowReplicateData
{
	struct AActor* Instigator; // 0x0(0x8)
	struct FString MissionFlowName; // 0x8(0x10)
	EMissionStatus MissionFlowStatus; // 0x18(0x1)
	EMissionStatus OldMissionFlowStatus; // 0x19(0x1)
	bool bBeforeState; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	float StatusChangeTime; // 0x1C(0x4)
};

// Object: ScriptStruct MFMission.MFMissionReplicateDataNetItemArray
// Size: 0x128 (Inherited: 0x110)
struct FMFMissionReplicateDataNetItemArray : FFastArraySerializer
{
	struct TArray<struct FMFMissionReplicateDataNetItem> NetItems; // 0x110(0x10)
	struct UMFMissionDataComponent* Owner; // 0x120(0x8)
};

// Object: ScriptStruct MFMission.MFMissionReplicateDataNetItem
// Size: 0x78 (Inherited: 0xC)
struct FMFMissionReplicateDataNetItem : FFastArraySerializerItem
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FMFMissionReplicateData NetItemData; // 0x10(0x60)
	EMFMissionDataChangeType ChangeType; // 0x70(0x1)
	bool bDummy; // 0x71(0x1)
	uint8_t Pad_0x72[0x6]; // 0x72(0x6)
};

// Object: ScriptStruct MFMission.MFMissionFlowReplicateDataNetItemArray
// Size: 0x128 (Inherited: 0x110)
struct FMFMissionFlowReplicateDataNetItemArray : FFastArraySerializer
{
	struct TArray<struct FMFMissionFlowReplicateDataNetItem> NetItems; // 0x110(0x10)
	struct UMFMissionDataComponent* Owner; // 0x120(0x8)
};

// Object: ScriptStruct MFMission.MFMissionFlowReplicateDataNetItem
// Size: 0x38 (Inherited: 0xC)
struct FMFMissionFlowReplicateDataNetItem : FFastArraySerializerItem
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FMFMissionFlowReplicateData NetItemData; // 0x10(0x20)
	EMFMissionDataChangeType ChangeType; // 0x30(0x1)
	bool bDummy; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
};

// Object: ScriptStruct MFMission.MFMissionFlowExecutingNodeConfig
// Size: 0x18 (Inherited: 0x0)
struct FMFMissionFlowExecutingNodeConfig
{
	bool bExecutingFlow; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct UMFMissionFlowNode*> NodeList; // 0x8(0x10)
};

// Object: ScriptStruct MFMission.MFMissionFlowInstanceData
// Size: 0x28 (Inherited: 0x0)
struct FMFMissionFlowInstanceData
{
	struct AActor* Instigator; // 0x0(0x8)
	struct UMFMissionFlow* MissionFlow; // 0x8(0x8)
	EMissionStatus MissionFlowStatus; // 0x10(0x1)
	bool bBeforeState; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct ACharacter* LastTriggerCharacter; // 0x18(0x8)
	int32_t LoopCount; // 0x20(0x4)
	bool bLoopExit; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct MFMission.MFMissionFlowVariableInstanceData
// Size: 0xB8 (Inherited: 0x0)
struct FMFMissionFlowVariableInstanceData
{
	struct UMFMissionDataComponent* DataComp; // 0x0(0x8)
	struct UMFMissionFlow* MissionFlow; // 0x8(0x8)
	struct UMFMissionFlowVariableData* VariableAsset; // 0x10(0x8)
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
	struct TArray<struct UMFMissionFlowVariableKeyType*> KeyInstances; // 0x38(0x10)
	uint8_t Pad_0x48[0x70]; // 0x48(0x70)
};

// Object: ScriptStruct MFMission.MFMissionFlowVariableKeySelector
// Size: 0x28 (Inherited: 0x0)
struct FMFMissionFlowVariableKeySelector
{
	struct TArray<struct UMFMissionFlowVariableKeyType*> AllowedTypes; // 0x0(0x10)
	struct FName SelectedKeyName; // 0x10(0x8)
	struct UMFMissionFlowVariableKeyType* SelectedKeyType; // 0x18(0x8)
	uint8_t SelectedKeyID; // 0x20(0x1)
	bool bNoneIsAllowedValue; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
};

// Object: ScriptStruct MFMission.MissionFlowOutPuts
// Size: 0x30 (Inherited: 0x0)
struct FMissionFlowOutPuts
{
	struct FMFGlobalEventParameterTag OutPutTag; // 0x0(0x8)
	struct FMFMissionFlowVariableKeySelector VariableKey; // 0x8(0x28)
};

// Object: ScriptStruct MFMission.MissionFlowConnections
// Size: 0x10 (Inherited: 0x0)
struct FMissionFlowConnections
{
	struct TArray<struct FMissionFlowConnection> Connections; // 0x0(0x10)
};

// Object: ScriptStruct MFMission.MissionFlowConnection
// Size: 0x8 (Inherited: 0x0)
struct FMissionFlowConnection
{
	struct UMFMissionFlowNode* ConnectNode; // 0x0(0x8)
};

// Object: ScriptStruct MFMission.MissionFlowPrevConnection
// Size: 0x10 (Inherited: 0x8)
struct FMissionFlowPrevConnection : FMissionFlowConnection
{
	EMissionFlowConnectionType PrevConnectionType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct MFMission.GenerateResult
// Size: 0x38 (Inherited: 0x0)
struct FGenerateResult
{
	bool bSuccess; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString GeneratedText; // 0x8(0x10)
	struct FString ErrorMessage; // 0x18(0x10)
	struct FString QueryID; // 0x28(0x10)
};

// Object: ScriptStruct MFMission.GenerateDescriptionTexts
// Size: 0x90 (Inherited: 0x0)
struct FGenerateDescriptionTexts
{
	struct FString OnActivateText; // 0x0(0x10)
	struct FString PreConditionText; // 0x10(0x10)
	struct FString ActivateActionText; // 0x20(0x10)
	struct FString AccumulateProgressText; // 0x30(0x10)
	struct FString CheckConditionText; // 0x40(0x10)
	struct FString ProgressActionText; // 0x50(0x10)
	struct FString SuccessActionText; // 0x60(0x10)
	struct FString FailedActionText; // 0x70(0x10)
	struct FString OtherText; // 0x80(0x10)
};

// Object: ScriptStruct MFMission.WoaModelConfig
// Size: 0x60 (Inherited: 0x0)
struct FWoaModelConfig
{
	struct FString ApiKey; // 0x0(0x10)
	struct FString ModelName; // 0x10(0x10)
	struct FString ApiBase; // 0x20(0x10)
	int32_t Timeout; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString SystemPrompt; // 0x38(0x10)
	float Temperature; // 0x48(0x4)
	float TopP; // 0x4C(0x4)
	int32_t TopK; // 0x50(0x4)
	float RepetitionPenalty; // 0x54(0x4)
	int32_t MaxRetryAttempts; // 0x58(0x4)
	float RetryWaitTime; // 0x5C(0x4)
};

// Object: ScriptStruct MFMission.MissionFlowConnectionWeight
// Size: 0x8 (Inherited: 0x0)
struct FMissionFlowConnectionWeight
{
	uint8_t Index; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Weight; // 0x4(0x4)
};

// Object: ScriptStruct MFMission.MFMissionFlowVariableEntry
// Size: 0x20 (Inherited: 0x0)
struct FMFMissionFlowVariableEntry
{
	struct FName EntryName; // 0x0(0x8)
	struct UMFMissionFlowVariableKeyType* KeyType; // 0x8(0x8)
	uint8_t bInstanceSynced : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FName Category; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MFMission.MFMissionVariableReadBase
// Size: 0x28 (Inherited: 0x0)
struct FMFMissionVariableReadBase
{
	struct FMFMissionFlowVariableKeySelector Key; // 0x0(0x28)
};

// Object: ScriptStruct MFMission.MFMissionVariableRead_Int
// Size: 0x30 (Inherited: 0x28)
struct FMFMissionVariableRead_Int : FMFMissionVariableReadBase
{
	int32_t ConfigValue; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct MFMission.MFMissionVariableRead_Object
// Size: 0x30 (Inherited: 0x28)
struct FMFMissionVariableRead_Object : FMFMissionVariableReadBase
{
	struct UObject* ConfigValue; // 0x28(0x8)
};

// Object: ScriptStruct MFMission.MFMissionVariableRead_Rotator
// Size: 0x38 (Inherited: 0x28)
struct FMFMissionVariableRead_Rotator : FMFMissionVariableReadBase
{
	struct FRotator ConfigValue; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct MFMission.MFMissionVariableRead_String
// Size: 0x38 (Inherited: 0x28)
struct FMFMissionVariableRead_String : FMFMissionVariableReadBase
{
	struct FString ConfigValue; // 0x28(0x10)
};

// Object: ScriptStruct MFMission.MFMissionVariableRead_StringArray
// Size: 0x38 (Inherited: 0x28)
struct FMFMissionVariableRead_StringArray : FMFMissionVariableReadBase
{
	struct TArray<struct FString> ConfigValue; // 0x28(0x10)
};

// Object: ScriptStruct MFMission.MFMissionVariableRead_Vector
// Size: 0x38 (Inherited: 0x28)
struct FMFMissionVariableRead_Vector : FMFMissionVariableReadBase
{
	struct FVector ConfigValue; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct MFMission.DebugMissionAnnounceInfo
// Size: 0x20 (Inherited: 0x0)
struct FDebugMissionAnnounceInfo
{
	struct FString MissionName; // 0x0(0x10)
	struct TArray<struct FDebugAnnounceInfo> AnnounceInfos; // 0x10(0x10)
};

// Object: ScriptStruct MFMission.DebugAnnounceInfo
// Size: 0x30 (Inherited: 0x0)
struct FDebugAnnounceInfo
{
	struct FString MissionName; // 0x0(0x10)
	int32_t AnnounceID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText OptionalText; // 0x18(0x18)
};

// Object: ScriptStruct MFMission.MFMissionSelectParameter
// Size: 0x38 (Inherited: 0x0)
struct FMFMissionSelectParameter
{
	EMissionSelectParameterType SelectParameterType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FMFGlobalEventParameterTag SelectParameterTag; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FMFMissionFlowVariableKeySelector SelectVariableKey; // 0x10(0x28)
};

// Object: ScriptStruct MFMission.MissionObjectivePreConditions
// Size: 0x28 (Inherited: 0x0)
struct FMissionObjectivePreConditions
{
	EMissionObjectiveConditionCheckType CheckType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FMissionObjectiveConditionContainer> ConditionContainers; // 0x8(0x10)
	struct TArray<struct UMFMissionAction*> ActivateActions; // 0x18(0x10)
};

// Object: ScriptStruct MFMission.MissionObjectiveConditionContainer
// Size: 0x18 (Inherited: 0x0)
struct FMissionObjectiveConditionContainer
{
	EMissionObjectiveConditionCheckType CheckType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct UMFMissionCondition*> Conditions; // 0x8(0x10)
};

// Object: ScriptStruct MFMission.MissionObjectiveCheckConditions
// Size: 0x60 (Inherited: 0x0)
struct FMissionObjectiveCheckConditions
{
	EMissionHelpType HelpType; // 0x0(0x1)
	EMissionCompareType CompareType; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t BeginProgress; // 0x4(0x4)
	int32_t EndProgress; // 0x8(0x4)
	int32_t ProgressUnit; // 0xC(0x4)
	int32_t ProgressFactor; // 0x10(0x4)
	bool bNeedReportProgress; // 0x14(0x1)
	bool bNeedReport; // 0x15(0x1)
	bool bReachEndNotComplete; // 0x16(0x1)
	bool bActivateReachEndComplete; // 0x17(0x1)
	int32_t OneBattleMaxAddProgress; // 0x18(0x4)
	bool bFailWhenAchieved; // 0x1C(0x1)
	EMissionObjectiveConditionCheckType CheckType; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	struct TArray<struct FMissionObjectiveConditionContainer> ConditionContainers; // 0x20(0x10)
	struct TArray<struct UMFMissionAction*> ProgressActions; // 0x30(0x10)
	struct TArray<struct UMFMissionAction*> SuccessActions; // 0x40(0x10)
	struct TArray<struct UMFMissionAction*> FailedActions; // 0x50(0x10)
};

// Object: ScriptStruct MFMission.MissionInstigatorInfo
// Size: 0x10 (Inherited: 0x0)
struct FMissionInstigatorInfo
{
	struct TArray<struct UObject*> Instigators; // 0x0(0x10)
};

// Object: ScriptStruct MFMission.MFGlobalEventMessage_MissionSuccess
// Size: 0x8 (Inherited: 0x0)
struct FMFGlobalEventMessage_MissionSuccess
{
	struct AActor* Instigator; // 0x0(0x8)
};

// Object: ScriptStruct MFMission.MFGlobalEventMessage_MissionFailed
// Size: 0x8 (Inherited: 0x0)
struct FMFGlobalEventMessage_MissionFailed
{
	struct AActor* Instigator; // 0x0(0x8)
};

// Object: ScriptStruct MFMission.MFGlobalEventMessage_MissionActivate
// Size: 0x8 (Inherited: 0x0)
struct FMFGlobalEventMessage_MissionActivate
{
	struct AActor* Instigator; // 0x0(0x8)
};

// Object: Class MFMission.MFMission
// Size: 0x30 (Inherited: 0x28)
struct UMFMission : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMission, "MFMission")

	struct UMFMissionObjective* Objective; // 0x28(0x8)
};

// Object: Class MFMission.MFMissionNode
// Size: 0x38 (Inherited: 0x28)
struct UMFMissionNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionNode, "MFMissionNode")

	struct UMFMissionFlowNode* MissionFlowNode; // 0x28(0x8)
	struct FMFGlobalEventParameterTag InstigatorTag; // 0x30(0x8)

	// Object: Function MFMission.MFMissionNode.ShouldListener
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39c9c80
	// Params: [ Num(2) Size(0x9) ]
	bool ShouldListener(const struct FMFGlobalEventTag& InEventTag);

	// Object: Function MFMission.MFMissionNode.OnMissionStatusChanged
	// Flags: [Native|Public]
	// Offset: 0x39ca064
	// Params: [ Num(3) Size(0xA) ]
	void OnMissionStatusChanged(struct UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus);

	// Object: Function MFMission.MFMissionNode.OnMissionProgressChanged
	// Flags: [Native|Public]
	// Offset: 0x39c9f38
	// Params: [ Num(3) Size(0x10) ]
	void OnMissionProgressChanged(struct UMFMissionFlowComponent* InInstigator, int32_t NewProgress, int32_t OldProgress);

	// Object: Function MFMission.MFMissionNode.InitializeNode
	// Flags: [Native|Public]
	// Offset: 0x39ca40c
	// Params: [ Num(1) Size(0x8) ]
	void InitializeNode(struct UMFMissionFlowNode* InNode);

	// Object: Function MFMission.MFMissionNode.GetMissionName
	// Flags: [Final|Native|Public]
	// Offset: 0x39c9e80
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMissionName();

	// Object: Function MFMission.MFMissionNode.GetMissionIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x39c9e4c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMissionIndex();

	// Object: Function MFMission.MFMissionNode.GetMissionFlowNodeInfo
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39c9be4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMissionFlowNodeInfo();

	// Object: Function MFMission.MFMissionNode.GetMissionFlowNode
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39c9f1c
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowNode* GetMissionFlowNode();

	// Object: Function MFMission.MFMissionNode.GetMissionFlowName
	// Flags: [Final|Native|Public]
	// Offset: 0x39c9d7c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMissionFlowName();

	// Object: Function MFMission.MFMissionNode.GetMissionFlowIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x39c9d48
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMissionFlowIndex();

	// Object: Function MFMission.MFMissionNode.GetMissionFlow
	// Flags: [Final|Native|Public]
	// Offset: 0x39c9e18
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlow* GetMissionFlow();

	// Object: Function MFMission.MFMissionNode.ExecuteNode
	// Flags: [Native|Public]
	// Offset: 0x39ca2ac
	// Params: [ Num(1) Size(0x8) ]
	void ExecuteNode(struct UMFMissionFlowComponent* InInstigator);

	// Object: Function MFMission.MFMissionNode.DestroyNode
	// Flags: [Native|Public]
	// Offset: 0x39ca194
	// Params: [ Num(0) Size(0x0) ]
	void DestroyNode();

	// Object: Function MFMission.MFMissionNode.DeactivateNode
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39ca1b0
	// Params: [ Num(2) Size(0x9) ]
	void DeactivateNode(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InStatus);

	// Object: Function MFMission.MFMissionNode.ActivateNode
	// Flags: [Native|Public]
	// Offset: 0x39ca35c
	// Params: [ Num(1) Size(0x8) ]
	void ActivateNode(struct UMFMissionFlowComponent* InInstigator);
};

// Object: Class MFMission.MFMissionAction
// Size: 0x40 (Inherited: 0x38)
struct UMFMissionAction : UMFMissionNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionAction, "MFMissionAction")

	struct UMFMissionObjective* Objective; // 0x38(0x8)
};

// Object: Class MFMission.MFMissionCondition
// Size: 0x48 (Inherited: 0x38)
struct UMFMissionCondition : UMFMissionNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionCondition, "MFMissionCondition")

	struct UMFMissionObjective* Objective; // 0x38(0x8)
	bool bEqualCondition; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: Class MFMission.MFMissionFlow
// Size: 0x98 (Inherited: 0x28)
struct UMFMissionFlow : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlow, "MFMissionFlow")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UWorld* WorldPrivate; // 0x30(0x8)
	struct UMFMissionFlowNode_Start* StartNode; // 0x38(0x8)
	struct UMFMissionFlowNode_End* EndNode; // 0x40(0x8)
	struct TArray<struct UMFMissionFlowNode*> NodeList; // 0x48(0x10)
	bool bCustomName; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct FString MissionFlowName; // 0x60(0x10)
	EMissionDataType DataType; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	int32_t LoopTimes; // 0x74(0x4)
	bool bFailedLoopEnable; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct UMFMissionFlowVariableData* VariableAsset; // 0x80(0x8)
	struct FString MissionFlowDescription; // 0x88(0x10)

	// Object: Function MFMission.MFMissionFlow.SetVariableAsset
	// Flags: [Final|Native|Public]
	// Offset: 0x39afea8
	// Params: [ Num(1) Size(0x8) ]
	void SetVariableAsset(struct UMFMissionFlowVariableData* NewAsset);

	// Object: Function MFMission.MFMissionFlow.SetStartNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0680
	// Params: [ Num(1) Size(0x8) ]
	void SetStartNode(struct UMFMissionFlowNode_Start* InStartNode);

	// Object: Function MFMission.MFMissionFlow.SetMissionFlowName
	// Flags: [Final|Native|Public]
	// Offset: 0x39b017c
	// Params: [ Num(1) Size(0x10) ]
	void SetMissionFlowName(struct FString InName);

	// Object: Function MFMission.MFMissionFlow.SetEndNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39b05c0
	// Params: [ Num(1) Size(0x8) ]
	void SetEndNode(struct UMFMissionFlowNode_End* InEndNode);

	// Object: Function MFMission.MFMissionFlow.SetDataType
	// Flags: [Final|Native|Public]
	// Offset: 0x39aff84
	// Params: [ Num(1) Size(0x1) ]
	void SetDataType(EMissionDataType InType);

	// Object: Function MFMission.MFMissionFlow.SetCustomName
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0294
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomName(bool bFlag);

	// Object: Function MFMission.MFMissionFlow.ResetNodeList
	// Flags: [Final|Native|Public]
	// Offset: 0x39b04d0
	// Params: [ Num(0) Size(0x0) ]
	void ResetNodeList();

	// Object: Function MFMission.MFMissionFlow.OnMissionFlowStatusChange
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0724
	// Params: [ Num(2) Size(0x9) ]
	void OnMissionFlowStatusChange(struct UMFMissionFlowComponent* InInstigator, EMissionStatus InStatus);

	// Object: Function MFMission.MFMissionFlow.IsValidMissionFlow
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39b0028
	// Params: [ Num(1) Size(0x1) ]
	bool IsValidMissionFlow();

	// Object: Function MFMission.MFMissionFlow.IsCustomName
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0278
	// Params: [ Num(1) Size(0x1) ]
	bool IsCustomName();

	// Object: Function MFMission.MFMissionFlow.InitializeMissionFlow
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0820
	// Params: [ Num(1) Size(0x8) ]
	void InitializeMissionFlow(struct UWorld* InWorld);

	// Object: Function MFMission.MFMissionFlow.GetStartNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0664
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowNode_Start* GetStartNode();

	// Object: Function MFMission.MFMissionFlow.GetNodeList
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0400
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFMissionFlowNode*> GetNodeList();

	// Object: Function MFMission.MFMissionFlow.GetMissionFlowNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39b0340
	// Params: [ Num(2) Size(0x18) ]
	struct UMFMissionFlowNode* GetMissionFlowNode(struct FString InName);

	// Object: Function MFMission.MFMissionFlow.GetMissionFlowName
	// Flags: [Final|Native|Public]
	// Offset: 0x39b00ac
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMissionFlowName();

	// Object: Function MFMission.MFMissionFlow.GetMissionFlowID
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39b0078
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMissionFlowID();

	// Object: Function MFMission.MFMissionFlow.GetLoopTimes
	// Flags: [Final|Native|Public]
	// Offset: 0x39aff4c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLoopTimes();

	// Object: Function MFMission.MFMissionFlow.GetEndNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39b05a4
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowNode_End* GetEndNode();

	// Object: Function MFMission.MFMissionFlow.GetDataType
	// Flags: [Final|Native|Public]
	// Offset: 0x39aff68
	// Params: [ Num(1) Size(0x1) ]
	EMissionDataType GetDataType();

	// Object: Function MFMission.MFMissionFlow.DestroyFlow
	// Flags: [Final|Native|Public]
	// Offset: 0x39b080c
	// Params: [ Num(0) Size(0x0) ]
	void DestroyFlow();

	// Object: Function MFMission.MFMissionFlow.AddNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39b04fc
	// Params: [ Num(1) Size(0x8) ]
	void AddNode(struct UMFMissionFlowNode* InNode);
};

// Object: Class MFMission.MFMissionFlowNode
// Size: 0xF8 (Inherited: 0x28)
struct UMFMissionFlowNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode, "MFMissionFlowNode")

	struct UMFMissionFlow* MissionFlowAsset; // 0x28(0x8)
	struct TWeakObjectPtr<struct UMFMissionFlowNode> ParentNode; // 0x30(0x8)
	struct TArray<struct FMissionFlowPrevConnection> PrevConnections; // 0x38(0x10)
	struct TMap<uint8_t, struct FMissionFlowConnections> NextConnectionsMap; // 0x48(0x50)
	struct FMulticastInlineDelegate OnMissionStatusChangedEvent; // 0x98(0x10)
	bool bCustomName; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct FString MissionName; // 0xB0(0x10)
	struct UMFMissionObjective* Objective; // 0xC0(0x8)
	EMissionFlowNodeType nodeType; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct FString NodeName; // 0xD0(0x10)
	struct TArray<struct FMissionFlowOutPuts> OutPutList; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)

	// Object: Function MFMission.MFMissionFlowNode.UnRegisterInstigator
	// Flags: [Native|Public]
	// Offset: 0x39c3eb4
	// Params: [ Num(1) Size(0x8) ]
	void UnRegisterInstigator(struct UMFMissionFlowComponent* InInstigator);

	// Object: Function MFMission.MFMissionFlowNode.SetParentNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39c32e8
	// Params: [ Num(1) Size(0x8) ]
	void SetParentNode(struct UMFMissionFlowNode* InParentNode);

	// Object: Function MFMission.MFMissionFlowNode.SetObjective
	// Flags: [Final|Native|Public]
	// Offset: 0x39c2db0
	// Params: [ Num(1) Size(0x8) ]
	void SetObjective(struct UMFMissionObjective* InObjective);

	// Object: Function MFMission.MFMissionFlowNode.SetMissionName
	// Flags: [Final|Native|Public]
	// Offset: 0x39c2ef0
	// Params: [ Num(1) Size(0x10) ]
	void SetMissionName(struct FString InName);

	// Object: Function MFMission.MFMissionFlowNode.SetCustomName
	// Flags: [Final|Native|Public]
	// Offset: 0x39c3008
	// Params: [ Num(1) Size(0x1) ]
	void SetCustomName(bool bFlag);

	// Object: Function MFMission.MFMissionFlowNode.RegisterInstigator
	// Flags: [Native|Public]
	// Offset: 0x39c3f64
	// Params: [ Num(2) Size(0x9) ]
	void RegisterInstigator(struct UMFMissionFlowComponent* InInstigator, bool bReplicate);

	// Object: Function MFMission.MFMissionFlowNode.OnMissionStatusChanged
	// Flags: [Native|Public]
	// Offset: 0x39c380c
	// Params: [ Num(3) Size(0xA) ]
	void OnMissionStatusChanged(struct UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus);

	// Object: Function MFMission.MFMissionFlowNode.IsValidMission
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39c2d3c
	// Params: [ Num(1) Size(0x1) ]
	bool IsValidMission();

	// Object: Function MFMission.MFMissionFlowNode.IsCustomName
	// Flags: [Final|Native|Public]
	// Offset: 0x39c2fec
	// Params: [ Num(1) Size(0x1) ]
	bool IsCustomName();

	// Object: Function MFMission.MFMissionFlowNode.HasPrevConnection
	// Flags: [Final|Native|Public]
	// Offset: 0x39c3150
	// Params: [ Num(1) Size(0x1) ]
	bool HasPrevConnection();

	// Object: Function MFMission.MFMissionFlowNode.GetVariableOwnedMissionFlow
	// Flags: [Final|Native|Public]
	// Offset: 0x39c3260
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlow* GetVariableOwnedMissionFlow();

	// Object: Function MFMission.MFMissionFlowNode.GetSucceedConnections
	// Flags: [Final|Native|Public]
	// Offset: 0x39c342c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFMissionFlowNode*> GetSucceedConnections();

	// Object: Function MFMission.MFMissionFlowNode.GetPrevConnections
	// Flags: [Final|Native|Public]
	// Offset: 0x39c35b0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFMissionFlowNode*> GetPrevConnections();

	// Object: Function MFMission.MFMissionFlowNode.GetParentNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39c32b0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowNode* GetParentNode();

	// Object: Function MFMission.MFMissionFlowNode.GetOwnMissionFlow
	// Flags: [Native|Public]
	// Offset: 0x39c37d0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlow* GetOwnMissionFlow();

	// Object: Function MFMission.MFMissionFlowNode.GetOutPutList
	// Flags: [Final|Native|Public]
	// Offset: 0x39c2ca4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FMissionFlowOutPuts> GetOutPutList();

	// Object: Function MFMission.MFMissionFlowNode.GetObjective
	// Flags: [Final|Native|Public]
	// Offset: 0x39c2d94
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionObjective* GetObjective();

	// Object: Function MFMission.MFMissionFlowNode.GetNodeMissionStatus
	// Flags: [Native|Public]
	// Offset: 0x39c3174
	// Params: [ Num(2) Size(0x9) ]
	EMissionStatus GetNodeMissionStatus(struct UMFMissionFlowComponent* InInstigator);

	// Object: Function MFMission.MFMissionFlowNode.GetMissionName
	// Flags: [Final|Native|Public]
	// Offset: 0x39c2e54
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMissionName();

	// Object: Function MFMission.MFMissionFlowNode.GetMissionFlowNodeInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x39c3734
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMissionFlowNodeInfo();

	// Object: Function MFMission.MFMissionFlowNode.GetMissionFlowName
	// Flags: [Final|Native|Public]
	// Offset: 0x39c30b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMissionFlowName();

	// Object: Function MFMission.MFMissionFlowNode.GetMissionFlow
	// Flags: [Final|Native|Public]
	// Offset: 0x39c3294
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlow* GetMissionFlow();

	// Object: Function MFMission.MFMissionFlowNode.GetFailedConnections
	// Flags: [Final|Native|Public]
	// Offset: 0x39c3390
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFMissionFlowNode*> GetFailedConnections();

	// Object: Function MFMission.MFMissionFlowNode.GetDataType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39c322c
	// Params: [ Num(1) Size(0x1) ]
	EMissionDataType GetDataType();

	// Object: Function MFMission.MFMissionFlowNode.ExecuteNode
	// Flags: [Native|Public]
	// Offset: 0x39c3958
	// Params: [ Num(2) Size(0x9) ]
	bool ExecuteNode(struct UMFMissionFlowComponent* InInstigator);

	// Object: Function MFMission.MFMissionFlowNode.EnableDeactivatePrev
	// Flags: [Native|Public]
	// Offset: 0x39c3b10
	// Params: [ Num(2) Size(0x9) ]
	bool EnableDeactivatePrev(struct UMFMissionFlowComponent* InInstigator);

	// Object: Function MFMission.MFMissionFlowNode.EnableActivate
	// Flags: [Native|Public]
	// Offset: 0x39c3cc8
	// Params: [ Num(3) Size(0xA) ]
	bool EnableActivate(struct UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus);

	// Object: Function MFMission.MFMissionFlowNode.DestroyNode
	// Flags: [Native|Public]
	// Offset: 0x39c393c
	// Params: [ Num(0) Size(0x0) ]
	void DestroyNode();

	// Object: Function MFMission.MFMissionFlowNode.DeactivatePrevNode
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39c3a14
	// Params: [ Num(2) Size(0x9) ]
	void DeactivatePrevNode(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus);

	// Object: Function MFMission.MFMissionFlowNode.DeactivatePrevConnections
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x39c289c
	// Params: [ Num(3) Size(0x20) ]
	void DeactivatePrevConnections(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus, const struct TArray<struct UMFMissionFlowNode*>& PrevNodeList);

	// Object: Function MFMission.MFMissionFlowNode.DeactivateNode
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39c3bcc
	// Params: [ Num(2) Size(0x9) ]
	void DeactivateNode(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus);

	// Object: Function MFMission.MFMissionFlowNode.DeactivateNextConnections
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x39c29f4
	// Params: [ Num(3) Size(0x20) ]
	void DeactivateNextConnections(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus, const struct TArray<struct UMFMissionFlowNode*>& NextNodeList);

	// Object: Function MFMission.MFMissionFlowNode.AddPrevConnection
	// Flags: [Final|Native|Public]
	// Offset: 0x39c364c
	// Params: [ Num(2) Size(0x9) ]
	void AddPrevConnection(struct UMFMissionFlowNode* InNode, uint8_t InConnectionType);

	// Object: Function MFMission.MFMissionFlowNode.AddNextConnection
	// Flags: [Final|Native|Public]
	// Offset: 0x39c34c8
	// Params: [ Num(2) Size(0x9) ]
	void AddNextConnection(struct UMFMissionFlowNode* InNode, uint8_t InConnectionType);

	// Object: Function MFMission.MFMissionFlowNode.ActivateNode
	// Flags: [Native|Public]
	// Offset: 0x39c3dc4
	// Params: [ Num(2) Size(0x9) ]
	void ActivateNode(struct UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus);

	// Object: Function MFMission.MFMissionFlowNode.ActivateNextConnections
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x39c2b4c
	// Params: [ Num(3) Size(0x20) ]
	void ActivateNextConnections(struct UMFMissionFlowComponent* InInstigator, const EMissionStatus& InMissionStatus, const struct TArray<struct UMFMissionFlowNode*>& NextNodeList);
};

// Object: Class MFMission.MFMissionDataComponent
// Size: 0x420 (Inherited: 0xE0)
struct UMFMissionDataComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionDataComponent, "MFMissionDataComponent")

	struct TMap<struct TWeakObjectPtr<struct UMFMissionFlow>, struct FMFMissionFlowInstanceData> MissionFlowInstanceDataMap; // 0xE0(0x50)
	struct TMap<struct TWeakObjectPtr<struct UMFMissionFlowNode>, struct FMFMissionFlowNodeInstanceData> NodeInstanceDataMap; // 0x130(0x50)
	struct FMFMissionFlowReplicateDataNetItemArray MissionFlowReplicateDatas; // 0x180(0x128)
	struct FMFMissionReplicateDataNetItemArray MissionReplicateDatas; // 0x2A8(0x128)
	struct TMap<struct TWeakObjectPtr<struct UMFMissionFlow>, struct FMFMissionFlowVariableInstanceData> VariableInstanceDataMap; // 0x3D0(0x50)

	// Object: Function MFMission.MFMissionDataComponent.TryGetRefMissionReplicateDataByName
	// Flags: [Final|Native|Public]
	// Offset: 0x39ae9c4
	// Params: [ Num(2) Size(0x88) ]
	struct FMFMissionReplicateDataNetItem TryGetRefMissionReplicateDataByName(struct FString InMissionNodeName);

	// Object: Function MFMission.MFMissionDataComponent.TryGetRefMissionReplicateData
	// Flags: [Final|Native|Public]
	// Offset: 0x39aeaac
	// Params: [ Num(2) Size(0x80) ]
	struct FMFMissionReplicateDataNetItem TryGetRefMissionReplicateData(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionDataComponent.TryGetRefMissionFlowReplicateDataByName
	// Flags: [Final|Native|Public]
	// Offset: 0x39ae458
	// Params: [ Num(2) Size(0x48) ]
	struct FMFMissionFlowReplicateDataNetItem TryGetRefMissionFlowReplicateDataByName(struct FString InMissionFlowName);

	// Object: Function MFMission.MFMissionDataComponent.TryGetRefMissionFlowReplicateData
	// Flags: [Final|Native|Public]
	// Offset: 0x39af2a8
	// Params: [ Num(2) Size(0x40) ]
	struct FMFMissionFlowReplicateDataNetItem TryGetRefMissionFlowReplicateData(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionDataComponent.SetMissionReplicateValid
	// Flags: [Native|Public]
	// Offset: 0x39add20
	// Params: [ Num(2) Size(0x11) ]
	void SetMissionReplicateValid(struct FString InMissionName, bool bValid);

	// Object: Function MFMission.MFMissionDataComponent.SetMissionReplicateStatus
	// Flags: [Native|Public]
	// Offset: 0x39ade24
	// Params: [ Num(3) Size(0x18) ]
	void SetMissionReplicateStatus(struct FString InMissionName, int32_t InNewStatus, int32_t InOldStatus);

	// Object: Function MFMission.MFMissionDataComponent.SetMissionReplicateRemainTime
	// Flags: [Native|Public]
	// Offset: 0x39adaec
	// Params: [ Num(3) Size(0x18) ]
	void SetMissionReplicateRemainTime(struct FString InMissionName, float InRemainTime, float InRemainTimeUpdateServerTime);

	// Object: Function MFMission.MFMissionDataComponent.SetMissionReplicateCurProgress
	// Flags: [Native|Public]
	// Offset: 0x39adc24
	// Params: [ Num(2) Size(0x14) ]
	void SetMissionReplicateCurProgress(struct FString InMissionName, int32_t InPorgress);

	// Object: Function MFMission.MFMissionDataComponent.SetMissionFlowReplicateStatusChangeTime
	// Flags: [Native|Public]
	// Offset: 0x39ae15c
	// Params: [ Num(2) Size(0x14) ]
	void SetMissionFlowReplicateStatusChangeTime(struct FString InMissionFlowName, int32_t InTime);

	// Object: Function MFMission.MFMissionDataComponent.SetMissionFlowReplicateStatus
	// Flags: [Native|Public]
	// Offset: 0x39ae35c
	// Params: [ Num(2) Size(0x14) ]
	void SetMissionFlowReplicateStatus(struct FString InMissionFlowName, int32_t InStatus);

	// Object: Function MFMission.MFMissionDataComponent.SetMissionFlowReplicateBeforeState
	// Flags: [Native|Public]
	// Offset: 0x39ae258
	// Params: [ Num(2) Size(0x11) ]
	void SetMissionFlowReplicateBeforeState(struct FString InMissionFlowName, bool bBeforeState);

	// Object: Function MFMission.MFMissionDataComponent.ResetMissionReplicateData
	// Flags: [Final|Native|Public]
	// Offset: 0x39aef28
	// Params: [ Num(1) Size(0x8) ]
	void ResetMissionReplicateData(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionDataComponent.ResetMissionFlowReplicateData
	// Flags: [Final|Native|Public]
	// Offset: 0x39af544
	// Params: [ Num(1) Size(0x8) ]
	void ResetMissionFlowReplicateData(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionDataComponent.ResetMissionFlowNodeInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39af880
	// Params: [ Num(1) Size(0x8) ]
	void ResetMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionDataComponent.ResetMissionFlowInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39afb80
	// Params: [ Num(1) Size(0x8) ]
	void ResetMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionDataComponent.NotifyMissionReplicateDataChanged
	// Flags: [Native|Public]
	// Offset: 0x39aeb88
	// Params: [ Num(3) Size(0x70) ]
	void NotifyMissionReplicateDataChanged(EMFMissionDataChangeType InChangeType, struct FMFMissionReplicateData InMissionReplicateData, struct ACharacter* InSharerCharacter);

	// Object: Function MFMission.MFMissionDataComponent.NotifyMissionInstanceDataChanged
	// Flags: [Native|Public]
	// Offset: 0x39aee04
	// Params: [ Num(2) Size(0x60) ]
	void NotifyMissionInstanceDataChanged(EMFMissionDataChangeType InChangeType, struct FMFMissionFlowNodeInstanceData InMissionInstanceData);

	// Object: Function MFMission.MFMissionDataComponent.NotifyMissionFlowReplicateDataChanged
	// Flags: [Native|Public]
	// Offset: 0x39af3dc
	// Params: [ Num(2) Size(0x28) ]
	void NotifyMissionFlowReplicateDataChanged(EMFMissionDataChangeType InChangeType, struct FMFMissionFlowReplicateData InMissionFlowReplicateData);

	// Object: Function MFMission.MFMissionDataComponent.InitQuestReplicateData
	// Flags: [Native|Public]
	// Offset: 0x39adf5c
	// Params: [ Num(2) Size(0x14) ]
	void InitQuestReplicateData(struct FString InMissionName, int32_t InCurPorgress);

	// Object: Function MFMission.MFMissionDataComponent.InitMissionReplicateData
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39aefd0
	// Params: [ Num(2) Size(0x60) ]
	void InitMissionReplicateData(struct UMFMissionFlowNode* InMissionFlowNode, struct FMFMissionFlowNodeInstanceData& NodeInstanceData);

	// Object: Function MFMission.MFMissionDataComponent.InitMissionFlowReplicateData
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39af5ec
	// Params: [ Num(2) Size(0x30) ]
	void InitMissionFlowReplicateData(struct UMFMissionFlow* InMissionFlow, const struct FMFMissionFlowInstanceData& MissionFlowInstanceData);

	// Object: Function MFMission.MFMissionDataComponent.GetRefMissionFlowNodeInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39af7bc
	// Params: [ Num(2) Size(0x60) ]
	struct FMFMissionFlowNodeInstanceData GetRefMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionDataComponent.GetRefMissionFlowInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39afabc
	// Params: [ Num(2) Size(0x30) ]
	struct FMFMissionFlowInstanceData GetRefMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionDataComponent.GetMissionReplicateDatasByStatus
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39ae66c
	// Params: [ Num(3) Size(0x30) ]
	void GetMissionReplicateDatasByStatus(struct FString InMissionFlowName, const struct TArray<EMissionStatus>& InStatusList, struct TArray<struct FMFMissionReplicateData>& OutDataList);

	// Object: Function MFMission.MFMissionDataComponent.GetMissionReplicateDatas
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39ae7d0
	// Params: [ Num(2) Size(0x20) ]
	void GetMissionReplicateDatas(struct FString InMissionFlowName, struct TArray<struct FMFMissionReplicateData>& OutDataList);

	// Object: Function MFMission.MFMissionDataComponent.GetMissionReplicateData
	// Flags: [Final|Native|Public]
	// Offset: 0x39ae8d8
	// Params: [ Num(2) Size(0x70) ]
	struct FMFMissionReplicateData GetMissionReplicateData(struct FString InMissionName);

	// Object: Function MFMission.MFMissionDataComponent.GetMissionFlowReplicateData
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39af19c
	// Params: [ Num(2) Size(0x30) ]
	struct FMFMissionFlowReplicateData GetMissionFlowReplicateData(struct FString InMissionFlowName);

	// Object: Function MFMission.MFMissionDataComponent.GetMissionFlowNodeInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39af6f4
	// Params: [ Num(2) Size(0x60) ]
	struct FMFMissionFlowNodeInstanceData GetMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionDataComponent.GetMissionFlowInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39af9f4
	// Params: [ Num(2) Size(0x30) ]
	struct FMFMissionFlowInstanceData GetMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionDataComponent.GetAllMissionFlowReplicateDatas
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39af0e0
	// Params: [ Num(1) Size(0x10) ]
	void GetAllMissionFlowReplicateDatas(struct TArray<struct FMFMissionFlowReplicateData>& OutMissionFlowReplicateDatas);

	// Object: Function MFMission.MFMissionDataComponent.AddMissionReplicateData
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39ae058
	// Params: [ Num(1) Size(0x60) ]
	void AddMissionReplicateData(struct FMFMissionReplicateData& InData);

	// Object: Function MFMission.MFMissionDataComponent.AddMissionReplicateAffiliateIndex
	// Flags: [Native|Public]
	// Offset: 0x39ad9e4
	// Params: [ Num(2) Size(0x20) ]
	void AddMissionReplicateAffiliateIndex(struct FString InAssembleMissionName, struct FString InAffiliateMissionName);

	// Object: Function MFMission.MFMissionDataComponent.AddMissionFlowReplicateData
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39ae598
	// Params: [ Num(1) Size(0x20) ]
	void AddMissionFlowReplicateData(struct FMFMissionFlowReplicateData& InData);

	// Object: Function MFMission.MFMissionDataComponent.Add_GetRefMissionFlowNodeInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39af930
	// Params: [ Num(2) Size(0x60) ]
	struct FMFMissionFlowNodeInstanceData Add_GetRefMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionDataComponent.Add_GetRefMissionFlowInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39afc30
	// Params: [ Num(2) Size(0x30) ]
	struct FMFMissionFlowInstanceData Add_GetRefMissionFlowInstanceData(struct UMFMissionFlow* InMissionFlow);
};

// Object: Class MFMission.MFMissionDataInterface
// Size: 0x28 (Inherited: 0x28)
struct IMFMissionDataInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMFMissionDataInterface, "MFMissionDataInterface")

	// Object: Function MFMission.MFMissionDataInterface.GetMissionDataComponent
	// Flags: [Native|Public]
	// Offset: 0x39afe28
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionDataComponent* GetMissionDataComponent();

	// Object: Function MFMission.MFMissionDataInterface.CreateMissionDataComponent
	// Flags: [Native|Public]
	// Offset: 0x39afe64
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionDataComponent* CreateMissionDataComponent();
};

// Object: Class MFMission.MFMissionFlowComponent
// Size: 0x238 (Inherited: 0xE0)
struct UMFMissionFlowComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowComponent, "MFMissionFlowComponent")

	EMissionDataType InstigatorType; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
	struct TMap<struct FString, struct UMFMissionFlow*> MissionFlowMap; // 0xE8(0x50)
	struct TMap<EMissionDataType, struct UMFMissionDataComponent*> DataComponentMap; // 0x138(0x50)
	struct TMap<EMissionDataType, struct UMFMissionFlowComponent*> AccessibleComponents; // 0x188(0x50)
	struct TMap<struct UMFMissionFlow*, struct FMFMissionFlowExecutingNodeConfig> MissionFlowExecutingNodes; // 0x1D8(0x50)
	struct TArray<struct FString> DrawTexts; // 0x228(0x10)

	// Object: Function MFMission.MFMissionFlowComponent.UpdateLastTriggerCharacter
	// Flags: [Native|Public]
	// Offset: 0x39b2a94
	// Params: [ Num(2) Size(0x10) ]
	void UpdateLastTriggerCharacter(struct UMFMissionFlowNode* InMissionFlowNode, struct ACharacter* InCharacter);

	// Object: Function MFMission.MFMissionFlowComponent.StopMissionFlow
	// Flags: [Native|Public]
	// Offset: 0x39b2f20
	// Params: [ Num(1) Size(0x8) ]
	void StopMissionFlow(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionFlowComponent.StartMissionFlow
	// Flags: [Native|Public]
	// Offset: 0x39b2fd0
	// Params: [ Num(1) Size(0x8) ]
	void StartMissionFlow(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionFlowComponent.SetNodeStatus
	// Flags: [Native|Public]
	// Offset: 0x39b1e6c
	// Params: [ Num(2) Size(0x9) ]
	void SetNodeStatus(struct UMFMissionFlowNode* InMissionFlowNode, EMissionFlowNodeStatus InStatus);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionRemainTime
	// Flags: [Native|Public]
	// Offset: 0x39b1330
	// Params: [ Num(3) Size(0x10) ]
	void SetMissionRemainTime(struct UMFMissionFlowNode* InMissionFlowNode, float InRemainTime, float InRemainTimeUpdateServerTime);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionHasTryInteract
	// Flags: [Native|Public]
	// Offset: 0x39b1238
	// Params: [ Num(2) Size(0x9) ]
	void SetMissionHasTryInteract(struct UMFMissionFlowNode* InMissionFlowNode, bool bHasTry);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionFlowLoopExit
	// Flags: [Final|Native|Public]
	// Offset: 0x39b2578
	// Params: [ Num(2) Size(0x9) ]
	void SetMissionFlowLoopExit(struct UMFMissionFlow* InMissionFlow, bool bLoopExit);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionFlowLoopCount
	// Flags: [Final|Native|Public]
	// Offset: 0x39b2718
	// Params: [ Num(2) Size(0xC) ]
	void SetMissionFlowLoopCount(struct UMFMissionFlow* InMissionFlow, int32_t InLoopCount);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionFlowLastTriggerCharacter
	// Flags: [Native|Public]
	// Offset: 0x39b29a8
	// Params: [ Num(2) Size(0x10) ]
	void SetMissionFlowLastTriggerCharacter(struct UMFMissionFlow* InMissionFlow, struct ACharacter* InCharacter);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionFlowBeforeState
	// Flags: [Final|Native|Public]
	// Offset: 0x39b2800
	// Params: [ Num(2) Size(0x9) ]
	void SetMissionFlowBeforeState(struct UMFMissionFlow* InMissionFlow, bool bBeforeState);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionFinishTime
	// Flags: [Native|Public]
	// Offset: 0x39b1514
	// Params: [ Num(1) Size(0x8) ]
	void SetMissionFinishTime(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionFailedType
	// Flags: [Native|Public]
	// Offset: 0x39b1148
	// Params: [ Num(2) Size(0x9) ]
	void SetMissionFailedType(struct UMFMissionFlowNode* InMissionFlowNode, EMissionFailedType FailedType);

	// Object: Function MFMission.MFMissionFlowComponent.SetMissionActivationTime
	// Flags: [Native|Public]
	// Offset: 0x39b167c
	// Params: [ Num(1) Size(0x8) ]
	void SetMissionActivationTime(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.SetInstigatorType
	// Flags: [Final|Native|Public]
	// Offset: 0x39b33f8
	// Params: [ Num(1) Size(0x1) ]
	void SetInstigatorType(EMissionDataType InType);

	// Object: Function MFMission.MFMissionFlowComponent.ResetMissionProgress
	// Flags: [Native|Public]
	// Offset: 0x39b1a54
	// Params: [ Num(3) Size(0x14) ]
	int32_t ResetMissionProgress(struct UMFMissionFlowNode* InMissionFlowNode, struct ACharacter* InSharerCharacter);

	// Object: Function MFMission.MFMissionFlowComponent.ResetMissionFlow
	// Flags: [Native|Public]
	// Offset: 0x39b3080
	// Params: [ Num(2) Size(0x9) ]
	void ResetMissionFlow(struct UMFMissionFlow* InMissionFlow, bool bStartImmediately);

	// Object: Function MFMission.MFMissionFlowComponent.RegisterMissionFlow
	// Flags: [Native|Public]
	// Offset: 0x39b3178
	// Params: [ Num(2) Size(0x9) ]
	void RegisterMissionFlow(struct UMFMissionFlow* InMissionFlow, bool bReplicate);

	// Object: Function MFMission.MFMissionFlowComponent.OnMissionStatusChanged
	// Flags: [Native|Public]
	// Offset: 0x39b2c70
	// Params: [ Num(3) Size(0xA) ]
	void OnMissionStatusChanged(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus, EMissionStatus InOldStatus);

	// Object: Function MFMission.MFMissionFlowComponent.OnMissionFlowStatusChange
	// Flags: [Native|Public]
	// Offset: 0x39b2b80
	// Params: [ Num(2) Size(0x9) ]
	void OnMissionFlowStatusChange(struct UMFMissionFlow* InMissionFlow, EMissionStatus InStatus);

	// Object: Function MFMission.MFMissionFlowComponent.IsReachEndNotComplete
	// Flags: [Native|Public]
	// Offset: 0x39b17e8
	// Params: [ Num(2) Size(0x9) ]
	bool IsReachEndNotComplete(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.IsMissionFlowLoopExit
	// Flags: [Final|Native|Public]
	// Offset: 0x39b24c4
	// Params: [ Num(2) Size(0x9) ]
	bool IsMissionFlowLoopExit(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionFlowComponent.IsFailWhenAchieved
	// Flags: [Native|Public]
	// Offset: 0x39b172c
	// Params: [ Num(2) Size(0x9) ]
	bool IsFailWhenAchieved(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.InitMissionEndProgress
	// Flags: [Native|Public]
	// Offset: 0x39b18a4
	// Params: [ Num(3) Size(0x10) ]
	int32_t InitMissionEndProgress(struct UMFMissionFlowNode* InMissionFlowNode, int32_t InPorgress);

	// Object: Function MFMission.MFMissionFlowComponent.InitMissionCurProgress
	// Flags: [Native|Public]
	// Offset: 0x39b1b48
	// Params: [ Num(3) Size(0x10) ]
	int32_t InitMissionCurProgress(struct UMFMissionFlowNode* InMissionFlowNode, int32_t InPorgress);

	// Object: Function MFMission.MFMissionFlowComponent.GetNodeStatus
	// Flags: [Native|Public]
	// Offset: 0x39b1db4
	// Params: [ Num(2) Size(0x9) ]
	EMissionFlowNodeStatus GetNodeStatus(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionStatus
	// Flags: [Native|Public]
	// Offset: 0x39b1cfc
	// Params: [ Num(2) Size(0x9) ]
	EMissionStatus GetMissionStatus(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionReplicateDatasByStatus
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39b0ac4
	// Params: [ Num(3) Size(0x30) ]
	void GetMissionReplicateDatasByStatus(struct FString InMissionFlowName, const struct TArray<EMissionStatus>& InStatusList, struct TArray<struct FMFMissionReplicateData>& OutDataList);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionReplicateDatas
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39b0c30
	// Params: [ Num(2) Size(0x20) ]
	void GetMissionReplicateDatas(struct FString InMissionFlowName, struct TArray<struct FMFMissionReplicateData>& OutDataList);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionReplicateData
	// Flags: [Native|Public]
	// Offset: 0x39b09d0
	// Params: [ Num(2) Size(0x70) ]
	struct FMFMissionReplicateData GetMissionReplicateData(struct FString InMissionName);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowStatusByName_DS
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39b0d40
	// Params: [ Num(3) Size(0x12) ]
	bool GetMissionFlowStatusByName_DS(struct FString InMissionFlowName, EMissionStatus& OutStatus);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowStatusByName
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39b0e58
	// Params: [ Num(3) Size(0x12) ]
	bool GetMissionFlowStatusByName(struct FString InMissionFlowName, EMissionStatus& OutStatus);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowStatus
	// Flags: [Native|Public]
	// Offset: 0x39b2da0
	// Params: [ Num(2) Size(0x9) ]
	EMissionStatus GetMissionFlowStatus(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowReplicateData
	// Flags: [Native|Public]
	// Offset: 0x39b0f70
	// Params: [ Num(2) Size(0x30) ]
	struct FMFMissionFlowReplicateData GetMissionFlowReplicateData(struct FString InMissionFlowName);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowNodeInstanceDataByName
	// Flags: [Native|Public]
	// Offset: 0x39b22dc
	// Params: [ Num(3) Size(0x78) ]
	struct FMFMissionFlowNodeInstanceData GetMissionFlowNodeInstanceDataByName(struct FString InMissionFlowName, struct FString InNodeName);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowNodeInstanceData
	// Flags: [Native|Public]
	// Offset: 0x39b23fc
	// Params: [ Num(2) Size(0x60) ]
	struct FMFMissionFlowNodeInstanceData GetMissionFlowNodeInstanceData(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowLoopCount
	// Flags: [Final|Native|Public]
	// Offset: 0x39b2668
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetMissionFlowLoopCount(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowLastTriggerCharacter
	// Flags: [Native|Public]
	// Offset: 0x39b28f0
	// Params: [ Num(2) Size(0x10) ]
	struct ACharacter* GetMissionFlowLastTriggerCharacter(struct UMFMissionFlow* InMissionFlow);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowComponent
	// Flags: [Native|Public|HasOutParms|Const]
	// Offset: 0x39b3334
	// Params: [ Num(2) Size(0x10) ]
	struct UMFMissionFlowComponent* GetMissionFlowComponent(const EMissionDataType& InDataType);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFlowByName
	// Flags: [Native|Public]
	// Offset: 0x39b2e58
	// Params: [ Num(2) Size(0x18) ]
	struct UMFMissionFlow* GetMissionFlowByName(struct FString InMissionFlowName);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionFinisTime
	// Flags: [Native|Public]
	// Offset: 0x39b145c
	// Params: [ Num(2) Size(0xC) ]
	float GetMissionFinisTime(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionDataComponent
	// Flags: [Native|Public|HasOutParms|Const]
	// Offset: 0x39b3270
	// Params: [ Num(2) Size(0x10) ]
	struct UMFMissionDataComponent* GetMissionDataComponent(const EMissionDataType& InDataType);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionCurProgress
	// Flags: [Native|Public]
	// Offset: 0x39b199c
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetMissionCurProgress(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.GetMissionActivationTime
	// Flags: [Native|Public]
	// Offset: 0x39b15c4
	// Params: [ Num(2) Size(0xC) ]
	float GetMissionActivationTime(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.GetInstigatorType
	// Flags: [Final|Native|Public]
	// Offset: 0x39b349c
	// Params: [ Num(1) Size(0x1) ]
	EMissionDataType GetInstigatorType();

	// Object: Function MFMission.MFMissionFlowComponent.GetAllMissionFlowReplicateDatas
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x39b1084
	// Params: [ Num(1) Size(0x10) ]
	void GetAllMissionFlowReplicateDatas(struct TArray<struct FMFMissionFlowReplicateData>& OutDataList);

	// Object: Function MFMission.MFMissionFlowComponent.ExecuteNode
	// Flags: [Native|Public]
	// Offset: 0x39b1f5c
	// Params: [ Num(1) Size(0x8) ]
	void ExecuteNode(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.DeactivatePrevNode
	// Flags: [Native|Public]
	// Offset: 0x39b200c
	// Params: [ Num(2) Size(0x9) ]
	void DeactivatePrevNode(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus);

	// Object: Function MFMission.MFMissionFlowComponent.DeactivateNode
	// Flags: [Native|Public]
	// Offset: 0x39b20fc
	// Params: [ Num(2) Size(0x9) ]
	void DeactivateNode(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus);

	// Object: Function MFMission.MFMissionFlowComponent.ClientDebugInfos
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x39b0918
	// Params: [ Num(1) Size(0x10) ]
	void ClientDebugInfos(struct TArray<struct FString> InInfos);

	// Object: Function MFMission.MFMissionFlowComponent.CheckMissionAchieved
	// Flags: [Native|Public]
	// Offset: 0x39b1c40
	// Params: [ Num(2) Size(0x9) ]
	bool CheckMissionAchieved(struct UMFMissionFlowNode* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowComponent.ActivateNode
	// Flags: [Native|Public]
	// Offset: 0x39b21ec
	// Params: [ Num(2) Size(0x9) ]
	void ActivateNode(struct UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus);
};

// Object: Class MFMission.MFMissionFlowInterface
// Size: 0x28 (Inherited: 0x28)
struct IMFMissionFlowInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMFMissionFlowInterface, "MFMissionFlowInterface")

	// Object: Function MFMission.MFMissionFlowInterface.GetMissionFlowComponent
	// Flags: [Native|Public]
	// Offset: 0x39c2794
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowComponent* GetMissionFlowComponent();

	// Object: Function MFMission.MFMissionFlowInterface.CreateMissionFlowComponent
	// Flags: [Native|Public]
	// Offset: 0x39c27d0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowComponent* CreateMissionFlowComponent();
};

// Object: Class MFMission.MFMissionFlowNode_Affiliate
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_Affiliate : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Affiliate, "MFMissionFlowNode_Affiliate")
};

// Object: Class MFMission.MFMissionFlowNode_Composite
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_Composite : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Composite, "MFMissionFlowNode_Composite")
};

// Object: Class MFMission.MFMissionFlowNode_And
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_And : UMFMissionFlowNode_Composite
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_And, "MFMissionFlowNode_And")
};

// Object: Class MFMission.MFMissionFlowNode_Assemble
// Size: 0x108 (Inherited: 0xF8)
struct UMFMissionFlowNode_Assemble : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Assemble, "MFMissionFlowNode_Assemble")

	bool bSequentiallyActivateAffiliateNode; // 0xF2(0x1)
	struct TArray<struct UMFMissionFlowNode_Affiliate*> AffiliateNodeList; // 0xF8(0x10)

	// Object: Function MFMission.MFMissionFlowNode_Assemble.OnAffiliateNodeStatusChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x39c42bc
	// Params: [ Num(4) Size(0x12) ]
	void OnAffiliateNodeStatusChange(struct UMFMissionFlowNode* AffiliateNode, struct UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus);

	// Object: Function MFMission.MFMissionFlowNode_Assemble.GetAffiliateNodes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x39c4420
	// Params: [ Num(1) Size(0x10) ]
	void GetAffiliateNodes(struct TArray<struct UMFMissionFlowNode_Affiliate*>& OutAffiliateNodeList);

	// Object: Function MFMission.MFMissionFlowNode_Assemble.GetAffiliateNodeList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39c44e0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UMFMissionFlowNode_Affiliate*> GetAffiliateNodeList();

	// Object: Function MFMission.MFMissionFlowNode_Assemble.FindNextAffiliateNode
	// Flags: [Final|Native|Protected]
	// Offset: 0x39c420c
	// Params: [ Num(2) Size(0x10) ]
	struct UMFMissionFlowNode_Affiliate* FindNextAffiliateNode(struct UMFMissionFlowNode* CurAffiliateNode);

	// Object: Function MFMission.MFMissionFlowNode_Assemble.AddAffiliateNode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39c4564
	// Params: [ Num(1) Size(0x8) ]
	void AddAffiliateNode(struct UMFMissionFlowNode_Affiliate* InMissionFlowNode);

	// Object: Function MFMission.MFMissionFlowNode_Assemble.ActivateNextAffiliateNode
	// Flags: [Final|Native|Protected]
	// Offset: 0x39c40e8
	// Params: [ Num(3) Size(0x11) ]
	void ActivateNextAffiliateNode(struct UMFMissionFlowNode* NextAffiliateNode, struct UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus);
};

// Object: Class MFMission.MFMissionFlowNode_End
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_End : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_End, "MFMissionFlowNode_End")
};

// Object: Class MFMission.MFMissionFlowNode_Generate
// Size: 0x2F8 (Inherited: 0xF8)
struct UMFMissionFlowNode_Generate : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Generate, "MFMissionFlowNode_Generate")

	struct FWoaModelConfig WoaConfig; // 0xF8(0x60)
	struct FGenerateDescriptionTexts GenerateDescriptionTexts; // 0x158(0x90)
	struct TMap<struct FString, struct FGenerateDescriptionTexts> Templates; // 0x1E8(0x50)
	struct FString RulesDirectory; // 0x238(0x10)
	struct FString EditableFilePath; // 0x248(0x10)
	struct FString TemplatesFilePath; // 0x258(0x10)
	struct FMulticastInlineDelegate OnTryToGenerateNode; // 0x268(0x10)
	uint8_t Pad_0x278[0x80]; // 0x278(0x80)

	// Object: Function MFMission.MFMissionFlowNode_Generate.SelectObjectiveNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39c4e24
	// Params: [ Num(0) Size(0x0) ]
	void SelectObjectiveNode();

	// Object: Function MFMission.MFMissionFlowNode_Generate.SelectConditionText
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c4b6c
	// Params: [ Num(1) Size(0x38) ]
	void SelectConditionText(const struct FGenerateResult& InGenerateResult);

	// Object: Function MFMission.MFMissionFlowNode_Generate.SelectConditionName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c4c54
	// Params: [ Num(1) Size(0x38) ]
	void SelectConditionName(const struct FGenerateResult& InGenerateResult);

	// Object: Function MFMission.MFMissionFlowNode_Generate.SelectActionText
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c499c
	// Params: [ Num(1) Size(0x38) ]
	void SelectActionText(const struct FGenerateResult& InGenerateResult);

	// Object: Function MFMission.MFMissionFlowNode_Generate.SelectActionName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c4a84
	// Params: [ Num(1) Size(0x38) ]
	void SelectActionName(const struct FGenerateResult& InGenerateResult);

	// Object: Function MFMission.MFMissionFlowNode_Generate.ResetState
	// Flags: [Final|Native|Public]
	// Offset: 0x39c4f5c
	// Params: [ Num(0) Size(0x0) ]
	void ResetState();

	// Object: Function MFMission.MFMissionFlowNode_Generate.ProcessInputAsync
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x39c46cc
	// Params: [ Num(2) Size(0x20) ]
	void ProcessInputAsync(struct FString Prompt, struct FString OriginalText);

	// Object: Function MFMission.MFMissionFlowNode_Generate.OpenExtraRuleFileToEdit
	// Flags: [Final|Native|Public]
	// Offset: 0x39c4f48
	// Params: [ Num(0) Size(0x0) ]
	void OpenExtraRuleFileToEdit();

	// Object: Function MFMission.MFMissionFlowNode_Generate.OnGenerateFlowStateChange
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c4e38
	// Params: [ Num(1) Size(0x38) ]
	void OnGenerateFlowStateChange(const struct FGenerateResult& InGenerateResult);

	// Object: Function MFMission.MFMissionFlowNode_Generate.ImportTemplates
	// Flags: [Final|Native|Public]
	// Offset: 0x39c4f20
	// Params: [ Num(0) Size(0x0) ]
	void ImportTemplates();

	// Object: Function MFMission.MFMissionFlowNode_Generate.GenerateNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39c4f70
	// Params: [ Num(0) Size(0x0) ]
	void GenerateNode();

	// Object: Function MFMission.MFMissionFlowNode_Generate.GenerateBaseObjectiveText
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c4d3c
	// Params: [ Num(1) Size(0x38) ]
	void GenerateBaseObjectiveText(const struct FGenerateResult& InGenerateResult);

	// Object: Function MFMission.MFMissionFlowNode_Generate.FillObjectiveTypeText
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c48b4
	// Params: [ Num(1) Size(0x38) ]
	void FillObjectiveTypeText(const struct FGenerateResult& InGenerateResult);

	// Object: Function MFMission.MFMissionFlowNode_Generate.ExportTemplates
	// Flags: [Final|Native|Public]
	// Offset: 0x39c4f34
	// Params: [ Num(0) Size(0x0) ]
	void ExportTemplates();

	// Object: Function MFMission.MFMissionFlowNode_Generate.CallGenerateObjectiveNode
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c47cc
	// Params: [ Num(1) Size(0x38) ]
	void CallGenerateObjectiveNode(const struct FGenerateResult& InGenerateResult);
};

// Object: Class MFMission.MFMissionFlowNode_MakeContainer
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_MakeContainer : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_MakeContainer, "MFMissionFlowNode_MakeContainer")
};

// Object: Class MFMission.MFMissionFlowNode_MakeArray
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_MakeArray : UMFMissionFlowNode_MakeContainer
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_MakeArray, "MFMissionFlowNode_MakeArray")
};

// Object: Class MFMission.MFMissionFlowNode_Mission
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_Mission : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Mission, "MFMissionFlowNode_Mission")
};

// Object: Class MFMission.MFMissionFlowNode_MissionFlow
// Size: 0x100 (Inherited: 0xF8)
struct UMFMissionFlowNode_MissionFlow : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_MissionFlow, "MFMissionFlowNode_MissionFlow")

	struct UMFMissionFlow* OwnMissionFlow; // 0xF8(0x8)
};

// Object: Class MFMission.MFMissionFlowNode_MultipleGates
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_MultipleGates : UMFMissionFlowNode_Composite
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_MultipleGates, "MFMissionFlowNode_MultipleGates")

	int32_t SuccessedNumToOpen; // 0xF4(0x4)
};

// Object: Class MFMission.MFMissionFlowNode_Or
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_Or : UMFMissionFlowNode_Composite
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Or, "MFMissionFlowNode_Or")
};

// Object: Class MFMission.MFMissionFlowNode_Pin
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_Pin : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Pin, "MFMissionFlowNode_Pin")
};

// Object: Class MFMission.MFMissionFlowNode_Random
// Size: 0x110 (Inherited: 0xF8)
struct UMFMissionFlowNode_Random : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Random, "MFMissionFlowNode_Random")

	struct TArray<struct FMissionFlowConnectionWeight> NextConnectionWeights; // 0xF8(0x10)
	uint8_t RandomTimes; // 0x108(0x1)
	uint8_t MaxRandomTimes; // 0x109(0x1)
	uint8_t Pad_0x10A[0x6]; // 0x10A(0x6)

	// Object: Function MFMission.MFMissionFlowNode_Random.SetDebugIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x39c964c
	// Params: [ Num(1) Size(0x4) ]
	void SetDebugIndex(int32_t Index);

	// Object: Function MFMission.MFMissionFlowNode_Random.InsertNextConnection
	// Flags: [Final|Native|Public]
	// Offset: 0x39c97f4
	// Params: [ Num(2) Size(0x10) ]
	void InsertNextConnection(uint8_t InIndex, struct UMFMissionFlowNode* InNode);

	// Object: Function MFMission.MFMissionFlowNode_Random.GetRandomConnections
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39c96f4
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct UMFMissionFlowNode*> GetRandomConnections(const struct FMissionFlowConnections& InConnections);
};

// Object: Class MFMission.MFMissionFlowNode_Start
// Size: 0xF8 (Inherited: 0xF8)
struct UMFMissionFlowNode_Start : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Start, "MFMissionFlowNode_Start")
};

// Object: Class MFMission.MFMissionFlowNode_Variable
// Size: 0x158 (Inherited: 0xF8)
struct UMFMissionFlowNode_Variable : UMFMissionFlowNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_Variable, "MFMissionFlowNode_Variable")

	struct FMemberReference VariableReference; // 0xF8(0x38)
	struct FMFMissionFlowVariableKeySelector VariableKey; // 0x130(0x28)
};

// Object: Class MFMission.MFMissionFlowNode_VariableGet
// Size: 0x158 (Inherited: 0x158)
struct UMFMissionFlowNode_VariableGet : UMFMissionFlowNode_Variable
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_VariableGet, "MFMissionFlowNode_VariableGet")
};

// Object: Class MFMission.MFMissionFlowNode_VariableSet
// Size: 0x158 (Inherited: 0x158)
struct UMFMissionFlowNode_VariableSet : UMFMissionFlowNode_Variable
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowNode_VariableSet, "MFMissionFlowNode_VariableSet")
};

// Object: Class MFMission.MFMissionFlowVariableAssetProvider
// Size: 0x28 (Inherited: 0x28)
struct IMFMissionFlowVariableAssetProvider : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMFMissionFlowVariableAssetProvider, "MFMissionFlowVariableAssetProvider")

	// Object: Function MFMission.MFMissionFlowVariableAssetProvider.GetVariableAsset
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x39c9914
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowVariableData* GetVariableAsset();
};

// Object: Class MFMission.MFMissionFlowVariableData
// Size: 0x50 (Inherited: 0x30)
struct UMFMissionFlowVariableData : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableData, "MFMissionFlowVariableData")

	struct UMFMissionFlowVariableData* Parent; // 0x30(0x8)
	struct TArray<struct FMFMissionFlowVariableEntry> Keys; // 0x38(0x10)
	uint8_t bHasSynchronizedKeys : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class MFMission.MFMissionFlowVariableKeyType
// Size: 0x30 (Inherited: 0x28)
struct UMFMissionFlowVariableKeyType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableKeyType, "MFMissionFlowVariableKeyType")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class MFMission.MFMissionVariableWriteBase
// Size: 0x50 (Inherited: 0x28)
struct UMFMissionVariableWriteBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionVariableWriteBase, "MFMissionVariableWriteBase")

	struct FMFMissionFlowVariableKeySelector Key; // 0x28(0x28)

	// Object: Function MFMission.MFMissionVariableWriteBase.Write
	// Flags: [Native|Public]
	// Offset: 0x39c9a68
	// Params: [ Num(1) Size(0x8) ]
	void Write(struct UMFMissionFlowComponent* Instigator);

	// Object: Function MFMission.MFMissionVariableWriteBase.GetOuterNode
	// Flags: [Final|Native|Public]
	// Offset: 0x39c9b18
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMissionFlowNode* GetOuterNode();
};

// Object: Class MFMission.MFMissionFlowVariableKeyType_Int
// Size: 0x30 (Inherited: 0x30)
struct UMFMissionFlowVariableKeyType_Int : UMFMissionFlowVariableKeyType
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableKeyType_Int, "MFMissionFlowVariableKeyType_Int")

	int32_t DefaultValue; // 0x2C(0x4)
};

// Object: Class MFMission.MFMissionVariableWrite_Int
// Size: 0x58 (Inherited: 0x50)
struct UMFMissionVariableWrite_Int : UMFMissionVariableWriteBase
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionVariableWrite_Int, "MFMissionVariableWrite_Int")

	int32_t Value; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: Class MFMission.MFMissionFlowVariableKeyType_Object
// Size: 0x40 (Inherited: 0x30)
struct UMFMissionFlowVariableKeyType_Object : UMFMissionFlowVariableKeyType
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableKeyType_Object, "MFMissionFlowVariableKeyType_Object")

	struct UObject* BaseClass; // 0x30(0x8)
	struct UObject* DefaultValue; // 0x38(0x8)
};

// Object: Class MFMission.MFMissionVariableWrite_Object
// Size: 0x58 (Inherited: 0x50)
struct UMFMissionVariableWrite_Object : UMFMissionVariableWriteBase
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionVariableWrite_Object, "MFMissionVariableWrite_Object")

	struct UObject* Value; // 0x50(0x8)
};

// Object: Class MFMission.MFMissionFlowVariableKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UMFMissionFlowVariableKeyType_Rotator : UMFMissionFlowVariableKeyType
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableKeyType_Rotator, "MFMissionFlowVariableKeyType_Rotator")
};

// Object: Class MFMission.MFMissionVariableWrite_Rotator
// Size: 0x60 (Inherited: 0x50)
struct UMFMissionVariableWrite_Rotator : UMFMissionVariableWriteBase
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionVariableWrite_Rotator, "MFMissionVariableWrite_Rotator")

	struct FRotator Value; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: Class MFMission.MFMissionFlowVariableKeyType_String
// Size: 0x50 (Inherited: 0x30)
struct UMFMissionFlowVariableKeyType_String : UMFMissionFlowVariableKeyType
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableKeyType_String, "MFMissionFlowVariableKeyType_String")

	struct FString DefaultValue; // 0x30(0x10)
	struct FString StringValue; // 0x40(0x10)
};

// Object: Class MFMission.MFMissionVariableWrite_String
// Size: 0x60 (Inherited: 0x50)
struct UMFMissionVariableWrite_String : UMFMissionVariableWriteBase
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionVariableWrite_String, "MFMissionVariableWrite_String")

	struct FString Value; // 0x50(0x10)
};

// Object: Class MFMission.MFMissionFlowVariableKeyType_StringArray
// Size: 0x50 (Inherited: 0x30)
struct UMFMissionFlowVariableKeyType_StringArray : UMFMissionFlowVariableKeyType
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableKeyType_StringArray, "MFMissionFlowVariableKeyType_StringArray")

	struct TArray<struct FString> DefaultValue; // 0x30(0x10)
	struct TArray<struct FString> StringValues; // 0x40(0x10)
};

// Object: Class MFMission.MFMissionVariableWrite_StringArray
// Size: 0x50 (Inherited: 0x50)
struct UMFMissionVariableWrite_StringArray : UMFMissionVariableWriteBase
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionVariableWrite_StringArray, "MFMissionVariableWrite_StringArray")
};

// Object: Class MFMission.MFMissionFlowVariableKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UMFMissionFlowVariableKeyType_Vector : UMFMissionFlowVariableKeyType
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionFlowVariableKeyType_Vector, "MFMissionFlowVariableKeyType_Vector")
};

// Object: Class MFMission.MFMissionVariableWrite_Vector
// Size: 0x60 (Inherited: 0x50)
struct UMFMissionVariableWrite_Vector : UMFMissionVariableWriteBase
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionVariableWrite_Vector, "MFMissionVariableWrite_Vector")

	struct FVector Value; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: Class MFMission.MFMissionObjective
// Size: 0x120 (Inherited: 0x38)
struct UMFMissionObjective : UMFMissionNode
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionObjective, "MFMissionObjective")

	EMissionDataType InstigatorTypeFlag; // 0x38(0x1)
	bool bSkipCheckAsset; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	struct FMissionObjectiveCheckConditions CheckConditions; // 0x40(0x60)
	struct FMissionObjectivePreConditions PreConditions; // 0xA0(0x28)
	bool bIsTeamHelpType; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct TMap<struct TWeakObjectPtr<struct UMFMissionFlowComponent>, EMissionStatus> InstigatorStatus; // 0xD0(0x50)

	// Object: Function MFMission.MFMissionObjective.SetHelpType
	// Flags: [Final|Native|Public]
	// Offset: 0x39ca654
	// Params: [ Num(1) Size(0x4) ]
	void SetHelpType(int32_t InHelpValue);

	// Object: Function MFMission.MFMissionObjective.IsReachEndNotComplete
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca558
	// Params: [ Num(1) Size(0x1) ]
	bool IsReachEndNotComplete();

	// Object: Function MFMission.MFMissionObjective.IsNeedReportProgress
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca574
	// Params: [ Num(1) Size(0x1) ]
	bool IsNeedReportProgress();

	// Object: Function MFMission.MFMissionObjective.IsNeedReport
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca590
	// Params: [ Num(1) Size(0x1) ]
	bool IsNeedReport();

	// Object: Function MFMission.MFMissionObjective.IsFailWhenAchieved
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca520
	// Params: [ Num(1) Size(0x1) ]
	bool IsFailWhenAchieved();

	// Object: Function MFMission.MFMissionObjective.IsActivateReachEndComplete
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca504
	// Params: [ Num(1) Size(0x1) ]
	bool IsActivateReachEndComplete();

	// Object: Function MFMission.MFMissionObjective.GetProgressUnit
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca5c8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetProgressUnit();

	// Object: Function MFMission.MFMissionObjective.GetProgressFactor
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca5ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetProgressFactor();

	// Object: Function MFMission.MFMissionObjective.GetOneBattleMaxAddProgress
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca53c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOneBattleMaxAddProgress();

	// Object: Function MFMission.MFMissionObjective.GetInstigatorTypeFlag
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca4d0
	// Params: [ Num(1) Size(0x1) ]
	EMissionDataType GetInstigatorTypeFlag();

	// Object: Function MFMission.MFMissionObjective.GetHelpType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca638
	// Params: [ Num(1) Size(0x1) ]
	EMissionHelpType GetHelpType();

	// Object: Function MFMission.MFMissionObjective.GetEndProgress
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca5e4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetEndProgress();

	// Object: Function MFMission.MFMissionObjective.GetCompareType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca61c
	// Params: [ Num(1) Size(0x1) ]
	EMissionCompareType GetCompareType();

	// Object: Function MFMission.MFMissionObjective.GetBeginProgress
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x39ca600
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBeginProgress();
};

// Object: Class MFMission.MFMissionStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFMissionStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionStatics, "MFMissionStatics")

	// Object: Function MFMission.MFMissionStatics.GetMissionFlowComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39cacc0
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFMissionFlowComponent* GetMissionFlowComponent(struct AActor* Actor);

	// Object: Function MFMission.MFMissionStatics.GetMissionDataComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39cac18
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFMissionDataComponent* GetMissionDataComponent(struct AActor* Actor);

	// Object: Function MFMission.MFMissionStatics.GetCompareResultFloat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ca768
	// Params: [ Num(6) Size(0x15) ]
	static bool GetCompareResultFloat(EMissionCompareType CompareType, float CheckNum, float Value1, float Value2, float Value3);

	// Object: Function MFMission.MFMissionStatics.GetCompareResultExp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39ca90c
	// Params: [ Num(6) Size(0x29) ]
	static bool GetCompareResultExp(EMissionCompareType CompareType, int64_t CheckNum, int64_t Value1, int64_t Value2, int64_t Value3);

	// Object: Function MFMission.MFMissionStatics.GetCompareResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39caab0
	// Params: [ Num(5) Size(0x21) ]
	static bool GetCompareResult(EMissionCompareType CompareType, int64_t CheckNum, int64_t Value1, int64_t Value2);
};

// Object: Class MFMission.MFMissionSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UMFMissionSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UMFMissionSubsystem, "MFMissionSubsystem")

	struct TMap<struct TSoftObjectPtr<UMFMissionFlow>, struct UMFMissionFlow*> MissionFlowObjectMap; // 0x30(0x50)

	// Object: DelegateFunction MFMission.MFMissionSubsystem.TestMissionFlowEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void TestMissionFlowEvent__DelegateSignature(struct FString MissionFlowName, struct UMFMissionFlow* MissionFlowAsset);

	// Object: Function MFMission.MFMissionSubsystem.GetDebugMissionFlowNodeInfos
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39ce488
	// Params: [ Num(4) Size(0x78) ]
	void GetDebugMissionFlowNodeInfos(struct UMFMissionFlowComponent* InMissionFlowComponent, struct UMFMissionFlowNode* InMissionFlowNode, const struct FMFMissionFlowNodeInstanceData& NodeInstanceData, struct FString& OutMissionFlowInfo);

	// Object: Function MFMission.MFMissionSubsystem.GetDebugMissionFlowInfo
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x39ce630
	// Params: [ Num(4) Size(0x21) ]
	void GetDebugMissionFlowInfo(struct UMFMissionFlowComponent* InMissionFlowComponent, struct UMFMissionFlow* InMissionFlow, struct FString& OutMissionFlowInfo, bool bShowNodeInfo);
};

// Object: Class MFMission.MissionFlowTypes
// Size: 0x28 (Inherited: 0x28)
struct UMissionFlowTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMissionFlowTypes, "MissionFlowTypes")
};

} // namespace SDK
