#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFLoading.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameLoading.hpp"

namespace SDK
{

// Package: DFGameLoading
// Enums: 0
// Structs: 0
// Classes: 24

enum class EDFLoadingFlowStepResult : uint8_t;
enum class EGPInputType : uint8_t;
struct FBattleFieldDynamicLayoutRow;
struct FDataTableUseSceneValue;
struct UDFButton;
struct UDFCommonMediaView;
struct UGPGameLoadingContext;
struct UImage;
struct UNetConnection;
struct UProgressBar;
struct USeamlessEntryBigMapHudView;
struct UTextBlock;
struct UUserWidget;
struct UWeaponSystem;
struct UWidget;
struct UWorld;
struct UGPFlow_OpenLoadingLevel;
struct UGPFlow_OpenTargetLevel;
struct UGPFlow_PreCompilePSO;
struct UGPFlow_PreExitGameWorld;
struct UGPFlow_PreloadDataTable;
struct UGPFlow_PreloadGamePlayData;
struct UGPFlow_PreloadHUD;
struct UGPFlow_PrepareStartupBP;
struct UGPFlow_ReleasePakMemory;
struct UGPFlow_ShowLoadingView;
struct UGPFlow_ShutDownLoadingView;
struct UGPFlow_StreamingLevelWatch;
struct UGPFlow_WaitingForGamePlayStateReady;
struct UGPFlow_WaitingForGameStatePrepared;
struct UGPGameLoadingBusinessProxy;
struct UGPGameLoadingConfig;
struct UGPGameLoadingUtil;
struct ULoadingView_Default;
struct ULoadingView_SOL;
struct ULoadingView_Warfare;
struct ULoadingViewFactory_Default;
struct ULoadingViewFactory_SOL;
struct ULoadingViewFactory_Warfare;
struct ULocalTestFlow;

// Object: Class DFGameLoading.GPFlow_OpenLoadingLevel
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_OpenLoadingLevel : UDFLoadingFlowBase
{	DEFINE_UE_CLASS_HELPERS(UGPFlow_OpenLoadingLevel, "GPFlow_OpenLoadingLevel")

};

// Object: Class DFGameLoading.GPFlow_OpenTargetLevel
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_OpenTargetLevel : UDFLoadingFlowBase
{

	// Object: Function DFGameLoading.GPFlow_OpenTargetLevel.OnPostLoadMap
	// Flags: [Final|Native|Public]
	// Offset: 0xbddc3f8
	// Params: [ Num(1) Size(0x8) ]
	void OnPostLoadMap(struct UWorld* InWorld);
	DEFINE_UE_CLASS_HELPERS(UGPFlow_OpenTargetLevel, "GPFlow_OpenTargetLevel")

};

// Object: Class DFGameLoading.GPFlow_PreCompilePSO
// Size: 0x50 (Inherited: 0x40)
struct UGPFlow_PreCompilePSO : UDFLoadingFlowBase
{
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPFlow_PreCompilePSO, "GPFlow_PreCompilePSO")

};

// Object: Class DFGameLoading.GPFlow_PreExitGameWorld
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_PreExitGameWorld : UDFLoadingFlowBase
{	DEFINE_UE_CLASS_HELPERS(UGPFlow_PreExitGameWorld, "GPFlow_PreExitGameWorld")

};

// Object: Class DFGameLoading.GPFlow_PreloadDataTable
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_PreloadDataTable : UDFLoadingFlowBase
{

	// Object: Function DFGameLoading.GPFlow_PreloadDataTable.OnPreloadFinish
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xfe2f748
	// Params: [ Num(2) Size(0xC) ]
	void OnPreloadFinish(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum);

	// Object: Function DFGameLoading.GPFlow_PreloadDataTable.OnAttributeGlobalPreloadFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x10a33a08
	// Params: [ Num(1) Size(0x1) ]
	void OnAttributeGlobalPreloadFinish(uint8_t bFinish);
	DEFINE_UE_CLASS_HELPERS(UGPFlow_PreloadDataTable, "GPFlow_PreloadDataTable")

};

