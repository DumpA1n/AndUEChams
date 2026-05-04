#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: GPAIBase
// Enums: 18
// Structs: 23
// Classes: 50

struct AAIController;
struct AActor;
struct ACHARACTER;
struct AController;
struct APawn;
enum class ECollisionChannel : uint8_t;
struct FAIStimulus;
struct FBranchingPointNotifyPayload;
struct UAISenseConfig;
struct UAnimMontage;
struct UBehaviorTree;
struct UBlackboardComponent;
struct UBlackboardData;
struct UBlackboardKeyType;
struct UCurveFloat;
struct UDataTable;
struct UEnvQueryContext;
struct UNavigationQueryFilter;
struct USkeletalMeshComponent;
struct UWorld;
struct FCharacterThreatRecord;
struct FAIThreatEvent;
struct FAIThreatConfig;
struct FAttractionPerceptionFactor;
struct FAIJobList;
struct FAIJobSetting;
struct FExclusionTag;
struct FExclusionDesc;
struct FAIPathFindingResult;
struct FAISightExEvent;
struct FVisionConeConfig;
struct FAIThreatArea;
struct FBlackboardDataFrame;
struct FGPBehaviorFactor;
struct FCoverShootAnimInfo;
struct FGPAICoverShootAnimTable;
struct FGPAICoverAnimMontageTable;
struct FCoverPointAnimInfo;
struct FGPAIMontageMapping;
struct FAINodeMomeryAdress;
struct FGPSpecificBehaviorTreeSetting;
struct FAICommonNavPointInfo;
struct FNZCoverPointInfo;
struct UAIAdvancedPerceptionComponent;
struct UAIBPLib;
struct UGPAIFunctionLibrary;
struct UAIJob;
struct UJobFilterBase;
struct AAIJobManager;
struct AAILayoutConfigActor;
struct UAIThreatWeightsComponent;
struct APointGrid;
struct UAISense_SightEx;
struct UAISenseConfig_SightEx;
struct IThreatAreaInterface;
struct AAIThreatAreaSystem;
struct IThreatSourceInterface;
struct UAIThreatRecordComponent;
struct UBTComposite_RandomSelect;
struct UBTComposite_SelectByBBKeyValue;
struct UDynamicBlackboardComponent;
struct IAISpecificBehaviorFlagsInterface;
struct UGPAIBehaviorTreeSubsystem;
struct UGPAIBehaviorTreeComponent;
struct UGPAI_CoverPointAnimSetting;
struct UGPAIMontageMappingTemplate;
struct UGPAI_PlayMontageCallbackProxy;
struct UGPBTTask_MoveByPath;
struct UGPBTDecorator_SpecificBehaviorCheck;
struct UGPBTTaskBase;
struct UGPBTTask_Blueprint;
struct UGPBTTask_EnterCoverPoint;
struct UGPBTTask_FocusToActor;
struct UGPBTTask_MoveToActor;
struct UGPBTTask_RunDynamicBehaviorBase;
struct UGPBTTask_RunBlackboardBehavior;
struct UGPBTTask_SpecificBehaviorBase;
struct UGPEnvQueryInstanceBPWrapper;
struct UGPEnvQueryItemType_ObjectBase;
struct UGPEnvQueryItemType_CommonPoint;
struct UGPEnvQueryTest_AIDensity;
struct UGPEnvQueryTest_CoverDirectionCheck;
struct UGPEnvQueryTest_Distance_CurveScore;
struct UGPEnvQueryTest_PathTest;
struct UGPEnvQueryTest_ThreatScore;
struct UGPEnvQueryTest_VisibilityCheck;
struct UGPEQSGenerator_RoundArea;
struct UGPEQSGenerator_RoundAreaEx;
struct ANZCoverGenerator;
struct UNZCoverGenMgr;
struct ICoverOccupierInterface;
struct UNZCoverPoint;
struct ANZCoverRangeVolume;

// Object: Enum GPAIBase.EAIJobState
enum class EAIJobState : uint8_t
{
	EAIJobState_Idle = 0,
	EAIJobState_Finish = 1,
	EAIJobState_InProgress = 2,
	EAIJobState_MAX = 3
};

// Object: Enum GPAIBase.EAIJobType
enum class EAIJobType : uint8_t
{
	EAIJob_None = 0,
	EAIJob_NormalAttack = 1,
	EAIJob_FindIdlePlayer = 2,
	EAIJob_Search = 3,
	EAIJob_Patrol = 4,
	EAIJob_Guard = 5,
	EAIJob_Dash = 6,
	EAIJob_Investigate = 7,
	EAIJob_GroupPatrol = 8,
	EAIJob_GroupRomytheus = 9,
	EAIJob_GroupBossEncounter = 10,
	EAIJob_MAX = 11
};

// Object: Enum GPAIBase.EAIThreatAreaWeightPainter
enum class EAIThreatAreaWeightPainter : uint8_t
{
	EAIPAINTER_CONST = 0,
	EAIPAINTER_LINEAR_DISTANCE = 1,
	EAIPAINTER_MAX = 2
};

// Object: Enum GPAIBase.EAIThreatAreaType
enum class EAIThreatAreaType : uint8_t
{
	EThreatArea_Static = 0,
	EThreatArea_Dynamic = 1,
	EThreatArea_MAX = 2
};

// Object: Enum GPAIBase.EAIThreatType
enum class EAIThreatType : uint8_t
{
	EThreatType_Default = 0,
	EThreatType_EyeSight = 1,
	EThreatType_Hurt = 2,
	EThreatType_HearSound = 3,
	EThreatType_AirHit = 4,
	EThreatType_MAX = 5
};

// Object: Enum GPAIBase.EGPSpecificBehaviorType
enum class EGPSpecificBehaviorType : uint8_t
{
	ENormal = 0,
	EDefensive = 1,
	EDistanceApart = 2,
	EAgressive = 3,
	ECarefully = 4,
	ETestType1 = 5,
	ETestType2 = 6,
	EMAX_Valid = 7,
	EGPSpecificBehaviorType_MAX = 8
};

// Object: Enum GPAIBase.ECoverPointCondition
enum class ECoverPointCondition : uint8_t
{
	ECover_None = 0,
	ECover_Enter_Approaching = 1,
	ECover_Enter_PlayingEnterCoverMontage = 2,
	ECover_Enter_InterruptedEnterCoverMontage = 3,
	ECover_Enter_Complete = 4,
	ECover_MAX = 5
};

// Object: Enum GPAIBase.EAIDensityDistanceType
enum class EAIDensityDistanceType : uint8_t
{
	ECheckDistType_2D = 0,
	ECheckDistType_3D = 1,
	ECheckDistType_2DSquare = 2,
	ECheckDistType_3DSquare = 3,
	ECheckDistType_MAX = 4
};

// Object: Enum GPAIBase.EAIDensityRatingType
enum class EAIDensityRatingType : uint8_t
{
	EDensityType_Intensity = 0,
	EDensityType_Sparsity = 1,
	EDensityType_MAX = 2
};

// Object: Enum GPAIBase.EAIDistanceType
enum class EAIDistanceType : uint8_t
{
	ECheckDistType_3D = 0,
	ECheckDistType_2D = 1,
	ECheckDistType_Z = 2,
	ECheckDistType_AbsoluteZ = 3,
	ECheckDistType_MAX = 4
};

// Object: Enum GPAIBase.EGPEnvTestPathTest
enum class EGPEnvTestPathTest : uint8_t
{
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	PathMinDistFromTheTarget = 3,
	EGPEnvTestPathTest_MAX = 4
};

// Object: Enum GPAIBase.EGPThreatRatingType
enum class EGPThreatRatingType : uint8_t
{
	EThreatRateType_Safe = 0,
	EThreatRateType_Danger = 1,
	EThreatRateType_MAX = 2
};

// Object: Enum GPAIBase.EAIVisibilityRatingType
enum class EAIVisibilityRatingType : uint8_t
{
	EVisRateType_Visible = 0,
	EVisRateType_Invisible = 1,
	EVisRateType_MAX = 2
};

// Object: Enum GPAIBase.EAIVisibilityCheckType
enum class EAIVisibilityCheckType : uint8_t
{
	EVisCheckType_FromTestToContext = 0,
	EVisCheckType_FromContextToTest = 1,
	EVisCheckType_MAX = 2
};

// Object: Enum GPAIBase.EGeneratorIncludeType
enum class EGeneratorIncludeType : uint8_t
{
	EPointInclude_RoundDiscreteOnly = 0,
	EPointInclude_CoverOnly = 1,
	EPointInclude_Both = 2,
	EPointInclude_MAX = 3
};

// Object: Enum GPAIBase.ECoverOccupyState
enum class ECoverOccupyState : uint8_t
{
	ECoverOccupyState_None = 0,
	ECoverOccupyState_PreOccupy = 1,
	ECoverOccupyState_Occupied = 2,
	ECoverOccupyState_PostOccupy = 3,
	ECoverOccupyState_MAX = 4
};

// Object: Enum GPAIBase.ECoverType
enum class ECoverType : uint8_t
{
	ECT_None = 0,
	ECT_Standing = 1,
	ECT_StandingAndCrounching = 2,
	ECT_Crounching = 3,
	ECST_MAX = 4,
	ECoverType_MAX = 5
};

// Object: Enum GPAIBase.ECoverShootType
enum class ECoverShootType : uint8_t
{
	ECST_None = 0,
	ECST_StandingLeft = 1,
	ECST_StandingRight = 2,
	ECST_CrouchingRight = 3,
	ECST_CrouchingLeft = 4,
	ECST_CrouchingFront = 5,
	ECST_MAX = 6
};

// Object: ScriptStruct GPAIBase.CharacterThreatRecord
// Size: 0x60 (Inherited: 0x0)
struct FCharacterThreatRecord
{
	struct TWeakObjectPtr<struct ACHARACTER> RelatedCharacter; // 0x0(0x8)
	struct TArray<struct FAIThreatEvent> ScalableThreatEvents; // 0x8(0x10)
	struct TArray<struct FAIThreatEvent> ThreatEvents; // 0x18(0x10)
	float CurrentThreatValue; // 0x28(0x4)
	float CurrentSightThreatValue; // 0x2C(0x4)
	float CurrentHurtThreatValue; // 0x30(0x4)
	float CurrentHearingThreatValue; // 0x34(0x4)
	struct FVector LastHeardLocation; // 0x38(0xC)
	uint8_t Pad_0x44[0x1C]; // 0x44(0x1C)
};

