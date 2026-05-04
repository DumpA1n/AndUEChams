#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: DFMGameLoading
// Enums: 5
// Structs: 11
// Classes: 35

enum class EGPLoadingDestination : uint8_t;
enum class EGameFlowStageType : uint8_t;
enum class ENetworkFailure : uint8_t;
enum class ETravelFailure : uint8_t;
struct FDataTableUseSceneValue;
struct FGameLoadingSubData;
struct FTimerHandle;
struct UBaseUIView;
struct UGameInstance;
struct ULoadingViewBase;
struct UNetConnection;
struct UNetDriver;
struct UWeaponSystem;
struct UWorld;
struct FLoadingNetFailureRow;
struct FLoadingTravelFailureRow;
struct FLoadingContext;
struct FOpenLevelParameters;
struct FLoadingFlowContext;
struct FRunningFlowContext;
struct FInnerLoadingFlowStep;
struct FLoadingFlowTypeConfig;
struct FLoadingSubFlowTypeConfig;
struct FLoadingFlowStep;
struct FLoadingFlowSteps;
struct UDFMFlowBase;
struct UDFFlowPreExitGameWorld;
struct IDFMFlowBaseInterface;
struct UDFMFlowBPBase;
struct UDFMFlowCheckable;
struct UDFMFlowCheckablePoint;
struct UDFMFlowCheckAllPlayerStreamingLevelCompleted;
struct UDFMFlowTimerCheck;
struct UDFMFlowCheckLobbyReady;
struct UDFMFlowCheckPlayerState;
struct UDFMFlowCleanLobby;
struct UDFMFlowDelayCheckablePoint;
struct UDFMFlowFetchLobbyServerData;
struct UDFMFlowGamePlayPreloadWatch;
struct UDFMFlowJustWait;
struct UDFMFlowLoadDataTable;
struct UDFMFlowLuaBusinessProcess;
struct UDFMFlowManager;
struct UDFMFlowOpenTargetLevel;
struct UDFMFlowPrecompilePSO;
struct UDFMSubFlowBase;
struct UDFMSubFlowBPBase;
struct UDFMFlowPrepareSafeHouse;
struct UDFMFlowPrepareStartupBP;
struct UDFMFlowResourcePreload;
struct UDFMFlowRestartLuaBase;
struct UDFMFlowStreamingLevelWatch;
struct UDFMFlowUIAsyncLoadWatch;
struct UDFMFlowWeaponData;
struct UDFMGameLoadingManager;
struct UDFMPreloadManager;
struct ULoadingFlowStepsConfig;
struct ULoadingConfigSettings;
struct ULoadingSubDataWrapper;
struct ULoadingViewContext;

// Object: Enum DFMGameLoading.EFlowResult
enum class EFlowResult : uint8_t
{
	EFR_None = 0,
	EFR_Success = 1,
	EFR_Failed = 2,
	ERF_TimeOut = 3,
	EFlowResult_MAX = 4
};

// Object: Enum DFMGameLoading.ELoadingTypeInner
enum class ELoadingTypeInner : uint8_t
{
	LT_None = 0,
	LT_LoadingMapPreLoading = 1,
	LT_LoadingMapPostLoading = 2,
	LT_TargetMapPostLoading = 3,
	LT_MAX = 4
};

// Object: Enum DFMGameLoading.EMapLoadStage
enum class EMapLoadStage : uint8_t
{
	MLS_None = 0,
	MLS_LoadingMapPreLoad = 1,
	MLS_LoadingMapPostLoad = 2,
	MLS_TargetMapPreLoad = 3,
	MLS_TargetMapPostLoad = 4,
	MLS_MAX = 5
};

// Object: Enum DFMGameLoading.EFlowStatus
enum class EFlowStatus : uint8_t
{
	EFS_None = 0,
	EFS_Running = 1,
	EFS_Finish = 2,
	EFS_MAX = 3
};

// Object: Enum DFMGameLoading.ELoadingType
enum class ELoadingType : uint8_t
{
	LT_None = 0,
	LT_LoadingMapLoading = 1,
	LT_TargetMapLoading = 2,
	LT_MAX = 3
};