// Object: Class DFGameLoading.GPFlow_PreloadGamePlayData
// Size: 0x58 (Inherited: 0x40)
struct UGPFlow_PreloadGamePlayData : UDFLoadingFlowBase
{
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	struct UWeaponSystem* CacheWeaponSys; // 0x50(0x8)


	// Object: Function DFGameLoading.GPFlow_PreloadGamePlayData.OnPreloadTimeOut
	// Flags: [Final|Native|Protected]
	// Offset: 0xbddca70
	// Params: [ Num(0) Size(0x0) ]
	void OnPreloadTimeOut();

	// Object: Function DFGameLoading.GPFlow_PreloadGamePlayData.CheckPreloadProgress
	// Flags: [Final|Native|Protected]
	// Offset: 0xbddca5c
	// Params: [ Num(0) Size(0x0) ]
	void CheckPreloadProgress();
	DEFINE_UE_CLASS_HELPERS(UGPFlow_PreloadGamePlayData, "GPFlow_PreloadGamePlayData")

};

// Object: Class DFGameLoading.GPFlow_PreloadHUD
// Size: 0x60 (Inherited: 0x40)
struct UGPFlow_PreloadHUD : UDFLoadingFlowBase
{
	uint8_t Pad_0x40[0x20]; // 0x40(0x20)


	// Object: Function DFGameLoading.GPFlow_PreloadHUD.OnUIAsyncLoadPercentage
	// Flags: [Final|Native|Public]
	// Offset: 0x1067f2a0
	// Params: [ Num(2) Size(0x18) ]
	void OnUIAsyncLoadPercentage(float Progress, struct TArray<struct FName> names);

	// Object: Function DFGameLoading.GPFlow_PreloadHUD.OnForceFinish
	// Flags: [Final|Native|Public]
	// Offset: 0xbddcbf4
	// Params: [ Num(0) Size(0x0) ]
	void OnForceFinish();
	DEFINE_UE_CLASS_HELPERS(UGPFlow_PreloadHUD, "GPFlow_PreloadHUD")

};

// Object: Class DFGameLoading.GPFlow_PrepareStartupBP
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_PrepareStartupBP : UDFLoadingFlowBase
{

	// Object: Function DFGameLoading.GPFlow_PrepareStartupBP.OnPreloadFinished
	// Flags: [Final|Native|Public]
	// Offset: 0xbddcd7c
	// Params: [ Num(1) Size(0x10) ]
	void OnPreloadFinished(struct TArray<struct FSoftObjectPath> SoftObjectPaths);
	DEFINE_UE_CLASS_HELPERS(UGPFlow_PrepareStartupBP, "GPFlow_PrepareStartupBP")

};

// Object: Class DFGameLoading.GPFlow_ReleasePakMemory
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_ReleasePakMemory : UDFLoadingFlowBase
{	DEFINE_UE_CLASS_HELPERS(UGPFlow_ReleasePakMemory, "GPFlow_ReleasePakMemory")

};

// Object: Class DFGameLoading.GPFlow_ShowLoadingView
// Size: 0x58 (Inherited: 0x40)
struct UGPFlow_ShowLoadingView : UDFLoadingFlowBase
{
	struct TArray<struct FSoftObjectPath> PreLoadAssets; // 0x40(0x10)
	uint64_t StreamableHandle; // 0x50(0x8)


	// Object: Function DFGameLoading.GPFlow_ShowLoadingView.ProcessPreload
	// Flags: [Final|Native|Private]
	// Offset: 0xbddd1f4
	// Params: [ Num(0) Size(0x0) ]
	void ProcessPreload();

