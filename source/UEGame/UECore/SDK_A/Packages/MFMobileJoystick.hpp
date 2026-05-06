#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include "SGFramework.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: MFMobileJoystick
// Enums: 3
// Structs: 2
// Classes: 21

struct APawn;
struct APlayerController;
struct ASGCharacter;
struct ASGPlayerController;
enum class EButtonAcceptInputType : uint8_t;
enum class EGameModeName : uint8_t;
enum class ERotateSensitivityMode : uint8_t;
enum class ESGAutoZoomWeaponType : uint8_t;
enum class EUAPlayerRoundState : uint8_t;
struct FGameplayTag;
struct FMobileInputData;
struct UCurveFloat;
struct UMaterialInstanceDynamic;
struct UTexture2D;
struct UUserWidget;
struct UWidget;
struct FInputRotationInfo;
struct FWidgetInvisibleTag;
struct UMFAdvanceProgressBar;
struct UMFMobileTouchButton;
struct UMFMobileAxisInputButton;
struct UMFMobileCircleUserWidget;
struct UMFMobileCircleUserWidget_Fire;
struct UMFMobileDraggableButton;
struct UMFMobileCustomLayoutButton;
struct UMFMobileCustomShapeButton;
struct UMFMobileDelayButton;
struct UMFMobileDragDropUserWidget;
struct UMFMobileGameHandle;
struct UMFMobileFixedFireGameHandle;
struct UMFMobileGamePad;
struct UMFMobileGamePadView;
struct UMFMobileInputButton;
struct UMFMobileMoveHandleImpl;
struct UMFMobileMoveJoystickHandleImpl;
struct UMFMobileMutilSlider;
struct UMFMobilePlayerInput;
struct UMFMobilePlayerInputStatics;
struct UMFPCPlayerInput;

// Object: Enum MFMobileJoystick.EMFAdvanceProgressBarFillType
enum class EMFAdvanceProgressBarFillType : uint8_t
{
	Custom = 0,
	Clockwise = 1,
	Counterclockwise = 2,
	EMFAdvanceProgressBarFillType_MAX = 3
};

// Object: Enum MFMobileJoystick.EAcceptOP
enum class EAcceptOP : uint8_t
{
	EAOP_Direct = 0,
	EAOP_ScaleBySpeed = 1,
	EAOP_MAX = 2
};

// Object: Enum MFMobileJoystick.EBlendOP
enum class EBlendOP : uint8_t
{
	EOP_BlendFactor = 0,
	EOP_BlendFactor_Interp = 1,
	EOP_BlendFactor_Curve = 2,
	EOP_BlendFactor_MagicMin = 3,
	EOP_BlendFactor_MagicMax = 4,
	EOP_MAX = 5
};

// Object: ScriptStruct MFMobileJoystick.InputRotationInfo
// Size: 0xD8 (Inherited: 0x0)
struct FInputRotationInfo
{
	uint8_t Pad_0x0[0xD8]; // 0x0(0xD8)
};

// Object: ScriptStruct MFMobileJoystick.WidgetInvisibleTag
// Size: 0x10 (Inherited: 0x0)
struct FWidgetInvisibleTag
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: Class MFMobileJoystick.MFAdvanceProgressBar
// Size: 0x290 (Inherited: 0x130)
struct UMFAdvanceProgressBar : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFAdvanceProgressBar, "MFAdvanceProgressBar")

	struct FSlateBrush BackgroundImage; // 0x130(0x90)
	struct FSlateBrush FillImage; // 0x1C0(0x90)
	float Percent; // 0x250(0x4)
	struct FDelegate PercentDelegate; // 0x254(0x10)
	uint8_t AdvanceBarFillType; // 0x264(0x1)
	uint8_t Pad_0x265[0x3]; // 0x265(0x3)
	struct FVector2D BorderPadding; // 0x268(0x8)
	struct FName PercentPropertyNameInMaterial; // 0x270(0x8)
	bool bInvertPercent; // 0x278(0x1)
	uint8_t Pad_0x279[0x17]; // 0x279(0x17)

	// Object: Function MFMobileJoystick.MFAdvanceProgressBar.SetPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91b768c
	// Params: [ Num(1) Size(0x4) ]
	void SetPercent(float InPercent);

	// Object: Function MFMobileJoystick.MFAdvanceProgressBar.GetFillImageDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4f7e8
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetFillImageDynamicMaterial();

	// Object: Function MFMobileJoystick.MFAdvanceProgressBar.GetBackgroundImageDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4f81c
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetBackgroundImageDynamicMaterial();
};

// Object: Class MFMobileJoystick.MFMobileTouchButton
// Size: 0x2F0 (Inherited: 0x298)
struct UMFMobileTouchButton : UBorder
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileTouchButton, "MFMobileTouchButton")

	struct FMulticastInlineDelegate OnTouchStart; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTouchEnd; // 0x2A8(0x10)
	struct FMulticastInlineDelegate OnTouchMove; // 0x2B8(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2C8(0x10)
	bool bReactTouch; // 0x2D8(0x1)
	uint8_t Pad_0x2D9[0x17]; // 0x2D9(0x17)

	// Object: Function MFMobileJoystick.MFMobileTouchButton.GetTouchTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f52a80
	// Params: [ Num(1) Size(0x4) ]
	float GetTouchTime();

	// Object: Function MFMobileJoystick.MFMobileTouchButton.GetFingerIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f52ab4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFingerIndex();
};

