#include "GPWeaponRuntime.hpp"
#include "Engine.hpp"
#include "GPAbility.hpp"
#include "GPWeaponDefineForPlugin.hpp"
#include "GameplayAbilities.hpp"
#include "GameplayTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAbilityTask_WaitDelayWhileAbilityActive::* ----
struct UAbilityTask_WaitDelayWhileAbilityActive* UAbilityTask_WaitDelayWhileAbilityActive::WaitDelayWhileAbilityActive(struct UGameplayAbility* OwningAbility, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityTask_WaitDelayWhileAbilityActive", "WaitDelayWhileAbilityActive");
    struct
    {
        struct UGameplayAbility* OwningAbility;
        float Time;
        struct UAbilityTask_WaitDelayWhileAbilityActive* ReturnValue;
    } Parms{};
    Parms.OwningAbility = (struct UGameplayAbility*)OwningAbility;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IActorPoolInterface::* ----
void IActorPoolInterface::SetActorPoolMethod(EActorPoolMethod Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "SetActorPoolMethod");
    struct
    {
        enum EActorPoolMethod Val;
    } Parms{};
    Parms.Val = (enum EActorPoolMethod)Val;
    this->ProcessEvent(Func, &Parms);
}

void IActorPoolInterface::ReleaseToPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "ReleaseToPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IActorPoolInterface::PreReleaseToPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "PreReleaseToPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IActorPoolInterface::OnUsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "OnUsed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IActorPoolInterface::OnReclaim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "OnReclaim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float IActorPoolInterface::GetReusedCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "GetReusedCD");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IActorPoolInterface::GetMaxPoolSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "GetMaxPoolSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EActorPoolMethod IActorPoolInterface::GetActorPoolMethod()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ActorPoolInterface", "GetActorPoolMethod");
    struct
    {
        enum EActorPoolMethod ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UConeTrace::* ----
uint8_t UConeTrace::SphereTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, const struct TArray<EObjectTypeQuery>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ConeTrace", "SphereTraceMultiForObjects");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        float radius;
        struct TArray<EObjectTypeQuery> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        enum EDrawDebugTrace DrawDebugType;
        struct TArray<struct FHitResult> OutHits;
        uint8_t bIgnoreSelf;
        struct FLinearColor TraceColor;
        struct FLinearColor TraceHitColor;
        float DrawTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.ObjectTypes = (struct TArray<EObjectTypeQuery>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.DrawDebugType = (enum EDrawDebugTrace)DrawDebugType;
    Parms.bIgnoreSelf = (uint8_t)bIgnoreSelf;
    Parms.TraceColor = (struct FLinearColor)TraceColor;
    Parms.TraceHitColor = (struct FLinearColor)TraceHitColor;
    Parms.DrawTime = (float)DrawTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UConeTrace::ConeTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, const struct TArray<EObjectTypeQuery>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ConeTrace", "ConeTraceSingleForObjects");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        float radius;
        struct TArray<EObjectTypeQuery> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        enum EDrawDebugTrace DrawDebugType;
        struct FHitResult OutHit;
        uint8_t bIgnoreSelf;
        struct FLinearColor TraceColor;
        struct FLinearColor TraceHitColor;
        float DrawTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.ObjectTypes = (struct TArray<EObjectTypeQuery>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.DrawDebugType = (enum EDrawDebugTrace)DrawDebugType;
    Parms.bIgnoreSelf = (uint8_t)bIgnoreSelf;
    Parms.TraceColor = (struct FLinearColor)TraceColor;
    Parms.TraceHitColor = (struct FLinearColor)TraceHitColor;
    Parms.DrawTime = (float)DrawTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UConeTrace::ConeTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, struct FName ProfileName, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ConeTrace", "ConeTraceSingleByProfile");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        float radius;
        struct FName ProfileName;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        enum EDrawDebugTrace DrawDebugType;
        struct FHitResult OutHit;
        uint8_t bIgnoreSelf;
        struct FLinearColor TraceColor;
        struct FLinearColor TraceHitColor;
        float DrawTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.ProfileName = (struct FName)ProfileName;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.DrawDebugType = (enum EDrawDebugTrace)DrawDebugType;
    Parms.bIgnoreSelf = (uint8_t)bIgnoreSelf;
    Parms.TraceColor = (struct FLinearColor)TraceColor;
    Parms.TraceHitColor = (struct FLinearColor)TraceHitColor;
    Parms.DrawTime = (float)DrawTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UConeTrace::ConeTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, ETraceTypeQuery TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ConeTrace", "ConeTraceSingle");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        float radius;
        enum ETraceTypeQuery TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        enum EDrawDebugTrace DrawDebugType;
        struct FHitResult OutHit;
        uint8_t bIgnoreSelf;
        struct FLinearColor TraceColor;
        struct FLinearColor TraceHitColor;
        float DrawTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.TraceChannel = (enum ETraceTypeQuery)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.DrawDebugType = (enum EDrawDebugTrace)DrawDebugType;
    Parms.bIgnoreSelf = (uint8_t)bIgnoreSelf;
    Parms.TraceColor = (struct FLinearColor)TraceColor;
    Parms.TraceHitColor = (struct FLinearColor)TraceHitColor;
    Parms.DrawTime = (float)DrawTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UConeTrace::ConeTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, struct FName ProfileName, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ConeTrace", "ConeTraceMultiByProfile");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        float radius;
        struct FName ProfileName;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        enum EDrawDebugTrace DrawDebugType;
        struct TArray<struct FHitResult> OutHits;
        uint8_t bIgnoreSelf;
        struct FLinearColor TraceColor;
        struct FLinearColor TraceHitColor;
        float DrawTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.ProfileName = (struct FName)ProfileName;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.DrawDebugType = (enum EDrawDebugTrace)DrawDebugType;
    Parms.bIgnoreSelf = (uint8_t)bIgnoreSelf;
    Parms.TraceColor = (struct FLinearColor)TraceColor;
    Parms.TraceHitColor = (struct FLinearColor)TraceHitColor;
    Parms.DrawTime = (float)DrawTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UConeTrace::ConeTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, ETraceTypeQuery TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, uint8_t bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ConeTrace", "ConeTraceMulti");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        float radius;
        enum ETraceTypeQuery TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        enum EDrawDebugTrace DrawDebugType;
        struct TArray<struct FHitResult> OutHits;
        uint8_t bIgnoreSelf;
        struct FLinearColor TraceColor;
        struct FLinearColor TraceHitColor;
        float DrawTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.TraceChannel = (enum ETraceTypeQuery)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.DrawDebugType = (enum EDrawDebugTrace)DrawDebugType;
    Parms.bIgnoreSelf = (uint8_t)bIgnoreSelf;
    Parms.TraceColor = (struct FLinearColor)TraceColor;
    Parms.TraceHitColor = (struct FLinearColor)TraceHitColor;
    Parms.DrawTime = (float)DrawTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

// ---- AGPProjectile::* ----
void AGPProjectile::SetCanTickMovement(uint8_t IsCanTickMovement)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "SetCanTickMovement");
    struct
    {
        uint8_t IsCanTickMovement;
    } Parms{};
    Parms.IsCanTickMovement = (uint8_t)IsCanTickMovement;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::OnProjectileStop(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "OnProjectileStop");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::OnProjectileRelease(uint8_t bReclaim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "OnProjectileRelease");
    struct
    {
        uint8_t bReclaim;
    } Parms{};
    Parms.bReclaim = (uint8_t)bReclaim;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::OnProjectilePenetrating(EProjectileMedium OldMedium, EProjectileMedium NewMedium, const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "OnProjectilePenetrating");
    struct
    {
        enum EProjectileMedium OldMedium;
        enum EProjectileMedium NewMedium;
        struct FHitResult HitResult;
    } Parms{};
    Parms.OldMedium = (enum EProjectileMedium)OldMedium;
    Parms.NewMedium = (enum EProjectileMedium)NewMedium;
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "OnProjectileBounce");
    struct
    {
        struct FHitResult ImpactResult;
        struct FVector ImpactVelocity;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    Parms.ImpactVelocity = (struct FVector)ImpactVelocity;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::OnDelayTickMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "OnDelayTickMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::MulticastEventUnReliable(struct FProjectileEvent ProjectileEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "MulticastEventUnReliable");
    struct
    {
        struct FProjectileEvent ProjectileEvent;
    } Parms{};
    Parms.ProjectileEvent = (struct FProjectileEvent)ProjectileEvent;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::MulticastEventReliable(struct FProjectileEvent ProjectileEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "MulticastEventReliable");
    struct
    {
        struct FProjectileEvent ProjectileEvent;
    } Parms{};
    Parms.ProjectileEvent = (struct FProjectileEvent)ProjectileEvent;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPProjectile::IsThrowableProjectile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "IsThrowableProjectile");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPProjectile::DelayTickMovement(float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "DelayTickMovement");
    struct
    {
        float DelayTime;
    } Parms{};
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::DebugDrawServerPos(struct FVector WorldPos, struct FRotator Rotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "DebugDrawServerPos");
    struct
    {
        struct FVector WorldPos;
        struct FRotator Rotator;
    } Parms{};
    Parms.WorldPos = (struct FVector)WorldPos;
    Parms.Rotator = (struct FRotator)Rotator;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::BP_OnProjectileUsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "BP_OnProjectileUsed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::BP_OnProjectileStop(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "BP_OnProjectileStop");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::BP_OnProjectileRelease(uint8_t bReclaim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "BP_OnProjectileRelease");
    struct
    {
        uint8_t bReclaim;
    } Parms{};
    Parms.bReclaim = (uint8_t)bReclaim;
    this->ProcessEvent(Func, &Parms);
}

void AGPProjectile::BP_OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectile", "BP_OnProjectileBounce");
    struct
    {
        struct FHitResult ImpactResult;
        struct FVector ImpactVelocity;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    Parms.ImpactVelocity = (struct FVector)ImpactVelocity;
    this->ProcessEvent(Func, &Parms);
}

// ---- UReplicatedProjectileMovementComponent::* ----
void UReplicatedProjectileMovementComponent::OnRep_StopHitResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicatedProjectileMovementComponent", "OnRep_StopHitResult");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplicatedProjectileMovementComponent::OnRep_RepProjectileTrajectory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicatedProjectileMovementComponent", "OnRep_RepProjectileTrajectory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplicatedProjectileMovementComponent::OnProjectilePenetratingMediumDelegate__DelegateSignature(EProjectileMedium OldMedium, EProjectileMedium NewMedium, const struct FHitResult& InHitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicatedProjectileMovementComponent", "OnProjectilePenetratingMediumDelegate__DelegateSignature");
    struct
    {
        enum EProjectileMedium OldMedium;
        enum EProjectileMedium NewMedium;
        struct FHitResult InHitResult;
    } Parms{};
    Parms.OldMedium = (enum EProjectileMedium)OldMedium;
    Parms.NewMedium = (enum EProjectileMedium)NewMedium;
    Parms.InHitResult = (struct FHitResult)InHitResult;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponProjectileMovementComponent::* ----
