#pragma once

#include "../CoreUObject_classes.hpp"
#include "AssetPackerRuntime.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: GPGameLoading
// Enums: 1
// Structs: 6
// Classes: 6

struct AActor;
enum class EDFLoadingFlowStates : uint8_t;
enum class EDFLoadingFlowStepResult : uint8_t;
struct UDFLoadingFlowManager;
struct UGameInstance;
struct UHudManager;
struct UWorld;
struct FGPLoadingTipsData;
struct FGPLoadingImageData;
struct FGPCommonLoadingStruct;
struct FGPLoadingImageStruct;
struct FGPLoadingTipsStruct;
struct FGPLoadingViewConfigRow;
struct UGPGameLoadingContext;
struct UGPGameLoadingDelegates;
struct UGPGameLoadingManager;
struct UGPLoadingViewBase;
struct ULoadingViewFactoryBase;
struct ULoadingViewManager;

// Object: Enum GPGameLoading.EGPLoadingDestination
enum class EGPLoadingDestination : uint8_t
{
	EGPLD_NONE = 0,
	EGPLD_Login = 1,
	EGPLD_MainHall = 2,
	EGPLD_BattlefieldHall = 3,
	EGPLD_SOLHall = 4,
	EGPLD_SOLGame = 5,
	EGPLD_MPGame = 6,
	EGPLD_RaidGame = 7,
	EGPLD_MAX = 8
};

// Object: ScriptStruct GPGameLoading.GPLoadingTipsData
// Size: 0x28 (Inherited: 0x0)
struct FGPLoadingTipsData
{
	int32_t TipID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FText LoadingTipsContent; // 0x8(0x18)
	float DisplayTime; // 0x20(0x4)
	float ProportionOfTips; // 0x24(0x4)
};

// Object: ScriptStruct GPGameLoading.GPLoadingImageData
// Size: 0x48 (Inherited: 0x0)
struct FGPLoadingImageData
{
	int32_t ImageID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FSoftObjectPath ImagePath; // 0x8(0x18)
	struct FName MovieRowName; // 0x20(0x8)
	struct FText ModeRule; // 0x28(0x18)
	float ProportionOfImage; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct GPGameLoading.GPCommonLoadingStruct
// Size: 0x38 (Inherited: 0x10)
struct FGPCommonLoadingStruct : FDescRowBase
{
	struct TArray<struct FString> MatchModeId; // 0x10(0x10)
	float Proportion; // 0x20(0x4)
	int32_t MinPlayerLevel; // 0x24(0x4)
	int32_t MaxPlayerLevel; // 0x28(0x4)
	int32_t MinNumOfGames; // 0x2C(0x4)
	int32_t MaxNumOfGames; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct GPGameLoading.GPLoadingImageStruct
// Size: 0x80 (Inherited: 0x38)
struct FGPLoadingImageStruct : FGPCommonLoadingStruct
{
	int32_t ID; // 0x34(0x4)
	EGPLoadingDestination LoadingType; // 0x38(0x1)
	int32_t MatchType; // 0x3C(0x4)
	struct FText ModeRule; // 0x40(0x18)
	struct FSoftObjectPath LoadingTexturePath; // 0x58(0x18)
	float StartTime; // 0x70(0x4)
	float EndTime; // 0x74(0x4)
	struct FName MovieRowName; // 0x78(0x8)
};

// Object: ScriptStruct GPGameLoading.GPLoadingTipsStruct
// Size: 0x70 (Inherited: 0x38)
struct FGPLoadingTipsStruct : FGPCommonLoadingStruct
{
	int32_t ID; // 0x34(0x4)
	EGPLoadingDestination LoadingType; // 0x38(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FText TipContent; // 0x40(0x18)
	struct FString TipComment; // 0x58(0x10)
	float DisplayTime; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct GPGameLoading.GPLoadingViewConfigRow
// Size: 0xB8 (Inherited: 0x80)
struct FGPLoadingViewConfigRow : FAssetPakerPakPolicyRow
{
	struct FName LoadingViewName; // 0x80(0x8)
	struct TSoftClassPtr<struct UGPLoadingViewBase*> LoadingViewPath; // 0x88(0x28)
	struct ULoadingViewFactoryBase* LoadingViewFactory; // 0xB0(0x8)
};

// Object: Class GPGameLoading.GPGameLoadingContext
// Size: 0x118 (Inherited: 0x28)
struct UGPGameLoadingContext : UObject
{
	struct FName PendingLoadingViewName; // 0x28(0x8)
	struct FString MatchModeId; // 0x30(0x10)
	int32_t PendingLevelMapID; // 0x40(0x4)
	EGPLoadingDestination LoadingDestination; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	int32_t PlayerLevel; // 0x48(0x4)
	int32_t CampType; // 0x4C(0x4)
	uint8_t bShouldShowGuideInfo : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct FText ModeName; // 0x58(0x18)
	struct FText MapName; // 0x70(0x18)
	struct FText ModeRule; // 0x88(0x18)
	struct FGPLoadingImageData GPLoadingImageData; // 0xA0(0x48)
	struct TArray<struct FGPLoadingTipsData> GPLoadingTipsData; // 0xE8(0x10)
	struct FString LoadingMapName; // 0xF8(0x10)
	uint8_t bIsReconnect : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	int32_t LayoutId; // 0x10C(0x4)
	uint8_t bIsLoadingAssetFinished : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)


