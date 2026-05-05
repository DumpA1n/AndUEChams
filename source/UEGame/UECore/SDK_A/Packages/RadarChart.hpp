#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: RadarChart
// Enums: 4
// Structs: 10
// Classes: 3

enum class EButtonClickMethod : uint8_t;
enum class EButtonPressMethod : uint8_t;
enum class EButtonTouchMethod : uint8_t;
enum class EEasingFunc : uint8_t;
enum class EHorizontalAlignment : uint8_t;
enum class EOrientation : uint8_t;
struct UTexture;
struct FRadarChartEvent;
struct FRadarChartButtonInteraction;
struct FRadarChartColorOverride;
struct FRadarChartButtonStyle;
struct FRadarChartAppearance;
struct FRadarChartSegmentLayout;
struct FRadarChartStyle;
struct FRadarChartSegment;
struct FRadarChartValueText;
struct FRadarChartValueLayer;
struct URadarChart;
struct URadarChartSetValuesAnimated;
struct URadarChartSetNormalizationScaleAnimated;

// Object: Enum RadarChart.ERadarChartEventSource
enum class ERadarChartEventSource : uint8_t
{
	BaseLabel = 0,
	BasePin = 1,
	ValueLabel = 2,
	ValuePin = 3,
	ERadarChartEventSource_MAX = 4
};

// Object: Enum RadarChart.ERadarChartBlendMode
enum class ERadarChartBlendMode : uint8_t
{
	Opaque = 0,
	Translucent = 1,
	Additive = 2,
	ERadarChartBlendMode_MAX = 3
};

// Object: Enum RadarChart.ERadarChartColorOverride
enum class ERadarChartColorOverride : uint8_t
{
	None = 0,
	Multiply = 1,
	Override = 2,
	OverrideAlphaOnly = 3,
	OverrideHue = 4,
	OverrideHueAndAlpha = 5,
	Desaturate = 6,
	DesaturateAndAlpha = 7,
	ERadarChartColorOverride_MAX = 8
};

// Object: Enum RadarChart.ERadarChartValueDisplay
enum class ERadarChartValueDisplay : uint8_t
{
	Disabled = 0,
	Normal = 1,
	Snap = 2,
	ERadarChartValueDisplay_MAX = 3
};

// Object: ScriptStruct RadarChart.RadarChartEvent
// Size: 0xC (Inherited: 0x0)
struct FRadarChartEvent
{
	ERadarChartEventSource Source; // 0x0(0x1)
	uint8_t ValueLayerIndex; // 0x1(0x1)
	uint8_t ValueIndex; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FVector2D ScreenSpacePosition; // 0x4(0x8)
};

// Object: ScriptStruct RadarChart.RadarChartButtonInteraction
// Size: 0x4 (Inherited: 0x0)
struct FRadarChartButtonInteraction
{
	uint8_t bHoverable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bPressable : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bClickable : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	EButtonClickMethod ClickMethod; // 0x1(0x1)
	EButtonTouchMethod TouchMethod; // 0x2(0x1)
	EButtonPressMethod PressMethod; // 0x3(0x1)
};

// Object: ScriptStruct RadarChart.RadarChartColorOverride
// Size: 0x14 (Inherited: 0x0)
struct FRadarChartColorOverride
{
	ERadarChartColorOverride Method; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FLinearColor Color; // 0x4(0x10)
};

// Object: ScriptStruct RadarChart.RadarChartButtonStyle
// Size: 0x2C0 (Inherited: 0x298)
struct FRadarChartButtonStyle : FButtonStyle
{
	struct FRadarChartColorOverride Color; // 0x298(0x14)
	float Distance; // 0x2AC(0x4)
	float Angle; // 0x2B0(0x4)
	uint8_t bAlign : 1; // 0x2B4(0x1), Mask(0x1)
	uint8_t BitPad_0x2B4_1 : 7; // 0x2B4(0x1)
	struct FRadarChartButtonInteraction Interaction; // 0x2B5(0x4)
	uint8_t Pad_0x2B9[0x3]; // 0x2B9(0x3)
	int32_t ZOrderOffset; // 0x2BC(0x4)
};