void UGPWeaponProjectileMovementComponent::SetInitFlyingInfo(struct FVector InFlyDir, float InInitSpeed, float InZeroDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProjectileMovementComponent", "SetInitFlyingInfo");
    struct
    {
        struct FVector InFlyDir;
        float InInitSpeed;
        float InZeroDistance;
    } Parms{};
    Parms.InFlyDir = (struct FVector)InFlyDir;
    Parms.InInitSpeed = (float)InInitSpeed;
    Parms.InZeroDistance = (float)InZeroDistance;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponProjectileMovementComponent::SetFixedMoveFrame(int32_t Frame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProjectileMovementComponent", "SetFixedMoveFrame");
    struct
    {
        int32_t Frame;
    } Parms{};
    Parms.Frame = (int32_t)Frame;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponProjectileMovementComponent::IsSimpleMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProjectileMovementComponent", "IsSimpleMove");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponProjectileMovementComponent::IsEnemy(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProjectileMovementComponent", "IsEnemy");
    struct
    {
        struct AActor* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPWeaponProjectileMovementComponent::GetMoveTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProjectileMovementComponent", "GetMoveTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPProjectileMovementComponent::* ----
uint8_t UGPProjectileMovementComponent::MoveStep(float StepTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectileMovementComponent", "MoveStep");
    struct
    {
        float StepTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StepTime = (float)StepTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPProjectileMovementComponent::CalcStepVelocity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectileMovementComponent", "CalcStepVelocity");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPProjectileReplicateComponent::* ----
void UGPProjectileReplicateComponent::ClientPublishTrajectoryItems(struct TArray<struct FRepProjectileTrajectoryItem> TrajectoryItems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectileReplicateComponent", "ClientPublishTrajectoryItems");
    struct
    {
        struct TArray<struct FRepProjectileTrajectoryItem> TrajectoryItems;
    } Parms{};
    Parms.TrajectoryItems = (struct TArray<struct FRepProjectileTrajectoryItem>)TrajectoryItems;
    this->ProcessEvent(Func, &Parms);
}

void UGPProjectileReplicateComponent::ClientPublishExplosionInfos(struct TArray<struct FRepRPGExplosionInfo> RepExplosionInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectileReplicateComponent", "ClientPublishExplosionInfos");
    struct
    {
        struct TArray<struct FRepRPGExplosionInfo> RepExplosionInfos;
    } Parms{};
    Parms.RepExplosionInfos = (struct TArray<struct FRepRPGExplosionInfo>)RepExplosionInfos;
    this->ProcessEvent(Func, &Parms);
}

void UGPProjectileReplicateComponent::ClientPublishEventsUnreliable(struct TArray<struct FRepProjectileEvent> Events)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectileReplicateComponent", "ClientPublishEventsUnreliable");
    struct
    {
        struct TArray<struct FRepProjectileEvent> Events;
    } Parms{};
    Parms.Events = (struct TArray<struct FRepProjectileEvent>)Events;
    this->ProcessEvent(Func, &Parms);
}

void UGPProjectileReplicateComponent::ClientPublishEvents(struct TArray<struct FRepProjectileEvent> Events)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPProjectileReplicateComponent", "ClientPublishEvents");
    struct
    {
        struct TArray<struct FRepProjectileEvent> Events;
    } Parms{};
    Parms.Events = (struct TArray<struct FRepProjectileEvent>)Events;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponAttributeSetEquip::* ----
void UGPWeaponAttributeSetEquip::OnRep_UnEquipTimeRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetEquip", "OnRep_UnEquipTimeRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetEquip::OnRep_EquipTimeRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetEquip", "OnRep_EquipTimeRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponAttributeSetFireMode::* ----
void UGPWeaponAttributeSetFireMode::OnRep_PullBoltTimeRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetFireMode", "OnRep_PullBoltTimeRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetFireMode::OnRep_ProjectileInitialVelocityRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetFireMode", "OnRep_ProjectileInitialVelocityRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetFireMode::OnRep_FiringMode(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetFireMode", "OnRep_FiringMode");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetFireMode::OnRep_FireInterval(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetFireMode", "OnRep_FireInterval");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetFireMode::OnRep_FireCD(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetFireMode", "OnRep_FireCD");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetFireMode::OnRep_ChamberTime(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetFireMode", "OnRep_ChamberTime");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetFireMode::OnRep_BurstFireCD(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetFireMode", "OnRep_BurstFireCD");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponAttributeSetWeaponAmmo::* ----
void UGPWeaponAttributeSetWeaponAmmo::SetWeaponCarriedAmmoCountWithCallBack(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponAmmo", "SetWeaponCarriedAmmoCountWithCallBack");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponAmmo::SetWeaponAmmoCountWithCallBack(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponAmmo", "SetWeaponAmmoCountWithCallBack");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponAmmo::OnRep_AmmoCount(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponAmmo", "OnRep_AmmoCount");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponAmmo::ConsumeAmmoCount(uint16_t ConsumeCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponAmmo", "ConsumeAmmoCount");
    struct
    {
        uint16_t ConsumeCount;
    } Parms{};
    Parms.ConsumeCount = (uint16_t)ConsumeCount;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponAttributeSetWeaponChangeClip::* ----
void UGPWeaponAttributeSetWeaponChangeClip::OnRep_WeaponChangeClipTimeRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponChangeClip", "OnRep_WeaponChangeClipTimeRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponAttributeSetWeaponDamage::* ----
void UGPWeaponAttributeSetWeaponDamage::OnRep_HeadDamageRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponDamage", "OnRep_HeadDamageRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponDamage::OnRep_Damage(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponDamage", "OnRep_Damage");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponDamage::OnRep_CriticalHitRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponDamage", "OnRep_CriticalHitRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponDamage::OnRep_CriticalHitDamageRate(const struct FGameplayAttributeData& OldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponDamage", "OnRep_CriticalHitDamageRate");
    struct
    {
        struct FGameplayAttributeData OldData;
    } Parms{};
    Parms.OldData = (struct FGameplayAttributeData)OldData;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponAttributeSetWeaponPerk::* ----
void UGPWeaponAttributeSetWeaponPerk::OnRep_Penetrate(float OldValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponPerk", "OnRep_Penetrate");
    struct
    {
        float OldValue;
    } Parms{};
    Parms.OldValue = (float)OldValue;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponPerk::OnRep_Level(float OldValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponPerk", "OnRep_Level");
    struct
    {
        float OldValue;
    } Parms{};
    Parms.OldValue = (float)OldValue;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponAttributeSetWeaponPerk::OnRep_Duability(float OldValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAttributeSetWeaponPerk", "OnRep_Duability");
    struct
    {
        float OldValue;
    } Parms{};
    Parms.OldValue = (float)OldValue;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponBlueprintLibrary::* ----
struct UGPWeaponManagerComponent* UGPWeaponBlueprintLibrary::GetWeaponManagerComponent(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWeaponBlueprintLibrary", "GetWeaponManagerComponent");
    struct
    {
        struct AActor* Actor;
        struct UGPWeaponManagerComponent* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerController* UGPWeaponBlueprintLibrary::GetPlayerController(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWeaponBlueprintLibrary", "GetPlayerController");
    struct
    {
        struct UObject* WorldContext;
        struct APlayerController* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerCameraManager* UGPWeaponBlueprintLibrary::GetPlayerCameraManager(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWeaponBlueprintLibrary", "GetPlayerCameraManager");
    struct
    {
        struct UObject* WorldContext;
        struct APlayerCameraManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AGPWeaponBulletBase::* ----
void AGPWeaponBulletBase::ReleaseToPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletBase", "ReleaseToPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletBase::OnRep_PoolState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletBase", "OnRep_PoolState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletBase::OnRep_BulletBaseParam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletBase", "OnRep_BulletBaseParam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AActor* AGPWeaponBulletBase::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletBase", "GetCharacterOwner");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPWeaponBulletBase::BP_OnUsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletBase", "BP_OnUsed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletBase::BP_OnReclaim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletBase", "BP_OnReclaim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponBulletManager::* ----
void UGPWeaponBulletManager::CreateBulletAppearanceByFastTArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletManager", "CreateBulletAppearanceByFastTArray");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponBulletManager::CreateBulletAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletManager", "CreateBulletAppearance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AGPWeaponBulletProjectile::* ----
void AGPWeaponBulletProjectile::ProcessProjectileDamage(struct FHitResult HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletProjectile", "ProcessProjectileDamage");
    struct
    {
        struct FHitResult HitResult;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletProjectile::OnRep_BulletProjectileParam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletProjectile", "OnRep_BulletProjectileParam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletProjectile::OnBulletProjectileHitImp(const struct FHitResult& ImpactResult, const struct FGPWeaponBulletOnHitParams& OnHitParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletProjectile", "OnBulletProjectileHitImp");
    struct
    {
        struct FHitResult ImpactResult;
        struct FGPWeaponBulletOnHitParams OnHitParams;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    Parms.OnHitParams = (struct FGPWeaponBulletOnHitParams)OnHitParams;
    this->ProcessEvent(Func, &Parms);
}

float AGPWeaponBulletProjectile::GetReleaseDelayTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletProjectile", "GetReleaseDelayTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPWeaponBulletProjectile::ADSCheck(struct AActor* ADS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletProjectile", "ADSCheck");
    struct
    {
        struct AActor* ADS;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ADS = (struct AActor*)ADS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AGPWeaponBulletThrowableProjectile::* ----
void AGPWeaponBulletThrowableProjectile::TryStartLerpClientMesh3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "TryStartLerpClientMesh3P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::TryStartLerpClientMesh(struct UGPWeaponFireModeParamsThrowable* FireModeParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "TryStartLerpClientMesh");
    struct
    {
        struct UGPWeaponFireModeParamsThrowable* FireModeParams;
    } Parms{};
    Parms.FireModeParams = (struct UGPWeaponFireModeParamsThrowable*)FireModeParams;
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::TickLerpClientMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "TickLerpClientMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::StopLerpClientMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "StopLerpClientMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPWeaponBulletThrowableProjectile::ShouldCheckMoveIgnoreTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "ShouldCheckMoveIgnoreTag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPWeaponBulletThrowableProjectile::SetLerpClientMeshOffset(struct FVector offset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "SetLerpClientMeshOffset");
    struct
    {
        struct FVector offset;
    } Parms{};
    Parms.offset = (struct FVector)offset;
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::ResetMeshTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "ResetMeshTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::OnRep_WeaponOwnerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "OnRep_WeaponOwnerActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::OnRep_StickyInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "OnRep_StickyInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::OnRep_OwnerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "OnRep_OwnerActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::OnProjectileOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "OnProjectileOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* Other;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.Other = (struct AActor*)Other;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::OnProjectileHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "OnProjectileHit");
    struct
    {
        struct UPrimitiveComponent* HitComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComponent;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.HitComponent = (struct UPrimitiveComponent*)HitComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComponent = (struct UPrimitiveComponent*)OtherComponent;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::OnExplosionHideFakeProjectile(struct AGPProjectile* FakeProjectile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "OnExplosionHideFakeProjectile");
    struct
    {
        struct AGPProjectile* FakeProjectile;
    } Parms{};
    Parms.FakeProjectile = (struct AGPProjectile*)FakeProjectile;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPWeaponBulletThrowableProjectile::IsHitVehicle(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "IsHitVehicle");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPWeaponBulletThrowableProjectile::IsHitGround(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "IsHitGround");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPWeaponBulletThrowableProjectile::IsHitEnemy(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "IsHitEnemy");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPWeaponBulletThrowableProjectile::IsExplosionNeedStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "IsExplosionNeedStop");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPWeaponBulletThrowableProjectile::InitOptimizeProjectileTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "InitOptimizeProjectileTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::InitMomentComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "InitMomentComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::InitMaxLifeTimeSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "InitMaxLifeTimeSeconds");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector AGPWeaponBulletThrowableProjectile::GetProjectileInitVelocity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "GetProjectileInitVelocity");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> AGPWeaponBulletThrowableProjectile::GetAllOwnerWeaponActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "GetAllOwnerWeaponActors");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPWeaponBulletThrowableProjectile::CountLerpClientMeshDuration(float MinClientFakeLerpTime, float MaxClientFakeLerpTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "CountLerpClientMeshDuration");
    struct
    {
        float MinClientFakeLerpTime;
        float MaxClientFakeLerpTime;
    } Parms{};
    Parms.MinClientFakeLerpTime = (float)MinClientFakeLerpTime;
    Parms.MaxClientFakeLerpTime = (float)MaxClientFakeLerpTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPWeaponBulletThrowableProjectile::CheckSafeMoveDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "CheckSafeMoveDistance");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPWeaponBulletThrowableProjectile::CheckMaxLifeTimeSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "CheckMaxLifeTimeSeconds");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPWeaponBulletThrowableProjectile::CheckExplodeThrowWall(struct FVector& ExplodeLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "CheckExplodeThrowWall");
    struct
    {
        struct FVector ExplodeLocation;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ExplodeLocation = Parms.ExplodeLocation;
}

void AGPWeaponBulletThrowableProjectile::BP_MoveOnWaterSurface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "BP_MoveOnWaterSurface");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPWeaponBulletThrowableProjectile::BP_FirstMoveIntoWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponBulletThrowableProjectile", "BP_FirstMoveIntoWater");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IGPWeaponComponentBase::* ----
void IGPWeaponComponentBase::WeaponDetaching(uint8_t bHangToBack, EWeaponSwitchType SwitchType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "WeaponDetaching");
    struct
    {
        uint8_t bHangToBack;
        enum EWeaponSwitchType SwitchType;
    } Parms{};
    Parms.bHangToBack = (uint8_t)bHangToBack;
    Parms.SwitchType = (enum EWeaponSwitchType)SwitchType;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::WeaponAttaching(uint8_t bLastWeaponReserved, EWeaponSwitchType SwitchType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "WeaponAttaching");
    struct
    {
        uint8_t bLastWeaponReserved;
        enum EWeaponSwitchType SwitchType;
    } Parms{};
    Parms.bLastWeaponReserved = (uint8_t)bLastWeaponReserved;
    Parms.SwitchType = (enum EWeaponSwitchType)SwitchType;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::SetWeaponInteractive(uint8_t InterActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "SetWeaponInteractive");
    struct
    {
        uint8_t InterActive;
    } Parms{};
    Parms.InterActive = (uint8_t)InterActive;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::RefreshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "RefreshComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::OnWeaponRemove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "OnWeaponRemove");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::OnWeaponModeChanged(EGPWeaponMode OldWeaponMode, EGPWeaponMode NewWeaponMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "OnWeaponModeChanged");
    struct
    {
        enum EGPWeaponMode OldWeaponMode;
        enum EGPWeaponMode NewWeaponMode;
    } Parms{};
    Parms.OldWeaponMode = (enum EGPWeaponMode)OldWeaponMode;
    Parms.NewWeaponMode = (enum EGPWeaponMode)NewWeaponMode;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::OnWeaponAdd(struct ACHARACTER* InCharacterOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "OnWeaponAdd");
    struct
    {
        struct ACHARACTER* InCharacterOwner;
    } Parms{};
    Parms.InCharacterOwner = (struct ACHARACTER*)InCharacterOwner;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::OnPostReadWeaponDynamicAttribute()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "OnPostReadWeaponDynamicAttribute");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::OnPostNetInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "OnPostNetInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::OnPostInitWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "OnPostInitWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponComponentBase::OnPostComponentChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "OnPostComponentChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ACHARACTER* IGPWeaponComponentBase::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "GetCharacterOwner");
    struct
    {
        struct ACHARACTER* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponComponentBase::DumpDebugMsg(struct FString& OutDebugMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponComponentBase", "DumpDebugMsg");
    struct
    {
        struct FString OutDebugMsg;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutDebugMsg = Parms.OutDebugMsg;
}

// ---- IGPWeaponDataComponentAnimInterface::* ----
uint8_t IGPWeaponDataComponentAnimInterface::IsZooming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAnimInterface", "IsZooming");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentAnimInterface::HasWeaponPartAnim(uint64_t PartItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAnimInterface", "HasWeaponPartAnim");
    struct
    {
        uint64_t PartItemId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PartItemId = (uint64_t)PartItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimMontage* IGPWeaponDataComponentAnimInterface::GetSingleReloadMontageC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAnimInterface", "GetSingleReloadMontageC");
    struct
    {
        struct UAnimMontage* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentAnimInterface::GetAnimOperationMontageSectionTime(struct FName MontageName, int32_t SectionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAnimInterface", "GetAnimOperationMontageSectionTime");
    struct
    {
        struct FName MontageName;
        int32_t SectionIndex;
        float ReturnValue;
    } Parms{};
    Parms.MontageName = (struct FName)MontageName;
    Parms.SectionIndex = (int32_t)SectionIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponDataComponentAppearance::* ----
uint8_t UGPWeaponDataComponentAppearance::IsMeshHiddenPropagateToChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearance", "IsMeshHiddenPropagateToChildren");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponDataComponentAppearanceInterface::* ----
struct FName IGPWeaponDataComponentAppearanceInterface::TranslateAttachBackSocketName(EGPWeaponAttachBackSocket Socket)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "TranslateAttachBackSocketName");
    struct
    {
        enum EGPWeaponAttachBackSocket Socket;
        struct FName ReturnValue;
    } Parms{};
    Parms.Socket = (enum EGPWeaponAttachBackSocket)Socket;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentAppearanceInterface::ShouldSpawn3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "ShouldSpawn3P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentAppearanceInterface::ShouldAttachWeaponToCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "ShouldAttachWeaponToCharacter");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponDataComponentAppearanceInterface::SetWeaponMeshHidden(uint8_t Hidden, EWeaponMeshHideReason HideReason, struct USkeletalMeshComponent* SpecialMesh, uint8_t bForceRefreshMeshStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "SetWeaponMeshHidden");
    struct
    {
        uint8_t Hidden;
        enum EWeaponMeshHideReason HideReason;
        struct USkeletalMeshComponent* SpecialMesh;
        uint8_t bForceRefreshMeshStatus;
    } Parms{};
    Parms.Hidden = (uint8_t)Hidden;
    Parms.HideReason = (enum EWeaponMeshHideReason)HideReason;
    Parms.SpecialMesh = (struct USkeletalMeshComponent*)SpecialMesh;
    Parms.bForceRefreshMeshStatus = (uint8_t)bForceRefreshMeshStatus;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentAppearanceInterface::SetWeaponMeshCastShadow(uint8_t bCastShadow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "SetWeaponMeshCastShadow");
    struct
    {
        uint8_t bCastShadow;
    } Parms{};
    Parms.bCastShadow = (uint8_t)bCastShadow;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentAppearanceInterface::SetRenderCustomDepth(uint8_t BitTag, uint8_t bEnableCustomDepth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "SetRenderCustomDepth");
    struct
    {
        uint8_t BitTag;
        uint8_t bEnableCustomDepth;
    } Parms{};
    Parms.BitTag = (uint8_t)BitTag;
    Parms.bEnableCustomDepth = (uint8_t)bEnableCustomDepth;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentAppearanceInterface::SetMeshScale(float InScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "SetMeshScale");
    struct
    {
        float InScale;
    } Parms{};
    Parms.InScale = (float)InScale;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentAppearanceInterface::SetCustomDepthStencilValue(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "SetCustomDepthStencilValue");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponDataComponentAppearanceInterface::ReloadAttachPointToIKGun()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "ReloadAttachPointToIKGun");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentAppearanceInterface::IsWeaponMeshHidden()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "IsWeaponMeshHidden");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponDataComponentAppearanceInterface::GetWeaponSecondaryMeshComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponSecondaryMeshComp");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* IGPWeaponDataComponentAppearanceInterface::GetWeaponSecondaryBaseMeshComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponSecondaryBaseMeshComp");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPWeaponMesh IGPWeaponDataComponentAppearanceInterface::GetWeaponMeshSecondary()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponMeshSecondary");
    struct
    {
        struct FGPWeaponMesh ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPWeaponMesh IGPWeaponDataComponentAppearanceInterface::GetWeaponMeshMain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponMeshMain");
    struct
    {
        struct FGPWeaponMesh ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponDataComponentAppearanceInterface::GetWeaponMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponDataComponentAppearanceInterface::GetWeaponMainMeshComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponMainMeshComp");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponFireSocketInterface> IGPWeaponDataComponentAppearanceInterface::GetWeaponFireSocketInterface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponFireSocketInterface");
    struct
    {
        struct TScriptInterface<IGPWeaponFireSocketInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* IGPWeaponDataComponentAppearanceInterface::GetWeaponBaseMeshComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetWeaponBaseMeshComp");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform IGPWeaponDataComponentAppearanceInterface::GetSocketTransform(struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetSocketTransform");
    struct
    {
        struct FName SocketName;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IGPWeaponDataComponentAppearanceInterface::GetSocketLocation(struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetSocketLocation");
    struct
    {
        struct FName SocketName;
        struct FVector ReturnValue;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator IGPWeaponDataComponentAppearanceInterface::GetRHandIKGripRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetRHandIKGripRotation");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimSequence* IGPWeaponDataComponentAppearanceInterface::GetRHandIKGripPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetRHandIKGripPose");
    struct
    {
        struct UAnimSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IGPWeaponDataComponentAppearanceInterface::GetRHandIKGripLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetRHandIKGripLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentAppearanceInterface::GetMeshScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetMeshScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator IGPWeaponDataComponentAppearanceInterface::GetMeshRotator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetMeshRotator");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IGPWeaponDataComponentAppearanceInterface::GetMeshLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetMeshLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D IGPWeaponDataComponentAppearanceInterface::GetMeshCollisionSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetMeshCollisionSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator IGPWeaponDataComponentAppearanceInterface::GetIKGripRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetIKGripRotation");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimSequence* IGPWeaponDataComponentAppearanceInterface::GetIKGripPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetIKGripPose");
    struct
    {
        struct UAnimSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IGPWeaponDataComponentAppearanceInterface::GetIKGripLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetIKGripLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPWeaponBitTag IGPWeaponDataComponentAppearanceInterface::GetHiddenTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetHiddenTag");
    struct
    {
        struct FGPWeaponBitTag ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IGPWeaponDataComponentAppearanceInterface::GetEquipSocketName(uint8_t bMainMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetEquipSocketName");
    struct
    {
        uint8_t bMainMesh;
        struct FName ReturnValue;
    } Parms{};
    Parms.bMainMesh = (uint8_t)bMainMesh;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponDataComponentAppearanceInterface::GetAttachMeshComponent(uint8_t bAttachBack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetAttachMeshComponent");
    struct
    {
        uint8_t bAttachBack;
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    Parms.bAttachBack = (uint8_t)bAttachBack;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IGPWeaponDataComponentAppearanceInterface::GetAttachBackSocketName(uint8_t bMainMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "GetAttachBackSocketName");
    struct
    {
        uint8_t bMainMesh;
        struct FName ReturnValue;
    } Parms{};
    Parms.bMainMesh = (uint8_t)bMainMesh;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentAppearanceInterface::FirstEquipAttachPointToIKGun()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "FirstEquipAttachPointToIKGun");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponDataComponentAppearanceInterface::CustomModifyFireSocketNames(struct TArray<struct FName>& OutBasicFireSocketNames, struct TArray<struct FName>& OutExtraFireSocketNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "CustomModifyFireSocketNames");
    struct
    {
        struct TArray<struct FName> OutBasicFireSocketNames;
        struct TArray<struct FName> OutExtraFireSocketNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutBasicFireSocketNames = Parms.OutBasicFireSocketNames;
    OutExtraFireSocketNames = Parms.OutExtraFireSocketNames;
}

struct FBoxSphereBounds IGPWeaponDataComponentAppearanceInterface::CalcWeaponLocalBounds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentAppearanceInterface", "CalcWeaponLocalBounds");
    struct
    {
        struct FBoxSphereBounds ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponDataComponentCore::* ----
void UGPWeaponDataComponentCore::OnAttributeSetDirty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentCore", "OnAttributeSetDirty");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponDataComponentFiring::* ----
void UGPWeaponDataComponentFiring::ServerSetFireModeIndex(uint8_t FireModeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiring", "ServerSetFireModeIndex");
    struct
    {
        uint8_t FireModeIndex;
    } Parms{};
    Parms.FireModeIndex = (uint8_t)FireModeIndex;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentFiring::ServerSetChambered(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiring", "ServerSetChambered");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentFiring::OnReplicateFireModeIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiring", "OnReplicateFireModeIndex");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IGPWeaponDataComponentFiringInterface::* ----
void IGPWeaponDataComponentFiringInterface::UpdateSprintAutoDelayFireOnceInfo(uint8_t InAutoFire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "UpdateSprintAutoDelayFireOnceInfo");
    struct
    {
        uint8_t InAutoFire;
    } Parms{};
    Parms.InAutoFire = (uint8_t)InAutoFire;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponDataComponentFiringInterface::SupportHangUpBolt(uint8_t bZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SupportHangUpBolt");
    struct
    {
        uint8_t bZoom;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::SupportAnimShellDrop(uint8_t bZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SupportAnimShellDrop");
    struct
    {
        uint8_t bZoom;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponDataComponentFiringInterface::SetSupportHangUpBolt(uint8_t bZoom, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetSupportHangUpBolt");
    struct
    {
        uint8_t bZoom;
        uint8_t bValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetSupportAnimShellDrop(uint8_t bZoom, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetSupportAnimShellDrop");
    struct
    {
        uint8_t bZoom;
        uint8_t bValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetRequireChambering(uint8_t Value, float ChamberFinishTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetRequireChambering");
    struct
    {
        uint8_t Value;
        float ChamberFinishTime;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    Parms.ChamberFinishTime = (float)ChamberFinishTime;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetNeedSendFireInfo(uint8_t bNeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetNeedSendFireInfo");
    struct
    {
        uint8_t bNeed;
    } Parms{};
    Parms.bNeed = (uint8_t)bNeed;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetLastHitInfo(const struct FBulletHitInfo& InHitInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetLastHitInfo");
    struct
    {
        struct FBulletHitInfo InHitInfo;
    } Parms{};
    Parms.InHitInfo = (struct FBulletHitInfo)InHitInfo;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetIsChamberWeapon(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetIsChamberWeapon");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetFireInfo(struct FWeaponFireRepInfo InRepInfo, uint8_t InNeedSendFireInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetFireInfo");
    struct
    {
        struct FWeaponFireRepInfo InRepInfo;
        uint8_t InNeedSendFireInfo;
    } Parms{};
    Parms.InRepInfo = (struct FWeaponFireRepInfo)InRepInfo;
    Parms.InNeedSendFireInfo = (uint8_t)InNeedSendFireInfo;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetChargeTime(float ChargeTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetChargeTime");
    struct
    {
        float ChargeTime;
    } Parms{};
    Parms.ChargeTime = (float)ChargeTime;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetChamberingBegin(float BeginTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetChamberingBegin");
    struct
    {
        float BeginTime;
    } Parms{};
    Parms.BeginTime = (float)BeginTime;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentFiringInterface::SetChambered(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "SetChambered");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponDataComponentFiringInterface::NeedSendFireInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "NeedSendFireInfo");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::IsWeaponSupportFireStartRotFromView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "IsWeaponSupportFireStartRotFromView");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::IsWeaponEnableSprintAutoDelayFireOnce()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "IsWeaponEnableSprintAutoDelayFireOnce");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::IsRequireChambering()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "IsRequireChambering");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::IsIgnorePreFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "IsIgnorePreFire");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::IsChamberWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "IsChamberWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::IsChambering()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "IsChambering");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::HasChambered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "HasChambered");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<EGPWeaponFiringMode> IGPWeaponDataComponentFiringInterface::GetSupportSubFiringModes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetSupportSubFiringModes");
    struct
    {
        struct TArray<EGPWeaponFiringMode> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponDataComponentFiringInterface::GetProjectileIndex(uint8_t AddIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetProjectileIndex");
    struct
    {
        uint8_t AddIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.AddIndex = (uint8_t)AddIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPWeaponBulletBase* IGPWeaponDataComponentFiringInterface::GetProjectileClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetProjectileClass");
    struct
    {
        struct AGPWeaponBulletBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponDataComponentFiringInterface::GetOrUpdateSprintAutoDelayFireOnceInfo(uint8_t& OutAutoFire, float& OutAutoFireInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetOrUpdateSprintAutoDelayFireOnceInfo");
    struct
    {
        uint8_t OutAutoFire;
        float OutAutoFireInterval;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutAutoFire = Parms.OutAutoFire;
    OutAutoFireInterval = Parms.OutAutoFireInterval;
}

void IGPWeaponDataComponentFiringInterface::GetOrUpdateAutoFireInfo(uint8_t& OutAutoFire, float& OutAutoFireInterval, int32_t& OutDesiredFireTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetOrUpdateAutoFireInfo");
    struct
    {
        uint8_t OutAutoFire;
        float OutAutoFireInterval;
        int32_t OutDesiredFireTimes;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutAutoFire = Parms.OutAutoFire;
    OutAutoFireInterval = Parms.OutAutoFireInterval;
    OutDesiredFireTimes = Parms.OutDesiredFireTimes;
}

float IGPWeaponDataComponentFiringInterface::GetMovementTimeStamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetMovementTimeStamp");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentFiringInterface::GetLastHitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetLastHitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBulletHitInfo IGPWeaponDataComponentFiringInterface::GetLastHitInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetLastHitInfo");
    struct
    {
        struct FBulletHitInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponFireSocketMode IGPWeaponDataComponentFiringInterface::GetFireSocketMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetFireSocketMode");
    struct
    {
        enum EGPWeaponFireSocketMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPWeaponFireModeParamsBase* IGPWeaponDataComponentFiringInterface::GetFireModeParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetFireModeParams");
    struct
    {
        struct UGPWeaponFireModeParamsBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponFireModeInterface> IGPWeaponDataComponentFiringInterface::GetFireModeCurrent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetFireModeCurrent");
    struct
    {
        struct TScriptInterface<IGPWeaponFireModeInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponFireModeInterface> IGPWeaponDataComponentFiringInterface::GetFireModeByIndex(uint8_t FireModeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetFireModeByIndex");
    struct
    {
        uint8_t FireModeIndex;
        struct TScriptInterface<IGPWeaponFireModeInterface> ReturnValue;
    } Parms{};
    Parms.FireModeIndex = (uint8_t)FireModeIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FWeaponFireRepInfo IGPWeaponDataComponentFiringInterface::GetFireInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetFireInfo");
    struct
    {
        struct FWeaponFireRepInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponDataComponentFiringInterface::GetDamageDebugInfo(struct FString& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetDamageDebugInfo");
    struct
    {
        struct FString Result;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

EGPWeaponFiringMode IGPWeaponDataComponentFiringInterface::GetCurrentFiringMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetCurrentFiringMode");
    struct
    {
        enum EGPWeaponFiringMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::GetContinueFiringCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetContinueFiringCount");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentFiringInterface::GetChargeWPBulletSpeedPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetChargeWPBulletSpeedPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentFiringInterface::GetChamberMaxTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetChamberMaxTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentFiringInterface::GetChamberingTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetChamberingTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponDataComponentFiringInterface::GetBulletIndex(uint8_t AddIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetBulletIndex");
    struct
    {
        uint8_t AddIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.AddIndex = (uint8_t)AddIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IGPWeaponDataComponentFiringInterface::GetAutoFireTargetState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "GetAutoFireTargetState");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentFiringInterface::AutoReloadWhenEmpty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentFiringInterface", "AutoReloadWhenEmpty");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponDataComponentOverHeatInterface::* ----
void IGPWeaponDataComponentOverHeatInterface::WeaponTickHeat(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "WeaponTickHeat");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentOverHeatInterface::SetOverHeatTimeLeft(float Seconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "SetOverHeatTimeLeft");
    struct
    {
        float Seconds;
    } Parms{};
    Parms.Seconds = (float)Seconds;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentOverHeatInterface::SetOverHeatCDSeconds(float Seconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "SetOverHeatCDSeconds");
    struct
    {
        float Seconds;
    } Parms{};
    Parms.Seconds = (float)Seconds;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentOverHeatInterface::SetNeedUpdateOverHeat(uint8_t bNeedUpate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "SetNeedUpdateOverHeat");
    struct
    {
        uint8_t bNeedUpate;
    } Parms{};
    Parms.bNeedUpate = (uint8_t)bNeedUpate;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentOverHeatInterface::SetHeatInCreasePerFire(float Heat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "SetHeatInCreasePerFire");
    struct
    {
        float Heat;
    } Parms{};
    Parms.Heat = (float)Heat;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentOverHeatInterface::SetHeatDeCreasePerSecond(float Heat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "SetHeatDeCreasePerSecond");
    struct
    {
        float Heat;
    } Parms{};
    Parms.Heat = (float)Heat;
    this->ProcessEvent(Func, &Parms);
}

float IGPWeaponDataComponentOverHeatInterface::GetOverHeatTimeLeft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "GetOverHeatTimeLeft");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentOverHeatInterface::GetOverHeatAlpha()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "GetOverHeatAlpha");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentOverHeatInterface::CanFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentOverHeatInterface", "CanFire");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponDataComponentProxy::* ----
void UGPWeaponDataComponentProxy::UpdateDataZoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "UpdateDataZoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::UpdateDataState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "UpdateDataState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::UpdateDataFiring()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "UpdateDataFiring");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::UpdateComponentData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "UpdateComponentData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::UpdateCarriedAmmo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "UpdateCarriedAmmo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponDataComponentProxy::SupportAnimShellDrop(uint8_t bZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "SupportAnimShellDrop");
    struct
    {
        uint8_t bZoom;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPWeaponDataComponentProxy::SetViewEnable(uint8_t IsEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "SetViewEnable");
    struct
    {
        uint8_t IsEnable;
    } Parms{};
    Parms.IsEnable = (uint8_t)IsEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::SetSupportAnimShellDrop(uint8_t bZoom, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "SetSupportAnimShellDrop");
    struct
    {
        uint8_t bZoom;
        uint8_t bValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::SetIsFirstWeaponEquip(uint8_t InIsFirstActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "SetIsFirstWeaponEquip");
    struct
    {
        uint8_t InIsFirstActive;
    } Parms{};
    Parms.InIsFirstActive = (uint8_t)InIsFirstActive;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::SetIsFirstEmptyInspect(uint8_t InIsFirstEmptyInspect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "SetIsFirstEmptyInspect");
    struct
    {
        uint8_t InIsFirstEmptyInspect;
    } Parms{};
    Parms.InIsFirstEmptyInspect = (uint8_t)InIsFirstEmptyInspect;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::ReplicateToLocalWeapon(struct TScriptInterface<IGPWeaponInterface> LocalWeapon, uint32_t InDataComponentNameHash)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "ReplicateToLocalWeapon");
    struct
    {
        struct TScriptInterface<IGPWeaponInterface> LocalWeapon;
        uint32_t InDataComponentNameHash;
    } Parms{};
    Parms.LocalWeapon = (struct TScriptInterface<IGPWeaponInterface>)LocalWeapon;
    Parms.InDataComponentNameHash = (uint32_t)InDataComponentNameHash;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::RefreshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "RefreshComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::PostRepNotifies()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "PostRepNotifies");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnWeaponAttributeSetReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnWeaponAttributeSetReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnRep_SkillInspectIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnRep_SkillInspectIndex");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnRep_SkillInspectID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnRep_SkillInspectID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnRep_IsZooming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnRep_IsZooming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnRep_FiringMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnRep_FiringMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnRep_CurrentStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnRep_CurrentStateType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnRep_ChangeClipMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnRep_ChangeClipMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnFiringModeChanged(const struct FGameplayAttribute& Attribute, float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnFiringModeChanged");
    struct
    {
        struct FGameplayAttribute Attribute;
        float NewValue;
    } Parms{};
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::OnASCChangeClipChanged(const struct FGameplayAttribute& Attribute, float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "OnASCChangeClipChanged");
    struct
    {
        struct FGameplayAttribute Attribute;
        float NewValue;
    } Parms{};
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponDataComponentProxy::IsZooming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsZooming");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsWeaponUsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsWeaponUsed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsWeaponUnderCurrentXPP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsWeaponUnderCurrentXPP");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsWeaponActorVisibleInDPVS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsWeaponActorVisibleInDPVS");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsWeaponActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsWeaponActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsVisible");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsViewEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsViewEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsThrowableWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsThrowableWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsTestFullWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsTestFullWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsSecondaryWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsSecondaryWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsSceneWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsSceneWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsModularWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsModularWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsMeleeWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsMeleeWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsMainWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsMainWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsMainAttachWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsMainAttachWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsInPending()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsInPending");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsHideAllWeapon_RetIsContainExactTag(uint8_t& bContainExactTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsHideAllWeapon_RetIsContainExactTag");
    struct
    {
        uint8_t bContainExactTag;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    bContainExactTag = Parms.bContainExactTag;
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsHideAllWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsHideAllWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsFppView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsFppView");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsEnableZoomOnReloading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsEnableZoomOnReloading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsEmptyHand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsEmptyHand");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsCharacterOwnerOnFPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsCharacterOwnerOnFPPMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsCharacterOwnerOnDefaultFPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsCharacterOwnerOnDefaultFPPMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsCharacterOwnerAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsCharacterOwnerAI");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::IsCBowWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "IsCBowWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPWeaponDataComponentProxy::InitializeComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "InitializeComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentProxy::InitComponentReferences()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "InitComponentReferences");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponDataComponentProxy::HasNetModeOnServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "HasNetModeOnServer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::HasActivateBefore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "HasActivateBefore");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::GetWeaponTypeValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponTypeValue");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::GetWeaponSlot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponSlot");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* UGPWeaponDataComponentProxy::GetWeaponSecondaryMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponSecondaryMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* UGPWeaponDataComponentProxy::GetWeaponSecondaryBaseMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponSecondaryBaseMesh");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponMode UGPWeaponDataComponentProxy::GetWeaponMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponMode");
    struct
    {
        enum EGPWeaponMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* UGPWeaponDataComponentProxy::GetWeaponMainMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponMainMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UGPWeaponDataComponentProxy::GetWeaponId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UGPWeaponDataComponentProxy::GetWeaponGuid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponGuid");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UGPWeaponDataComponentProxy::GetWeaponEquipPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponEquipPosition");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* UGPWeaponDataComponentProxy::GetWeaponDisplayMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponDisplayMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* UGPWeaponDataComponentProxy::GetWeaponBaseMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponBaseMesh");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponAppearanceAttachType UGPWeaponDataComponentProxy::GetWeaponAttachType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponAttachType");
    struct
    {
        enum EGPWeaponAppearanceAttachType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponAttachBackSocket UGPWeaponDataComponentProxy::GetWeaponAttachBackSocket()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponAttachBackSocket");
    struct
    {
        enum EGPWeaponAttachBackSocket ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UGPWeaponDataComponentProxy::GetWeaponAttachBackRelativeTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponAttachBackRelativeTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponAttachBackConflict UGPWeaponDataComponentProxy::GetWeaponAttachBackConflict()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponAttachBackConflict");
    struct
    {
        enum EGPWeaponAttachBackConflict ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPASC_AttributeSet_Minimal> UGPWeaponDataComponentProxy::GetWeaponASC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponASC");
    struct
    {
        struct TScriptInterface<IGPASC_AttributeSet_Minimal> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPWeaponDataComponentProxy::GetWeaponActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetWeaponActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::GetThrowMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetThrowMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponDataComponentProxy::GetThirdPersonGPWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetThirdPersonGPWeapon");
    struct
    {
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* UGPWeaponDataComponentProxy::GetThirdPersonCharacterMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetThirdPersonCharacterMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UGPWeaponDataComponentProxy::GetPredictHitLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetPredictHitLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPWeaponDataComponentProxy::GetMovementTimeStamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetMovementTimeStamp");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType UGPWeaponDataComponentProxy::GetLastStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetLastStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::GetIsFirstWeaponEquip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetIsFirstWeaponEquip");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::GetIsFirstEmptyInspect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetIsFirstEmptyInspect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponDataComponentProxy::GetFppObGPWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetFppObGPWeapon");
    struct
    {
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponDataComponentProxy::GetFirstPersonGPWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetFirstPersonGPWeapon");
    struct
    {
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* UGPWeaponDataComponentProxy::GetFirstPersonCharacterMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetFirstPersonCharacterMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponFireSocketMode UGPWeaponDataComponentProxy::GetFireSocketMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetFireSocketMode");
    struct
    {
        enum EGPWeaponFireSocketMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::GetEnablePoseModify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetEnablePoseModify");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType UGPWeaponDataComponentProxy::GetCurrentStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetCurrentStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::GetContinueFiringCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetContinueFiringCount");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* UGPWeaponDataComponentProxy::GetCharacterSkeletalMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetCharacterSkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* UGPWeaponDataComponentProxy::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetCharacterOwner");
    struct
    {
        struct ACHARACTER* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UGPWeaponDataComponentProxy::GetCharacterName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetCharacterName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPWeaponDataComponentProxy::GetBulletIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "GetBulletIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::EnableLastActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "EnableLastActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentProxy::EnableCommonLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "EnableCommonLog");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPWeaponDataComponentProxy::BP_ProcessGPWeaponInnerEvent(EGPWeaponInnerEvent EventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "BP_ProcessGPWeaponInnerEvent");
    struct
    {
        enum EGPWeaponInnerEvent EventType;
    } Parms{};
    Parms.EventType = (enum EGPWeaponInnerEvent)EventType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponDataComponentProxy::BP_GetNetModeGPWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentProxy", "BP_GetNetModeGPWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponDataComponentState::* ----
void UGPWeaponDataComponentState::RPC_ClientRevertToRemoteTimeline(struct FRepWeaponStateTimeLine RemoteStateTimeline)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentState", "RPC_ClientRevertToRemoteTimeline");
    struct
    {
        struct FRepWeaponStateTimeLine RemoteStateTimeline;
    } Parms{};
    Parms.RemoteStateTimeline = (struct FRepWeaponStateTimeLine)RemoteStateTimeline;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentState::RPC_ClientNotifyStateFrameInValid(int32_t ClientStateNo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentState", "RPC_ClientNotifyStateFrameInValid");
    struct
    {
        int32_t ClientStateNo;
    } Parms{};
    Parms.ClientStateNo = (int32_t)ClientStateNo;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentState::RequestServerVerifyStateFrame(struct FStateFrame WSFrame, float InCheckCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentState", "RequestServerVerifyStateFrame");
    struct
    {
        struct FStateFrame WSFrame;
        float InCheckCode;
    } Parms{};
    Parms.WSFrame = (struct FStateFrame)WSFrame;
    Parms.InCheckCode = (float)InCheckCode;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentState::OnRep_StateInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentState", "OnRep_StateInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponDataComponentState::OnRep_CurStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentState", "OnRep_CurStateType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponDataComponentStateAbility::* ----
uint8_t UGPWeaponDataComponentStateAbility::SwitchToWeaponStateAbilityInner(struct UAbilitySystemComponent* ASC, EGPWeaponStateType StateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateAbility", "SwitchToWeaponStateAbilityInner");
    struct
    {
        struct UAbilitySystemComponent* ASC;
        enum EGPWeaponStateType StateType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ASC = (struct UAbilitySystemComponent*)ASC;
    Parms.StateType = (enum EGPWeaponStateType)StateType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponDataComponentStateAbility::SwitchToWeaponStateAbilityByClass(struct UAbilitySystemComponent* ASC, struct UGPWeaponStateBase* Ability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateAbility", "SwitchToWeaponStateAbilityByClass");
    struct
    {
        struct UAbilitySystemComponent* ASC;
        struct UGPWeaponStateBase* Ability;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ASC = (struct UAbilitySystemComponent*)ASC;
    Parms.Ability = (struct UGPWeaponStateBase*)Ability;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType UGPWeaponDataComponentStateAbility::GetStateTypeByAbility(struct UGPWeaponStateBase* Ability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateAbility", "GetStateTypeByAbility");
    struct
    {
        struct UGPWeaponStateBase* Ability;
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    Parms.Ability = (struct UGPWeaponStateBase*)Ability;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTagContainer UGPWeaponDataComponentStateAbility::GetAbilityTagByStateType(EGPWeaponStateType StateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateAbility", "GetAbilityTagByStateType");
    struct
    {
        enum EGPWeaponStateType StateType;
        struct FGameplayTagContainer ReturnValue;
    } Parms{};
    Parms.StateType = (enum EGPWeaponStateType)StateType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponDataComponentStateInterface::* ----
void IGPWeaponDataComponentStateInterface::SetCurrentStateType(EGPWeaponStateType InStateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "SetCurrentStateType");
    struct
    {
        enum EGPWeaponStateType InStateType;
    } Parms{};
    Parms.InStateType = (enum EGPWeaponStateType)InStateType;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponDataComponentStateInterface::ProcessRecoverActiveState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "ProcessRecoverActiveState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponDataComponentStateInterface::IsReveringState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "IsReveringState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentStateInterface::IsInState(EGPWeaponStateType StateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "IsInState");
    struct
    {
        enum EGPWeaponStateType StateType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StateType = (enum EGPWeaponStateType)StateType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentStateInterface::IsInContinueFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "IsInContinueFire");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentStateInterface::IsFiring()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "IsFiring");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponDataComponentStateInterface::GetStateStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetStateStep");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponDataComponentStateInterface::GetRepStateStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetRepStateStep");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType IGPWeaponDataComponentStateInterface::GetRepLastStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetRepLastStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType IGPWeaponDataComponentStateInterface::GetRepCurrentStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetRepCurrentStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType IGPWeaponDataComponentStateInterface::GetLastStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetLastStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType IGPWeaponDataComponentStateInterface::GetCurrentStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetCurrentStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentStateInterface::GetCurrentStatePredictLeftTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetCurrentStatePredictLeftTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponDataComponentStateInterface::GetCurrentStatePredictDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentStateInterface", "GetCurrentStatePredictDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponDataComponentZoom::* ----
uint8_t UGPWeaponDataComponentZoom::ToggleZoom(int8_t ForceZoom, uint8_t IsQuickZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentZoom", "ToggleZoom");
    struct
    {
        int8_t ForceZoom;
        uint8_t IsQuickZoom;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ForceZoom = (int8_t)ForceZoom;
    Parms.IsQuickZoom = (uint8_t)IsQuickZoom;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPWeaponDataComponentZoom::OnRep_IsZooming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentZoom", "OnRep_IsZooming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IGPWeaponDataComponentZoomInterface::* ----
uint8_t IGPWeaponDataComponentZoomInterface::IsZooming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentZoomInterface", "IsZooming");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponDataComponentZoomInterface::IsEnableZoomOnReloading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataComponentZoomInterface", "IsEnableZoomOnReloading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponDataInterface::* ----
uint8_t IGPWeaponDataInterface::IsSupportComboMeleeAttack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataInterface", "IsSupportComboMeleeAttack");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPWeaponMeleeComboData IGPWeaponDataInterface::GetWeaponMeleeComboData(int32_t InComboDataIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataInterface", "GetWeaponMeleeComboData");
    struct
    {
        int32_t InComboDataIndex;
        struct FGPWeaponMeleeComboData ReturnValue;
    } Parms{};
    Parms.InComboDataIndex = (int32_t)InComboDataIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponDataInterface::GetMeleeComboMaxTimes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponDataInterface", "GetMeleeComboMaxTimes");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponFireModeInterface::* ----
float IGPWeaponFireModeInterface::GetProjectileInitSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeInterface", "GetProjectileInitSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPWeaponFireModeParamsBase* IGPWeaponFireModeInterface::GetFireModeParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeInterface", "GetFireModeParams");
    struct
    {
        struct UGPWeaponFireModeParamsBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponFireModeInterface::GetDamageRateByDistance(float Distance, uint8_t& bOutIsModifyBaseDamage, const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeInterface", "GetDamageRateByDistance");
    struct
    {
        float Distance;
        uint8_t bOutIsModifyBaseDamage;
        struct FHitResult HitResult;
        float ReturnValue;
    } Parms{};
    Parms.Distance = (float)Distance;
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
    bOutIsModifyBaseDamage = Parms.bOutIsModifyBaseDamage;
    return Parms.ReturnValue;
}

void IGPWeaponFireModeInterface::GetDamageDebugInfo(struct FString& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeInterface", "GetDamageDebugInfo");
    struct
    {
        struct FString Result;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

uint8_t IGPWeaponFireModeInterface::EnableProjectileDebugger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeInterface", "EnableProjectileDebugger");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponFireModeInterface::EnableImpactDebugger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeInterface", "EnableImpactDebugger");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponFireModeInterface::CheckPlacementValidAndRestoreCD(const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeInterface", "CheckPlacementValidAndRestoreCD");
    struct
    {
        struct FHitResult HitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponFireModeSpawnable::* ----
void UGPWeaponFireModeSpawnable::OnPreKeep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeSpawnable", "OnPreKeep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFireModeSpawnable::OnLoadAssetCompleted(struct FSoftObjectPath AssetPat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeSpawnable", "OnLoadAssetCompleted");
    struct
    {
        struct FSoftObjectPath AssetPat;
    } Parms{};
    Parms.AssetPat = (struct FSoftObjectPath)AssetPat;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFireModeSpawnable::OnActiveFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeSpawnable", "OnActiveFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFireModeSpawnable::DoFire(EGPWeaponInnerEvent EventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeSpawnable", "DoFire");
    struct
    {
        enum EGPWeaponInnerEvent EventType;
    } Parms{};
    Parms.EventType = (enum EGPWeaponInnerEvent)EventType;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFireModeSpawnable::DelaySpawnActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeSpawnable", "DelaySpawnActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponFireModeThrowable::* ----
uint8_t UGPWeaponFireModeThrowable::ValidateFirePos(const struct FVector& FireLocation, struct FVector& OutLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeThrowable", "ValidateFirePos");
    struct
    {
        struct FVector FireLocation;
        struct FVector OutLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FireLocation = (struct FVector)FireLocation;
    this->ProcessEvent(Func, &Parms);
    OutLocation = Parms.OutLocation;
    return Parms.ReturnValue;
}

// ---- IGPWeaponFireSocketInterface::* ----
void IGPWeaponFireSocketInterface::MarkFireSocketInfoDirty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireSocketInterface", "MarkFireSocketInfoDirty");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponFireSocketInterface::InitWeaponFireSocket(struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> InGPWeaponAppearance, struct TScriptInterface<IGPWeaponProxyInterface> InGPWeaponProxy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireSocketInterface", "InitWeaponFireSocket");
    struct
    {
        struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> InGPWeaponAppearance;
        struct TScriptInterface<IGPWeaponProxyInterface> InGPWeaponProxy;
    } Parms{};
    Parms.InGPWeaponAppearance = (struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface>)InGPWeaponAppearance;
    Parms.InGPWeaponProxy = (struct TScriptInterface<IGPWeaponProxyInterface>)InGPWeaponProxy;
    this->ProcessEvent(Func, &Parms);
}

struct FTransform IGPWeaponFireSocketInterface::GetFireSocketTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireSocketInterface", "GetFireSocketTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> IGPWeaponFireSocketInterface::GetFireSocketPositions(EGPWeaponFireSocketMode FireSocketMode, int32_t BulletIndex, int32_t RequireSocketNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireSocketInterface", "GetFireSocketPositions");
    struct
    {
        enum EGPWeaponFireSocketMode FireSocketMode;
        int32_t BulletIndex;
        int32_t RequireSocketNum;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.FireSocketMode = (enum EGPWeaponFireSocketMode)FireSocketMode;
    Parms.BulletIndex = (int32_t)BulletIndex;
    Parms.RequireSocketNum = (int32_t)RequireSocketNum;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IGPWeaponFireSocketInterface::GetFireSocketPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireSocketInterface", "GetFireSocketPosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FFireSocketInfo> IGPWeaponFireSocketInterface::GetFireSocketInfos(EGPWeaponFireSocketMode FireSocketMode, int32_t BulletIndex, int32_t RequireSocketNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireSocketInterface", "GetFireSocketInfos");
    struct
    {
        enum EGPWeaponFireSocketMode FireSocketMode;
        int32_t BulletIndex;
        int32_t RequireSocketNum;
        struct TArray<struct FFireSocketInfo> ReturnValue;
    } Parms{};
    Parms.FireSocketMode = (enum EGPWeaponFireSocketMode)FireSocketMode;
    Parms.BulletIndex = (int32_t)BulletIndex;
    Parms.RequireSocketNum = (int32_t)RequireSocketNum;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFireSocketInfo IGPWeaponFireSocketInterface::GetFireSocketInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireSocketInterface", "GetFireSocketInfo");
    struct
    {
        struct FFireSocketInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponFSMStateBase::* ----
void UGPWeaponFSMStateBase::OnPredictFinishTimeReach()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFSMStateBase", "OnPredictFinishTimeReach");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponFSMStateCancelPreFire::* ----
void UGPWeaponFSMStateCancelPreFire::OnCancelPreFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFSMStateCancelPreFire", "OnCancelPreFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponFSMStateChangeClip::* ----
void UGPWeaponFSMStateChangeClip::ReloadAmmoDelay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFSMStateChangeClip", "ReloadAmmoDelay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponFSMStateMeleeFiring::* ----
void UGPWeaponFSMStateMeleeFiring::RefreshMeleeComboAttack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFSMStateMeleeFiring", "RefreshMeleeComboAttack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponFuncComponentAppearance::* ----
void UGPWeaponFuncComponentAppearance::UnSetForceKeepFullMipLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "UnSetForceKeepFullMipLevels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::SetForceKeepFullMipLevels(struct USkeletalMeshComponent* InMeshComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "SetForceKeepFullMipLevels");
    struct
    {
        struct USkeletalMeshComponent* InMeshComponent;
    } Parms{};
    Parms.InMeshComponent = (struct USkeletalMeshComponent*)InMeshComponent;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::RefreshWeaponLod()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "RefreshWeaponLod");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::ProcessNoneSocket(uint8_t bAttachToHand, struct USkeletalMeshComponent* MeshComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "ProcessNoneSocket");
    struct
    {
        uint8_t bAttachToHand;
        struct USkeletalMeshComponent* MeshComp;
    } Parms{};
    Parms.bAttachToHand = (uint8_t)bAttachToHand;
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::OnWeaponMeshLoaded(struct USkeletalMeshComponent* MeshComp, struct FGPWeaponMesh WeaponMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "OnWeaponMeshLoaded");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct FGPWeaponMesh WeaponMesh;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.WeaponMesh = (struct FGPWeaponMesh)WeaponMesh;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::OnWeaponMeshAnimInstLoaded(struct USkeletalMeshComponent* MeshComp, struct FGPWeaponMesh MeshInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "OnWeaponMeshAnimInstLoaded");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct FGPWeaponMesh MeshInfo;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.MeshInfo = (struct FGPWeaponMesh)MeshInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::OnCharacterMeshLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "OnCharacterMeshLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::OnCharacterEquipmentVisibleChanged(uint8_t bVisible, const struct FName& ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "OnCharacterEquipmentVisibleChanged");
    struct
    {
        uint8_t bVisible;
        struct FName ItemID;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    Parms.ItemID = (struct FName)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponFuncComponentAppearance::OnCameraModeChanged(uint8_t bNewFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearance", "OnCameraModeChanged");
    struct
    {
        uint8_t bNewFPP;
    } Parms{};
    Parms.bNewFPP = (uint8_t)bNewFPP;
    this->ProcessEvent(Func, &Parms);
}

// ---- IGPWeaponFuncComponentAppearanceInterface::* ----
void IGPWeaponFuncComponentAppearanceInterface::UpdateWeaponMeshVisibility(uint8_t bForceRefreshMeshStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "UpdateWeaponMeshVisibility");
    struct
    {
        uint8_t bForceRefreshMeshStatus;
    } Parms{};
    Parms.bForceRefreshMeshStatus = (uint8_t)bForceRefreshMeshStatus;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponFuncComponentAppearanceInterface::ShouldHideWeaponMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "ShouldHideWeaponMesh");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponFuncComponentAppearanceInterface::SetWeaponRenderMode(ERenderMatrixMode RenderMatrixMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "SetWeaponRenderMode");
    struct
    {
        enum ERenderMatrixMode RenderMatrixMode;
    } Parms{};
    Parms.RenderMatrixMode = (enum ERenderMatrixMode)RenderMatrixMode;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponFuncComponentAppearanceInterface::SetTickInterval(float TickInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "SetTickInterval");
    struct
    {
        float TickInterval;
    } Parms{};
    Parms.TickInterval = (float)TickInterval;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponFuncComponentAppearanceInterface::RefreshWeaponAttachInternal(uint8_t bAttachToHand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "RefreshWeaponAttachInternal");
    struct
    {
        uint8_t bAttachToHand;
    } Parms{};
    Parms.bAttachToHand = (uint8_t)bAttachToHand;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponFuncComponentAppearanceInterface::RefreshWeaponAttach()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "RefreshWeaponAttach");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponFuncComponentAppearanceInterface::OnWeaponAttachChanged(uint8_t bAttachToHand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "OnWeaponAttachChanged");
    struct
    {
        uint8_t bAttachToHand;
    } Parms{};
    Parms.bAttachToHand = (uint8_t)bAttachToHand;
    this->ProcessEvent(Func, &Parms);
}

EGPWeaponAttachBackSocket IGPWeaponFuncComponentAppearanceInterface::GetCurrentAttachBackSocket()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "GetCurrentAttachBackSocket");
    struct
    {
        enum EGPWeaponAttachBackSocket ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponFuncComponentAppearanceInterface::AttachMeshToSocket(uint8_t bMainMesh, const struct FName& TargetSocket)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "AttachMeshToSocket");
    struct
    {
        uint8_t bMainMesh;
        struct FName TargetSocket;
    } Parms{};
    Parms.bMainMesh = (uint8_t)bMainMesh;
    Parms.TargetSocket = (struct FName)TargetSocket;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponFuncComponentAppearanceInterface::ApplyWeaponScale(float InScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFuncComponentAppearanceInterface", "ApplyWeaponScale");
    struct
    {
        float InScale;
    } Parms{};
    Parms.InScale = (float)InScale;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponGlobals::* ----
void UGPWeaponGlobals::SetAssistedAimingEnable(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWeaponGlobals", "SetAssistedAimingEnable");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponGlobals::GetAssistedAimingEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWeaponGlobals", "GetAssistedAimingEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponInterface::* ----
void IGPWeaponInterface::SetWeaponBipodDeploy(uint8_t IsCanWeaponBipodDeploy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "SetWeaponBipodDeploy");
    struct
    {
        uint8_t IsCanWeaponBipodDeploy;
    } Parms{};
    Parms.IsCanWeaponBipodDeploy = (uint8_t)IsCanWeaponBipodDeploy;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponInterface::SetSkillInspectItemKeyToProxyData(struct FName InKey, int32_t RandomIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "SetSkillInspectItemKeyToProxyData");
    struct
    {
        struct FName InKey;
        int32_t RandomIndex;
    } Parms{};
    Parms.InKey = (struct FName)InKey;
    Parms.RandomIndex = (int32_t)RandomIndex;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponInterface::SetSkillInspectItemKey(struct FName InKey, int32_t RandomIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "SetSkillInspectItemKey");
    struct
    {
        struct FName InKey;
        int32_t RandomIndex;
    } Parms{};
    Parms.InKey = (struct FName)InKey;
    Parms.RandomIndex = (int32_t)RandomIndex;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponInterface::SetDepFrameNo(int32_t InDepFrameNo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "SetDepFrameNo");
    struct
    {
        int32_t InDepFrameNo;
    } Parms{};
    Parms.InDepFrameNo = (int32_t)InDepFrameNo;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponInterface::IsSkillWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "IsSkillWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::IsSceneWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "IsSceneWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::IsDepFrameNoValid(int32_t InDepFrameNo, EStateDepFrameCheckMode InCheckMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "IsDepFrameNoValid");
    struct
    {
        int32_t InDepFrameNo;
        enum EStateDepFrameCheckMode InCheckMode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InDepFrameNo = (int32_t)InDepFrameNo;
    Parms.InCheckMode = (enum EStateDepFrameCheckMode)InCheckMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::IsAnimBreak(struct UAnimNotify* InAnimNotify)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "IsAnimBreak");
    struct
    {
        struct UAnimNotify* InAnimNotify;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAnimNotify = (struct UAnimNotify*)InAnimNotify;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::IsAllow1pWeaponMeshTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "IsAllow1pWeaponMeshTick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::GetThrowMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetThrowMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::GetPlaceLocationValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetPlaceLocationValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::GetNeedDefaultAttach()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetNeedDefaultAttach");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponInterface::GetLockProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetLockProgress");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponInterface::GetLockIncreaseValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetLockIncreaseValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponInterface::GetDepFrameNo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetDepFrameNo");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform IGPWeaponInterface::GetDefaultAttachSocketTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetDefaultAttachSocketTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IGPWeaponInterface::GetDefaultAttachSocketName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetDefaultAttachSocketName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponInterface::GetAnimNotifyLogicalBreakType(struct UAnimNotify* InAnimNotify)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "GetAnimNotifyLogicalBreakType");
    struct
    {
        struct UAnimNotify* InAnimNotify;
        int32_t ReturnValue;
    } Parms{};
    Parms.InAnimNotify = (struct UAnimNotify*)InAnimNotify;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::CanWeaponBolt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "CanWeaponBolt");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::CanWeaponBipodDeploy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "CanWeaponBipodDeploy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::CanReload(uint8_t bCheckCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "CanReload");
    struct
    {
        uint8_t bCheckCharacter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bCheckCharacter = (uint8_t)bCheckCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::CanChangeWeaponMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "CanChangeWeaponMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponInterface::CanAutoChangeClip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponInterface", "CanAutoChangeClip");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponManagerInterface::* ----
uint8_t IGPWeaponManagerInterface::IsWeaponExist(const struct FWeaponIdentity& InWeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponManagerInterface", "IsWeaponExist");
    struct
    {
        struct FWeaponIdentity InWeaponIdentity;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWeaponIdentity = (struct FWeaponIdentity)InWeaponIdentity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> IGPWeaponManagerInterface::GetWeaponByIdentity(const struct FWeaponIdentity& InWeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponManagerInterface", "GetWeaponByIdentity");
    struct
    {
        struct FWeaponIdentity InWeaponIdentity;
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    Parms.InWeaponIdentity = (struct FWeaponIdentity)InWeaponIdentity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponPhysicsInterface::* ----
uint8_t IGPWeaponPhysicsInterface::IsPhysicsAssetValidateForWeaponTrace(struct UPhysicsAsset* PhysicsAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponPhysicsInterface", "IsPhysicsAssetValidateForWeaponTrace");
    struct
    {
        struct UPhysicsAsset* PhysicsAsset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PhysicsAsset = (struct UPhysicsAsset*)PhysicsAsset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponPhysicsInterface::GetWeaponTraceCharacterMesh(uint8_t bIngoreHideen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponPhysicsInterface", "GetWeaponTraceCharacterMesh");
    struct
    {
        uint8_t bIngoreHideen;
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    Parms.bIngoreHideen = (uint8_t)bIngoreHideen;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponPhysicsInterface::GetBoneTransform(struct FName BoneName, struct FTransform& OutTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponPhysicsInterface", "GetBoneTransform");
    struct
    {
        struct FName BoneName;
        struct FTransform OutTransform;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BoneName = (struct FName)BoneName;
    this->ProcessEvent(Func, &Parms);
    OutTransform = Parms.OutTransform;
    return Parms.ReturnValue;
}

// ---- IGPWeaponProxyInterface::* ----
void IGPWeaponProxyInterface::ThirdPersonStateGuard()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "ThirdPersonStateGuard");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponProxyInterface::SupportAnimShellDrop(uint8_t bZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SupportAnimShellDrop");
    struct
    {
        uint8_t bZoom;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponProxyInterface::SetWeaponInteractive(uint8_t InterActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetWeaponInteractive");
    struct
    {
        uint8_t InterActive;
    } Parms{};
    Parms.InterActive = (uint8_t)InterActive;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::SetViewEnable(uint8_t IsEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetViewEnable");
    struct
    {
        uint8_t IsEnable;
    } Parms{};
    Parms.IsEnable = (uint8_t)IsEnable;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::SetSwitchWeaponContext(ESwitchWeaponContext InSwitchWeaponContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetSwitchWeaponContext");
    struct
    {
        enum ESwitchWeaponContext InSwitchWeaponContext;
    } Parms{};
    Parms.InSwitchWeaponContext = (enum ESwitchWeaponContext)InSwitchWeaponContext;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::SetSwitchType(EWeaponSwitchType InSwitchType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetSwitchType");
    struct
    {
        enum EWeaponSwitchType InSwitchType;
    } Parms{};
    Parms.InSwitchType = (enum EWeaponSwitchType)InSwitchType;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::SetSupportAnimShellDrop(uint8_t bZoom, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetSupportAnimShellDrop");
    struct
    {
        uint8_t bZoom;
        uint8_t bValue;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::SetLastHitInfo(struct FBulletHitInfo& HitInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetLastHitInfo");
    struct
    {
        struct FBulletHitInfo HitInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    HitInfo = Parms.HitInfo;
}

void IGPWeaponProxyInterface::SetIsFirstWeaponEquip(uint8_t IsFirstWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetIsFirstWeaponEquip");
    struct
    {
        uint8_t IsFirstWeapon;
    } Parms{};
    Parms.IsFirstWeapon = (uint8_t)IsFirstWeapon;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::SetIsFirstEmptyInspect(uint8_t IsFirstEmptyInspect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "SetIsFirstEmptyInspect");
    struct
    {
        uint8_t IsFirstEmptyInspect;
    } Parms{};
    Parms.IsFirstEmptyInspect = (uint8_t)IsFirstEmptyInspect;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::OnSkeletalMeshReady(struct USkeletalMeshComponent* Mesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "OnSkeletalMeshReady");
    struct
    {
        struct USkeletalMeshComponent* Mesh;
    } Parms{};
    Parms.Mesh = (struct USkeletalMeshComponent*)Mesh;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponProxyInterface::OnAllSkeletalMeshReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "OnAllSkeletalMeshReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponProxyInterface::IsZooming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsZooming");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsWeaponUsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsWeaponUsed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsWeaponUnderCurrentXPP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsWeaponUnderCurrentXPP");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsWeaponActorVisibleInDPVS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsWeaponActorVisibleInDPVS");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsWeaponActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsWeaponActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsVisible");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsViewEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsViewEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsThrowableWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsThrowableWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsTestFullWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsTestFullWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsSecondaryWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsSecondaryWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsSceneWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsSceneWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsRunningLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsRunningLogic");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsModularWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsModularWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsMeleeWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsMeleeWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsMainWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsMainWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsMainAttachWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsMainAttachWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsInStateInteract()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsInStateInteract");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsInStateFiring()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsInStateFiring");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsInStateChangeClip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsInStateChangeClip");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsInState(EGPWeaponStateType InStateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsInState");
    struct
    {
        enum EGPWeaponStateType InStateType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStateType = (enum EGPWeaponStateType)InStateType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsInPending()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsInPending");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsIgnorePreFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsIgnorePreFire");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsHideAllWeapon_RetIsContainExactTag(uint8_t& bContainExactTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsHideAllWeapon_RetIsContainExactTag");
    struct
    {
        uint8_t bContainExactTag;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    bContainExactTag = Parms.bContainExactTag;
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsHideAllWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsHideAllWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsFppView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsFppView");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsEnableZoomOnReloading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsEnableZoomOnReloading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsEmptyHand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsEmptyHand");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsCharacterOwnerPlayerAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsCharacterOwnerPlayerAI");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsCharacterOwnerOnFPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsCharacterOwnerOnFPPMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsCharacterOwnerOnDefaultFPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsCharacterOwnerOnDefaultFPPMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsCharacterOwnerAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsCharacterOwnerAI");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::IsAllow1pWeaponMeshTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "IsAllow1pWeaponMeshTick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::HasNetModeOnServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "HasNetModeOnServer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::HasActivateBefore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "HasActivateBefore");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetWeaponTypeValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponTypeValue");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetWeaponSlot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponSlot");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponProxyInterface::GetWeaponSecondaryMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponSecondaryMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* IGPWeaponProxyInterface::GetWeaponSecondaryBaseMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponSecondaryBaseMesh");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponMode IGPWeaponProxyInterface::GetWeaponMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponMode");
    struct
    {
        enum EGPWeaponMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponProxyInterface::GetWeaponMainMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponMainMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetWeaponInteractive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponInteractive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t IGPWeaponProxyInterface::GetWeaponId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t IGPWeaponProxyInterface::GetWeaponGuid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponGuid");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t IGPWeaponProxyInterface::GetWeaponEquipPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponEquipPosition");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponProxyInterface::GetWeaponDisplayMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponDisplayMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* IGPWeaponProxyInterface::GetWeaponBaseMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponBaseMesh");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponAppearanceAttachType IGPWeaponProxyInterface::GetWeaponAttachType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponAttachType");
    struct
    {
        enum EGPWeaponAppearanceAttachType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponAttachBackSocket IGPWeaponProxyInterface::GetWeaponAttachBackSocket()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponAttachBackSocket");
    struct
    {
        enum EGPWeaponAttachBackSocket ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform IGPWeaponProxyInterface::GetWeaponAttachBackRelativeTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponAttachBackRelativeTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponAttachBackConflict IGPWeaponProxyInterface::GetWeaponAttachBackConflict()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponAttachBackConflict");
    struct
    {
        enum EGPWeaponAttachBackConflict ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPASC_AttributeSet_Minimal> IGPWeaponProxyInterface::GetWeaponASC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponASC");
    struct
    {
        struct TScriptInterface<IGPASC_AttributeSet_Minimal> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* IGPWeaponProxyInterface::GetWeaponActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetWeaponActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponProxyInterface::GetThirdPersonCharacterMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetThirdPersonCharacterMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESwitchWeaponContext IGPWeaponProxyInterface::GetSwitchWeaponContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetSwitchWeaponContext");
    struct
    {
        enum ESwitchWeaponContext ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWeaponSwitchType IGPWeaponProxyInterface::GetSwitchType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetSwitchType");
    struct
    {
        enum EWeaponSwitchType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetNeedDefaultAttach()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetNeedDefaultAttach");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType IGPWeaponProxyInterface::GetLastStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetLastStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBulletHitInfo IGPWeaponProxyInterface::GetLastHitInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetLastHitInfo");
    struct
    {
        struct FBulletHitInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetIsFirstWeaponEquip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetIsFirstWeaponEquip");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetIsFirstEmptyInspect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetIsFirstEmptyInspect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponFuncComponentAppearanceInterface> IGPWeaponProxyInterface::GetGPWeaponFuncAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetGPWeaponFuncAppearance");
    struct
    {
        struct TScriptInterface<IGPWeaponFuncComponentAppearanceInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> IGPWeaponProxyInterface::GetGPWeaponDataAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetGPWeaponDataAppearance");
    struct
    {
        struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponDataInterface> IGPWeaponProxyInterface::GetGPWeaponData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetGPWeaponData");
    struct
    {
        struct TScriptInterface<IGPWeaponDataInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponProxyInterface::GetFirstPersonCharacterMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetFirstPersonCharacterMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponFireSocketMode IGPWeaponProxyInterface::GetFireSocketMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetFireSocketMode");
    struct
    {
        enum EGPWeaponFireSocketMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetEnablePoseModify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetEnablePoseModify");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform IGPWeaponProxyInterface::GetDefaultAttachSocketTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetDefaultAttachSocketTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IGPWeaponProxyInterface::GetDefaultAttachSocketName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetDefaultAttachSocketName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType IGPWeaponProxyInterface::GetCurrentStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetCurrentStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::GetContinueFiringCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetContinueFiringCount");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* IGPWeaponProxyInterface::GetCharacterSkeletalMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetCharacterSkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* IGPWeaponProxyInterface::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetCharacterOwner");
    struct
    {
        struct ACHARACTER* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IGPWeaponProxyInterface::GetCharacterName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetCharacterName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPWeaponProxyInterface::GetBulletIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "GetBulletIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::EnableProjectileDebugger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "EnableProjectileDebugger");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::EnableLastActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "EnableLastActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponProxyInterface::EnableCommonLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponProxyInterface", "EnableCommonLog");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPWeaponReplicateComponent::* ----
void UGPWeaponReplicateComponent::UpdateOwnerClientAttachments()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "UpdateOwnerClientAttachments");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::SwitchToWeapon(uint8_t WeaponSlot, const struct FWeaponIdentity& InWeaponIdentity, struct TSoftClassPtr<struct AActor*> InWeapClass, uint8_t bReserveLastWeapon, EWeaponSwitchType SwitchType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "SwitchToWeapon");
    struct
    {
        uint8_t WeaponSlot;
        struct FWeaponIdentity InWeaponIdentity;
        struct TSoftClassPtr<struct AActor*> InWeapClass;
        uint8_t bReserveLastWeapon;
        enum EWeaponSwitchType SwitchType;
    } Parms{};
    Parms.WeaponSlot = (uint8_t)WeaponSlot;
    Parms.InWeaponIdentity = (struct FWeaponIdentity)InWeaponIdentity;
    Parms.InWeapClass = (struct TSoftClassPtr<struct AActor*>)InWeapClass;
    Parms.bReserveLastWeapon = (uint8_t)bReserveLastWeapon;
    Parms.SwitchType = (enum EWeaponSwitchType)SwitchType;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::RepHitInfo(struct FGPWeaponHitImpactRepInfo RepInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "RepHitInfo");
    struct
    {
        struct FGPWeaponHitImpactRepInfo RepInfo;
    } Parms{};
    Parms.RepInfo = (struct FGPWeaponHitImpactRepInfo)RepInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::RemoveInventoryFromPlayer(const struct FWeaponIdentity& RemoveWeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "RemoveInventoryFromPlayer");
    struct
    {
        struct FWeaponIdentity RemoveWeaponIdentity;
    } Parms{};
    Parms.RemoveWeaponIdentity = (struct FWeaponIdentity)RemoveWeaponIdentity;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::OnRep_WeaponInfoList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "OnRep_WeaponInfoList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::OnRep_WeaponEventList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "OnRep_WeaponEventList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::OnRep_RefreshWeaponData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "OnRep_RefreshWeaponData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::OnRep_DisplayRepHitInfos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "OnRep_DisplayRepHitInfos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::OnRep_CurrentActiveWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "OnRep_CurrentActiveWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastReliableWeaponEvent(struct FWeaponIdentity WeaponIdentity, uint8_t EventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastReliableWeaponEvent");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        uint8_t EventType;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    Parms.EventType = (uint8_t)EventType;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastReliableEndFireEventForAudio(struct FWeaponIdentity WeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastReliableEndFireEventForAudio");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastMergedHitInfo(struct TArray<struct FGPWeaponHitImpactRepInfo> HitInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastMergedHitInfo");
    struct
    {
        struct TArray<struct FGPWeaponHitImpactRepInfo> HitInfos;
    } Parms{};
    Parms.HitInfos = (struct TArray<struct FGPWeaponHitImpactRepInfo>)HitInfos;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastMergedFireEventReliable(struct TArray<struct UObject*> ObjectReferences, struct TArray<struct FWeaponIdentity> WeaponIdentities, struct TArray<struct FWeaponFireMulticastInfo> FireInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastMergedFireEventReliable");
    struct
    {
        struct TArray<struct UObject*> ObjectReferences;
        struct TArray<struct FWeaponIdentity> WeaponIdentities;
        struct TArray<struct FWeaponFireMulticastInfo> FireInfos;
    } Parms{};
    Parms.ObjectReferences = (struct TArray<struct UObject*>)ObjectReferences;
    Parms.WeaponIdentities = (struct TArray<struct FWeaponIdentity>)WeaponIdentities;
    Parms.FireInfos = (struct TArray<struct FWeaponFireMulticastInfo>)FireInfos;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastMergedFireEvent(struct TArray<struct UObject*> ObjectReferences, struct TArray<struct FWeaponIdentity> WeaponIdentities, struct TArray<struct FWeaponFireMulticastInfo> FireInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastMergedFireEvent");
    struct
    {
        struct TArray<struct UObject*> ObjectReferences;
        struct TArray<struct FWeaponIdentity> WeaponIdentities;
        struct TArray<struct FWeaponFireMulticastInfo> FireInfos;
    } Parms{};
    Parms.ObjectReferences = (struct TArray<struct UObject*>)ObjectReferences;
    Parms.WeaponIdentities = (struct TArray<struct FWeaponIdentity>)WeaponIdentities;
    Parms.FireInfos = (struct TArray<struct FWeaponFireMulticastInfo>)FireInfos;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastFireEventReliable(struct FWeaponIdentity WeaponIdentity, struct FWeaponFireMulticastInfo FireInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastFireEventReliable");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        struct FWeaponFireMulticastInfo FireInfo;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    Parms.FireInfo = (struct FWeaponFireMulticastInfo)FireInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastFireEventForAudio(struct FWeaponIdentity WeaponIdentity, struct FWeaponFireMulticastInfo FireInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastFireEventForAudio");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        struct FWeaponFireMulticastInfo FireInfo;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    Parms.FireInfo = (struct FWeaponFireMulticastInfo)FireInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::MulticastFireEvent(struct FWeaponIdentity WeaponIdentity, struct FWeaponFireMulticastInfo FireInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "MulticastFireEvent");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        struct FWeaponFireMulticastInfo FireInfo;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    Parms.FireInfo = (struct FWeaponFireMulticastInfo)FireInfo;
    this->ProcessEvent(Func, &Parms);
}

uint64_t UGPWeaponReplicateComponent::GetWeaponId(const struct FWeaponIdentity& WeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetWeaponId");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        uint64_t ReturnValue;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UGPWeaponReplicateComponent::GetWeaponEquipPosition(const struct FWeaponIdentity& WeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetWeaponEquipPosition");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        uint64_t ReturnValue;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponReplicateComponent::GetThirdPersponWeaponByIdentity(const struct FWeaponIdentity& ServerWeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetThirdPersponWeaponByIdentity");
    struct
    {
        struct FWeaponIdentity ServerWeaponIdentity;
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    Parms.ServerWeaponIdentity = (struct FWeaponIdentity)ServerWeaponIdentity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponReplicateComponent::GetOrCreateWeaponAttachment(const struct FWeaponIdentity& WeaponIdentity, const struct TSoftClassPtr<struct AActor*>& WeaponAttachmentType, uint8_t bSkip3PEmptyHand, uint8_t b3PCanDelayCreateWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetOrCreateWeaponAttachment");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        struct TSoftClassPtr<struct AActor*> WeaponAttachmentType;
        uint8_t bSkip3PEmptyHand;
        uint8_t b3PCanDelayCreateWeapon;
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    Parms.WeaponAttachmentType = (struct TSoftClassPtr<struct AActor*>)WeaponAttachmentType;
    Parms.bSkip3PEmptyHand = (uint8_t)bSkip3PEmptyHand;
    Parms.b3PCanDelayCreateWeapon = (uint8_t)b3PCanDelayCreateWeapon;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponReplicateComponent::GetLastThirdPersonWeapon(uint8_t WeaponSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetLastThirdPersonWeapon");
    struct
    {
        uint8_t WeaponSlot;
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    Parms.WeaponSlot = (uint8_t)WeaponSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponReplicateComponent::GetFirstPersonWeapon(const struct FWeaponIdentity& WeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetFirstPersonWeapon");
    struct
    {
        struct FWeaponIdentity WeaponIdentity;
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    Parms.WeaponIdentity = (struct FWeaponIdentity)WeaponIdentity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponReplicateComponent::GetEmptyHandWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetEmptyHandWeapon");
    struct
    {
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPWeaponReplicateComponent::GetDebugString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetDebugString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponReplicateComponent::GetCurrentThirdPersonWeapon(uint8_t WeaponSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "GetCurrentThirdPersonWeapon");
    struct
    {
        uint8_t WeaponSlot;
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    Parms.WeaponSlot = (uint8_t)WeaponSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPWeaponReplicateComponent::DestroyWeapon(const struct TScriptInterface<IGPWeaponInterface>& Weapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "DestroyWeapon");
    struct
    {
        struct TScriptInterface<IGPWeaponInterface> Weapon;
    } Parms{};
    Parms.Weapon = (struct TScriptInterface<IGPWeaponInterface>)Weapon;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::DestroyAllLocalAttachment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "DestroyAllLocalAttachment");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponReplicateComponent::ClearAttachment(const struct FWeaponIdentity& RemoveWeaponIdentity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponReplicateComponent", "ClearAttachment");
    struct
    {
        struct FWeaponIdentity RemoveWeaponIdentity;
    } Parms{};
    Parms.RemoveWeaponIdentity = (struct FWeaponIdentity)RemoveWeaponIdentity;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPWeaponStateBase::* ----
uint8_t UGPWeaponStateBase::SetAttributeSetFloatValue(struct FGameplayAttribute Attribute, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "SetAttributeSetFloatValue");
    struct
    {
        struct FGameplayAttribute Attribute;
        float Value;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPWeaponStateBase::ProcessWeaponEventToState(EGPWeaponStateEvent RepInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "ProcessWeaponEventToState");
    struct
    {
        enum EGPWeaponStateEvent RepInfo;
    } Parms{};
    Parms.RepInfo = (enum EGPWeaponStateEvent)RepInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponStateBase::ProcessWeaponEvent(EGPWeaponStateEvent RepInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "ProcessWeaponEvent");
    struct
    {
        enum EGPWeaponStateEvent RepInfo;
    } Parms{};
    Parms.RepInfo = (enum EGPWeaponStateEvent)RepInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPWeaponStateBase::OnAutoEndState(uint8_t bIsTimeout)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "OnAutoEndState");
    struct
    {
        uint8_t bIsTimeout;
    } Parms{};
    Parms.bIsTimeout = (uint8_t)bIsTimeout;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponStateBase::IsWeaponAvailable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "IsWeaponAvailable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPWeaponStateBase::IsMeetAnyAbilityExecCond(uint8_t ExecInServer, uint8_t ExecInStandAlone, uint8_t ExecInAutonomousProxy, uint8_t ExecInAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "IsMeetAnyAbilityExecCond");
    struct
    {
        uint8_t ExecInServer;
        uint8_t ExecInStandAlone;
        uint8_t ExecInAutonomousProxy;
        uint8_t ExecInAI;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ExecInServer = (uint8_t)ExecInServer;
    Parms.ExecInStandAlone = (uint8_t)ExecInStandAlone;
    Parms.ExecInAutonomousProxy = (uint8_t)ExecInAutonomousProxy;
    Parms.ExecInAI = (uint8_t)ExecInAI;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TScriptInterface<IGPWeaponInterface> UGPWeaponStateBase::GetWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "GetWeapon");
    struct
    {
        struct TScriptInterface<IGPWeaponInterface> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponStateType UGPWeaponStateBase::GetGPStateType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "GetGPStateType");
    struct
    {
        enum EGPWeaponStateType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPWeaponFiringMode UGPWeaponStateBase::GetFiringMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "GetFiringMode");
    struct
    {
        enum EGPWeaponFiringMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPWeaponStateBase::GetAttributeSetFloatValueBase(struct FGameplayAttribute Attribute, uint8_t& bFoundAttribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "GetAttributeSetFloatValueBase");
    struct
    {
        struct FGameplayAttribute Attribute;
        uint8_t bFoundAttribute;
        float ReturnValue;
    } Parms{};
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    this->ProcessEvent(Func, &Parms);
    bFoundAttribute = Parms.bFoundAttribute;
    return Parms.ReturnValue;
}

float UGPWeaponStateBase::GetAttributeSetFloatValue(struct FGameplayAttribute Attribute, uint8_t& bFoundAttribute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "GetAttributeSetFloatValue");
    struct
    {
        struct FGameplayAttribute Attribute;
        uint8_t bFoundAttribute;
        float ReturnValue;
    } Parms{};
    Parms.Attribute = (struct FGameplayAttribute)Attribute;
    this->ProcessEvent(Func, &Parms);
    bFoundAttribute = Parms.bFoundAttribute;
    return Parms.ReturnValue;
}

uint8_t UGPWeaponStateBase::ActivateGPState(EGPWeaponStateType StateType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponStateBase", "ActivateGPState");
    struct
    {
        enum EGPWeaponStateType StateType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StateType = (enum EGPWeaponStateType)StateType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponTickInterface::* ----
void IGPWeaponTickInterface::WeaponTick(float DeltaSecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickInterface", "WeaponTick");
    struct
    {
        float DeltaSecond;
    } Parms{};
    Parms.DeltaSecond = (float)DeltaSecond;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponTickInterface::SetWeaponTickInterval(float InTickInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickInterface", "SetWeaponTickInterval");
    struct
    {
        float InTickInterval;
    } Parms{};
    Parms.InTickInterval = (float)InTickInterval;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponTickInterface::SetWeaponTickEnabled(struct UObject* WorldContext, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickInterface", "SetWeaponTickEnabled");
    struct
    {
        struct UObject* WorldContext;
        uint8_t bEnable;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPWeaponTickInterface::IsWeaponTickEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickInterface", "IsWeaponTickEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IGPWeaponTickInterface::GetTickInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickInterface", "GetTickInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPWeaponTickInterface::CanEverWeaponTick(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickInterface", "CanEverWeaponTick");
    struct
    {
        struct UObject* WorldContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPWeaponTickActorInterface::* ----
void IGPWeaponTickActorInterface::WeaponTick(float DeltaSecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickActorInterface", "WeaponTick");
    struct
    {
        float DeltaSecond;
    } Parms{};
    Parms.DeltaSecond = (float)DeltaSecond;
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponTickActorInterface::ResetWeaponTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickActorInterface", "ResetWeaponTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPWeaponTickActorInterface::RemWeaponTickObject(struct TScriptInterface<IGPWeaponTickInterface> WeaponTickObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickActorInterface", "RemWeaponTickObject");
    struct
    {
        struct TScriptInterface<IGPWeaponTickInterface> WeaponTickObj;
    } Parms{};
    Parms.WeaponTickObj = (struct TScriptInterface<IGPWeaponTickInterface>)WeaponTickObj;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct TScriptInterface<IGPWeaponTickInterface>> IGPWeaponTickActorInterface::GetWeaponTickObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickActorInterface", "GetWeaponTickObjects");
    struct
    {
        struct TArray<struct TScriptInterface<IGPWeaponTickInterface>> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPWeaponTickActorInterface::AddWeaponTickObject(struct UObject* WorldContext, struct TScriptInterface<IGPWeaponTickInterface> WeaponTickObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponTickActorInterface", "AddWeaponTickObject");
    struct
    {
        struct UObject* WorldContext;
        struct TScriptInterface<IGPWeaponTickInterface> WeaponTickObj;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.WeaponTickObj = (struct TScriptInterface<IGPWeaponTickInterface>)WeaponTickObj;
    this->ProcessEvent(Func, &Parms);
}

// ---- IWeaponStateTimeLineOwnerInterface::* ----
uint8_t IWeaponStateTimeLineOwnerInterface::ServerVerifyStateFrameImp(const struct FStateFrame& WSFrame, float InCheckCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponStateTimeLineOwnerInterface", "ServerVerifyStateFrameImp");
    struct
    {
        struct FStateFrame WSFrame;
        float InCheckCode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WSFrame = (struct FStateFrame)WSFrame;
    Parms.InCheckCode = (float)InCheckCode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IWeaponStateTimeLineOwnerInterface::OnReceiveRemoteStateInfo(const struct FRepWeaponStateTimeLine& RepStateInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponStateTimeLineOwnerInterface", "OnReceiveRemoteStateInfo");
    struct
    {
        struct FRepWeaponStateTimeLine RepStateInfo;
    } Parms{};
    Parms.RepStateInfo = (struct FRepWeaponStateTimeLine)RepStateInfo;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IWeaponStateTimeLineOwnerInterface::DoVerifyStateFrame(EGPWeaponStateType OriginState, const struct FStateFrame& WSFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponStateTimeLineOwnerInterface", "DoVerifyStateFrame");
    struct
    {
        enum EGPWeaponStateType OriginState;
        struct FStateFrame WSFrame;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OriginState = (enum EGPWeaponStateType)OriginState;
    Parms.WSFrame = (struct FStateFrame)WSFrame;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IWeaponStateTimeLineOwnerInterface::DoAntiCheatCheck(const struct FStateFrame& WSFrame, float InCheckCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponStateTimeLineOwnerInterface", "DoAntiCheatCheck");
    struct
    {
        struct FStateFrame WSFrame;
        float InCheckCode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WSFrame = (struct FStateFrame)WSFrame;
    Parms.InCheckCode = (float)InCheckCode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IWeaponStateTimeLineOwnerInterface::ClientNotifyStateFrameInValidImp(int32_t FrameNo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponStateTimeLineOwnerInterface", "ClientNotifyStateFrameInValidImp");
    struct
    {
        int32_t FrameNo;
    } Parms{};
    Parms.FrameNo = (int32_t)FrameNo;
    this->ProcessEvent(Func, &Parms);
}

void IWeaponStateTimeLineOwnerInterface::AddStateFrame(const struct FStateFrame& WSFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponStateTimeLineOwnerInterface", "AddStateFrame");
    struct
    {
        struct FStateFrame WSFrame;
    } Parms{};
    Parms.WSFrame = (struct FStateFrame)WSFrame;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
