#include "GPTween.hpp"
#include "Engine.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPTweenFloat
struct FVector2D UGPTweenFloat::MakeFloatDamperImplicitVector2D(struct FVector2D& InCurrentValue, struct FVector2D& InTargetValue, float HalfLife, float InDeltaTime, float eps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenFloat", "MakeFloatDamperImplicitVector2D");
    struct
    {
        struct FVector2D InCurrentValue;
        struct FVector2D InTargetValue;
        float HalfLife;
        float InDeltaTime;
        float eps;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.HalfLife = (float)HalfLife;
    Parms.InDeltaTime = (float)InDeltaTime;
    Parms.eps = (float)eps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InCurrentValue = Parms.InCurrentValue;
    InTargetValue = Parms.InTargetValue;
    return Parms.ReturnValue;
}

float UGPTweenFloat::MakeFloatDamperImplicit(float& InCurrentValue, float& InTargetValue, float HalfLife, float InDeltaTime, float eps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenFloat", "MakeFloatDamperImplicit");
    struct
    {
        float InCurrentValue;
        float InTargetValue;
        float HalfLife;
        float InDeltaTime;
        float eps;
        float ReturnValue;
    } Parms{};
    Parms.HalfLife = (float)HalfLife;
    Parms.InDeltaTime = (float)InDeltaTime;
    Parms.eps = (float)eps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InCurrentValue = Parms.InCurrentValue;
    InTargetValue = Parms.InTargetValue;
    return Parms.ReturnValue;
}

float UGPTweenFloat::MakeFloatCalculateLerpValue(float Curtime, float TotalTime, float InStartValue, float InEndValue, EaseType InEaseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenFloat", "MakeFloatCalculateLerpValue");
    struct
    {
        float Curtime;
        float TotalTime;
        float InStartValue;
        float InEndValue;
        enum EaseType InEaseType;
        float ReturnValue;
    } Parms{};
    Parms.Curtime = (float)Curtime;
    Parms.TotalTime = (float)TotalTime;
    Parms.InStartValue = (float)InStartValue;
    Parms.InEndValue = (float)InEndValue;
    Parms.InEaseType = (enum EaseType)InEaseType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPTweenFloat* UGPTweenFloat::MakeFloatByCurve(struct FString TweenName, float DurTime, float Start, float End, struct UCurveFloat* Curve, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenFloat", "MakeFloatByCurve");
    struct
    {
        struct FString TweenName;
        float DurTime;
        float Start;
        float End;
        struct UCurveFloat* Curve;
        uint8_t IsLoop;
        struct UGPTweenFloat* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.Start = (float)Start;
    Parms.End = (float)End;
    Parms.Curve = (struct UCurveFloat*)Curve;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPTweenFloat* UGPTweenFloat::MakeFloat(struct FString TweenName, float DurTime, float Start, float End, EaseType EaseType, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenFloat", "MakeFloat");
    struct
    {
        struct FString TweenName;
        float DurTime;
        float Start;
        float End;
        enum EaseType EaseType;
        uint8_t IsLoop;
        struct UGPTweenFloat* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.Start = (float)Start;
    Parms.End = (float)End;
    Parms.EaseType = (enum EaseType)EaseType;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPTweenVector3D
struct UGPTweenVector3D* UGPTweenVector3D::MakeVector3DByCurve(struct FString TweenName, float DurTime, struct FVector Start, struct FVector End, struct UCurveFloat* Curve, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenVector3D", "MakeVector3DByCurve");
    struct
    {
        struct FString TweenName;
        float DurTime;
        struct FVector Start;
        struct FVector End;
        struct UCurveFloat* Curve;
        uint8_t IsLoop;
        struct UGPTweenVector3D* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.Curve = (struct UCurveFloat*)Curve;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPTweenVector3D* UGPTweenVector3D::MakeVector3D(struct FString TweenName, float DurTime, struct FVector Start, struct FVector End, EaseType EaseType, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenVector3D", "MakeVector3D");
    struct
    {
        struct FString TweenName;
        float DurTime;
        struct FVector Start;
        struct FVector End;
        enum EaseType EaseType;
        uint8_t IsLoop;
        struct UGPTweenVector3D* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.EaseType = (enum EaseType)EaseType;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPTweenWidget
struct UGPTweenWidget* UGPTweenWidget::MakeLocalScale(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D StartScale, struct FVector2D EndScale, EaseType EaseType, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenWidget", "MakeLocalScale");
    struct
    {
        struct FString TweenName;
        float DurTime;
        struct UWidget* UI;
        struct FVector2D StartScale;
        struct FVector2D EndScale;
        enum EaseType EaseType;
        uint8_t IsLoop;
        struct UGPTweenWidget* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.UI = (struct UWidget*)UI;
    Parms.StartScale = (struct FVector2D)StartScale;
    Parms.EndScale = (struct FVector2D)EndScale;
    Parms.EaseType = (enum EaseType)EaseType;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPTweenWidget* UGPTweenWidget::MakeLocalMoveByCurve(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D End, struct UCurveFloat* Curve, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenWidget", "MakeLocalMoveByCurve");
    struct
    {
        struct FString TweenName;
        float DurTime;
        struct UWidget* UI;
        struct FVector2D End;
        struct UCurveFloat* Curve;
        uint8_t IsLoop;
        struct UGPTweenWidget* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.UI = (struct UWidget*)UI;
    Parms.End = (struct FVector2D)End;
    Parms.Curve = (struct UCurveFloat*)Curve;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPTweenWidget* UGPTweenWidget::MakeLocalMove(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D End, EaseType EaseType, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenWidget", "MakeLocalMove");
    struct
    {
        struct FString TweenName;
        float DurTime;
        struct UWidget* UI;
        struct FVector2D End;
        enum EaseType EaseType;
        uint8_t IsLoop;
        struct UGPTweenWidget* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.UI = (struct UWidget*)UI;
    Parms.End = (struct FVector2D)End;
    Parms.EaseType = (enum EaseType)EaseType;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPTweenWidget* UGPTweenWidget::MakeFade(struct FString TweenName, float DurTime, struct UWidget* UI, float StartOpacityValue, float EndOpacityValue, EaseType EaseType, uint8_t IsLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTweenWidget", "MakeFade");
    struct
    {
        struct FString TweenName;
        float DurTime;
        struct UWidget* UI;
        float StartOpacityValue;
        float EndOpacityValue;
        enum EaseType EaseType;
        uint8_t IsLoop;
        struct UGPTweenWidget* ReturnValue;
    } Parms{};
    Parms.TweenName = (struct FString)TweenName;
    Parms.DurTime = (float)DurTime;
    Parms.UI = (struct UWidget*)UI;
    Parms.StartOpacityValue = (float)StartOpacityValue;
    Parms.EndOpacityValue = (float)EndOpacityValue;
    Parms.EaseType = (enum EaseType)EaseType;
    Parms.IsLoop = (uint8_t)IsLoop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
