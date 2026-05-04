#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"
#include "UITween.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: HudFramework
// Enums: 3
// Structs: 6
// Classes: 10

struct AActor;
enum class ESlateVisibility : uint8_t;
struct UBorder;
struct UButton;
struct UDataTable;
struct UTextBlock;
struct UUniformGridPanel;
struct UWidget;
struct UWidgetAnimation;
struct FHudAnimationNameSelector;
struct FSwitchableHudConfigRow;
struct FHudConfigRow;
struct FViewAssetCacheInfo;
struct FHudLRUItem;
struct FHudDebugInfo;
struct UBaseHudController;
struct UBaseHudDataCenter;
struct UBaseHudView;
struct UHudDebugWidget;
struct IHudViewInterface;
struct UHudEntity;
struct UHudFrameworkSettings;
struct UHudManager;
struct UHudVisibleAsset;
struct UHudVisibleChecker;

// Object: Enum HudFramework.EHudShowType
enum class EHudShowType : uint8_t
{
	OnDemand = 0,
	AutoShow = 1,
	OnlyPreCreateController = 2,
	EHudShowType_MAX = 3
};

// Object: Enum HudFramework.EHudUpdateFrequency
enum class EHudUpdateFrequency : uint16_t
{
	NeverTick = 0,
	FPS1 = 1,
	FPS10 = 10,
	FPS20 = 20,
	FPS30 = 30,
	FPS40 = 40,
	FPS50 = 50,
	FPS60 = 60,
	EveryFrame = 255,
	EHudUpdateFrequency_MAX = 256
};

// Object: Enum HudFramework.EHudLayer
enum class EHudLayer : uint8_t
{
	None = 0,
	ScreenEffect = 11,
	Mark = 12,
	Common = 13,
	Hint = 14,
	Feedback = 15,
	Touch = 16,
	Popup = 17,
	LargePopup = 18,
	EHudLayer_MAX = 19
};

// Object: ScriptStruct HudFramework.HudAnimationNameSelector
// Size: 0x8 (Inherited: 0x0)
struct FHudAnimationNameSelector
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct HudFramework.SwitchableHudConfigRow
// Size: 0x48 (Inherited: 0x10)
struct FSwitchableHudConfigRow : FDescRowBase
{
	struct FName ViewName; // 0x10(0x8)
	struct FSoftClassPath ViewSoftClassPathV1; // 0x18(0x18)
	struct FSoftClassPath ViewSoftClassPathV2; // 0x30(0x18)
};

// Object: ScriptStruct HudFramework.HudConfigRow
// Size: 0x70 (Inherited: 0x10)
struct FHudConfigRow : FDescRowBase
{
	struct FName ViewName; // 0x10(0x8)
	uint8_t bEnable : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	EHudLayer HudLayer; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	int32_t ZOrderOffset; // 0x1C(0x4)
	int32_t SubIndex; // 0x20(0x4)
	uint8_t bSafeZone : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct TSoftClassPtr<struct UBaseHudController*> ControllerSoftClass; // 0x28(0x28)
	struct FSoftClassPath ViewSoftClassPath; // 0x50(0x18)
	EHudShowType HudShowType; // 0x68(0x1)
	EHudUpdateFrequency UpdateFrequncy; // 0x69(0x1)
	uint8_t DisableTickWhenHide : 1; // 0x6A(0x1), Mask(0x1)
	uint8_t BitPad_0x6A_1 : 7; // 0x6A(0x1)
	uint8_t bShippingNoCreate : 1; // 0x6B(0x1), Mask(0x1)
	uint8_t BitPad_0x6B_1 : 7; // 0x6B(0x1)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct HudFramework.ViewAssetCacheInfo
// Size: 0x20 (Inherited: 0x0)
struct FViewAssetCacheInfo
{
	struct UObject* Asset; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct HudFramework.HudLRUItem
// Size: 0xC (Inherited: 0x0)
struct FHudLRUItem
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct HudFramework.HudDebugInfo
// Size: 0x40 (Inherited: 0x0)
struct FHudDebugInfo
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: Class HudFramework.BaseHudController
// Size: 0x80 (Inherited: 0x28)
struct UBaseHudController : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct TScriptInterface<IHudViewInterface> HudView; // 0x38(0x10)
	struct UObject* HudOwner; // 0x48(0x8)
	uint8_t Pad_0x50[0x19]; // 0x50(0x19)
	uint8_t bNeverAddToLRU : 1; // 0x69(0x1), Mask(0x1)
	uint8_t BitPad_0x69_1 : 7; // 0x69(0x1)
	uint8_t bShouldForceShow : 1; // 0x6A(0x1), Mask(0x1)
	uint8_t BitPad_0x6A_1 : 7; // 0x6A(0x1)
	uint8_t Pad_0x6B[0x5]; // 0x6B(0x5)
	struct AActor* LocalFocusActor; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)