	// Object: Function GPGameLoading.GPGameLoadingContext.UpdateShouldShowGuideInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xf7d9f54
	// Params: [ Num(1) Size(0x1) ]
	void UpdateShouldShowGuideInfo(uint8_t InShouldShowGuideInfo);

	// Object: Function GPGameLoading.GPGameLoadingContext.UpdatePlayerLevel
	// Flags: [Final|Native|Public]
	// Offset: 0xfd8c0ac
	// Params: [ Num(1) Size(0x4) ]
	void UpdatePlayerLevel(int32_t InPlayerLevel);

	// Object: Function GPGameLoading.GPGameLoadingContext.UpdatePendingLevelMapID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9165a98
	// Params: [ Num(1) Size(0x4) ]
	void UpdatePendingLevelMapID(int32_t InPendingLevelMapID);

	// Object: Function GPGameLoading.GPGameLoadingContext.UpdateMPLayoutId
	// Flags: [Final|Native|Public]
	// Offset: 0x106d3d4c
	// Params: [ Num(1) Size(0x4) ]
	void UpdateMPLayoutId(int32_t InLayoutId);

	// Object: Function GPGameLoading.GPGameLoadingContext.UpdateMatchId
	// Flags: [Final|Native|Public]
	// Offset: 0xfb9792c
	// Params: [ Num(1) Size(0x10) ]
	void UpdateMatchId(struct FString InMatchModeID);

	// Object: Function GPGameLoading.GPGameLoadingContext.UpdateLoadingDestination
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf9d85b0
	// Params: [ Num(1) Size(0x1) ]
	void UpdateLoadingDestination(EGPLoadingDestination InDest);

	// Object: Function GPGameLoading.GPGameLoadingContext.UpdateIsReconnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe25fb0
	// Params: [ Num(1) Size(0x1) ]
	void UpdateIsReconnect(uint8_t InIsReconnect);

	// Object: Function GPGameLoading.GPGameLoadingContext.UpdateCampType
	// Flags: [Final|Native|Public]
	// Offset: 0x105e5a38
	// Params: [ Num(1) Size(0x4) ]
	void UpdateCampType(int32_t InCampType);

	// Object: Function GPGameLoading.GPGameLoadingContext.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9165a84
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function GPGameLoading.GPGameLoadingContext.GetLoadingMainInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91659ec
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLoadingMainInfo();