// Object: ScriptStruct RadarChart.RadarChartAppearance
// Size: 0x3C0 (Inherited: 0x0)
struct FRadarChartAppearance
{
	uint8_t Pad_0x0[0xB8]; // 0x0(0xB8)
	uint8_t bShowShape : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t bConcentricUVs : 1; // 0xB8(0x1), Mask(0x2)
	uint8_t bShowOutline : 1; // 0xB8(0x1), Mask(0x4)
	uint8_t bShowPins : 1; // 0xB8(0x1), Mask(0x8)
	uint8_t bMultiplyTextureAlpha : 1; // 0xB8(0x1), Mask(0x10)
	uint8_t BitPad_0xB8_5 : 3; // 0xB8(0x1)
	ERadarChartBlendMode BlendMode; // 0xB9(0x1)
	uint8_t Pad_0xBA[0x2]; // 0xBA(0x2)
	struct FRadarChartColorOverride ShapeColor; // 0xBC(0x14)
	struct UTexture* ShapeTexture; // 0xD0(0x8)
	struct FVector2D TextureScale; // 0xD8(0x8)
	float Angle; // 0xE0(0x4)
	struct FVector2D Panner; // 0xE4(0x8)
	struct FLinearColor OutlineColor; // 0xEC(0x10)
	float OutlineThickness; // 0xFC(0x4)
	struct FRadarChartButtonStyle Pin; // 0x100(0x2C0)
};

// Object: ScriptStruct RadarChart.RadarChartSegmentLayout
// Size: 0x18 (Inherited: 0x0)
struct FRadarChartSegmentLayout
{
	struct FIntPoint IconColumnRow; // 0x0(0x8)
	struct FIntPoint NameLabelColumnRow; // 0x8(0x8)
	struct FIntPoint ValueLabelColumnRow; // 0x10(0x8)
};

// Object: ScriptStruct RadarChart.RadarChartStyle
// Size: 0x930 (Inherited: 0x0)
struct FRadarChartStyle
{
	float NormalizationScale; // 0x0(0x4)
	uint8_t bShowIcons : 1; // 0x4(0x1), Mask(0x1)
	uint8_t bShowNameLabel : 1; // 0x4(0x1), Mask(0x2)
	uint8_t bShowCuts : 1; // 0x4(0x1), Mask(0x4)
	uint8_t bPositionUnitsBetweenCuts : 1; // 0x4(0x1), Mask(0x8)
	uint8_t bHideZeroUnit : 1; // 0x4(0x1), Mask(0x10)
	uint8_t bHideLastUnit : 1; // 0x4(0x1), Mask(0x20)
	uint8_t bAlwaysUprightIcon : 1; // 0x4(0x1), Mask(0x40)
	uint8_t bAlwaysUprightName : 1; // 0x4(0x1), Mask(0x80)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float ChartRadius; // 0x8(0x4)
	float StartAngle; // 0xC(0x4)
	struct FRadarChartAppearance Appearance; // 0x10(0x3C0)
	struct TArray<struct FRadarChartSegment> Segments; // 0x3D0(0x10)
	struct FLinearColor CutsColor; // 0x3E0(0x10)
	float CutsThickness; // 0x3F0(0x4)
	int32_t CutsZOrderOffset; // 0x3F4(0x4)
	uint8_t DividersCount; // 0x3F8(0x1)
	uint8_t Pad_0x3F9[0x3]; // 0x3F9(0x3)
	struct FLinearColor DividersColor; // 0x3FC(0x10)
	float DividersThickness; // 0x40C(0x4)
	int32_t DividerZOrderOffset; // 0x410(0x4)
	uint8_t Units; // 0x414(0x1)
	uint8_t ShowEveryNUnit; // 0x415(0x1)
	uint8_t UnitsSourceSegment; // 0x416(0x1)
	uint8_t Pad_0x417[0x1]; // 0x417(0x1)
	struct FSlateFontInfo UnitsFont; // 0x418(0x58)
	struct FLinearColor UnitsColor; // 0x470(0x10)
	uint8_t UnitsDecimalPlaces; // 0x480(0x1)
	EHorizontalAlignment UnitsAlignment; // 0x481(0x1)
	uint8_t Pad_0x482[0x2]; // 0x482(0x2)
	struct FVector2D UnitsOffset; // 0x484(0x8)
	int32_t UnitsZOrderOffset; // 0x48C(0x4)
	struct FRadarChartButtonStyle LabelButton; // 0x490(0x2C0)
	struct FRadarChartColorOverride IconColor; // 0x750(0x14)
	struct FVector2D IconSize; // 0x764(0x8)
	struct FRadarChartColorOverride NameColor; // 0x76C(0x14)
	struct FSlateFontInfo NameFont; // 0x780(0x58)
	struct FSlateFontInfo ValuesFont; // 0x7D8(0x58)
	struct FSlateBrush ValueSeparator; // 0x830(0x90)
	EOrientation ValueLabelOrientation; // 0x8C0(0x1)
	uint8_t Pad_0x8C1[0x3]; // 0x8C1(0x3)
	struct FRadarChartSegmentLayout DefaultLayout; // 0x8C4(0x18)
	struct FMargin IconPadding; // 0x8DC(0x10)
	struct FMargin NamePadding; // 0x8EC(0x10)
	struct FMargin ValueLabelContainerPadding; // 0x8FC(0x10)
	struct FMargin SeparatorPadding; // 0x90C(0x10)
	float AutoFlipAligned; // 0x91C(0x4)
	float MinNameWidth; // 0x920(0x4)
	float MinValuesWidth; // 0x924(0x4)
	uint8_t ValueLabelDecimalPlaces; // 0x928(0x1)
	uint8_t bUseSimpleTextMode : 1; // 0x929(0x1), Mask(0x1)
	uint8_t bNestedLabelHoverFix : 1; // 0x929(0x1), Mask(0x2)
	uint8_t BitPad_0x929_2 : 6; // 0x929(0x1)
	uint8_t Pad_0x92A[0x6]; // 0x92A(0x6)
};