	// Object: Function DFGameLoading.GPFlow_ShowLoadingView.OnAssetLoaded
	// Flags: [Final|Native|Private]
	// Offset: 0xbddd124
	// Params: [ Num(1) Size(0x10) ]
	void OnAssetLoaded(struct TArray<struct FSoftObjectPath> AssetPathList);

	// Object: Function DFGameLoading.GPFlow_ShowLoadingView.GatherPreloadAsset
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xbddd064
	// Params: [ Num(1) Size(0x18) ]
	void GatherPreloadAsset(const struct FSoftObjectPath& InAssetPath);

	// Object: Function DFGameLoading.GPFlow_ShowLoadingView.GatherLoadingViewAssetPath
	// Flags: [Final|Native|Private]
	// Offset: 0xbddcfc0
	// Params: [ Num(1) Size(0x8) ]
	void GatherLoadingViewAssetPath(struct FName InLoadingConfigName);
	DEFINE_UE_CLASS_HELPERS(UGPFlow_ShowLoadingView, "GPFlow_ShowLoadingView")

};

// Object: Class DFGameLoading.GPFlow_ShutDownLoadingView
// Size: 0x48 (Inherited: 0x40)
struct UGPFlow_ShutDownLoadingView : UDFLoadingFlowBase
{
	struct FTimerHandle LoadingViewSimulateTimeHandle; // 0x40(0x8)


	// Object: Function DFGameLoading.GPFlow_ShutDownLoadingView.OnLoadingViewSimulateTimeEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd378
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewSimulateTimeEnd();
	DEFINE_UE_CLASS_HELPERS(UGPFlow_ShutDownLoadingView, "GPFlow_ShutDownLoadingView")

};

// Object: Class DFGameLoading.GPFlow_StreamingLevelWatch
// Size: 0x48 (Inherited: 0x40)
struct UGPFlow_StreamingLevelWatch : UDFLoadingFlowBase
{
	struct FTimerHandle TimerHandle; // 0x40(0x8)


	// Object: Function DFGameLoading.GPFlow_StreamingLevelWatch.OnStreamingLevelLoadPercentage
	// Flags: [Final|Native|Public]
	// Offset: 0xf7c49b0
	// Params: [ Num(1) Size(0x4) ]
	void OnStreamingLevelLoadPercentage(int32_t Progress);

	// Object: Function DFGameLoading.GPFlow_StreamingLevelWatch.FinishFlow
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd4f8
	// Params: [ Num(0) Size(0x0) ]
	void FinishFlow();
	DEFINE_UE_CLASS_HELPERS(UGPFlow_StreamingLevelWatch, "GPFlow_StreamingLevelWatch")

};

// Object: Class DFGameLoading.GPFlow_WaitingForGamePlayStateReady
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_WaitingForGamePlayStateReady : UDFLoadingFlowBase
{

	// Object: Function DFGameLoading.GPFlow_WaitingForGamePlayStateReady.OnPreMatchStageFlowHasActorBegunPlay
	// Flags: [Final|Native|Public]
	// Offset: 0x10af0da0
	// Params: [ Num(0) Size(0x0) ]
	void OnPreMatchStageFlowHasActorBegunPlay();

	// Object: Function DFGameLoading.GPFlow_WaitingForGamePlayStateReady.OnGameStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x10aced94
	// Params: [ Num(1) Size(0x1) ]
	void OnGameStateChanged(uint8_t bIsFightStage);

	// Object: Function DFGameLoading.GPFlow_WaitingForGamePlayStateReady.CheckGamePlayStateReady
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd678
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckGamePlayStateReady();
	DEFINE_UE_CLASS_HELPERS(UGPFlow_WaitingForGamePlayStateReady, "GPFlow_WaitingForGamePlayStateReady")

};

// Object: Class DFGameLoading.GPFlow_WaitingForGameStatePrepared
// Size: 0x40 (Inherited: 0x40)
struct UGPFlow_WaitingForGameStatePrepared : UDFLoadingFlowBase
{