// Object: ScriptStruct DFMGameLoading.LoadingNetFailureRow
// Size: 0x48 (Inherited: 0x10)
struct FLoadingNetFailureRow : FDescRowBase
{
	ENetworkFailure NetWorkFailureType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString TypeName; // 0x18(0x10)
	struct FText DisplayErrorText; // 0x28(0x18)
	uint32_t ErrorCode; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DFMGameLoading.LoadingTravelFailureRow
// Size: 0x48 (Inherited: 0x10)
struct FLoadingTravelFailureRow : FDescRowBase
{
	ETravelFailure TravelFailureType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString TypeName; // 0x18(0x10)
	struct FText DisplayErrorText; // 0x28(0x18)
	uint32_t ErrorCode; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DFMGameLoading.LoadingContext
// Size: 0x10 (Inherited: 0x0)
struct FLoadingContext
{
	int32_t LevelMapID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	uint64_t DSRoomId; // 0x8(0x8)
};

// Object: ScriptStruct DFMGameLoading.OpenLevelParameters
// Size: 0x20 (Inherited: 0x0)
struct FOpenLevelParameters
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct DFMGameLoading.LoadingFlowContext
// Size: 0x2 (Inherited: 0x0)
struct FLoadingFlowContext
{
	uint8_t Pad_0x0[0x2]; // 0x0(0x2)
};

// Object: ScriptStruct DFMGameLoading.RunningFlowContext
// Size: 0x40 (Inherited: 0x0)
struct FRunningFlowContext
{
	struct UDFMFlowBase* RunningMainFlow; // 0x0(0x8)
	struct TArray<struct UDFMSubFlowBase*> RunningSubFlows; // 0x8(0x10)
	uint8_t Pad_0x18[0x4]; // 0x18(0x4)
	ELoadingTypeInner LoadingType; // 0x1C(0x1)
	EFlowResult MainFlowResult; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	float ProgressStart; // 0x20(0x4)
	float ProgressEnd; // 0x24(0x4)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FMulticastInlineDelegate OnLoadingMainFlowFinished; // 0x30(0x10)
};

// Object: ScriptStruct DFMGameLoading.InnerLoadingFlowStep
// Size: 0x20 (Inherited: 0x0)
struct FInnerLoadingFlowStep
{
	ELoadingTypeInner LoadingType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FLoadingFlowTypeConfig> LoadingFlowTypeConfigs; // 0x8(0x10)
	float FlowStepProgressRangeEnd; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGameLoading.LoadingFlowTypeConfig
// Size: 0x38 (Inherited: 0x0)
struct FLoadingFlowTypeConfig
{
	struct UDFMFlowBase* DFMFlowType; // 0x0(0x8)
	float FlowWeight; // 0x8(0x4)
	float MaxTimeLimits; // 0xC(0x4)
	struct FString FlowParam; // 0x10(0x10)
	uint8_t bIsAsyncCheckableSubFlow : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FLoadingSubFlowTypeConfig> SubFlows; // 0x28(0x10)
};

// Object: ScriptStruct DFMGameLoading.LoadingSubFlowTypeConfig
// Size: 0x20 (Inherited: 0x0)
struct FLoadingSubFlowTypeConfig
{
	struct UDFMSubFlowBase* DFMFlowType; // 0x0(0x8)
	float FlowWeight; // 0x8(0x4)
	float MaxTimeLimits; // 0xC(0x4)
	struct FString FlowParam; // 0x10(0x10)
};

// Object: ScriptStruct DFMGameLoading.LoadingFlowStep
// Size: 0x18 (Inherited: 0x0)
struct FLoadingFlowStep
{
	struct TArray<struct FLoadingFlowTypeConfig> LoadingFlowTypeConfigs; // 0x0(0x10)
	float FlowStepProgressRangeEnd; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMGameLoading.LoadingFlowSteps
// Size: 0x48 (Inherited: 0x0)
struct FLoadingFlowSteps
{
	struct FLoadingFlowStep LoadingLevelFlowSteps; // 0x0(0x18)
	struct FLoadingFlowStep OpenTargetLevelFlowSteps; // 0x18(0x18)
	struct FLoadingFlowStep TargetLevelFlowSteps; // 0x30(0x18)
};

// Object: Class DFMGameLoading.DFMFlowBase
// Size: 0x68 (Inherited: 0x28)
struct UDFMFlowBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UDFMFlowManager* FlowManager; // 0x30(0x8)
	struct UGameInstance* CachedGameInstance; // 0x38(0x8)
	uint8_t Pad_0x40[0x28]; // 0x40(0x28)


	// Object: Function DFMGameLoading.DFMFlowBase.OnFlowStart
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0xd6f8c4c
	// Params: [ Num(0) Size(0x0) ]
	void OnFlowStart();

	// Object: Function DFMGameLoading.DFMFlowBase.OnFlowProcessing
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0xd6f8ba0
	// Params: [ Num(1) Size(0x4) ]
	void OnFlowProcessing(float Progress);

	// Object: Function DFMGameLoading.DFMFlowBase.OnFlowFinish
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0xd6f8af4
	// Params: [ Num(1) Size(0x1) ]
	void OnFlowFinish(EFlowResult Result);

	// Object: Function DFMGameLoading.DFMFlowBase.GetGameInstance
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0xd6f8ab8
	// Params: [ Num(1) Size(0x8) ]
	struct UGameInstance* GetGameInstance();

	// Object: Function DFMGameLoading.DFMFlowBase.GetFlowProcess
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f8a84
	// Params: [ Num(1) Size(0x4) ]
	float GetFlowProcess();
	DEFINE_UE_CLASS_HELPERS(UDFMFlowBase, "DFMFlowBase")

};

// Object: Class DFMGameLoading.DFFlowPreExitGameWorld
// Size: 0x68 (Inherited: 0x68)
struct UDFFlowPreExitGameWorld : UDFMFlowBase
{	DEFINE_UE_CLASS_HELPERS(UDFFlowPreExitGameWorld, "DFFlowPreExitGameWorld")

};

// Object: Class DFMGameLoading.DFMFlowBaseInterface
// Size: 0x28 (Inherited: 0x28)
struct IDFMFlowBaseInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IDFMFlowBaseInterface, "DFMFlowBaseInterface")

};

// Object: Class DFMGameLoading.DFMFlowBPBase
// Size: 0x68 (Inherited: 0x68)
struct UDFMFlowBPBase : UDFMFlowBase
{

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_Tick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_Tick(float DeltaSeconds);

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_ShutDown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ShutDown();

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_OnOverTime
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnOverTime();

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_OnFlowStart
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnFlowStart();

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_OnFlowProcessing
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_OnFlowProcessing(float Progress);

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_OnFlowFinish
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnFlowFinish(EFlowResult Result);

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_IsMainFlow
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xd6f900c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IsMainFlow();

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_Init
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_Init(struct UDFMFlowManager* inFlowManager);