// Object: ScriptStruct GPAIBase.AIThreatEvent
// Size: 0x20 (Inherited: 0x0)
struct FAIThreatEvent
{
	EAIThreatType threatType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ThreatBeginTime; // 0x4(0x4)
	float CurrentThreatValue; // 0x8(0x4)
	float ThreatValue_Base; // 0xC(0x4)
	float ThreatValue_DynamicDistPart; // 0x10(0x4)
	float ThreatValue_DynamicDirectionPart; // 0x14(0x4)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct GPAIBase.AIThreatConfig
// Size: 0x40 (Inherited: 0x8)
struct FAIThreatConfig : FTableRowBase
{
	EGPSpecificBehaviorType BehaviorType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float ThreatDecreaseDistance; // 0xC(0x4)
	float ThreatDecrease_Default; // 0x10(0x4)
	float ThreatDecrease_EyeSight; // 0x14(0x4)
	float ThreatDecrease_Hurt; // 0x18(0x4)
	float ThreatDecrease_HearSound; // 0x1C(0x4)
	float ThreatDecrease_AirHit; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UCurveFloat* EyeSightDistCurve; // 0x28(0x8)
	struct UCurveFloat* EyeSightDirectionCurve; // 0x30(0x8)
	struct UCurveFloat* HearingDistCurve; // 0x38(0x8)
};

// Object: ScriptStruct GPAIBase.AttractionPerceptionFactor
// Size: 0x8 (Inherited: 0x0)
struct FAttractionPerceptionFactor
{
	float RadiusScaler; // 0x0(0x4)
	float AngleScaler; // 0x4(0x4)
};

// Object: ScriptStruct GPAIBase.AIJobList
// Size: 0x10 (Inherited: 0x0)
struct FAIJobList
{
	struct TArray<struct UAIJob*> Jobs; // 0x0(0x10)
};

// Object: ScriptStruct GPAIBase.AIJobSetting
// Size: 0x38 (Inherited: 0x0)
struct FAIJobSetting
{
	EAIJobType JobType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t MaxJobCount; // 0x4(0x4)
	int32_t MaxActivedJobCount; // 0x8(0x4)
	int32_t MaxAINum; // 0xC(0x4)
	float JobWaitTime; // 0x10(0x4)
	float JobOverTime; // 0x14(0x4)
	uint8_t bAutoProduce : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float ProduceInterval; // 0x1C(0x4)
	float ProduceIntervalDeviation; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UJobFilterBase* AcquireJobFilterClass; // 0x28(0x8)
	float NextProduceTime; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct GPAIBase.ExclusionTag
// Size: 0x18 (Inherited: 0x0)
struct FExclusionTag
{
	int32_t TagId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FExclusionDesc> ExclusionDetail; // 0x8(0x10)
};

// Object: ScriptStruct GPAIBase.ExclusionDesc
// Size: 0x20 (Inherited: 0x0)
struct FExclusionDesc
{
	struct FString MustLoadLevel; // 0x0(0x10)
	struct TArray<struct FString> Exclusionlevel; // 0x10(0x10)
};

// Object: ScriptStruct GPAIBase.AIPathFindingResult
// Size: 0x28 (Inherited: 0x0)
struct FAIPathFindingResult
{
	uint8_t PathSuccess : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector EndPosition; // 0x4(0xC)
	float FinalScore; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FVector> PathNode; // 0x18(0x10)
};

// Object: ScriptStruct GPAIBase.AISightExEvent
// Size: 0x18 (Inherited: 0x0)
struct FAISightExEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* SeenActor; // 0x8(0x8)
	struct AActor* Observer; // 0x10(0x8)
};

// Object: ScriptStruct GPAIBase.VisionConeConfig
// Size: 0x38 (Inherited: 0x0)
struct FVisionConeConfig
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float VisionConeRadius; // 0x8(0x4)
	float VisionConeHalfAngle; // 0xC(0x4)
	float VisionConeHeight; // 0x10(0x4)
	float DelayDetectTime; // 0x14(0x4)
	float VisibleRate; // 0x18(0x4)
	struct FColor DebugConeColor; // 0x1C(0x4)
	uint8_t Pad_0x20[0x18]; // 0x20(0x18)
};

// Object: ScriptStruct GPAIBase.AIThreatArea
// Size: 0x2C (Inherited: 0x0)
struct FAIThreatArea
{
	EAIThreatAreaType ThreatAreaType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector AreaCenter; // 0x4(0xC)
	float AreaRadiusSq; // 0x10(0x4)
	float AreaHeight; // 0x14(0x4)
	float Duration; // 0x18(0x4)
	float StartTime; // 0x1C(0x4)
	float ThreatScore; // 0x20(0x4)
	struct TWeakObjectPtr<struct AActor> RelatedActor; // 0x24(0x8)
};

// Object: ScriptStruct GPAIBase.BlackboardDataFrame
// Size: 0x40 (Inherited: 0x0)
struct FBlackboardDataFrame
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UBlackboardData* BlackboardAsset; // 0x8(0x8)
	uint8_t Pad_0x10[0x20]; // 0x10(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0x30(0x10)
};

// Object: ScriptStruct GPAIBase.GPBehaviorFactor
// Size: 0x8 (Inherited: 0x0)
struct FGPBehaviorFactor
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GPAIBase.CoverShootAnimInfo
// Size: 0x18 (Inherited: 0x0)
struct FCoverShootAnimInfo
{
	struct UAnimMontage* StartCoverShootMontage; // 0x0(0x8)
	float StartCoverShootDelay; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UAnimMontage* EndCoverShootMontage; // 0x10(0x8)
};

// Object: ScriptStruct GPAIBase.GPAICoverShootAnimTable
// Size: 0x98 (Inherited: 0x8)
struct FGPAICoverShootAnimTable : FTableRowBase
{
	struct FCoverShootAnimInfo CrouchRight_ToFire; // 0x8(0x18)
	struct FCoverShootAnimInfo CrouchLeft_ToFire; // 0x20(0x18)
	struct FCoverShootAnimInfo CrouchRight_ToUpFire; // 0x38(0x18)
	struct FCoverShootAnimInfo CrouchLeft_ToUpFire; // 0x50(0x18)
	struct FCoverShootAnimInfo StandRight_ToFire; // 0x68(0x18)
	struct FCoverShootAnimInfo StandLeft_ToFire; // 0x80(0x18)
};

// Object: ScriptStruct GPAIBase.GPAICoverAnimMontageTable
// Size: 0x78 (Inherited: 0x8)
struct FGPAICoverAnimMontageTable : FTableRowBase
{
	struct TArray<struct FCoverPointAnimInfo> Fwd_EnterCoverAnimList; // 0x8(0x10)
	struct TArray<struct FCoverPointAnimInfo> FL_EnterCoverAnimList; // 0x18(0x10)
	struct TArray<struct FCoverPointAnimInfo> FR_EnterCoverAnimList; // 0x28(0x10)
	struct TArray<struct FCoverPointAnimInfo> LT_EnterCoverAnimList; // 0x38(0x10)
	struct TArray<struct FCoverPointAnimInfo> RT_EnterCoverAnimList; // 0x48(0x10)
	struct TArray<struct FCoverPointAnimInfo> BL_EnterCoverAnimList; // 0x58(0x10)
	struct TArray<struct FCoverPointAnimInfo> BR_EnterCoverAnimList; // 0x68(0x10)
};

// Object: ScriptStruct GPAIBase.CoverPointAnimInfo
// Size: 0x10 (Inherited: 0x0)
struct FCoverPointAnimInfo
{
	struct UAnimMontage* EnterMontage; // 0x0(0x8)
	int32_t DistanceQuared; // 0x8(0x4)
	int32_t DistanceTolerance; // 0xC(0x4)
};

// Object: ScriptStruct GPAIBase.GPAIMontageMapping
// Size: 0x20 (Inherited: 0x0)
struct FGPAIMontageMapping
{
	struct FSoftObjectPath Montage; // 0x0(0x18)
	int32_t SpecKey; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct GPAIBase.AINodeMomeryAdress
// Size: 0x8 (Inherited: 0x0)
struct FAINodeMomeryAdress
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GPAIBase.GPSpecificBehaviorTreeSetting
// Size: 0x10 (Inherited: 0x0)
struct FGPSpecificBehaviorTreeSetting
{
	EGPSpecificBehaviorType TypeSetting; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UBehaviorTree* BehaviorAsset; // 0x8(0x8)
};

// Object: ScriptStruct GPAIBase.AICommonNavPointInfo
// Size: 0x18 (Inherited: 0x0)
struct FAICommonNavPointInfo
{
	struct UNZCoverPoint* TargetCover; // 0x0(0x8)
	struct FVector TargetLocation; // 0x8(0xC)
	uint8_t bPointValid : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GPAIBase.NZCoverPointInfo
// Size: 0x60 (Inherited: 0x0)
struct FNZCoverPointInfo
{
	struct FVector Location; // 0x0(0xC)
	struct FVector _DirectionToWall; // 0xC(0xC)
	struct FRotator RotatorXToWall; // 0x18(0xC)
	uint8_t bLeftCoverStanding : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t bRightCoverStanding : 1; // 0x25(0x1), Mask(0x1)
	uint8_t BitPad_0x25_1 : 7; // 0x25(0x1)
	uint8_t bLeftCoverCrouched : 1; // 0x26(0x1), Mask(0x1)
	uint8_t BitPad_0x26_1 : 7; // 0x26(0x1)
	uint8_t bRightCoverCrouched : 1; // 0x27(0x1), Mask(0x1)
	uint8_t BitPad_0x27_1 : 7; // 0x27(0x1)
	uint8_t bFrontCoverCrouched : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	ECoverType CoverType; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct TSoftObjectPtr<AActor> CoverActor; // 0x30(0x28)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: Class GPAIBase.AIAdvancedPerceptionComponent
// Size: 0x290 (Inherited: 0x1C8)
struct UAIAdvancedPerceptionComponent : UAIPerceptionComponent
{
	uint8_t bUseTagPreference : 1; // 0x1C8(0x1), Mask(0x1)
	uint8_t BitPad_0x1C8_1 : 7; // 0x1C8(0x1)
	uint8_t Pad_0x1C9[0x3]; // 0x1C9(0x3)
	struct FAttractionPerceptionFactor AttractedFactor; // 0x1CC(0x8)
	uint8_t Pad_0x1D4[0x2C]; // 0x1D4(0x2C)
	struct TMap<struct FName, float> TagPriorities; // 0x200(0x50)
	struct FVisionConeConfig NoUse_ForKismetInspectorBug; // 0x250(0x38)
	uint8_t Pad_0x288[0x8]; // 0x288(0x8)