	// Object: Function DFGameLoading.GPFlow_WaitingForGameStatePrepared.TargetMapPostLoadingProcess
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd960
	// Params: [ Num(0) Size(0x0) ]
	void TargetMapPostLoadingProcess();

	// Object: Function DFGameLoading.GPFlow_WaitingForGameStatePrepared.SOL_CheckTargetMapAllowedPostLoading
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd928
	// Params: [ Num(1) Size(0x1) ]
	uint8_t SOL_CheckTargetMapAllowedPostLoading();

	// Object: Function DFGameLoading.GPFlow_WaitingForGameStatePrepared.OnWarfareLoadingSkipped
	// Flags: [Final|Native|Public]
	// Offset: 0x10991c90
	// Params: [ Num(0) Size(0x0) ]
	void OnWarfareLoadingSkipped();

	// Object: Function DFGameLoading.GPFlow_WaitingForGameStatePrepared.OnSOLMatchRealStart
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd914
	// Params: [ Num(0) Size(0x0) ]
	void OnSOLMatchRealStart();

	// Object: Function DFGameLoading.GPFlow_WaitingForGameStatePrepared.OnGameStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd868
	// Params: [ Num(1) Size(0x1) ]
	void OnGameStateChanged(uint8_t bIsFightState);

	// Object: Function DFGameLoading.GPFlow_WaitingForGameStatePrepared.MP_CheckCurStateReady
	// Flags: [Final|Native|Public]
	// Offset: 0xbddd830
	// Params: [ Num(1) Size(0x1) ]
	uint8_t MP_CheckCurStateReady();
	DEFINE_UE_CLASS_HELPERS(UGPFlow_WaitingForGameStatePrepared, "GPFlow_WaitingForGameStatePrepared")

};

// Object: Class DFGameLoading.GPGameLoadingBusinessProxy
// Size: 0x30 (Inherited: 0x30)
struct UGPGameLoadingBusinessProxy : UGameInstanceSubsystem
{

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.RemoveListeners
	// Flags: [Final|Native|Public]
	// Offset: 0xbdddcb4
	// Params: [ Num(0) Size(0x0) ]
	void RemoveListeners();

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.ProcessAPM
	// Flags: [Final|Native|Public]
	// Offset: 0xbdddca0
	// Params: [ Num(0) Size(0x0) ]
	void ProcessAPM();

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.OnPostConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0xbdddbfc
	// Params: [ Num(1) Size(0x8) ]
	void OnPostConnectDS(struct UNetConnection* InNetConnection);

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.OnLoadingViewClosed
	// Flags: [Final|Native|Public]
	// Offset: 0x10a544c8
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewClosed();

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.OnLoadingRecordMainDataOnFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x10900538
	// Params: [ Num(2) Size(0x18) ]
	void OnLoadingRecordMainDataOnFinished(EDFLoadingFlowStepResult Result, struct FString Reason);

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.OnLoadingRecordMainDataOnBeginning
	// Flags: [Final|Native|Public]
	// Offset: 0x107f315c
	// Params: [ Num(1) Size(0x10) ]
	void OnLoadingRecordMainDataOnBeginning(struct FString InLevelUrl);

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.OnClientConnectDSResultNotify
	// Flags: [Final|Native|Public]
	// Offset: 0xbdddb14
	// Params: [ Num(2) Size(0x10) ]
	void OnClientConnectDSResultNotify(uint8_t bSucc, struct UNetConnection* Conn);

	// Object: Function DFGameLoading.GPGameLoadingBusinessProxy.InitListeners
	// Flags: [Final|Native|Public]
	// Offset: 0xbdddb00
	// Params: [ Num(0) Size(0x0) ]
	void InitListeners();
	DEFINE_UE_CLASS_HELPERS(UGPGameLoadingBusinessProxy, "GPGameLoadingBusinessProxy")

};