// Object: Class MFMobileJoystick.MFMobileAxisInputButton
// Size: 0x328 (Inherited: 0x2F0)
struct UMFMobileAxisInputButton : UMFMobileTouchButton
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileAxisInputButton, "MFMobileAxisInputButton")

	float InputMultiplier; // 0x2F0(0x4)
	bool bClampInput; // 0x2F4(0x1)
	uint8_t Pad_0x2F5[0x3]; // 0x2F5(0x3)
	float ClampMax; // 0x2F8(0x4)
	bool bUseOffsetAsInput; // 0x2FC(0x1)
	uint8_t Pad_0x2FD[0x3]; // 0x2FD(0x3)
	float DeadZone; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
	struct FMulticastInlineDelegate OnAxisInputButtonEvent; // 0x308(0x10)
	uint8_t Pad_0x318[0x10]; // 0x318(0x10)

	// Object: Function MFMobileJoystick.MFMobileAxisInputButton.GetTouchPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f4f864
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetTouchPosition();
};

// Object: Class MFMobileJoystick.MFMobileCircleUserWidget
// Size: 0x2F0 (Inherited: 0x290)
struct UMFMobileCircleUserWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileCircleUserWidget, "MFMobileCircleUserWidget")

	int32_t WidgetPointIndex; // 0x290(0x4)
	bool bOpenTouchTick; // 0x294(0x1)
	uint8_t Pad_0x295[0x3]; // 0x295(0x3)
	struct FMulticastInlineDelegate OnTouchStart; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTouchEnd; // 0x2A8(0x10)
	struct FMulticastInlineDelegate OnTouchOutCircle; // 0x2B8(0x10)
	struct FMulticastInlineDelegate OnOutOfButtonTouchEnded; // 0x2C8(0x10)
	struct FMulticastInlineDelegate OnButtonVisibleChanged; // 0x2D8(0x10)
	EButtonAcceptInputType AcceptInputType; // 0x2E8(0x1)
	EButtonAcceptInputType CurrentAcceptInputType; // 0x2E9(0x1)
	uint8_t Pad_0x2EA[0x6]; // 0x2EA(0x6)

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.SetFingerIndexDisableMoveAndRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4f8f0
	// Params: [ Num(2) Size(0x5) ]
	void SetFingerIndexDisableMoveAndRotate(int32_t CustomWidgetPointIndex, bool bDisable);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.SetCurrentAcceptInputType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x917ddb0
	// Params: [ Num(1) Size(0x1) ]
	void SetCurrentAcceptInputType(EButtonAcceptInputType InCurrentAcceptInputType);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.OnInputTouchEnded
	// Flags: [Final|Native|Public]
	// Offset: 0x76d10e4
	// Params: [ Num(1) Size(0x1) ]
	void OnInputTouchEnded(uint8_t FingerIndex);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4f8d4
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.InMovementArea
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x96ac858
	// Params: [ Num(2) Size(0x9) ]
	bool InMovementArea(struct UWidget* Widget);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.GetCurrentWidgetPointIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4f9dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentWidgetPointIndex();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.DebugCallOnTouchStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4f8c0
	// Params: [ Num(0) Size(0x0) ]
	void DebugCallOnTouchStart();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget.DebugCallOnTouchEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4f8ac
	// Params: [ Num(0) Size(0x0) ]
	void DebugCallOnTouchEnd();
};

