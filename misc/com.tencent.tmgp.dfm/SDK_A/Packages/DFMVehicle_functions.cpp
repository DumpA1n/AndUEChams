#include "DFMVehicle.hpp"
#include "AIModule.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GameCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ADFMVehicleThermalSmoke::* ----
void ADFMVehicleThermalSmoke::OnTriggerEndOverlapped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleThermalSmoke", "OnTriggerEndOverlapped");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleThermalSmoke::OnTriggerBeginOverlapped(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleThermalSmoke", "OnTriggerBeginOverlapped");
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

void ADFMVehicleThermalSmoke::OnRep_CurrentShieldRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleThermalSmoke", "OnRep_CurrentShieldRadius");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMVehicleBase::* ----
void ADFMVehicleBase::VehicleReset(EVehicleResetType Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "VehicleReset");
    struct
    {
        enum EVehicleResetType Flag;
    } Parms{};
    Parms.Flag = (enum EVehicleResetType)Flag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::UpdateVehicleOutLineEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "UpdateVehicleOutLineEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::TryDetachVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "TryDetachVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::TryControlVehicle(struct AActor* NewOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "TryControlVehicle");
    struct
    {
        struct AActor* NewOwner;
    } Parms{};
    Parms.NewOwner = (struct AActor*)NewOwner;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::TeleportToLegalTransformFail(int32_t FailReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "TeleportToLegalTransformFail");
    struct
    {
        int32_t FailReason;
    } Parms{};
    Parms.FailReason = (int32_t)FailReason;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::TeleportToLegalTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "TeleportToLegalTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::StopSupply(float CoolDownTime, struct AActor* AmmoSupplyStation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "StopSupply");
    struct
    {
        float CoolDownTime;
        struct AActor* AmmoSupplyStation;
    } Parms{};
    Parms.CoolDownTime = (float)CoolDownTime;
    Parms.AmmoSupplyStation = (struct AActor*)AmmoSupplyStation;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMVehicleBase::SetVehicleOutLineEffect(uint8_t Active, EOutLineEffectType OutLineEffectType, int32_t OutLineValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "SetVehicleOutLineEffect");
    struct
    {
        uint8_t Active;
        enum EOutLineEffectType OutLineEffectType;
        int32_t OutLineValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Active = (uint8_t)Active;
    Parms.OutLineEffectType = (enum EOutLineEffectType)OutLineEffectType;
    Parms.OutLineValue = (int32_t)OutLineValue;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMVehicleBase::SetVehicleHiddenAll(uint8_t bHide, uint8_t bPropagateToPassenger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "SetVehicleHiddenAll");
    struct
    {
        uint8_t bHide;
        uint8_t bPropagateToPassenger;
    } Parms{};
    Parms.bHide = (uint8_t)bHide;
    Parms.bPropagateToPassenger = (uint8_t)bPropagateToPassenger;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::SetRunningState(uint8_t IsRunning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "SetRunningState");
    struct
    {
        uint8_t IsRunning;
    } Parms{};
    Parms.IsRunning = (uint8_t)IsRunning;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::SetLaserLockingState(int32_t CampId, struct FVehicleLockInfo& LockInfo, ELockerSubType InSubType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "SetLaserLockingState");
    struct
    {
        int32_t CampId;
        struct FVehicleLockInfo LockInfo;
        enum ELockerSubType InSubType;
    } Parms{};
    Parms.CampId = (int32_t)CampId;
    Parms.InSubType = (enum ELockerSubType)InSubType;
    this->ProcessEvent(Func, &Parms);
    LockInfo = Parms.LockInfo;
}