	// Object: Function GPGameLoading.GPGameLoadingContext.GetLoadingDestination
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x91659d0
	// Params: [ Num(1) Size(0x1) ]
	EGPLoadingDestination GetLoadingDestination();
	DEFINE_UE_CLASS_HELPERS(UGPGameLoadingContext, "GPGameLoadingContext")

};

// Object: Class GPGameLoading.GPGameLoadingDelegates
// Size: 0x110 (Inherited: 0x30)
struct UGPGameLoadingDelegates : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnGPGameLoadingEnd; // 0x30(0x10)
	struct FMulticastInlineDelegate OnGPGameAssetsLoadingEnd; // 0x40(0x10)
	struct FMulticastInlineDelegate OnGPGameLoadingFlowEnd; // 0x50(0x10)
	struct FMulticastInlineDelegate OnGPGameLoadingStart; // 0x60(0x10)
	struct FMulticastInlineDelegate OnEnterTargetLevel; // 0x70(0x10)
	struct FMulticastInlineDelegate OnGPLoadingViewVisible; // 0x80(0x10)
	struct FMulticastInlineDelegate OnGPLoadingViewClosed; // 0x90(0x10)
	struct FMulticastInlineDelegate OnGameStateCurStateChanged; // 0xA0(0x10)
	struct FMulticastInlineDelegate OnPreMatchStageFlowHasActorBegunPlay; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnWarfareLoadingSkipped; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnLoadingFlowProgressUpdated; // 0xD0(0x10)
	struct FMulticastInlineDelegate OnLoadingRecordMainDataOnBeginning; // 0xE0(0x10)
	struct FMulticastInlineDelegate OnLoadingRecordMainDataOnFinished; // 0xF0(0x10)
	struct FMulticastInlineDelegate OnNeedCheckMapReleaseMemory; // 0x100(0x10)


	// Object: Function GPGameLoading.GPGameLoadingDelegates.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfac1784
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPGameLoadingDelegates* Get(struct UObject* InObj);
	DEFINE_UE_CLASS_HELPERS(UGPGameLoadingDelegates, "GPGameLoadingDelegates")

};

// Object: Class GPGameLoading.GPGameLoadingManager
// Size: 0x58 (Inherited: 0x30)
struct UGPGameLoadingManager : UGameInstanceSubsystem
{
	struct UGPGameLoadingContext* LoadingContext; // 0x30(0x8)
	struct UGPGameLoadingDelegates* GPGameLoadingDelegates; // 0x38(0x8)
	struct UDFLoadingFlowManager* FlowManager; // 0x40(0x8)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function GPGameLoading.GPGameLoadingManager.UpdatePreMapId
	// Flags: [Final|Native|Public]
	// Offset: 0x9168c4c
	// Params: [ Num(1) Size(0x10) ]
	void UpdatePreMapId(struct FString InPreMapId);

	// Object: Function GPGameLoading.GPGameLoadingManager.SeamlessToLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9168b70
	// Params: [ Num(2) Size(0x10) ]
	void SeamlessToLevel(struct FName InFlowName, struct FName LevelUrl);

	// Object: Function GPGameLoading.GPGameLoadingManager.RecordMainDataOnBeginning
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9168ac4
	// Params: [ Num(1) Size(0x10) ]
	void RecordMainDataOnBeginning(struct FString InLevelUrl);

	// Object: Function GPGameLoading.GPGameLoadingManager.OnLoadingStateChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xfa38554
	// Params: [ Num(1) Size(0x1) ]
	void OnLoadingStateChanged(EDFLoadingFlowStates FlowState);

	// Object: Function GPGameLoading.GPGameLoadingManager.OnLoadingFlowProgressUpdate
	// Flags: [Final|Native|Private]
	// Offset: 0xf36cb80
	// Params: [ Num(1) Size(0x4) ]
	void OnLoadingFlowProgressUpdate(float Progress);

	// Object: Function GPGameLoading.GPGameLoadingManager.OnLoadingFlowFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x10176884
	// Params: [ Num(2) Size(0x18) ]
	void OnLoadingFlowFinished(EDFLoadingFlowStepResult FlowResult, struct FString Reason);

	// Object: Function GPGameLoading.GPGameLoadingManager.OnGPGameAssetsLoadingEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x105d2430
	// Params: [ Num(2) Size(0x18) ]
	void OnGPGameAssetsLoadingEnd(EDFLoadingFlowStepResult InResult, struct FString InReason);

