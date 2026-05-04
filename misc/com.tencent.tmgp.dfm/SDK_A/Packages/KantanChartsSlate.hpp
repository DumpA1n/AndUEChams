#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: KantanChartsSlate
// Enums: 7
// Structs: 10
// Classes: 5

struct UTexture2D;
struct FCartesianAxisInstanceConfig;
struct FCartesianAxisConfig;
struct FKantanChartStyle;
struct FKantanBarChartStyle;
struct FKantanCartesianChartStyle;
struct FCartesianRangeBound;
struct FCartesianAxisRange;
struct FKantanCartesianPlotScale;
struct FKantanCategoryStyle;
struct FKantanSeriesStyle;
struct UKantanBarChartWidgetStyle;
struct UKantanCartesianChartWidgetStyle;
struct UKantanCategoryStyleSet;
struct UKantanPointStyle;
struct UKantanSeriesStyleSet;

// Object: Enum KantanChartsSlate.EChartAxisPosition
enum class EChartAxisPosition : uint8_t
{
	LeftBottom = 0,
	RightTop = 1,
	Floating = 2,
	EChartAxisPosition_MAX = 3
};

// Object: Enum KantanChartsSlate.EKantanDataPointSize
enum class EKantanDataPointSize : uint8_t
{
	Small = 0,
	Medium = 1,
	Large = 2,
	EKantanDataPointSize_MAX = 3
};

// Object: Enum KantanChartsSlate.ECartesianRangeBoundType
enum class ECartesianRangeBoundType : uint8_t
{
	FixedValue = 0,
	FitToData = 1,
	FitToDataRounded = 2,
	ECartesianRangeBoundType_MAX = 3
};

// Object: Enum KantanChartsSlate.ECartesianScalingType
enum class ECartesianScalingType : uint8_t
{
	FixedScale = 0,
	FixedRange = 1,
	ECartesianScalingType_MAX = 2
};

// Object: Enum KantanChartsSlate.EKantanBarValueExtents
enum class EKantanBarValueExtents : uint8_t
{
	NoValueLines = 0,
	ZeroLineOnly = 1,
	ZeroAndMaxLines = 2,
	EKantanBarValueExtents_MAX = 3
};

// Object: Enum KantanChartsSlate.EKantanBarLabelPosition
enum class EKantanBarLabelPosition : uint8_t
{
	NoLabels = 0,
	Standard = 1,
	Overlaid = 2,
	EKantanBarLabelPosition_MAX = 3
};

// Object: Enum KantanChartsSlate.EKantanBarChartOrientation
enum class EKantanBarChartOrientation : uint8_t
{
	Vertical = 0,
	Horizontal = 1,
	EKantanBarChartOrientation_MAX = 2
};

// Object: ScriptStruct KantanChartsSlate.CartesianAxisInstanceConfig
// Size: 0x4 (Inherited: 0x0)
struct FCartesianAxisInstanceConfig
{
	uint8_t bEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bShowTitle : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bShowMarkers : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bShowLabels : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
};