	// Object: Function HudFramework.BaseHudController.Show
	// Flags: [Final|Native|Private]
	// Offset: 0x86b7140
	// Params: [ Num(3) Size(0xA) ]
	uint8_t Show(struct UObject* InHudOwner, uint8_t bShowByState);

	// Object: Function HudFramework.BaseHudController.MoveToNewLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86b7054
	// Params: [ Num(3) Size(0x9) ]
	uint8_t MoveToNewLayer(EHudLayer NewHudLayer, int32_t NewZOrderOffset);

	// Object: Function HudFramework.BaseHudController.GetView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86b7038
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetView();
	DEFINE_UE_CLASS_HELPERS(UBaseHudController, "BaseHudController")

};

// Object: Class HudFramework.BaseHudDataCenter
// Size: 0x28 (Inherited: 0x28)
struct UBaseHudDataCenter : UObject
{	DEFINE_UE_CLASS_HELPERS(UBaseHudDataCenter, "BaseHudDataCenter")

};

// Object: Class HudFramework.BaseHudView
// Size: 0x400 (Inherited: 0x2F8)
struct UBaseHudView : UUserWidget
{
	uint8_t Pad_0x2F8[0x30]; // 0x2F8(0x30)
	struct FUIAnimationController AnimationController; // 0x328(0x20)
	struct FHudAnimationNameSelector FadeInAnimationName; // 0x348(0x8)
	struct FHudAnimationNameSelector FadeOutAnimationName; // 0x350(0x8)
	struct TArray<struct UWidgetAnimation*> AllUMGAnimations; // 0x358(0x10)
	uint8_t bInFadeIn : 1; // 0x368(0x1), Mask(0x1)
	uint8_t BitPad_0x368_1 : 7; // 0x368(0x1)
	uint8_t bInFadeOut : 1; // 0x369(0x1), Mask(0x1)
	uint8_t BitPad_0x369_1 : 7; // 0x369(0x1)
	uint8_t Pad_0x36A[0x6]; // 0x36A(0x6)
	struct UWidgetAnimation* UMGFadeInAnimation; // 0x370(0x8)
	struct UWidgetAnimation* UMGFadeOutAnimation; // 0x378(0x8)
	struct UWidgetAnimation* PlayingFadeInAnim; // 0x380(0x8)
	struct UWidgetAnimation* PlayingFadeOutAnim; // 0x388(0x8)
	struct AActor* LocalFocusActor; // 0x390(0x8)
	struct UObject* OwnerController; // 0x398(0x8)
	ESlateVisibility HiddenVisibility; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x5F]; // 0x3A1(0x5F)


	// Object: Function HudFramework.BaseHudView.StopFadeOutAnimation
	// Flags: [Native|Protected]
	// Offset: 0x86b7a70
	// Params: [ Num(0) Size(0x0) ]
	void StopFadeOutAnimation();

	// Object: Function HudFramework.BaseHudView.StopFadeInAnimation
	// Flags: [Native|Protected]
	// Offset: 0x86b7a54
	// Params: [ Num(0) Size(0x0) ]
	void StopFadeInAnimation();

	// Object: Function HudFramework.BaseHudView.RefreshFadeOutAnimation
	// Flags: [Native|Protected]
	// Offset: 0x86b7a38
	// Params: [ Num(0) Size(0x0) ]
	void RefreshFadeOutAnimation();

	// Object: Function HudFramework.BaseHudView.PlayFadeOutAnimation
	// Flags: [Native|Protected]
	// Offset: 0x86b79f8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PlayFadeOutAnimation();

	// Object: Function HudFramework.BaseHudView.PlayFadeInAnimation
	// Flags: [Native|Protected]
	// Offset: 0x86b79b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PlayFadeInAnimation();

	// Object: Function HudFramework.BaseHudView.OnFadeOutAnimationEnd
	// Flags: [Native|Protected]
	// Offset: 0x86b799c
	// Params: [ Num(0) Size(0x0) ]
	void OnFadeOutAnimationEnd();

	// Object: Function HudFramework.BaseHudView.OnFadeInAnimationEnd
	// Flags: [Native|Protected]
	// Offset: 0x86b7980
	// Params: [ Num(0) Size(0x0) ]
	void OnFadeInAnimationEnd();

	// Object: Function HudFramework.BaseHudView.OnAnimationFinished_Implementation
	// Flags: [Native|Protected]
	// Offset: 0x86b78d4
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationFinished_Implementation(struct UWidgetAnimation* Animation);

	// Object: Function HudFramework.BaseHudView.HasFadeOutAnimation
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b789c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasFadeOutAnimation();

	// Object: Function HudFramework.BaseHudView.HasFadeInAnimation
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b7864
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasFadeInAnimation();

	// Object: Function HudFramework.BaseHudView.GetUMGFadeOutAnim
	// Flags: [Native|Protected]
	// Offset: 0x86b7828
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetAnimation* GetUMGFadeOutAnim();

	// Object: Function HudFramework.BaseHudView.GetUMGFadeInAnim
	// Flags: [Native|Protected]
	// Offset: 0x86b77ec
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetAnimation* GetUMGFadeInAnim();

	// Object: Function HudFramework.BaseHudView.GetAllAnimations
	// Flags: [Final|Native|Public]
	// Offset: 0x86b7754
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UWidgetAnimation*> GetAllAnimations();

	// Object: Function HudFramework.BaseHudView.BP_OnShow
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnShow();

	// Object: Function HudFramework.BaseHudView.BP_OnPostHide
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnPostHide();

	// Object: Function HudFramework.BaseHudView.BP_OnInit
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnInit();

	// Object: Function HudFramework.BaseHudView.BP_OnHide
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnHide();

	// Object: Function HudFramework.BaseHudView.BP_OnDestroy
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnDestroy();

	// Object: Function HudFramework.BaseHudView.AddToRoot
	// Flags: [Native|Protected]
	// Offset: 0x86b7630
	// Params: [ Num(3) Size(0xD) ]
	void AddToRoot(struct UWidget* UIIns, int32_t ZOrder, EHudLayer InHudLayer);
	DEFINE_UE_CLASS_HELPERS(UBaseHudView, "BaseHudView")

};