	// Object: Function GPGameLoading.GPGameLoadingManager.LoadingToLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe2c5a4
	// Params: [ Num(2) Size(0x10) ]
	void LoadingToLevel(struct FName InFlowName, struct FName LevelUrl);

	// Object: Function GPGameLoading.GPGameLoadingManager.IsLoadingAssetFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9168a8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoadingAssetFinished();

	// Object: Function GPGameLoading.GPGameLoadingManager.IsLoading2Game
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9168a54
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading2Game();

	// Object: Function GPGameLoading.GPGameLoadingManager.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9168a1c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading();

	// Object: Function GPGameLoading.GPGameLoadingManager.GetPreMapId
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9168950
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPreMapId();

	// Object: Function GPGameLoading.GPGameLoadingManager.GetPendingLoadDestination
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x107171bc
	// Params: [ Num(1) Size(0x1) ]
	EGPLoadingDestination GetPendingLoadDestination();

	// Object: Function GPGameLoading.GPGameLoadingManager.GetMapPathWithMapID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x916884c
	// Params: [ Num(3) Size(0x19) ]
	uint8_t GetMapPathWithMapID(int32_t InMapID, struct FString& OutLevelUrl);

	// Object: Function GPGameLoading.GPGameLoadingManager.GetMapIDFromLevelUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9168798
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetMapIDFromLevelUrl(struct FString InLevelUrl);

	// Object: Function GPGameLoading.GPGameLoadingManager.GetLoadingContext
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf8ea6b8
	// Params: [ Num(1) Size(0x8) ]
	struct UGPGameLoadingContext* GetLoadingContext();

	// Object: Function GPGameLoading.GPGameLoadingManager.GetGPGameLoadingManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x105c9e50
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPGameLoadingManager* GetGPGameLoadingManager(struct UObject* InContext);

	// Object: Function GPGameLoading.GPGameLoadingManager.GetDSRoomIdFromLevelUrl
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x91686e4
	// Params: [ Num(2) Size(0x18) ]
	uint64_t GetDSRoomIdFromLevelUrl(struct FString InLevelUrl);

	// Object: Function GPGameLoading.GPGameLoadingManager.EnableClientQuitBroadcast2BPByLua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91686ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableClientQuitBroadcast2BPByLua();

	// Object: Function GPGameLoading.GPGameLoadingManager.DumpLoadingDebugInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91685c4
	// Params: [ Num(2) Size(0x18) ]
	struct FString DumpLoadingDebugInfo(uint8_t bDumpToLog);

	// Object: Function GPGameLoading.GPGameLoadingManager.CheckLevelUrlValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916850c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CheckLevelUrlValid(struct FString InLevelUrl);

	// Object: Function GPGameLoading.GPGameLoadingManager.BreakLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9168460
	// Params: [ Num(1) Size(0x10) ]
	void BreakLoading(struct FString InBreakReason);
	DEFINE_UE_CLASS_HELPERS(UGPGameLoadingManager, "GPGameLoadingManager")

};

// Object: Class GPGameLoading.GPLoadingViewBase
// Size: 0x318 (Inherited: 0x2F8)
struct UGPLoadingViewBase : UUserWidget
{
	struct FMulticastInlineDelegate OnLoadingViewPrepared; // 0x2F8(0x10)
	uint8_t Pad_0x308[0x10]; // 0x308(0x10)


	// Object: Function GPGameLoading.GPLoadingViewBase.TickProgress
	// Flags: [Native|Public]
	// Offset: 0x9169544
	// Params: [ Num(1) Size(0x4) ]
	void TickProgress(float InDeltaTime);

	// Object: Function GPGameLoading.GPLoadingViewBase.LoadingViewPrepared
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9169530
	// Params: [ Num(0) Size(0x0) ]
	void LoadingViewPrepared();

	// Object: Function GPGameLoading.GPLoadingViewBase.BP_UpdateProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916948c
	// Params: [ Num(1) Size(0x4) ]
	void BP_UpdateProgress(float InProgress);
	DEFINE_UE_CLASS_HELPERS(UGPLoadingViewBase, "GPLoadingViewBase")

};

// Object: Class GPGameLoading.LoadingViewFactoryBase
// Size: 0x28 (Inherited: 0x28)
struct ULoadingViewFactoryBase : UObject
{