// Object: Class MFMobileJoystick.MFMobileCircleUserWidget_Fire
// Size: 0x350 (Inherited: 0x2F0)
struct UMFMobileCircleUserWidget_Fire : UMFMobileCircleUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileCircleUserWidget_Fire, "MFMobileCircleUserWidget_Fire")

	struct FMulticastInlineDelegate PostStartFireByTouch; // 0x2F0(0x10)
	bool bIsLeftFireBtn; // 0x300(0x1)
	bool bLeftFireBtnDown; // 0x301(0x1)
	bool bRightFireBtnDown; // 0x302(0x1)
	bool bFastAimFireSetting; // 0x303(0x1)
	bool bCanCancelAbility; // 0x304(0x1)
	uint8_t Pad_0x305[0xB]; // 0x305(0xB)
	bool bIsPreparingFire; // 0x310(0x1)
	bool bIsPreparingPumpFire; // 0x311(0x1)
	bool bCharacterSwitchingFireMode; // 0x312(0x1)
	ESGAutoZoomWeaponType lastAutoZoomWeaponType; // 0x313(0x1)
	uint8_t Pad_0x314[0x4]; // 0x314(0x4)
	struct ASGPlayerController* CachedPlayerController; // 0x318(0x8)
	struct ASGCharacter* CachedCharacter; // 0x320(0x8)
	struct FGameplayTagContainer CancelAbilityTags; // 0x328(0x20)
	bool bIsTouchingFire; // 0x348(0x1)
	uint8_t Pad_0x349[0x7]; // 0x349(0x7)

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.TouchFireStarted
	// Flags: [Final|Native|Public]
	// Offset: 0x4f4ffa0
	// Params: [ Num(0) Size(0x0) ]
	void TouchFireStarted();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.SetIsPreparingPumpFire
	// Flags: [Final|Native|Public]
	// Offset: 0x4f4fdc8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsPreparingPumpFire(bool bInIsPreparingPumpFire);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.PostStartFire
	// Flags: [Final|Native|Public]
	// Offset: 0x4f4ff2c
	// Params: [ Num(0) Size(0x0) ]
	void PostStartFire();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnZoomEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fd98
	// Params: [ Num(0) Size(0x0) ]
	void OnZoomEnd();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnZoomChanged
	// Flags: [Final|Native|Private]
	// Offset: 0x969a2e0
	// Params: [ Num(1) Size(0x1) ]
	void OnZoomChanged(bool bInZoomChanged);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnUnZoomEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fd84
	// Params: [ Num(0) Size(0x0) ]
	void OnUnZoomEnd();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnTouchEndedAnywhere
	// Flags: [Native|Public]
	// Offset: 0x4f4ffb4
	// Params: [ Num(0) Size(0x0) ]
	void OnTouchEndedAnywhere();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnRoundControlStateChanged
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fc24
	// Params: [ Num(3) Size(0x10) ]
	void OnRoundControlStateChanged(struct APlayerController* PlayerController, EUAPlayerRoundState RoundState, int32_t CurrRound);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnRepPawn
	// Flags: [Final|Native|Private]
	// Offset: 0x9507a60
	// Params: [ Num(2) Size(0x10) ]
	void OnRepPawn(struct APlayerController* PlayerController, struct APawn* Pawn);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnPossessPawn
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fb40
	// Params: [ Num(2) Size(0x10) ]
	void OnPossessPawn(struct APlayerController* PlayerController, struct APawn* Pawn);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnCheckFireDown
	// Flags: [Final|Native|Private]
	// Offset: 0x9356a70
	// Params: [ Num(0) Size(0x0) ]
	void OnCheckFireDown();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.NativeStartFire
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4ff8c
	// Params: [ Num(0) Size(0x0) ]
	void NativeStartFire();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.NativeEndFire
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9bad460
	// Params: [ Num(0) Size(0x0) ]
	void NativeEndFire();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.NativeCancelFastAimFire
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f4ff78
	// Params: [ Num(0) Size(0x0) ]
	void NativeCancelFastAimFire();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.IsAnotherFireBtnPressed
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x4f4fe78
	// Params: [ Num(2) Size(0x9) ]
	bool IsAnotherFireBtnPressed(struct ASGPlayerController* PC);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.InitCancelAbilityTagsChangedEvent
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fb2c
	// Params: [ Num(0) Size(0x0) ]
	void InitCancelAbilityTagsChangedEvent();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.GetUseAutoZoom
	// Flags: [Final|Native|Public]
	// Offset: 0x4f4ff40
	// Params: [ Num(1) Size(0x1) ]
	bool GetUseAutoZoom();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.GetPressedScreenSpacePosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f4fdac
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPressedScreenSpacePosition();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.CheckAndUpdateSwitchingFireMode
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fd4c
	// Params: [ Num(1) Size(0x1) ]
	bool CheckAndUpdateSwitchingFireMode();

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.CancelAbilityTagsChanged
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fa44
	// Params: [ Num(2) Size(0xC) ]
	void CancelAbilityTagsChanged(struct FGameplayTag ChangedGameplayTag, int32_t NewCount);

	// Object: Function MFMobileJoystick.MFMobileCircleUserWidget_Fire.CancelAbilities
	// Flags: [Final|Native|Private]
	// Offset: 0x4f4fa30
	// Params: [ Num(0) Size(0x0) ]
	void CancelAbilities();
};

// Object: Class MFMobileJoystick.MFMobileDraggableButton
// Size: 0x4A0 (Inherited: 0x498)
struct UMFMobileDraggableButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileDraggableButton, "MFMobileDraggableButton")

	bool bShouldSnapToMouseCenter; // 0x491(0x1)
	struct FVector2D MouseOffset; // 0x494(0x8)
};

