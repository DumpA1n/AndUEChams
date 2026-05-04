#include "RadarChart.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- URadarChart::* ----
void URadarChart::SetValuesForLayer(uint8_t ValueLayerIndex, const struct TArray<float>& InValues)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "SetValuesForLayer");
    struct
    {
        uint8_t ValueLayerIndex;
        struct TArray<float> InValues;
    } Parms{};
    Parms.ValueLayerIndex = (uint8_t)ValueLayerIndex;
    Parms.InValues = (struct TArray<float>)InValues;
    this->ProcessEvent(Func, &Parms);
}

void URadarChart::SetValue(uint8_t ValueLayerIndex, uint8_t ValueIndex, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "SetValue");
    struct
    {
        uint8_t ValueLayerIndex;
        uint8_t ValueIndex;
        float Value;
    } Parms{};
    Parms.ValueLayerIndex = (uint8_t)ValueLayerIndex;
    Parms.ValueIndex = (uint8_t)ValueIndex;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void URadarChart::SetNormalizationScale(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "SetNormalizationScale");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void URadarChart::RefreshValueLayers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "RefreshValueLayers");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URadarChart::RefreshBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "RefreshBase");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URadarChart::Refresh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "Refresh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URadarChart::InvalidateMaterial(struct FRadarChartAppearance& InAppearance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "InvalidateMaterial");
    struct
    {
        struct FRadarChartAppearance InAppearance;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InAppearance = Parms.InAppearance;
}

void URadarChart::InvalidateAllMaterials()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "InvalidateAllMaterials");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URadarChart::ForceRebuild()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadarChart", "ForceRebuild");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- URadarChartSetValuesAnimated::* ----
struct URadarChartSetValuesAnimated* URadarChartSetValuesAnimated::SetValuesAnimated(struct URadarChart* Target, uint8_t ValueLayer, const struct TArray<float>& Values, float Duration, uint8_t FPS, EEasingFunc Ease)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RadarChartSetValuesAnimated", "SetValuesAnimated");
    struct
    {
        struct URadarChart* Target;
        uint8_t ValueLayer;
        struct TArray<float> Values;
        float Duration;
        uint8_t FPS;
        enum EEasingFunc Ease;
        struct URadarChartSetValuesAnimated* ReturnValue;
    } Parms{};
    Parms.Target = (struct URadarChart*)Target;
    Parms.ValueLayer = (uint8_t)ValueLayer;
    Parms.Values = (struct TArray<float>)Values;
    Parms.Duration = (float)Duration;
    Parms.FPS = (uint8_t)FPS;
    Parms.Ease = (enum EEasingFunc)Ease;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URadarChartSetNormalizationScaleAnimated::* ----
struct URadarChartSetNormalizationScaleAnimated* URadarChartSetNormalizationScaleAnimated::SetNormalizationScaleAnimated(struct URadarChart* Target, float NewScale, float Duration, uint8_t FPS, EEasingFunc Ease)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RadarChartSetNormalizationScaleAnimated", "SetNormalizationScaleAnimated");
    struct
    {
        struct URadarChart* Target;
        float NewScale;
        float Duration;
        uint8_t FPS;
        enum EEasingFunc Ease;
        struct URadarChartSetNormalizationScaleAnimated* ReturnValue;
    } Parms{};
    Parms.Target = (struct URadarChart*)Target;
    Parms.NewScale = (float)NewScale;
    Parms.Duration = (float)Duration;
    Parms.FPS = (uint8_t)FPS;
    Parms.Ease = (enum EEasingFunc)Ease;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