// Object: ScriptStruct KantanChartsSlate.CartesianAxisConfig
// Size: 0x48 (Inherited: 0x0)
struct FCartesianAxisConfig
{
	struct FText Title; // 0x0(0x18)
	struct FText Unit; // 0x18(0x18)
	float MarkerSpacing; // 0x30(0x4)
	int32_t MaxValueDigits; // 0x34(0x4)
	struct FCartesianAxisInstanceConfig LeftBottomAxis; // 0x38(0x4)
	struct FCartesianAxisInstanceConfig RightTopAxis; // 0x3C(0x4)
	struct FCartesianAxisInstanceConfig FloatingAxis; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct KantanChartsSlate.KantanChartStyle
// Size: 0x128 (Inherited: 0x8)
struct FKantanChartStyle : FSlateWidgetStyle
{
	struct FSlateBrush Background; // 0x8(0x90)
	struct FLinearColor ChartLineColor; // 0x98(0x10)
	float ChartLineThickness; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct FSlateFontInfo BaseFont; // 0xB0(0x58)
	int32_t TitleFontSize; // 0x108(0x4)
	int32_t AxisDescriptionFontSize; // 0x10C(0x4)
	int32_t AxisValueFontSize; // 0x110(0x4)
	struct FLinearColor FontColor; // 0x114(0x10)
	uint8_t Pad_0x124[0x4]; // 0x124(0x4)
};

// Object: ScriptStruct KantanChartsSlate.KantanBarChartStyle
// Size: 0x130 (Inherited: 0x128)
struct FKantanBarChartStyle : FKantanChartStyle
{
	float BarOpacity; // 0x124(0x4)
	float BarOutlineOpacity; // 0x128(0x4)
	float BarOutlineThickness; // 0x12C(0x4)
};

// Object: ScriptStruct KantanChartsSlate.KantanCartesianChartStyle
// Size: 0x130 (Inherited: 0x128)
struct FKantanCartesianChartStyle : FKantanChartStyle
{
	float DataOpacity; // 0x124(0x4)
	float DataLineThickness; // 0x128(0x4)
};

// Object: ScriptStruct KantanChartsSlate.CartesianRangeBound
// Size: 0x8 (Inherited: 0x0)
struct FCartesianRangeBound
{
	ECartesianRangeBoundType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FixedBoundValue; // 0x4(0x4)
};

// Object: ScriptStruct KantanChartsSlate.CartesianAxisRange
// Size: 0x8 (Inherited: 0x0)
struct FCartesianAxisRange
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// Object: ScriptStruct KantanChartsSlate.KantanCartesianPlotScale
// Size: 0x24 (Inherited: 0x0)
struct FKantanCartesianPlotScale
{
	ECartesianScalingType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector2D Scale; // 0x4(0x8)
	struct FVector2D FocalCoordinates; // 0xC(0x8)
	struct FCartesianAxisRange RangeX; // 0x14(0x8)
	struct FCartesianAxisRange RangeY; // 0x1C(0x8)
};

// Object: ScriptStruct KantanChartsSlate.KantanCategoryStyle
// Size: 0x18 (Inherited: 0x0)
struct FKantanCategoryStyle
{
	struct FName CategoryStyleId; // 0x0(0x8)
	struct FLinearColor Color; // 0x8(0x10)
};

// Object: ScriptStruct KantanChartsSlate.KantanSeriesStyle
// Size: 0x20 (Inherited: 0x0)
struct FKantanSeriesStyle
{
	struct FName StyleId; // 0x0(0x8)
	struct UKantanPointStyle* PointStyle; // 0x8(0x8)
	struct FLinearColor Color; // 0x10(0x10)
};

// Object: Class KantanChartsSlate.KantanBarChartWidgetStyle
// Size: 0x160 (Inherited: 0x30)
struct UKantanBarChartWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FKantanBarChartStyle ChartStyle; // 0x30(0x130)
	DEFINE_UE_CLASS_HELPERS(UKantanBarChartWidgetStyle, "KantanBarChartWidgetStyle")

};

// Object: Class KantanChartsSlate.KantanCartesianChartWidgetStyle
// Size: 0x160 (Inherited: 0x30)
struct UKantanCartesianChartWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FKantanCartesianChartStyle ChartStyle; // 0x30(0x130)
	DEFINE_UE_CLASS_HELPERS(UKantanCartesianChartWidgetStyle, "KantanCartesianChartWidgetStyle")

};

// Object: Class KantanChartsSlate.KantanCategoryStyleSet
// Size: 0x40 (Inherited: 0x30)
struct UKantanCategoryStyleSet : UDataAsset
{
	struct TArray<struct FKantanCategoryStyle> Styles; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UKantanCategoryStyleSet, "KantanCategoryStyleSet")

};

// Object: Class KantanChartsSlate.KantanPointStyle
// Size: 0x50 (Inherited: 0x30)
struct UKantanPointStyle : UDataAsset
{
	struct UTexture2D* DataPointTexture; // 0x30(0x8)
	struct FIntPoint PointSizeTextureOffsets[0x3]; // 0x38(0x18)
	DEFINE_UE_CLASS_HELPERS(UKantanPointStyle, "KantanPointStyle")

};

// Object: Class KantanChartsSlate.KantanSeriesStyleSet
// Size: 0x40 (Inherited: 0x30)
struct UKantanSeriesStyleSet : UDataAsset
{
	struct TArray<struct FKantanSeriesStyle> Styles; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UKantanSeriesStyleSet, "KantanSeriesStyleSet")

};

} // namespace SDK