// Object: Class DFGameLoading.GPGameLoadingConfig
// Size: 0x40 (Inherited: 0x28)
struct UGPGameLoadingConfig : UObject
{
	struct FString LoadingLevelName; // 0x28(0x10)
	struct FName LoadingLevelFullPath; // 0x38(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPGameLoadingConfig, "GPGameLoadingConfig")

};

// Object: Class DFGameLoading.GPGameLoadingUtil
// Size: 0x28 (Inherited: 0x28)
struct UGPGameLoadingUtil : UObject
{

	// Object: Function DFGameLoading.GPGameLoadingUtil.GetDynamicLayoutConfigByLayoutId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbdddce8
	// Params: [ Num(2) Size(0x58) ]
	static struct FBattleFieldDynamicLayoutRow GetDynamicLayoutConfigByLayoutId(int32_t InLayoutId);
	DEFINE_UE_CLASS_HELPERS(UGPGameLoadingUtil, "GPGameLoadingUtil")

};

// Object: Class DFGameLoading.LoadingView_Default
// Size: 0x3E8 (Inherited: 0x318)
struct ULoadingView_Default : UGPLoadingViewBase
{
	struct UProgressBar* LoadingProgressBar; // 0x318(0x8)
	struct UTextBlock* LoadingProgressText; // 0x320(0x8)
	struct UTextBlock* LoadingTip; // 0x328(0x8)
	struct UTextBlock* ModeNameText; // 0x330(0x8)
	struct UTextBlock* MapNameText; // 0x338(0x8)
	struct UTextBlock* ModeRuleText; // 0x340(0x8)
	struct UImage* BgImage; // 0x348(0x8)
	struct UWidget* DynamicLayoutDisplayPanel; // 0x350(0x8)
	uint8_t Pad_0x358[0x90]; // 0x358(0x90)


	// Object: Function DFGameLoading.LoadingView_Default.UpdateTips
	// Flags: [Final|Native|Private]
	// Offset: 0xbdde63c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateTips();

	// Object: Function DFGameLoading.LoadingView_Default.UpdateProgressInfo
	// Flags: [Native|Public]
	// Offset: 0xbdde590
	// Params: [ Num(1) Size(0x4) ]
	void UpdateProgressInfo(float Percentage);

	// Object: Function DFGameLoading.LoadingView_Default.UpdateProgress
	// Flags: [Native|Public]
	// Offset: 0xbdde4e4
	// Params: [ Num(1) Size(0x4) ]
	void UpdateProgress(float InProgress);

	// Object: Function DFGameLoading.LoadingView_Default.TickTipsStatus
	// Flags: [Final|Native|Private]
	// Offset: 0xbdde440
	// Params: [ Num(1) Size(0x4) ]
	void TickTipsStatus(float InDeltaTime);

	// Object: Function DFGameLoading.LoadingView_Default.ShouldShowGuideInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbdde408
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldShowGuideInfo();

	// Object: Function DFGameLoading.LoadingView_Default.SetUpTipsData
	// Flags: [Final|Native|Private]
	// Offset: 0xbdde364
	// Params: [ Num(1) Size(0x8) ]
	void SetUpTipsData(struct UGPGameLoadingContext* InContext);

	// Object: Function DFGameLoading.LoadingView_Default.SetUpModeRule
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xbdde2c0
	// Params: [ Num(1) Size(0x8) ]
	void SetUpModeRule(struct UGPGameLoadingContext* InContext);

	// Object: Function DFGameLoading.LoadingView_Default.SetUpModeName
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xbdde21c
	// Params: [ Num(1) Size(0x8) ]
	void SetUpModeName(struct UGPGameLoadingContext* InContext);

	// Object: Function DFGameLoading.LoadingView_Default.SetUpMapName
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xbdde178
	// Params: [ Num(1) Size(0x8) ]
	void SetUpMapName(struct UGPGameLoadingContext* InContext);