	// Object: Function GPAIBase.AIAdvancedPerceptionComponent.SetAttracted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762845c
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SetAttracted(uint8_t bActtracted);

	// Object: Function GPAIBase.AIAdvancedPerceptionComponent.RemoveSenseConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76283b8
	// Params: [ Num(1) Size(0x8) ]
	void RemoveSenseConfig(struct UAISenseConfig* senseType);

	// Object: Function GPAIBase.AIAdvancedPerceptionComponent.MultiplySenseSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76282d8
	// Params: [ Num(2) Size(0xC) ]
	void MultiplySenseSize(struct UAISenseConfig* senseType, float factor);

	// Object: Function GPAIBase.AIAdvancedPerceptionComponent.AdjustSightSenseSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7628184
	// Params: [ Num(4) Size(0x10) ]
	void AdjustSightSenseSize(int32_t Index, float RadiusFactor, float AngleFactor, float VisibleRate);

	// Object: Function GPAIBase.AIAdvancedPerceptionComponent.AdjustHearingSenseSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76280e0
	// Params: [ Num(1) Size(0x4) ]
	void AdjustHearingSenseSize(float factor);
	DEFINE_UE_CLASS_HELPERS(UAIAdvancedPerceptionComponent, "AIAdvancedPerceptionComponent")

};

// Object: Class GPAIBase.AIBPLib
// Size: 0x28 (Inherited: 0x28)
struct UAIBPLib : UBlueprintFunctionLibrary
{

	// Object: Function GPAIBase.AIBPLib.SetBDVector
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7628748
	// Params: [ Num(3) Size(0x1C) ]
	static void SetBDVector(struct UBlackboardComponent* BlackboardComp, struct FName Key, struct FVector Value);

	// Object: Function GPAIBase.AIBPLib.OpenBPAssetByBPClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x76286b4
	// Params: [ Num(1) Size(0x8) ]
	static void OpenBPAssetByBPClass(struct UObject* objectClass);
	DEFINE_UE_CLASS_HELPERS(UAIBPLib, "AIBPLib")

};

// Object: Class GPAIBase.GPAIFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGPAIFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GPAIBase.GPAIFunctionLibrary.TestCoverToLocationVisibility
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7628bcc
	// Params: [ Num(4) Size(0x16) ]
	static uint8_t TestCoverToLocationVisibility(struct UNZCoverPoint* FromCover, struct FVector ToLocation, uint8_t bDrawDebug);

	// Object: Function GPAIBase.GPAIFunctionLibrary.TestCoverToActorVisibility
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7628aa8
	// Params: [ Num(4) Size(0x12) ]
	static uint8_t TestCoverToActorVisibility(struct UNZCoverPoint* FromCover, struct AActor* ToActor, uint8_t bDrawDebug);

	// Object: Function GPAIBase.GPAIFunctionLibrary.CheckVisibility
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x762885c
	// Params: [ Num(9) Size(0x4A) ]
	static uint8_t CheckVisibility(struct AActor* FromActor, struct UObject* FromCover, struct FVector FromLocation, struct AActor* ToActor, struct UObject* ToCover, struct FVector ToLocation, struct UObject* WorldContext, uint8_t bDrawDebug);
	DEFINE_UE_CLASS_HELPERS(UGPAIFunctionLibrary, "GPAIFunctionLibrary")

};

// Object: Class GPAIBase.AIJob
// Size: 0x50 (Inherited: 0x28)
struct UAIJob : UObject
{
	float JobOverTime; // 0x28(0x4)
	float JobWaitOverTime; // 0x2C(0x4)
	int32_t MaxAINum; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct AAIController*> ExecutorControllers; // 0x38(0x10)
	EAIJobType JobType; // 0x48(0x1)
	EAIJobState State; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)


	// Object: Function GPAIBase.AIJob.Update
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x762939c
	// Params: [ Num(0) Size(0x0) ]
	void Update();

	// Object: Function GPAIBase.AIJob.Start
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7629380
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function GPAIBase.AIJob.SetState
	// Flags: [Final|Native|Public]
	// Offset: 0x76292e0
	// Params: [ Num(1) Size(0x1) ]
	void SetState(EAIJobState Val);

	// Object: Function GPAIBase.AIJob.Join
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7629228
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Join(struct AAIController* AIController);

	// Object: Function GPAIBase.AIJob.IsIdle
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x7629204
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsIdle();

	// Object: Function GPAIBase.AIJob.IsFinishExtra
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x76291e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFinishExtra();

	// Object: Function GPAIBase.AIJob.IsFinish
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7629128
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsFinish(struct AAIController* AIController);

	// Object: Function GPAIBase.AIJob.GetJobType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x762910c
	// Params: [ Num(1) Size(0x1) ]
	EAIJobType GetJobType();

	// Object: Function GPAIBase.AIJob.GetAINum
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x76290f0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAINum();

	// Object: Function GPAIBase.AIJob.Finish
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x76290d4
	// Params: [ Num(0) Size(0x0) ]
	void Finish();

	// Object: Function GPAIBase.AIJob.Exit
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7629028
	// Params: [ Num(1) Size(0x8) ]
	void Exit(struct AAIController* AIController);

	// Object: Function GPAIBase.AIJob.CanJoin
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x7628f70
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CanJoin(struct AAIController* Controller);
	DEFINE_UE_CLASS_HELPERS(UAIJob, "AIJob")

};

// Object: Class GPAIBase.JobFilterBase
// Size: 0x28 (Inherited: 0x28)
struct UJobFilterBase : UObject
{

	// Object: Function GPAIBase.JobFilterBase.GetJob_Implementation
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x7629688
	// Params: [ Num(3) Size(0x20) ]
	struct UAIJob* GetJob_Implementation(struct AAIController* AIController, const struct TArray<struct UAIJob*>& Jobs);

	// Object: Function GPAIBase.JobFilterBase.GetJob
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x7629580
	// Params: [ Num(3) Size(0x20) ]
	struct UAIJob* GetJob(struct AAIController* AIController, const struct TArray<struct UAIJob*>& Jobs);
	DEFINE_UE_CLASS_HELPERS(UJobFilterBase, "JobFilterBase")

};

// Object: Class GPAIBase.AIJobManager
// Size: 0x3F0 (Inherited: 0x370)
struct AAIJobManager : ALevelSubsystem
{
	struct TArray<struct FAIJobList> ActivatedJobs; // 0x370(0x10)
	uint8_t Pad_0x380[0x50]; // 0x380(0x50)
	struct TArray<struct FAIJobList> ProducedJobs; // 0x3D0(0x10)
	struct TArray<struct FAIJobSetting> AIJobSettings; // 0x3E0(0x10)


	// Object: Function GPAIBase.AIJobManager.UpdateJobs
	// Flags: [Final|Native|Protected]
	// Offset: 0x762a80c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateJobs();

	// Object: Function GPAIBase.AIJobManager.Tick
	// Flags: [Native|Protected]
	// Offset: 0x762a760
	// Params: [ Num(1) Size(0x4) ]
	void Tick(float DeltaSeconds);

	// Object: Function GPAIBase.AIJobManager.StaticSetAIJobSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762a638
	// Params: [ Num(2) Size(0x40) ]
	static void StaticSetAIJobSetting(struct FAIJobSetting Setting, struct UObject* WorldContext);

	// Object: Function GPAIBase.AIJobManager.StaticGetSuitableProducedJobNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762a508
	// Params: [ Num(4) Size(0x18) ]
	static int32_t StaticGetSuitableProducedJobNum(struct UObject* WorldContext, struct AAIController* Controller, EAIJobType JobType);

	// Object: Function GPAIBase.AIJobManager.StaticGetAIActivatedJob
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762a420
	// Params: [ Num(3) Size(0x11) ]
	static EAIJobType StaticGetAIActivatedJob(struct AAIController* Controller, struct UObject* WorldContext);

	// Object: Function GPAIBase.AIJobManager.StaticExitAIJob
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762a338
	// Params: [ Num(2) Size(0x10) ]
	static void StaticExitAIJob(struct AAIController* Controller, struct UAIJob* Job);

	// Object: Function GPAIBase.AIJobManager.StaticDistributeAIJobContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762a218
	// Params: [ Num(3) Size(0x18) ]
	static void StaticDistributeAIJobContent(EAIJobType JobType, struct UAIJob* Job, struct UObject* WorldContext);

	// Object: Function GPAIBase.AIJobManager.StaticDistributeAIJob
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762a130
	// Params: [ Num(2) Size(0x10) ]
	static void StaticDistributeAIJob(EAIJobType JobType, struct UObject* WorldContext);

	// Object: Function GPAIBase.AIJobManager.StaticAcquireAIJob
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7629fbc
	// Params: [ Num(5) Size(0x21) ]
	static uint8_t StaticAcquireAIJob(struct AAIController* Controller, EAIJobType JobType, struct UJobFilterBase* JobFilter, struct UObject* WorldContext);

	// Object: Function GPAIBase.AIJobManager.SetAIJobSetting
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7629ee8
	// Params: [ Num(1) Size(0x38) ]
	void SetAIJobSetting(struct FAIJobSetting Setting);

	// Object: Function GPAIBase.AIJobManager.GetSuitableProducedJobNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7629e00
	// Params: [ Num(3) Size(0x10) ]
	int32_t GetSuitableProducedJobNum(struct AAIController* Controller, EAIJobType JobType);

	// Object: Function GPAIBase.AIJobManager.GetAIJobManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7629d5c
	// Params: [ Num(2) Size(0x10) ]
	static struct AAIJobManager* GetAIJobManager(struct UObject* WorldContext);

	// Object: Function GPAIBase.AIJobManager.GetAIJob
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7629bdc
	// Params: [ Num(4) Size(0x28) ]
	static struct UAIJob* GetAIJob(struct UObject* WorldContext, EAIJobType AIJobType, struct FString JobName);

	// Object: Function GPAIBase.AIJobManager.GetAIActivatedJobStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7629b30
	// Params: [ Num(2) Size(0x10) ]
	struct UAIJob* GetAIActivatedJobStatus(struct AAIController* Controller);

	// Object: Function GPAIBase.AIJobManager.GetAIActivatedJob
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7629a84
	// Params: [ Num(2) Size(0x9) ]
	EAIJobType GetAIActivatedJob(struct AAIController* Controller);