// Object: Class HudFramework.HudDebugWidget
// Size: 0x3A0 (Inherited: 0x2F8)
struct UHudDebugWidget : UUserWidget
{
	struct UButton* Tab1Button; // 0x2F8(0x8)
	struct UButton* Tab2Button; // 0x300(0x8)
	struct UButton* Tab3Button; // 0x308(0x8)
	struct UButton* Tab4Button; // 0x310(0x8)
	struct UButton* CloseButton; // 0x318(0x8)
	struct UButton* RefreshButton; // 0x320(0x8)
	struct UTextBlock* Tab1Text; // 0x328(0x8)
	struct UTextBlock* Tab2Text; // 0x330(0x8)
	struct UTextBlock* Tab3Text; // 0x338(0x8)
	struct UTextBlock* Tab4Text; // 0x340(0x8)
	struct UBorder* Tab1Border; // 0x348(0x8)
	struct UBorder* Tab2Border; // 0x350(0x8)
	struct UBorder* Tab3Border; // 0x358(0x8)
	struct UBorder* Tab4Border; // 0x360(0x8)
	struct UUniformGridPanel* GridPanel; // 0x368(0x8)
	struct UTextBlock* TitleText; // 0x370(0x8)
	struct UTextBlock* CountText; // 0x378(0x8)
	uint8_t Pad_0x380[0x4]; // 0x380(0x4)
	struct TWeakObjectPtr<struct UHudVisibleChecker> VisibleChecker; // 0x384(0x8)
	struct TWeakObjectPtr<struct UHudManager> HudManager; // 0x38C(0x8)
	uint8_t Pad_0x394[0xC]; // 0x394(0xC)


