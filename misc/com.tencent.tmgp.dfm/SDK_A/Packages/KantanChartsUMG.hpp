#pragma once

#include "../CoreUObject_classes.hpp"
#include "KantanChartsSlate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: KantanChartsUMG
// Enums: 0
// Structs: 2
// Classes: 13

enum class EKantanBarChartOrientation : uint8_t;
enum class EKantanBarLabelPosition : uint8_t;
enum class EKantanBarValueExtents : uint8_t;
enum class EKantanDataPointSize : uint8_t;
struct FCartesianAxisConfig;
struct FCartesianAxisRange;
struct FCartesianRangeBound;
struct FMargin;
struct FSlateBrush;
struct UKantanCategoryStyleSet;
struct UKantanPointStyle;
struct UKantanSeriesStyleSet;
struct FSeriesStyleManualMapping;
struct FCategoryStyleManualMapping;
struct UKantanChart;
struct UKantanCategoryChart;
struct UKantanBarChartBase;
struct UBarChart;
struct UKantanCartesianChartBase;
struct UKantanCartesianPlotBase;
struct UCartesianPlot;
struct UKantanChartLegend;
struct UKantanTimeSeriesPlotBase;
struct USimpleBarChart;
struct USimpleCartesianPlot;
struct USimpleTimeSeriesPlot;
struct UTimeSeriesPlot;

// Object: ScriptStruct KantanChartsUMG.SeriesStyleManualMapping
// Size: 0x28 (Inherited: 0x0)
struct FSeriesStyleManualMapping
{
	struct FName SeriesId; // 0x0(0x8)
	struct FKantanSeriesStyle Style; // 0x8(0x20)
};

// Object: ScriptStruct KantanChartsUMG.CategoryStyleManualMapping
// Size: 0x20 (Inherited: 0x0)
struct FCategoryStyleManualMapping
{
	struct FName CategoryId; // 0x0(0x8)
	struct FKantanCategoryStyle Style; // 0x8(0x18)
};

// Object: Class KantanChartsUMG.KantanChart
// Size: 0x1A8 (Inherited: 0x158)
struct UKantanChart : UWidget
{
	struct FMargin Margins; // 0x158(0x10)
	struct FText ChartTitle; // 0x168(0x18)
	struct FMargin TitlePadding; // 0x180(0x10)
	float UpdateTickRate; // 0x190(0x4)
	uint8_t Pad_0x194[0x14]; // 0x194(0x14)


	// Object: Function KantanChartsUMG.KantanChart.SetUpdateTickRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a3a60
	// Params: [ Num(1) Size(0x4) ]
	void SetUpdateTickRate(float InRate);

	// Object: Function KantanChartsUMG.KantanChart.SetMargins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a39ac
	// Params: [ Num(1) Size(0x10) ]
	void SetMargins(const struct FMargin& InMargins);

	// Object: Function KantanChartsUMG.KantanChart.SetChartTitlePadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a38f8
	// Params: [ Num(1) Size(0x10) ]
	void SetChartTitlePadding(const struct FMargin& InPadding);

	// Object: Function KantanChartsUMG.KantanChart.SetChartTitle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a37e8
	// Params: [ Num(1) Size(0x18) ]
	void SetChartTitle(const struct FText& InTitle);
	DEFINE_UE_CLASS_HELPERS(UKantanChart, "KantanChart")

};

// Object: Class KantanChartsUMG.KantanCategoryChart
// Size: 0x1C8 (Inherited: 0x1A8)
struct UKantanCategoryChart : UKantanChart
{
	uint8_t bAutoPerCategoryStyles : 1; // 0x1A8(0x1), Mask(0x1)
	uint8_t BitPad_0x1A8_1 : 7; // 0x1A8(0x1)
	uint8_t Pad_0x1A9[0x7]; // 0x1A9(0x7)
	struct UKantanCategoryStyleSet* CategoryStyleSet; // 0x1B0(0x8)
	struct TArray<struct FCategoryStyleManualMapping> ManualStyleMappings; // 0x1B8(0x10)