// Object: Class MFMobileJoystick.MFMobileCustomLayoutButton
// Size: 0x710 (Inherited: 0x4A0)
struct UMFMobileCustomLayoutButton : UMFMobileDraggableButton
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileCustomLayoutButton, "MFMobileCustomLayoutButton")

	bool bIsExpandLayout; // 0x49C(0x1)
	float MinTransparency; // 0x4A0(0x4)
	uint8_t Pad_0x4A5[0x3]; // 0x4A5(0x3)
	struct UUserWidget* LayoutVisualWidgetClass; // 0x4A8(0x8)
	struct UUserWidget* LayoutExpandVisualWidgetClass; // 0x4B0(0x8)
	struct FSlateBrush FocusOutlineBrush; // 0x4B8(0x90)
	struct FSlateBrush TransparentOutlineBrush; // 0x548(0x90)
	struct FSlateBrush ForbidBrush; // 0x5D8(0x90)
	bool bCanSetPosX; // 0x668(0x1)
	bool bCanSetPosY; // 0x669(0x1)
	bool bCanSetSize; // 0x66A(0x1)
	bool bCanSetTransparency; // 0x66B(0x1)
	bool bCanSetIsHidden; // 0x66C(0x1)
	uint8_t Pad_0x66D[0x3]; // 0x66D(0x3)
	float Size; // 0x670(0x4)
	float Transparency; // 0x674(0x4)
	bool bIsHidden; // 0x678(0x1)
	bool bIsFocusing; // 0x679(0x1)
	uint8_t Pad_0x67A[0x6]; // 0x67A(0x6)
	struct UUserWidget* LayoutVisual; // 0x680(0x8)
	struct UUserWidget* LayoutExpandVisual; // 0x688(0x8)
	uint8_t Pad_0x690[0x50]; // 0x690(0x50)
	struct FMulticastInlineDelegate OnButtonDown; // 0x6E0(0x10)
	struct FMulticastInlineDelegate OnButtonDrag; // 0x6F0(0x10)
	struct FMulticastInlineDelegate OnButtonUp; // 0x700(0x10)

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.SetButtonTransparency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50204
	// Params: [ Num(1) Size(0x4) ]
	void SetButtonTransparency(float InTransparency);

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.SetButtonSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f502ac
	// Params: [ Num(1) Size(0x4) ]
	void SetButtonSize(float InSize);

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.SetButtonPos
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50354
	// Params: [ Num(2) Size(0x8) ]
	void SetButtonPos(float InPosX, float InPosY);

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.SetButtonIsHidden
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50154
	// Params: [ Num(1) Size(0x1) ]
	void SetButtonIsHidden(bool bInIsHidden);

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.SetButtonFocusState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f5082c
	// Params: [ Num(1) Size(0x1) ]
	void SetButtonFocusState(bool bInFocused);

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.SetAllPropertiesExceptIsHidden
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f5051c
	// Params: [ Num(4) Size(0x10) ]
	void SetAllPropertiesExceptIsHidden(float InPosX, float InPosY, float InSize, float InTransparency);

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.SetAllProperties
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50680
	// Params: [ Num(5) Size(0x11) ]
	void SetAllProperties(float InPosX, float InPosY, float InSize, float InTransparency, bool bInIsHidden);

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.GetButtonTransparency
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4f500b8
	// Params: [ Num(1) Size(0x4) ]
	float GetButtonTransparency();

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.GetButtonSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4f500ec
	// Params: [ Num(1) Size(0x4) ]
	float GetButtonSize();

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.GetButtonPos
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4f50120
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetButtonPos();

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.GetButtonIsHidden
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4f50080
	// Params: [ Num(1) Size(0x1) ]
	bool GetButtonIsHidden();

	// Object: Function MFMobileJoystick.MFMobileCustomLayoutButton.ForceSetButtonPos
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50438
	// Params: [ Num(2) Size(0x8) ]
	void ForceSetButtonPos(float InPosX, float InPosY);
};

// Object: Class MFMobileJoystick.MFMobileCustomShapeButton
// Size: 0x4A8 (Inherited: 0x498)
struct UMFMobileCustomShapeButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileCustomShapeButton, "MFMobileCustomShapeButton")

	struct UTexture2D* AdvancedHitTexture; // 0x498(0x8)
	int32_t AdvancedHitAlpha; // 0x4A0(0x4)
	uint8_t Pad_0x4A4[0x4]; // 0x4A4(0x4)

	// Object: Function MFMobileJoystick.MFMobileCustomShapeButton.SetAdvancedHitTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50a5c
	// Params: [ Num(1) Size(0x8) ]
	void SetAdvancedHitTexture(struct UTexture2D* InTexture);

	// Object: Function MFMobileJoystick.MFMobileCustomShapeButton.SetAdvancedHitAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f509ac
	// Params: [ Num(1) Size(0x4) ]
	void SetAdvancedHitAlpha(int32_t InAlpha);

	// Object: Function MFMobileJoystick.MFMobileCustomShapeButton.CheckIfLastMouseButtonUpInZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50974
	// Params: [ Num(1) Size(0x1) ]
	bool CheckIfLastMouseButtonUpInZone();
};

// Object: Class MFMobileJoystick.MFMobileDelayButton
// Size: 0x430 (Inherited: 0x2F0)
struct UMFMobileDelayButton : UMFMobileTouchButton
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileDelayButton, "MFMobileDelayButton")

	struct FRuntimeFloatCurve RaiseDerivativeCurve; // 0x2F0(0x88)
	float BaseRaiseValue; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
	struct FRuntimeFloatCurve FallDerivativeCurve; // 0x380(0x88)
	struct FMulticastInlineDelegate OnDelayTouchEvent; // 0x408(0x10)
	uint8_t Pad_0x418[0x18]; // 0x418(0x18)

	// Object: Function MFMobileJoystick.MFMobileDelayButton.SetInputValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50b20
	// Params: [ Num(1) Size(0x4) ]
	void SetInputValue(float InInputValue);

	// Object: Function MFMobileJoystick.MFMobileDelayButton.GetInputValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4f50bc8
	// Params: [ Num(1) Size(0x4) ]
	float GetInputValue();
};

