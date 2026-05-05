#include "GeometryCollectionEngine.hpp"
#include "ChaosSolverEngine.hpp"
#include "Engine.hpp"
#include "FieldSystemEngine.hpp"
#include "GeometryCollectionSimulationCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UChaosDestructionListener
void UChaosDestructionListener::SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SortTrailingEvents");
    struct
    {
        struct TArray<struct FChaosTrailingEventData> TrailingEvents;
        enum EChaosTrailingSortMethod SortMethod;
    } Parms{};
    Parms.SortMethod = (enum EChaosTrailingSortMethod)SortMethod;
    this->ProcessEvent(Func, &Parms);
    TrailingEvents = Parms.TrailingEvents;
}

void UChaosDestructionListener::SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SortCollisionEvents");
    struct
    {
        struct TArray<struct FChaosCollisionEventData> CollisionEvents;
        enum EChaosCollisionSortMethod SortMethod;
    } Parms{};
    Parms.SortMethod = (enum EChaosCollisionSortMethod)SortMethod;
    this->ProcessEvent(Func, &Parms);
    CollisionEvents = Parms.CollisionEvents;
}

void UChaosDestructionListener::SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SortBreakingEvents");
    struct
    {
        struct TArray<struct FChaosBreakingEventData> BreakingEvents;
        enum EChaosBreakingSortMethod SortMethod;
    } Parms{};
    Parms.SortMethod = (enum EChaosBreakingSortMethod)SortMethod;
    this->ProcessEvent(Func, &Parms);
    BreakingEvents = Parms.BreakingEvents;
}

void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SetTrailingEventRequestSettings");
    struct
    {
        struct FChaosTrailingEventRequestSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FChaosTrailingEventRequestSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::SetTrailingEventEnabled(uint8_t bIsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SetTrailingEventEnabled");
    struct
    {
        uint8_t bIsEnabled;
    } Parms{};
    Parms.bIsEnabled = (uint8_t)bIsEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SetCollisionEventRequestSettings");
    struct
    {
        struct FChaosCollisionEventRequestSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FChaosCollisionEventRequestSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::SetCollisionEventEnabled(uint8_t bIsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SetCollisionEventEnabled");
    struct
    {
        uint8_t bIsEnabled;
    } Parms{};
    Parms.bIsEnabled = (uint8_t)bIsEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SetBreakingEventRequestSettings");
    struct
    {
        struct FChaosBreakingEventRequestSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FChaosBreakingEventRequestSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::SetBreakingEventEnabled(uint8_t bIsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "SetBreakingEventEnabled");
    struct
    {
        uint8_t bIsEnabled;
    } Parms{};
    Parms.bIsEnabled = (uint8_t)bIsEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "RemoveGeometryCollectionActor");
    struct
    {
        struct AGeometryCollectionActor* GeometryCollectionActor;
    } Parms{};
    Parms.GeometryCollectionActor = (struct AGeometryCollectionActor*)GeometryCollectionActor;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "RemoveChaosSolverActor");
    struct
    {
        struct AChaosSolverActor* ChaosSolverActor;
    } Parms{};
    Parms.ChaosSolverActor = (struct AChaosSolverActor*)ChaosSolverActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChaosDestructionListener::IsEventListening()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "IsEventListening");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChaosDestructionListener::AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "AddGeometryCollectionActor");
    struct
    {
        struct AGeometryCollectionActor* GeometryCollectionActor;
    } Parms{};
    Parms.GeometryCollectionActor = (struct AGeometryCollectionActor*)GeometryCollectionActor;
    this->ProcessEvent(Func, &Parms);
}

void UChaosDestructionListener::AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosDestructionListener", "AddChaosSolverActor");
    struct
    {
        struct AChaosSolverActor* ChaosSolverActor;
    } Parms{};
    Parms.ChaosSolverActor = (struct AChaosSolverActor*)ChaosSolverActor;
    this->ProcessEvent(Func, &Parms);
}

// AGeometryCollectionActor
uint8_t AGeometryCollectionActor::RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCollectionActor", "RaycastSingle");
    struct
    {
        struct FVector Start;
        struct FVector End;
        struct FHitResult OutHit;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

// UGeometryCollectionComponent
void UGeometryCollectionComponent::SetNotifyBreaks(uint8_t bNewNotifyBreaks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCollectionComponent", "SetNotifyBreaks");
    struct
    {
        uint8_t bNewNotifyBreaks;
    } Parms{};
    Parms.bNewNotifyBreaks = (uint8_t)bNewNotifyBreaks;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCollectionComponent", "ReceivePhysicsCollision");
    struct
    {
        struct FChaosPhysicsCollisionInfo CollisionInfo;
    } Parms{};
    Parms.CollisionInfo = (struct FChaosPhysicsCollisionInfo)CollisionInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");
    struct
    {
        struct UGeometryCollectionComponent* FracturedComponent;
    } Parms{};
    Parms.FracturedComponent = (struct UGeometryCollectionComponent*)FracturedComponent;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");
    struct
    {
        struct UGeometryCollectionComponent* FracturedComponent;
    } Parms{};
    Parms.FracturedComponent = (struct UGeometryCollectionComponent*)FracturedComponent;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCollectionComponent::ApplyPhysicsField(uint8_t Enabled, EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCollectionComponent", "ApplyPhysicsField");
    struct
    {
        uint8_t Enabled;
        enum EGeometryCollectionPhysicsTypeEnum Target;
        struct UFieldSystemMetaData* MetaData;
        struct UFieldNodeBase* Field;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Target = (enum EGeometryCollectionPhysicsTypeEnum)Target;
    Parms.MetaData = (struct UFieldSystemMetaData*)MetaData;
    Parms.Field = (struct UFieldNodeBase*)Field;
    this->ProcessEvent(Func, &Parms);
}

void UGeometryCollectionComponent::ApplyKinematicField(float radius, struct FVector Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeometryCollectionComponent", "ApplyKinematicField");
    struct
    {
        float radius;
        struct FVector Position;
    } Parms{};
    Parms.radius = (float)radius;
    Parms.Position = (struct FVector)Position;
    this->ProcessEvent(Func, &Parms);
}

// USkeletalMeshSimulationComponent
void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkeletalMeshSimulationComponent", "ReceivePhysicsCollision");
    struct
    {
        struct FChaosPhysicsCollisionInfo CollisionInfo;
    } Parms{};
    Parms.CollisionInfo = (struct FChaosPhysicsCollisionInfo)CollisionInfo;
    this->ProcessEvent(Func, &Parms);
}

// UStaticMeshSimulationComponent
void UStaticMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StaticMeshSimulationComponent", "ReceivePhysicsCollision");
    struct
    {
        struct FChaosPhysicsCollisionInfo CollisionInfo;
    } Parms{};
    Parms.CollisionInfo = (struct FChaosPhysicsCollisionInfo)CollisionInfo;
    this->ProcessEvent(Func, &Parms);
}

void UStaticMeshSimulationComponent::ForceRecreatePhysicsState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StaticMeshSimulationComponent", "ForceRecreatePhysicsState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
