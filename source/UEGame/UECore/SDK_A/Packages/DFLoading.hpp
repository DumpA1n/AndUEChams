#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFLoading
// Enums: 3
// Structs: 3
// Classes: 3

struct UGameInstance;
struct FDFLoadingFlowResult;
struct FDFLoadingFlowConfigRow;
struct FDFLoadingFlowStruct;
struct UDFLoadingFlowBase;
struct UDFLoadingFlowContext;
struct UDFLoadingFlowManager;

// Object: Enum DFLoading.EDFLoadingFlowStepResult
enum class EDFLoadingFlowStepResult : uint8_t
{
	EDFLFR_Success = 0,
	EDFLFR_Failed = 1,
	EDFLFR_TimeOut = 2,
	EDFLFR_Break = 3,
	EDFLFR_TargetLevelInvalid = 4,
	EDFLFR_MAX = 5
};

// Object: Enum DFLoading.EDFLoadingFlowStates
enum class EDFLoadingFlowStates : uint8_t
{
	EDFLFS_Start = 0,
	EDFLFS_PreLoading = 1,
	EDFLFS_Loading = 2,
	EDFLFS_PostLoading = 3,
	EDFLFS_Finished = 4,
	EDFLFS_MAX = 5
};

// Object: Enum DFLoading.EDFLoadingFlowShutDownReason
enum class EDFLoadingFlowShutDownReason : uint8_t
{
	ELFSDR_TimeOut = 0,
	ELFSDR_FlowEnd = 1,
	ELFSDR_FlowBreak = 2,
	ELFSDR_MAX = 3
};

// Object: ScriptStruct DFLoading.DFLoadingFlowResult
// Size: 0x20 (Inherited: 0x0)
struct FDFLoadingFlowResult
{
	struct FName FlowID; // 0x0(0x8)
	EDFLoadingFlowStepResult StepResult; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString ExtraMsg; // 0x10(0x10)
};

// Object: ScriptStruct DFLoading.DFLoadingFlowConfigRow
// Size: 0x50 (Inherited: 0x8)
struct FDFLoadingFlowConfigRow : FTableRowBase
{
	struct FString Description; // 0x8(0x10)
	uint8_t bAutoNextState : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<struct FDFLoadingFlowStruct> PreLoadingFlows; // 0x20(0x10)
	struct TArray<struct FDFLoadingFlowStruct> LoadingFlows; // 0x30(0x10)
	struct TArray<struct FDFLoadingFlowStruct> PostLoadingFlows; // 0x40(0x10)
};

// Object: ScriptStruct DFLoading.DFLoadingFlowStruct
// Size: 0x18 (Inherited: 0x0)
struct FDFLoadingFlowStruct
{
	struct TArray<struct UDFLoadingFlowBase*> Flows; // 0x0(0x10)
	float MaxRunningTime; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: Class DFLoading.DFLoadingFlowBase
// Size: 0x40 (Inherited: 0x28)
struct UDFLoadingFlowBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFLoadingFlowBase, "DFLoadingFlowBase")

	struct TWeakObjectPtr<struct UDFLoadingFlowContext> Context; // 0x28(0x8)
	struct FName FlowID; // 0x30(0x8)
	uint8_t bFlowFinished : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)

	// Object: Function DFLoading.DFLoadingFlowBase.UpdateProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a89ef8
	// Params: [ Num(1) Size(0x4) ]
	void UpdateProgress(float InProgress);

	// Object: Function DFLoading.DFLoadingFlowBase.GetGameInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10158580
	// Params: [ Num(1) Size(0x8) ]
	struct UGameInstance* GetGameInstance();

	// Object: Function DFLoading.DFLoadingFlowBase.Finished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe00114
	// Params: [ Num(2) Size(0x18) ]
	void Finished(EDFLoadingFlowStepResult Result, struct FString InExtraMsg);

	// Object: Function DFLoading.DFLoadingFlowBase.BP_Run
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7a89edc
	// Params: [ Num(0) Size(0x0) ]
	void BP_Run();

	// Object: Function DFLoading.DFLoadingFlowBase.BP_OnFinished
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0xf8106d4
	// Params: [ Num(2) Size(0x18) ]
	void BP_OnFinished(EDFLoadingFlowStepResult Result, struct FString InExtraMsg);

	// Object: Function DFLoading.DFLoadingFlowBase.BP_IsBreakFlowIfFailed
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7a89e9c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IsBreakFlowIfFailed();

	// Object: Function DFLoading.DFLoadingFlowBase.BP_Initialize
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7a89e80
	// Params: [ Num(0) Size(0x0) ]
	void BP_Initialize();

	// Object: Function DFLoading.DFLoadingFlowBase.BP_Deinitialize
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7a89e64
	// Params: [ Num(0) Size(0x0) ]
	void BP_Deinitialize();
};

// Object: Class DFLoading.DFLoadingFlowContext
// Size: 0x1F0 (Inherited: 0x28)
struct UDFLoadingFlowContext : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFLoadingFlowContext, "DFLoadingFlowContext")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UGameInstance* GameInstance; // 0x38(0x8)
	struct FName RunningFlowName; // 0x40(0x8)
	EDFLoadingFlowStates CurFlowState; // 0x48(0x1)
	uint8_t Pad_0x49[0x57]; // 0x49(0x57)
	int32_t CurRunningMainFlowIndex; // 0xA0(0x4)
	float CurRunningMainFlowMaxTime; // 0xA4(0x4)
	int32_t LoadingFlowNum; // 0xA8(0x4)
	float FinalLoadingProgress; // 0xAC(0x4)
	struct TMap<struct FName, struct UDFLoadingFlowBase*> RunningFlowIns; // 0xB0(0x50)
	struct TMap<struct FName, struct FDFLoadingFlowResult> FinishedFlows; // 0x100(0x50)
	struct TMap<struct FName, int32_t> CachedFlowProgress; // 0x150(0x50)
	struct TMap<struct FString, struct FString> RunningFlowCacheMsg; // 0x1A0(0x50)
};

