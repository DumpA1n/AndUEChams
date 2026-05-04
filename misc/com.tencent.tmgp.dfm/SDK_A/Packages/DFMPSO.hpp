#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMPSO
// Enums: 8
// Structs: 2
// Classes: 5

struct AActor;
enum class EGameFlowStageType : uint8_t;
struct UDataTable;
struct FPSOCollectDataTableInfo;
struct FPSOCollectResRow;
struct UDFMPSOAutomation;
struct UDFMPSOCacheSystem;
struct UDFMPSOTaskScheduler;
struct ADFPSOCollecterActor;
struct UPSOCollectDataTableInfosSettings;

// Object: Enum DFMPSO.EPSOCachePrecompileState
enum class EPSOCachePrecompileState : uint8_t
{
	Uninitialized = 0,
	PrecompilingAll = 1,
	PrecompiledAll = 2,
	Precompiling = 3,
	PrecompilingAllBackground = 4,
	EPSOCachePrecompileState_MAX = 5
};

// Object: Enum DFMPSO.EPSOPrecompileEvent
enum class EPSOPrecompileEvent : uint8_t
{
	Start = 0,
	Finish = 1,
	StartInMatch = 2,
	Skip = 3,
	EPSOPrecompileEvent_MAX = 4
};

// Object: Enum DFMPSO.EDFMPSOStage
enum class EDFMPSOStage : uint8_t
{
	None = 0,
	START_UP = 1,
	ALL_GAMEITEM = 4,
	ALL_EFFECT = 8,
	ALL_CHARACTER = 16,
	ENTER_MAP = 32,
	EDFMPSOStage_MAX = 33
};

// Object: Enum DFMPSO.EDFMPSOTaskGearShift
enum class EDFMPSOTaskGearShift : uint8_t
{
	Reset = 0,
	Up = 1,
	Down = 2,
	Lowest = 3,
	Highest = 4,
	EDFMPSOTaskGearShift_MAX = 5
};

// Object: Enum DFMPSO.EDFMPSOTaskPriorityGear
enum class EDFMPSOTaskPriorityGear : uint8_t
{
	PriLow = 1,
	PriMid = 2,
	PriHigh = 3,
	EDFMPSOTaskPriorityGear_MAX = 4
};

// Object: Enum DFMPSO.EDFMPSOTaskBatchGear
enum class EDFMPSOTaskBatchGear : uint8_t
{
	BatchLow = 1,
	BatchMid = 2,
	BatchHigh = 3,
	EDFMPSOTaskBatchGear_MAX = 4
};

// Object: Enum DFMPSO.EPSOCollectState
enum class EPSOCollectState : uint8_t
{
	NotStarted = 0,
	WaitToSpawnResouceActors = 1,
	SpawnResouceActors = 2,
	CollectPSOData = 3,
	Completed = 4,
	Failed = 5,
	End = 6,
	EPSOCollectState_MAX = 7
};

// Object: Enum DFMPSO.EPSOCollectResourceCategory
enum class EPSOCollectResourceCategory : uint8_t
{
	Res_StaticMesh = 0,
	Res_SkeletalMesh = 1,
	Res_ParticleSystem = 2,
	Res_MAX = 3
};

// Object: ScriptStruct DFMPSO.PSOCollectDataTableInfo
// Size: 0x48 (Inherited: 0x0)
struct FPSOCollectDataTableInfo
{
	struct TSoftObjectPtr<UDataTable> PSOCollecterDataTablePath; // 0x0(0x28)
	struct FString FilteringRule; // 0x28(0x10)
	struct TArray<struct FString> FilterFolders; // 0x38(0x10)
};

// Object: ScriptStruct DFMPSO.PSOCollectResRow
// Size: 0x38 (Inherited: 0x8)
struct FPSOCollectResRow : FTableRowBase
{
	EPSOCollectResourceCategory ResourceCategory; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TSoftObjectPtr<UObject> ResourcePath; // 0x10(0x28)
};

// Object: Class DFMPSO.DFMPSOAutomation
// Size: 0xA8 (Inherited: 0x28)
struct UDFMPSOAutomation : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
	struct AActor* ViewTarget; // 0x48(0x8)
	uint8_t bStartLoadProcess : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bStartOpenWorld : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	EDFMPSOStage CurMaskState; // 0x52(0x1)
	uint8_t Pad_0x53[0x55]; // 0x53(0x55)


	// Object: Function DFMPSO.DFMPSOAutomation.OnOpenWorldProfileState
	// Flags: [Final|Native|Protected]
	// Offset: 0x139b8f28
	// Params: [ Num(1) Size(0x4) ]
	void OnOpenWorldProfileState(int32_t State);

	// Object: Function DFMPSO.DFMPSOAutomation.OnOpenWorldProfileEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x139b8f14
	// Params: [ Num(0) Size(0x0) ]
	void OnOpenWorldProfileEnd();

	// Object: Function DFMPSO.DFMPSOAutomation.CreateNewLoadReq
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x139b8e54
	// Params: [ Num(1) Size(0x18) ]
	void CreateNewLoadReq(const struct FSoftObjectPath& InPath);
	DEFINE_UE_CLASS_HELPERS(UDFMPSOAutomation, "DFMPSOAutomation")

};

