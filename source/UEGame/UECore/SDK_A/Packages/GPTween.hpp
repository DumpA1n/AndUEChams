#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPTween
// Enums: 1
// Structs: 0
// Classes: 5

struct UCurveFloat;
struct UWidget;
struct UGPTweenBase;
struct UGPTweenFloat;
struct AGPTweenUpdateManager;
struct UGPTweenVector3D;
struct UGPTweenWidget;

// Object: Enum GPTween.EaseType
enum class EaseType : uint8_t
{
	Linear = 0,
	InSine = 1,
	InQuad = 2,
	InCubic = 3,
	InQuart = 4,
	InQuint = 5,
	InExpo = 6,
	InCirc = 7,
	InElastic = 8,
	InBack = 9,
	InBounce = 10,
	OutQuad = 31,
	OutSine = 32,
	OutCubic = 33,
	OutQuart = 34,
	OutQuint = 35,
	OutExpo = 36,
	OutCirc = 37,
	OutElastic = 38,
	OutBack = 39,
	OutBounce = 40,
	InOutQuad = 61,
	InOutSine = 62,
	InOutCubic = 63,
	InOutQuart = 64,
	InOutQuint = 65,
	InOutExpo = 66,
	InOutCirc = 67,
	InOutElastic = 68,
	InOutBack = 69,
	InOutBounce = 70,
	EaseType_MAX = 71
};

// Object: Class GPTween.GPTweenBase
// Size: 0x48 (Inherited: 0x30)
struct UGPTweenBase : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UGPTweenBase, "GPTweenBase")

	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
};

// Object: Class GPTween.GPTweenFloat
// Size: 0x80 (Inherited: 0x48)
struct UGPTweenFloat : UGPTweenBase
{
	DEFINE_UE_CLASS_HELPERS(UGPTweenFloat, "GPTweenFloat")

	struct FMulticastInlineDelegate OnFirst; // 0x48(0x10)
	struct FMulticastInlineDelegate OnUpdate; // 0x58(0x10)
	struct FMulticastInlineDelegate OnComplete; // 0x68(0x10)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)

	// Object: Function GPTween.GPTweenFloat.MakeFloatDamperImplicitVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x839dd64
	// Params: [ Num(6) Size(0x24) ]
	static struct FVector2D MakeFloatDamperImplicitVector2D(struct FVector2D& InCurrentValue, struct FVector2D& InTargetValue, float HalfLife, float InDeltaTime, float eps);

	// Object: Function GPTween.GPTweenFloat.MakeFloatDamperImplicit
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x839dbac
	// Params: [ Num(6) Size(0x18) ]
	static float MakeFloatDamperImplicit(float& InCurrentValue, float& InTargetValue, float HalfLife, float InDeltaTime, float eps);

	// Object: Function GPTween.GPTweenFloat.MakeFloatCalculateLerpValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x839da1c
	// Params: [ Num(6) Size(0x18) ]
	static float MakeFloatCalculateLerpValue(float Curtime, float TotalTime, float InStartValue, float InEndValue, EaseType InEaseType);

	// Object: Function GPTween.GPTweenFloat.MakeFloatByCurve
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x839d7f4
	// Params: [ Num(7) Size(0x38) ]
	static struct UGPTweenFloat* MakeFloatByCurve(struct FString TweenName, float DurTime, float Start, float End, struct UCurveFloat* Curve, uint8_t IsLoop);

	// Object: Function GPTween.GPTweenFloat.MakeFloat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x839d5cc
	// Params: [ Num(7) Size(0x28) ]
	static struct UGPTweenFloat* MakeFloat(struct FString TweenName, float DurTime, float Start, float End, EaseType EaseType, uint8_t IsLoop);
};

// Object: Class GPTween.GPTweenUpdateManager
// Size: 0x370 (Inherited: 0x370)
struct AGPTweenUpdateManager : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPTweenUpdateManager, "GPTweenUpdateManager")
};

// Object: Class GPTween.GPTweenVector3D
// Size: 0x90 (Inherited: 0x48)
struct UGPTweenVector3D : UGPTweenBase
{
	DEFINE_UE_CLASS_HELPERS(UGPTweenVector3D, "GPTweenVector3D")

	struct FMulticastInlineDelegate OnFirst; // 0x48(0x10)
	struct FMulticastInlineDelegate OnUpdate; // 0x58(0x10)
	struct FMulticastInlineDelegate OnComplete; // 0x68(0x10)
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)

	// Object: Function GPTween.GPTweenVector3D.MakeVector3DByCurve
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x839e21c
	// Params: [ Num(7) Size(0x48) ]
	static struct UGPTweenVector3D* MakeVector3DByCurve(struct FString TweenName, float DurTime, struct FVector Start, struct FVector End, struct UCurveFloat* Curve, uint8_t IsLoop);

	// Object: Function GPTween.GPTweenVector3D.MakeVector3D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x839dff0
	// Params: [ Num(7) Size(0x38) ]
	static struct UGPTweenVector3D* MakeVector3D(struct FString TweenName, float DurTime, struct FVector Start, struct FVector End, EaseType EaseType, uint8_t IsLoop);
};

// Object: Class GPTween.GPTweenWidget
// Size: 0xB8 (Inherited: 0x48)
struct UGPTweenWidget : UGPTweenBase
{
	DEFINE_UE_CLASS_HELPERS(UGPTweenWidget, "GPTweenWidget")

	struct FMulticastInlineDelegate OnFirst; // 0x48(0x10)
	struct FMulticastInlineDelegate OnUpdate; // 0x58(0x10)
	struct FMulticastInlineDelegate OnComplete; // 0x68(0x10)
	uint8_t Pad_0x78[0x40]; // 0x78(0x40)

	// Object: Function GPTween.GPTweenWidget.MakeLocalScale
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x839ebc8
	// Params: [ Num(8) Size(0x40) ]
	static struct UGPTweenWidget* MakeLocalScale(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D StartScale, struct FVector2D EndScale, EaseType EaseType, uint8_t IsLoop);

	// Object: Function GPTween.GPTweenWidget.MakeLocalMoveByCurve
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x839e9a0
	// Params: [ Num(7) Size(0x40) ]
	static struct UGPTweenWidget* MakeLocalMoveByCurve(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D End, struct UCurveFloat* Curve, uint8_t IsLoop);

	// Object: Function GPTween.GPTweenWidget.MakeLocalMove
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x839e778
	// Params: [ Num(7) Size(0x38) ]
	static struct UGPTweenWidget* MakeLocalMove(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D End, EaseType EaseType, uint8_t IsLoop);

	// Object: Function GPTween.GPTweenWidget.MakeFade
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x839e514
	// Params: [ Num(8) Size(0x38) ]
	static struct UGPTweenWidget* MakeFade(struct FString TweenName, float DurTime, struct UWidget* UI, float StartOpacityValue, float EndOpacityValue, EaseType EaseType, uint8_t IsLoop);
};

} // namespace SDK
