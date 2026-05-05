#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BetterSpline
// Enums: 1
// Structs: 3
// Classes: 2

struct FParamSplineCurves;
struct FParamSplineInstanceData;
struct FParamSplinePointParameter;
struct UBetterSplineSettings;
struct UParamSplineComponent;

// Object: Enum BetterSpline.EParamCurveMode
enum class EParamCurveMode : uint8_t
{
	None = 0,
	Curve = 1,
	Linear = 2,
	Constant = 3,
	EParamCurveMode_MAX = 4
};

// Object: ScriptStruct BetterSpline.ParamSplineCurves
// Size: 0xC8 (Inherited: 0x0)
struct FParamSplineCurves
{
	struct FInterpCurveFloat Width; // 0x0(0x18)
	struct FInterpCurveFloat Depth; // 0x18(0x18)
	struct FInterpCurveFloat WidthFalloff; // 0x30(0x18)
	struct FInterpCurveFloat LeftWidth; // 0x48(0x18)
	struct FInterpCurveFloat LeftWidthFalloff; // 0x60(0x18)
	struct TMap<struct FString, struct FInterpCurveFloat> CustomProperties; // 0x78(0x50)
};

// Object: ScriptStruct BetterSpline.ParamSplineInstanceData
// Size: 0x318 (Inherited: 0x188)
struct FParamSplineInstanceData : FSplineInstanceData
{
	struct FParamSplineCurves ParamSplineCurves; // 0x188(0xC8)
	struct FParamSplineCurves ParamSplineCurvesPreUCS; // 0x250(0xC8)
};

// Object: ScriptStruct BetterSpline.ParamSplinePointParameter
// Size: 0x60 (Inherited: 0x0)
struct FParamSplinePointParameter
{
	float Width; // 0x0(0x4)
	float Depth; // 0x4(0x4)
	float WidthFalloff; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<struct FString, float> CustomProperties; // 0x10(0x50)
};

// Object: Class BetterSpline.BetterSplineSettings
// Size: 0x40 (Inherited: 0x38)
struct UBetterSplineSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UBetterSplineSettings, "BetterSplineSettings")

	uint8_t bHideSubHandles : 1; // 0x38(0x1), Mask(0x1)
	uint8_t bShowParamSplineWhenEditingLandscape : 1; // 0x38(0x1), Mask(0x2)
	uint8_t bShowParamSplineOnlyWithPCGTool : 1; // 0x38(0x1), Mask(0x4)
	uint8_t BitPad_0x38_3 : 5; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: Class BetterSpline.ParamSplineComponent
// Size: 0x8B0 (Inherited: 0x670)
struct UParamSplineComponent : USplineComponent
{
	DEFINE_UE_CLASS_HELPERS(UParamSplineComponent, "ParamSplineComponent")

	struct TMap<struct FString, float> SplineParameters; // 0x668(0x50)
	struct TMap<struct FString, struct FString> SplineStringParameters; // 0x6B8(0x50)
	struct TMap<struct FString, uint8_t> SplineBooleanParameters; // 0x708(0x50)
	struct FParamSplineCurves ParamSplineCurves; // 0x758(0xC8)
	struct FParamSplinePointParameter DefaultSplinePointParameter; // 0x820(0x60)
	struct TArray<struct FString> ReplaceSections; // 0x880(0x10)
	uint8_t bHasWidth : 1; // 0x890(0x1), Mask(0x1)
	uint8_t bHasDepth : 1; // 0x891(0x1), Mask(0x1)
	uint8_t bHasWidthFalloff : 1; // 0x892(0x1), Mask(0x1)
	uint8_t bAsymmetricWidth : 1; // 0x893(0x1), Mask(0x1)
	uint8_t bAsymmetricWidthFalloff : 1; // 0x894(0x1), Mask(0x1)
	uint8_t bHasReplaceSection : 1; // 0x895(0x1), Mask(0x1)
	uint8_t bAutoSnap : 1; // 0x896(0x1), Mask(0x1)
	float SnapDistance; // 0x898(0x4)
	float DebugMeshGridSize; // 0x89C(0x4)
	float SplineResolution; // 0x8A0(0x4)
	EParamCurveMode ForceSplineType; // 0x8A4(0x1)
	uint8_t BitPad_0x8A5_7 : 1; // 0x8A5(0x1)
	uint8_t Pad_0x8A6[0xA]; // 0x8A6(0xA)
};

} // namespace SDK