// Object: Class MFMobileJoystick.MFMobileDragDropUserWidget
// Size: 0x370 (Inherited: 0x2E8)
struct UMFMobileDragDropUserWidget : USGUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileDragDropUserWidget, "MFMobileDragDropUserWidget")

	struct FMulticastInlineDelegate OnDropEvent; // 0x2E8(0x10)
	struct FMulticastInlineDelegate OnDragDetectedEvent; // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnDragOverEvent; // 0x308(0x10)
	struct FMulticastInlineDelegate OnDragEnterEvent; // 0x318(0x10)
	struct FMulticastInlineDelegate OnDragLeaveEvent; // 0x328(0x10)
	struct FMulticastInlineDelegate OnDragCancelledEvent; // 0x338(0x10)
	struct FMulticastInlineDelegate OnTouchStartedEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate OnTouchEndedEvent; // 0x358(0x10)
	bool bDropable; // 0x368(0x1)
	uint8_t Pad_0x369[0x7]; // 0x369(0x7)
};

// Object: Class MFMobileJoystick.MFMobileGameHandle
// Size: 0x168 (Inherited: 0x28)
struct UMFMobileGameHandle : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileGameHandle, "MFMobileGameHandle")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UMFMobileInputButton* MovementButton; // 0x38(0x8)
	struct UMFMobileInputButton* RotationButton; // 0x40(0x8)
	struct UMFMobileMoveHandleImpl* MoveHandleImpl; // 0x48(0x8)
	uint8_t Pad_0x50[0xE0]; // 0x50(0xE0)
	struct UMFMobilePlayerInput* CachedPlayerInput; // 0x130(0x8)
	uint8_t Pad_0x138[0x30]; // 0x138(0x30)
};

// Object: Class MFMobileJoystick.MFMobileFixedFireGameHandle
// Size: 0x168 (Inherited: 0x168)
struct UMFMobileFixedFireGameHandle : UMFMobileGameHandle
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileFixedFireGameHandle, "MFMobileFixedFireGameHandle")
};

// Object: Class MFMobileJoystick.MFMobileGamePad
// Size: 0x78 (Inherited: 0x28)
struct UMFMobileGamePad : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileGamePad, "MFMobileGamePad")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UMFMobilePlayerInput* CachedPlayerInput; // 0x30(0x8)
	struct TArray<struct UMFMobileGamePadView*> VisibleViewCache; // 0x38(0x10)
	struct TArray<struct UMFMobileGamePadView*> MobileGamePadViewClasses; // 0x48(0x10)
	int32_t MobileGamePadViewZorder; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<struct UMFMobileGamePadView*> MobileGamePadViews; // 0x60(0x10)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class MFMobileJoystick.MFMobileGamePadView
// Size: 0x3A8 (Inherited: 0x2E8)
struct UMFMobileGamePadView : USGUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileGamePadView, "MFMobileGamePadView")

	int32_t GamePadId; // 0x2E4(0x4)
	struct FName SelectedWidgetName; // 0x2E8(0x8)
	int32_t ShakeFlag; // 0x2F0(0x4)
	struct FString LayerName; // 0x2F8(0x10)
	struct TArray<EGameModeName> GameModeNameArray; // 0x308(0x10)
	struct TArray<int32_t> MapIds; // 0x318(0x10)
	bool IsOverseasOnly; // 0x328(0x1)
	uint8_t Pad_0x329[0x7]; // 0x329(0x7)
	struct UMFMobileGamePad* CachedGamePad; // 0x330(0x8)
	struct TArray<struct UMFMobileDraggableButton*> DraggableBtns; // 0x338(0x10)
	uint8_t Pad_0x348[0x10]; // 0x348(0x10)
	struct TMap<struct TWeakObjectPtr<struct UWidget>, struct FWidgetInvisibleTag> WidgetInvisibleTags; // 0x358(0x50)

	// Object: Function MFMobileJoystick.MFMobileGamePadView.SetVisibleWithTag
	// Flags: [Final|Native|Protected]
	// Offset: 0x95933f4
	// Params: [ Num(3) Size(0x11) ]
	void SetVisibleWithTag(struct UWidget* Widget, struct FName Tag, bool Visible);

	// Object: Function MFMobileJoystick.MFMobileGamePadView.SetGamePad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f50da4
	// Params: [ Num(1) Size(0x8) ]
	void SetGamePad(struct UMFMobileGamePad* InGamePad);

	// Object: Function MFMobileJoystick.MFMobileGamePadView.SaveGamePadConfig
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x4f50cf4
	// Params: [ Num(0) Size(0x0) ]
	void SaveGamePadConfig();

	// Object: Function MFMobileJoystick.MFMobileGamePadView.GetAvailableWidgetNames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4f50d08
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetAvailableWidgetNames();
};