	// Object: Function KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x77a36f4
	// Params: [ Num(2) Size(0x18) ]
	void AddCategoryStyleOverride(struct FName CategoryId, struct FLinearColor Color);
	DEFINE_UE_CLASS_HELPERS(UKantanCategoryChart, "KantanCategoryChart")

};

// Object: Class KantanChartsUMG.KantanBarChartBase
// Size: 0x358 (Inherited: 0x1C8)
struct UKantanBarChartBase : UKantanCategoryChart
{
	struct FKantanBarChartStyle WidgetStyle; // 0x1C8(0x130)
	EKantanBarChartOrientation Orientation; // 0x2F8(0x1)
	uint8_t Pad_0x2F9[0x3]; // 0x2F9(0x3)
	float MaxBarValue; // 0x2FC(0x4)
	EKantanBarLabelPosition LabelPosition; // 0x300(0x1)
	uint8_t Pad_0x301[0x3]; // 0x301(0x3)
	float BarToGapRatio; // 0x304(0x4)
	EKantanBarValueExtents ValueExtentsDisplay; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)
	struct FCartesianAxisConfig ValueAxisCfg; // 0x310(0x48)


	// Object: Function KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a290c
	// Params: [ Num(1) Size(0x48) ]
	void SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg);

	// Object: Function KantanChartsUMG.KantanBarChartBase.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a2868
	// Params: [ Num(1) Size(0x1) ]
	void SetOrientation(EKantanBarChartOrientation InOrientation);

	// Object: Function KantanChartsUMG.KantanBarChartBase.SetMaxBarValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a27c4
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxBarValue(float InMaxValue);

	// Object: Function KantanChartsUMG.KantanBarChartBase.SetLabelPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a2720
	// Params: [ Num(1) Size(0x1) ]
	void SetLabelPosition(EKantanBarLabelPosition InPosition);

	// Object: Function KantanChartsUMG.KantanBarChartBase.SetExtentsDisplay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a267c
	// Params: [ Num(1) Size(0x1) ]
	void SetExtentsDisplay(EKantanBarValueExtents InExtents);

	// Object: Function KantanChartsUMG.KantanBarChartBase.SetBarToGapRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a25d8
	// Params: [ Num(1) Size(0x4) ]
	void SetBarToGapRatio(float InRatio);
	DEFINE_UE_CLASS_HELPERS(UKantanBarChartBase, "KantanBarChartBase")

};

// Object: Class KantanChartsUMG.BarChart
// Size: 0x360 (Inherited: 0x358)
struct UBarChart : UKantanBarChartBase
{
	struct UObject* DataSource; // 0x358(0x8)


	// Object: Function KantanChartsUMG.BarChart.SetDatasource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a240c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t SetDatasource(struct UObject* InDatasource);
	DEFINE_UE_CLASS_HELPERS(UBarChart, "BarChart")

};

// Object: Class KantanChartsUMG.KantanCartesianChartBase
// Size: 0x3C0 (Inherited: 0x1A8)
struct UKantanCartesianChartBase : UKantanChart
{
	struct FKantanCartesianChartStyle WidgetStyle; // 0x1A8(0x130)
	struct FKantanCartesianPlotScale PlotScale; // 0x2D8(0x24)
	EKantanDataPointSize DataPointSize; // 0x2FC(0x1)
	uint8_t Pad_0x2FD[0x3]; // 0x2FD(0x3)
	struct FCartesianAxisConfig XAxisCfg; // 0x300(0x48)
	struct FCartesianAxisConfig YAxisCfg; // 0x348(0x48)
	struct FMargin AxisTitlePadding; // 0x390(0x10)
	struct UKantanSeriesStyleSet* SeriesStyleSet; // 0x3A0(0x8)
	struct TArray<struct FSeriesStyleManualMapping> ManualStyleMappings; // 0x3A8(0x10)
	uint8_t bAntiAlias : 1; // 0x3B8(0x1), Mask(0x1)
	uint8_t BitPad_0x3B8_1 : 7; // 0x3B8(0x1)
	uint8_t Pad_0x3B9[0x7]; // 0x3B9(0x7)