// Object: ScriptStruct RadarChart.RadarChartSegment
// Size: 0xE8 (Inherited: 0x0)
struct FRadarChartSegment
{
	struct FLinearColor SegmentColor; // 0x0(0x10)
	struct UObject* ICON; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FVector2D offset; // 0x30(0x8)
	uint8_t BitPad_0x38_0 : 1; // 0x38(0x1)
	uint8_t bUseCustomLayout : 1; // 0x38(0x1), Mask(0x2)
	uint8_t BitPad_0x38_2 : 6; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct FRadarChartSegmentLayout CustomLayout; // 0x3C(0x18)
	uint8_t Pad_0x54[0x94]; // 0x54(0x94)
};

// Object: ScriptStruct RadarChart.RadarChartValueText
// Size: 0x2E8 (Inherited: 0x0)
struct FRadarChartValueText
{
	ERadarChartValueDisplay DisplayMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FRadarChartColorOverride Color; // 0x4(0x14)
	struct FVector2D offset; // 0x18(0x8)
	struct FRadarChartButtonStyle Button; // 0x20(0x2C0)
	uint8_t bAlwaysUprightValue : 1; // 0x2E0(0x1), Mask(0x1)
	uint8_t bFlipTextWhenAligned : 1; // 0x2E0(0x1), Mask(0x2)
	uint8_t BitPad_0x2E0_2 : 6; // 0x2E0(0x1)
	uint8_t Pad_0x2E1[0x7]; // 0x2E1(0x7)
};

// Object: ScriptStruct RadarChart.RadarChartValueLayer
// Size: 0x738 (Inherited: 0x0)
struct FRadarChartValueLayer
{
	uint8_t Pad_0x0[0x68]; // 0x0(0x68)
	struct TArray<float> RawValues; // 0x68(0x10)
	struct TArray<float> NormalizedValues; // 0x78(0x10)
	struct FRadarChartAppearance Appearance; // 0x88(0x3C0)
	struct FRadarChartValueText TextSettings; // 0x448(0x2E8)
	uint8_t bEnablePinSliding : 1; // 0x730(0x1), Mask(0x1)
	uint8_t BitPad_0x730_1 : 7; // 0x730(0x1)
	uint8_t Pad_0x731[0x3]; // 0x731(0x3)
	float PinSlidingSteps; // 0x734(0x4)
};