// Object: Class DFLoading.DFLoadingFlowManager
// Size: 0x78 (Inherited: 0x30)
struct UDFLoadingFlowManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFLoadingFlowManager, "DFLoadingFlowManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnLoadingFlowFinished; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoadingFlowStateChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnLoadingFlowProgressUpdate; // 0x58(0x10)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct UDFLoadingFlowContext* LoadingFlowContext; // 0x70(0x8)

	// Object: Function DFLoading.DFLoadingFlowManager.SwitchLoadingState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a8ac2c
	// Params: [ Num(0) Size(0x0) ]
	void SwitchLoadingState();

	// Object: Function DFLoading.DFLoadingFlowManager.RunNextFlowSteps
	// Flags: [Final|Native|Public]
	// Offset: 0x7a8ac18
	// Params: [ Num(0) Size(0x0) ]
	void RunNextFlowSteps();

	// Object: Function DFLoading.DFLoadingFlowManager.RunFlowByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7a8ab64
	// Params: [ Num(1) Size(0x8) ]
	void RunFlowByName(const struct FName& InFlowName);

	// Object: Function DFLoading.DFLoadingFlowManager.ResetRunningFlowState
	// Flags: [Final|Native|Public]
	// Offset: 0x7a8ab50
	// Params: [ Num(0) Size(0x0) ]
	void ResetRunningFlowState();

	// Object: Function DFLoading.DFLoadingFlowManager.ProcessFlowStepTick
	// Flags: [Final|Native|Private]
	// Offset: 0x7a8aaac
	// Params: [ Num(1) Size(0x4) ]
	void ProcessFlowStepTick(float DeltaTime);

	// Object: Function DFLoading.DFLoadingFlowManager.InitLoadingFlowNum
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x7a8aa98
	// Params: [ Num(0) Size(0x0) ]
	void InitLoadingFlowNum();

	// Object: Function DFLoading.DFLoadingFlowManager.GetLoadingFlowManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7a8a9f4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFLoadingFlowManager* GetLoadingFlowManager(struct UGameInstance* GameInstance);

	// Object: Function DFLoading.DFLoadingFlowManager.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7a8a9c0
	// Params: [ Num(1) Size(0x1) ]
	EDFLoadingFlowStates GetCurrentState();

	// Object: Function DFLoading.DFLoadingFlowManager.GetContextData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7a8a8b4
	// Params: [ Num(3) Size(0x21) ]
	uint8_t GetContextData(struct FString InKey, struct FString& OutValue);

	// Object: Function DFLoading.DFLoadingFlowManager.EnqueueContextData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a8a7c4
	// Params: [ Num(2) Size(0x20) ]
	void EnqueueContextData(struct FString InKey, struct FString InValue);

	// Object: Function DFLoading.DFLoadingFlowManager.DumpLoadingDebugInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a8a6dc
	// Params: [ Num(2) Size(0x18) ]
	struct FString DumpLoadingDebugInfo(uint8_t bDumpToLog);

	// Object: Function DFLoading.DFLoadingFlowManager.ClearTimeOutFlowSteps
	// Flags: [Final|Native|Private]
	// Offset: 0x7a8a6c8
	// Params: [ Num(0) Size(0x0) ]
	void ClearTimeOutFlowSteps();

	// Object: Function DFLoading.DFLoadingFlowManager.ClearFinishedFlowSteps
	// Flags: [Final|Native|Private]
	// Offset: 0x7a8a6b4
	// Params: [ Num(0) Size(0x0) ]
	void ClearFinishedFlowSteps();

	// Object: Function DFLoading.DFLoadingFlowManager.CheckRunningFlowOutOfTime
	// Flags: [Final|Native|Private]
	// Offset: 0x7a8a604
	// Params: [ Num(2) Size(0x5) ]
	uint8_t CheckRunningFlowOutOfTime(float DeltaTime);

	// Object: Function DFLoading.DFLoadingFlowManager.CheckFinishedFlowStateSuccess
	// Flags: [Final|Native|Private]
	// Offset: 0x7a8a5cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckFinishedFlowStateSuccess();

	// Object: Function DFLoading.DFLoadingFlowManager.CalculateLoadingProgress
	// Flags: [Final|Native|Private]
	// Offset: 0x7a8a5b8
	// Params: [ Num(0) Size(0x0) ]
	void CalculateLoadingProgress();

	// Object: Function DFLoading.DFLoadingFlowManager.BreakRunningFlow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a8a50c
	// Params: [ Num(1) Size(0x10) ]
	void BreakRunningFlow(struct FString Reason);

	// Object: Function DFLoading.DFLoadingFlowManager.BreakFlowsInternal
	// Flags: [Final|Native|Private|Const]
	// Offset: 0x7a8a460
	// Params: [ Num(1) Size(0x10) ]
	void BreakFlowsInternal(struct FString Reason);
};

} // namespace SDK