// Object: Class DFMPSO.DFMPSOCacheSystem
// Size: 0x130 (Inherited: 0x30)
struct UDFMPSOCacheSystem : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnPrecompileAllPSOFinish; // 0x30(0x10)
	struct UDFMPSOAutomation* PSOAutomation; // 0x40(0x8)
	struct UDFMPSOTaskScheduler* TaskScheduler; // 0x48(0x8)
	uint8_t Pad_0x50[0xE0]; // 0x50(0xE0)


	// Object: Function DFMPSO.DFMPSOCacheSystem.StopPrecompile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b9ae8
	// Params: [ Num(0) Size(0x0) ]
	void StopPrecompile();

	// Object: Function DFMPSO.DFMPSOCacheSystem.StartAutomation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b9ad4
	// Params: [ Num(0) Size(0x0) ]
	void StartAutomation();

	// Object: Function DFMPSO.DFMPSOCacheSystem.ShouldPrecompileAll
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x139b9a9c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldPrecompileAll();

	// Object: Function DFMPSO.DFMPSOCacheSystem.SetBackgroundBatchMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x139b9a88
	// Params: [ Num(0) Size(0x0) ]
	static void SetBackgroundBatchMode();

	// Object: Function DFMPSO.DFMPSOCacheSystem.ResumePSOBatching
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b9a74
	// Params: [ Num(0) Size(0x0) ]
	void ResumePSOBatching();

	// Object: Function DFMPSO.DFMPSOCacheSystem.ReportPSOEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x139b99d0
	// Params: [ Num(1) Size(0x1) ]
	void ReportPSOEvent(EPSOPrecompileEvent EventType);

	// Object: Function DFMPSO.DFMPSOCacheSystem.PSOCacheFileValid
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x139b9998
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PSOCacheFileValid();

	// Object: Function DFMPSO.DFMPSOCacheSystem.PrecompilePSOStartup
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x139b98d0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t PrecompilePSOStartup(const struct TArray<struct FString>& InPrecompileAreaNames);

	// Object: Function DFMPSO.DFMPSOCacheSystem.PrecompileAll
	// Flags: [Final|Native|Public]
	// Offset: 0x139b9898
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PrecompileAll();

	// Object: Function DFMPSO.DFMPSOCacheSystem.OnGameFlowEnter
	// Flags: [Final|Native|Protected]
	// Offset: 0xfbfb598
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function DFMPSO.DFMPSOCacheSystem.OnEndSOLLoadingPrecompilePSO
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b9884
	// Params: [ Num(0) Size(0x0) ]
	void OnEndSOLLoadingPrecompilePSO();

	// Object: Function DFMPSO.DFMPSOCacheSystem.OnEndMPLoadingPrecompilePSO
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b9870
	// Params: [ Num(0) Size(0x0) ]
	void OnEndMPLoadingPrecompilePSO();

	// Object: Function DFMPSO.DFMPSOCacheSystem.OnBeginSOLLoadingPrecompilePSO
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b985c
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginSOLLoadingPrecompilePSO();

	// Object: Function DFMPSO.DFMPSOCacheSystem.OnBeginMPLoadingPrecompilePSO
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b97b0
	// Params: [ Num(1) Size(0x10) ]
	void OnBeginMPLoadingPrecompilePSO(struct FString InAreaName);

	// Object: Function DFMPSO.DFMPSOCacheSystem.IsPSOCacheRedirected
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x139b9778
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPSOCacheRedirected();

	// Object: Function DFMPSO.DFMPSOCacheSystem.IsEnablePSOAutomation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x139b9740
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnablePSOAutomation();

	// Object: Function DFMPSO.DFMPSOCacheSystem.GetTaskScheduler
	// Flags: [Final|Native|Public]
	// Offset: 0x139b970c
	// Params: [ Num(1) Size(0x8) ]
	struct UDFMPSOTaskScheduler* GetTaskScheduler();

	// Object: Function DFMPSO.DFMPSOCacheSystem.GetPrecompileState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x139b96d8
	// Params: [ Num(1) Size(0x1) ]
	EPSOCachePrecompileState GetPrecompileState();

	// Object: Function DFMPSO.DFMPSOCacheSystem.GetPrecompileAllPercent
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x139b96a4
	// Params: [ Num(1) Size(0x4) ]
	float GetPrecompileAllPercent();

	// Object: Function DFMPSO.DFMPSOCacheSystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x139b9670
	// Params: [ Num(1) Size(0x8) ]
	static struct UDFMPSOCacheSystem* Get();

	// Object: Function DFMPSO.DFMPSOCacheSystem.EnterUsageMaskStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139b9588
	// Params: [ Num(2) Size(0x18) ]
	void EnterUsageMaskStage(EDFMPSOStage MaskStage, struct FString AreaName);
	DEFINE_UE_CLASS_HELPERS(UDFMPSOCacheSystem, "DFMPSOCacheSystem")

};