// Object: Class MFMobileJoystick.MFMobileInputButton
// Size: 0x40 (Inherited: 0x28)
struct UMFMobileInputButton : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileInputButton, "MFMobileInputButton")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class MFMobileJoystick.MFMobileMoveHandleImpl
// Size: 0x40 (Inherited: 0x28)
struct UMFMobileMoveHandleImpl : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileMoveHandleImpl, "MFMobileMoveHandleImpl")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class MFMobileJoystick.MFMobileMoveJoystickHandleImpl
// Size: 0x48 (Inherited: 0x40)
struct UMFMobileMoveJoystickHandleImpl : UMFMobileMoveHandleImpl
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileMoveJoystickHandleImpl, "MFMobileMoveJoystickHandleImpl")

	struct UMFMobileGameHandle* OuterGameHandle; // 0x40(0x8)
};

// Object: Class MFMobileJoystick.MFMobileMutilSlider
// Size: 0x550 (Inherited: 0x548)
struct UMFMobileMutilSlider : USlider
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileMutilSlider, "MFMobileMutilSlider")

	int32_t SliderBarNum; // 0x548(0x4)
	bool bCanCross; // 0x54C(0x1)
	uint8_t Pad_0x54D[0x3]; // 0x54D(0x3)
};

// Object: Class MFMobileJoystick.MFMobilePlayerInput
// Size: 0x7A8 (Inherited: 0x590)
struct UMFMobilePlayerInput : USGPlayerInput
{
	DEFINE_UE_CLASS_HELPERS(UMFMobilePlayerInput, "MFMobilePlayerInput")