	// Object: Function HudFramework.HudDebugWidget.OnTab4Clicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b7b40
	// Params: [ Num(0) Size(0x0) ]
	void OnTab4Clicked();

	// Object: Function HudFramework.HudDebugWidget.OnTab3Clicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b7b2c
	// Params: [ Num(0) Size(0x0) ]
	void OnTab3Clicked();

	// Object: Function HudFramework.HudDebugWidget.OnTab2Clicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b7b18
	// Params: [ Num(0) Size(0x0) ]
	void OnTab2Clicked();

	// Object: Function HudFramework.HudDebugWidget.OnTab1Clicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b7b04
	// Params: [ Num(0) Size(0x0) ]
	void OnTab1Clicked();

	// Object: Function HudFramework.HudDebugWidget.OnRefreshClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b7af0
	// Params: [ Num(0) Size(0x0) ]
	void OnRefreshClicked();

	// Object: Function HudFramework.HudDebugWidget.OnCloseClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b7adc
	// Params: [ Num(0) Size(0x0) ]
	void OnCloseClicked();
	DEFINE_UE_CLASS_HELPERS(UHudDebugWidget, "HudDebugWidget")

};

// Object: Class HudFramework.HudViewInterface
// Size: 0x28 (Inherited: 0x28)
struct IHudViewInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IHudViewInterface, "HudViewInterface")

};

// Object: Class HudFramework.HudEntity
// Size: 0x190 (Inherited: 0x28)
struct UHudEntity : UObject
{
	struct TMap<struct FName, struct UBaseHudController*> HudControllerMap; // 0x28(0x50)
	uint8_t Pad_0x78[0x68]; // 0x78(0x68)
	struct TMap<struct FName, struct UObject*> ControllerClassAssetCacheMap; // 0xE0(0x50)
	struct TMap<struct FName, struct FViewAssetCacheInfo> ViewAssetCacheMap; // 0x130(0x50)
	uint8_t Pad_0x180[0x8]; // 0x180(0x8)
	struct AActor* LocalFocusActor; // 0x188(0x8)


	// Object: Function HudFramework.HudEntity.OnAsyncLoadViewClassAssetCompleted
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x86b7e14
	// Params: [ Num(2) Size(0x20) ]
	void OnAsyncLoadViewClassAssetCompleted(const struct FSoftObjectPath& AssetPath, struct FName ViewName);
	DEFINE_UE_CLASS_HELPERS(UHudEntity, "HudEntity")

};

// Object: Class HudFramework.HudFrameworkSettings
// Size: 0x50 (Inherited: 0x38)
struct UHudFrameworkSettings : UDeveloperSettings
{
	struct FSoftClassPath DefaultControllerClass; // 0x38(0x18)
	DEFINE_UE_CLASS_HELPERS(UHudFrameworkSettings, "HudFrameworkSettings")

};