	// Object: Function DFMGameLoading.DFMFlowBPBase.BP_IfStopOnError
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xd6f8fcc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IfStopOnError();
	DEFINE_UE_CLASS_HELPERS(UDFMFlowBPBase, "DFMFlowBPBase")

};

// Object: Class DFMGameLoading.DFMFlowCheckable
// Size: 0x68 (Inherited: 0x68)
struct UDFMFlowCheckable : UDFMFlowBase
{	DEFINE_UE_CLASS_HELPERS(UDFMFlowCheckable, "DFMFlowCheckable")

};

// Object: Class DFMGameLoading.DFMFlowCheckablePoint
// Size: 0x70 (Inherited: 0x68)
struct UDFMFlowCheckablePoint : UDFMFlowBase
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowCheckablePoint, "DFMFlowCheckablePoint")

};

// Object: Class DFMGameLoading.DFMFlowCheckAllPlayerStreamingLevelCompleted
// Size: 0x70 (Inherited: 0x68)
struct UDFMFlowCheckAllPlayerStreamingLevelCompleted : UDFMFlowCheckable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowCheckAllPlayerStreamingLevelCompleted, "DFMFlowCheckAllPlayerStreamingLevelCompleted")

};

// Object: Class DFMGameLoading.DFMFlowTimerCheck
// Size: 0x78 (Inherited: 0x68)
struct UDFMFlowTimerCheck : UDFMFlowCheckable
{
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowTimerCheck, "DFMFlowTimerCheck")

};

// Object: Class DFMGameLoading.DFMFlowCheckLobbyReady
// Size: 0x78 (Inherited: 0x78)
struct UDFMFlowCheckLobbyReady : UDFMFlowTimerCheck
{	DEFINE_UE_CLASS_HELPERS(UDFMFlowCheckLobbyReady, "DFMFlowCheckLobbyReady")

};

// Object: Class DFMGameLoading.DFMFlowCheckPlayerState
// Size: 0x78 (Inherited: 0x78)
struct UDFMFlowCheckPlayerState : UDFMFlowTimerCheck
{	DEFINE_UE_CLASS_HELPERS(UDFMFlowCheckPlayerState, "DFMFlowCheckPlayerState")

};

// Object: Class DFMGameLoading.DFMFlowCleanLobby
// Size: 0x68 (Inherited: 0x68)
struct UDFMFlowCleanLobby : UDFMFlowBase
{	DEFINE_UE_CLASS_HELPERS(UDFMFlowCleanLobby, "DFMFlowCleanLobby")

};

// Object: Class DFMGameLoading.DFMFlowDelayCheckablePoint
// Size: 0x78 (Inherited: 0x68)
struct UDFMFlowDelayCheckablePoint : UDFMFlowBase
{
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowDelayCheckablePoint, "DFMFlowDelayCheckablePoint")

};

// Object: Class DFMGameLoading.DFMFlowFetchLobbyServerData
// Size: 0x68 (Inherited: 0x68)
struct UDFMFlowFetchLobbyServerData : UDFMFlowBase
{	DEFINE_UE_CLASS_HELPERS(UDFMFlowFetchLobbyServerData, "DFMFlowFetchLobbyServerData")

};

// Object: Class DFMGameLoading.DFMFlowGamePlayPreloadWatch
// Size: 0x80 (Inherited: 0x68)
struct UDFMFlowGamePlayPreloadWatch : UDFMFlowCheckable
{
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	struct UWeaponSystem* CacheWeaponSys; // 0x78(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowGamePlayPreloadWatch, "DFMFlowGamePlayPreloadWatch")

};

// Object: Class DFMGameLoading.DFMFlowJustWait
// Size: 0x78 (Inherited: 0x68)
struct UDFMFlowJustWait : UDFMFlowBase
{
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowJustWait, "DFMFlowJustWait")

};

// Object: Class DFMGameLoading.DFMFlowLoadDataTable
// Size: 0x70 (Inherited: 0x68)
struct UDFMFlowLoadDataTable : UDFMFlowBase
{
	uint8_t bPreloadDatatableFinish : 1; // 0x67(0x1), Mask(0x1)
	uint8_t bPreloadAttributeFinish : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_2 : 6; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)


	// Object: Function DFMGameLoading.DFMFlowLoadDataTable.OnPreloadFinish
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xd6f9388
	// Params: [ Num(2) Size(0xC) ]
	void OnPreloadFinish(const struct FDataTableUseSceneValue& UseSceneType, int32_t LoadedNum);

	// Object: Function DFMGameLoading.DFMFlowLoadDataTable.OnAttributeGlobalPreloadFinish
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6f92dc
	// Params: [ Num(1) Size(0x1) ]
	void OnAttributeGlobalPreloadFinish(uint8_t bFinish);
	DEFINE_UE_CLASS_HELPERS(UDFMFlowLoadDataTable, "DFMFlowLoadDataTable")

};

// Object: Class DFMGameLoading.DFMFlowLuaBusinessProcess
// Size: 0x68 (Inherited: 0x68)
struct UDFMFlowLuaBusinessProcess : UDFMFlowBase
{	DEFINE_UE_CLASS_HELPERS(UDFMFlowLuaBusinessProcess, "DFMFlowLuaBusinessProcess")

};

// Object: Class DFMGameLoading.DFMFlowManager
// Size: 0x1B0 (Inherited: 0x28)
struct UDFMFlowManager : UObject
{
	uint8_t Pad_0x28[0xA]; // 0x28(0xA)
	struct FMulticastSparseDelegate OnLoadingFinished; // 0x32(0x1)
	struct FMulticastSparseDelegate OnLoadingMainFlowFinishedDelegate; // 0x33(0x1)
	struct FMulticastSparseDelegate OnLoadingProgressUpdate; // 0x34(0x1)
	uint8_t Pad_0x35[0x13]; // 0x35(0x13)
	struct FLoadingFlowSteps LoadingFlowSteps; // 0x48(0x48)
	struct TArray<struct UDFMFlowBase*> RunningFlows; // 0x90(0x10)
	struct FRunningFlowContext CurRunningMainFlowContext; // 0xA0(0x40)
	struct UDFMFlowBase* CurrentMainFlow; // 0xE0(0x8)
	struct TArray<struct UDFMFlowCheckable*> FlowCheckables; // 0xE8(0x10)
	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
	struct TArray<struct FLoadingFlowTypeConfig> CachedLoadingConfig; // 0x108(0x10)
	struct UGameInstance* CachedGameInstance; // 0x118(0x8)
	struct FTimerHandle NextMainFlowTimerHandle; // 0x120(0x8)
	uint8_t Pad_0x128[0x88]; // 0x128(0x88)