	// Object: Function KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a3464
	// Params: [ Num(1) Size(0x48) ]
	void SetYAxisConfig(const struct FCartesianAxisConfig& InCfg);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.SetXAxisConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a32cc
	// Params: [ Num(1) Size(0x48) ]
	void SetXAxisConfig(const struct FCartesianAxisConfig& InCfg);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.SetSeriesStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a31f0
	// Params: [ Num(2) Size(0x10) ]
	void SetSeriesStyle(struct FName ID, struct FName StyleId);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScaleByRange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a30e0
	// Params: [ Num(2) Size(0x10) ]
	void SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScale
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x77a2fe8
	// Params: [ Num(2) Size(0x10) ]
	void SetPlotScale(const struct FVector2D& InScale, const struct FVector2D& InFocalCoords);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.SetDataPointSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a2f44
	// Params: [ Num(1) Size(0x1) ]
	void SetDataPointSize(EKantanDataPointSize InSize);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.SetAxisTitlePadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a2e90
	// Params: [ Num(1) Size(0x10) ]
	void SetAxisTitlePadding(const struct FMargin& InPadding);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.EnableSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a2da8
	// Params: [ Num(2) Size(0x9) ]
	void EnableSeries(struct FName ID, uint8_t bEnable);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.ConfigureSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a2c7c
	// Params: [ Num(3) Size(0xA) ]
	void ConfigureSeries(struct FName ID, uint8_t bDrawPoints, uint8_t bDrawLines);

	// Object: Function KantanChartsUMG.KantanCartesianChartBase.AddSeriesStyleOverride
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x77a2b60
	// Params: [ Num(3) Size(0x20) ]
	void AddSeriesStyleOverride(struct FName SeriesId, struct UKantanPointStyle* PointStyle, struct FLinearColor Color);
	DEFINE_UE_CLASS_HELPERS(UKantanCartesianChartBase, "KantanCartesianChartBase")

};

// Object: Class KantanChartsUMG.KantanCartesianPlotBase
// Size: 0x3C0 (Inherited: 0x3C0)
struct UKantanCartesianPlotBase : UKantanCartesianChartBase
{	DEFINE_UE_CLASS_HELPERS(UKantanCartesianPlotBase, "KantanCartesianPlotBase")

};

// Object: Class KantanChartsUMG.CartesianPlot
// Size: 0x3C8 (Inherited: 0x3C0)
struct UCartesianPlot : UKantanCartesianPlotBase
{
	struct UObject* DataSource; // 0x3C0(0x8)


	// Object: Function KantanChartsUMG.CartesianPlot.SetDatasource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a2514
	// Params: [ Num(2) Size(0x9) ]
	uint8_t SetDatasource(struct UObject* InDatasource);
	DEFINE_UE_CLASS_HELPERS(UCartesianPlot, "CartesianPlot")

};

// Object: Class KantanChartsUMG.KantanChartLegend
// Size: 0x228 (Inherited: 0x158)
struct UKantanChartLegend : UWidget
{
	struct FMargin Margins; // 0x158(0x10)
	struct FMargin SeriesPadding; // 0x168(0x10)
	struct FSlateBrush Background; // 0x178(0x90)
	int32_t FontSize; // 0x208(0x4)
	struct TWeakObjectPtr<struct UKantanCartesianChartBase> Chart; // 0x20C(0x8)
	uint8_t Pad_0x214[0x14]; // 0x214(0x14)


	// Object: Function KantanChartsUMG.KantanChartLegend.SetSeriesPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a3ed0
	// Params: [ Num(1) Size(0x10) ]
	void SetSeriesPadding(const struct FMargin& InPadding);