	// Object: Function GPAIBase.AIJobManager.ExitAIJob
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76299a8
	// Params: [ Num(2) Size(0x10) ]
	void ExitAIJob(struct AAIController* Controller, struct UAIJob* Job);

	// Object: Function GPAIBase.AIJobManager.DistributeAIJob
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76298c8
	// Params: [ Num(2) Size(0x10) ]
	void DistributeAIJob(EAIJobType JobType, struct UAIJob* Job);

	// Object: Function GPAIBase.AIJobManager.CheckProduceAIJob
	// Flags: [Final|Native|Protected]
	// Offset: 0x76298b4
	// Params: [ Num(0) Size(0x0) ]
	void CheckProduceAIJob();

	// Object: Function GPAIBase.AIJobManager.CheckAIJobOver
	// Flags: [Final|Native|Protected]
	// Offset: 0x76298a0
	// Params: [ Num(0) Size(0x0) ]
	void CheckAIJobOver();

	// Object: Function GPAIBase.AIJobManager.BeginPlay
	// Flags: [Native|Protected]
	// Offset: 0x7629884
	// Params: [ Num(0) Size(0x0) ]
	void BeginPlay();

	// Object: Function GPAIBase.AIJobManager.AcquireAIJob
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7629798
	// Params: [ Num(3) Size(0xA) ]
	uint8_t AcquireAIJob(struct AAIController* Controller, EAIJobType JobType);
	DEFINE_UE_CLASS_HELPERS(AAIJobManager, "AIJobManager")

};

// Object: Class GPAIBase.AILayoutConfigActor
// Size: 0x3D0 (Inherited: 0x370)
struct AAILayoutConfigActor : AActor
{
	struct FString JsonConfig; // 0x370(0x10)
	struct TArray<struct FExclusionTag> ExcluList; // 0x380(0x10)
	uint8_t Pad_0x390[0x40]; // 0x390(0x40)


	// Object: Function GPAIBase.AILayoutConfigActor.LoadAILayoutCustom
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x762aaa4
	// Params: [ Num(3) Size(0x28) ]
	static void LoadAILayoutCustom(struct UObject* WorldContextObject, const struct TArray<struct FString>& LevelList, struct FString MapName);

	// Object: Function GPAIBase.AILayoutConfigActor.LoadAILayout
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762a8f4
	// Params: [ Num(4) Size(0x2C) ]
	static void LoadAILayout(struct UObject* WorldContextObject, struct FString ConfigCategory, struct FString MapName, int32_t TagId);
	DEFINE_UE_CLASS_HELPERS(AAILayoutConfigActor, "AILayoutConfigActor")

};

// Object: Class GPAIBase.AIThreatWeightsComponent
// Size: 0x900 (Inherited: 0xF8)
struct UAIThreatWeightsComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x800]; // 0xF8(0x800)
	float DefaultTypeWeight; // 0x8F8(0x4)
	float DefaultCampWeight; // 0x8FC(0x4)


	// Object: Function GPAIBase.AIThreatWeightsComponent.SetThreatTypeWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762ad84
	// Params: [ Num(2) Size(0x8) ]
	void SetThreatTypeWeight(uint8_t threatType, float Weight);

	// Object: Function GPAIBase.AIThreatWeightsComponent.SetThreatCampWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762aca4
	// Params: [ Num(2) Size(0x8) ]
	void SetThreatCampWeight(uint8_t ThreatCamp, float Weight);
	DEFINE_UE_CLASS_HELPERS(UAIThreatWeightsComponent, "AIThreatWeightsComponent")

};

// Object: Class GPAIBase.PointGrid
// Size: 0x378 (Inherited: 0x370)
struct APointGrid : AActor
{
	uint8_t Pad_0x370[0x8]; // 0x370(0x8)


	// Object: Function GPAIBase.PointGrid.ThreatAreaClear
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x762bd70
	// Params: [ Num(2) Size(0x10) ]
	static void ThreatAreaClear(int64_t& AreaToken, struct UObject* WorldContext);

	// Object: Function GPAIBase.PointGrid.ThreatAreaCircleVisible
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x762baa8
	// Params: [ Num(10) Size(0x38) ]
	static void ThreatAreaCircleVisible(int64_t& AreaToken, uint8_t threatType, uint8_t CampType, struct AActor* Actor, struct AActor* Enemy, float radius, float threatValue, EAIThreatAreaWeightPainter Painter, uint8_t DebugDraw, struct UObject* WorldContext);

	// Object: Function GPAIBase.PointGrid.ThreatAreaCircleConnect
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x762b818
	// Params: [ Num(9) Size(0x30) ]
	static void ThreatAreaCircleConnect(int64_t& AreaToken, uint8_t threatType, uint8_t CampType, struct AActor* Actor, float radius, float threatValue, EAIThreatAreaWeightPainter Painter, uint8_t DebugDraw, struct UObject* WorldContext);

	// Object: Function GPAIBase.PointGrid.ThreatAreaCircle
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x762b588
	// Params: [ Num(9) Size(0x30) ]
	static void ThreatAreaCircle(int64_t& AreaToken, uint8_t threatType, uint8_t CampType, struct AActor* Actor, float radius, float threatValue, EAIThreatAreaWeightPainter Painter, uint8_t DebugDraw, struct UObject* WorldContext);

	// Object: Function GPAIBase.PointGrid.RunPathFindingSingle
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x762b36c
	// Params: [ Num(7) Size(0x58) ]
	static struct FAIPathFindingResult RunPathFindingSingle(struct UAIThreatWeightsComponent* ThreatWeights, struct FVector StartPoint, struct FVector GoalPoints, float radius, uint8_t DebugDraw, struct UObject* WorldContext);

	// Object: Function GPAIBase.PointGrid.RunPathFindingArrayBest
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x762b12c
	// Params: [ Num(7) Size(0x60) ]
	static struct FAIPathFindingResult RunPathFindingArrayBest(struct UAIThreatWeightsComponent* ThreatWeights, struct FVector StartPoint, const struct TArray<struct FVector>& GoalPoints, float radius, uint8_t DebugDraw, struct UObject* WorldContext);

	// Object: Function GPAIBase.PointGrid.RunPathFindingArrayAll
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x762af20
	// Params: [ Num(7) Size(0x48) ]
	static struct TArray<struct FAIPathFindingResult> RunPathFindingArrayAll(struct UAIThreatWeightsComponent* ThreatWeights, struct FVector StartPoint, const struct TArray<struct FVector>& GoalPoints, float radius, uint8_t DebugDraw, struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(APointGrid, "PointGrid")

};

// Object: Class GPAIBase.AISense_SightEx
// Size: 0x160 (Inherited: 0x78)
struct UAISense_SightEx : UAISense
{
	uint8_t Pad_0x78[0xC0]; // 0x78(0xC0)
	int32_t MaxTracesPerTick; // 0x138(0x4)
	int32_t MinQueriesPerTimeSliceCheck; // 0x13C(0x4)
	double MaxTimeSlicePerTick; // 0x140(0x8)
	float HighImportanceQueryDistanceThreshold; // 0x148(0x4)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	float MaxQueryImportance; // 0x150(0x4)
	float SightLimitQueryImportance; // 0x154(0x4)
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	DEFINE_UE_CLASS_HELPERS(UAISense_SightEx, "AISense_SightEx")

};

// Object: Class GPAIBase.AISenseConfig_SightEx
// Size: 0x68 (Inherited: 0x48)
struct UAISenseConfig_SightEx : UAISenseConfig
{
	struct UAISense_SightEx* Implementation; // 0x48(0x8)
	struct TArray<struct FVisionConeConfig> VisionConeConfigs; // 0x50(0x10)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x60(0x4)
	uint8_t bUsePawnRot : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_SightEx, "AISenseConfig_SightEx")

};

// Object: Class GPAIBase.ThreatAreaInterface
// Size: 0x28 (Inherited: 0x28)
struct IThreatAreaInterface : IInterface
{

	// Object: Function GPAIBase.ThreatAreaInterface.GetThreatAreaType
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	EAIThreatAreaType GetThreatAreaType();

	// Object: Function GPAIBase.ThreatAreaInterface.GetThreatAreaScore
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatAreaScore();

	// Object: Function GPAIBase.ThreatAreaInterface.GetThreatAreaRadius
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatAreaRadius();

	// Object: Function GPAIBase.ThreatAreaInterface.GetThreatAreaHeight
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatAreaHeight();

	// Object: Function GPAIBase.ThreatAreaInterface.GetThreatAreaDuration
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatAreaDuration();
	DEFINE_UE_CLASS_HELPERS(IThreatAreaInterface, "ThreatAreaInterface")

};

// Object: Class GPAIBase.AIThreatAreaSystem
// Size: 0x388 (Inherited: 0x370)
struct AAIThreatAreaSystem : ALevelSubsystem
{
	struct TArray<struct FAIThreatArea> ThreatAreaList; // 0x370(0x10)
	float UpdateInterval; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)


	// Object: Function GPAIBase.AIThreatAreaSystem.Tick
	// Flags: [Native|Protected]
	// Offset: 0x762e054
	// Params: [ Num(1) Size(0x4) ]
	void Tick(float DeltaSeconds);

	// Object: Function GPAIBase.AIThreatAreaSystem.RegisterAsStaticThreatAreaInWorld
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x762de9c
	// Params: [ Num(6) Size(0x28) ]
	static void RegisterAsStaticThreatAreaInWorld(struct FVector Center, float radius, float Height, float Duration, float Score, struct AActor* RelatedActor);

	// Object: Function GPAIBase.AIThreatAreaSystem.RegisterAsStaticThreatArea
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x762dcd4
	// Params: [ Num(6) Size(0x28) ]
	void RegisterAsStaticThreatArea(struct FVector Center, float radius, float Height, float Duration, float Score, struct AActor* RelatedActor);

	// Object: Function GPAIBase.AIThreatAreaSystem.RegisterAsDynamicThreatAreaInWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x762dc40
	// Params: [ Num(1) Size(0x8) ]
	static void RegisterAsDynamicThreatAreaInWorld(struct AActor* RelatedActor);

	// Object: Function GPAIBase.AIThreatAreaSystem.RegisterAsDynamicThreatArea
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762db9c
	// Params: [ Num(1) Size(0x8) ]
	void RegisterAsDynamicThreatArea(struct AActor* RelatedActor);

	// Object: Function GPAIBase.AIThreatAreaSystem.GetPositionThreatScoreStatic
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x762dabc
	// Params: [ Num(3) Size(0x18) ]
	static float GetPositionThreatScoreStatic(struct AActor* worldRelatedActor, struct FVector inCheckLoc);

	// Object: Function GPAIBase.AIThreatAreaSystem.GetPositionThreatScore
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x762da10
	// Params: [ Num(2) Size(0x10) ]
	float GetPositionThreatScore(struct FVector inCheckLoc);

	// Object: Function GPAIBase.AIThreatAreaSystem.GetAIThreatAreaSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x762d96c
	// Params: [ Num(2) Size(0x10) ]
	static struct AAIThreatAreaSystem* GetAIThreatAreaSystem(struct UWorld* WorldContext);

	// Object: Function GPAIBase.AIThreatAreaSystem.BeginPlay
	// Flags: [Native|Protected]
	// Offset: 0x762d950
	// Params: [ Num(0) Size(0x0) ]
	void BeginPlay();
	DEFINE_UE_CLASS_HELPERS(AAIThreatAreaSystem, "AIThreatAreaSystem")

};