	// Object: Function DFMGameLoading.DFMFlowManager.StartFlowsWithConfigIns
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f9a80
	// Params: [ Num(1) Size(0x8) ]
	void StartFlowsWithConfigIns(struct ULoadingFlowStepsConfig* ConfigIns);

	// Object: Function DFMGameLoading.DFMFlowManager.StartFlowsWithConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xd6f99b0
	// Params: [ Num(1) Size(0x28) ]
	void StartFlowsWithConfig(const struct TSoftClassPtr<struct ULoadingFlowStepsConfig*>& FlowStepsConfigPath);

	// Object: Function DFMGameLoading.DFMFlowManager.StartFlows
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f9900
	// Params: [ Num(2) Size(0x2) ]
	uint8_t StartFlows(ELoadingTypeInner InLoadingType);

	// Object: Function DFMGameLoading.DFMFlowManager.SetLoadingReady
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f9854
	// Params: [ Num(1) Size(0x1) ]
	void SetLoadingReady(uint8_t InIsReady);

	// Object: Function DFMGameLoading.DFMFlowManager.RunFlowsDirectly
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xd6f9740
	// Params: [ Num(2) Size(0x29) ]
	void RunFlowsDirectly(const struct TSoftClassPtr<struct ULoadingFlowStepsConfig*>& FlowStepsConfigPath, ELoadingTypeInner InLoadingType);

	// Object: Function DFMGameLoading.DFMFlowManager.RunFlows
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f969c
	// Params: [ Num(1) Size(0x1) ]
	void RunFlows(ELoadingTypeInner InLoadingType);

	// Object: Function DFMGameLoading.DFMFlowManager.ProcessNextMainFlow
	// Flags: [Final|Native|Public]
	// Offset: 0xd6f9688
	// Params: [ Num(0) Size(0x0) ]
	void ProcessNextMainFlow();

	// Object: Function DFMGameLoading.DFMFlowManager.OnLoadingMainFlowFinished
	// Flags: [Final|Native|Private]
	// Offset: 0xd6f95a8
	// Params: [ Num(2) Size(0x2) ]
	void OnLoadingMainFlowFinished(ELoadingTypeInner InLoadingType, EFlowResult InFlowResult);

	// Object: Function DFMGameLoading.DFMFlowManager.OnFlowStepConfigLoadFinished
	// Flags: [Final|Native|Private]
	// Offset: 0xd6f9594
	// Params: [ Num(0) Size(0x0) ]
	void OnFlowStepConfigLoadFinished();

	// Object: Function DFMGameLoading.DFMFlowManager.GetGameInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f9560
	// Params: [ Num(1) Size(0x8) ]
	struct UGameInstance* GetGameInstance();
	DEFINE_UE_CLASS_HELPERS(UDFMFlowManager, "DFMFlowManager")

};

// Object: Class DFMGameLoading.DFMFlowOpenTargetLevel
// Size: 0x98 (Inherited: 0x68)
struct UDFMFlowOpenTargetLevel : UDFMFlowBase
{
	uint8_t Pad_0x68[0x30]; // 0x68(0x30)


	// Object: Function DFMGameLoading.DFMFlowOpenTargetLevel.LoadMapProgress
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6f9b58
	// Params: [ Num(1) Size(0x4) ]
	void LoadMapProgress(float Progress);

	// Object: Function DFMGameLoading.DFMFlowOpenTargetLevel.CancelAllPending
	// Flags: [Final|Native|Public]
	// Offset: 0xd6f9b44
	// Params: [ Num(0) Size(0x0) ]
	void CancelAllPending();
	DEFINE_UE_CLASS_HELPERS(UDFMFlowOpenTargetLevel, "DFMFlowOpenTargetLevel")

};

// Object: Class DFMGameLoading.DFMFlowPrecompilePSO
// Size: 0x80 (Inherited: 0x68)
struct UDFMFlowPrecompilePSO : UDFMFlowBase
{
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowPrecompilePSO, "DFMFlowPrecompilePSO")

};

// Object: Class DFMGameLoading.DFMSubFlowBase
// Size: 0x70 (Inherited: 0x68)
struct UDFMSubFlowBase : UDFMFlowBase
{
	struct TWeakObjectPtr<struct UDFMFlowBase> ParentFlowPtr; // 0x68(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMSubFlowBase, "DFMSubFlowBase")

};

// Object: Class DFMGameLoading.DFMSubFlowBPBase
// Size: 0x70 (Inherited: 0x70)
struct UDFMSubFlowBPBase : UDFMSubFlowBase
{

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_Tick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_Tick(float DeltaSeconds);

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_ShutDown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ShutDown();

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_OnOverTime
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnOverTime();

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_OnFlowStart
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnFlowStart();

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_OnFlowProcessing
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_OnFlowProcessing(float Progress);

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_OnFlowFinish
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnFlowFinish(EFlowResult Result);

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_IsMainFlow
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xd6fb900
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IsMainFlow();

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_Init
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_Init(struct UDFMFlowManager* inFlowManager);