// Object: Class RadarChart.RadarChart
// Size: 0xB20 (Inherited: 0x158)
struct URadarChart : UWidget
{
	DEFINE_UE_CLASS_HELPERS(URadarChart, "RadarChart")

	struct FRadarChartStyle ChartStyle; // 0x158(0x930)
	struct TArray<struct FRadarChartValueLayer> ValueLayers; // 0xA88(0x10)
	uint8_t bWrapWithInvalidationPanel : 1; // 0xA98(0x1), Mask(0x1)
	uint8_t BitPad_0xA98_1 : 7; // 0xA98(0x1)
	uint8_t Pad_0xA99[0x7]; // 0xA99(0x7)
	struct FMulticastInlineDelegate OnClicked; // 0xAA0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0xAB0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0xAC0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0xAD0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0xAE0(0x10)
	struct FMulticastInlineDelegate OnValueSlide; // 0xAF0(0x10)
	uint8_t Pad_0xB00[0x20]; // 0xB00(0x20)

	// Object: Function RadarChart.RadarChart.SetValuesForLayer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7944220
	// Params: [ Num(2) Size(0x18) ]
	void SetValuesForLayer(uint8_t ValueLayerIndex, const struct TArray<float>& InValues);

	// Object: Function RadarChart.RadarChart.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7944104
	// Params: [ Num(3) Size(0x8) ]
	void SetValue(uint8_t ValueLayerIndex, uint8_t ValueIndex, float Value);

	// Object: Function RadarChart.RadarChart.SetNormalizationScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7944060
	// Params: [ Num(1) Size(0x4) ]
	void SetNormalizationScale(float InValue);

	// Object: Function RadarChart.RadarChart.RefreshValueLayers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x794404c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshValueLayers();

	// Object: Function RadarChart.RadarChart.RefreshBase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7944038
	// Params: [ Num(0) Size(0x0) ]
	void RefreshBase();

	// Object: Function RadarChart.RadarChart.Refresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7944024
	// Params: [ Num(0) Size(0x0) ]
	void Refresh();

	// Object: Function RadarChart.RadarChart.InvalidateMaterial
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7943f20
	// Params: [ Num(1) Size(0x3C0) ]
	void InvalidateMaterial(struct FRadarChartAppearance& InAppearance);

	// Object: Function RadarChart.RadarChart.InvalidateAllMaterials
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7943f0c
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateAllMaterials();

	// Object: Function RadarChart.RadarChart.ForceRebuild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7943ef8
	// Params: [ Num(0) Size(0x0) ]
	void ForceRebuild();
};

// Object: Class RadarChart.RadarChartSetValuesAnimated
// Size: 0x80 (Inherited: 0x30)
struct URadarChartSetValuesAnimated : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(URadarChartSetValuesAnimated, "RadarChartSetValuesAnimated")

	uint8_t Pad_0x30[0x30]; // 0x30(0x30)
	struct FMulticastInlineDelegate OnUpdate; // 0x60(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x70(0x10)

	// Object: Function RadarChart.RadarChartSetValuesAnimated.SetValuesAnimated
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7944800
	// Params: [ Num(7) Size(0x30) ]
	static struct URadarChartSetValuesAnimated* SetValuesAnimated(struct URadarChart* Target, uint8_t ValueLayer, const struct TArray<float>& Values, float Duration, uint8_t FPS, EEasingFunc Ease);
};

// Object: Class RadarChart.RadarChartSetNormalizationScaleAnimated
// Size: 0x78 (Inherited: 0x30)
struct URadarChartSetNormalizationScaleAnimated : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(URadarChartSetNormalizationScaleAnimated, "RadarChartSetNormalizationScaleAnimated")

	uint8_t Pad_0x30[0x28]; // 0x30(0x28)
	struct FMulticastInlineDelegate OnUpdate; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x68(0x10)

	// Object: Function RadarChart.RadarChartSetNormalizationScaleAnimated.SetNormalizationScaleAnimated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x79449f0
	// Params: [ Num(6) Size(0x20) ]
	static struct URadarChartSetNormalizationScaleAnimated* SetNormalizationScaleAnimated(struct URadarChart* Target, float NewScale, float Duration, uint8_t FPS, EEasingFunc Ease);
};

} // namespace SDK
