#include "GraphicMathUtils.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGraphicMathUtils::* ----
float UGraphicMathUtils::VanDerCorputSequence(int32_t I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "VanDerCorputSequence");
    struct
    {
        int32_t I;
        float ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGraphicMathUtils::HammersleySequence(int32_t I, int32_t TotalCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "HammersleySequence");
    struct
    {
        int32_t I;
        int32_t TotalCount;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.TotalCount = (int32_t)TotalCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector4 UGraphicMathUtils::GetUnitSphereRay(const struct FVector2D& point2D, float cover)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "GetUnitSphereRay");
    struct
    {
        struct FVector2D point2D;
        float cover;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.point2D = (struct FVector2D)point2D;
    Parms.cover = (float)cover;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector4 UGraphicMathUtils::GetUnitHemisphereRay(const struct FVector2D& point2D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "GetUnitHemisphereRay");
    struct
    {
        struct FVector2D point2D;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.point2D = (struct FVector2D)point2D;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGraphicMathUtils::GetUniformedUnitSphereSampleDirection(int32_t sampleCount, struct TArray<struct FVector4>& Result, float cover)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "GetUniformedUnitSphereSampleDirection");
    struct
    {
        int32_t sampleCount;
        struct TArray<struct FVector4> Result;
        float cover;
    } Parms{};
    Parms.sampleCount = (int32_t)sampleCount;
    Parms.cover = (float)cover;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

void UGraphicMathUtils::GenerateVanDerCorputSequence(int32_t StartIndex, int32_t EndIndex, struct TArray<float>& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "GenerateVanDerCorputSequence");
    struct
    {
        int32_t StartIndex;
        int32_t EndIndex;
        struct TArray<float> Result;
    } Parms{};
    Parms.StartIndex = (int32_t)StartIndex;
    Parms.EndIndex = (int32_t)EndIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

void UGraphicMathUtils::GenerateHammersleySequence(int32_t StartIndex, int32_t EndIndex, int32_t TotalCount, struct TArray<struct FVector2D>& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "GenerateHammersleySequence");
    struct
    {
        int32_t StartIndex;
        int32_t EndIndex;
        int32_t TotalCount;
        struct TArray<struct FVector2D> Result;
    } Parms{};
    Parms.StartIndex = (int32_t)StartIndex;
    Parms.EndIndex = (int32_t)EndIndex;
    Parms.TotalCount = (int32_t)TotalCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

struct FVector2D UGraphicMathUtils::Fibonacci2D(int32_t I, int32_t Samples)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "Fibonacci2D");
    struct
    {
        int32_t I;
        int32_t Samples;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.Samples = (int32_t)Samples;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGraphicMathUtils::Fibonacci1D(int32_t I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GraphicMathUtils", "Fibonacci1D");
    struct
    {
        int32_t I;
        float ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