	// Object: Function DFMGameLoading.DFMSubFlowBPBase.BP_IfStopOnError
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xd6fb8c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IfStopOnError();
	DEFINE_UE_CLASS_HELPERS(UDFMSubFlowBPBase, "DFMSubFlowBPBase")

};

// Object: Class DFMGameLoading.DFMFlowPrepareSafeHouse
// Size: 0x80 (Inherited: 0x70)
struct UDFMFlowPrepareSafeHouse : UDFMSubFlowBPBase
{
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)


	// Object: Function DFMGameLoading.DFMFlowPrepareSafeHouse.TeleportEnd
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void TeleportEnd();
	DEFINE_UE_CLASS_HELPERS(UDFMFlowPrepareSafeHouse, "DFMFlowPrepareSafeHouse")

};

// Object: Class DFMGameLoading.DFMFlowPrepareStartupBP
// Size: 0x68 (Inherited: 0x68)
struct UDFMFlowPrepareStartupBP : UDFMFlowBase
{

	// Object: Function DFMGameLoading.DFMFlowPrepareStartupBP.OnPreloadFinished
	// Flags: [Final|Native|Private]
	// Offset: 0xd6f9c1c
	// Params: [ Num(1) Size(0x10) ]
	void OnPreloadFinished(struct TArray<struct FSoftObjectPath> Paths);
	DEFINE_UE_CLASS_HELPERS(UDFMFlowPrepareStartupBP, "DFMFlowPrepareStartupBP")

};

// Object: Class DFMGameLoading.DFMFlowResourcePreload
// Size: 0x88 (Inherited: 0x68)
struct UDFMFlowResourcePreload : UDFMFlowCheckable
{
	uint8_t Pad_0x68[0x20]; // 0x68(0x20)
	DEFINE_UE_CLASS_HELPERS(UDFMFlowResourcePreload, "DFMFlowResourcePreload")

};

// Object: Class DFMGameLoading.DFMFlowRestartLuaBase
// Size: 0x80 (Inherited: 0x68)
struct UDFMFlowRestartLuaBase : UDFMFlowBase
{
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)


	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.UpdateProgress
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xd6fa29c
	// Params: [ Num(1) Size(0x4) ]
	void UpdateProgress(float Progress);

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.LF_SetTimerByEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa0e0
	// Params: [ Num(6) Size(0x28) ]
	struct FTimerHandle LF_SetTimerByEvent(struct FDelegate Delegate, float Time, uint8_t bLooping, float InitialStartDelay, float InitialStartDelayVariance);

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.LF_RemoveTimerByEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa03c
	// Params: [ Num(1) Size(0x8) ]
	void LF_RemoveTimerByEvent(struct FTimerHandle TimerHandle);

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.FinishFlow
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xd6f9f90
	// Params: [ Num(1) Size(0x1) ]
	void FinishFlow(EFlowResult Result);

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.DoHotUpdateSecretly
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xd6f9f7c
	// Params: [ Num(0) Size(0x0) ]
	void DoHotUpdateSecretly();

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.CloseLoadingBG
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xd6f9f68
	// Params: [ Num(0) Size(0x0) ]
	void CloseLoadingBG();

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.ClearAllTimer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f9f54
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllTimer();

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.CallLuaModuleFunction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xd6f9e5c
	// Params: [ Num(2) Size(0x20) ]
	void CallLuaModuleFunction(struct FString ModuleFunc, struct FString ArgStr);

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.CallLuaGlobalFunction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xd6f9da8
	// Params: [ Num(1) Size(0x10) ]
	void CallLuaGlobalFunction(struct FString FuncName);

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.BP_OnFlowStart
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnFlowStart();

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.BP_GetFlowName
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct FName BP_GetFlowName();

	// Object: Function DFMGameLoading.DFMFlowRestartLuaBase.ApplyHotfixCheck
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6f9d70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ApplyHotfixCheck();
	DEFINE_UE_CLASS_HELPERS(UDFMFlowRestartLuaBase, "DFMFlowRestartLuaBase")

};

// Object: Class DFMGameLoading.DFMFlowStreamingLevelWatch
// Size: 0x70 (Inherited: 0x68)
struct UDFMFlowStreamingLevelWatch : UDFMFlowCheckable
{
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)


	// Object: Function DFMGameLoading.DFMFlowStreamingLevelWatch.OnStreamingLevelLoadPercentage
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6fa368
	// Params: [ Num(1) Size(0x4) ]
	void OnStreamingLevelLoadPercentage(int32_t Percentage);
	DEFINE_UE_CLASS_HELPERS(UDFMFlowStreamingLevelWatch, "DFMFlowStreamingLevelWatch")

};

// Object: Class DFMGameLoading.DFMFlowUIAsyncLoadWatch
// Size: 0x88 (Inherited: 0x68)
struct UDFMFlowUIAsyncLoadWatch : UDFMFlowCheckable
{
	uint8_t Pad_0x68[0x20]; // 0x68(0x20)


	// Object: Function DFMGameLoading.DFMFlowUIAsyncLoadWatch.OnUIAsyncLoadPercentage
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6fa434
	// Params: [ Num(2) Size(0x18) ]
	void OnUIAsyncLoadPercentage(float Percentage, struct TArray<struct FName> BlockGameFlowViewNameArray);

	// Object: Function DFMGameLoading.DFMFlowUIAsyncLoadWatch.OnForceFinish
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6fa420
	// Params: [ Num(0) Size(0x0) ]
	void OnForceFinish();
	DEFINE_UE_CLASS_HELPERS(UDFMFlowUIAsyncLoadWatch, "DFMFlowUIAsyncLoadWatch")

};