	// Object: Function DFGameLoading.LoadingView_Default.SetUpLoadingImage
	// Flags: [Final|Native|Private]
	// Offset: 0xbdde0d4
	// Params: [ Num(1) Size(0x8) ]
	void SetUpLoadingImage(struct UGPGameLoadingContext* InContext);

	// Object: Function DFGameLoading.LoadingView_Default.SetUpCampType
	// Flags: [Final|Native|Private]
	// Offset: 0xbdde030
	// Params: [ Num(1) Size(0x8) ]
	void SetUpCampType(struct UGPGameLoadingContext* InContext);

	// Object: Function DFGameLoading.LoadingView_Default.QuickSimulateLeftPercent
	// Flags: [Native|Public]
	// Offset: 0xbdddff0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t QuickSimulateLeftPercent();

	// Object: Function DFGameLoading.LoadingView_Default.OnLoadingViewRemoved
	// Flags: [Native|Public]
	// Offset: 0xbdddfd4
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewRemoved();

	// Object: Function DFGameLoading.LoadingView_Default.OnLoadingTextureLoadCompleted
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xbdddf14
	// Params: [ Num(1) Size(0x18) ]
	void OnLoadingTextureLoadCompleted(const struct FSoftObjectPath& TextureAssetPath);

	// Object: Function DFGameLoading.LoadingView_Default.InitDynamicLayoutDisplay
	// Flags: [Final|Native|Public]
	// Offset: 0xbdddf00
	// Params: [ Num(0) Size(0x0) ]
	void InitDynamicLayoutDisplay();

	// Object: Function DFGameLoading.LoadingView_Default.GetSimulateTime
	// Flags: [Native|Public]
	// Offset: 0xbdddec4
	// Params: [ Num(1) Size(0x4) ]
	float GetSimulateTime();

	// Object: Function DFGameLoading.LoadingView_Default.BP_UpdateGuideInfo
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_UpdateGuideInfo(uint8_t bShouldShowGuide);

	// Object: Function DFGameLoading.LoadingView_Default.BP_UpdateCampImage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_UpdateCampImage(int32_t InCampType);
	DEFINE_UE_CLASS_HELPERS(ULoadingView_Default, "LoadingView_Default")

};

// Object: Class DFGameLoading.LoadingView_SOL
// Size: 0x320 (Inherited: 0x318)
struct ULoadingView_SOL : UGPLoadingViewBase
{
	struct USeamlessEntryBigMapHudView* SOLSeamlessEntryHUDView; // 0x318(0x8)


	// Object: Function DFGameLoading.LoadingView_SOL.UpdateProgressInfo
	// Flags: [Native|Public]
	// Offset: 0xbdde744
	// Params: [ Num(1) Size(0x4) ]
	void UpdateProgressInfo(float Percentage);

	// Object: Function DFGameLoading.LoadingView_SOL.SetUpLoadingData
	// Flags: [Native|Public]
	// Offset: 0xbdde698
	// Params: [ Num(1) Size(0x8) ]
	void SetUpLoadingData(struct UGPGameLoadingContext* InContext);

	// Object: Function DFGameLoading.LoadingView_SOL.OnLoadingViewRemoved
	// Flags: [Native|Public]
	// Offset: 0xbdde67c
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewRemoved();
	DEFINE_UE_CLASS_HELPERS(ULoadingView_SOL, "LoadingView_SOL")

};

// Object: Class DFGameLoading.LoadingView_Warfare
// Size: 0x3E0 (Inherited: 0x318)
struct ULoadingView_Warfare : UGPLoadingViewBase
{
	struct UDFCommonMediaView* CommonMediaView; // 0x318(0x8)
	struct UTextBlock* ModeNameText; // 0x320(0x8)
	struct UTextBlock* MapNameText; // 0x328(0x8)
	struct UTextBlock* LoadingProgressText; // 0x330(0x8)
	struct UUserWidget* CommonJumpOver; // 0x338(0x8)
	struct UDFButton* SkipButton; // 0x340(0x8)
	struct UWidget* DynamicLayoutDisplayPanel; // 0x348(0x8)
	struct FName DisplayInputActionName_Skip; // 0x350(0x8)
	uint8_t Pad_0x358[0x8]; // 0x358(0x8)
	struct FTimerHandle DelayTimerHandle; // 0x360(0x8)
	uint8_t Pad_0x368[0xC]; // 0x368(0xC)
	struct FName CachedMovieRowName; // 0x374(0x8)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
	struct FBattleFieldBackgroundCharacterVoiceRow BackgroundCharacterVoice; // 0x380(0x60)