void ADFMVehicleBase::ServerBroadcastVehicleDied()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "ServerBroadcastVehicleDied");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::SendLegalTransform(struct FVector Position, struct FRotator Rotation, float LinearVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "SendLegalTransform");
    struct
    {
        struct FVector Position;
        struct FRotator Rotation;
        float LinearVelocity;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.LinearVelocity = (float)LinearVelocity;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::SendInitLegalTransform(struct FVector Position, struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "SendInitLegalTransform");
    struct
    {
        struct FVector Position;
        struct FRotator Rotation;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.Rotation = (struct FRotator)Rotation;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::RecordThreatValue(int32_t InThreatValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "RecordThreatValue");
    struct
    {
        int32_t InThreatValue;
    } Parms{};
    Parms.InThreatValue = (int32_t)InThreatValue;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::RecordSpawnDateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "RecordSpawnDateTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::RecordClearHighThreatValueDateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "RecordClearHighThreatValueDateTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::RecordBecomeHighThreatVehicleDateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "RecordBecomeHighThreatVehicleDateTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnVehicleRollover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnVehicleRollover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnVehicleResetBlueprint(EVehicleResetType Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnVehicleResetBlueprint");
    struct
    {
        enum EVehicleResetType Flag;
    } Parms{};
    Parms.Flag = (enum EVehicleResetType)Flag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnVehicleReset(EVehicleResetType Flag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnVehicleReset");
    struct
    {
        enum EVehicleResetType Flag;
    } Parms{};
    Parms.Flag = (enum EVehicleResetType)Flag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnVehicleHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnVehicleHit");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnVehicleDestruction(struct FName BrokenPartName, int32_t BodyFunc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnVehicleDestruction");
    struct
    {
        struct FName BrokenPartName;
        int32_t BodyFunc;
    } Parms{};
    Parms.BrokenPartName = (struct FName)BrokenPartName;
    Parms.BodyFunc = (int32_t)BodyFunc;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnVehicleDead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnVehicleDead");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnRep_SupplyCDEndTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnRep_SupplyCDEndTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnRep_MarkerCampTeamId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnRep_MarkerCampTeamId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnRep_LockedStateInfos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnRep_LockedStateInfos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnRep_LaserLockStateInfosWithSubType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnRep_LaserLockStateInfosWithSubType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnRep_LaserLockedStateInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnRep_LaserLockedStateInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnRep_IsSupplying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnRep_IsSupplying");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnCharacterImpactCallback(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnCharacterImpactCallback");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::OnBreakableItemBaseBreakPostUpdate(struct AActor* InBreakableItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "OnBreakableItemBaseBreakPostUpdate");
    struct
    {
        struct AActor* InBreakableItem;
    } Parms{};
    Parms.InBreakableItem = (struct AActor*)InBreakableItem;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::MulticastSetOutLineEffectData(int32_t OutLineBitArry, int32_t ProxSensorMark, uint8_t bForceClean)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "MulticastSetOutLineEffectData");
    struct
    {
        int32_t OutLineBitArry;
        int32_t ProxSensorMark;
        uint8_t bForceClean;
    } Parms{};
    Parms.OutLineBitArry = (int32_t)OutLineBitArry;
    Parms.ProxSensorMark = (int32_t)ProxSensorMark;
    Parms.bForceClean = (uint8_t)bForceClean;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::KillVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "KillVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMVehicleBase::IsVehicleInited()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "IsVehicleInited");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMVehicleBase::IsRunningState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "IsRunningState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMVehicleBase::IsPlayerVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "IsPlayerVehicle");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMVehicleBase::IsPawnTeammate(struct APawn* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "IsPawnTeammate");
    struct
    {
        struct APawn* CHARACTER;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct APawn*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMVehicleBase::GMResetVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GMResetVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::GMAddDamageToComponent(struct FName ComponentName, float Damage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GMAddDamageToComponent");
    struct
    {
        struct FName ComponentName;
        float Damage;
    } Parms{};
    Parms.ComponentName = (struct FName)ComponentName;
    Parms.Damage = (float)Damage;
    this->ProcessEvent(Func, &Parms);
}

struct AWeaponBase* ADFMVehicleBase::GetVehicleGun()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetVehicleGun");
    struct
    {
        struct AWeaponBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ADFMVehicleBase::GetSpawnDateTimeString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetSpawnDateTimeString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMVehicleBase::GetOffWhenDeath(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetOffWhenDeath");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ADFMVehicleBase::GetLastVelocity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetLastVelocity");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ADFMVehicleBase::GetDropDownPointTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetDropDownPointTest");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFScenceWeaponPawn* ADFMVehicleBase::GetDFScenceWeaponPawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetDFScenceWeaponPawn");
    struct
    {
        struct ADFScenceWeaponPawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ADFMVehicleBase::GetClearHighThreatValueDateTimeString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetClearHighThreatValueDateTimeString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ADFMVehicleBase::GetBecomeHighThreatVehicleDateTimeString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "GetBecomeHighThreatVehicleDateTimeString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMVehicleBase::EndVehicleOutLineEffect(EOutLineEffectType OutLineEffectType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "EndVehicleOutLineEffect");
    struct
    {
        enum EOutLineEffectType OutLineEffectType;
    } Parms{};
    Parms.OutLineEffectType = (enum EOutLineEffectType)OutLineEffectType;
    this->ProcessEvent(Func, &Parms);
}

struct USphereComponent* ADFMVehicleBase::DynamicBindCollisionComponent(struct ADFMVehicleBase* Vehicle, float CollisionRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMVehicleBase", "DynamicBindCollisionComponent");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        float CollisionRadius;
        struct USphereComponent* ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    Parms.CollisionRadius = (float)CollisionRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMVehicleBase::CreateEffect(struct FName SocketName, struct UParticleSystem* Effect, struct UParticleSystemGroup* EffectGroup, struct UGPAudioEventAsset* Sound, uint8_t Active)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "CreateEffect");
    struct
    {
        struct FName SocketName;
        struct UParticleSystem* Effect;
        struct UParticleSystemGroup* EffectGroup;
        struct UGPAudioEventAsset* Sound;
        uint8_t Active;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    Parms.Effect = (struct UParticleSystem*)Effect;
    Parms.EffectGroup = (struct UParticleSystemGroup*)EffectGroup;
    Parms.Sound = (struct UGPAudioEventAsset*)Sound;
    Parms.Active = (uint8_t)Active;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::ClientShowSupplyTip(float SupplyTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "ClientShowSupplyTip");
    struct
    {
        float SupplyTime;
    } Parms{};
    Parms.SupplyTime = (float)SupplyTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::ClientReportPositionContainsNan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "ClientReportPositionContainsNan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::ClientApplyHitImpluse(struct FVector LocalPos, struct FVector LocalDir, float size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "ClientApplyHitImpluse");
    struct
    {
        struct FVector LocalPos;
        struct FVector LocalDir;
        float size;
    } Parms{};
    Parms.LocalPos = (struct FVector)LocalPos;
    Parms.LocalDir = (struct FVector)LocalDir;
    Parms.size = (float)size;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::ClearVehicleOutLineEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "ClearVehicleOutLineEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::ClearAllInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "ClearAllInput");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleBase::CheckVehicleCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "CheckVehicleCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMVehicleBase::CheckSeatTypeExist(EVehicleSeatType SeatType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "CheckSeatTypeExist");
    struct
    {
        enum EVehicleSeatType SeatType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SeatType = (enum EVehicleSeatType)SeatType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMVehicleBase::ChangeDamagedMesh(struct USkeletalMesh* NewMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBase", "ChangeDamagedMesh");
    struct
    {
        struct USkeletalMesh* NewMesh;
    } Parms{};
    Parms.NewMesh = (struct USkeletalMesh*)NewMesh;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMTank::* ----
void ADFMTank::SetBoneRelRotatorMap(struct FName BoneName, struct FRotator BoneRotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTank", "SetBoneRelRotatorMap");
    struct
    {
        struct FName BoneName;
        struct FRotator BoneRotator;
    } Parms{};
    Parms.BoneName = (struct FName)BoneName;
    Parms.BoneRotator = (struct FRotator)BoneRotator;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMTank::GetSocketPointTrans(struct FName FireSocketName, struct FTransform& FirePointTrans, ERelativeTransformSpace RelativeTransformSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTank", "GetSocketPointTrans");
    struct
    {
        struct FName FireSocketName;
        struct FTransform FirePointTrans;
        enum ERelativeTransformSpace RelativeTransformSpace;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FireSocketName = (struct FName)FireSocketName;
    Parms.RelativeTransformSpace = (enum ERelativeTransformSpace)RelativeTransformSpace;
    this->ProcessEvent(Func, &Parms);
    FirePointTrans = Parms.FirePointTrans;
    return Parms.ReturnValue;
}

// ---- IAIHelicopterWeaponInterface::* ----
void IAIHelicopterWeaponInterface::UpdateDir(struct FVector Dir, struct AActor* LockTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIHelicopterWeaponInterface", "UpdateDir");
    struct
    {
        struct FVector Dir;
        struct AActor* LockTarget;
    } Parms{};
    Parms.Dir = (struct FVector)Dir;
    Parms.LockTarget = (struct AActor*)LockTarget;
    this->ProcessEvent(Func, &Parms);
}

void IAIHelicopterWeaponInterface::SetFire(uint8_t bFire, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIHelicopterWeaponInterface", "SetFire");
    struct
    {
        uint8_t bFire;
        float Duration;
    } Parms{};
    Parms.bFire = (uint8_t)bFire;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void IAIHelicopterWeaponInterface::SetAttackTargets(struct AActor* DamageMaker, struct AActor* DamageTaker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIHelicopterWeaponInterface", "SetAttackTargets");
    struct
    {
        struct AActor* DamageMaker;
        struct AActor* DamageTaker;
    } Parms{};
    Parms.DamageMaker = (struct AActor*)DamageMaker;
    Parms.DamageTaker = (struct AActor*)DamageTaker;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAITankAimTargetComponent::* ----
void UAITankAimTargetComponent::ResetCannonDesireRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AITankAimTargetComponent", "ResetCannonDesireRotation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAITankPhaseComponent::* ----
void UAITankPhaseComponent::OnTakeDamage(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AITankPhaseComponent", "OnTakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void UAITankPhaseComponent::OnRep_HPPercentChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AITankPhaseComponent", "OnRep_HPPercentChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAITankPhaseComponent::OnRep_AITankPhase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AITankPhaseComponent", "OnRep_AITankPhase");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UAITankPhaseComponent::GetHPPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AITankPhaseComponent", "GetHPPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAITankPhaseComponent::DamageTakerModifyDamage(const struct FDamageSourceInfo& SourceInfo, struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AITankPhaseComponent", "DamageTakerModifyDamage");
    struct
    {
        struct FDamageSourceInfo SourceInfo;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.SourceInfo = (struct FDamageSourceInfo)SourceInfo;
    this->ProcessEvent(Func, &Parms);
    DamageResult = Parms.DamageResult;
}

// ---- UBreakthroughVehicleSpawnerDataTableManager::* ----
void UBreakthroughVehicleSpawnerDataTableManager::GetBreakthroughVehicleSpawnerDataRow(int32_t InMapID, int32_t InLayoutId, struct FBreakthroughVehicleSpawnerDataRow& OutBreakthroughVehicleSpawnerDataRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BreakthroughVehicleSpawnerDataTableManager", "GetBreakthroughVehicleSpawnerDataRow");
    struct
    {
        int32_t InMapID;
        int32_t InLayoutId;
        struct FBreakthroughVehicleSpawnerDataRow OutBreakthroughVehicleSpawnerDataRow;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    Parms.InLayoutId = (int32_t)InLayoutId;
    this->ProcessEvent(Func, &Parms);
    OutBreakthroughVehicleSpawnerDataRow = Parms.OutBreakthroughVehicleSpawnerDataRow;
}

// ---- UConquestVehicleSpawnerDataTableManager::* ----
void UConquestVehicleSpawnerDataTableManager::GetConquestVehicleSpawnerDataRow(int32_t InMapID, struct FConquestVehicleSpawnerDataRow& OutConquestVehicleSpawnerDataRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ConquestVehicleSpawnerDataTableManager", "GetConquestVehicleSpawnerDataRow");
    struct
    {
        int32_t InMapID;
        struct FConquestVehicleSpawnerDataRow OutConquestVehicleSpawnerDataRow;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    this->ProcessEvent(Func, &Parms);
    OutConquestVehicleSpawnerDataRow = Parms.OutConquestVehicleSpawnerDataRow;
}

// ---- UDFInteractableCompProxy_Vehicle::* ----
uint8_t UDFInteractableCompProxy_Vehicle::IsLocalPlayerOnVehicle(struct ADFMVehicleBase* InVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFInteractableCompProxy_Vehicle", "IsLocalPlayerOnVehicle");
    struct
    {
        struct ADFMVehicleBase* InVehicle;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InVehicle = (struct ADFMVehicleBase*)InVehicle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ADFMHelicopter::* ----
void ADFMHelicopter::NetMulticastOnRopeDescent(int32_t OpCode, struct FName AIDescentVO, float ShowAIDecentVOCooldownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMHelicopter", "NetMulticastOnRopeDescent");
    struct
    {
        int32_t OpCode;
        struct FName AIDescentVO;
        float ShowAIDecentVOCooldownTime;
    } Parms{};
    Parms.OpCode = (int32_t)OpCode;
    Parms.AIDescentVO = (struct FName)AIDescentVO;
    Parms.ShowAIDecentVOCooldownTime = (float)ShowAIDecentVOCooldownTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMHelicopter::BP_OnAIDescent(int32_t OpCode, const struct FName& AIDescentVO, float ShowAIDecentVOCooldownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMHelicopter", "BP_OnAIDescent");
    struct
    {
        int32_t OpCode;
        struct FName AIDescentVO;
        float ShowAIDecentVOCooldownTime;
    } Parms{};
    Parms.OpCode = (int32_t)OpCode;
    Parms.AIDescentVO = (struct FName)AIDescentVO;
    Parms.ShowAIDecentVOCooldownTime = (float)ShowAIDecentVOCooldownTime;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMAIHelicopter::* ----
void ADFMAIHelicopter::UpdateHelicopterFightState(EAIHelicopterFightState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "UpdateHelicopterFightState");
    struct
    {
        enum EAIHelicopterFightState State;
    } Parms{};
    Parms.State = (enum EAIHelicopterFightState)State;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAIHelicopter::StopMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "StopMove");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAIHelicopter::StopHelicopterAudio(struct FName AudioConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "StopHelicopterAudio");
    struct
    {
        struct FName AudioConfigName;
    } Parms{};
    Parms.AudioConfigName = (struct FName)AudioConfigName;
    this->ProcessEvent(Func, &Parms);
}

struct USkeletalMeshComponent* ADFMAIHelicopter::SetMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "SetMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAIHelicopter::SetLinkedDrama(struct AAIHelicopterDramaArea* drama)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "SetLinkedDrama");
    struct
    {
        struct AAIHelicopterDramaArea* drama;
    } Parms{};
    Parms.drama = (struct AAIHelicopterDramaArea*)drama;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::ServerSetAITransportState(struct FAITransportHelicopterStateParam Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "ServerSetAITransportState");
    struct
    {
        struct FAITransportHelicopterStateParam Param;
    } Parms{};
    Parms.Param = (struct FAITransportHelicopterStateParam)Param;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::ServerSetAITransportMoveState(EAITransportHeliMoveState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "ServerSetAITransportMoveState");
    struct
    {
        enum EAITransportHeliMoveState State;
    } Parms{};
    Parms.State = (enum EAITransportHeliMoveState)State;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::ServerDebugAIHelicopter(uint8_t OpenDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "ServerDebugAIHelicopter");
    struct
    {
        uint8_t OpenDebug;
    } Parms{};
    Parms.OpenDebug = (uint8_t)OpenDebug;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::ServerChangePatrolSection(int32_t SectionID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "ServerChangePatrolSection");
    struct
    {
        int32_t SectionID;
    } Parms{};
    Parms.SectionID = (int32_t)SectionID;
    this->ProcessEvent(Func, &Parms);
}

struct FAIRequestID ADFMAIHelicopter::RequestSimpleCrash(struct FVector CrashPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "RequestSimpleCrash");
    struct
    {
        struct FVector CrashPoint;
        struct FAIRequestID ReturnValue;
    } Parms{};
    Parms.CrashPoint = (struct FVector)CrashPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAIHelicopter::RequestPathFollow_Alert(struct ACHARACTER* CHARACTER, struct FAIRequestID& requestId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "RequestPathFollow_Alert");
    struct
    {
        struct ACHARACTER* CHARACTER;
        struct FAIRequestID requestId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    requestId = Parms.requestId;
    return Parms.ReturnValue;
}

struct FAIRequestID ADFMAIHelicopter::RequestPathFollow(struct TArray<struct FVector> Points, uint8_t bStopAtGoal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "RequestPathFollow");
    struct
    {
        struct TArray<struct FVector> Points;
        uint8_t bStopAtGoal;
        struct FAIRequestID ReturnValue;
    } Parms{};
    Parms.Points = (struct TArray<struct FVector>)Points;
    Parms.bStopAtGoal = (uint8_t)bStopAtGoal;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAIRequestID ADFMAIHelicopter::RequestCrashV2(struct TArray<struct FVector> CrashPathPoints, struct FCrashPointData CrashData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "RequestCrashV2");
    struct
    {
        struct TArray<struct FVector> CrashPathPoints;
        struct FCrashPointData CrashData;
        struct FAIRequestID ReturnValue;
    } Parms{};
    Parms.CrashPathPoints = (struct TArray<struct FVector>)CrashPathPoints;
    Parms.CrashData = (struct FCrashPointData)CrashData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAIRequestID ADFMAIHelicopter::RequestCrash(struct TArray<struct FVector> CrashPathPoints, struct FTransform CrashFT)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "RequestCrash");
    struct
    {
        struct TArray<struct FVector> CrashPathPoints;
        struct FTransform CrashFT;
        struct FAIRequestID ReturnValue;
    } Parms{};
    Parms.CrashPathPoints = (struct TArray<struct FVector>)CrashPathPoints;
    Parms.CrashFT = (struct FTransform)CrashFT;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAIHelicopter::PlayPath(struct AActor* InPath, uint8_t ResetStartPos, uint8_t bStopAtGoal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "PlayPath");
    struct
    {
        struct AActor* InPath;
        uint8_t ResetStartPos;
        uint8_t bStopAtGoal;
    } Parms{};
    Parms.InPath = (struct AActor*)InPath;
    Parms.ResetStartPos = (uint8_t)ResetStartPos;
    Parms.bStopAtGoal = (uint8_t)bStopAtGoal;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::PlayHelicopterAudioBySoftObj(const struct TSoftObjectPtr<UGPAudioEventAsset>& SoftObjectPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "PlayHelicopterAudioBySoftObj");
    struct
    {
        struct TSoftObjectPtr<UGPAudioEventAsset> SoftObjectPtr;
    } Parms{};
    Parms.SoftObjectPtr = (struct TSoftObjectPtr<UGPAudioEventAsset>)SoftObjectPtr;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::PlayHelicopterAudio(struct FName AudioConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "PlayHelicopterAudio");
    struct
    {
        struct FName AudioConfigName;
    } Parms{};
    Parms.AudioConfigName = (struct FName)AudioConfigName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::OverridePatrolConfig(struct UBOSS04AIHelicopterConfig* NewPatrolConfigClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "OverridePatrolConfig");
    struct
    {
        struct UBOSS04AIHelicopterConfig* NewPatrolConfigClass;
    } Parms{};
    Parms.NewPatrolConfigClass = (struct UBOSS04AIHelicopterConfig*)NewPatrolConfigClass;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::OnVehicleDamaged(struct UDFMVehicleHealthComponent* TargetComponent, float NormalizedHpPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "OnVehicleDamaged");
    struct
    {
        struct UDFMVehicleHealthComponent* TargetComponent;
        float NormalizedHpPercent;
    } Parms{};
    Parms.TargetComponent = (struct UDFMVehicleHealthComponent*)TargetComponent;
    Parms.NormalizedHpPercent = (float)NormalizedHpPercent;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::OnStepChange(EAIHelicopterStepEvent Step)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "OnStepChange");
    struct
    {
        enum EAIHelicopterStepEvent Step;
    } Parms{};
    Parms.Step = (enum EAIHelicopterStepEvent)Step;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::OnPilotDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "OnPilotDead");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::OnMoveFinished(struct FAIRequestID requestId, uint8_t Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "OnMoveFinished");
    struct
    {
        struct FAIRequestID requestId;
        uint8_t Result;
    } Parms{};
    Parms.requestId = (struct FAIRequestID)requestId;
    Parms.Result = (uint8_t)Result;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::OnCrashed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "OnCrashed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FAIRequestID ADFMAIHelicopter::MoveTo(struct FVector pos, uint8_t bStopAtGoal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "MoveTo");
    struct
    {
        struct FVector pos;
        uint8_t bStopAtGoal;
        struct FAIRequestID ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.bStopAtGoal = (uint8_t)bStopAtGoal;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAIHelicopter::IsDriver(struct AActor* Pilot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "IsDriver");
    struct
    {
        struct AActor* Pilot;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Pilot = (struct AActor*)Pilot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDFMVehicleAudioDataTableRow ADFMAIHelicopter::GetVehicleAudioData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "GetVehicleAudioData");
    struct
    {
        struct FDFMVehicleAudioDataTableRow ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* ADFMAIHelicopter::GetMainDriver()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "GetMainDriver");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ADFMAIHelicopter::GetHelicopterVelocity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "GetHelicopterVelocity");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> ADFMAIHelicopter::GetAllPilot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "GetAllPilot");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAIHelicopter::ForceSetHighRegion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "ForceSetHighRegion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIHelicopter::DrawDebugSpaceData(struct FAIHelicopterSpaceData Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "DrawDebugSpaceData");
    struct
    {
        struct FAIHelicopterSpaceData Data;
    } Parms{};
    Parms.Data = (struct FAIHelicopterSpaceData)Data;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAIHelicopter::CanCrash()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopter", "CanCrash");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHelicopterWayPoint::* ----
void AHelicopterWayPoint::SetSpriteTexture(struct UTexture2D* Texture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HelicopterWayPoint", "SetSpriteTexture");
    struct
    {
        struct UTexture2D* Texture;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    this->ProcessEvent(Func, &Parms);
}

void AHelicopterWayPoint::OnLevelSelectionChanged(struct UObject* NewSelection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HelicopterWayPoint", "OnLevelSelectionChanged");
    struct
    {
        struct UObject* NewSelection;
    } Parms{};
    Parms.NewSelection = (struct UObject*)NewSelection;
    this->ProcessEvent(Func, &Parms);
}

void AHelicopterWayPoint::GetHelicopterWayPointNumeric(struct FName& Name, int32_t& ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HelicopterWayPoint", "GetHelicopterWayPointNumeric");
    struct
    {
        struct FName Name;
        int32_t ID;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Name = Parms.Name;
    ID = Parms.ID;
}

struct TMap<struct FName, struct FHelicopterWayPointData> AHelicopterWayPoint::GetHelicopterWayPointDataMap(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HelicopterWayPoint", "GetHelicopterWayPointDataMap");
    struct
    {
        struct UObject* Context;
        struct TMap<struct FName, struct FHelicopterWayPointData> ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName AHelicopterWayPoint::FindSuitableAttackPath(struct TMap<struct FName, struct FHelicopterWayPointData> HelicopterWayPointDataMap, struct ADFMAIController* DFAIController, struct ACHARACTER* Other, uint8_t bCheckFoliage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HelicopterWayPoint", "FindSuitableAttackPath");
    struct
    {
        struct TMap<struct FName, struct FHelicopterWayPointData> HelicopterWayPointDataMap;
        struct ADFMAIController* DFAIController;
        struct ACHARACTER* Other;
        uint8_t bCheckFoliage;
        struct FName ReturnValue;
    } Parms{};
    Parms.HelicopterWayPointDataMap = (struct TMap<struct FName, struct FHelicopterWayPointData>)HelicopterWayPointDataMap;
    Parms.DFAIController = (struct ADFMAIController*)DFAIController;
    Parms.Other = (struct ACHARACTER*)Other;
    Parms.bCheckFoliage = (uint8_t)bCheckFoliage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AHelicopterWayPoint::DrawSelectionFlush(struct UObject* NewSelection, uint8_t DoAdjPath, uint8_t DoPathFind)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HelicopterWayPoint", "DrawSelectionFlush");
    struct
    {
        struct UObject* NewSelection;
        uint8_t DoAdjPath;
        uint8_t DoPathFind;
    } Parms{};
    Parms.NewSelection = (struct UObject*)NewSelection;
    Parms.DoAdjPath = (uint8_t)DoAdjPath;
    Parms.DoPathFind = (uint8_t)DoPathFind;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleAudioComponent::* ----
void UDFMVehicleAudioComponent::OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAudioComponent", "OnVehicleHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAudioComponent::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAudioComponent", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAudioComponent::OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAudioComponent", "OnCharacterGetOn");
    struct
    {
        struct AActor* CHARACTER;
        struct FName SeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.SeatName = (struct FName)SeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAudioComponent::OnCharacterGetOff(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAudioComponent", "OnCharacterGetOff");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleHealthComponent::* ----
void UDFMVehicleHealthComponent::SetVehicleCamp(int32_t Camp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "SetVehicleCamp");
    struct
    {
        int32_t Camp;
    } Parms{};
    Parms.Camp = (int32_t)Camp;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleHealthComponent::SetMaxHP(float MaxHP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "SetMaxHP");
    struct
    {
        float MaxHP;
    } Parms{};
    Parms.MaxHP = (float)MaxHP;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleHealthComponent::SetHP(float HP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "SetHP");
    struct
    {
        float HP;
    } Parms{};
    Parms.HP = (float)HP;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleHealthComponent::SetAutoDamage(float DamageAmount, float Interval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "SetAutoDamage");
    struct
    {
        float DamageAmount;
        float Interval;
    } Parms{};
    Parms.DamageAmount = (float)DamageAmount;
    Parms.Interval = (float)Interval;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleHealthComponent::OnRep_ReplicatedVehicleBodyPartExecutors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "OnRep_ReplicatedVehicleBodyPartExecutors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleHealthComponent::OnRep_OnHealthPointChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "OnRep_OnHealthPointChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMVehicleHealthComponent::IsDead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "IsDead");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMVehicleHealthComponent::GetMaxHP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "GetMaxHP");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMVehicleHealthComponent::GetHPPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "GetHPPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMVehicleHealthComponent::GetHP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "GetHP");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UDFMVehicleHealthComponent::DebugQueryDestructedParties(int32_t FunctionFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "DebugQueryDestructedParties");
    struct
    {
        int32_t FunctionFlag;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.FunctionFlag = (int32_t)FunctionFlag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UDFMVehicleHealthComponent::DebugQueryBrokenParties(int32_t TypeFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "DebugQueryBrokenParties");
    struct
    {
        int32_t TypeFlag;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.TypeFlag = (int32_t)TypeFlag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMVehicleHealthComponent::AddDamageToComponent(struct FName ComponentName, float DamageAmount, int64_t WeaponID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleHealthComponent", "AddDamageToComponent");
    struct
    {
        struct FName ComponentName;
        float DamageAmount;
        int64_t WeaponID;
        int32_t ReturnValue;
    } Parms{};
    Parms.ComponentName = (struct FName)ComponentName;
    Parms.DamageAmount = (float)DamageAmount;
    Parms.WeaponID = (int64_t)WeaponID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMAIHelicopterHealthComponent::* ----
void UDFMAIHelicopterHealthComponent::Crash()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopterHealthComponent", "Crash");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMAIHelicopterPilotComponent::* ----
void UDFMAIHelicopterPilotComponent::On_RepAITransportHelicopterStateParam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopterPilotComponent", "On_RepAITransportHelicopterStateParam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIHelicopterPilotComponent::On_RepAIHelicopterStateParam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIHelicopterPilotComponent", "On_RepAIHelicopterStateParam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMAITank::* ----
void ADFMAITank::SetTankPhaseHP(struct TMap<EAITankPhase, float> AITankPhaseHPMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "SetTankPhaseHP");
    struct
    {
        struct TMap<EAITankPhase, float> AITankPhaseHPMap;
    } Parms{};
    Parms.AITankPhaseHPMap = (struct TMap<EAITankPhase, float>)AITankPhaseHPMap;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::SetTankPhase(EAITankPhase NewAITankPhase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "SetTankPhase");
    struct
    {
        enum EAITankPhase NewAITankPhase;
    } Parms{};
    Parms.NewAITankPhase = (enum EAITankPhase)NewAITankPhase;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::ResetCannonDesireRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "ResetCannonDesireRotation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::PlayMachineGunFireWarningEffect(struct FName FireSocketName, struct FName FireDirectionSocketName, float FireRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "PlayMachineGunFireWarningEffect");
    struct
    {
        struct FName FireSocketName;
        struct FName FireDirectionSocketName;
        float FireRange;
    } Parms{};
    Parms.FireSocketName = (struct FName)FireSocketName;
    Parms.FireDirectionSocketName = (struct FName)FireDirectionSocketName;
    Parms.FireRange = (float)FireRange;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::OnRep_VirtualAICharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "OnRep_VirtualAICharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::NotifyTouchAITankWayPoint(struct AAITankWaypoint* AITankWaypoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "NotifyTouchAITankWayPoint");
    struct
    {
        struct AAITankWaypoint* AITankWaypoint;
    } Parms{};
    Parms.AITankWaypoint = (struct AAITankWaypoint*)AITankWaypoint;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::NotifyEndAccelerate(struct AActor* Follower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "NotifyEndAccelerate");
    struct
    {
        struct AActor* Follower;
    } Parms{};
    Parms.Follower = (struct AActor*)Follower;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::NotifyBeginAccelerate(struct AActor* Follower)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "NotifyBeginAccelerate");
    struct
    {
        struct AActor* Follower;
    } Parms{};
    Parms.Follower = (struct AActor*)Follower;
    this->ProcessEvent(Func, &Parms);
}

EAITankPhase ADFMAITank::GetTankPhase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "GetTankPhase");
    struct
    {
        enum EAITankPhase ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAITank::ForceUpdateCannonDesireRotation(struct FQuat ServerCannonDesiredOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "ForceUpdateCannonDesireRotation");
    struct
    {
        struct FQuat ServerCannonDesiredOrientation;
    } Parms{};
    Parms.ServerCannonDesiredOrientation = (struct FQuat)ServerCannonDesiredOrientation;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::CreateWeapon(struct AGPCharacter* GPCharacter, int64_t WeaponID, int64_t Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "CreateWeapon");
    struct
    {
        struct AGPCharacter* GPCharacter;
        int64_t WeaponID;
        int64_t Guid;
    } Parms{};
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    Parms.WeaponID = (int64_t)WeaponID;
    Parms.Guid = (int64_t)Guid;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::BP_ServerNotifyTankPhaseChanged(EAITankPhase NewTankPhase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "BP_ServerNotifyTankPhaseChanged");
    struct
    {
        enum EAITankPhase NewTankPhase;
    } Parms{};
    Parms.NewTankPhase = (enum EAITankPhase)NewTankPhase;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::BP_OnRep_VirtualAICharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "BP_OnRep_VirtualAICharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::BP_MachineGunCreated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "BP_MachineGunCreated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAITank::BP_ClientNotifyTankPhaseChanged(EAITankPhase NewTankPhase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAITank", "BP_ClientNotifyTankPhaseChanged");
    struct
    {
        enum EAITankPhase NewTankPhase;
    } Parms{};
    Parms.NewTankPhase = (enum EAITankPhase)NewTankPhase;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMBoatRadarExtension::* ----
void UDFMBoatRadarExtension::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatRadarExtension", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBoatRadarExtension::OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatRadarExtension", "OnCharacterGetOn");
    struct
    {
        struct AActor* CHARACTER;
        struct FName SeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.SeatName = (struct FName)SeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBoatRadarExtension::OnCharacterGetOff(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatRadarExtension", "OnCharacterGetOff");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMBoatMovementComponent::* ----
void UDFMBoatMovementComponent::SetThrottleInput(float Throttle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatMovementComponent", "SetThrottleInput");
    struct
    {
        float Throttle;
    } Parms{};
    Parms.Throttle = (float)Throttle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBoatMovementComponent::SetSteeringInput(float Steering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatMovementComponent", "SetSteeringInput");
    struct
    {
        float Steering;
    } Parms{};
    Parms.Steering = (float)Steering;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBoatMovementComponent::OnActorHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatMovementComponent", "OnActorHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBoatMovementComponent::AISetThrottleInput(float Throttle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatMovementComponent", "AISetThrottleInput");
    struct
    {
        float Throttle;
    } Parms{};
    Parms.Throttle = (float)Throttle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBoatMovementComponent::AISetSteeringInput(float Steering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatMovementComponent", "AISetSteeringInput");
    struct
    {
        float Steering;
    } Parms{};
    Parms.Steering = (float)Steering;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBoatMovementComponent::AISetBrakeInput(float Brake)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatMovementComponent", "AISetBrakeInput");
    struct
    {
        float Brake;
    } Parms{};
    Parms.Brake = (float)Brake;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehiclePhysicsReplicationComponent::* ----
void UDFMVehiclePhysicsReplicationComponent::SendAutonomousFrameDataToServer(int32_t ClientCorrectId, struct TArray<struct FDFMVehicleAutonomousFrameData> FrameDataArray, struct FVehicleInputState InputState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePhysicsReplicationComponent", "SendAutonomousFrameDataToServer");
    struct
    {
        int32_t ClientCorrectId;
        struct TArray<struct FDFMVehicleAutonomousFrameData> FrameDataArray;
        struct FVehicleInputState InputState;
    } Parms{};
    Parms.ClientCorrectId = (int32_t)ClientCorrectId;
    Parms.FrameDataArray = (struct TArray<struct FDFMVehicleAutonomousFrameData>)FrameDataArray;
    Parms.InputState = (struct FVehicleInputState)InputState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehiclePhysicsReplicationComponent::OvershootWasChecked(struct FRigidBodyState StartState, struct FRigidBodyState EndState, struct FRigidBodyState ResetState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePhysicsReplicationComponent", "OvershootWasChecked");
    struct
    {
        struct FRigidBodyState StartState;
        struct FRigidBodyState EndState;
        struct FRigidBodyState ResetState;
    } Parms{};
    Parms.StartState = (struct FRigidBodyState)StartState;
    Parms.EndState = (struct FRigidBodyState)EndState;
    Parms.ResetState = (struct FRigidBodyState)ResetState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehiclePhysicsReplicationComponent::OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePhysicsReplicationComponent", "OnVehicleHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehiclePhysicsReplicationComponent::OnRep_CurrentFrameIdAcceptedInServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePhysicsReplicationComponent", "OnRep_CurrentFrameIdAcceptedInServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehiclePhysicsReplicationComponent::ObstacleWasChecked(struct FRigidBodyState SafeState, struct FRigidBodyState CheckedState, struct FHitResult HitResult, uint8_t bIsOverlapMainCheckedBox, int32_t OverlapCheckedBoxIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePhysicsReplicationComponent", "ObstacleWasChecked");
    struct
    {
        struct FRigidBodyState SafeState;
        struct FRigidBodyState CheckedState;
        struct FHitResult HitResult;
        uint8_t bIsOverlapMainCheckedBox;
        int32_t OverlapCheckedBoxIndex;
    } Parms{};
    Parms.SafeState = (struct FRigidBodyState)SafeState;
    Parms.CheckedState = (struct FRigidBodyState)CheckedState;
    Parms.HitResult = (struct FHitResult)HitResult;
    Parms.bIsOverlapMainCheckedBox = (uint8_t)bIsOverlapMainCheckedBox;
    Parms.OverlapCheckedBoxIndex = (int32_t)OverlapCheckedBoxIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehiclePhysicsReplicationComponent::CorrectClientRigidBodyState(int32_t InCorrectedId, struct FRigidBodyState CorrectedState, struct FRigidBodyState InValidState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePhysicsReplicationComponent", "CorrectClientRigidBodyState");
    struct
    {
        int32_t InCorrectedId;
        struct FRigidBodyState CorrectedState;
        struct FRigidBodyState InValidState;
    } Parms{};
    Parms.InCorrectedId = (int32_t)InCorrectedId;
    Parms.CorrectedState = (struct FRigidBodyState)CorrectedState;
    Parms.InValidState = (struct FRigidBodyState)InValidState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehiclePhysicsReplicationComponent::ClientReportVehicleFallUnderground(struct FRigidBodyState ServerState, uint8_t bIsServerSimulatingPhysics, struct AActor* Driver)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePhysicsReplicationComponent", "ClientReportVehicleFallUnderground");
    struct
    {
        struct FRigidBodyState ServerState;
        uint8_t bIsServerSimulatingPhysics;
        struct AActor* Driver;
    } Parms{};
    Parms.ServerState = (struct FRigidBodyState)ServerState;
    Parms.bIsServerSimulatingPhysics = (uint8_t)bIsServerSimulatingPhysics;
    Parms.Driver = (struct AActor*)Driver;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMBoatVehicle::* ----
void ADFMBoatVehicle::TryDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatVehicle", "TryDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMBoatVehicle::BP_IsInWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBoatVehicle", "BP_IsInWater");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehicleEffectComponent::* ----
void UDFMVehicleEffectComponent::TickMovingEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleEffectComponent", "TickMovingEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleEffectComponent::TickFadingEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleEffectComponent", "TickFadingEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleEffectComponent::OnVehicleDamaged(struct UDFMVehicleHealthComponent* TargetComponent, float NormalizedHpPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleEffectComponent", "OnVehicleDamaged");
    struct
    {
        struct UDFMVehicleHealthComponent* TargetComponent;
        float NormalizedHpPercent;
    } Parms{};
    Parms.TargetComponent = (struct UDFMVehicleHealthComponent*)TargetComponent;
    Parms.NormalizedHpPercent = (float)NormalizedHpPercent;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMBrokenVehiclePart::* ----
void ADFMBrokenVehiclePart::OnActorHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBrokenVehiclePart", "OnActorHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMBrokenHelicopterPart::* ----
void ADFMBrokenHelicopterPart::OnHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBrokenHelicopterPart", "OnHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMBrokenVehiclePhysicsComponent::* ----
void UDFMBrokenVehiclePhysicsComponent::BroadcastPhysicsReplicatedDataToClient(uint32_t BroadcastId, struct FBrokenVehiclePhysicsReplicatedData ReplicatedData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBrokenVehiclePhysicsComponent", "BroadcastPhysicsReplicatedDataToClient");
    struct
    {
        uint32_t BroadcastId;
        struct FBrokenVehiclePhysicsReplicatedData ReplicatedData;
    } Parms{};
    Parms.BroadcastId = (uint32_t)BroadcastId;
    Parms.ReplicatedData = (struct FBrokenVehiclePhysicsReplicatedData)ReplicatedData;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMFSM_AutoDriveVehicleCheckAction::* ----
void UDFMFSM_AutoDriveVehicleCheckAction::OnTryStartAutoDraiveVehicleEvent(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_AutoDriveVehicleCheckAction", "OnTryStartAutoDraiveVehicleEvent");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_AutoDriveVehicleCheckAction::OnAnyInputEvent(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_AutoDriveVehicleCheckAction", "OnAnyInputEvent");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMFSM_CharacterVehicleControlAction::* ----
void UDFMFSM_CharacterVehicleControlAction::SwithCameraModeBtnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "SwithCameraModeBtnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ServerTrySwitchSeat(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ServerTrySwitchSeat");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ServerStartDriveCar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ServerStartDriveCar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ServerExitDriveCar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ServerExitDriveCar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ResetPassengerPosition(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ResetPassengerPosition");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::RemoveVehicleHUDState(uint8_t bForceFresh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "RemoveVehicleHUDState");
    struct
    {
        uint8_t bForceFresh;
    } Parms{};
    Parms.bForceFresh = (uint8_t)bForceFresh;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::PreFireButtonPressed(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "PreFireButtonPressed");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::OnXPPChange(uint8_t bNewFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "OnXPPChange");
    struct
    {
        uint8_t bNewFPP;
    } Parms{};
    Parms.bNewFPP = (uint8_t)bNewFPP;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::OnUseSkill(ESkillUISlot UISlot, int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "OnUseSkill");
    struct
    {
        enum ESkillUISlot UISlot;
        int32_t SkillId;
    } Parms{};
    Parms.UISlot = (enum ESkillUISlot)UISlot;
    Parms.SkillId = (int32_t)SkillId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::OnStartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "OnStartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::OnHUDViewsAsyncLoadComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "OnHUDViewsAsyncLoadComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::OnClientCarInfoArrived(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "OnClientCarInfoArrived");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::OnCheckDataTickDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "OnCheckDataTickDelegate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::OnAfterRedeploy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "OnAfterRedeploy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::JumpButtonPressed(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "JumpButtonPressed");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ClientOwnerXPPChange(uint8_t IsUnderFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ClientOwnerXPPChange");
    struct
    {
        uint8_t IsUnderFPP;
    } Parms{};
    Parms.IsUnderFPP = (uint8_t)IsUnderFPP;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ClientOwnerStartDriveCar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ClientOwnerStartDriveCar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ClientOwnerExitDriveCar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ClientOwnerExitDriveCar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ClientOtherStartDriveCar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ClientOtherStartDriveCar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleControlAction::ClientOtherExitDriveCar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleControlAction", "ClientOtherExitDriveCar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMFSM_CharacterVehicleInputControlAction::* ----
void UDFMFSM_CharacterVehicleInputControlAction::TryTexiOffCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleInputControlAction", "TryTexiOffCar");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleInputControlAction::TryStopDrivingCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleInputControlAction", "TryStopDrivingCar");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_CharacterVehicleInputControlAction::ClientTrySwitchSeat(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_CharacterVehicleInputControlAction", "ClientTrySwitchSeat");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMFSM_VehicleCheckAction::* ----
void UDFMFSM_VehicleCheckAction::TryTexiCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleCheckAction", "TryTexiCar");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleCheckAction::TryGetOnCarWithSpecificSeat(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleCheckAction", "TryGetOnCarWithSpecificSeat");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleCheckAction::TryDriveCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleCheckAction", "TryDriveCar");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMFSM_VehicleDriveMoveAndRotateAction::* ----
void UDFMFSM_VehicleDriveMoveAndRotateAction::WheelieUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "WheelieUp");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::WheelieDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "WheelieDown");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::VehicleTrumpetUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "VehicleTrumpetUp");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::VehicleTrumpetDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "VehicleTrumpetDown");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::VehicleHandBreakUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "VehicleHandBreakUp");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::VehicleHandBreakDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "VehicleHandBreakDown");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::TurnAtRate(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "TurnAtRate");
    struct
    {
        float Rate;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::Turn(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "Turn");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::StoppieUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "StoppieUp");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::StoppieDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "StoppieDown");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::MoveUp(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "MoveUp");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::MoveRoll(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "MoveRoll");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::MoveRight(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "MoveRight");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::MoveForward(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "MoveForward");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::LookUpAtRate(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "LookUpAtRate");
    struct
    {
        float Rate;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_VehicleDriveMoveAndRotateAction::LookUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_VehicleDriveMoveAndRotateAction", "LookUp");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Val;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Val = (float)Val;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleDashBoardExtension::* ----
void UDFMVehicleDashBoardExtension::OnXPPChange(uint8_t bIsFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleDashBoardExtension", "OnXPPChange");
    struct
    {
        uint8_t bIsFPP;
    } Parms{};
    Parms.bIsFPP = (uint8_t)bIsFPP;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMHelicopterMovementComponent::* ----
void UDFMHelicopterMovementComponent::SetUpInput(float Steering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMHelicopterMovementComponent", "SetUpInput");
    struct
    {
        float Steering;
    } Parms{};
    Parms.Steering = (float)Steering;
    this->ProcessEvent(Func, &Parms);
}

void UDFMHelicopterMovementComponent::SetRollInput(float Steering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMHelicopterMovementComponent", "SetRollInput");
    struct
    {
        float Steering;
    } Parms{};
    Parms.Steering = (float)Steering;
    this->ProcessEvent(Func, &Parms);
}

void UDFMHelicopterMovementComponent::OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMHelicopterMovementComponent", "OnVehicleHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleSprintComponent::* ----
void UDFMVehicleSprintComponent::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSprintComponent", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMJet::* ----
void ADFMJet::OnRep_VehicleWeaponAmmoCountChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "OnRep_VehicleWeaponAmmoCountChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMJet::OnGamePlaySubModeChanged(EDFMGamePlaySubMode NewGamePlaySubMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "OnGamePlaySubModeChanged");
    struct
    {
        enum EDFMGamePlaySubMode NewGamePlaySubMode;
    } Parms{};
    Parms.NewGamePlaySubMode = (enum EDFMGamePlaySubMode)NewGamePlaySubMode;
    this->ProcessEvent(Func, &Parms);
}

void ADFMJet::GMSetVehicleGravity(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "GMSetVehicleGravity");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMJetSpringComponent* ADFMJet::GetJetSpringComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "GetJetSpringComp");
    struct
    {
        struct UDFMJetSpringComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMJetMovementComponent* ADFMJet::GetJetMovementComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "GetJetMovementComp");
    struct
    {
        struct UDFMJetMovementComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMJetVehicleEffectComponent* ADFMJet::GetJetEffectComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "GetJetEffectComp");
    struct
    {
        struct UDFMJetVehicleEffectComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMJetAudioComponent* ADFMJet::GetJetAudioComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "GetJetAudioComp");
    struct
    {
        struct UDFMJetAudioComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMeshComponent* ADFMJet::GetCockpitMeshComp1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "GetCockpitMeshComp1P");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* ADFMJet::GetAnimSkeletalMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJet", "GetAnimSkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMJetMovementComponent::* ----
void UDFMJetMovementComponent::SetUpInput(float Steering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "SetUpInput");
    struct
    {
        float Steering;
    } Parms{};
    Parms.Steering = (float)Steering;
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::SetRollInput(float Steering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "SetRollInput");
    struct
    {
        float Steering;
    } Parms{};
    Parms.Steering = (float)Steering;
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::ServerSwitchInputMode(EJetInputMode InInputMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "ServerSwitchInputMode");
    struct
    {
        enum EJetInputMode InInputMode;
    } Parms{};
    Parms.InInputMode = (enum EJetInputMode)InInputMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::ServerSwitchChangeMode(EJetDriveMode InDriveMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "ServerSwitchChangeMode");
    struct
    {
        enum EJetDriveMode InDriveMode;
    } Parms{};
    Parms.InDriveMode = (enum EJetDriveMode)InDriveMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::RequestJetSpeedup(uint8_t bInSpeedUp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "RequestJetSpeedup");
    struct
    {
        uint8_t bInSpeedUp;
    } Parms{};
    Parms.bInSpeedUp = (uint8_t)bInSpeedUp;
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::OnRep_JetSpeedUpStatusChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "OnRep_JetSpeedUpStatusChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::OnRep_JetSpeedUpEnergyChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "OnRep_JetSpeedUpEnergyChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::OnRep_JetInputModeChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "OnRep_JetInputModeChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::OnRep_JetDriveMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "OnRep_JetDriveMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMJetMovementComponent::OnRep_bIsJetInHoldState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "OnRep_bIsJetInHoldState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FJetInputStatePC UDFMJetMovementComponent::GetJetRawInputStatePC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "GetJetRawInputStatePC");
    struct
    {
        struct FJetInputStatePC ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FJetInputStateMobile UDFMJetMovementComponent::GetJetRawInputState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "GetJetRawInputState");
    struct
    {
        struct FJetInputStateMobile ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FJetInputStatePC UDFMJetMovementComponent::GetJetInputStatePC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "GetJetInputStatePC");
    struct
    {
        struct FJetInputStatePC ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FJetInputStateMobile UDFMJetMovementComponent::GetJetInputState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "GetJetInputState");
    struct
    {
        struct FJetInputStateMobile ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMJetMovementComponent::ClientSetJetFinishDeployStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetMovementComponent", "ClientSetJetFinishDeployStatus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMJetSpringComponent::* ----
struct UClientSensitivitySettingHD* UDFMJetSpringComponent::GetClientSensitivitySettingHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetSpringComponent", "GetClientSensitivitySettingHD");
    struct
    {
        struct UClientSensitivitySettingHD* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientGameSettingHD* UDFMJetSpringComponent::GetClientGameSettingHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMJetSpringComponent", "GetClientGameSettingHD");
    struct
    {
        struct UClientGameSettingHD* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehicleMoveComp::* ----
void UDFMVehicleMoveComp::SetWheelActingSpeed(float Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMoveComp", "SetWheelActingSpeed");
    struct
    {
        float Speed;
    } Parms{};
    Parms.Speed = (float)Speed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMoveComp::OnCutsensePrepare(struct FCutsensePrepareData Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMoveComp", "OnCutsensePrepare");
    struct
    {
        struct FCutsensePrepareData Data;
    } Parms{};
    Parms.Data = (struct FCutsensePrepareData)Data;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMMotorCycleMovementComponent::* ----
void UDFMMotorCycleMovementComponent::StartWheelie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "StartWheelie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::StartStoppie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "StartStoppie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::StartStandUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "StartStandUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::SendWheelie(uint8_t bInWheelie)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "SendWheelie");
    struct
    {
        uint8_t bInWheelie;
    } Parms{};
    Parms.bInWheelie = (uint8_t)bInWheelie;
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::SendStoppie(uint8_t bInStoppie)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "SendStoppie");
    struct
    {
        uint8_t bInStoppie;
    } Parms{};
    Parms.bInStoppie = (uint8_t)bInStoppie;
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::SendStartStandUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "SendStartStandUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::OnVehicleBeginHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "OnVehicleBeginHit");
    struct
    {
        struct UPrimitiveComponent* HitComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.HitComponent = (struct UPrimitiveComponent*)HitComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::OnRep_Wheelie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "OnRep_Wheelie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::OnRep_Stoppie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "OnRep_Stoppie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::OnRep_State()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "OnRep_State");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMMotorCycleMovementComponent::IsStoppie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "IsStoppie");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMMotorCycleMovementComponent::FinishWheelie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "FinishWheelie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMMotorCycleMovementComponent::FinishStoppie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMMotorCycleMovementComponent", "FinishStoppie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMTrain::* ----
void ADFMTrain::UpdateSkeletalMeshCompTickStatus(uint8_t bIsCanTick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "UpdateSkeletalMeshCompTickStatus");
    struct
    {
        uint8_t bIsCanTick;
    } Parms{};
    Parms.bIsCanTick = (uint8_t)bIsCanTick;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::UpdateHitCharacterLoc(struct ACHARACTER* HitCharacter, struct FVector& CharacterRealDiedLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "UpdateHitCharacterLoc");
    struct
    {
        struct ACHARACTER* HitCharacter;
        struct FVector CharacterRealDiedLoc;
    } Parms{};
    Parms.HitCharacter = (struct ACHARACTER*)HitCharacter;
    this->ProcessEvent(Func, &Parms);
    CharacterRealDiedLoc = Parms.CharacterRealDiedLoc;
}

void ADFMTrain::TriggerDamageAfterHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "TriggerDamageAfterHit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::ToggleLocomotiveSound(uint8_t bToggle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "ToggleLocomotiveSound");
    struct
    {
        uint8_t bToggle;
    } Parms{};
    Parms.bToggle = (uint8_t)bToggle;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::StopAtEndOfRail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "StopAtEndOfRail");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::SmoothToStopTransform(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "SmoothToStopTransform");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::ShowLootingContainers(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "ShowLootingContainers");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::SetTriggerDamageAfterHitTimer(struct ACHARACTER* HitCharacter, const struct FVector& CharacterRealDiedLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "SetTriggerDamageAfterHitTimer");
    struct
    {
        struct ACHARACTER* HitCharacter;
        struct FVector CharacterRealDiedLoc;
    } Parms{};
    Parms.HitCharacter = (struct ACHARACTER*)HitCharacter;
    Parms.CharacterRealDiedLoc = (struct FVector)CharacterRealDiedLoc;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::SetRailway(struct USplineComponent* InRailSpline, uint8_t InLoopRail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "SetRailway");
    struct
    {
        struct USplineComponent* InRailSpline;
        uint8_t InLoopRail;
    } Parms{};
    Parms.InRailSpline = (struct USplineComponent*)InRailSpline;
    Parms.InLoopRail = (uint8_t)InLoopRail;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::SetEnableUpdateShadowCacheOnStop(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "SetEnableUpdateShadowCacheOnStop");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::SetDockedBack(struct ADFMTrain* InTrain)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "SetDockedBack");
    struct
    {
        struct ADFMTrain* InTrain;
    } Parms{};
    Parms.InTrain = (struct ADFMTrain*)InTrain;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::SetCollisionWhenHitLocalCharacter(struct ACHARACTER* LocalCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "SetCollisionWhenHitLocalCharacter");
    struct
    {
        struct ACHARACTER* LocalCharacter;
    } Parms{};
    Parms.LocalCharacter = (struct ACHARACTER*)LocalCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::SetCollisionWhenAfterHitLocalCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "SetCollisionWhenAfterHitLocalCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::ServerBroadcastVehicleDied()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "ServerBroadcastVehicleDied");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::RegisterLocomotiveOverlap(uint8_t bRegister)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "RegisterLocomotiveOverlap");
    struct
    {
        uint8_t bRegister;
    } Parms{};
    Parms.bRegister = (uint8_t)bRegister;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::ProcessTrainComponentOnStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "ProcessTrainComponentOnStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnTrainStateChangeDelegate__DelegateSignature(EDFMTrainState TrainState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnTrainStateChangeDelegate__DelegateSignature");
    struct
    {
        enum EDFMTrainState TrainState;
    } Parms{};
    Parms.TrainState = (enum EDFMTrainState)TrainState;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnTrainBreakingDelegate__DelegateSignature(struct ADFMTrain* Train)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnTrainBreakingDelegate__DelegateSignature");
    struct
    {
        struct ADFMTrain* Train;
    } Parms{};
    Parms.Train = (struct ADFMTrain*)Train;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnStopDelegate__DelegateSignature(struct ADFMTrain* Train)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnStopDelegate__DelegateSignature");
    struct
    {
        struct ADFMTrain* Train;
    } Parms{};
    Parms.Train = (struct ADFMTrain*)Train;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnSOLEventTrainStartLeaveSignature(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnSOLEventTrainStartLeaveSignature");
    struct
    {
        struct ACHARACTER* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnRep_TrainUpdateMoveData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnRep_TrainUpdateMoveData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnRep_TrainOnStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnRep_TrainOnStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnRep_TrainOnMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnRep_TrainOnMove");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnRep_StopAtDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnRep_StopAtDistance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnRep_ServerStopTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnRep_ServerStopTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnRep_IsShowingHighValueBoxProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnRep_IsShowingHighValueBoxProxy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnRep_DockedBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnRep_DockedBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnJointDestructDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnJointDestructDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnEvacuationEventFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnEvacuationEventFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnEndPointStopDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnEndPointStopDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnComponentBeginOverlap");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnCharacterImpactCallback(struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnCharacterImpactCallback");
    struct
    {
        struct AActor* OtherActor;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnCalcHitCharacterDamage(float Velocity, float SelfParam, float& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnCalcHitCharacterDamage");
    struct
    {
        float Velocity;
        float SelfParam;
        float Result;
    } Parms{};
    Parms.Velocity = (float)Velocity;
    Parms.SelfParam = (float)SelfParam;
    this->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

void ADFMTrain::OnBreakDestructDelegate__DelegateSignature(int32_t nDestruct, int32_t nTotal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnBreakDestructDelegate__DelegateSignature");
    struct
    {
        int32_t nDestruct;
        int32_t nTotal;
    } Parms{};
    Parms.nDestruct = (int32_t)nDestruct;
    Parms.nTotal = (int32_t)nTotal;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::OnBoardDownDelegate__DelegateSignature(struct ADFMTrain* Train)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "OnBoardDownDelegate__DelegateSignature");
    struct
    {
        struct ADFMTrain* Train;
    } Parms{};
    Parms.Train = (struct ADFMTrain*)Train;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::NewMoveStep(float NewDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "NewMoveStep");
    struct
    {
        float NewDistance;
    } Parms{};
    Parms.NewDistance = (float)NewDistance;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMTrain::IsStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "IsStop");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMTrain::IsMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "IsMove");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMTrain::IsDestruct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "IsDestruct");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* ADFMTrain::GetSkeletalMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "GetSkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ADFMTrain::GetClosestPointOnAxis(float AccurateThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "GetClosestPointOnAxis");
    struct
    {
        float AccurateThreshold;
        struct FVector ReturnValue;
    } Parms{};
    Parms.AccurateThreshold = (float)AccurateThreshold;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMTrain::EnableCollisionsOnStopUseTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "EnableCollisionsOnStopUseTag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::EnableCollisionsOnStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "EnableCollisionsOnStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::EnableCollisionsOnMoveUseTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "EnableCollisionsOnMoveUseTag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::EnableCollisionsOnMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "EnableCollisionsOnMove");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::DelayEnableCollisionsOnMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "DelayEnableCollisionsOnMove");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::DamageSystemMakeDamage(EDamageSystemDamageType DamageType, struct FHitResult HitResult, int64_t InHitAttackerValueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "DamageSystemMakeDamage");
    struct
    {
        enum EDamageSystemDamageType DamageType;
        struct FHitResult HitResult;
        int64_t InHitAttackerValueId;
    } Parms{};
    Parms.DamageType = (enum EDamageSystemDamageType)DamageType;
    Parms.HitResult = (struct FHitResult)HitResult;
    Parms.InHitAttackerValueId = (int64_t)InHitAttackerValueId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::ClientUpdateMoveTo(float fStart, float fEnd, float fCurSpeed, float fAcc, float fMaxSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "ClientUpdateMoveTo");
    struct
    {
        float fStart;
        float fEnd;
        float fCurSpeed;
        float fAcc;
        float fMaxSpeed;
    } Parms{};
    Parms.fStart = (float)fStart;
    Parms.fEnd = (float)fEnd;
    Parms.fCurSpeed = (float)fCurSpeed;
    Parms.fAcc = (float)fAcc;
    Parms.fMaxSpeed = (float)fMaxSpeed;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::ClientDoBoardDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "ClientDoBoardDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector ADFMTrain::CalHitCharacterDiedLoc(uint8_t bIsLeftOrRight, const struct FVector& CharacterLoc, const struct FVector& NormalDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "CalHitCharacterDiedLoc");
    struct
    {
        uint8_t bIsLeftOrRight;
        struct FVector CharacterLoc;
        struct FVector NormalDirection;
        struct FVector ReturnValue;
    } Parms{};
    Parms.bIsLeftOrRight = (uint8_t)bIsLeftOrRight;
    Parms.CharacterLoc = (struct FVector)CharacterLoc;
    Parms.NormalDirection = (struct FVector)NormalDirection;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMTrain::BroadcastOnStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BroadcastOnStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BroadcastOnSpawned()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BroadcastOnSpawned");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BroadcastOnJoinDestruct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BroadcastOnJoinDestruct");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BroadcastOnEndPointStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BroadcastOnEndPointStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BroadcastOnBreakDestruct(int32_t nDestruct, int32_t nTotal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BroadcastOnBreakDestruct");
    struct
    {
        int32_t nDestruct;
        int32_t nTotal;
    } Parms{};
    Parms.nDestruct = (int32_t)nDestruct;
    Parms.nTotal = (int32_t)nTotal;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BroadcastOnBoardDown(struct ADFMTrain* Train)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BroadcastOnBoardDown");
    struct
    {
        struct ADFMTrain* Train;
    } Parms{};
    Parms.Train = (struct ADFMTrain*)Train;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BreakTrain(uint8_t ServerUpdateMove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BreakTrain");
    struct
    {
        uint8_t ServerUpdateMove;
    } Parms{};
    Parms.ServerUpdateMove = (uint8_t)ServerUpdateMove;
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BP_OnFirstApproach()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BP_OnFirstApproach");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UShapeComponent* ADFMTrain::BP_GetLocomotiveOverlapComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BP_GetLocomotiveOverlapComp");
    struct
    {
        struct UShapeComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMTrain::BP_DoBoardDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BP_DoBoardDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::BoostTrain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "BoostTrain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMTrain::AccTrain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrain", "AccTrain");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMTrainDoorComponent::* ----
void UDFMTrainDoorComponent::UpdateDoorLoc(uint8_t Open, float InterpValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainDoorComponent", "UpdateDoorLoc");
    struct
    {
        uint8_t Open;
        float InterpValue;
    } Parms{};
    Parms.Open = (uint8_t)Open;
    Parms.InterpValue = (float)InterpValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMTrainDoorComponent::InitDoorLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainDoorComponent", "InitDoorLoc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMTrainDoorComponent::ForceSetDoorLoc(uint8_t Open)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainDoorComponent", "ForceSetDoorLoc");
    struct
    {
        uint8_t Open;
    } Parms{};
    Parms.Open = (uint8_t)Open;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMTrainStateBase::* ----
void UDFMTrainStateBase::OnUpdate(struct ADFMTrain* Train, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateBase", "OnUpdate");
    struct
    {
        struct ADFMTrain* Train;
        float DeltaTime;
    } Parms{};
    Parms.Train = (struct ADFMTrain*)Train;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMTrainStateBase::OnLeave(struct UDFMTrainStateComponent* TrainStateComponent, EDFMTrainState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateBase", "OnLeave");
    struct
    {
        struct UDFMTrainStateComponent* TrainStateComponent;
        enum EDFMTrainState NewState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TrainStateComponent = (struct UDFMTrainStateComponent*)TrainStateComponent;
    Parms.NewState = (enum EDFMTrainState)NewState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMTrainStateBase::OnEnter(struct UDFMTrainStateComponent* TrainStateComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateBase", "OnEnter");
    struct
    {
        struct UDFMTrainStateComponent* TrainStateComponent;
    } Parms{};
    Parms.TrainStateComponent = (struct UDFMTrainStateComponent*)TrainStateComponent;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMTrainStateBase::CanLeave(struct UDFMTrainStateComponent* TrainStateComponent, EDFMTrainState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateBase", "CanLeave");
    struct
    {
        struct UDFMTrainStateComponent* TrainStateComponent;
        enum EDFMTrainState NewState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TrainStateComponent = (struct UDFMTrainStateComponent*)TrainStateComponent;
    Parms.NewState = (enum EDFMTrainState)NewState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMTrainStateBase::BP_OnUpdate(struct ADFMTrain* Train, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateBase", "BP_OnUpdate");
    struct
    {
        struct ADFMTrain* Train;
        float DeltaTime;
    } Parms{};
    Parms.Train = (struct ADFMTrain*)Train;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMTrainStateComponent::* ----
void UDFMTrainStateComponent::OnRep_CurrentStateEnum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateComponent", "OnRep_CurrentStateEnum");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EDFMTrainState UDFMTrainStateComponent::GetCurrentStateEnum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateComponent", "GetCurrentStateEnum");
    struct
    {
        enum EDFMTrainState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMTrainStateComponent::ChangeStateEnum(EDFMTrainState InTrainState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateComponent", "ChangeStateEnum");
    struct
    {
        enum EDFMTrainState InTrainState;
    } Parms{};
    Parms.InTrainState = (enum EDFMTrainState)InTrainState;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMTrainStateComponent::ChangeState(EDFMTrainState InTrainState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTrainStateComponent", "ChangeState");
    struct
    {
        enum EDFMTrainState InTrainState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InTrainState = (enum EDFMTrainState)InTrainState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehicleActingComponent::* ----
void UDFMVehicleActingComponent::TickDustEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "TickDustEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetUsingActingWheelRotation(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetUsingActingWheelRotation");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetUsingActingWheelAnim(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetUsingActingWheelAnim");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetUsingActingSpeed(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetUsingActingSpeed");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetupActingWheelAnimInstances()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetupActingWheelAnimInstances");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetActingWheelRotationAngle(float LeftAngle, float RightAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetActingWheelRotationAngle");
    struct
    {
        float LeftAngle;
        float RightAngle;
    } Parms{};
    Parms.LeftAngle = (float)LeftAngle;
    Parms.RightAngle = (float)RightAngle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetActingWheelAnimYaw(int32_t Index, float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetActingWheelAnimYaw");
    struct
    {
        int32_t Index;
        float Angle;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetActingWheelAnimData(int32_t Index, struct FRotator RotOffset, struct FVector LocOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetActingWheelAnimData");
    struct
    {
        int32_t Index;
        struct FRotator RotOffset;
        struct FVector LocOffset;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.RotOffset = (struct FRotator)RotOffset;
    Parms.LocOffset = (struct FVector)LocOffset;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleActingComponent::SetActingSpeed(float Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "SetActingSpeed");
    struct
    {
        float Speed;
    } Parms{};
    Parms.Speed = (float)Speed;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMVehicleActingComponent::IsUsingActingWheelRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "IsUsingActingWheelRotation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMVehicleActingComponent::IsUsingActingWheelAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "IsUsingActingWheelAnim");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMVehicleActingComponent::IsUsingActingSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "IsUsingActingSpeed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMVehicleActingComponent::GetActingWheelRotationAngleRight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "GetActingWheelRotationAngleRight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMVehicleActingComponent::GetActingWheelRotationAngleLeft()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "GetActingWheelRotationAngleLeft");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UDFMVehicleActingComponent::GetActingWheelAnimRotOffset(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "GetActingWheelAnimRotOffset");
    struct
    {
        int32_t Index;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UDFMVehicleActingComponent::GetActingWheelAnimLocOffset(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "GetActingWheelAnimLocOffset");
    struct
    {
        int32_t Index;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMVehicleActingComponent::AddActingWheelAnimPitch(int32_t Index, float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleActingComponent", "AddActingWheelAnimPitch");
    struct
    {
        int32_t Index;
        float Angle;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMVehicleADS::* ----
void ADFMVehicleADS::SetInterceptDataInternal(float NewInterceptRadius, struct FVector NewInterceptFirePos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleADS", "SetInterceptDataInternal");
    struct
    {
        float NewInterceptRadius;
        struct FVector NewInterceptFirePos;
    } Parms{};
    Parms.NewInterceptRadius = (float)NewInterceptRadius;
    Parms.NewInterceptFirePos = (struct FVector)NewInterceptFirePos;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleADS::OnProjectileIntercepted(struct FVector ProjectilePos, struct AActor* InBulletCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleADS", "OnProjectileIntercepted");
    struct
    {
        struct FVector ProjectilePos;
        struct AActor* InBulletCreator;
    } Parms{};
    Parms.ProjectilePos = (struct FVector)ProjectilePos;
    Parms.InBulletCreator = (struct AActor*)InBulletCreator;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleSkillExecutor::* ----
uint8_t UDFMVehicleSkillExecutor::NeedPlayEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillExecutor", "NeedPlayEffect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehicleADSSkillExecutor::* ----
void UDFMVehicleADSSkillExecutor::OnCooldown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleADSSkillExecutor", "OnCooldown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMVehicleAIController::* ----
void ADFMVehicleAIController::UnBindDrama()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAIController", "UnBindDrama");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleAnimInteractorComponent::* ----
void UDFMVehicleAnimInteractorComponent::OnRep_DoorStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAnimInteractorComponent", "OnRep_DoorStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleBodyPartExecutor::* ----
void UDFMVehicleBodyPartExecutor::OnRep_ReceivedDamage(float OldDamage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBodyPartExecutor", "OnRep_ReceivedDamage");
    struct
    {
        float OldDamage;
    } Parms{};
    Parms.OldDamage = (float)OldDamage;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleAssembledComponent::* ----
void UDFMVehicleAssembledComponent::WakeupVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "WakeupVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::UploadVehicleRaycastResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "UploadVehicleRaycastResult");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::OnCheckServerDeployStateTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "OnCheckServerDeployStateTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::OnAutoGetOffVehicleTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "OnAutoGetOffVehicleTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMVehicleAssembledComponent::IsLocalPlayerDriver()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "IsLocalPlayerDriver");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMVehicleAssembledComponent::IsEnableLevelStreamingCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "IsEnableLevelStreamingCheck");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMVehicleAssembledComponent::EndCheckLevelStreaming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "EndCheckLevelStreaming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::DebugCheckVehiclePhysicsLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "DebugCheckVehiclePhysicsLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CreateCheckServerDeployStateTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CreateCheckServerDeployStateTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CreateAutoGetOffVehicleTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CreateAutoGetOffVehicleTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::ClientOnLoadingPercentage(int32_t Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "ClientOnLoadingPercentage");
    struct
    {
        int32_t Percent;
    } Parms{};
    Parms.Percent = (int32_t)Percent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CheckLevelStreamingProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CheckLevelStreamingProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CheckLevelStreaming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CheckLevelStreaming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CheckFootTerrainLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CheckFootTerrainLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CancelLevelStreamingProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CancelLevelStreamingProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CancelCheckServerDeployStateTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CancelCheckServerDeployStateTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CancelAutoGetOffVehicleTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CancelAutoGetOffVehicleTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledComponent::CancelAllTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledComponent", "CancelAllTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleAssembledPartComponent_NetExtend::* ----
void UDFMVehicleAssembledPartComponent_NetExtend::OnRep_GlassCrackStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledPartComponent_NetExtend", "OnRep_GlassCrackStep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledPartComponent_NetExtend::OnRep_bIsBroken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledPartComponent_NetExtend", "OnRep_bIsBroken");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledPartComponent_NetExtend::ClientPlayBrokenAudio(struct FName Auidio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledPartComponent_NetExtend", "ClientPlayBrokenAudio");
    struct
    {
        struct FName Auidio;
    } Parms{};
    Parms.Auidio = (struct FName)Auidio;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembledPartComponent_NetExtend::BoardCastBrokenEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembledPartComponent_NetExtend", "BoardCastBrokenEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleAssembleSteeringWheelExtension::* ----
void UDFMVehicleAssembleSteeringWheelExtension::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleSteeringWheelExtension", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembleSteeringWheelExtension::OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleSteeringWheelExtension", "OnCharacterGetOn");
    struct
    {
        struct AActor* CHARACTER;
        struct FName SeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.SeatName = (struct FName)SeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembleSteeringWheelExtension::OnCharacterGetOff(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleSteeringWheelExtension", "OnCharacterGetOff");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleAssembleEmissionExtension::* ----
void UDFMVehicleAssembleEmissionExtension::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleEmissionExtension", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembleEmissionExtension::OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleEmissionExtension", "OnCharacterGetOn");
    struct
    {
        struct AActor* CHARACTER;
        struct FName SeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.SeatName = (struct FName)SeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembleEmissionExtension::OnCharacterGetOff(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleEmissionExtension", "OnCharacterGetOff");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleAssembleDoorExtension::* ----
void UDFMVehicleAssembleDoorExtension::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleDoorExtension", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembleDoorExtension::OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleDoorExtension", "OnCharacterGetOn");
    struct
    {
        struct AActor* CHARACTER;
        struct FName SeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.SeatName = (struct FName)SeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleAssembleDoorExtension::OnCharacterGetOff(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleAssembleDoorExtension", "OnCharacterGetOff");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleBattlefieldEffectComponent::* ----
void UDFMVehicleBattlefieldEffectComponent::OnVehicleWeaponChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBattlefieldEffectComponent", "OnVehicleWeaponChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleBattlefieldEffectComponent::OnVehicleSkinChanged(int32_t SkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleBattlefieldEffectComponent", "OnVehicleSkinChanged");
    struct
    {
        int32_t SkinId;
    } Parms{};
    Parms.SkinId = (int32_t)SkinId;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleCollisionComponent::* ----
void UDFMVehicleCollisionComponent::ServerMakeDamageToActor(struct AActor* TargetActor, float VelocitySize, float VelocityOffset, float VelocityBeforeCollision, float HitAngleWithVehicleUp, float AngleVehicleUpWithUp, uint8_t bOnlyConsideHitWall)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleCollisionComponent", "ServerMakeDamageToActor");
    struct
    {
        struct AActor* TargetActor;
        float VelocitySize;
        float VelocityOffset;
        float VelocityBeforeCollision;
        float HitAngleWithVehicleUp;
        float AngleVehicleUpWithUp;
        uint8_t bOnlyConsideHitWall;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.VelocitySize = (float)VelocitySize;
    Parms.VelocityOffset = (float)VelocityOffset;
    Parms.VelocityBeforeCollision = (float)VelocityBeforeCollision;
    Parms.HitAngleWithVehicleUp = (float)HitAngleWithVehicleUp;
    Parms.AngleVehicleUpWithUp = (float)AngleVehicleUpWithUp;
    Parms.bOnlyConsideHitWall = (uint8_t)bOnlyConsideHitWall;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleCollisionComponent::ServerDelayMakeDamageToActor(struct AActor* TargetActor, struct FVector VelocityBeforeCollision, float HitAngleWithVehicleUp, float AngleVehicleUpWithUp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleCollisionComponent", "ServerDelayMakeDamageToActor");
    struct
    {
        struct AActor* TargetActor;
        struct FVector VelocityBeforeCollision;
        float HitAngleWithVehicleUp;
        float AngleVehicleUpWithUp;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.VelocityBeforeCollision = (struct FVector)VelocityBeforeCollision;
    Parms.HitAngleWithVehicleUp = (float)HitAngleWithVehicleUp;
    Parms.AngleVehicleUpWithUp = (float)AngleVehicleUpWithUp;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleCollisionComponent::OnVehicleOverShot(struct FRigidBodyState CurrentRigidBodyState, struct FHitResult HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleCollisionComponent", "OnVehicleOverShot");
    struct
    {
        struct FRigidBodyState CurrentRigidBodyState;
        struct FHitResult HitResult;
    } Parms{};
    Parms.CurrentRigidBodyState = (struct FRigidBodyState)CurrentRigidBodyState;
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleCollisionComponent::OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleCollisionComponent", "OnVehicleHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleCounterFireRadarPassiveSkillExecutor::* ----
void UDFMVehicleCounterFireRadarPassiveSkillExecutor::RefreshRevealedActorsStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleCounterFireRadarPassiveSkillExecutor", "RefreshRevealedActorsStatus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleCounterFireRadarPassiveSkillExecutor::OnVehicleTakeDamage(const struct FDamageResultInfo& DamageResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleCounterFireRadarPassiveSkillExecutor", "OnVehicleTakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResultInfo;
    } Parms{};
    Parms.DamageResultInfo = (struct FDamageResultInfo)DamageResultInfo;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleDataCollectionSubsystem::* ----
void UDFMVehicleDataCollectionSubsystem::OnServerMatchEnded(EMatchOverReason MatchOverReason, int64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleDataCollectionSubsystem", "OnServerMatchEnded");
    struct
    {
        enum EMatchOverReason MatchOverReason;
        int64_t PlayerUin;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    Parms.PlayerUin = (int64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleDataCollectionSubsystem::OnPostMakeDamageNtf(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleDataCollectionSubsystem", "OnPostMakeDamageNtf");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleDataCollectionSubsystem::OnBehaviorScoreUpdateNtf(struct AGPCharacter* CHARACTER, int32_t ScoreName, struct FName ScoreNameExt, int32_t Score)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleDataCollectionSubsystem", "OnBehaviorScoreUpdateNtf");
    struct
    {
        struct AGPCharacter* CHARACTER;
        int32_t ScoreName;
        struct FName ScoreNameExt;
        int32_t Score;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.ScoreName = (int32_t)ScoreName;
    Parms.ScoreNameExt = (struct FName)ScoreNameExt;
    Parms.Score = (int32_t)Score;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleDestroyDestructibleComponent::* ----
void UDFMVehicleDestroyDestructibleComponent::OnComponentBeginOverlapTriggered(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleDestroyDestructibleComponent", "OnComponentBeginOverlapTriggered");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleGetOffSkillExecutor::* ----
void UDFMVehicleGetOffSkillExecutor::PerformGetOff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleGetOffSkillExecutor", "PerformGetOff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleGlobalUtils::* ----
struct TMap<struct FName, struct FString> UDFMVehicleGlobalUtils::GetSkillWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMVehicleGlobalUtils", "GetSkillWidgetNames");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        struct AActor* CHARACTER;
        struct TMap<struct FName, struct FString> ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FString, struct FName> UDFMVehicleGlobalUtils::GetSkillWidgetConfig(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMVehicleGlobalUtils", "GetSkillWidgetConfig");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        struct AActor* CHARACTER;
        struct TMap<struct FString, struct FName> ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UDFMVehicleGlobalUtils::GetPreloadedSubWidgetNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMVehicleGlobalUtils", "GetPreloadedSubWidgetNames");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UDFMVehicleGlobalUtils::GetAllSubWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMVehicleGlobalUtils", "GetAllSubWidgetNames");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        struct AActor* CHARACTER;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UDFMVehicleGlobalUtils::GetAllSubParentWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMVehicleGlobalUtils", "GetAllSubParentWidgetNames");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        struct AActor* CHARACTER;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UDFMVehicleGlobalUtils::GetAllSubChildrenWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMVehicleGlobalUtils", "GetAllSubChildrenWidgetNames");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        struct AActor* CHARACTER;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IDFMVehicleMovementInterface::* ----
uint8_t IDFMVehicleMovementInterface::IsRollover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMovementInterface", "IsRollover");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IDFMVehicleMovementInterface::IsBraking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMovementInterface", "IsBraking");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IDFMVehicleMovementInterface::GetRawThrottleInput(uint8_t LocalVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMovementInterface", "GetRawThrottleInput");
    struct
    {
        uint8_t LocalVal;
        float ReturnValue;
    } Parms{};
    Parms.LocalVal = (uint8_t)LocalVal;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IDFMVehicleMovementInterface::GetRawSteeringInput(uint8_t LocalVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMovementInterface", "GetRawSteeringInput");
    struct
    {
        uint8_t LocalVal;
        float ReturnValue;
    } Parms{};
    Parms.LocalVal = (uint8_t)LocalVal;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IDFMVehicleMovementInterface::GetOnVehicleMoveBase(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMovementInterface", "GetOnVehicleMoveBase");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void IDFMVehicleMovementInterface::GetOffVehicleMoveBase(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMovementInterface", "GetOffVehicleMoveBase");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMVehicleMultiInteractor::* ----
void ADFMVehicleMultiInteractor::RefreshInteractPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMultiInteractor", "RefreshInteractPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleMultiInteractor::OnInteractorHUDClicked(int32_t InteractorIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMultiInteractor", "OnInteractorHUDClicked");
    struct
    {
        int32_t InteractorIndex;
    } Parms{};
    Parms.InteractorIndex = (int32_t)InteractorIndex;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleMusicComponent::* ----
void UDFMVehicleMusicComponent::ServerStopMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "ServerStopMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::ServerPlayMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "ServerPlayMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::RequestStopMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "RequestStopMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::RequestPlayMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "RequestPlayMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::OnVehicleDead(struct AActor* DFMVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "OnVehicleDead");
    struct
    {
        struct AActor* DFMVehicle;
    } Parms{};
    Parms.DFMVehicle = (struct AActor*)DFMVehicle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::OnRep_MusicState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "OnRep_MusicState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "OnCharacterGetOn");
    struct
    {
        struct AActor* CHARACTER;
        struct FName SeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.SeatName = (struct FName)SeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleMusicComponent::OnCharacterGetOff(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "OnCharacterGetOff");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

EVehicleMusicState UDFMVehicleMusicComponent::GetMusicState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleMusicComponent", "GetMusicState");
    struct
    {
        enum EVehicleMusicState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehiclePathFollowComponent::* ----
uint8_t UDFMVehiclePathFollowComponent::RequestToStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowComponent", "RequestToStop");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMVehiclePathFollowComponent::RequestToResume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowComponent", "RequestToResume");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMVehiclePathFollowComponent::RequestToPause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowComponent", "RequestToPause");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMVehiclePathFollowComponent::RequestToMove(const struct FDFMVhiclePathFollowMoveRequestParam& InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowComponent", "RequestToMove");
    struct
    {
        struct FDFMVhiclePathFollowMoveRequestParam InParam;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InParam = (struct FDFMVhiclePathFollowMoveRequestParam)InParam;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehiclePathFollowingComponent::* ----
void UDFMVehiclePathFollowingComponent::SetPathFollowingVelocity(float Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowingComponent", "SetPathFollowingVelocity");
    struct
    {
        float Velocity;
    } Parms{};
    Parms.Velocity = (float)Velocity;
    this->ProcessEvent(Func, &Parms);
}

// ---- UVehicleNavmeshBlockerComponent::* ----
void UVehicleNavmeshBlockerComponent::SetCanAffectNavigation(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleNavmeshBlockerComponent", "SetCanAffectNavigation");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMVehiclePathFollowPath::* ----
struct ADFMVehiclePathFollowWayPoint* ADFMVehiclePathFollowPath::GetWayPointActor(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "GetWayPointActor");
    struct
    {
        int32_t Index;
        struct ADFMVehiclePathFollowWayPoint* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USplineComponent* ADFMVehiclePathFollowPath::GetSpline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "GetSpline");
    struct
    {
        struct USplineComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMVehiclePathFollowPath::GetNumberOfWayPointActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "GetNumberOfWayPointActor");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ADFMVehiclePathFollowWayPoint*> ADFMVehiclePathFollowPath::GetAllWayPointActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "GetAllWayPointActors");
    struct
    {
        struct TArray<struct ADFMVehiclePathFollowWayPoint*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADFMVehiclePathFollowPath::FindDistanceAlongSplineClosestToLocation(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "FindDistanceAlongSplineClosestToLocation");
    struct
    {
        struct FVector Location;
        float ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMVehiclePathFollowPath::CreateWaypointAtScreenCenter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "CreateWaypointAtScreenCenter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehiclePathFollowPath::CreateWaypoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "CreateWaypoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehiclePathFollowPath::AttachWayPointsToSpline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePathFollowPath", "AttachWayPointsToSpline");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMVehiclePreviewPlacementActor::* ----
uint8_t ADFMVehiclePreviewPlacementActor::IsInValidPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehiclePreviewPlacementActor", "IsInValidPosition");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehicleRebornBeaconSkillExecutor::* ----
void UDFMVehicleRebornBeaconSkillExecutor::OnPreviewPlacementLoaded(const struct FSoftObjectPath& ResourcePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleRebornBeaconSkillExecutor", "OnPreviewPlacementLoaded");
    struct
    {
        struct FSoftObjectPath ResourcePath;
    } Parms{};
    Parms.ResourcePath = (struct FSoftObjectPath)ResourcePath;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleResourceManager::* ----
void UDFMVehicleResourceManager::OnResourceLoadComplete(const struct FSoftObjectPath& ResourcePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleResourceManager", "OnResourceLoadComplete");
    struct
    {
        struct FSoftObjectPath ResourcePath;
    } Parms{};
    Parms.ResourcePath = (struct FSoftObjectPath)ResourcePath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleResourceManager::OnResourceArrayLoadComplete(struct TArray<struct FSoftObjectPath> ResourcePaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleResourceManager", "OnResourceArrayLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> ResourcePaths;
    } Parms{};
    Parms.ResourcePaths = (struct TArray<struct FSoftObjectPath>)ResourcePaths;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleScanSkillExecutor::* ----
void UDFMVehicleScanSkillExecutor::OnScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleScanSkillExecutor", "OnScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleSequenceBindingComponent::* ----
void UDFMVehicleSequenceBindingComponent::StartAutoDrive(float ExpectVelocity, float ExpectDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSequenceBindingComponent", "StartAutoDrive");
    struct
    {
        float ExpectVelocity;
        float ExpectDuration;
    } Parms{};
    Parms.ExpectVelocity = (float)ExpectVelocity;
    Parms.ExpectDuration = (float)ExpectDuration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSequenceBindingComponent::KillVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSequenceBindingComponent", "KillVehicle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSequenceBindingComponent::KillAllPassengers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSequenceBindingComponent", "KillAllPassengers");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMVehicleSequenceBindingComponent::IsAIDisabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSequenceBindingComponent", "IsAIDisabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMVehicleSkillComponent::* ----
void UDFMVehicleSkillComponent::ServerInterruptVehicleSkills(struct TArray<struct FString> KeyArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillComponent", "ServerInterruptVehicleSkills");
    struct
    {
        struct TArray<struct FString> KeyArray;
    } Parms{};
    Parms.KeyArray = (struct TArray<struct FString>)KeyArray;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillComponent::ServerExecuteResult(struct FString Key, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillComponent", "ServerExecuteResult");
    struct
    {
        struct FString Key;
        uint8_t bSuccess;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillComponent::OnRep_SKillInstances()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillComponent", "OnRep_SKillInstances");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillComponent::OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillComponent", "OnCharacterSwitchSeat");
    struct
    {
        struct AActor* CHARACTER;
        struct FName OldSeatName;
        struct FName NewSeatName;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    Parms.OldSeatName = (struct FName)OldSeatName;
    Parms.NewSeatName = (struct FName)NewSeatName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillComponent::OnCharacterGetOff(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillComponent", "OnCharacterGetOff");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleRepairSkillExecutor::* ----
void UDFMVehicleRepairSkillExecutor::OnVehicleTakeDamage(const struct FDamageResultInfo& DamageResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleRepairSkillExecutor", "OnVehicleTakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResultInfo;
    } Parms{};
    Parms.DamageResultInfo = (struct FDamageResultInfo)DamageResultInfo;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMVehicleSkillInstance::* ----
void UDFMVehicleSkillInstance::OnRep_SkillStatus(EDFMVehicleSkillStatus OldSkillStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillInstance", "OnRep_SkillStatus");
    struct
    {
        enum EDFMVehicleSkillStatus OldSkillStatus;
    } Parms{};
    Parms.OldSkillStatus = (enum EDFMVehicleSkillStatus)OldSkillStatus;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillInstance::OnRep_bIsDisable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillInstance", "OnRep_bIsDisable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMVehicleSupplyStation::* ----
void ADFMVehicleSupplyStation::OnVehicleAmmoSupplyEnd(struct AGPVehicleBase* SupplyVehicle, struct AActor* AmmoSupplyStation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSupplyStation", "OnVehicleAmmoSupplyEnd");
    struct
    {
        struct AGPVehicleBase* SupplyVehicle;
        struct AActor* AmmoSupplyStation;
    } Parms{};
    Parms.SupplyVehicle = (struct AGPVehicleBase*)SupplyVehicle;
    Parms.AmmoSupplyStation = (struct AActor*)AmmoSupplyStation;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleSupplyStation::OnRep_SupplyInfosUI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSupplyStation", "OnRep_SupplyInfosUI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleSupplyStation::OnEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSupplyStation", "OnEndOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMVehicleSupplyStation::OnBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSupplyStation", "OnBeginOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFTransformAnimationPlayer::* ----
void UDFTransformAnimationPlayer::StopAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "StopAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::SetPlayRate(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "SetPlayRate");
    struct
    {
        float Rate;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::SetPlaybackDirection(uint8_t bInReverse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "SetPlaybackDirection");
    struct
    {
        uint8_t bInReverse;
    } Parms{};
    Parms.bInReverse = (uint8_t)bInReverse;
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::SetLooping(uint8_t bLoop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "SetLooping");
    struct
    {
        uint8_t bLoop;
    } Parms{};
    Parms.bLoop = (uint8_t)bLoop;
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::ResumeAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "ResumeAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::PlayAnimationReverse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "PlayAnimationReverse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::PlayAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "PlayAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::PauseAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "PauseAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::OnTransformAnimationStopped__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "OnTransformAnimationStopped__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::OnTransformAnimationStarted__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "OnTransformAnimationStarted__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::OnTransformAnimationPaused__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "OnTransformAnimationPaused__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::OnTransformAnimationLooped__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "OnTransformAnimationLooped__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::OnTransformAnimationFinished__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "OnTransformAnimationFinished__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFTransformAnimationPlayer::JumpToTime(float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "JumpToTime");
    struct
    {
        float Time;
    } Parms{};
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFTransformAnimationPlayer::IsStopped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "IsStopped");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFTransformAnimationPlayer::IsReversed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "IsReversed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFTransformAnimationPlayer::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFTransformAnimationPlayer::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "IsPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFTransformAnimationPlayer::IsLooping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "IsLooping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFTransformAnimationPlayer::GetPlayRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "GetPlayRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDFTransformAnimationStatus UDFTransformAnimationPlayer::GetPlaybackStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "GetPlaybackStatus");
    struct
    {
        enum EDFTransformAnimationStatus ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFTransformAnimationPlayer::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "GetDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFTransformAnimationPlayer::GetCurrentTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "GetCurrentTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDFTransformAnimationData UDFTransformAnimationPlayer::GetAnimationData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "GetAnimationData");
    struct
    {
        struct FDFTransformAnimationData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* UDFTransformAnimationPlayer::GetAnimatedComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "GetAnimatedComponent");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFTransformAnimationPlayer::ChangePlaybackDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFTransformAnimationPlayer", "ChangePlaybackDirection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ADramaAreaVehicle::* ----
void ADramaAreaVehicle::SpawnVehicleAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DramaAreaVehicle", "SpawnVehicleAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADramaAreaVehicle::ShouldSpawnVehicleOnCurrentDifficulty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DramaAreaVehicle", "ShouldSpawnVehicleOnCurrentDifficulty");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FName, struct FName> ADramaAreaVehicle::GetOverridePassengers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DramaAreaVehicle", "GetOverridePassengers");
    struct
    {
        struct TMap<struct FName, struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIPatrolPath* ADramaAreaVehicle::GetExpectedVehiclePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DramaAreaVehicle", "GetExpectedVehiclePath");
    struct
    {
        struct AAIPatrolPath* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADramaAreaVehicle::GetExpectedVehicleHealth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DramaAreaVehicle", "GetExpectedVehicleHealth");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADramaAreaVehicle::GetExpectedOverrideExplodeDamage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DramaAreaVehicle", "GetExpectedOverrideExplodeDamage");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UInteractorVehicleExecutor::* ----
uint8_t UInteractorVehicleExecutor::IsSeatFull(struct AActor* Interactor, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorVehicleExecutor", "IsSeatFull");
    struct
    {
        struct AActor* Interactor;
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Interactor = (struct AActor*)Interactor;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UInteractorVehicleExecutor::IsLocalPlayerOnVehicle(struct AActor* Interactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorVehicleExecutor", "IsLocalPlayerOnVehicle");
    struct
    {
        struct AActor* Interactor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Interactor = (struct AActor*)Interactor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULaserPointerLogic::* ----
void ULaserPointerLogic::RefreshLockingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "RefreshLockingState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::RefreshLockingParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "RefreshLockingParams");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::OnVehicleDead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "OnVehicleDead");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::OnRep_LaserPointerLockersInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "OnRep_LaserPointerLockersInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::OnRep_LaserPointerLockers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "OnRep_LaserPointerLockers");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::NotifyStopLaserPointerLocking(struct UObject* CasterCharacter, ELockerSubType LockerSubType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "NotifyStopLaserPointerLocking");
    struct
    {
        struct UObject* CasterCharacter;
        enum ELockerSubType LockerSubType;
    } Parms{};
    Parms.CasterCharacter = (struct UObject*)CasterCharacter;
    Parms.LockerSubType = (enum ELockerSubType)LockerSubType;
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::NotifyStartLaserPointerLocking(struct UObject* CasterCharacter, float IncreaseSpeed, float DecreaseSpeed, float PersistentTime, ELockerSubType LockerSubType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "NotifyStartLaserPointerLocking");
    struct
    {
        struct UObject* CasterCharacter;
        float IncreaseSpeed;
        float DecreaseSpeed;
        float PersistentTime;
        enum ELockerSubType LockerSubType;
    } Parms{};
    Parms.CasterCharacter = (struct UObject*)CasterCharacter;
    Parms.IncreaseSpeed = (float)IncreaseSpeed;
    Parms.DecreaseSpeed = (float)DecreaseSpeed;
    Parms.PersistentTime = (float)PersistentTime;
    Parms.LockerSubType = (enum ELockerSubType)LockerSubType;
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::NotifyLock(struct UObject* CasterCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "NotifyLock");
    struct
    {
        struct UObject* CasterCharacter;
    } Parms{};
    Parms.CasterCharacter = (struct UObject*)CasterCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::MulticastTargetLockingStateInfo(int32_t CampId, EStingerMissileLockingState ServerLockingState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "MulticastTargetLockingStateInfo");
    struct
    {
        int32_t CampId;
        enum EStingerMissileLockingState ServerLockingState;
    } Parms{};
    Parms.CampId = (int32_t)CampId;
    Parms.ServerLockingState = (enum EStingerMissileLockingState)ServerLockingState;
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::MulticastTargetLockingParamInfo(int32_t CampId, float IncreaseSpeed, float DecreaseSpeed, float PersistentTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "MulticastTargetLockingParamInfo");
    struct
    {
        int32_t CampId;
        float IncreaseSpeed;
        float DecreaseSpeed;
        float PersistentTime;
    } Parms{};
    Parms.CampId = (int32_t)CampId;
    Parms.IncreaseSpeed = (float)IncreaseSpeed;
    Parms.DecreaseSpeed = (float)DecreaseSpeed;
    Parms.PersistentTime = (float)PersistentTime;
    this->ProcessEvent(Func, &Parms);
}

void ULaserPointerLogic::LockingTick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "LockingTick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

EStingerMissileLockingState ULaserPointerLogic::GetStateForUINotice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "GetStateForUINotice");
    struct
    {
        enum EStingerMissileLockingState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleLockInfo ULaserPointerLogic::GetLockInfWithSubTypeByCaster(struct APawn* Caster, ELockerSubType InSubType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "GetLockInfWithSubTypeByCaster");
    struct
    {
        struct APawn* Caster;
        enum ELockerSubType InSubType;
        struct FVehicleLockInfo ReturnValue;
    } Parms{};
    Parms.Caster = (struct APawn*)Caster;
    Parms.InSubType = (enum ELockerSubType)InSubType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleLockInfo ULaserPointerLogic::GetLockInfoWithSubType(int32_t CampId, ELockerSubType InSubType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "GetLockInfoWithSubType");
    struct
    {
        int32_t CampId;
        enum ELockerSubType InSubType;
        struct FVehicleLockInfo ReturnValue;
    } Parms{};
    Parms.CampId = (int32_t)CampId;
    Parms.InSubType = (enum ELockerSubType)InSubType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleLockInfo ULaserPointerLogic::GetLockInfoByCasterIncludeSubType(struct APawn* Caster)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "GetLockInfoByCasterIncludeSubType");
    struct
    {
        struct APawn* Caster;
        struct FVehicleLockInfo ReturnValue;
    } Parms{};
    Parms.Caster = (struct APawn*)Caster;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleLockInfo ULaserPointerLogic::GetLockInfoByCaster(struct APawn* Caster)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "GetLockInfoByCaster");
    struct
    {
        struct APawn* Caster;
        struct FVehicleLockInfo ReturnValue;
    } Parms{};
    Parms.Caster = (struct APawn*)Caster;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleLockInfo ULaserPointerLogic::GetLockInfo(int32_t CampId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "GetLockInfo");
    struct
    {
        int32_t CampId;
        struct FVehicleLockInfo ReturnValue;
    } Parms{};
    Parms.CampId = (int32_t)CampId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMAbilityLockerComponent* ULaserPointerLogic::GetAbilityLockerSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "GetAbilityLockerSystem");
    struct
    {
        struct UDFMAbilityLockerComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULaserPointerLogic::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LaserPointerLogic", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- USOLTrainComponent::* ----
void USOLTrainComponent::ToggleLocomotiveSound(uint8_t bToggle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "ToggleLocomotiveSound");
    struct
    {
        uint8_t bToggle;
    } Parms{};
    Parms.bToggle = (uint8_t)bToggle;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::SetBroadcastStopStateWhenBeginPlay(uint8_t bSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "SetBroadcastStopStateWhenBeginPlay");
    struct
    {
        uint8_t bSet;
    } Parms{};
    Parms.bSet = (uint8_t)bSet;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::ServerToggleDoorOpen(uint8_t InDoorOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "ServerToggleDoorOpen");
    struct
    {
        uint8_t InDoorOpen;
    } Parms{};
    Parms.InDoorOpen = (uint8_t)InDoorOpen;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::RefreshSkeletonMeshCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "RefreshSkeletonMeshCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::PlayDoorAudio(uint8_t Open)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "PlayDoorAudio");
    struct
    {
        uint8_t Open;
    } Parms{};
    Parms.Open = (uint8_t)Open;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::OpenSkeletonMeshTick(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "OpenSkeletonMeshTick");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::OnTrainStop(struct ADFMTrain* InTrain)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "OnTrainStop");
    struct
    {
        struct ADFMTrain* InTrain;
    } Parms{};
    Parms.InTrain = (struct ADFMTrain*)InTrain;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::OnTrainStateChange(EDFMTrainState TrainState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "OnTrainStateChange");
    struct
    {
        enum EDFMTrainState TrainState;
    } Parms{};
    Parms.TrainState = (enum EDFMTrainState)TrainState;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::OnTrainMove(struct ADFMTrain* InTrain)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "OnTrainMove");
    struct
    {
        struct ADFMTrain* InTrain;
    } Parms{};
    Parms.InTrain = (struct ADFMTrain*)InTrain;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::OnServerTrainStateChange(EDFMTrainState TrainState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "OnServerTrainStateChange");
    struct
    {
        enum EDFMTrainState TrainState;
    } Parms{};
    Parms.TrainState = (enum EDFMTrainState)TrainState;
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::OnRep_DoorOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "OnRep_DoorOpen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::OnLoadedAllControllerClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "OnLoadedAllControllerClass");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::InitAllDoors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "InitAllDoors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::EnableCollisionsOnStopUseTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "EnableCollisionsOnStopUseTag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::DeleteRunningAudioProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "DeleteRunningAudioProxy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::CreateRunningAudioProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "CreateRunningAudioProxy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::CloseSkeletonMeshTickAfter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "CloseSkeletonMeshTickAfter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::CloseSkeletonMeshTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "CloseSkeletonMeshTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLTrainComponent::BroadcastStopStateWhenBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLTrainComponent", "BroadcastStopStateWhenBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AVehicleAreaDrama::* ----
void AVehicleAreaDrama::SpawnVehicleAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAreaDrama", "SpawnVehicleAI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AVehicleAreaDrama::ShouldSpawnVehicleOnCurrentDifficulty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAreaDrama", "ShouldSpawnVehicleOnCurrentDifficulty");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FName, struct FName> AVehicleAreaDrama::GetOverridePassengers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAreaDrama", "GetOverridePassengers");
    struct
    {
        struct TMap<struct FName, struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPSplinePath* AVehicleAreaDrama::GetExpectedVehiclePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAreaDrama", "GetExpectedVehiclePath");
    struct
    {
        struct AGPSplinePath* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AVehicleAreaDrama::GetExpectedVehicleHealth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAreaDrama", "GetExpectedVehicleHealth");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AVehicleAreaDrama::GetExpectedOverrideExplodeDamage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAreaDrama", "GetExpectedOverrideExplodeDamage");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVehicleAssistAimSystem::* ----
void UVehicleAssistAimSystem::OnLocalPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAssistAimSystem", "OnLocalPawnChanged");
    struct
    {
        struct AActor* OldCharacter;
        struct AActor* NewCharacter;
    } Parms{};
    Parms.OldCharacter = (struct AActor*)OldCharacter;
    Parms.NewCharacter = (struct AActor*)NewCharacter;
    this->ProcessEvent(Func, &Parms);
}

// ---- AVehicleFrontendActor::* ----
void AVehicleFrontendActor::Setup(uint64_t InID, struct FDelegate InCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "Setup");
    struct
    {
        uint64_t InID;
        struct FDelegate InCallback;
    } Parms{};
    Parms.InID = (uint64_t)InID;
    Parms.InCallback = (struct FDelegate)InCallback;
    this->ProcessEvent(Func, &Parms);
}

void AVehicleFrontendActor::SetSkeletalMeshComponentsRenderCustomDepth(uint8_t bRenderCustomDepth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "SetSkeletalMeshComponentsRenderCustomDepth");
    struct
    {
        uint8_t bRenderCustomDepth;
    } Parms{};
    Parms.bRenderCustomDepth = (uint8_t)bRenderCustomDepth;
    this->ProcessEvent(Func, &Parms);
}

void AVehicleFrontendActor::OnLoadServicesFinishCallback(uint64_t TaskID, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "OnLoadServicesFinishCallback");
    struct
    {
        uint64_t TaskID;
        uint8_t bSuccess;
    } Parms{};
    Parms.TaskID = (uint64_t)TaskID;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

uint64_t AVehicleFrontendActor::GetVehicleRootID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "GetVehicleRootID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t AVehicleFrontendActor::GetVehicleActorID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "GetVehicleActorID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct USkeletalMeshComponent*> AVehicleFrontendActor::GetSkeletalMeshComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "GetSkeletalMeshComponents");
    struct
    {
        struct TArray<struct USkeletalMeshComponent*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* AVehicleFrontendActor::GetSkeletalMeshComponentBySocketName(struct FName FoundSocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "GetSkeletalMeshComponentBySocketName");
    struct
    {
        struct FName FoundSocketName;
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    Parms.FoundSocketName = (struct FName)FoundSocketName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* AVehicleFrontendActor::GetSkeletalMeshComponentBySocketGUID(uint64_t FoundSocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "GetSkeletalMeshComponentBySocketGUID");
    struct
    {
        uint64_t FoundSocketGUID;
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    Parms.FoundSocketGUID = (uint64_t)FoundSocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* AVehicleFrontendActor::GetRootSkeletalMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "GetRootSkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AVehicleFrontendActor::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendActor", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UVehicleFrontendContext::* ----
void UVehicleFrontendContext::SetSkin(uint64_t InSkinId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "SetSkin");
    struct
    {
        uint64_t InSkinId;
    } Parms{};
    Parms.InSkinId = (uint64_t)InSkinId;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UVehicleFrontendContext::RemoveNode(uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "RemoveNode");
    struct
    {
        uint64_t SocketGUID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SocketGUID = (uint64_t)SocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleFrontendContext::IsEmptyNode(const struct FVehicleFrontendContextNode& Node)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "IsEmptyNode");
    struct
    {
        struct FVehicleFrontendContextNode Node;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Node = (struct FVehicleFrontendContextNode)Node;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleFrontendContext::IsContainedNode(uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "IsContainedNode");
    struct
    {
        uint64_t SocketGUID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SocketGUID = (uint64_t)SocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UVehicleFrontendContext::GetSkinId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetSkinId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UVehicleFrontendContext::GetSkinAppearanceIDByDownload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetSkinAppearanceIDByDownload");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UVehicleFrontendContext::GetSkinAppearanceID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetSkinAppearanceID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UVehicleFrontendContext::GetRootSocketID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContext", "GetRootSocketID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleFrontendContextNode UVehicleFrontendContext::GetRootNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetRootNode");
    struct
    {
        struct FVehicleFrontendContextNode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UVehicleFrontendContext::GetRootItemID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetRootItemID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UVehicleFrontendContext::GetRootItemGUID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetRootItemGUID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVehicleFrontendContextNode> UVehicleFrontendContext::GetNodes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetNodes");
    struct
    {
        struct TArray<struct FVehicleFrontendContextNode> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleFrontendContextNode UVehicleFrontendContext::GetNode(uint64_t InSocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "GetNode");
    struct
    {
        uint64_t InSocketGUID;
        struct FVehicleFrontendContextNode ReturnValue;
    } Parms{};
    Parms.InSocketGUID = (uint64_t)InSocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleFrontendContext::AddNode(uint64_t ItemID, uint64_t ItemGUID, uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendContext", "AddNode");
    struct
    {
        uint64_t ItemID;
        uint64_t ItemGUID;
        uint64_t SocketGUID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemGUID = (uint64_t)ItemGUID;
    Parms.SocketGUID = (uint64_t)SocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVehicleFrontendContextHelper::* ----
struct FVehicleFrontendContextUpdateResult UVehicleFrontendContextHelper::Remove(struct UVehicleFrontendContext* InContext, uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "Remove");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        uint64_t SocketGUID;
        struct FVehicleFrontendContextUpdateResult ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    Parms.SocketGUID = (uint64_t)SocketGUID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVehicleFrontendContextHelper::ReadTemplate(struct UVehicleFrontendContext* InContext, int64_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "ReadTemplate");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        int64_t ID;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    Parms.ID = (int64_t)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FName UVehicleFrontendContextHelper::GeVehicleSkinModuleName(struct UVehicleFrontendContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "GeVehicleSkinModuleName");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        struct FName ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UVehicleFrontendContextHelper::GeVehicleModuleName(struct UVehicleFrontendContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "GeVehicleModuleName");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        struct FName ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVehicleFrontendContextHelper::GetVehicleSkinModuleState(struct UVehicleFrontendContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "GetVehicleSkinModuleState");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        int32_t ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVehicleFrontendContextHelper::GetVehicleModuleState(struct UVehicleFrontendContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "GetVehicleModuleState");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        int32_t ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVehicleFrontendContextHelper::CheckContext(struct UVehicleFrontendContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "CheckContext");
    struct
    {
        struct UVehicleFrontendContext* InContext;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVehicleFrontendContextUpdateResult UVehicleFrontendContextHelper::AutoAdd(struct UVehicleFrontendContext* InContext, int64_t ItemID, int64_t ItemGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "AutoAdd");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        int64_t ItemID;
        int64_t ItemGUID;
        struct FVehicleFrontendContextUpdateResult ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    Parms.ItemID = (int64_t)ItemID;
    Parms.ItemGUID = (int64_t)ItemGUID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleFrontendContextUpdateResult UVehicleFrontendContextHelper::Add(struct UVehicleFrontendContext* InContext, int64_t ItemID, int64_t ItemGUID, uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendContextHelper", "Add");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        int64_t ItemID;
        int64_t ItemGUID;
        uint64_t SocketGUID;
        struct FVehicleFrontendContextUpdateResult ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    Parms.ItemID = (int64_t)ItemID;
    Parms.ItemGUID = (int64_t)ItemGUID;
    Parms.SocketGUID = (uint64_t)SocketGUID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVehicleFrontendLoadProcessor::* ----
void UVehicleFrontendLoadProcessor::Setup(uint64_t InID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadProcessor", "Setup");
    struct
    {
        uint64_t InID;
    } Parms{};
    Parms.InID = (uint64_t)InID;
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendLoadProcessor::Process(struct FVehicleFrontendLoadContext& Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadProcessor", "Process");
    struct
    {
        struct FVehicleFrontendLoadContext Context;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UVehicleFrontendLoadProcessor::PreProcess(struct FVehicleFrontendLoadContext& Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadProcessor", "PreProcess");
    struct
    {
        struct FVehicleFrontendLoadContext Context;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UVehicleFrontendLoadProcessor::Clean()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadProcessor", "Clean");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendLoadProcessor::Cancel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadProcessor", "Cancel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UVehicleFrontendLoadMaterialProcessor::* ----
void UVehicleFrontendLoadMaterialProcessor::SetMaterialBaseParam(struct UMaterialInterface* OriginMaterial, struct UMaterialInstanceDynamic* DynamicMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendLoadMaterialProcessor", "SetMaterialBaseParam");
    struct
    {
        struct UMaterialInterface* OriginMaterial;
        struct UMaterialInstanceDynamic* DynamicMaterial;
    } Parms{};
    Parms.OriginMaterial = (struct UMaterialInterface*)OriginMaterial;
    Parms.DynamicMaterial = (struct UMaterialInstanceDynamic*)DynamicMaterial;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UVehicleFrontendLoadResourcesProcessor::* ----
void UVehicleFrontendLoadResourcesProcessor::OnLoadCallback(struct FVehicleFrontendLoadContext Context, struct FVehicleFrontendResourcesPak Pak)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadResourcesProcessor", "OnLoadCallback");
    struct
    {
        struct FVehicleFrontendLoadContext Context;
        struct FVehicleFrontendResourcesPak Pak;
    } Parms{};
    Parms.Context = (struct FVehicleFrontendLoadContext)Context;
    Parms.Pak = (struct FVehicleFrontendResourcesPak)Pak;
    this->ProcessEvent(Func, &Parms);
}

// ---- UVehicleFrontendLoadServices::* ----
void UVehicleFrontendLoadServices::Setup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadServices", "Setup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendLoadServices::OnProcessorCallback(uint64_t InID, struct FVehicleFrontendLoadContext& Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadServices", "OnProcessorCallback");
    struct
    {
        uint64_t InID;
        struct FVehicleFrontendLoadContext Context;
    } Parms{};
    Parms.InID = (uint64_t)InID;
    this->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UVehicleFrontendLoadServices::Clean()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendLoadServices", "Clean");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UVehicleFrontendSubsystem::* ----
void UVehicleFrontendSubsystem::SetSpwanRootState(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "SetSpwanRootState");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::SetParentRootByActorId(uint64_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "SetParentRootByActorId");
    struct
    {
        uint64_t ID;
    } Parms{};
    Parms.ID = (uint64_t)ID;
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::SetParentRoot(struct AActor* root)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "SetParentRoot");
    struct
    {
        struct AActor* root;
    } Parms{};
    Parms.root = (struct AActor*)root;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UVehicleFrontendSubsystem::ProcessPrepare()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "ProcessPrepare");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVehicleFrontendSubsystem::ProcessDisposeByActorID(uint64_t ActorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "ProcessDisposeByActorID");
    struct
    {
        uint64_t ActorID;
    } Parms{};
    Parms.ActorID = (uint64_t)ActorID;
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::ProcessDispose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "ProcessDispose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AVehicleFrontendActor* UVehicleFrontendSubsystem::PrepareLoadVehicle(uint64_t ID, uint64_t VehicleItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "PrepareLoadVehicle");
    struct
    {
        uint64_t ID;
        uint64_t VehicleItemID;
        struct AVehicleFrontendActor* ReturnValue;
    } Parms{};
    Parms.ID = (uint64_t)ID;
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVehicleFrontendSubsystem::OnProcessLoadVehicleCallback(uint64_t ID, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "OnProcessLoadVehicleCallback");
    struct
    {
        uint64_t ID;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (uint64_t)ID;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::OnProcessActorSetRenderCustomDepth(const struct TArray<struct FString>& Args, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendSubsystem", "OnProcessActorSetRenderCustomDepth");
    struct
    {
        struct TArray<struct FString> Args;
        struct UWorld* World;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UVehicleFrontendSubsystem::LoadVehicleFromSkinID(uint64_t SkinId, uint64_t ActorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "LoadVehicleFromSkinID");
    struct
    {
        uint64_t SkinId;
        uint64_t ActorID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SkinId = (uint64_t)SkinId;
    Parms.ActorID = (uint64_t)ActorID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleFrontendSubsystem::LoadVehicle(struct UVehicleFrontendContext* InContext, uint64_t ActorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "LoadVehicle");
    struct
    {
        struct UVehicleFrontendContext* InContext;
        uint64_t ActorID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InContext = (struct UVehicleFrontendContext*)InContext;
    Parms.ActorID = (uint64_t)ActorID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleFrontendSubsystem::LoadStandardVehicle(uint64_t VehicleItemID, uint64_t ActorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "LoadStandardVehicle");
    struct
    {
        uint64_t VehicleItemID;
        uint64_t ActorID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    Parms.ActorID = (uint64_t)ActorID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleFrontendSubsystem::GetVehicleTransform(uint64_t ID, uint64_t VehicleItemID, struct FTransform& Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "GetVehicleTransform");
    struct
    {
        uint64_t ID;
        uint64_t VehicleItemID;
        struct FTransform Transform;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ID = (uint64_t)ID;
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    this->ProcessEvent(Func, &Parms);
    Transform = Parms.Transform;
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UVehicleFrontendSubsystem::GetOnLoadVehicleCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "GetOnLoadVehicleCallback");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AVehicleFrontendActor* UVehicleFrontendSubsystem::GetActor(uint64_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "GetActor");
    struct
    {
        uint64_t ID;
        struct AVehicleFrontendActor* ReturnValue;
    } Parms{};
    Parms.ID = (uint64_t)ID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UVehicleFrontendSubsystem* UVehicleFrontendSubsystem::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendSubsystem", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UVehicleFrontendSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleFrontendSubsystem::FixupVehicleTransform(struct AVehicleFrontendActor* VehicleFrontendActor, uint64_t ID, uint64_t VehicleItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "FixupVehicleTransform");
    struct
    {
        struct AVehicleFrontendActor* VehicleFrontendActor;
        uint64_t ID;
        uint64_t VehicleItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VehicleFrontendActor = (struct AVehicleFrontendActor*)VehicleFrontendActor;
    Parms.ID = (uint64_t)ID;
    Parms.VehicleItemID = (uint64_t)VehicleItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UVehicleFrontendSubsystem::DisposeFrontendActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleFrontendSubsystem", "DisposeFrontendActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::DebugUpdate(const struct TArray<struct FString>& Args, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendSubsystem", "DebugUpdate");
    struct
    {
        struct TArray<struct FString> Args;
        struct UWorld* World;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::DebugUnload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendSubsystem", "DebugUnload");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::DebugLoadTemplateFromSkinID(const struct TArray<struct FString>& Args, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendSubsystem", "DebugLoadTemplateFromSkinID");
    struct
    {
        struct TArray<struct FString> Args;
        struct UWorld* World;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UVehicleFrontendSubsystem::DebugLoadTemplate(const struct TArray<struct FString>& Args, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleFrontendSubsystem", "DebugLoadTemplate");
    struct
    {
        struct TArray<struct FString> Args;
        struct UWorld* World;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UVehicleMixedGroupDataTableManager::* ----
uint8_t UVehicleMixedGroupDataTableManager::IsMixedGroupEnabled(int32_t InMapID, int32_t InLayoutId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleMixedGroupDataTableManager", "IsMixedGroupEnabled");
    struct
    {
        int32_t InMapID;
        int32_t InLayoutId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    Parms.InLayoutId = (int32_t)InLayoutId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVehicleMixedGroupDataTableManager::GetVehicleGroupID(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, int32_t InVehicleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleMixedGroupDataTableManager", "GetVehicleGroupID");
    struct
    {
        int32_t InMapID;
        int32_t InLayoutId;
        int32_t InSectorID;
        int32_t InCampId;
        int32_t InHubIndex;
        int32_t InVehicleID;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    Parms.InLayoutId = (int32_t)InLayoutId;
    Parms.InSectorID = (int32_t)InSectorID;
    Parms.InCampId = (int32_t)InCampId;
    Parms.InHubIndex = (int32_t)InHubIndex;
    Parms.InVehicleID = (int32_t)InVehicleID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVehicleMixedGroupDataTableManager::GetVehicleExtraScoreCost(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, int32_t InVehicleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleMixedGroupDataTableManager", "GetVehicleExtraScoreCost");
    struct
    {
        int32_t InMapID;
        int32_t InLayoutId;
        int32_t InSectorID;
        int32_t InCampId;
        int32_t InHubIndex;
        int32_t InVehicleID;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    Parms.InLayoutId = (int32_t)InLayoutId;
    Parms.InSectorID = (int32_t)InSectorID;
    Parms.InCampId = (int32_t)InCampId;
    Parms.InHubIndex = (int32_t)InHubIndex;
    Parms.InVehicleID = (int32_t)InVehicleID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UVehicleMixedGroupDataTableManager::GetMixedGroupConfig(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, struct TArray<struct FVehicleMixedGroupConfig>& OutGroups, int32_t& OutMaxGroupCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleMixedGroupDataTableManager", "GetMixedGroupConfig");
    struct
    {
        int32_t InMapID;
        int32_t InLayoutId;
        int32_t InSectorID;
        int32_t InCampId;
        int32_t InHubIndex;
        struct TArray<struct FVehicleMixedGroupConfig> OutGroups;
        int32_t OutMaxGroupCount;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    Parms.InLayoutId = (int32_t)InLayoutId;
    Parms.InSectorID = (int32_t)InSectorID;
    Parms.InCampId = (int32_t)InCampId;
    Parms.InHubIndex = (int32_t)InHubIndex;
    this->ProcessEvent(Func, &Parms);
    OutGroups = Parms.OutGroups;
    OutMaxGroupCount = Parms.OutMaxGroupCount;
    return Parms.ReturnValue;
}

int32_t UVehicleMixedGroupDataTableManager::GetGroupVehicleLimit(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, int32_t InGroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleMixedGroupDataTableManager", "GetGroupVehicleLimit");
    struct
    {
        int32_t InMapID;
        int32_t InLayoutId;
        int32_t InSectorID;
        int32_t InCampId;
        int32_t InHubIndex;
        int32_t InGroupID;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    Parms.InLayoutId = (int32_t)InLayoutId;
    Parms.InSectorID = (int32_t)InSectorID;
    Parms.InCampId = (int32_t)InCampId;
    Parms.InHubIndex = (int32_t)InHubIndex;
    Parms.InGroupID = (int32_t)InGroupID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVehicleSpawnerDataTableManager::* ----
void UVehicleSpawnerDataTableManager::GetBattleFieldSpawnerDataRow(int32_t InMapID, struct FBattleFieldSpawnerDataRow& OutBattleFieldSpawnerDataRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawnerDataTableManager", "GetBattleFieldSpawnerDataRow");
    struct
    {
        int32_t InMapID;
        struct FBattleFieldSpawnerDataRow OutBattleFieldSpawnerDataRow;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    this->ProcessEvent(Func, &Parms);
    OutBattleFieldSpawnerDataRow = Parms.OutBattleFieldSpawnerDataRow;
}

// ---- UVehicleSpawnManager::* ----
void UVehicleSpawnManager::ResetSpawned()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawnManager", "ResetSpawned");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct AVehicleSpawner*> UVehicleSpawnManager::GetVehicleSpawners(struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawnManager", "GetVehicleSpawners");
    struct
    {
        struct FName Tag;
        struct TArray<struct AVehicleSpawner*> ReturnValue;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ADFMVehicleBase*> UVehicleSpawnManager::GetSpawnedVehicles(struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawnManager", "GetSpawnedVehicles");
    struct
    {
        struct FName Tag;
        struct TArray<struct ADFMVehicleBase*> ReturnValue;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UVehicleSpawnManager* UVehicleSpawnManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleSpawnManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UVehicleSpawnManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AVehicleSpawner::* ----
struct ADFMVehicleBase* AVehicleSpawner::SpawnAndRegister(const struct FTransform& Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawner", "SpawnAndRegister");
    struct
    {
        struct FTransform Transform;
        struct ADFMVehicleBase* ReturnValue;
    } Parms{};
    Parms.Transform = (struct FTransform)Transform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AVehicleSpawner::PreviewVehicleMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawner", "PreviewVehicleMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVehicleSpawner::OnVehicleDead(struct AActor* CurVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawner", "OnVehicleDead");
    struct
    {
        struct AActor* CurVehicle;
    } Parms{};
    Parms.CurVehicle = (struct AActor*)CurVehicle;
    this->ProcessEvent(Func, &Parms);
}

void AVehicleSpawner::OnSpawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawner", "OnSpawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVehicleSpawner::LoadConfig(const struct FVehicleSpawnerConfig& Config)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleSpawner", "LoadConfig");
    struct
    {
        struct FVehicleSpawnerConfig Config;
    } Parms{};
    Parms.Config = (struct FVehicleSpawnerConfig)Config;
    this->ProcessEvent(Func, &Parms);
}

// ---- AVehicleAutoSpawner::* ----
struct ADFMVehicleBase* AVehicleAutoSpawner::SpawnAndRegister(const struct FTransform& Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAutoSpawner", "SpawnAndRegister");
    struct
    {
        struct FTransform Transform;
        struct ADFMVehicleBase* ReturnValue;
    } Parms{};
    Parms.Transform = (struct FTransform)Transform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AVehicleAutoSpawner::PreviewVehicleMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAutoSpawner", "PreviewVehicleMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVehicleAutoSpawner::OnVehicleDead(struct AActor* CurVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAutoSpawner", "OnVehicleDead");
    struct
    {
        struct AActor* CurVehicle;
    } Parms{};
    Parms.CurVehicle = (struct AActor*)CurVehicle;
    this->ProcessEvent(Func, &Parms);
}

void AVehicleAutoSpawner::OnSpawnerActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAutoSpawner", "OnSpawnerActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVehicleAutoSpawner::OnSpawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAutoSpawner", "OnSpawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVehicleAutoSpawner::LoadConfig(const struct FVehicleSpawnerConfig& Config)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAutoSpawner", "LoadConfig");
    struct
    {
        struct FVehicleSpawnerConfig Config;
    } Parms{};
    Parms.Config = (struct FVehicleSpawnerConfig)Config;
    this->ProcessEvent(Func, &Parms);
}

// ---- UVehicleUtilWorldSubsystem::* ----
void UVehicleUtilWorldSubsystem::RegisterSeaLevelActor(struct AActor* InSeaLevelActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleUtilWorldSubsystem", "RegisterSeaLevelActor");
    struct
    {
        struct AActor* InSeaLevelActor;
    } Parms{};
    Parms.InSeaLevelActor = (struct AActor*)InSeaLevelActor;
    this->ProcessEvent(Func, &Parms);
}

struct UVehicleUtilWorldSubsystem* UVehicleUtilWorldSubsystem::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleUtilWorldSubsystem", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UVehicleUtilWorldSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVehicleWindFieldEffectManager::* ----
void UVehicleWindFieldEffectManager::UnregisterWindField(struct AGPVehicleBase* InVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleWindFieldEffectManager", "UnregisterWindField");
    struct
    {
        struct AGPVehicleBase* InVehicle;
    } Parms{};
    Parms.InVehicle = (struct AGPVehicleBase*)InVehicle;
    this->ProcessEvent(Func, &Parms);
}

void UVehicleWindFieldEffectManager::RegisterWindField(struct AGPVehicleBase* InVehicle, struct UObject* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleWindFieldEffectManager", "RegisterWindField");
    struct
    {
        struct AGPVehicleBase* InVehicle;
        struct UObject* InClass;
    } Parms{};
    Parms.InVehicle = (struct AGPVehicleBase*)InVehicle;
    Parms.InClass = (struct UObject*)InClass;
    this->ProcessEvent(Func, &Parms);
}

struct UVehicleWindFieldEffectManager* UVehicleWindFieldEffectManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VehicleWindFieldEffectManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UVehicleWindFieldEffectManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AWeaponBulletDynamicallyTrackingTarget::* ----
void AWeaponBulletDynamicallyTrackingTarget::SetTrackingTargetLocation(struct FVector InTrackingTargetLocation, struct AActor* HitTargetActor, struct FVector InClientFiredLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletDynamicallyTrackingTarget", "SetTrackingTargetLocation");
    struct
    {
        struct FVector InTrackingTargetLocation;
        struct AActor* HitTargetActor;
        struct FVector InClientFiredLocation;
    } Parms{};
    Parms.InTrackingTargetLocation = (struct FVector)InTrackingTargetLocation;
    Parms.HitTargetActor = (struct AActor*)HitTargetActor;
    Parms.InClientFiredLocation = (struct FVector)InClientFiredLocation;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletDynamicallyTrackingTarget::OnRep_TrackingTargetLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletDynamicallyTrackingTarget", "OnRep_TrackingTargetLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AWeaponBulletWireGuided::* ----
void AWeaponBulletWireGuided::OnScopeHUDUpdate(struct URangeScopeLensProxy* MaterialProxy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletWireGuided", "OnScopeHUDUpdate");
    struct
    {
        struct URangeScopeLensProxy* MaterialProxy;
    } Parms{};
    Parms.MaterialProxy = (struct URangeScopeLensProxy*)MaterialProxy;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