	// Object: Function KantanChartsUMG.KantanChartLegend.SetMargins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a3e1c
	// Params: [ Num(1) Size(0x10) ]
	void SetMargins(const struct FMargin& InMargins);

	// Object: Function KantanChartsUMG.KantanChartLegend.SetFontSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a3d78
	// Params: [ Num(1) Size(0x4) ]
	void SetFontSize(int32_t InFontSize);

	// Object: Function KantanChartsUMG.KantanChartLegend.SetChart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a3cd4
	// Params: [ Num(1) Size(0x8) ]
	void SetChart(struct UKantanCartesianChartBase* InChart);

	// Object: Function KantanChartsUMG.KantanChartLegend.SetBackground
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a3bc0
	// Params: [ Num(1) Size(0x90) ]
	void SetBackground(const struct FSlateBrush& InBrush);
	DEFINE_UE_CLASS_HELPERS(UKantanChartLegend, "KantanChartLegend")

};

// Object: Class KantanChartsUMG.KantanTimeSeriesPlotBase
// Size: 0x3E8 (Inherited: 0x3C0)
struct UKantanTimeSeriesPlotBase : UKantanCartesianChartBase
{
	uint8_t bUseFixedTimeRange : 1; // 0x3B9(0x1), Mask(0x1)
	float DisplayTimeRange; // 0x3BC(0x4)
	struct FCartesianRangeBound LowerTimeBound; // 0x3C0(0x8)
	struct FCartesianRangeBound UpperTimeBound; // 0x3C8(0x8)
	struct FCartesianRangeBound LowerValueBound; // 0x3D0(0x8)
	struct FCartesianRangeBound UpperValueBound; // 0x3D8(0x8)
	uint8_t bExtendValueRangeToZero : 1; // 0x3E0(0x1), Mask(0x1)
	uint8_t BitPad_0x3E4_2 : 6; // 0x3E4(0x1)
	uint8_t Pad_0x3E5[0x3]; // 0x3E5(0x3)


	// Object: Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetUpperValueBound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a4190
	// Params: [ Num(1) Size(0x8) ]
	void SetUpperValueBound(struct FCartesianRangeBound InUpperBound);

	// Object: Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetUpperTimeBound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a40e4
	// Params: [ Num(1) Size(0x8) ]
	void SetUpperTimeBound(struct FCartesianRangeBound InUpperBound);

	// Object: Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetLowerValueBound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a4038
	// Params: [ Num(1) Size(0x8) ]
	void SetLowerValueBound(struct FCartesianRangeBound InLowerBound);

	// Object: Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetLowerTimeBound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a3f8c
	// Params: [ Num(1) Size(0x8) ]
	void SetLowerTimeBound(struct FCartesianRangeBound InLowerBound);
	DEFINE_UE_CLASS_HELPERS(UKantanTimeSeriesPlotBase, "KantanTimeSeriesPlotBase")

};

// Object: Class KantanChartsUMG.SimpleBarChart
// Size: 0x370 (Inherited: 0x358)
struct USimpleBarChart : UKantanBarChartBase
{
	uint8_t Pad_0x358[0x18]; // 0x358(0x18)


	// Object: Function KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a4734
	// Params: [ Num(3) Size(0xD) ]
	void BP_UpdateCategoryValue(struct FName ID, float Value, uint8_t& bSuccess);

	// Object: Function KantanChartsUMG.SimpleBarChart.BP_RemoveCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a4644
	// Params: [ Num(2) Size(0x9) ]
	void BP_RemoveCategory(struct FName ID, uint8_t& bSuccess);

	// Object: Function KantanChartsUMG.SimpleBarChart.BP_RemoveAllCategories
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a4630
	// Params: [ Num(0) Size(0x0) ]
	void BP_RemoveAllCategories();

	// Object: Function KantanChartsUMG.SimpleBarChart.BP_AddCategoryWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a4428
	// Params: [ Num(3) Size(0x21) ]
	void BP_AddCategoryWithId(struct FName ID, struct FText Name, uint8_t& bSuccess);