// Object: Class GPAIBase.ThreatSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct IThreatSourceInterface : IInterface
{

	// Object: Function GPAIBase.ThreatSourceInterface.GetThreat_Sight
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreat_Sight();

	// Object: Function GPAIBase.ThreatSourceInterface.GetThreat_Hurt
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreat_Hurt();

	// Object: Function GPAIBase.ThreatSourceInterface.GetThreat_Heard
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreat_Heard();

	// Object: Function GPAIBase.ThreatSourceInterface.GetThreat_Default
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreat_Default();

	// Object: Function GPAIBase.ThreatSourceInterface.GetThreat_AirHit
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float GetThreat_AirHit();
	DEFINE_UE_CLASS_HELPERS(IThreatSourceInterface, "ThreatSourceInterface")

};

// Object: Class GPAIBase.AIThreatRecordComponent
// Size: 0x200 (Inherited: 0xF8)
struct UAIThreatRecordComponent : UActorComponent
{
	struct TMap<struct TWeakObjectPtr<struct ACHARACTER>, struct FCharacterThreatRecord> ThreadRecordMap; // 0xF8(0x50)
	struct TWeakObjectPtr<struct ACHARACTER> HighestThreatKey; // 0x148(0x8)
	struct TWeakObjectPtr<struct ACHARACTER> HighestSightThreatKey; // 0x150(0x8)
	struct TWeakObjectPtr<struct ACHARACTER> HighestHearingThreatKey; // 0x158(0x8)
	struct TWeakObjectPtr<struct ACHARACTER> HighestHurtThreatKey; // 0x160(0x8)
	uint8_t Pad_0x168[0x10]; // 0x168(0x10)
	struct FAIThreatConfig ThreatConfig; // 0x178(0x40)
	struct FAIThreatConfig ThreatConfigDefaultSetting; // 0x1B8(0x40)
	struct AAIController* OwnerController; // 0x1F8(0x8)


	// Object: Function GPAIBase.AIThreatRecordComponent.RecordPerceptionThreat
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x762e6e0
	// Params: [ Num(3) Size(0x4C) ]
	void RecordPerceptionThreat(struct AAIController* perceptionOwner, struct ACHARACTER* threatRelatedCharacter, struct FAIStimulus Stimulus);

	// Object: Function GPAIBase.AIThreatRecordComponent.RecordNewThreadEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762e4fc
	// Params: [ Num(4) Size(0x70) ]
	struct FCharacterThreatRecord RecordNewThreadEvent(EAIThreatType threatType, float threatValue, struct ACHARACTER* RelatedCharacter);

	// Object: Function GPAIBase.AIThreatRecordComponent.GetLastHeardLocationFromHighestHeardTarget
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x762e4c4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetLastHeardLocationFromHighestHeardTarget();

	// Object: Function GPAIBase.AIThreatRecordComponent.GetHighestThreatCharacterValueInSpecType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762e418
	// Params: [ Num(2) Size(0x8) ]
	float GetHighestThreatCharacterValueInSpecType(EAIThreatType threatType);

	// Object: Function GPAIBase.AIThreatRecordComponent.GetHighestThreatCharacterValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762e3e4
	// Params: [ Num(1) Size(0x4) ]
	float GetHighestThreatCharacterValue();

	// Object: Function GPAIBase.AIThreatRecordComponent.GetHighestThreatCharacterInSpecType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762e338
	// Params: [ Num(2) Size(0x10) ]
	struct ACHARACTER* GetHighestThreatCharacterInSpecType(EAIThreatType threatType);

	// Object: Function GPAIBase.AIThreatRecordComponent.GetHighestThreatCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762e304
	// Params: [ Num(1) Size(0x8) ]
	struct ACHARACTER* GetHighestThreatCharacter();

	// Object: Function GPAIBase.AIThreatRecordComponent.ClearAllThreats
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762e2f0
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllThreats();
	DEFINE_UE_CLASS_HELPERS(UAIThreatRecordComponent, "AIThreatRecordComponent")

};

// Object: Class GPAIBase.BTComposite_RandomSelect
// Size: 0xA0 (Inherited: 0x90)
struct UBTComposite_RandomSelect : UBTCompositeNode
{
	struct TArray<int32_t> PercentageOfBranch; // 0x90(0x10)
	DEFINE_UE_CLASS_HELPERS(UBTComposite_RandomSelect, "BTComposite_RandomSelect")

};

// Object: Class GPAIBase.BTComposite_SelectByBBKeyValue
// Size: 0xC8 (Inherited: 0x90)
struct UBTComposite_SelectByBBKeyValue : UBTCompositeNode
{
	struct FBlackboardKeySelector SpecKey; // 0x90(0x28)
	struct TArray<float> SpecKeySection; // 0xB8(0x10)
	DEFINE_UE_CLASS_HELPERS(UBTComposite_SelectByBBKeyValue, "BTComposite_SelectByBBKeyValue")

};

// Object: Class GPAIBase.DynamicBlackboardComponent
// Size: 0x200 (Inherited: 0x1F0)
struct UDynamicBlackboardComponent : UBlackboardComponent
{
	struct TArray<struct FBlackboardDataFrame> Frames; // 0x1F0(0x10)
	DEFINE_UE_CLASS_HELPERS(UDynamicBlackboardComponent, "DynamicBlackboardComponent")

};

// Object: Class GPAIBase.AISpecificBehaviorFlagsInterface
// Size: 0x28 (Inherited: 0x28)
struct IAISpecificBehaviorFlagsInterface : IInterface
{

	// Object: Function GPAIBase.AISpecificBehaviorFlagsInterface.ShouldRecheckBTbySpecificBehaviorType
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x762eae0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldRecheckBTbySpecificBehaviorType();

	// Object: Function GPAIBase.AISpecificBehaviorFlagsInterface.RecheckedBTType
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x762eac4
	// Params: [ Num(0) Size(0x0) ]
	void RecheckedBTType();

	// Object: Function GPAIBase.AISpecificBehaviorFlagsInterface.OnBTRechecked
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x762eaa8
	// Params: [ Num(0) Size(0x0) ]
	void OnBTRechecked();

	// Object: Function GPAIBase.AISpecificBehaviorFlagsInterface.ApplyOrRegisterSpecificBehaviorFactor
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x762e9c0
	// Params: [ Num(2) Size(0x8) ]
	void ApplyOrRegisterSpecificBehaviorFactor(EGPSpecificBehaviorType factorType, int32_t NewValue);
	DEFINE_UE_CLASS_HELPERS(IAISpecificBehaviorFlagsInterface, "AISpecificBehaviorFlagsInterface")

};

// Object: Class GPAIBase.GPAIBehaviorTreeSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UGPAIBehaviorTreeSubsystem : UWorldSubsystem
{	DEFINE_UE_CLASS_HELPERS(UGPAIBehaviorTreeSubsystem, "GPAIBehaviorTreeSubsystem")

};

// Object: Class GPAIBase.GPAIBehaviorTreeComponent
// Size: 0x328 (Inherited: 0x2A8)
struct UGPAIBehaviorTreeComponent : UBehaviorTreeComponent
{
	EGPSpecificBehaviorType SpecificBehaviorType; // 0x2A4(0x1)
	struct TMap<EGPSpecificBehaviorType, struct FGPBehaviorFactor> BehaviorFactorMap; // 0x2A8(0x50)
	uint8_t Pad_0x2F9[0x27]; // 0x2F9(0x27)
	struct UGPAIBehaviorTreeSubsystem* Subsystem; // 0x320(0x8)


	// Object: Function GPAIBase.GPAIBehaviorTreeComponent.SetPathfindCommand
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x762f06c
	// Params: [ Num(1) Size(0x28) ]
	void SetPathfindCommand(const struct FAIPathFindingResult& Command);

	// Object: Function GPAIBase.GPAIBehaviorTreeComponent.ReMakeSpecificBehaviorType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762f058
	// Params: [ Num(0) Size(0x0) ]
	void ReMakeSpecificBehaviorType();

	// Object: Function GPAIBase.GPAIBehaviorTreeComponent.GetBehaviorFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762efac
	// Params: [ Num(2) Size(0xC) ]
	struct FGPBehaviorFactor GetBehaviorFactor(EGPSpecificBehaviorType Index);

	// Object: Function GPAIBase.GPAIBehaviorTreeComponent.ApplyValueToBehaviorFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762eecc
	// Params: [ Num(2) Size(0x8) ]
	void ApplyValueToBehaviorFactor(EGPSpecificBehaviorType Index, int32_t NewValue);

	// Object: Function GPAIBase.GPAIBehaviorTreeComponent.ApplyOrRegisterBehaviorFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762edec
	// Params: [ Num(2) Size(0x8) ]
	void ApplyOrRegisterBehaviorFactor(EGPSpecificBehaviorType Index, int32_t NewValue);
	DEFINE_UE_CLASS_HELPERS(UGPAIBehaviorTreeComponent, "GPAIBehaviorTreeComponent")

};

// Object: Class GPAIBase.GPAI_CoverPointAnimSetting
// Size: 0x170 (Inherited: 0xF8)
struct UGPAI_CoverPointAnimSetting : UActorComponent
{
	ECoverPointCondition CoverPointCodition; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	float LastEnterCoverCompleteTime; // 0xFC(0x4)
	struct UDataTable* EnterCoverAnimTable; // 0x100(0x8)
	struct FCoverPointAnimInfo NoUse_ForKismetInspectorBug; // 0x108(0x10)
	struct UAnimMontage* RunningIdleMontage; // 0x118(0x8)
	uint8_t IsLerpingToCoverPoint : 1; // 0x120(0x1), Mask(0x1)
	uint8_t BitPad_0x120_1 : 7; // 0x120(0x1)
	uint8_t Pad_0x121[0x3]; // 0x121(0x3)
	float CurrentLerpToCoverPointTime; // 0x124(0x4)
	float TotalLerpToCoverPointTime; // 0x128(0x4)
	struct FVector LerpingToCoverLocation; // 0x12C(0xC)
	struct FVector LerpingToCoverDirection; // 0x138(0xC)
	struct FVector LerpingToCoverStartLocation; // 0x144(0xC)
	struct FQuat LerpingToCoverStartRotation; // 0x150(0x10)
	struct ACHARACTER* OwnerCharacter; // 0x160(0x8)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)


