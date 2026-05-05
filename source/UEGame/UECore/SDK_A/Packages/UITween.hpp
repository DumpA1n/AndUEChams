#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: UITween
// Enums: 2
// Structs: 3
// Classes: 3

struct UButton;
struct FUIAnimation;
struct FUIAnimationTrack;
struct FUIAnimationController;
struct UTestUserWidget;
struct UTweenUserWidget;
struct UUITweenLiteLib;

// Object: Enum UITween.ETweenerPropType
enum class ETweenerPropType : uint8_t
{
	Default = 0,
	RenderTranslation = 1,
	RenderScale = 2,
	RenderShear = 3,
	RenderTransformAngle = 4,
	RenderOpacity = 5,
	BrushMaterial = 6,
	ColorAndOpacity = 7,
	OverrideMaterial = 8,
	ETweenerPropType_MAX = 9
};

// Object: Enum UITween.EUITweenEaseType
enum class EUITweenEaseType : uint8_t
{
	Custom = 0,
	Linear = 1,
	EaseInQuad = 2,
	EaseOutQuad = 3,
	EaseInOutQuad = 4,
	EaseOutInQuad = 5,
	EaseInCubic = 6,
	EaseOutCubic = 7,
	EaseInOutCubic = 8,
	EaseOutInCubic = 9,
	EaseInQuart = 10,
	EaseOutQuart = 11,
	EaseInOutQuart = 12,
	EaseOutInQuart = 13,
	EaseInQuint = 14,
	EaseOutQuint = 15,
	EaseInOutQuint = 16,
	EaseOutInQuint = 17,
	EaseInSine = 18,
	EaseOutSine = 19,
	EaseInOutSine = 20,
	EaseOutInSine = 21,
	EaseInExpo = 22,
	EaseOutExpo = 23,
	EaseInOutExpo = 24,
	EaseOutInExpo = 25,
	EaseInCirc = 26,
	EaseOutCirc = 27,
	EaseInOutCirc = 28,
	EaseOutInCirc = 29,
	EaseInElastic = 30,
	EaseOutElastic = 31,
	EaseInOutElastic = 32,
	EaseOutInElastic = 33,
	EaseInBack = 34,
	EaseOutBack = 35,
	EaseInOutBack = 36,
	EaseOutInBack = 37,
	EaseInBounce = 38,
	EaseOutBounce = 39,
	EaseInOutBounce = 40,
	EaseOutInBounce = 41,
	EUITweenEaseType_MAX = 42
};

// Object: ScriptStruct UITween.UIAnimation
// Size: 0x48 (Inherited: 0x0)
struct FUIAnimation
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FName AnimationName; // 0x8(0x8)
	uint8_t IsLoop : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t IsAutoPlay : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct TArray<struct FUIAnimationTrack> AnimationTracks; // 0x18(0x10)
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: ScriptStruct UITween.UIAnimationTrack
// Size: 0x558 (Inherited: 0x0)
struct FUIAnimationTrack
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FName WidgetName; // 0x8(0x8)
	ETweenerPropType AnimationType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FName ParamKey; // 0x14(0x8)
	float Delay; // 0x1C(0x4)
	EUITweenEaseType Ease; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<uint8_t> EaseTargetVal; // 0x28(0x10)
	struct FRuntimeFloatCurve FloatCurve; // 0x38(0xA0)
	struct FRuntimeVectorCurve VectorCurve; // 0xD8(0x1D0)
	struct FRuntimeCurveLinearColor ColorCurve; // 0x2A8(0x268)
	float Duration; // 0x510(0x4)
	uint8_t IsFrom : 1; // 0x514(0x1), Mask(0x1)
	uint8_t BitPad_0x514_1 : 7; // 0x514(0x1)
	uint8_t Pad_0x515[0x43]; // 0x515(0x43)
};

// Object: ScriptStruct UITween.UIAnimationController
// Size: 0x20 (Inherited: 0x0)
struct FUIAnimationController
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FUIAnimation> Animations; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: Class UITween.TestUserWidget
// Size: 0x320 (Inherited: 0x2F8)
struct UTestUserWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UTestUserWidget, "TestUserWidget")

	struct FUIAnimationController AnimationController; // 0x2F8(0x20)
	struct UButton* BtnPlayAnim; // 0x318(0x8)

	// Object: Function UITween.TestUserWidget.OnBtnClick
	// Flags: [Final|Native|Private]
	// Offset: 0x79bcb7c
	// Params: [ Num(0) Size(0x0) ]
	void OnBtnClick();
};

// Object: Class UITween.TweenUserWidget
// Size: 0x2F8 (Inherited: 0x2F8)
struct UTweenUserWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UTweenUserWidget, "TweenUserWidget")
};

// Object: Class UITween.UITweenLiteLib
// Size: 0x28 (Inherited: 0x28)
struct UUITweenLiteLib : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUITweenLiteLib, "UITweenLiteLib")

	// Object: Function UITween.UITweenLiteLib.StartupTween
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xefb3de0
	// Params: [ Num(0) Size(0x0) ]
	static void StartupTween();

	// Object: Function UITween.UITweenLiteLib.ShutdownTween
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf8cba54
	// Params: [ Num(0) Size(0x0) ]
	static void ShutdownTween();
};

} // namespace SDK
