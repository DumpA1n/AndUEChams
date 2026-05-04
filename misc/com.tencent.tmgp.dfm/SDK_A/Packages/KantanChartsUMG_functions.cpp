#include "KantanChartsUMG.hpp"
#include "KantanChartsSlate.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UKantanChart::* ----
void UKantanChart::SetUpdateTickRate(float InRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChart", "SetUpdateTickRate");
    struct
    {
        float InRate;
    } Parms{};
    Parms.InRate = (float)InRate;
    this->ProcessEvent(Func, &Parms);
}

void UKantanChart::SetMargins(const struct FMargin& InMargins)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChart", "SetMargins");
    struct
    {
        struct FMargin InMargins;
    } Parms{};
    Parms.InMargins = (struct FMargin)InMargins;
    this->ProcessEvent(Func, &Parms);
}

void UKantanChart::SetChartTitlePadding(const struct FMargin& InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChart", "SetChartTitlePadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UKantanChart::SetChartTitle(const struct FText& InTitle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChart", "SetChartTitle");
    struct
    {
        struct FText InTitle;
    } Parms{};
    Parms.InTitle = (struct FText)InTitle;
    this->ProcessEvent(Func, &Parms);
}

// ---- UKantanCategoryChart::* ----
void UKantanCategoryChart::AddCategoryStyleOverride(struct FName CategoryId, struct FLinearColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCategoryChart", "AddCategoryStyleOverride");
    struct
    {
        struct FName CategoryId;
        struct FLinearColor Color;
    } Parms{};
    Parms.CategoryId = (struct FName)CategoryId;
    Parms.Color = (struct FLinearColor)Color;
    this->ProcessEvent(Func, &Parms);
}

// ---- UKantanBarChartBase::* ----
void UKantanBarChartBase::SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanBarChartBase", "SetValueAxisConfig");
    struct
    {
        struct FCartesianAxisConfig InCfg;
    } Parms{};
    Parms.InCfg = (struct FCartesianAxisConfig)InCfg;
    this->ProcessEvent(Func, &Parms);
}

void UKantanBarChartBase::SetOrientation(EKantanBarChartOrientation InOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanBarChartBase", "SetOrientation");
    struct
    {
        enum EKantanBarChartOrientation InOrientation;
    } Parms{};
    Parms.InOrientation = (enum EKantanBarChartOrientation)InOrientation;
    this->ProcessEvent(Func, &Parms);
}

void UKantanBarChartBase::SetMaxBarValue(float InMaxValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanBarChartBase", "SetMaxBarValue");
    struct
    {
        float InMaxValue;
    } Parms{};
    Parms.InMaxValue = (float)InMaxValue;
    this->ProcessEvent(Func, &Parms);
}

void UKantanBarChartBase::SetLabelPosition(EKantanBarLabelPosition InPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanBarChartBase", "SetLabelPosition");
    struct
    {
        enum EKantanBarLabelPosition InPosition;
    } Parms{};
    Parms.InPosition = (enum EKantanBarLabelPosition)InPosition;
    this->ProcessEvent(Func, &Parms);
}

void UKantanBarChartBase::SetExtentsDisplay(EKantanBarValueExtents InExtents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanBarChartBase", "SetExtentsDisplay");
    struct
    {
        enum EKantanBarValueExtents InExtents;
    } Parms{};
    Parms.InExtents = (enum EKantanBarValueExtents)InExtents;
    this->ProcessEvent(Func, &Parms);
}