// Object: Class DFMGameLoading.DFMFlowWeaponData
// Size: 0x68 (Inherited: 0x68)
struct UDFMFlowWeaponData : UDFMFlowBase
{	DEFINE_UE_CLASS_HELPERS(UDFMFlowWeaponData, "DFMFlowWeaponData")

};

// Object: Class DFMGameLoading.DFMGameLoadingManager
// Size: 0x198 (Inherited: 0x30)
struct UDFMGameLoadingManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnLoadingViewVisible; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadingViewClosed; // 0x40(0x10)
	struct FMulticastInlineDelegate OnEnterTargetLevel; // 0x50(0x10)
	uint8_t bIsMPVideoLoading : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct ULoadingViewBase* LoadingView; // 0x68(0x8)
	struct ULoadingViewContext* LoadingViewContext; // 0x70(0x8)
	uint8_t Pad_0x78[0x30]; // 0x78(0x30)
	struct UDFMFlowManager* LoadingFlowManager; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x38]; // 0xB0(0x38)
	struct ULoadingSubDataWrapper* LoadingSubDataWrapper; // 0xE8(0x8)
	struct ULoadingConfigSettings* LoadingConfigSettings; // 0xF0(0x8)
	struct FMulticastInlineDelegate OnGameLoadingEnd; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnGameLoadingFinishedCallLuaSettlement; // 0x108(0x10)
	struct FMulticastInlineDelegate OnGameLoadingPostConnectDS; // 0x118(0x10)
	uint8_t Pad_0x128[0x18]; // 0x128(0x18)
	struct FMulticastInlineDelegate OnLoadingFailed2LoginDelegate; // 0x140(0x10)
	uint8_t Pad_0x150[0x48]; // 0x150(0x48)


	// Object: Function DFMGameLoading.DFMGameLoadingManager.WarmUpLoadingView
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x10903474
	// Params: [ Num(0) Size(0x0) ]
	void WarmUpLoadingView();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.UpdateLoadingProgressManually
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fb1ac
	// Params: [ Num(1) Size(0x4) ]
	void UpdateLoadingProgressManually(float InLoadingPercent);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.TakeAsyncLoadingView
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xd6fb174
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TakeAsyncLoadingView();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.StopPreShowLoadingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe3ff58
	// Params: [ Num(0) Size(0x0) ]
	void StopPreShowLoadingView();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.StartPreSLoadSOLMapRealLoadingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fb160
	// Params: [ Num(0) Size(0x0) ]
	void StartPreSLoadSOLMapRealLoadingView();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.StartPreShowLoadingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fb0b4
	// Params: [ Num(1) Size(0x10) ]
	void StartPreShowLoadingView(struct FString InPreShowViewPath);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.ShutDownLoadingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10b60d30
	// Params: [ Num(0) Size(0x0) ]
	void ShutDownLoadingView();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.SetUseMultiDomain
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fb008
	// Params: [ Num(1) Size(0x1) ]
	void SetUseMultiDomain(uint8_t useMultiDomain);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.SetIsReconnect
	// Flags: [Final|Native|Public]
	// Offset: 0x1018c650
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReconnect(uint8_t bIsReconnect);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.SetCloseLoadingViewAfterLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfd6e4e8
	// Params: [ Num(1) Size(0x1) ]
	void SetCloseLoadingViewAfterLoading(uint8_t bInClose);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.ResetLoadingState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10ad8c74
	// Params: [ Num(0) Size(0x0) ]
	void ResetLoadingState();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6faff4
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.ReleaseLoadingView
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd6fafe0
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseLoadingView();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.ProcessAPM
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fafcc
	// Params: [ Num(0) Size(0x0) ]
	void ProcessAPM();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.PrepareReleaseGameResource
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x10705224
	// Params: [ Num(0) Size(0x0) ]
	void PrepareReleaseGameResource();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.Prepare2Game
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x10abc980
	// Params: [ Num(0) Size(0x0) ]
	void Prepare2Game();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OpenLevelWithConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109be8c4
	// Params: [ Num(7) Size(0x40) ]
	void OpenLevelWithConfig(struct UObject* WorldContextObject, struct FName LevelName, struct ULoadingFlowStepsConfig* LoadingFlowStepsConfig, uint8_t bAbsolute, struct FString Options, int32_t MapID, int64_t DSRoomId);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OpenLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109475f0
	// Params: [ Num(6) Size(0x38) ]
	void OpenLevel(struct UObject* WorldContextObject, struct FName LevelName, uint8_t bAbsolute, struct FString Options, int32_t MapID, int64_t DSRoomId);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnWarfareLoadingSkipped
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fafb8
	// Params: [ Num(0) Size(0x0) ]
	void OnWarfareLoadingSkipped();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnStartMatchCheck
	// Flags: [Final|Native|Public]
	// Offset: 0x101ba28c
	// Params: [ Num(0) Size(0x0) ]
	void OnStartMatchCheck();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnSOLMatchRealStart
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fafa4
	// Params: [ Num(0) Size(0x0) ]
	void OnSOLMatchRealStart();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnReloadingFailed
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xd6faf90
	// Params: [ Num(0) Size(0x0) ]
	void OnReloadingFailed();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnPostLoadMap
	// Flags: [Final|Native|Private]
	// Offset: 0xd6faeec
	// Params: [ Num(1) Size(0x8) ]
	void OnPostLoadMap(struct UWorld* InWorld);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnPostConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fae48
	// Params: [ Num(1) Size(0x8) ]
	void OnPostConnectDS(struct UNetConnection* InNetConnection);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingViewVisibleOnScreen
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fae34
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewVisibleOnScreen();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingViewRemoved
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fae20
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewRemoved();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingViewPreShowCalled
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fae0c
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewPreShowCalled();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingViewLoadFinish
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fadf8
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewLoadFinish();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingMainFlowsFinished
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fad18
	// Params: [ Num(2) Size(0x2) ]
	void OnLoadingMainFlowsFinished(ELoadingTypeInner InLoadingType, EFlowResult InFlowResult);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingFlowProgressUpdate
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fac74
	// Params: [ Num(1) Size(0x4) ]
	void OnLoadingFlowProgressUpdate(float UpdateProgress);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingFinished
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fabd0
	// Params: [ Num(1) Size(0x1) ]
	void OnLoadingFinished(EFlowResult InFlowResult);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnLoadingEndWithFailed
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fabbc
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingEndWithFailed();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnGameStateCurStageChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fab10
	// Params: [ Num(1) Size(0x1) ]
	void OnGameStateCurStageChanged(uint8_t IsFightStage);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnGameFlowStagePostEnter
	// Flags: [Final|Native|Private]
	// Offset: 0xf987d18
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowStagePostEnter(EGameFlowStageType InFlowStage);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnGameFlowStageEnter
	// Flags: [Final|Native|Private]
	// Offset: 0xfb180e8
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowStageEnter(EGameFlowStageType InFlowStage);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnGameFlowStageChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xf98f184
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowStageChanged(EGameFlowStageType InFlowStage);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.OnClientConnectDSResultNotify
	// Flags: [Final|Native|Public]
	// Offset: 0xd6faa28
	// Params: [ Num(2) Size(0x10) ]
	void OnClientConnectDSResultNotify(uint8_t bSucc, struct UNetConnection* Conn);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.LoadingToTargetMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6faa14
	// Params: [ Num(0) Size(0x0) ]
	void LoadingToTargetMap();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsPendingLoadSOL
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x108ab168
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPendingLoadSOL();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsPendingLoadRaid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa9dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPendingLoadRaid();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsPendingLoadMP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xffc3f28
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPendingLoadMP();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsLoadingAssetFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa9a4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoadingAssetFinished();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa96c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsEnableSwitchPerfDuringSquareShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe5d620
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableSwitchPerfDuringSquareShow();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsEnableSeamlessTravel
	// Flags: [Final|Native|Public]
	// Offset: 0x1017c3f4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsEnableSeamlessTravel(struct UObject* WorldContextObject);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.IsEnablePostProcessLogin2FrontEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf90b4f8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnablePostProcessLogin2FrontEnd();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.HandleTravelFailure
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fa848
	// Params: [ Num(3) Size(0x20) ]
	void HandleTravelFailure(struct UWorld* InWorld, ETravelFailure FailureType, struct FString ErrorString);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.HandleNetWorkFailure
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fa6e8
	// Params: [ Num(4) Size(0x28) ]
	void HandleNetWorkFailure(struct UWorld* World, struct UNetDriver* NetDriver, ENetworkFailure FailureType, struct FString ErrorString);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.GetPendingLoadMapName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x10aaacd8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t GetPendingLoadMapName(struct FString& OutName);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.GetLoadingSubDataWrapper
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fa6b4
	// Params: [ Num(1) Size(0x8) ]
	struct ULoadingSubDataWrapper* GetLoadingSubDataWrapper();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.GetLoadingConfigSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa680
	// Params: [ Num(1) Size(0x8) ]
	struct ULoadingConfigSettings* GetLoadingConfigSettings();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.GetGameLoadingManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf66f490
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameLoadingManager* GetGameLoadingManager(struct UObject* WorldContextObject);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.ForceExit2Login
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fa66c
	// Params: [ Num(0) Size(0x0) ]
	void ForceExit2Login();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.EnableNewDFLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf533b24
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableNewDFLoading();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.CreateLoadingView
	// Flags: [Final|Native|Private]
	// Offset: 0xd6fa5bc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CreateLoadingView(struct ULoadingViewBase* DefaultLoadingViewClass);

	// Object: Function DFMGameLoading.DFMGameLoadingManager.BroadcastSeamlessTravelFailed2Loading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa5a8
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastSeamlessTravelFailed2Loading();

	// Object: Function DFMGameLoading.DFMGameLoadingManager.BroadcastLoadingFailed2Login
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fa594
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastLoadingFailed2Login();
	DEFINE_UE_CLASS_HELPERS(UDFMGameLoadingManager, "DFMGameLoadingManager")

};