	float NormalSensitivityX; // 0x590(0x4)
	float NormalSensitivityY; // 0x594(0x4)
	float SwimmingSensitivityX; // 0x598(0x4)
	float SwimmingSensitivityY; // 0x59C(0x4)
	float DrivingSensitivityX; // 0x5A0(0x4)
	float DrivingSensitivityY; // 0x5A4(0x4)
	bool bDisableMoveAndRotate; // 0x5A8(0x1)
	uint8_t Pad_0x5A9[0x7]; // 0x5A9(0x7)
	struct TSet<uint8_t> FingerIndexFullScreenRotateSet; // 0x5B0(0x50)
	struct TMap<uint8_t, bool> FingerIndexIgnoreMap; // 0x600(0x50)
	uint8_t Pad_0x650[0x4]; // 0x650(0x4)
	float FixedSensitivityFactor; // 0x654(0x4)
	float DisAccSensitivityFactor; // 0x658(0x4)
	float DisFixedInputSensitivityFactor; // 0x65C(0x4)
	float MaxAccumulateAxis; // 0x660(0x4)
	float SpeedAccSensitivityFactor; // 0x664(0x4)
	float SpeedAccFixedInputSensitivityFactor; // 0x668(0x4)
	float NewSpeedAccSensitivityFactor; // 0x66C(0x4)
	float NewSpeedAccFixedInputSensitivityFactor; // 0x670(0x4)
	ERotateSensitivityMode UseSensitivityMode; // 0x674(0x1)
	uint8_t Pad_0x675[0x3]; // 0x675(0x3)
	float EmulatorScale; // 0x678(0x4)
	uint8_t Pad_0x67C[0x1]; // 0x67C(0x1)
	bool bCullingYRotaion; // 0x67D(0x1)
	uint8_t Pad_0x67E[0xA]; // 0x67E(0xA)
	float DefaultFixedSensitivityValue; // 0x688(0x4)
	uint8_t Pad_0x68C[0x4]; // 0x68C(0x4)
	float DefaultDisAccSensitivityValue; // 0x690(0x4)
	uint8_t Pad_0x694[0x4]; // 0x694(0x4)
	float DefaultSpeedAccSensitivityValue; // 0x698(0x4)
	uint8_t Pad_0x69C[0x4]; // 0x69C(0x4)
	struct TMap<uint8_t, bool> FingerIndexDisableMoveAndRotateMap; // 0x6A0(0x50)
	struct UMFMobileGameHandle* GameHandle; // 0x6F0(0x8)
	struct UObject* GamePadClassSoft; // 0x6F8(0x8)
	struct UMFMobileGamePad* Gamepad; // 0x700(0x8)
	uint8_t Pad_0x708[0x14]; // 0x708(0x14)
	int32_t CurrentInputModeNum; // 0x71C(0x4)
	struct TArray<struct FMobileInputData> MobileInputDataList; // 0x720(0x10)
	struct TArray<struct FMobileInputData> TempMobileInputDataList; // 0x730(0x10)
	uint8_t Pad_0x740[0x4]; // 0x740(0x4)
	EAcceptOP AcceptOP; // 0x744(0x1)
	uint8_t Pad_0x745[0x3]; // 0x745(0x3)
	struct UCurveFloat* DeltaMoveSpeedScaleCurve; // 0x748(0x8)
	EBlendOP BlendOP; // 0x750(0x1)
	uint8_t Pad_0x751[0x3]; // 0x751(0x3)
	float DeltaMoveBlendFactor; // 0x754(0x4)
	float InterpSpeed; // 0x758(0x4)
	uint8_t Pad_0x75C[0x4]; // 0x75C(0x4)
	struct UCurveFloat* DeltaMoveBlendFactorCurve; // 0x760(0x8)
	float MagicMin_X1; // 0x768(0x4)
	float MagicMin_X2; // 0x76C(0x4)
	float MagicMax_X1; // 0x770(0x4)
	float MagicMax_X2; // 0x774(0x4)
	float MagicMax_X3; // 0x778(0x4)
	uint8_t Pad_0x77C[0x18]; // 0x77C(0x18)
	float DeadZoneSpeed; // 0x794(0x4)
	struct TArray<int64_t> AbnormalPlayers; // 0x798(0x10)

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.UserSetSpeedAccSensitivity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f515d0
	// Params: [ Num(1) Size(0x4) ]
	void UserSetSpeedAccSensitivity(float Value);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.UserSetFixedSensitivity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51720
	// Params: [ Num(1) Size(0x4) ]
	void UserSetFixedSensitivity(float Value);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.UserSetDisAccSensitivity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51678
	// Params: [ Num(1) Size(0x4) ]
	void UserSetDisAccSensitivity(float Value);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SwitchInputMode
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51c60
	// Params: [ Num(1) Size(0x4) ]
	void SwitchInputMode(int32_t ModeNum);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.ShowGamepad
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51d08
	// Params: [ Num(1) Size(0x1) ]
	void ShowGamepad(bool bShowGamepad);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetTestMobileInputScale
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51870
	// Params: [ Num(1) Size(0x4) ]
	void SetTestMobileInputScale(float Value);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetSimulateMultiRoatationInputDelay
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51078
	// Params: [ Num(1) Size(0x4) ]
	void SetSimulateMultiRoatationInputDelay(float Delay);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetSensitivityMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f517c8
	// Params: [ Num(1) Size(0x1) ]
	void SetSensitivityMode(ERotateSensitivityMode Mode);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetMovementEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97b4d98
	// Params: [ Num(1) Size(0x1) ]
	void SetMovementEnable(bool bEnable);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetMovementButtonUnfixed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95a77c4
	// Params: [ Num(0) Size(0x0) ]
	void SetMovementButtonUnfixed();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetMovementButtonFixed
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f51ab8
	// Params: [ Num(2) Size(0x10) ]
	void SetMovementButtonFixed(struct FVector2D position, struct FVector2D Size);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetInputMagicMin
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51250
	// Params: [ Num(2) Size(0x8) ]
	void SetInputMagicMin(float x1, float x2);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetInputMagicMax
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f5111c
	// Params: [ Num(3) Size(0xC) ]
	void SetInputMagicMax(float x1, float x2, float X3);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetInputInterpSpeed
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f513e4
	// Params: [ Num(1) Size(0x4) ]
	void SetInputInterpSpeed(float Speed);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetInputBlendOP
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f5152c
	// Params: [ Num(1) Size(0x4) ]
	void SetInputBlendOP(int32_t Type);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetInputBlendFactor
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51340
	// Params: [ Num(1) Size(0x4) ]
	void SetInputBlendFactor(float Value);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetInputAcceptOP
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51488
	// Params: [ Num(1) Size(0x4) ]
	void SetInputAcceptOP(int32_t Type);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetFingerIndexIgnore
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9baf148
	// Params: [ Num(2) Size(0x2) ]
	void SetFingerIndexIgnore(uint8_t FingerIndex, bool bIgnore);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetFingerIndexDisableMoveAndRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f519c8
	// Params: [ Num(2) Size(0x2) ]
	void SetFingerIndexDisableMoveAndRotate(uint8_t FingerIndex, bool bDisable);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetExchangeMoveAndRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f520a4
	// Params: [ Num(1) Size(0x1) ]
	void SetExchangeMoveAndRotate(bool bExchange);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.SetDisableMoveAndRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95900f8
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableMoveAndRotate(bool bDisable);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.ResetMovementButton
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f52490
	// Params: [ Num(2) Size(0x10) ]
	void ResetMovementButton(struct FVector2D InAbsSize, struct FVector2D InAbsPostion);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.RemoveFingerIndexFullScreenRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9baf238
	// Params: [ Num(1) Size(0x1) ]
	void RemoveFingerIndexFullScreenRotate(uint8_t FingerIndex);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.OnGamePadClassSoftLoadCompleted
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x4f50f6c
	// Params: [ Num(1) Size(0x18) ]
	void OnGamePadClassSoftLoadCompleted(struct FSoftObjectPath Path);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.MobileInputShowLog
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4f51bb4
	// Params: [ Num(1) Size(0x1) ]
	void MobileInputShowLog(bool MobileInputShowLog);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.IsFingerIndexFullScreenRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51914
	// Params: [ Num(2) Size(0x2) ]
	bool IsFingerIndexFullScreenRotate(uint8_t FingerIndex);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.InMovementArea
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x4f52598
	// Params: [ Num(2) Size(0x9) ]
	bool InMovementArea(const struct FVector2D& Pos);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetRefRotationInputData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f52258
	// Params: [ Num(1) Size(0x54) ]
	void GetRefRotationInputData(struct FMobileInputData& Data);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetRefMovementInputData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f52324
	// Params: [ Num(1) Size(0x54) ]
	void GetRefMovementInputData(struct FMobileInputData& Data);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetRealAccelY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51dd4
	// Params: [ Num(1) Size(0x4) ]
	float GetRealAccelY();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetRealAccelX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51e08
	// Params: [ Num(1) Size(0x4) ]
	float GetRealAccelX();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetRealAccel
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f51e3c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetRealAccel();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetPointIndexInputData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f51f8c
	// Params: [ Num(3) Size(0x59) ]
	bool GetPointIndexInputData(int32_t PointIndex, struct FMobileInputData& PointIndexInputData);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputFingerIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x6bf0154
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMovementInputFingerIndex();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_Location
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f52154
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMovementInputData_Location();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_DeltaY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f521bc
	// Params: [ Num(1) Size(0x4) ]
	float GetMovementInputData_DeltaY();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_DeltaX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f521f0
	// Params: [ Num(1) Size(0x4) ]
	float GetMovementInputData_DeltaX();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_Delta
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f52224
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMovementInputData_Delta();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_BeginLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f52188
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMovementInputData_BeginLocation();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f523f0
	// Params: [ Num(1) Size(0x54) ]
	struct FMobileInputData GetMovementInputData();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMovementInputAngleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x6e653e0
	// Params: [ Num(1) Size(0x4) ]
	float GetMovementInputAngleX();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMoveHandleType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f5245c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetMoveHandleType();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetMobileInputDataListLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51db8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMobileInputDataListLength();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetLastRotationVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f51e70
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetLastRotationVector();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetLastRotationInput
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f51ea4
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetLastRotationInput();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.GetInputModeNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51b98
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInputModeNum();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.ClearInputFlags
	// Flags: [Final|Native|Public]
	// Offset: 0x4f52570
	// Params: [ Num(0) Size(0x0) ]
	void ClearInputFlags();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.ClearAllInput
	// Flags: [Final|Native|Public]
	// Offset: 0x4f52584
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllInput();

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.CheckPointIndexHasInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f51ed8
	// Params: [ Num(2) Size(0x5) ]
	bool CheckPointIndexHasInput(int32_t PointIndex);