	// Object: Function DFGameLoading.LoadingView_Warfare.OnSkipButtonClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x109a1110
	// Params: [ Num(0) Size(0x0) ]
	void OnSkipButtonClicked();

	// Object: Function DFGameLoading.LoadingView_Warfare.OnLoadingSucceed
	// Flags: [Final|Native|Public]
	// Offset: 0x10b20120
	// Params: [ Num(2) Size(0x18) ]
	void OnLoadingSucceed(EDFLoadingFlowStepResult Result, struct FString Reason);

	// Object: Function DFGameLoading.LoadingView_Warfare.OnInputTypeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xbdde890
	// Params: [ Num(1) Size(0x1) ]
	void OnInputTypeChanged(EGPInputType InputType);

	// Object: Function DFGameLoading.LoadingView_Warfare.OnEnterTargetLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x10b60720
	// Params: [ Num(0) Size(0x0) ]
	void OnEnterTargetLevel();

	// Object: Function DFGameLoading.LoadingView_Warfare.OnDelayCloseTransitionLoading
	// Flags: [Final|Native|Public]
	// Offset: 0xbdde87c
	// Params: [ Num(0) Size(0x0) ]
	void OnDelayCloseTransitionLoading();

	// Object: Function DFGameLoading.LoadingView_Warfare.InitDynamicLayoutDisplay
	// Flags: [Final|Native|Public]
	// Offset: 0xbdde868
	// Params: [ Num(0) Size(0x0) ]
	void InitDynamicLayoutDisplay();

	// Object: Function DFGameLoading.LoadingView_Warfare.BP_ToggleDefaultSkipTipsGamepad
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	void BP_ToggleDefaultSkipTipsGamepad(uint8_t bIsOpen, struct FName DisplayActionName);

	// Object: Function DFGameLoading.LoadingView_Warfare.BP_PlayTitleAnim
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_PlayTitleAnim();
	DEFINE_UE_CLASS_HELPERS(ULoadingView_Warfare, "LoadingView_Warfare")

};

// Object: Class DFGameLoading.LoadingViewFactory_Default
// Size: 0x28 (Inherited: 0x28)
struct ULoadingViewFactory_Default : ULoadingViewFactoryBase
{	DEFINE_UE_CLASS_HELPERS(ULoadingViewFactory_Default, "LoadingViewFactory_Default")

};

// Object: Class DFGameLoading.LoadingViewFactory_SOL
// Size: 0x28 (Inherited: 0x28)
struct ULoadingViewFactory_SOL : ULoadingViewFactoryBase
{	DEFINE_UE_CLASS_HELPERS(ULoadingViewFactory_SOL, "LoadingViewFactory_SOL")

};

// Object: Class DFGameLoading.LoadingViewFactory_Warfare
// Size: 0x28 (Inherited: 0x28)
struct ULoadingViewFactory_Warfare : ULoadingViewFactoryBase
{	DEFINE_UE_CLASS_HELPERS(ULoadingViewFactory_Warfare, "LoadingViewFactory_Warfare")

};

// Object: Class DFGameLoading.LocalTestFlow
// Size: 0x40 (Inherited: 0x40)
struct ULocalTestFlow : UDFLoadingFlowBase
{	DEFINE_UE_CLASS_HELPERS(ULocalTestFlow, "LocalTestFlow")

};

} // namespace SDK