// Object: Class DFMGameLoading.DFMPreloadManager
// Size: 0x98 (Inherited: 0x28)
struct UDFMPreloadManager : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct TArray<uint64_t> PreloadHandleArray; // 0x38(0x10)
	struct TMap<struct UObject*, int32_t> PreloadActorMap; // 0x48(0x50)


	// Object: Function DFMGameLoading.DFMPreloadManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xd6fb4b0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMPreloadManager* GetInstance(struct UObject* WorldContextObject);

	// Object: Function DFMGameLoading.DFMPreloadManager.CleanupObjectPoolManager
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6fb49c
	// Params: [ Num(0) Size(0x0) ]
	void CleanupObjectPoolManager();
	DEFINE_UE_CLASS_HELPERS(UDFMPreloadManager, "DFMPreloadManager")

};

// Object: Class DFMGameLoading.LoadingFlowStepsConfig
// Size: 0xC0 (Inherited: 0x28)
struct ULoadingFlowStepsConfig : UObject
{
	struct FLoadingFlowSteps LoadingFlowSteps; // 0x28(0x48)
	struct TSoftClassPtr<struct ULoadingViewBase*> DefaultLoadingView; // 0x70(0x28)
	struct TSoftClassPtr<struct ULoadingViewBase*> DefaultMovieLoadingView; // 0x98(0x28)
	DEFINE_UE_CLASS_HELPERS(ULoadingFlowStepsConfig, "LoadingFlowStepsConfig")

};

