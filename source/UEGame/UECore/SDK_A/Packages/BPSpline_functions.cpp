#include "BPSpline.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBPSplineCatenaryFunctions
struct TArray<struct FVector> UBPSplineCatenaryFunctions::CreateCatenaryPoints(struct FVector Point1, struct FVector Point2, float Length, struct FVector Up, int32_t NumPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPSplineCatenaryFunctions", "CreateCatenaryPoints");
    struct
    {
        struct FVector Point1;
        struct FVector Point2;
        float Length;
        struct FVector Up;
        int32_t NumPoints;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.Point1 = (struct FVector)Point1;
    Parms.Point2 = (struct FVector)Point2;
    Parms.Length = (float)Length;
    Parms.Up = (struct FVector)Up;
    Parms.NumPoints = (int32_t)NumPoints;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBPSplineBlueprintFunctionHelper
void UBPSplineBlueprintFunctionHelper::SnapToGround(struct USplineComponent* SplineComp, uint8_t bInAlign)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPSplineBlueprintFunctionHelper", "SnapToGround");
    struct
    {
        struct USplineComponent* SplineComp;
        uint8_t bInAlign;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.bInAlign = (uint8_t)bInAlign;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBPSplineBlueprintFunctionHelper::SnapToFixedAngleXY(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPSplineBlueprintFunctionHelper", "SnapToFixedAngleXY");
    struct
    {
        struct USplineComponent* SplineComp;
        struct TArray<float> AllowedAngles;
        uint8_t bSnapToGround;
        struct TArray<struct FVector> ResultPoints;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.AllowedAngles = (struct TArray<float>)AllowedAngles;
    Parms.bSnapToGround = (uint8_t)bSnapToGround;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ResultPoints = Parms.ResultPoints;
}

void UBPSplineBlueprintFunctionHelper::SnapToFixedAngle(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPSplineBlueprintFunctionHelper", "SnapToFixedAngle");
    struct
    {
        struct USplineComponent* SplineComp;
        struct TArray<float> AllowedAngles;
        uint8_t bSnapToGround;
        struct TArray<struct FVector> ResultPoints;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.AllowedAngles = (struct TArray<float>)AllowedAngles;
    Parms.bSnapToGround = (uint8_t)bSnapToGround;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ResultPoints = Parms.ResultPoints;
}

void UBPSplineBlueprintFunctionHelper::RerunConstructionScripts(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPSplineBlueprintFunctionHelper", "RerunConstructionScripts");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBPSplineBlueprintFunctionHelper::RemoveComponentFromActor(struct AActor* Actor, struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPSplineBlueprintFunctionHelper", "RemoveComponentFromActor");
    struct
    {
        struct AActor* Actor;
        struct UActorComponent* Component;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Component = (struct UActorComponent*)Component;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