	// Object: Function GPAIBase.GPAI_CoverPointAnimSetting.SetCharacterCoverPointCondition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x762f4b0
	// Params: [ Num(1) Size(0x1) ]
	void SetCharacterCoverPointCondition(ECoverPointCondition Condition);

	// Object: Function GPAIBase.GPAI_CoverPointAnimSetting.LerpToCoverPointTransform
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x762f38c
	// Params: [ Num(3) Size(0x1C) ]
	void LerpToCoverPointTransform(struct FVector CoverLocation, struct FVector coverToWallDir, float Duration);

	// Object: Function GPAIBase.GPAI_CoverPointAnimSetting.GetBestMontageToEnterCover
	// Flags: [Final|Native|Public]
	// Offset: 0x762f2a8
	// Params: [ Num(3) Size(0x18) ]
	struct UAnimMontage* GetBestMontageToEnterCover(struct AAIController* Controller, struct UNZCoverPoint* coverPoint);
	DEFINE_UE_CLASS_HELPERS(UGPAI_CoverPointAnimSetting, "GPAI_CoverPointAnimSetting")

};

// Object: Class GPAIBase.GPAIMontageMappingTemplate
// Size: 0x38 (Inherited: 0x28)
struct UGPAIMontageMappingTemplate : UObject
{
	struct TArray<struct FGPAIMontageMapping> MontageMapping; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAIMontageMappingTemplate, "GPAIMontageMappingTemplate")

};

// Object: Class GPAIBase.GPAI_PlayMontageCallbackProxy
// Size: 0xB0 (Inherited: 0x28)
struct UGPAI_PlayMontageCallbackProxy : UObject
{
	struct UGPAI_CoverPointAnimSetting* coverAnimSetting; // 0x28(0x8)
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x70(0x10)
	uint8_t Pad_0x80[0x30]; // 0x80(0x30)


	// Object: Function GPAIBase.GPAI_PlayMontageCallbackProxy.OnNotifyEndReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x7632620
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyEndReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function GPAIBase.GPAI_PlayMontageCallbackProxy.OnNotifyBeginReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x7632524
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyBeginReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function GPAIBase.GPAI_PlayMontageCallbackProxy.OnMontageEnded
	// Flags: [Final|Native|Protected]
	// Offset: 0x763243c
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function GPAIBase.GPAI_PlayMontageCallbackProxy.OnMontageBlendingOut
	// Flags: [Final|Native|Protected]
	// Offset: 0x7632354
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function GPAIBase.GPAI_PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x76321c4
	// Params: [ Num(6) Size(0x28) ]
	static struct UGPAI_PlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* montageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	// Object: Function GPAIBase.GPAI_PlayMontageCallbackProxy.Clear
	// Flags: [Final|Native|Public]
	// Offset: 0x76321b0
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
	DEFINE_UE_CLASS_HELPERS(UGPAI_PlayMontageCallbackProxy, "GPAI_PlayMontageCallbackProxy")

};

// Object: Class GPAIBase.GPBTTask_MoveByPath
// Size: 0xA0 (Inherited: 0x70)
struct UGPBTTask_MoveByPath : UBTTaskNode
{
	float CustomAcceptableRadius; // 0x6C(0x4)
	struct FBlackboardKeySelector TargetEnemyKey; // 0x70(0x28)
	uint8_t FaceOnTarget : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_1 : 7; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_MoveByPath, "GPBTTask_MoveByPath")

};

// Object: Class GPAIBase.GPBTDecorator_SpecificBehaviorCheck
// Size: 0x60 (Inherited: 0x60)
struct UGPBTDecorator_SpecificBehaviorCheck : UBTDecorator
{	DEFINE_UE_CLASS_HELPERS(UGPBTDecorator_SpecificBehaviorCheck, "GPBTDecorator_SpecificBehaviorCheck")

};

// Object: Class GPAIBase.GPBTTaskBase
// Size: 0x78 (Inherited: 0x70)
struct UGPBTTaskBase : UBTTaskNode
{
	float MaxWaitTime; // 0x6C(0x4)
	uint8_t bShowDebugLog : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x74_1 : 7; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)


	// Object: Function GPAIBase.GPBTTaskBase.GetCurrentGameTime
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x7632fe4
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentGameTime();
	DEFINE_UE_CLASS_HELPERS(UGPBTTaskBase, "GPBTTaskBase")

};

// Object: Class GPAIBase.GPBTTask_Blueprint
// Size: 0xA8 (Inherited: 0x78)
struct UGPBTTask_Blueprint : UGPBTTaskBase
{
	struct AAIController* AIOwner; // 0x78(0x8)
	struct AActor* ActorOwner; // 0x80(0x8)
	uint8_t Pad_0x88[0x18]; // 0x88(0x18)
	uint8_t bShowPropertyDetails : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)


	// Object: Function GPAIBase.GPBTTask_Blueprint.SetFinishOnMessageWithId
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7632de4
	// Params: [ Num(2) Size(0xC) ]
	void SetFinishOnMessageWithId(struct FName MessageName, int32_t requestId);

	// Object: Function GPAIBase.GPBTTask_Blueprint.SetFinishOnMessage
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7632d40
	// Params: [ Num(1) Size(0x8) ]
	void SetFinishOnMessage(struct FName MessageName);

	// Object: Function GPAIBase.GPBTTask_Blueprint.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function GPAIBase.GPBTTask_Blueprint.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function GPAIBase.GPBTTask_Blueprint.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function GPAIBase.GPBTTask_Blueprint.ReceiveExecute
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecute(struct AActor* OwnerActor);

	// Object: Function GPAIBase.GPBTTask_Blueprint.ReceiveAbortAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function GPAIBase.GPBTTask_Blueprint.ReceiveAbort
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveAbort(struct AActor* OwnerActor);

	// Object: Function GPAIBase.GPBTTask_Blueprint.IsTaskExecuting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7632d08
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTaskExecuting();

	// Object: Function GPAIBase.GPBTTask_Blueprint.IsTaskAborting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7632cd0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTaskAborting();

	// Object: Function GPAIBase.GPBTTask_Blueprint.GetSpecDescription
	// Flags: [Native|Event|Protected|BlueprintEvent|Const]
	// Offset: 0x7632c30
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSpecDescription();

	// Object: Function GPAIBase.GPBTTask_Blueprint.FinishExecute
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7632b84
	// Params: [ Num(1) Size(0x1) ]
	void FinishExecute(uint8_t bSuccess);

	// Object: Function GPAIBase.GPBTTask_Blueprint.FinishAbort
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7632b70
	// Params: [ Num(0) Size(0x0) ]
	void FinishAbort();
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_Blueprint, "GPBTTask_Blueprint")

};

// Object: Class GPAIBase.GPBTTask_EnterCoverPoint
// Size: 0xC0 (Inherited: 0x78)
struct UGPBTTask_EnterCoverPoint : UGPBTTaskBase
{
	struct FBlackboardKeySelector TargetCoverPointKey; // 0x78(0x28)
	int32_t SquaredDistToPlayEnterMontage; // 0xA0(0x4)
	uint8_t UseControllerRotation : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t bRotationCompositeVelocity : 1; // 0xA5(0x1), Mask(0x1)
	uint8_t BitPad_0xA5_1 : 7; // 0xA5(0x1)
	uint8_t bClearFocusTarget : 1; // 0xA6(0x1), Mask(0x1)
	uint8_t BitPad_0xA6_1 : 7; // 0xA6(0x1)
	uint8_t Pad_0xA7[0x1]; // 0xA7(0x1)
	float MaxBlockTime; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct UNavigationQueryFilter* NavFilter; // 0xB0(0x8)
	uint8_t bDrawDebugLine : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_EnterCoverPoint, "GPBTTask_EnterCoverPoint")

};

// Object: Class GPAIBase.GPBTTask_FocusToActor
// Size: 0xA8 (Inherited: 0x78)
struct UGPBTTask_FocusToActor : UGPBTTaskBase
{
	struct FBlackboardKeySelector TargetKey; // 0x78(0x28)
	uint8_t bFocusTarget : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t bCharacterMovementUseControllerRotation : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	uint8_t Pad_0xA2[0x6]; // 0xA2(0x6)
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_FocusToActor, "GPBTTask_FocusToActor")

};

// Object: Class GPAIBase.GPBTTask_MoveToActor
// Size: 0x128 (Inherited: 0x78)
struct UGPBTTask_MoveToActor : UGPBTTaskBase
{
	struct FBlackboardKeySelector TargetKey; // 0x78(0x28)
	float CustomAcceptableRadius; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FBlackboardKeySelector AcceptableRadiusKey; // 0xA8(0x28)
	uint8_t UseControllerRotation : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t bRotationCompositeVelocity : 1; // 0xD1(0x1), Mask(0x1)
	uint8_t BitPad_0xD1_1 : 7; // 0xD1(0x1)
	uint8_t bFocusTarget : 1; // 0xD2(0x1), Mask(0x1)
	uint8_t BitPad_0xD2_1 : 7; // 0xD2(0x1)
	uint8_t bExpireTimeAsSuccess : 1; // 0xD3(0x1), Mask(0x1)
	uint8_t BitPad_0xD3_1 : 7; // 0xD3(0x1)
	uint8_t bClearFocusTarget : 1; // 0xD4(0x1), Mask(0x1)
	uint8_t BitPad_0xD4_1 : 7; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	float MaxBlockTime; // 0xD8(0x4)
	uint8_t bMoveAutoOpenDoor : 1; // 0xDC(0x1), Mask(0x1)
	uint8_t BitPad_0xDC_1 : 7; // 0xDC(0x1)
	uint8_t Pad_0xDD[0x3]; // 0xDD(0x3)
	struct UNavigationQueryFilter* NavFilter; // 0xE0(0x8)
	uint8_t bDrawDebugLine : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct AActor* TargetActor; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x30]; // 0xF8(0x30)
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_MoveToActor, "GPBTTask_MoveToActor")

};