// Object: Class DFMGameLoading.LoadingConfigSettings
// Size: 0x170 (Inherited: 0x28)
struct ULoadingConfigSettings : UObject
{
	struct FSoftClassPath LoadingViewClassPath; // 0x28(0x18)
	struct FSoftClassPath SOLMapLoadingViewClassPath; // 0x40(0x18)
	struct FSoftClassPath RealSOLMapLoadingViewClassPath; // 0x58(0x18)
	struct FSoftClassPath WarfareLoadingViewClassPath; // 0x70(0x18)
	struct TArray<struct FSoftClassPath> UsableLoadingViewClassList; // 0x88(0x10)
	struct FString LobbyLevelName; // 0x98(0x10)
	struct FString LobbyLevelFullPath; // 0xA8(0x10)
	struct FString LoginLevelName; // 0xB8(0x10)
	struct FString LoginLevelFullPath; // 0xC8(0x10)
	struct FString LoadingLevelName; // 0xD8(0x10)
	struct FString LoadingLevelFullPath; // 0xE8(0x10)
	struct TSoftClassPtr<struct ULoadingFlowStepsConfig*> OpenWorldPVPTargetLevelFlowSteps; // 0xF8(0x28)
	struct TSoftClassPtr<struct ULoadingFlowStepsConfig*> OpenWorldPVETargetLevelFlowSteps; // 0x120(0x28)
	struct TSoftClassPtr<struct ULoadingFlowStepsConfig*> EditorGameInitFlowSteps; // 0x148(0x28)
	DEFINE_UE_CLASS_HELPERS(ULoadingConfigSettings, "LoadingConfigSettings")

};

// Object: Class DFMGameLoading.LoadingSubDataWrapper
// Size: 0x58 (Inherited: 0x28)
struct ULoadingSubDataWrapper : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)


	// Object: Function DFMGameLoading.LoadingSubDataWrapper.UpdateShouldShowGuideInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fc0d0
	// Params: [ Num(1) Size(0x1) ]
	void UpdateShouldShowGuideInfo(uint8_t InShouldShowGuideInfo);

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.UpdatePlayerLevel
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fc02c
	// Params: [ Num(1) Size(0x4) ]
	void UpdatePlayerLevel(int32_t InPlayerLevel);

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.UpdatePlayerGameNum
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fbf50
	// Params: [ Num(2) Size(0x8) ]
	void UpdatePlayerGameNum(int32_t InSOLGameNum, int32_t InMPGameNum);

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.UpdateMatchId
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fbea4
	// Params: [ Num(1) Size(0x10) ]
	void UpdateMatchId(struct FString InMatchModeID);

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.UpdateLoadingDestination
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fbe00
	// Params: [ Num(1) Size(0x1) ]
	void UpdateLoadingDestination(EGPLoadingDestination InLoadingDestination);

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.UpdateCampType
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fbd5c
	// Params: [ Num(1) Size(0x4) ]
	void UpdateCampType(int32_t InCampType);

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.Reset
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fbd48
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.GetSuitableLoadingSubData
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0xd6fbb34
	// Params: [ Num(2) Size(0x81) ]
	uint8_t GetSuitableLoadingSubData(struct FGameLoadingSubData& OutConfigData);

	// Object: Function DFMGameLoading.LoadingSubDataWrapper.GetLoadingDestination
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd6fbb18
	// Params: [ Num(1) Size(0x1) ]
	EGPLoadingDestination GetLoadingDestination();
	DEFINE_UE_CLASS_HELPERS(ULoadingSubDataWrapper, "LoadingSubDataWrapper")

};

// Object: Class DFMGameLoading.LoadingViewContext
// Size: 0x118 (Inherited: 0x28)
struct ULoadingViewContext : UObject
{
	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
	struct TMap<struct FSoftClassPath, struct UObject*> CachedLoadingViewClasses; // 0x78(0x50)
	struct UBaseUIView* SOLSeamlessEntryHUDView; // 0xC8(0x8)
	uint8_t Pad_0xD0[0x48]; // 0xD0(0x48)


	// Object: Function DFMGameLoading.LoadingViewContext.PreLoadRealSOLMapLoadingViewClass
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fc548
	// Params: [ Num(0) Size(0x0) ]
	void PreLoadRealSOLMapLoadingViewClass();

	// Object: Function DFMGameLoading.LoadingViewContext.OnRealSOLMapLoadingViewClassLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fc534
	// Params: [ Num(0) Size(0x0) ]
	void OnRealSOLMapLoadingViewClassLoaded();

	// Object: Function DFMGameLoading.LoadingViewContext.OnLoadingViewClassLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0xd6fc520
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewClassLoaded();

	// Object: Function DFMGameLoading.LoadingViewContext.GetSolMapRealLoadingUIView
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xd6fc4ec
	// Params: [ Num(1) Size(0x8) ]
	struct UBaseUIView* GetSolMapRealLoadingUIView();

	// Object: Function DFMGameLoading.LoadingViewContext.GetSOLMapLoadingViewPath
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xd6fc3f4
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftClassPath GetSOLMapLoadingViewPath();

	// Object: Function DFMGameLoading.LoadingViewContext.GetDefaultLoadingViewPath
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xd6fc2fc
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftClassPath GetDefaultLoadingViewPath();
	DEFINE_UE_CLASS_HELPERS(ULoadingViewContext, "LoadingViewContext")

};

} // namespace SDK