	// Object: Function KantanChartsUMG.SimpleBarChart.BP_AddCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a425c
	// Params: [ Num(2) Size(0x20) ]
	void BP_AddCategory(struct FText Name, struct FName& CatId);
	DEFINE_UE_CLASS_HELPERS(USimpleBarChart, "SimpleBarChart")

};

// Object: Class KantanChartsUMG.SimpleCartesianPlot
// Size: 0x3E0 (Inherited: 0x3C0)
struct USimpleCartesianPlot : UKantanCartesianPlotBase
{
	uint8_t Pad_0x3C0[0x20]; // 0x3C0(0x20)


	// Object: Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a4f5c
	// Params: [ Num(2) Size(0x9) ]
	void BP_RemoveSeries(struct FName ID, uint8_t& bSuccess);

	// Object: Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveAllSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a4f48
	// Params: [ Num(0) Size(0x0) ]
	void BP_RemoveAllSeries();

	// Object: Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeriesWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a4c68
	// Params: [ Num(6) Size(0x2B) ]
	void BP_AddSeriesWithId(uint8_t& bSuccess, struct FName ID, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines);

	// Object: Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a49c4
	// Params: [ Num(5) Size(0x23) ]
	void BP_AddSeries(struct FName& SeriesId, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines);

	// Object: Function KantanChartsUMG.SimpleCartesianPlot.BP_AddDatapoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x77a488c
	// Params: [ Num(3) Size(0x11) ]
	void BP_AddDatapoint(struct FName SeriesId, const struct FVector2D& Point, uint8_t& bSuccess);
	DEFINE_UE_CLASS_HELPERS(USimpleCartesianPlot, "SimpleCartesianPlot")

};

// Object: Class KantanChartsUMG.SimpleTimeSeriesPlot
// Size: 0x408 (Inherited: 0x3E8)
struct USimpleTimeSeriesPlot : UKantanTimeSeriesPlotBase
{
	uint8_t Pad_0x3E8[0x20]; // 0x3E8(0x20)


	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a59c0
	// Params: [ Num(2) Size(0x9) ]
	void BP_RemoveSeries(struct FName ID, uint8_t& bSuccess);

	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveAllSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a59ac
	// Params: [ Num(0) Size(0x0) ]
	void BP_RemoveAllSeries();

	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_ClearSeriesData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a58bc
	// Params: [ Num(2) Size(0x9) ]
	void BP_ClearSeriesData(struct FName SeriesId, uint8_t& bSuccess);

	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_ClearAllData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a58a8
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClearAllData();

	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeriesWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a55c8
	// Params: [ Num(6) Size(0x2B) ]
	void BP_AddSeriesWithId(uint8_t& bSuccess, struct FName ID, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines);

	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a5324
	// Params: [ Num(5) Size(0x23) ]
	void BP_AddSeries(struct FName& SeriesId, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines);

	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapointNow
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77a51f8
	// Params: [ Num(3) Size(0xD) ]
	void BP_AddDatapointNow(struct FName SeriesId, float Value, uint8_t& bSuccess);

	// Object: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x77a50c0
	// Params: [ Num(3) Size(0x11) ]
	void BP_AddDatapoint(struct FName SeriesId, const struct FVector2D& Point, uint8_t& bSuccess);
	DEFINE_UE_CLASS_HELPERS(USimpleTimeSeriesPlot, "SimpleTimeSeriesPlot")

};

// Object: Class KantanChartsUMG.TimeSeriesPlot
// Size: 0x3F0 (Inherited: 0x3E8)
struct UTimeSeriesPlot : UKantanTimeSeriesPlotBase
{
	struct UObject* DataSource; // 0x3E8(0x8)


	// Object: Function KantanChartsUMG.TimeSeriesPlot.SetDatasource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77a5b3c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t SetDatasource(struct UObject* InDatasource);
	DEFINE_UE_CLASS_HELPERS(UTimeSeriesPlot, "TimeSeriesPlot")

};

} // namespace SDK