// Object: Class HudFramework.HudManager
// Size: 0x1C8 (Inherited: 0x28)
struct UHudManager : UObject
{
	struct UHudVisibleAsset* HudVisibleAsset; // 0x28(0x8)
	struct UBaseHudDataCenter* HudDataCenterClass; // 0x30(0x8)
	struct FMulticastInlineDelegate OnHUDStateModified; // 0x38(0x10)
	struct FMulticastInlineDelegate OnHUDStateChanged; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)
	struct TArray<struct FName> PreLoadHudViewNameArray; // 0x78(0x10)
	struct TArray<struct FHudConfigRow> PreLoadHudControllerNameArray; // 0x88(0x10)
	struct TArray<struct FName> HudConfigNameArray; // 0x98(0x10)
	struct FName SwitchableHudTableName; // 0xA8(0x8)
	struct TArray<struct FName> Version2BaseLayout; // 0xB0(0x10)
	int32_t HudsPerFrame; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct UBaseHudDataCenter* HudDataCenter; // 0xC8(0x8)
	uint8_t Pad_0xD0[0x8]; // 0xD0(0x8)
	struct UHudEntity* HudEntity; // 0xD8(0x8)
	struct UHudVisibleChecker* HudVisibleChecker; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x98]; // 0xE8(0x98)
	struct AActor* LocalFocusActor; // 0x180(0x8)
	uint8_t Pad_0x188[0x10]; // 0x188(0x10)
	float LRUCheckInterval; // 0x198(0x4)
	uint8_t Pad_0x19C[0x1C]; // 0x19C(0x1C)
	struct UDataTable* SwitchableUIDataTable; // 0x1B8(0x8)
	uint8_t Pad_0x1C0[0x8]; // 0x1C0(0x8)


	// Object: Function HudFramework.HudManager.ResetToDefaultLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86b84a0
	// Params: [ Num(1) Size(0x8) ]
	void ResetToDefaultLayer(struct FName PanelConfigName);

	// Object: Function HudFramework.HudManager.RemoveHudOrState
	// Flags: [Final|Native|Public]
	// Offset: 0xfa5c098
	// Params: [ Num(3) Size(0xA) ]
	void RemoveHudOrState(struct FName Name, uint8_t bReleasePanel, uint8_t bForceRefreshHudState);

	// Object: Function HudFramework.HudManager.NotifyHudVersionChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	void NotifyHudVersionChanged(int32_t OldVer, int32_t NewVer);

	// Object: Function HudFramework.HudManager.MoveToNewLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86b8378
	// Params: [ Num(4) Size(0x11) ]
	uint8_t MoveToNewLayer(struct FName PanelConfigName, EHudLayer NewHudLayer, int32_t NewZOrderOffset);

	// Object: Function HudFramework.HudManager.LowMemoryWarningNtf
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b8364
	// Params: [ Num(0) Size(0x0) ]
	void LowMemoryWarningNtf();

	// Object: Function HudFramework.HudManager.IsHudVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86b8270
	// Params: [ Num(3) Size(0xA) ]
	uint8_t IsHudVisible(struct FName ViewName, uint8_t bIncludeOutAnim);

	// Object: Function HudFramework.HudManager.HasState
	// Flags: [Final|Native|Public]
	// Offset: 0xed06d28
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasState(struct FName State);

	// Object: Function HudFramework.HudManager.GetSwitchableHudTable
	// Flags: [Final|Native|Public]
	// Offset: 0x86b823c
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetSwitchableHudTable();

	// Object: Function HudFramework.HudManager.GetHudControllerByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa480a8
	// Params: [ Num(2) Size(0x10) ]
	struct UBaseHudController* GetHudControllerByName(struct FName ViewName);

	// Object: Function HudFramework.HudManager.GetCurrentBaseLayout
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86b8208
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCurrentBaseLayout();

	// Object: Function HudFramework.HudManager.DestroyHud
	// Flags: [Final|Native|Public]
	// Offset: 0x86b8164
	// Params: [ Num(1) Size(0x8) ]
	void DestroyHud(struct FName Name);

	// Object: Function HudFramework.HudManager.AddHudOrState
	// Flags: [Final|Native|Public]
	// Offset: 0xf6524b0
	// Params: [ Num(3) Size(0x11) ]
	void AddHudOrState(struct FName Name, struct UObject* InHudOwner, uint8_t bForceRefreshHudState);
	DEFINE_UE_CLASS_HELPERS(UHudManager, "HudManager")

};

// Object: Class HudFramework.HudVisibleAsset
// Size: 0x208 (Inherited: 0x28)
struct UHudVisibleAsset : UObject
{
	struct TMap<struct FName, struct FString> InvisibleStateMap; // 0x28(0x50)
	struct TMap<EHudLayer, struct FString> InvisibleLayerMap; // 0x78(0x50)
	struct TMap<struct FName, struct FString> WhiteListVisibleStateMap; // 0xC8(0x50)
	uint8_t Pad_0x118[0xF0]; // 0x118(0xF0)
	DEFINE_UE_CLASS_HELPERS(UHudVisibleAsset, "HudVisibleAsset")

};

// Object: Class HudFramework.HudVisibleChecker
// Size: 0x390 (Inherited: 0x28)
struct UHudVisibleChecker : UObject
{
	uint8_t Pad_0x28[0x368]; // 0x28(0x368)
	DEFINE_UE_CLASS_HELPERS(UHudVisibleChecker, "HudVisibleChecker")

};

} // namespace SDK