// Object: Class GPAIBase.GPBTTask_RunDynamicBehaviorBase
// Size: 0x80 (Inherited: 0x78)
struct UGPBTTask_RunDynamicBehaviorBase : UGPBTTaskBase
{
	struct UBehaviorTree* BehaviorAsset; // 0x78(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_RunDynamicBehaviorBase, "GPBTTask_RunDynamicBehaviorBase")

};

// Object: Class GPAIBase.GPBTTask_RunBlackboardBehavior
// Size: 0xB0 (Inherited: 0x80)
struct UGPBTTask_RunBlackboardBehavior : UGPBTTask_RunDynamicBehaviorBase
{
	struct FBlackboardKeySelector BehaviorBBKey; // 0x80(0x28)
	struct UBehaviorTree* DefaultBehavior; // 0xA8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_RunBlackboardBehavior, "GPBTTask_RunBlackboardBehavior")

};

// Object: Class GPAIBase.GPBTTask_SpecificBehaviorBase
// Size: 0x98 (Inherited: 0x80)
struct UGPBTTask_SpecificBehaviorBase : UGPBTTask_RunDynamicBehaviorBase
{
	struct TArray<struct FGPSpecificBehaviorTreeSetting> SpecificBehaviorList; // 0x80(0x10)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x90(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPBTTask_SpecificBehaviorBase, "GPBTTask_SpecificBehaviorBase")

};

// Object: Class GPAIBase.GPEnvQueryInstanceBPWrapper
// Size: 0x78 (Inherited: 0x78)
struct UGPEnvQueryInstanceBPWrapper : UEnvQueryInstanceBlueprintWrapper
{

	// Object: Function GPAIBase.GPEnvQueryInstanceBPWrapper.GetResultsAsObjects
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x763323c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UObject*> GetResultsAsObjects();

	// Object: Function GPAIBase.GPEnvQueryInstanceBPWrapper.GetResultAsObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7633190
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetResultAsObject(int32_t ResultIndex);

	// Object: Function GPAIBase.GPEnvQueryInstanceBPWrapper.CheckPosInTopRange
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x763302c
	// Params: [ Num(5) Size(0x19) ]
	uint8_t CheckPosInTopRange(struct FVector CheckLocation, float DestTopPercent, int32_t DestTopRank, float CheckDistTolerence);
	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryInstanceBPWrapper, "GPEnvQueryInstanceBPWrapper")

};

// Object: Class GPAIBase.GPEnvQueryItemType_ObjectBase
// Size: 0x30 (Inherited: 0x30)
struct UGPEnvQueryItemType_ObjectBase : UEnvQueryItemType_VectorBase
{	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryItemType_ObjectBase, "GPEnvQueryItemType_ObjectBase")

};

// Object: Class GPAIBase.GPEnvQueryItemType_CommonPoint
// Size: 0x30 (Inherited: 0x30)
struct UGPEnvQueryItemType_CommonPoint : UGPEnvQueryItemType_ObjectBase
{	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryItemType_CommonPoint, "GPEnvQueryItemType_CommonPoint")

};

// Object: Class GPAIBase.GPEnvQueryTest_AIDensity
// Size: 0x218 (Inherited: 0x1F8)
struct UGPEnvQueryTest_AIDensity : UEnvQueryTest
{
	EAIDensityRatingType AIDensityMode; // 0x1F1(0x1)
	struct AActor* CheckActorType; // 0x1F8(0x8)
	struct UEnvQueryContext* CheckCenter; // 0x200(0x8)
	float CheckRadius; // 0x208(0x4)
	EAIDensityDistanceType DistanceCalcType; // 0x20C(0x1)
	uint8_t Pad_0x20E[0x2]; // 0x20E(0x2)
	struct UCurveFloat* DistanceScoreCurve; // 0x210(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryTest_AIDensity, "GPEnvQueryTest_AIDensity")

};

// Object: Class GPAIBase.GPEnvQueryTest_CoverDirectionCheck
// Size: 0x200 (Inherited: 0x1F8)
struct UGPEnvQueryTest_CoverDirectionCheck : UEnvQueryTest
{
	struct UEnvQueryContext* DistanceTo; // 0x1F8(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryTest_CoverDirectionCheck, "GPEnvQueryTest_CoverDirectionCheck")

};

// Object: Class GPAIBase.GPEnvQueryTest_Distance_CurveScore
// Size: 0x208 (Inherited: 0x1F8)
struct UGPEnvQueryTest_Distance_CurveScore : UEnvQueryTest
{
	EAIDistanceType TestDistanceMode; // 0x1F1(0x1)
	struct UEnvQueryContext* DistanceTo; // 0x1F8(0x8)
	struct UCurveFloat* ScoreCurve; // 0x200(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryTest_Distance_CurveScore, "GPEnvQueryTest_Distance_CurveScore")

};

// Object: Class GPAIBase.GPEnvQueryTest_PathTest
// Size: 0x290 (Inherited: 0x1F8)
struct UGPEnvQueryTest_PathTest : UEnvQueryTest
{
	EGPEnvTestPathTest TestMode; // 0x1F1(0x1)
	struct UEnvQueryContext* Context; // 0x1F8(0x8)
	struct FAIDataProviderBoolValue PathFromContext; // 0x200(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x238(0x38)
	struct UNavigationQueryFilter* FilterClass; // 0x270(0x8)
	struct FVector NavProjectExtent; // 0x278(0xC)
	int32_t MaxPathFindingTestNum; // 0x284(0x4)
	int32_t MaxPathFindingPassedTestNum; // 0x288(0x4)
	uint8_t CheckTwoWayWithPathExist : 1; // 0x28C(0x1), Mask(0x1)
	uint8_t BitPad_0x28D_1 : 7; // 0x28D(0x1)
	uint8_t Pad_0x28E[0x2]; // 0x28E(0x2)
	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryTest_PathTest, "GPEnvQueryTest_PathTest")

};

// Object: Class GPAIBase.GPEnvQueryTest_ThreatScore
// Size: 0x1F8 (Inherited: 0x1F8)
struct UGPEnvQueryTest_ThreatScore : UEnvQueryTest
{
	EGPThreatRatingType ThreatRateMode; // 0x1F1(0x1)
	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryTest_ThreatScore, "GPEnvQueryTest_ThreatScore")

};

// Object: Class GPAIBase.GPEnvQueryTest_VisibilityCheck
// Size: 0x218 (Inherited: 0x1F8)
struct UGPEnvQueryTest_VisibilityCheck : UEnvQueryTest
{
	EAIVisibilityCheckType VisibilityCheckMode; // 0x1F1(0x1)
	EAIVisibilityRatingType VisibilityRateMode; // 0x1F2(0x1)
	struct UEnvQueryContext* InputContext; // 0x1F8(0x8)
	float ContextVerticalOffset; // 0x200(0x4)
	float CheckPointVerticalOffset; // 0x204(0x4)
	uint8_t bIgnoreVisibilityTest : 1; // 0x208(0x1), Mask(0x1)
	uint8_t BitPad_0x20A_1 : 7; // 0x20A(0x1)
	uint8_t Pad_0x20B[0x1]; // 0x20B(0x1)
	float FixDistanceRange; // 0x20C(0x4)
	float FixScoreWithinDistance; // 0x210(0x4)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPEnvQueryTest_VisibilityCheck, "GPEnvQueryTest_VisibilityCheck")

};

// Object: Class GPAIBase.GPEQSGenerator_RoundArea
// Size: 0xB8 (Inherited: 0x80)
struct UGPEQSGenerator_RoundArea : UEnvQueryGenerator_ProjectedPoints
{
	EGeneratorIncludeType GeneratePointType; // 0x80(0x1)
	uint8_t bCenterPointIncluded : 1; // 0x81(0x1), Mask(0x1)
	uint8_t BitPad_0x81_1 : 7; // 0x81(0x1)
	uint8_t Pad_0x82[0x2]; // 0x82(0x2)
	float RoundRadius; // 0x84(0x4)
	uint8_t RoundLayerNum; // 0x88(0x1)
	uint8_t InitNodeNum; // 0x89(0x1)
	uint8_t Pad_0x8A[0x2]; // 0x8A(0x2)
	float IncreaseRate; // 0x8C(0x4)
	struct UEnvQueryContext* GenerateAround; // 0x90(0x8)
	uint8_t bAvoidClosePathToTarget : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct UEnvQueryContext* AvoidTargetCenter; // 0xA0(0x8)
	float AvoidMinPathDistance; // 0xA8(0x4)
	uint8_t bDebug : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t Pad_0xAD[0xB]; // 0xAD(0xB)


	// Object: Function GPAIBase.GPEQSGenerator_RoundArea.ShouldAvoidPoint
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|Const]
	// Offset: 0x7633948
	// Params: [ Num(3) Size(0x19) ]
	uint8_t ShouldAvoidPoint(const struct FVector& avoidTargetPoint, const struct FVector& testingPoint);
	DEFINE_UE_CLASS_HELPERS(UGPEQSGenerator_RoundArea, "GPEQSGenerator_RoundArea")

};

// Object: Class GPAIBase.GPEQSGenerator_RoundAreaEx
// Size: 0xB8 (Inherited: 0xB8)
struct UGPEQSGenerator_RoundAreaEx : UGPEQSGenerator_RoundArea
{
	float CenterOffset; // 0xB4(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPEQSGenerator_RoundAreaEx, "GPEQSGenerator_RoundAreaEx")

};