	// Object: Function GPGameLoading.LoadingViewFactoryBase.BP_Usable
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x916a038
	// Params: [ Num(2) Size(0x9) ]
	uint8_t BP_Usable(struct UGPGameLoadingContext* InContext);

	// Object: Function GPGameLoading.LoadingViewFactoryBase.BP_GetPriority
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x9169ffc
	// Params: [ Num(1) Size(0x4) ]
	int32_t BP_GetPriority();

	// Object: Function GPGameLoading.LoadingViewFactoryBase.BP_GetLoadingViewConfigName
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x9169fc0
	// Params: [ Num(1) Size(0x8) ]
	struct FName BP_GetLoadingViewConfigName();
	DEFINE_UE_CLASS_HELPERS(ULoadingViewFactoryBase, "LoadingViewFactoryBase")

};

// Object: Class GPGameLoading.LoadingViewManager
// Size: 0x50 (Inherited: 0x30)
struct ULoadingViewManager : UGameInstanceSubsystem
{
	struct UGPLoadingViewBase* ActiveLoadingView; // 0x30(0x8)
	struct UGPGameLoadingContext* LoadingViewContext; // 0x38(0x8)
	struct TArray<struct ULoadingViewFactoryBase*> CachedFactory; // 0x40(0x10)


	// Object: Function GPGameLoading.LoadingViewManager.WarmUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10b7efec
	// Params: [ Num(0) Size(0x0) ]
	void WarmUp();

	// Object: Function GPGameLoading.LoadingViewManager.RemoveLoadingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916ab38
	// Params: [ Num(0) Size(0x0) ]
	void RemoveLoadingView();

	// Object: Function GPGameLoading.LoadingViewManager.QuickSimulateLeftPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916ab00
	// Params: [ Num(1) Size(0x1) ]
	uint8_t QuickSimulateLeftPercent();

	// Object: Function GPGameLoading.LoadingViewManager.OnPostLoadMap
	// Flags: [Final|Native|Public]
	// Offset: 0x916aa5c
	// Params: [ Num(1) Size(0x8) ]
	void OnPostLoadMap(struct UWorld* World);

	// Object: Function GPGameLoading.LoadingViewManager.OnLoadingFlowProgressUpdated
	// Flags: [Final|Native|Public]
	// Offset: 0xf36a9b4
	// Params: [ Num(1) Size(0x4) ]
	void OnLoadingFlowProgressUpdated(float InProgress);

	// Object: Function GPGameLoading.LoadingViewManager.OnHudManagerCreated
	// Flags: [Final|Native|Public]
	// Offset: 0x10948a88
	// Params: [ Num(2) Size(0x10) ]
	void OnHudManagerCreated(struct AActor* InPlayerController, struct UHudManager* InHudManager);

	// Object: Function GPGameLoading.LoadingViewManager.IsLoadingViewActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x916aa24
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoadingViewActive();

	// Object: Function GPGameLoading.LoadingViewManager.InitializeContext
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916a980
	// Params: [ Num(1) Size(0x8) ]
	void InitializeContext(struct UGPGameLoadingContext* InContext);

	// Object: Function GPGameLoading.LoadingViewManager.GetSimulateTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916a94c
	// Params: [ Num(1) Size(0x4) ]
	float GetSimulateTime();

	// Object: Function GPGameLoading.LoadingViewManager.GetLoadingViewManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10aacf18
	// Params: [ Num(2) Size(0x10) ]
	static struct ULoadingViewManager* GetLoadingViewManager(struct UGameInstance* InGameInstance);

	// Object: Function GPGameLoading.LoadingViewManager.GetCurLoadingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916a918
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCurLoadingView();

	// Object: Function GPGameLoading.LoadingViewManager.CreateLoadingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x916a904
	// Params: [ Num(0) Size(0x0) ]
	void CreateLoadingView();
	DEFINE_UE_CLASS_HELPERS(ULoadingViewManager, "LoadingViewManager")

};

} // namespace SDK