	// Object: Function MFMobileJoystick.MFMobilePlayerInput.AddFingerIndexFullScreenRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f3bed8
	// Params: [ Num(1) Size(0x1) ]
	void AddFingerIndexFullScreenRotate(uint8_t FingerIndex);
};

// Object: Class MFMobileJoystick.MFMobilePlayerInputStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFMobilePlayerInputStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFMobilePlayerInputStatics, "MFMobilePlayerInputStatics")

	// Object: Function MFMobileJoystick.MFMobilePlayerInputStatics.SimulateStartTouch
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f52954
	// Params: [ Num(3) Size(0x18) ]
	static void SimulateStartTouch(struct UObject* WorldContextObject, int32_t TouchIndex, struct FVector Location);

	// Object: Function MFMobileJoystick.MFMobilePlayerInputStatics.SimulateEndTouch
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f5283c
	// Params: [ Num(3) Size(0x18) ]
	static void SimulateEndTouch(struct UObject* WorldContextObject, int32_t TouchIndex, struct FVector Location);

	// Object: Function MFMobileJoystick.MFMobilePlayerInputStatics.HaveRotatorInput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f526f8
	// Params: [ Num(2) Size(0x9) ]
	static bool HaveRotatorInput(struct UObject* WorldContextObject);

	// Object: Function MFMobileJoystick.MFMobilePlayerInputStatics.ClearAllInput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f527a4
	// Params: [ Num(1) Size(0x8) ]
	static void ClearAllInput(struct UObject* WorldContextObject);
};

// Object: Class MFMobileJoystick.MFPCPlayerInput
// Size: 0x5D0 (Inherited: 0x590)
struct UMFPCPlayerInput : USGPlayerInput
{
	DEFINE_UE_CLASS_HELPERS(UMFPCPlayerInput, "MFPCPlayerInput")

	struct UMFMobileGamePad* Gamepad; // 0x590(0x8)
	struct TSoftClassPtr<struct UObject*> GamePadClassSoft; // 0x598(0x28)
	uint8_t Pad_0x5C0[0x10]; // 0x5C0(0x10)

	// Object: Function MFMobileJoystick.MFPCPlayerInput.OnGamePadClassSoftLoadCompleted
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x4f52afc
	// Params: [ Num(1) Size(0x18) ]
	void OnGamePadClassSoftLoadCompleted(struct FSoftObjectPath Path);
};

} // namespace SDK