// Object: Class DFMPSO.DFMPSOTaskScheduler
// Size: 0x88 (Inherited: 0x28)
struct UDFMPSOTaskScheduler : UObject
{
	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
	struct FMulticastInlineDelegate OnPrecompileFinished; // 0x78(0x10)


	// Object: Function DFMPSO.DFMPSOTaskScheduler.Stop
	// Flags: [Final|Native|Public]
	// Offset: 0x139bad30
	// Params: [ Num(1) Size(0x1) ]
	void Stop(uint8_t bFinished);

	// Object: Function DFMPSO.DFMPSOTaskScheduler.Start
	// Flags: [Final|Native|Public]
	// Offset: 0x139bad1c
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.SkipPrecompile
	// Flags: [Final|Native|Public]
	// Offset: 0x139bad08
	// Params: [ Num(0) Size(0x0) ]
	void SkipPrecompile();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.RunPSOTaskScheduler
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x139bacd0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t RunPSOTaskScheduler();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.PSOTaskSchedulerDebug
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x139bac98
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PSOTaskSchedulerDebug();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.LoadingToGame
	// Flags: [Final|Native|Public]
	// Offset: 0x139bac84
	// Params: [ Num(0) Size(0x0) ]
	void LoadingToGame();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.IsRunning
	// Flags: [Final|Native|Public]
	// Offset: 0x139bac4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRunning();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x139bac38
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.Fullspeed
	// Flags: [Final|Native|Public]
	// Offset: 0x139bac24
	// Params: [ Num(0) Size(0x0) ]
	void Fullspeed();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.Background
	// Flags: [Final|Native|Public]
	// Offset: 0x139bac10
	// Params: [ Num(0) Size(0x0) ]
	void Background();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.BackgoundPSOTask
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x139babd8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t BackgoundPSOTask();

	// Object: Function DFMPSO.DFMPSOTaskScheduler.AutoSchedule
	// Flags: [Final|Native|Public]
	// Offset: 0x139bab2c
	// Params: [ Num(1) Size(0x1) ]
	void AutoSchedule(uint8_t bLowestGear);

	// Object: Function DFMPSO.DFMPSOTaskScheduler.AddPendingFinishedIniMark
	// Flags: [Final|Native|Public]
	// Offset: 0x139ba9b4
	// Params: [ Num(4) Size(0x40) ]
	void AddPendingFinishedIniMark(struct FString Section, struct FString Key, struct FString Value, struct FString ini);
	DEFINE_UE_CLASS_HELPERS(UDFMPSOTaskScheduler, "DFMPSOTaskScheduler")

};

// Object: Class DFMPSO.DFPSOCollecterActor
// Size: 0x3F0 (Inherited: 0x370)
struct ADFPSOCollecterActor : AActor
{
	uint8_t bEnableTick : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x1B]; // 0x371(0x1B)
	int32_t SpawnResourceStep; // 0x38C(0x4)
	int32_t CollectPSODataTime; // 0x390(0x4)
	uint8_t Pad_0x394[0x10]; // 0x394(0x10)
	struct FVector CameraLocation; // 0x3A4(0xC)
	struct FRotator CameraRotation; // 0x3B0(0xC)
	int32_t SpaceX; // 0x3BC(0x4)
	int32_t SpaceY; // 0x3C0(0x4)
	int32_t BeginPostionX; // 0x3C4(0x4)
	int32_t RowNum; // 0x3C8(0x4)
	int32_t RowOffset; // 0x3CC(0x4)
	uint8_t Pad_0x3D0[0x20]; // 0x3D0(0x20)
	DEFINE_UE_CLASS_HELPERS(ADFPSOCollecterActor, "DFPSOCollecterActor")

};

// Object: Class DFMPSO.PSOCollectDataTableInfosSettings
// Size: 0x48 (Inherited: 0x38)
struct UPSOCollectDataTableInfosSettings : UDeveloperSettings
{
	struct TArray<struct FPSOCollectDataTableInfo> LstPSOCollectDataTableInfos; // 0x38(0x10)
	DEFINE_UE_CLASS_HELPERS(UPSOCollectDataTableInfosSettings, "PSOCollectDataTableInfosSettings")

};

} // namespace SDK