void UKantanBarChartBase::SetBarToGapRatio(float InRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanBarChartBase", "SetBarToGapRatio");
    struct
    {
        float InRatio;
    } Parms{};
    Parms.InRatio = (float)InRatio;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBarChart::* ----
uint8_t UBarChart::SetDatasource(struct UObject* InDatasource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BarChart", "SetDatasource");
    struct
    {
        struct UObject* InDatasource;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InDatasource = (struct UObject*)InDatasource;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UKantanCartesianChartBase::* ----
void UKantanCartesianChartBase::SetYAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "SetYAxisConfig");
    struct
    {
        struct FCartesianAxisConfig InCfg;
    } Parms{};
    Parms.InCfg = (struct FCartesianAxisConfig)InCfg;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::SetXAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "SetXAxisConfig");
    struct
    {
        struct FCartesianAxisConfig InCfg;
    } Parms{};
    Parms.InCfg = (struct FCartesianAxisConfig)InCfg;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::SetSeriesStyle(struct FName ID, struct FName StyleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "SetSeriesStyle");
    struct
    {
        struct FName ID;
        struct FName StyleId;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.StyleId = (struct FName)StyleId;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "SetPlotScaleByRange");
    struct
    {
        struct FCartesianAxisRange InRangeX;
        struct FCartesianAxisRange InRangeY;
    } Parms{};
    Parms.InRangeX = (struct FCartesianAxisRange)InRangeX;
    Parms.InRangeY = (struct FCartesianAxisRange)InRangeY;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::SetPlotScale(const struct FVector2D& InScale, const struct FVector2D& InFocalCoords)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "SetPlotScale");
    struct
    {
        struct FVector2D InScale;
        struct FVector2D InFocalCoords;
    } Parms{};
    Parms.InScale = (struct FVector2D)InScale;
    Parms.InFocalCoords = (struct FVector2D)InFocalCoords;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::SetDataPointSize(EKantanDataPointSize InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "SetDataPointSize");
    struct
    {
        enum EKantanDataPointSize InSize;
    } Parms{};
    Parms.InSize = (enum EKantanDataPointSize)InSize;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::SetAxisTitlePadding(const struct FMargin& InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "SetAxisTitlePadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::EnableSeries(struct FName ID, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "EnableSeries");
    struct
    {
        struct FName ID;
        uint8_t bEnable;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::ConfigureSeries(struct FName ID, uint8_t bDrawPoints, uint8_t bDrawLines)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "ConfigureSeries");
    struct
    {
        struct FName ID;
        uint8_t bDrawPoints;
        uint8_t bDrawLines;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.bDrawPoints = (uint8_t)bDrawPoints;
    Parms.bDrawLines = (uint8_t)bDrawLines;
    this->ProcessEvent(Func, &Parms);
}

void UKantanCartesianChartBase::AddSeriesStyleOverride(struct FName SeriesId, struct UKantanPointStyle* PointStyle, struct FLinearColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianChartBase", "AddSeriesStyleOverride");
    struct
    {
        struct FName SeriesId;
        struct UKantanPointStyle* PointStyle;
        struct FLinearColor Color;
    } Parms{};
    Parms.SeriesId = (struct FName)SeriesId;
    Parms.PointStyle = (struct UKantanPointStyle*)PointStyle;
    Parms.Color = (struct FLinearColor)Color;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCartesianPlot::* ----
uint8_t UCartesianPlot::SetDatasource(struct UObject* InDatasource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CartesianPlot", "SetDatasource");
    struct
    {
        struct UObject* InDatasource;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InDatasource = (struct UObject*)InDatasource;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UKantanChartLegend::* ----
void UKantanChartLegend::SetSeriesPadding(const struct FMargin& InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChartLegend", "SetSeriesPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UKantanChartLegend::SetMargins(const struct FMargin& InMargins)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChartLegend", "SetMargins");
    struct
    {
        struct FMargin InMargins;
    } Parms{};
    Parms.InMargins = (struct FMargin)InMargins;
    this->ProcessEvent(Func, &Parms);
}

void UKantanChartLegend::SetFontSize(int32_t InFontSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChartLegend", "SetFontSize");
    struct
    {
        int32_t InFontSize;
    } Parms{};
    Parms.InFontSize = (int32_t)InFontSize;
    this->ProcessEvent(Func, &Parms);
}

void UKantanChartLegend::SetChart(struct UKantanCartesianChartBase* InChart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChartLegend", "SetChart");
    struct
    {
        struct UKantanCartesianChartBase* InChart;
    } Parms{};
    Parms.InChart = (struct UKantanCartesianChartBase*)InChart;
    this->ProcessEvent(Func, &Parms);
}

void UKantanChartLegend::SetBackground(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanChartLegend", "SetBackground");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

// ---- UKantanTimeSeriesPlotBase::* ----
void UKantanTimeSeriesPlotBase::SetUpperValueBound(struct FCartesianRangeBound InUpperBound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanTimeSeriesPlotBase", "SetUpperValueBound");
    struct
    {
        struct FCartesianRangeBound InUpperBound;
    } Parms{};
    Parms.InUpperBound = (struct FCartesianRangeBound)InUpperBound;
    this->ProcessEvent(Func, &Parms);
}

void UKantanTimeSeriesPlotBase::SetUpperTimeBound(struct FCartesianRangeBound InUpperBound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanTimeSeriesPlotBase", "SetUpperTimeBound");
    struct
    {
        struct FCartesianRangeBound InUpperBound;
    } Parms{};
    Parms.InUpperBound = (struct FCartesianRangeBound)InUpperBound;
    this->ProcessEvent(Func, &Parms);
}

void UKantanTimeSeriesPlotBase::SetLowerValueBound(struct FCartesianRangeBound InLowerBound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanTimeSeriesPlotBase", "SetLowerValueBound");
    struct
    {
        struct FCartesianRangeBound InLowerBound;
    } Parms{};
    Parms.InLowerBound = (struct FCartesianRangeBound)InLowerBound;
    this->ProcessEvent(Func, &Parms);
}

void UKantanTimeSeriesPlotBase::SetLowerTimeBound(struct FCartesianRangeBound InLowerBound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanTimeSeriesPlotBase", "SetLowerTimeBound");
    struct
    {
        struct FCartesianRangeBound InLowerBound;
    } Parms{};
    Parms.InLowerBound = (struct FCartesianRangeBound)InLowerBound;
    this->ProcessEvent(Func, &Parms);
}

// ---- USimpleBarChart::* ----
void USimpleBarChart::BP_UpdateCategoryValue(struct FName ID, float Value, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleBarChart", "BP_UpdateCategoryValue");
    struct
    {
        struct FName ID;
        float Value;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleBarChart::BP_RemoveCategory(struct FName ID, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleBarChart", "BP_RemoveCategory");
    struct
    {
        struct FName ID;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleBarChart::BP_RemoveAllCategories()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleBarChart", "BP_RemoveAllCategories");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USimpleBarChart::BP_AddCategoryWithId(struct FName ID, struct FText Name, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleBarChart", "BP_AddCategoryWithId");
    struct
    {
        struct FName ID;
        struct FText Name;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleBarChart::BP_AddCategory(struct FText Name, struct FName& CatId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleBarChart", "BP_AddCategory");
    struct
    {
        struct FText Name;
        struct FName CatId;
    } Parms{};
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
    CatId = Parms.CatId;
}

// ---- USimpleCartesianPlot::* ----
void USimpleCartesianPlot::BP_RemoveSeries(struct FName ID, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleCartesianPlot", "BP_RemoveSeries");
    struct
    {
        struct FName ID;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleCartesianPlot::BP_RemoveAllSeries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleCartesianPlot", "BP_RemoveAllSeries");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USimpleCartesianPlot::BP_AddSeriesWithId(uint8_t& bSuccess, struct FName ID, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleCartesianPlot", "BP_AddSeriesWithId");
    struct
    {
        uint8_t bSuccess;
        struct FName ID;
        struct FText Name;
        uint8_t bEnabled;
        uint8_t bShowPoints;
        uint8_t bShowLines;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.Name = (struct FText)Name;
    Parms.bEnabled = (uint8_t)bEnabled;
    Parms.bShowPoints = (uint8_t)bShowPoints;
    Parms.bShowLines = (uint8_t)bShowLines;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleCartesianPlot::BP_AddSeries(struct FName& SeriesId, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleCartesianPlot", "BP_AddSeries");
    struct
    {
        struct FName SeriesId;
        struct FText Name;
        uint8_t bEnabled;
        uint8_t bShowPoints;
        uint8_t bShowLines;
    } Parms{};
    Parms.Name = (struct FText)Name;
    Parms.bEnabled = (uint8_t)bEnabled;
    Parms.bShowPoints = (uint8_t)bShowPoints;
    Parms.bShowLines = (uint8_t)bShowLines;
    this->ProcessEvent(Func, &Parms);
    SeriesId = Parms.SeriesId;
}

void USimpleCartesianPlot::BP_AddDatapoint(struct FName SeriesId, const struct FVector2D& Point, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleCartesianPlot", "BP_AddDatapoint");
    struct
    {
        struct FName SeriesId;
        struct FVector2D Point;
        uint8_t bSuccess;
    } Parms{};
    Parms.SeriesId = (struct FName)SeriesId;
    Parms.Point = (struct FVector2D)Point;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

// ---- USimpleTimeSeriesPlot::* ----
void USimpleTimeSeriesPlot::BP_RemoveSeries(struct FName ID, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_RemoveSeries");
    struct
    {
        struct FName ID;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleTimeSeriesPlot::BP_RemoveAllSeries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_RemoveAllSeries");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USimpleTimeSeriesPlot::BP_ClearSeriesData(struct FName SeriesId, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_ClearSeriesData");
    struct
    {
        struct FName SeriesId;
        uint8_t bSuccess;
    } Parms{};
    Parms.SeriesId = (struct FName)SeriesId;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleTimeSeriesPlot::BP_ClearAllData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_ClearAllData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USimpleTimeSeriesPlot::BP_AddSeriesWithId(uint8_t& bSuccess, struct FName ID, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_AddSeriesWithId");
    struct
    {
        uint8_t bSuccess;
        struct FName ID;
        struct FText Name;
        uint8_t bEnabled;
        uint8_t bShowPoints;
        uint8_t bShowLines;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.Name = (struct FText)Name;
    Parms.bEnabled = (uint8_t)bEnabled;
    Parms.bShowPoints = (uint8_t)bShowPoints;
    Parms.bShowLines = (uint8_t)bShowLines;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleTimeSeriesPlot::BP_AddSeries(struct FName& SeriesId, struct FText Name, uint8_t bEnabled, uint8_t bShowPoints, uint8_t bShowLines)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_AddSeries");
    struct
    {
        struct FName SeriesId;
        struct FText Name;
        uint8_t bEnabled;
        uint8_t bShowPoints;
        uint8_t bShowLines;
    } Parms{};
    Parms.Name = (struct FText)Name;
    Parms.bEnabled = (uint8_t)bEnabled;
    Parms.bShowPoints = (uint8_t)bShowPoints;
    Parms.bShowLines = (uint8_t)bShowLines;
    this->ProcessEvent(Func, &Parms);
    SeriesId = Parms.SeriesId;
}

void USimpleTimeSeriesPlot::BP_AddDatapointNow(struct FName SeriesId, float Value, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_AddDatapointNow");
    struct
    {
        struct FName SeriesId;
        float Value;
        uint8_t bSuccess;
    } Parms{};
    Parms.SeriesId = (struct FName)SeriesId;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void USimpleTimeSeriesPlot::BP_AddDatapoint(struct FName SeriesId, const struct FVector2D& Point, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleTimeSeriesPlot", "BP_AddDatapoint");
    struct
    {
        struct FName SeriesId;
        struct FVector2D Point;
        uint8_t bSuccess;
    } Parms{};
    Parms.SeriesId = (struct FName)SeriesId;
    Parms.Point = (struct FVector2D)Point;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

// ---- UTimeSeriesPlot::* ----
uint8_t UTimeSeriesPlot::SetDatasource(struct UObject* InDatasource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TimeSeriesPlot", "SetDatasource");
    struct
    {
        struct UObject* InDatasource;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InDatasource = (struct UObject*)InDatasource;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