// Object: Class GPAIBase.NZCoverGenerator
// Size: 0x418 (Inherited: 0x370)
struct ANZCoverGenerator : AActor
{
	uint8_t ForceRefresh : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t bRegenerateAtBeginPlay : 1; // 0x371(0x1), Mask(0x1)
	uint8_t BitPad_0x371_1 : 7; // 0x371(0x1)
	uint8_t bRegenerateAtNavigationRebuilt : 1; // 0x372(0x1), Mask(0x1)
	uint8_t BitPad_0x372_1 : 7; // 0x372(0x1)
	uint8_t Pad_0x373[0x1]; // 0x373(0x1)
	float SegmentLength; // 0x374(0x4)
	float MaxSegDist; // 0x378(0x4)
	float CharHeight; // 0x37C(0x4)
	float StepDistTrace; // 0x380(0x4)
	float TraceLength; // 0x384(0x4)
	float MinSpaceBetweenValidPoints; // 0x388(0x4)
	float SphereSize; // 0x38C(0x4)
	float WidthMaxAgent; // 0x390(0x4)
	float HeightMaxCrouching; // 0x394(0x4)
	float HeightMaxStanding; // 0x398(0x4)
	float OffsetSideAim; // 0x39C(0x4)
	float OffsetSideAimCrouch; // 0x3A0(0x4)
	float OffsetFrontAim; // 0x3A4(0x4)
	float SideMargin; // 0x3A8(0x4)
	uint8_t bCoverOnWallEnds : 1; // 0x3AC(0x1), Mask(0x1)
	uint8_t BitPad_0x3AC_1 : 7; // 0x3AC(0x1)
	uint8_t Pad_0x3AD[0x3]; // 0x3AD(0x3)
	float HeightFrontShootPoint; // 0x3B0(0x4)
	uint8_t bGlobalRange : 1; // 0x3B4(0x1), Mask(0x1)
	uint8_t BitPad_0x3B4_1 : 7; // 0x3B4(0x1)
	ECollisionChannel TraceChannl; // 0x3B5(0x1)
	uint8_t DebugDrawAllBusyPoints : 1; // 0x3B6(0x1), Mask(0x1)
	uint8_t BitPad_0x3B6_1 : 7; // 0x3B6(0x1)
	uint8_t DebugDrawAllPoints : 1; // 0x3B7(0x1), Mask(0x1)
	uint8_t BitPad_0x3B7_1 : 7; // 0x3B7(0x1)
	uint8_t ShowCoversAfterBuild : 1; // 0x3B8(0x1), Mask(0x1)
	uint8_t BitPad_0x3B8_1 : 7; // 0x3B8(0x1)
	uint8_t bDraw1AllSegmentPointsTested : 1; // 0x3B9(0x1), Mask(0x1)
	uint8_t BitPad_0x3B9_1 : 7; // 0x3B9(0x1)
	uint8_t bDraw2SegmentPointsWithinBounds : 1; // 0x3BA(0x1), Mask(0x1)
	uint8_t BitPad_0x3BA_1 : 7; // 0x3BA(0x1)
	uint8_t bDraw3SimpleCoverGeometryTest : 1; // 0x3BB(0x1), Mask(0x1)
	uint8_t BitPad_0x3BB_1 : 7; // 0x3BB(0x1)
	uint8_t bDraw4SecondPassTracesSides : 1; // 0x3BC(0x1), Mask(0x1)
	uint8_t BitPad_0x3BC_1 : 7; // 0x3BC(0x1)
	uint8_t bDraw4SecondPassTracesSidesFrontAndBottom : 1; // 0x3BD(0x1), Mask(0x1)
	uint8_t BitPad_0x3BD_1 : 7; // 0x3BD(0x1)
	uint8_t bDraw5SecondPassArrows : 1; // 0x3BE(0x1), Mask(0x1)
	uint8_t BitPad_0x3BE_1 : 7; // 0x3BE(0x1)
	uint8_t DebugDisplayLog : 1; // 0x3BF(0x1), Mask(0x1)
	uint8_t BitPad_0x3BF_1 : 7; // 0x3BF(0x1)
	float DebugDistance; // 0x3C0(0x4)
	uint8_t bDrawOctreeBounds : 1; // 0x3C4(0x1), Mask(0x1)
	uint8_t BitPad_0x3C4_1 : 7; // 0x3C4(0x1)
	uint8_t Pad_0x3C5[0x3]; // 0x3C5(0x3)
	float DebugBusyRedShowHeight; // 0x3C8(0x4)
	uint8_t Pad_0x3CC[0x4]; // 0x3CC(0x4)
	struct TArray<struct FNZCoverPointInfo> CoverPointData; // 0x3D0(0x10)
	float OccupyDistSequared; // 0x3E0(0x4)
	float PostOccupyDistSequared; // 0x3E4(0x4)
	uint8_t Pad_0x3E8[0x8]; // 0x3E8(0x8)
	struct TArray<struct UNZCoverPoint*> AllNZCoverPoints; // 0x3F0(0x10)
	struct TArray<struct UNZCoverPoint*> NZCoverPointsCurrentlyUsed; // 0x400(0x10)
	uint8_t Pad_0x410[0x8]; // 0x410(0x8)


	// Object: Function GPAIBase.NZCoverGenerator.ReleaseCover
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7633dd8
	// Params: [ Num(1) Size(0x8) ]
	void ReleaseCover(struct UNZCoverPoint* NZCoverPoint);

	// Object: Function GPAIBase.NZCoverGenerator.OccupyCover
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7633cf0
	// Params: [ Num(3) Size(0x11) ]
	uint8_t OccupyCover(struct UNZCoverPoint* NZCoverPoint, struct AController* Controller);

	// Object: Function GPAIBase.NZCoverGenerator.IsFreeNZCoverPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7633c40
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsFreeNZCoverPoint(struct UNZCoverPoint* NZCoverPoint);

	// Object: Function GPAIBase.NZCoverGenerator.GetCoverWithinBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7633b54
	// Params: [ Num(2) Size(0x30) ]
	struct TArray<struct UNZCoverPoint*> GetCoverWithinBox(const struct FBox& BoxIn);

	// Object: Function GPAIBase.NZCoverGenerator.CoverExistWithinBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7633a98
	// Params: [ Num(2) Size(0x1D) ]
	uint8_t CoverExistWithinBox(const struct FBox& BoxIn);
	DEFINE_UE_CLASS_HELPERS(ANZCoverGenerator, "NZCoverGenerator")

};

// Object: Class GPAIBase.NZCoverGenMgr
// Size: 0x40 (Inherited: 0x30)
struct UNZCoverGenMgr : UWorldSubsystem
{
	struct TArray<struct ANZCoverGenerator*> Generators; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UNZCoverGenMgr, "NZCoverGenMgr")

};

// Object: Class GPAIBase.CoverOccupierInterface
// Size: 0x28 (Inherited: 0x28)
struct ICoverOccupierInterface : IInterface
{

	// Object: Function GPAIBase.CoverOccupierInterface.StopCoverPointMontage
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x76364a4
	// Params: [ Num(1) Size(0x8) ]
	void StopCoverPointMontage(struct UAnimMontage* montageToStop);

	// Object: Function GPAIBase.CoverOccupierInterface.PlayCoverPointMontage
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x76363f8
	// Params: [ Num(1) Size(0x8) ]
	void PlayCoverPointMontage(struct UAnimMontage* montageToPlay);

	// Object: Function GPAIBase.CoverOccupierInterface.OnCoverOccupyLost
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x763634c
	// Params: [ Num(1) Size(0x8) ]
	void OnCoverOccupyLost(struct UNZCoverPoint* cover);

	// Object: Function GPAIBase.CoverOccupierInterface.OnCoverOccupy
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x76362a0
	// Params: [ Num(1) Size(0x8) ]
	void OnCoverOccupy(struct UNZCoverPoint* cover);

	// Object: Function GPAIBase.CoverOccupierInterface.CanApproachToCover
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7636260
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanApproachToCover();
	DEFINE_UE_CLASS_HELPERS(ICoverOccupierInterface, "CoverOccupierInterface")

};

// Object: Class GPAIBase.NZCoverPoint
// Size: 0xA0 (Inherited: 0x28)
struct UNZCoverPoint : UObject
{
	struct FVector Location; // 0x28(0xC)
	struct FVector _DirectionToWall; // 0x34(0xC)
	struct FRotator RotatorXToWall; // 0x40(0xC)
	uint8_t bLeftCoverStanding : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t bRightCoverStanding : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t BitPad_0x4D_1 : 7; // 0x4D(0x1)
	uint8_t bLeftCoverCrouched : 1; // 0x4E(0x1), Mask(0x1)
	uint8_t BitPad_0x4E_1 : 7; // 0x4E(0x1)
	uint8_t bRightCoverCrouched : 1; // 0x4F(0x1), Mask(0x1)
	uint8_t BitPad_0x4F_1 : 7; // 0x4F(0x1)
	uint8_t bFrontCoverCrouched : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	ECoverType CoverType; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct TSoftObjectPtr<AActor> CoverActor; // 0x58(0x28)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
	struct AController* OccupiedBy; // 0x88(0x8)
	ECoverOccupyState OccupyState; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct AActor* HoldOwner; // 0x98(0x8)


	// Object: Function GPAIBase.NZCoverPoint.TryOccupyCover
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7636be4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t TryOccupyCover(struct AController* Controller);

	// Object: Function GPAIBase.NZCoverPoint.ReleaseCover
	// Flags: [Final|Native|Public]
	// Offset: 0x7636bd0
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseCover();

	// Object: Function GPAIBase.NZCoverPoint.PlayerHoldCover
	// Flags: [Native|Public]
	// Offset: 0x7636ae8
	// Params: [ Num(2) Size(0xC) ]
	void PlayerHoldCover(struct AActor* OwnerChar, float InHoldTime);

	// Object: Function GPAIBase.NZCoverPoint.IsOccupiedBy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7636a38
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOccupiedBy(struct AActor* InActor);

	// Object: Function GPAIBase.NZCoverPoint.GetCoverGen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7636a04
	// Params: [ Num(1) Size(0x8) ]
	struct ANZCoverGenerator* GetCoverGen();

	// Object: Function GPAIBase.NZCoverPoint.CanSeenFromPoint
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0x7636954
	// Params: [ Num(2) Size(0xD) ]
	uint8_t CanSeenFromPoint(struct FVector InFromPoint);

	// Object: Function GPAIBase.NZCoverPoint.BestCoverShootLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x763691c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector BestCoverShootLocation();
	DEFINE_UE_CLASS_HELPERS(UNZCoverPoint, "NZCoverPoint")

};

// Object: Class GPAIBase.NZCoverRangeVolume
// Size: 0x3D0 (Inherited: 0x3A8)
struct ANZCoverRangeVolume : AVolume
{
	uint8_t bInclude : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t BitPad_0x3A8_1 : 7; // 0x3A8(0x1)
	uint8_t bDisable : 1; // 0x3A9(0x1), Mask(0x1)
	uint8_t BitPad_0x3A9_1 : 7; // 0x3A9(0x1)
	uint8_t bDebug : 1; // 0x3AA(0x1), Mask(0x1)
	uint8_t BitPad_0x3AA_1 : 7; // 0x3AA(0x1)
	uint8_t Pad_0x3AB[0x25]; // 0x3AB(0x25)
	DEFINE_UE_CLASS_HELPERS(ANZCoverRangeVolume, "NZCoverRangeVolume")

};

} // namespace SDK
