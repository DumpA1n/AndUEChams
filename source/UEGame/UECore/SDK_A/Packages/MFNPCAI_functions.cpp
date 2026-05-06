#include "MFNPCAI.hpp"
#include "AIActionPointGeneratorRuntime.hpp"
#include "AIModule.hpp"
#include "AkAudio.hpp"
#include "Engine.hpp"
#include "NavigationSystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAISceneEventMessage
bool UAISceneEventMessage::IsExpired(float CurrentTimeSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventMessage", "IsExpired");
    struct
    {
        float CurrentTimeSec;
        bool ReturnValue;
    } Parms{};
    Parms.CurrentTimeSec = (float)CurrentTimeSec;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAISceneEventsTriggerManager
int32_t UAISceneEventsTriggerManager::TriggerSceneEvent(struct UAISceneEventMessage* SceneEvtMessage, const struct FVector& TriggerLocation, float CoverInRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "TriggerSceneEvent");
    struct
    {
        struct UAISceneEventMessage* SceneEvtMessage;
        struct FVector TriggerLocation;
        float CoverInRange;
        int32_t ReturnValue;
    } Parms{};
    Parms.SceneEvtMessage = (struct UAISceneEventMessage*)SceneEvtMessage;
    Parms.TriggerLocation = (struct FVector)TriggerLocation;
    Parms.CoverInRange = (float)CoverInRange;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAISceneEventsTriggerManager::RemoveSceneEventByUniqueId(int32_t EvtUniqueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "RemoveSceneEventByUniqueId");
    struct
    {
        int32_t EvtUniqueId;
    } Parms{};
    Parms.EvtUniqueId = (int32_t)EvtUniqueId;
    this->ProcessEvent(Func, &Parms);
}

void UAISceneEventsTriggerManager::RemoveSceneEvent(struct UAISceneEventMessage* SceneEvtMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "RemoveSceneEvent");
    struct
    {
        struct UAISceneEventMessage* SceneEvtMessage;
    } Parms{};
    Parms.SceneEvtMessage = (struct UAISceneEventMessage*)SceneEvtMessage;
    this->ProcessEvent(Func, &Parms);
}

void UAISceneEventsTriggerManager::OnDSTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "OnDSTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UAISceneEventMessage* UAISceneEventsTriggerManager::GetSceneEventByUniqueId(int32_t EvtUniqueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "GetSceneEventByUniqueId");
    struct
    {
        int32_t EvtUniqueId;
        struct UAISceneEventMessage* ReturnValue;
    } Parms{};
    Parms.EvtUniqueId = (int32_t)EvtUniqueId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAISceneEventsTriggerManager::FindNearSceneEvents(struct TArray<struct UAISceneEventMessage*> ActivedEvents, const struct FVector& CenterPos, float Radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "FindNearSceneEvents");
    struct
    {
        struct TArray<struct UAISceneEventMessage*> ActivedEvents;
        struct FVector CenterPos;
        float Radius;
        bool ReturnValue;
    } Parms{};
    Parms.ActivedEvents = (struct TArray<struct UAISceneEventMessage*>)ActivedEvents;
    Parms.CenterPos = (struct FVector)CenterPos;
    Parms.Radius = (float)Radius;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAISceneEventsTriggerManager::FilterExpiredSceneEvents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "FilterExpiredSceneEvents");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAISceneEventsTriggerManager::ClearExpiredSceneEventOnAI(int32_t EvtUniqueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISceneEventsTriggerManager", "ClearExpiredSceneEventOnAI");
    struct
    {
        int32_t EvtUniqueId;
    } Parms{};
    Parms.EvtUniqueId = (int32_t)EvtUniqueId;
    this->ProcessEvent(Func, &Parms);
}

// UAISGDoorManager
void UAISGDoorManager::WantToWaitUsed(struct ACharacter* AIPawn, struct AActor* SGDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "WantToWaitUsed");
    struct
    {
        struct ACharacter* AIPawn;
        struct AActor* SGDoor;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.SGDoor = (struct AActor*)SGDoor;
    this->ProcessEvent(Func, &Parms);
}

bool UAISGDoorManager::WantToUsedDoor(struct ACharacter* AIPawn, struct AActor* SGDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "WantToUsedDoor");
    struct
    {
        struct ACharacter* AIPawn;
        struct AActor* SGDoor;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.SGDoor = (struct AActor*)SGDoor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAISGDoorManager::ReleaseUsedDoor(struct ACharacter* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "ReleaseUsedDoor");
    struct
    {
        struct ACharacter* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    this->ProcessEvent(Func, &Parms);
}

void UAISGDoorManager::InitDoorsInWorld(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "InitDoorsInWorld");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    this->ProcessEvent(Func, &Parms);
}

struct AActor* UAISGDoorManager::GetPawnUsedDoor(struct AActor* SGDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "GetPawnUsedDoor");
    struct
    {
        struct AActor* SGDoor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.SGDoor = (struct AActor*)SGDoor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UAISGDoorManager::GetDoor(struct UObject* WorldContext, const struct FVector& DoorPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "GetDoor");
    struct
    {
        struct UObject* WorldContext;
        struct FVector DoorPoint;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.DoorPoint = (struct FVector)DoorPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAISGDoorManager::DoorIsBusy(struct AActor* SGDoor, struct ACharacter* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "DoorIsBusy");
    struct
    {
        struct AActor* SGDoor;
        struct ACharacter* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.SGDoor = (struct AActor*)SGDoor;
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAISGDoorManager::AutoRemoveInValidUsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISGDoorManager", "AutoRemoveInValidUsed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UBehaviorTreeTooler
struct AGameState* UBehaviorTreeTooler::GetGameState(struct UObject* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BehaviorTreeTooler", "GetGameState");
    struct
    {
        struct UObject* World;
        struct AGameState* ReturnValue;
    } Parms{};
    Parms.World = (struct UObject*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorld* UBehaviorTreeTooler::GetClientWorld(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BehaviorTreeTooler", "GetClientWorld");
    struct
    {
        struct UObject* WorldContext;
        struct UWorld* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIActorComponent
struct UNPCAIProfileBaseComponent* UNPCAIActorComponent::GetAIPropertyByClass(struct UNPCAIProfileBaseComponent* InPropertyClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIActorComponent", "GetAIPropertyByClass");
    struct
    {
        struct UNPCAIProfileBaseComponent* InPropertyClass;
        struct UNPCAIProfileBaseComponent* ReturnValue;
    } Parms{};
    Parms.InPropertyClass = (struct UNPCAIProfileBaseComponent*)InPropertyClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCAIAimingInterface
void INPCAIAimingInterface::UpdatePredestinedHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "UpdatePredestinedHit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::TriggerPressedDone(float WeaponRecoilParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "TriggerPressedDone");
    struct
    {
        float WeaponRecoilParam;
    } Parms{};
    Parms.WeaponRecoilParam = (float)WeaponRecoilParam;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::SetTargetEnemy(struct AActor* InEnemyPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "SetTargetEnemy");
    struct
    {
        struct AActor* InEnemyPawn;
    } Parms{};
    Parms.InEnemyPawn = (struct AActor*)InEnemyPawn;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::SetShootPartID(uint8_t InShootPartID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "SetShootPartID");
    struct
    {
        uint8_t InShootPartID;
    } Parms{};
    Parms.InShootPartID = (uint8_t)InShootPartID;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::SetNextAimingDelay(float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "SetNextAimingDelay");
    struct
    {
        float DelayTime;
    } Parms{};
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::SetAimingPoint(const struct FVector& InAimingPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "SetAimingPoint");
    struct
    {
        struct FVector InAimingPoint;
    } Parms{};
    Parms.InAimingPoint = (struct FVector)InAimingPoint;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::NodeUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "NodeUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::NextShotMiss()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "NextShotMiss");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::NextShotHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "NextShotHit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::LoseTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "LoseTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCAIAimingInterface::IsWaitingStartAiming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "IsWaitingStartAiming");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIAimingInterface::IsUsingPredestined()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "IsUsingPredestined");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIAimingInterface::IsReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "IsReady");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIAimingInterface::IsNextShotMiss()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "IsNextShotMiss");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIAimingInterface::IsNextShotHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "IsNextShotHit");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIAimingInterface::IsInPullBolt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "IsInPullBolt");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIAimingInterface::IsFacingTargetPoint(const struct FVector& TargetPoint, float AngleLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "IsFacingTargetPoint");
    struct
    {
        struct FVector TargetPoint;
        float AngleLimit;
        bool ReturnValue;
    } Parms{};
    Parms.TargetPoint = (struct FVector)TargetPoint;
    Parms.AngleLimit = (float)AngleLimit;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIAimingInterface::HasAmmo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "HasAmmo");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* INPCAIAimingInterface::GetTargetEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetTargetEnemy");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t INPCAIAimingInterface::GetShootPartID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetShootPartID");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAIAimingInterface::GetMaxShotCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetMaxShotCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIAimingInterface::GetLastDist2Target()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetLastDist2Target");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIAimingInterface::GetHit(int32_t DamageInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetHit");
    struct
    {
        int32_t DamageInfo;
    } Parms{};
    Parms.DamageInfo = (int32_t)DamageInfo;
    this->ProcessEvent(Func, &Parms);
}

struct FVector INPCAIAimingInterface::GetDimAimingPoint(float Scaler)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetDimAimingPoint");
    struct
    {
        float Scaler;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Scaler = (float)Scaler;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAIAimingInterface::GetCurrentShotCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetCurrentShotCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCAIAimingInterface::GetAimingPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetAimingPoint");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCAIAimingInterface::GetAimingOffset(float WeakenTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetAimingOffset");
    struct
    {
        float WeakenTime;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WeakenTime = (float)WeakenTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIAimingInterface::GetAimingLeftTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "GetAimingLeftTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIAimingInterface::ForceCompleteAim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "ForceCompleteAim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::ClearNextShotMiss()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "ClearNextShotMiss");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::ClearNextShotHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "ClearNextShotHit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAIAimingInterface::ClearNextShotFlags()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "ClearNextShotFlags");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float INPCAIAimingInterface::CalculateRequiredAimingTime(const struct FVector& AimingPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAimingInterface", "CalculateRequiredAimingTime");
    struct
    {
        struct FVector AimingPos;
        float ReturnValue;
    } Parms{};
    Parms.AimingPos = (struct FVector)AimingPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIAsyncTaskSystem
void UNPCAIAsyncTaskSystem::OnDSTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAsyncTaskSystem", "OnDSTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIAsyncTaskSystem::HasTask(struct AActor* AIPawn, const ENPCAIAsyncTaskType& InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAsyncTaskSystem", "HasTask");
    struct
    {
        struct AActor* AIPawn;
        enum ENPCAIAsyncTaskType InType;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InType = (enum ENPCAIAsyncTaskType)InType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAsyncTaskBase* UNPCAIAsyncTaskSystem::GetTask(struct AActor* AIPawn, const ENPCAIAsyncTaskType& InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAsyncTaskSystem", "GetTask");
    struct
    {
        struct AActor* AIPawn;
        enum ENPCAIAsyncTaskType InType;
        struct UNPCAIAsyncTaskBase* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InType = (enum ENPCAIAsyncTaskType)InType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIAttentionPoint
void UNPCAIAttentionPoint::UpdatePointData(float InNewCreateTime, struct FVector InNewPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "UpdatePointData");
    struct
    {
        float InNewCreateTime;
        struct FVector InNewPosition;
    } Parms{};
    Parms.InNewCreateTime = (float)InNewCreateTime;
    Parms.InNewPosition = (struct FVector)InNewPosition;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIAttentionPoint::SetIsCome(bool InIsCome)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "SetIsCome");
    struct
    {
        bool InIsCome;
    } Parms{};
    Parms.InIsCome = (bool)InIsCome;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIAttentionPoint::SetCreator(struct AActor* InCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "SetCreator");
    struct
    {
        struct AActor* InCreator;
    } Parms{};
    Parms.InCreator = (struct AActor*)InCreator;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIAttentionPoint::IsVehicleFatal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsVehicleFatal");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIAttentionPoint::IsThisPointClose(struct FVector InCheckLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsThisPointClose");
    struct
    {
        struct FVector InCheckLoc;
        bool ReturnValue;
    } Parms{};
    Parms.InCheckLoc = (struct FVector)InCheckLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIAttentionPoint::IsOld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsOld");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIAttentionPoint::IsGrenadeHolding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsGrenadeHolding");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIAttentionPoint::IsGrenadeHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsGrenadeHit");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIAttentionPoint::IsGrenadeComing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsGrenadeComing");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIAttentionPoint::IsFatal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsFatal");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIAttentionPoint::IsDanger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "IsDanger");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIAttentionPoint::GetPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIAttentionPoint", "GetPosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAIAttentionPoint::CreateNewAttentionPointWithCoverPointID(struct UObject* InHolder, int32_t InCoverPointID, struct FVector InBaseLoc, ENPCPlaceForCheckType InType, struct AActor* InCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIAttentionPoint", "CreateNewAttentionPointWithCoverPointID");
    struct
    {
        struct UObject* InHolder;
        int32_t InCoverPointID;
        struct FVector InBaseLoc;
        enum ENPCPlaceForCheckType InType;
        struct AActor* InCreator;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InHolder = (struct UObject*)InHolder;
    Parms.InCoverPointID = (int32_t)InCoverPointID;
    Parms.InBaseLoc = (struct FVector)InBaseLoc;
    Parms.InType = (enum ENPCPlaceForCheckType)InType;
    Parms.InCreator = (struct AActor*)InCreator;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAIAttentionPoint::CreateNewAttentionPoint(struct UObject* InHolder, struct FVector InLoc, ENPCPlaceForCheckType InType, struct AActor* InCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIAttentionPoint", "CreateNewAttentionPoint");
    struct
    {
        struct UObject* InHolder;
        struct FVector InLoc;
        enum ENPCPlaceForCheckType InType;
        struct AActor* InCreator;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InHolder = (struct UObject*)InHolder;
    Parms.InLoc = (struct FVector)InLoc;
    Parms.InType = (enum ENPCPlaceForCheckType)InType;
    Parms.InCreator = (struct AActor*)InCreator;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAICoverEnvQueryData
void UNPCAICoverEnvQueryData::SetupPathLength(const struct FVector& Location, float MaxPathLength, float MaxRatio, float CheckPointPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupPathLength");
    struct
    {
        struct FVector Location;
        float MaxPathLength;
        float MaxRatio;
        float CheckPointPathLength;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    Parms.MaxRatio = (float)MaxRatio;
    Parms.CheckPointPathLength = (float)CheckPointPathLength;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupIsSameSideToTarget(const struct FVector& Location, const struct FVector& Direction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupIsSameSideToTarget");
    struct
    {
        struct FVector Location;
        struct FVector Direction;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Direction = (struct FVector)Direction;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupIsSafe(float TreatAsSafeAfterSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupIsSafe");
    struct
    {
        float TreatAsSafeAfterSeconds;
    } Parms{};
    Parms.TreatAsSafeAfterSeconds = (float)TreatAsSafeAfterSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupIsIsNear(const struct FVector& Location, float Distance, bool bReversed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupIsIsNear");
    struct
    {
        struct FVector Location;
        float Distance;
        bool bReversed;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Distance = (float)Distance;
    Parms.bReversed = (bool)bReversed;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupIsInCone(const struct FVector& Location, const struct FVector& Direction, float Radius, float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupIsInCone");
    struct
    {
        struct FVector Location;
        struct FVector Direction;
        float Radius;
        float Angle;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Direction = (struct FVector)Direction;
    Parms.Radius = (float)Radius;
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupIsFree(float TreatAsFreeAfterSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupIsFree");
    struct
    {
        float TreatAsFreeAfterSeconds;
    } Parms{};
    Parms.TreatAsFreeAfterSeconds = (float)TreatAsFreeAfterSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupIsCloserRatio(const struct FVector& Location, float Ratio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupIsCloserRatio");
    struct
    {
        struct FVector Location;
        float Ratio;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Ratio = (float)Ratio;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupGenerator(const struct FVector& Location, float Radius, struct AVolume* BotZoneVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupGenerator");
    struct
    {
        struct FVector Location;
        float Radius;
        struct AVolume* BotZoneVolume;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Radius = (float)Radius;
    Parms.BotZoneVolume = (struct AVolume*)BotZoneVolume;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupDistanceToHotPoint(const struct TArray<struct FVector>& Locations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupDistanceToHotPoint");
    struct
    {
        struct TArray<struct FVector> Locations;
    } Parms{};
    Parms.Locations = (struct TArray<struct FVector>)Locations;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupDistanceToAllyCover(const struct FVector& Location, float MinDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupDistanceToAllyCover");
    struct
    {
        struct FVector Location;
        float MinDistance;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MinDistance = (float)MinDistance;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupDefenceRatio(float MinRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupDefenceRatio");
    struct
    {
        float MinRatio;
    } Parms{};
    Parms.MinRatio = (float)MinRatio;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupDefenceAngle(float MinAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupDefenceAngle");
    struct
    {
        float MinAngle;
    } Parms{};
    Parms.MinAngle = (float)MinAngle;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupCoverDist(const struct FVector& Location, float MaxDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupCoverDist");
    struct
    {
        struct FVector Location;
        float MaxDistance;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MaxDistance = (float)MaxDistance;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupCanContain(const struct FVector& Location, float HorizontalAngle, float TopAngle, float BottomAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupCanContain");
    struct
    {
        struct FVector Location;
        float HorizontalAngle;
        float TopAngle;
        float BottomAngle;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.HorizontalAngle = (float)HorizontalAngle;
    Parms.TopAngle = (float)TopAngle;
    Parms.BottomAngle = (float)BottomAngle;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAICoverEnvQueryData::SetupCanAttackTo(const struct FVector& Location, const struct TArray<struct AActor*>& IgnoredActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAICoverEnvQueryData", "SetupCanAttackTo");
    struct
    {
        struct FVector Location;
        struct TArray<struct AActor*> IgnoredActors;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.IgnoredActors = (struct TArray<struct AActor*>)IgnoredActors;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAICoverSystemStatics
bool UNPCAICoverSystemStatics::TestCoverPoints_IsSafe(const struct TArray<int32_t>& InPoints, float SecondsAfterLastSpotted, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoints_IsSafe");
    struct
    {
        struct TArray<int32_t> InPoints;
        float SecondsAfterLastSpotted;
        struct TArray<int32_t> PassPoints;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPoints = (struct TArray<int32_t>)InPoints;
    Parms.SecondsAfterLastSpotted = (float)SecondsAfterLastSpotted;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::TestCoverPoints_IsNear(const struct TArray<int32_t>& InPoints, const struct FVector& Location, float Distance, bool bReversed, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoints_IsNear");
    struct
    {
        struct TArray<int32_t> InPoints;
        struct FVector Location;
        float Distance;
        bool bReversed;
        struct TArray<int32_t> PassPoints;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPoints = (struct TArray<int32_t>)InPoints;
    Parms.Location = (struct FVector)Location;
    Parms.Distance = (float)Distance;
    Parms.bReversed = (bool)bReversed;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::TestCoverPoints_IsFree(const struct TArray<int32_t>& InPoints, struct AActor* InActor, float TreatAsFreeAfterSeconds, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoints_IsFree");
    struct
    {
        struct TArray<int32_t> InPoints;
        struct AActor* InActor;
        float TreatAsFreeAfterSeconds;
        struct TArray<int32_t> PassPoints;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPoints = (struct TArray<int32_t>)InPoints;
    Parms.InActor = (struct AActor*)InActor;
    Parms.TreatAsFreeAfterSeconds = (float)TreatAsFreeAfterSeconds;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::TestCoverPoints_HasNavPath(const struct TArray<int32_t>& InPoints, const struct FVector& StartLocation, float MaxPathLenght, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoints_HasNavPath");
    struct
    {
        struct TArray<int32_t> InPoints;
        struct FVector StartLocation;
        float MaxPathLenght;
        struct TArray<int32_t> PassPoints;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPoints = (struct TArray<int32_t>)InPoints;
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.MaxPathLenght = (float)MaxPathLenght;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::TestCoverPoints_CanProtectPose(const struct TArray<int32_t>& InPoints, ENPCPoseType PoseType, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoints_CanProtectPose");
    struct
    {
        struct TArray<int32_t> InPoints;
        enum ENPCPoseType PoseType;
        struct TArray<int32_t> PassPoints;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPoints = (struct TArray<int32_t>)InPoints;
    Parms.PoseType = (enum ENPCPoseType)PoseType;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::TestCoverPoints_CanContain(const struct TArray<int32_t>& InPoints, const struct FVector& Location, float HorizontalAngle, float TopAngle, float BottomAngle, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoints_CanContain");
    struct
    {
        struct TArray<int32_t> InPoints;
        struct FVector Location;
        float HorizontalAngle;
        float TopAngle;
        float BottomAngle;
        struct TArray<int32_t> PassPoints;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPoints = (struct TArray<int32_t>)InPoints;
    Parms.Location = (struct FVector)Location;
    Parms.HorizontalAngle = (float)HorizontalAngle;
    Parms.TopAngle = (float)TopAngle;
    Parms.BottomAngle = (float)BottomAngle;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::TestCoverPoints_CanAttackTo(const struct TArray<int32_t>& InPoints, const struct FVector& Location, const struct TArray<struct AActor*>& IgnoredActors, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoints_CanAttackTo");
    struct
    {
        struct TArray<int32_t> InPoints;
        struct FVector Location;
        struct TArray<struct AActor*> IgnoredActors;
        struct TArray<int32_t> PassPoints;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPoints = (struct TArray<int32_t>)InPoints;
    Parms.Location = (struct FVector)Location;
    Parms.IgnoredActors = (struct TArray<struct AActor*>)IgnoredActors;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::TestCoverPoint_IsSafe(int32_t InPointID, float SecondsAfterLastSpotted, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "TestCoverPoint_IsSafe");
    struct
    {
        int32_t InPointID;
        float SecondsAfterLastSpotted;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.InPointID = (int32_t)InPointID;
    Parms.SecondsAfterLastSpotted = (float)SecondsAfterLastSpotted;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::SetCoverPointSpotted(int32_t PointID, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "SetCoverPointSpotted");
    struct
    {
        int32_t PointID;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::SetCoverPointOwner(int32_t PointID, struct AActor* Actor, float Radius, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "SetCoverPointOwner");
    struct
    {
        int32_t PointID;
        struct AActor* Actor;
        float Radius;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.Actor = (struct AActor*)Actor;
    Parms.Radius = (float)Radius;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UEnvQueryInstanceBlueprintWrapper* UNPCAICoverSystemStatics::RunEQSQuery_FindBackUpCoverPointNearBy(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct AActor* Querier, const struct FVector& InEnemyPos, float InRadiusNoCheck, uint8_t RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "RunEQSQuery_FindBackUpCoverPointNearBy");
    struct
    {
        struct UObject* WorldContextObject;
        struct UEnvQuery* QueryTemplate;
        struct AActor* Querier;
        struct FVector InEnemyPos;
        float InRadiusNoCheck;
        uint8_t RunMode;
        struct UEnvQueryInstanceBlueprintWrapper* WrapperClass;
        struct UEnvQueryInstanceBlueprintWrapper* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QueryTemplate = (struct UEnvQuery*)QueryTemplate;
    Parms.Querier = (struct AActor*)Querier;
    Parms.InEnemyPos = (struct FVector)InEnemyPos;
    Parms.InRadiusNoCheck = (float)InRadiusNoCheck;
    Parms.RunMode = (uint8_t)RunMode;
    Parms.WrapperClass = (struct UEnvQueryInstanceBlueprintWrapper*)WrapperClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAICoverSystemStatics::RemoveCoverPointBeTaked(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "RemoveCoverPointBeTaked");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAICoverSystemStatics::GetQueryResultsAsCoverIDs(struct UEnvQueryInstanceBlueprintWrapper* QueryInstanceBPWrapper, struct TArray<int32_t>& PassPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "GetQueryResultsAsCoverIDs");
    struct
    {
        struct UEnvQueryInstanceBlueprintWrapper* QueryInstanceBPWrapper;
        struct TArray<int32_t> PassPoints;
        bool ReturnValue;
    } Parms{};
    Parms.QueryInstanceBPWrapper = (struct UEnvQueryInstanceBlueprintWrapper*)QueryInstanceBPWrapper;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PassPoints = Parms.PassPoints;
    return Parms.ReturnValue;
}

struct UCoverSystem* UNPCAICoverSystemStatics::GetCoverSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "GetCoverSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UCoverSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::GetCoverPointPoseDataArray(int32_t PointID, struct TArray<struct FCoverPoseData>& PoseDataArray, struct FVector& RightDirection, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "GetCoverPointPoseDataArray");
    struct
    {
        int32_t PointID;
        struct TArray<struct FCoverPoseData> PoseDataArray;
        struct FVector RightDirection;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PoseDataArray = Parms.PoseDataArray;
    RightDirection = Parms.RightDirection;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::GetCoverPointLocationAndDirection(int32_t PointID, struct FVector& Location, struct FVector& Direction, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "GetCoverPointLocationAndDirection");
    struct
    {
        int32_t PointID;
        struct FVector Location;
        struct FVector Direction;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    Direction = Parms.Direction;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::GetCoverPointData(int32_t PointID, struct FCoverPointOctreeData& Data, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "GetCoverPointData");
    struct
    {
        int32_t PointID;
        struct FCoverPointOctreeData Data;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Data = Parms.Data;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::FindNearestCoverPoint(const struct FVector& Location, float EdgeSize, struct FVector& CoverLocation, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "FindNearestCoverPoint");
    struct
    {
        struct FVector Location;
        float EdgeSize;
        struct FVector CoverLocation;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.EdgeSize = (float)EdgeSize;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    CoverLocation = Parms.CoverLocation;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::FindCoverPointsInSphere(struct FVector Location, float Radius, struct TArray<int32_t>& Points, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "FindCoverPointsInSphere");
    struct
    {
        struct FVector Location;
        float Radius;
        struct TArray<int32_t> Points;
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Radius = (float)Radius;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Points = Parms.Points;
    return Parms.ReturnValue;
}

bool UNPCAICoverSystemStatics::FindCoverPointsInPathLength(struct AActor* AIPawn, float PathLength, struct TArray<struct FVector>& PointsPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAICoverSystemStatics", "FindCoverPointsInPathLength");
    struct
    {
        struct AActor* AIPawn;
        float PathLength;
        struct TArray<struct FVector> PointsPos;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.PathLength = (float)PathLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PointsPos = Parms.PointsPos;
    return Parms.ReturnValue;
}

// UNPCAIDamageData
bool UNPCAIDamageData::IsActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIDamageData", "IsActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCAIDoorInterface
bool INPCAIDoorInterface::IsDoorLocked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIDoorInterface", "IsDoorLocked");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIDoorInterface::IsDoorClosed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIDoorInterface", "IsDoorClosed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCAIDoorOpenInterface
bool INPCAIDoorOpenInterface::IsDoorOpened(struct AActor* InDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIDoorOpenInterface", "IsDoorOpened");
    struct
    {
        struct AActor* InDoor;
        bool ReturnValue;
    } Parms{};
    Parms.InDoor = (struct AActor*)InDoor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIDynamicGroupInfo
float UNPCAIDynamicGroupInfo::GetTimeSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIDynamicGroupInfo", "GetTimeSeconds");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAIDynamicGroupInfo::GetAllyList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIDynamicGroupInfo", "GetAllyList");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAITargetInfoBase
void UNPCAITargetInfoBase::SetTimeToForgorAboutEnemySec(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "SetTimeToForgorAboutEnemySec");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfoBase::SetTimeLastSeen(float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "SetTimeLastSeen");
    struct
    {
        float InNowTime;
    } Parms{};
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfoBase::SetTimeLastKnow(float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "SetTimeLastKnow");
    struct
    {
        float InNowTime;
    } Parms{};
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfoBase::SetFirstTimeSeen(float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "SetFirstTimeSeen");
    struct
    {
        float InNowTime;
    } Parms{};
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfoBase::SetBeHitTime(float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "SetBeHitTime");
    struct
    {
        float InNowTime;
    } Parms{};
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfoBase::SetBeFireTime(float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "SetBeFireTime");
    struct
    {
        float InNowTime;
    } Parms{};
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
}

float UNPCAITargetInfoBase::GetTimeToForgorAboutEnemySec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetTimeToForgorAboutEnemySec");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfoBase::GetTimeLastSeen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetTimeLastSeen");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfoBase::GetTimeLastKnow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetTimeLastKnow");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfoBase::GetLastBeHitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetLastBeHitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfoBase::GetLastBeFireTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetLastBeFireTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfoBase::GetFirstTimeSeen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetFirstTimeSeen");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfoBase::GetFirstBeHitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetFirstBeHitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfoBase::GetFirstBeFireTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetFirstBeFireTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITargetInfoBase::GetBeHitCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetBeHitCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITargetInfoBase::GetBeFireCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfoBase", "GetBeFireCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIEnemyGroupSingleInfo
void UNPCAIEnemyGroupSingleInfo::SetTemporaryEnemyInfo(bool InIsTemporaryEnemy, float InExpiredTime, bool InIsFromAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "SetTemporaryEnemyInfo");
    struct
    {
        bool InIsTemporaryEnemy;
        float InExpiredTime;
        bool InIsFromAlly;
    } Parms{};
    Parms.InIsTemporaryEnemy = (bool)InIsTemporaryEnemy;
    Parms.InExpiredTime = (float)InExpiredTime;
    Parms.InIsFromAlly = (bool)InIsFromAlly;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIEnemyGroupSingleInfo::SetSuppressEndTime(float InEndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "SetSuppressEndTime");
    struct
    {
        float InEndTime;
    } Parms{};
    Parms.InEndTime = (float)InEndTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIEnemyGroupSingleInfo::SetLastShootGroupAllyTime(float InTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "SetLastShootGroupAllyTime");
    struct
    {
        float InTime;
    } Parms{};
    Parms.InTime = (float)InTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIEnemyGroupSingleInfo::SetIsRemoved(bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "SetIsRemoved");
    struct
    {
        bool InValue;
    } Parms{};
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIEnemyGroupSingleInfo::SetHatredValue(int32_t InHatredValue, float InEndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "SetHatredValue");
    struct
    {
        int32_t InHatredValue;
        float InEndTime;
    } Parms{};
    Parms.InHatredValue = (int32_t)InHatredValue;
    Parms.InEndTime = (float)InEndTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIEnemyGroupSingleInfo::SetEnemyLastVisibleInfo(struct FVector InLastSeenPosition, float InLastSeenTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "SetEnemyLastVisibleInfo");
    struct
    {
        struct FVector InLastSeenPosition;
        float InLastSeenTime;
    } Parms{};
    Parms.InLastSeenPosition = (struct FVector)InLastSeenPosition;
    Parms.InLastSeenTime = (float)InLastSeenTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIEnemyGroupSingleInfo::SetEnemyLastEstimatePosition(struct AActor* InEnemy, struct FVector InPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "SetEnemyLastEstimatePosition");
    struct
    {
        struct AActor* InEnemy;
        struct FVector InPosition;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InPosition = (struct FVector)InPosition;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIEnemyGroupSingleInfo::IsRealValidEnemy(float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "IsRealValidEnemy");
    struct
    {
        float InNowTime;
        bool ReturnValue;
    } Parms{};
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIEnemyGroupSingleInfo::GetSuspectedPointCreatedNum(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "GetSuspectedPointCreatedNum");
    struct
    {
        struct AActor* InAIPawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAIEnemyGroupSingleInfo::GetPerson()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "GetPerson");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIEnemyGroupSingleInfo::GetLastShootGroupAllyTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "GetLastShootGroupAllyTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIEnemyGroupSingleInfo::GetIsRemoved()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "GetIsRemoved");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIEnemyGroupSingleInfo::GetHatredValue(float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "GetHatredValue");
    struct
    {
        float InNowTime;
        int32_t ReturnValue;
    } Parms{};
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIEnemyGroupSingleInfo::GetEnemyLastEstimatePosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "GetEnemyLastEstimatePosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIEnemyGroupSingleInfo::CalculateSuspectedPointCreatedNum(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "CalculateSuspectedPointCreatedNum");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIEnemyGroupSingleInfo::AddSuspectedPointCreatedNum(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnemyGroupSingleInfo", "AddSuspectedPointCreatedNum");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIEnvQueryGenerator_BlueprintBase
int32_t UNPCAIEnvQueryGenerator_BlueprintBase::GetQueryIntParam(const struct FName& ParamName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnvQueryGenerator_BlueprintBase", "GetQueryIntParam");
    struct
    {
        struct FName ParamName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ParamName = (struct FName)ParamName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIEnvQueryTest_BlueprintBase
float UNPCAIEnvQueryTest_BlueprintBase::CalcScore(struct AActor* ItemActor, const struct TArray<struct AActor*>& ContextActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnvQueryTest_BlueprintBase", "CalcScore");
    struct
    {
        struct AActor* ItemActor;
        struct TArray<struct AActor*> ContextActors;
        float ReturnValue;
    } Parms{};
    Parms.ItemActor = (struct AActor*)ItemActor;
    Parms.ContextActors = (struct TArray<struct AActor*>)ContextActors;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIEnvQueryTest_PointBase
float UNPCAIEnvQueryTest_PointBase::CalcScore(const struct FVector& ItemLocation, const struct TArray<struct AActor*>& ContextActors, struct UObject* QueryOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIEnvQueryTest_PointBase", "CalcScore");
    struct
    {
        struct FVector ItemLocation;
        struct TArray<struct AActor*> ContextActors;
        struct UObject* QueryOwner;
        float ReturnValue;
    } Parms{};
    Parms.ItemLocation = (struct FVector)ItemLocation;
    Parms.ContextActors = (struct TArray<struct AActor*>)ContextActors;
    Parms.QueryOwner = (struct UObject*)QueryOwner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIEQSSystemStatics
struct UEnvQueryInstanceBlueprintWrapper* UNPCAIEQSSystemStatics::UARunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct AActor* Querier, uint8_t RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass, uint8_t QueryPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIEQSSystemStatics", "UARunEQSQuery");
    struct
    {
        struct UObject* WorldContextObject;
        struct UEnvQuery* QueryTemplate;
        struct AActor* Querier;
        uint8_t RunMode;
        struct UEnvQueryInstanceBlueprintWrapper* WrapperClass;
        uint8_t QueryPriority;
        struct UEnvQueryInstanceBlueprintWrapper* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QueryTemplate = (struct UEnvQuery*)QueryTemplate;
    Parms.Querier = (struct AActor*)Querier;
    Parms.RunMode = (uint8_t)RunMode;
    Parms.WrapperClass = (struct UEnvQueryInstanceBlueprintWrapper*)WrapperClass;
    Parms.QueryPriority = (uint8_t)QueryPriority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAISubsystemBase
void UNPCAISubsystemBase::OnPostBeginGameInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAISubsystemBase", "OnPostBeginGameInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIFactionPlugin
void UNPCAIFactionPlugin::CoverFaction(struct AAIController* AIController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIFactionPlugin", "CoverFaction");
    struct
    {
        struct AAIController* AIController;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIFindAmbushAgainstPointAsyncTask
void UNPCAIFindAmbushAgainstPointAsyncTask::ExecuteTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIFindAmbushAgainstPointAsyncTask", "ExecuteTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAIFindAmbushAgainstPointAsyncTask* UNPCAIFindAmbushAgainstPointAsyncTask::AIFindAmbushAgainstPoint(struct AActor* Pawn, const struct FVector& PointStart, const struct FVector& PointToGo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIFindAmbushAgainstPointAsyncTask", "AIFindAmbushAgainstPoint");
    struct
    {
        struct AActor* Pawn;
        struct FVector PointStart;
        struct FVector PointToGo;
        struct UNPCAIFindAmbushAgainstPointAsyncTask* ReturnValue;
    } Parms{};
    Parms.Pawn = (struct AActor*)Pawn;
    Parms.PointStart = (struct FVector)PointStart;
    Parms.PointToGo = (struct FVector)PointToGo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIFindPathByKeyRouteAsyncTask
void UNPCAIFindPathByKeyRouteAsyncTask::ExecuteTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIFindPathByKeyRouteAsyncTask", "ExecuteTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAIFindPathByKeyRouteAsyncTask* UNPCAIFindPathByKeyRouteAsyncTask::AIFindPathByKeyRoute(struct AActor* Pawn, const struct FKeyRoutePointData& FromPoint, const struct FKeyRoutePointData& ToPoint, EAIKeyRouteQueryType QueryType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIFindPathByKeyRouteAsyncTask", "AIFindPathByKeyRoute");
    struct
    {
        struct AActor* Pawn;
        struct FKeyRoutePointData FromPoint;
        struct FKeyRoutePointData ToPoint;
        enum EAIKeyRouteQueryType QueryType;
        struct UNPCAIFindPathByKeyRouteAsyncTask* ReturnValue;
    } Parms{};
    Parms.Pawn = (struct AActor*)Pawn;
    Parms.FromPoint = (struct FKeyRoutePointData)FromPoint;
    Parms.ToPoint = (struct FKeyRoutePointData)ToPoint;
    Parms.QueryType = (enum EAIKeyRouteQueryType)QueryType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCAIGlobalManagerInterface
void INPCAIGlobalManagerInterface::NotifySceneEvent(struct UAISceneEventMessage* SceneEvent, const EAISceneEventState& EventState, struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "NotifySceneEvent");
    struct
    {
        struct UAISceneEventMessage* SceneEvent;
        enum EAISceneEventState EventState;
        struct AActor* AIPawn;
    } Parms{};
    Parms.SceneEvent = (struct UAISceneEventMessage*)SceneEvent;
    Parms.EventState = (enum EAISceneEventState)EventState;
    Parms.AIPawn = (struct AActor*)AIPawn;
    this->ProcessEvent(Func, &Parms);
}

struct ATacticSystemActor* INPCAIGlobalManagerInterface::GetTacticSystemActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetTacticSystemActor");
    struct
    {
        struct ATacticSystemActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIGlobalManagerInterface::GetSightExeLimitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetSightExeLimitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAIGlobalManagerInterface::GetSightExeLimitMinCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetSightExeLimitMinCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ANPCAIPerceptionDynamicActor* INPCAIGlobalManagerInterface::GetPerceptionDynamicActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetPerceptionDynamicActor");
    struct
    {
        struct ANPCAIPerceptionDynamicActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ANPCAIPerceptionAssistActor* INPCAIGlobalManagerInterface::GetPerceptionAssistActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetPerceptionAssistActor");
    struct
    {
        struct ANPCAIPerceptionAssistActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIGlobalManagerInterface::GetHearExeLimitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetHearExeLimitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAIGlobalManagerInterface::GetHearExeLimitDivide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetHearExeLimitDivide");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIGlobalManagerInterface::GetGrenadeMinLifeTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetGrenadeMinLifeTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIGlobalManagerInterface::GetCurrentFogDensity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetCurrentFogDensity");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACoverSystemActor* INPCAIGlobalManagerInterface::GetCoverSystemActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetCoverSystemActor");
    struct
    {
        struct ACoverSystemActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISGDoorManager* INPCAIGlobalManagerInterface::GetAISGDoorManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetAISGDoorManager");
    struct
    {
        struct UAISGDoorManager* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISceneEventsTriggerManager* INPCAIGlobalManagerInterface::GetAISceneEventsTriggerManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetAISceneEventsTriggerManager");
    struct
    {
        struct UAISceneEventsTriggerManager* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* INPCAIGlobalManagerInterface::GetAISceneEventDataTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetAISceneEventDataTable");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAIRuntimeMonitor* INPCAIGlobalManagerInterface::GetAIRuntimeMonitor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetAIRuntimeMonitor");
    struct
    {
        struct UAIRuntimeMonitor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGlobalSharedInfo* INPCAIGlobalManagerInterface::GetAIGlobalShareInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "GetAIGlobalShareInfo");
    struct
    {
        struct UNPCAIGlobalSharedInfo* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIGlobalManagerInterface::FindAllSGDoorsInWorld(struct TArray<struct TWeakObjectPtr<struct AActor>>& DoorsInWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGlobalManagerInterface", "FindAllSGDoorsInWorld");
    struct
    {
        struct TArray<struct TWeakObjectPtr<struct AActor>> DoorsInWorld;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    DoorsInWorld = Parms.DoorsInWorld;
}

// UNPCAIGlobalSettings
struct UNPCAIGlobalSettings* UNPCAIGlobalSettings::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIGlobalSettings", "Get");
    struct
    {
        struct UNPCAIGlobalSettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIGoalTarget
void UNPCAIGoalTarget::SetZeroGoal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "SetZeroGoal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGoalTarget::SetGoalTargetPoint(struct UNPCAIAttentionPoint* InPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "SetGoalTargetPoint");
    struct
    {
        struct UNPCAIAttentionPoint* InPoint;
    } Parms{};
    Parms.InPoint = (struct UNPCAIAttentionPoint*)InPoint;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGoalTarget::SetAIOwner(struct AAIController* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "SetAIOwner");
    struct
    {
        struct AAIController* InOwner;
    } Parms{};
    Parms.InOwner = (struct AAIController*)InOwner;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGoalTarget::PointLookComplete(int32_t InLookingIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "PointLookComplete");
    struct
    {
        int32_t InLookingIndex;
    } Parms{};
    Parms.InLookingIndex = (int32_t)InLookingIndex;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGoalTarget::IsDanger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "IsDanger");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGoalTarget::HaveZeroTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "HaveZeroTarget");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGoalTarget::HavePlaceTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "HavePlaceTarget");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGoalTarget::HaveMainTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "HaveMainTarget");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCPlaceForCheckType UNPCAIGoalTarget::GetPointType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "GetPointType");
    struct
    {
        enum ENPCPlaceForCheckType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAIGoalTarget::GetGoalTargetPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "GetGoalTargetPoint");
    struct
    {
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIGoalTarget::GetCreatedTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "GetCreatedTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGoalTarget::ClearGoalTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "ClearGoalTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGoalTarget::CanCheckBody()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGoalTarget", "CanCheckBody");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIGroupBaseRequest
void UNPCAIGroupBaseRequest::Take(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "Take");
    struct
    {
        struct AActor* InExecuter;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGroupBaseRequest::SetRequestTypeNeedCompletedInPast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "SetRequestTypeNeedCompletedInPast");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGroupBaseRequest::SetPossibleExecuterList(const struct TArray<struct AActor*>& InExecuterList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "SetPossibleExecuterList");
    struct
    {
        struct TArray<struct AActor*> InExecuterList;
    } Parms{};
    Parms.InExecuterList = (struct TArray<struct AActor*>)InExecuterList;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupBaseRequest::SetEndTimeOnTake(float InEndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "SetEndTimeOnTake");
    struct
    {
        float InEndTime;
    } Parms{};
    Parms.InEndTime = (float)InEndTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupBaseRequest::SetEndTimeOnExecute(float InEndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "SetEndTimeOnExecute");
    struct
    {
        float InEndTime;
    } Parms{};
    Parms.InEndTime = (float)InEndTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupBaseRequest::RemoveFromExecuterList(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "RemoveFromExecuterList");
    struct
    {
        struct AActor* InExecuter;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGroupBaseRequest::IsPossibleExecuter(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "IsPossibleExecuter");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::IsInHistoryExecuter(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "IsInHistoryExecuter");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::IsInExecuter(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "IsInExecuter");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::IsGroupAsRequester()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "IsGroupAsRequester");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::InitRequestType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "InitRequestType");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGroupBaseRequest::InitRequestInfo(struct AActor* InRequester, int32_t InMaxTakenCount, float InEndOfTakeTime, struct UObject* InWorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "InitRequestInfo");
    struct
    {
        struct AActor* InRequester;
        int32_t InMaxTakenCount;
        float InEndOfTakeTime;
        struct UObject* InWorldContext;
    } Parms{};
    Parms.InRequester = (struct AActor*)InRequester;
    Parms.InMaxTakenCount = (int32_t)InMaxTakenCount;
    Parms.InEndOfTakeTime = (float)InEndOfTakeTime;
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGroupBaseRequest::InitRequestByBluePrint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "InitRequestByBluePrint");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIGroupBaseRequest::GetStartTimeOfTake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "GetStartTimeOfTake");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UNPCAIGroupBaseRequest::GetRequestName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "GetRequestName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAIGroupBaseRequest::GetRequester()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "GetRequester");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAIGroupBaseRequest::GetExecuterList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "GetExecuterList");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIGroupBaseRequest::GetEndTimeOfTake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "GetEndTimeOfTake");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGroupBaseRequest::Dispose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "Dispose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGroupBaseRequest::CheckIsEndOfTake(float InCurrentRuntime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CheckIsEndOfTake");
    struct
    {
        float InCurrentRuntime;
        bool ReturnValue;
    } Parms{};
    Parms.InCurrentRuntime = (float)InCurrentRuntime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::CheckIsEndOfExecute(float InCurrentRuntime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CheckIsEndOfExecute");
    struct
    {
        float InCurrentRuntime;
        bool ReturnValue;
    } Parms{};
    Parms.InCurrentRuntime = (float)InCurrentRuntime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::CheckCanTakeRequestForLastRequestLimit(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CheckCanTakeRequestForLastRequestLimit");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::CheckCanTakeRequestForGroupLimit(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CheckCanTakeRequestForGroupLimit");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::CheckCanTakeRequestAllLimit(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CheckCanTakeRequestAllLimit");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::CheckCanTakeRequest(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CheckCanTakeRequest");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::CanRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CanRequest");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupBaseRequest::CanProceed(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "CanProceed");
    struct
    {
        struct AActor* InExecuter;
        bool ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGroupBaseRequest::AddPossibleExecuter(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupBaseRequest", "AddPossibleExecuter");
    struct
    {
        struct AActor* InExecuter;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIGroupRequestComponent
void UNPCAIGroupRequestComponent::Update()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "Update");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGroupRequestComponent::TryToFindRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "TryToFindRequest");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGroupRequestComponent::TryGiveUpCurrentRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "TryGiveUpCurrentRequest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupRequestComponent::TickCheckCurrentRequestIsValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "TickCheckCurrentRequestIsValid");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupRequestComponent::SetCurrentRequestCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "SetCurrentRequestCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupRequestComponent::SetCurrentRequest(struct UNPCAIGroupBaseRequest* InRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "SetCurrentRequest");
    struct
    {
        struct UNPCAIGroupBaseRequest* InRequest;
    } Parms{};
    Parms.InRequest = (struct UNPCAIGroupBaseRequest*)InRequest;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIGroupRequestComponent::HasCompletedRequestInPast(int32_t InRequestType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "HasCompletedRequestInPast");
    struct
    {
        int32_t InRequestType;
        bool ReturnValue;
    } Parms{};
    Parms.InRequestType = (int32_t)InRequestType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupRequestController* UNPCAIGroupRequestComponent::GetGroupRequestController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "GetGroupRequestController");
    struct
    {
        struct UNPCAIGroupRequestController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupRequestComponent::CheckCanReplaceHighPriorityRequest(struct UNPCAIGroupBaseRequest* InNewRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "CheckCanReplaceHighPriorityRequest");
    struct
    {
        struct UNPCAIGroupBaseRequest* InNewRequest;
        bool ReturnValue;
    } Parms{};
    Parms.InNewRequest = (struct UNPCAIGroupBaseRequest*)InNewRequest;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIGroupRequestComponent::AcceptRequest(struct UNPCAIGroupBaseRequest* InRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestComponent", "AcceptRequest");
    struct
    {
        struct UNPCAIGroupBaseRequest* InRequest;
        bool ReturnValue;
    } Parms{};
    Parms.InRequest = (struct UNPCAIGroupBaseRequest*)InRequest;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIGroupRequestController
bool UNPCAIGroupRequestController::TryAddRequest(struct UNPCAIGroupBaseRequest* InRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "TryAddRequest");
    struct
    {
        struct UNPCAIGroupBaseRequest* InRequest;
        bool ReturnValue;
    } Parms{};
    Parms.InRequest = (struct UNPCAIGroupBaseRequest*)InRequest;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupBaseRequest* UNPCAIGroupRequestController::TryActivateRequestByGroup(struct UObject* InWorldContextObject, struct UNPCAIGroupBaseRequest* InRequestClass, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InOnlyInDynamicGroup, bool InCanExecuteByMyself, const struct TArray<struct AActor*>& InPossibleExecuterList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "TryActivateRequestByGroup");
    struct
    {
        struct UObject* InWorldContextObject;
        struct UNPCAIGroupBaseRequest* InRequestClass;
        int32_t InMaxExecuterCount;
        bool InIsNeedAllCompleted;
        bool InOnlyInDynamicGroup;
        bool InCanExecuteByMyself;
        struct TArray<struct AActor*> InPossibleExecuterList;
        struct UNPCAIGroupBaseRequest* ReturnValue;
    } Parms{};
    Parms.InWorldContextObject = (struct UObject*)InWorldContextObject;
    Parms.InRequestClass = (struct UNPCAIGroupBaseRequest*)InRequestClass;
    Parms.InMaxExecuterCount = (int32_t)InMaxExecuterCount;
    Parms.InIsNeedAllCompleted = (bool)InIsNeedAllCompleted;
    Parms.InOnlyInDynamicGroup = (bool)InOnlyInDynamicGroup;
    Parms.InCanExecuteByMyself = (bool)InCanExecuteByMyself;
    Parms.InPossibleExecuterList = (struct TArray<struct AActor*>)InPossibleExecuterList;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupBaseRequest* UNPCAIGroupRequestController::TryActivateRequestByClass(struct AActor* InRequester, struct UNPCAIGroupBaseRequest* InRequestClass, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InCanExecuteByMyself, const struct TArray<struct AActor*>& InPossibleExecuterList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "TryActivateRequestByClass");
    struct
    {
        struct AActor* InRequester;
        struct UNPCAIGroupBaseRequest* InRequestClass;
        int32_t InMaxExecuterCount;
        bool InIsNeedAllCompleted;
        bool InCanExecuteByMyself;
        struct TArray<struct AActor*> InPossibleExecuterList;
        struct UNPCAIGroupBaseRequest* ReturnValue;
    } Parms{};
    Parms.InRequester = (struct AActor*)InRequester;
    Parms.InRequestClass = (struct UNPCAIGroupBaseRequest*)InRequestClass;
    Parms.InMaxExecuterCount = (int32_t)InMaxExecuterCount;
    Parms.InIsNeedAllCompleted = (bool)InIsNeedAllCompleted;
    Parms.InCanExecuteByMyself = (bool)InCanExecuteByMyself;
    Parms.InPossibleExecuterList = (struct TArray<struct AActor*>)InPossibleExecuterList;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupBaseRequest* UNPCAIGroupRequestController::TryActivateRequest(struct AActor* InRequester, struct UNPCAIGroupBaseRequest* InRequestInstance, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InCanExecuteByMyself, const struct TArray<struct AActor*>& InPossibleExecuterList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "TryActivateRequest");
    struct
    {
        struct AActor* InRequester;
        struct UNPCAIGroupBaseRequest* InRequestInstance;
        int32_t InMaxExecuterCount;
        bool InIsNeedAllCompleted;
        bool InCanExecuteByMyself;
        struct TArray<struct AActor*> InPossibleExecuterList;
        struct UNPCAIGroupBaseRequest* ReturnValue;
    } Parms{};
    Parms.InRequester = (struct AActor*)InRequester;
    Parms.InRequestInstance = (struct UNPCAIGroupBaseRequest*)InRequestInstance;
    Parms.InMaxExecuterCount = (int32_t)InMaxExecuterCount;
    Parms.InIsNeedAllCompleted = (bool)InIsNeedAllCompleted;
    Parms.InCanExecuteByMyself = (bool)InCanExecuteByMyself;
    Parms.InPossibleExecuterList = (struct TArray<struct AActor*>)InPossibleExecuterList;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupBaseRequest* UNPCAIGroupRequestController::TryActivateCustomRequest(struct AActor* InRequester, struct UNPCAIGroupCustomRequest* InRequest, struct AActor* PossibleExecuter, bool bResetSearchTime, bool InIsNeedAllCompleted, bool bCleanPendingRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "TryActivateCustomRequest");
    struct
    {
        struct AActor* InRequester;
        struct UNPCAIGroupCustomRequest* InRequest;
        struct AActor* PossibleExecuter;
        bool bResetSearchTime;
        bool InIsNeedAllCompleted;
        bool bCleanPendingRequest;
        struct UNPCAIGroupBaseRequest* ReturnValue;
    } Parms{};
    Parms.InRequester = (struct AActor*)InRequester;
    Parms.InRequest = (struct UNPCAIGroupCustomRequest*)InRequest;
    Parms.PossibleExecuter = (struct AActor*)PossibleExecuter;
    Parms.bResetSearchTime = (bool)bResetSearchTime;
    Parms.InIsNeedAllCompleted = (bool)InIsNeedAllCompleted;
    Parms.bCleanPendingRequest = (bool)bCleanPendingRequest;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGroupRequestController::RequestGiveUpToDo(struct UNPCAIGroupBaseRequest* InRequest, struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "RequestGiveUpToDo");
    struct
    {
        struct UNPCAIGroupBaseRequest* InRequest;
        struct AActor* InExecuter;
    } Parms{};
    Parms.InRequest = (struct UNPCAIGroupBaseRequest*)InRequest;
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupRequestController::RequestCompletedToDo(struct UNPCAIGroupBaseRequest* InRequest, struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "RequestCompletedToDo");
    struct
    {
        struct UNPCAIGroupBaseRequest* InRequest;
        struct AActor* InExecuter;
    } Parms{};
    Parms.InRequest = (struct UNPCAIGroupBaseRequest*)InRequest;
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupRequestController::RemoveRequestInList(struct UNPCAIGroupBaseRequest* InRequest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "RemoveRequestInList");
    struct
    {
        struct UNPCAIGroupBaseRequest* InRequest;
    } Parms{};
    Parms.InRequest = (struct UNPCAIGroupBaseRequest*)InRequest;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIGroupRequestController::RemoveAllByRequester(struct AActor* InRequester)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "RemoveAllByRequester");
    struct
    {
        struct AActor* InRequester;
    } Parms{};
    Parms.InRequester = (struct AActor*)InRequester;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct UNPCAIGroupBaseRequest*> UNPCAIGroupRequestController::GetGroupRequestsList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "GetGroupRequestsList");
    struct
    {
        struct TArray<struct UNPCAIGroupBaseRequest*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIGroupRequestController::GetGroupRequestListByType(int32_t InRequestType, struct TArray<struct UNPCAIGroupBaseRequest*>& OutRequestsList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "GetGroupRequestListByType");
    struct
    {
        int32_t InRequestType;
        struct TArray<struct UNPCAIGroupBaseRequest*> OutRequestsList;
        int32_t ReturnValue;
    } Parms{};
    Parms.InRequestType = (int32_t)InRequestType;
    this->ProcessEvent(Func, &Parms);
    OutRequestsList = Parms.OutRequestsList;
    return Parms.ReturnValue;
}

int32_t UNPCAIGroupRequestController::GetGroupRequestCountByType(int32_t InRequestType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "GetGroupRequestCountByType");
    struct
    {
        int32_t InRequestType;
        int32_t ReturnValue;
    } Parms{};
    Parms.InRequestType = (int32_t)InRequestType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIGroupRequestController::GetGroupRequestCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "GetGroupRequestCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupBaseRequest* UNPCAIGroupRequestController::GetGroupRequestByType(int32_t InRequestType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "GetGroupRequestByType");
    struct
    {
        int32_t InRequestType;
        struct UNPCAIGroupBaseRequest* ReturnValue;
    } Parms{};
    Parms.InRequestType = (int32_t)InRequestType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupBaseRequest* UNPCAIGroupRequestController::FindForMe(struct AActor* InExecuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "FindForMe");
    struct
    {
        struct AActor* InExecuter;
        struct UNPCAIGroupBaseRequest* ReturnValue;
    } Parms{};
    Parms.InExecuter = (struct AActor*)InExecuter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIGroupRequestController::FilterInValidRequest(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIGroupRequestController", "FilterInValidRequest");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    this->ProcessEvent(Func, &Parms);
}

// ANPCAILaunchPad
void ANPCAILaunchPad::OnTriggerBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILaunchPad", "OnTriggerBeginOverlap");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* Other;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        bool bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.Other = (struct AActor*)Other;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (bool)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

bool ANPCAILaunchPad::CanTriggerLaunch(struct ACharacter* Other)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILaunchPad", "CanTriggerLaunch");
    struct
    {
        struct ACharacter* Other;
        bool ReturnValue;
    } Parms{};
    Parms.Other = (struct ACharacter*)Other;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ANPCAILaunchPad::CalculateLaunchVelocity(struct AActor* LaunchedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILaunchPad", "CalculateLaunchVelocity");
    struct
    {
        struct AActor* LaunchedActor;
        struct FVector ReturnValue;
    } Parms{};
    Parms.LaunchedActor = (struct AActor*)LaunchedActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ANPCAILaunchPad::BP_LaunchCharacter(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILaunchPad", "BP_LaunchCharacter");
    struct
    {
        struct ACharacter* Character;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAINavSubsystemBase
bool UNPCAINavSubsystemBase::IsNavTileDataPrepared(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavSubsystemBase", "IsNavTileDataPrepared");
    struct
    {
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ANPCAINavLinkProxy* UNPCAINavSubsystemBase::GetNavLinkById(struct UObject* WorldContextObject, int32_t LinkId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavSubsystemBase", "GetNavLinkById");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t LinkId;
        struct ANPCAINavLinkProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LinkId = (int32_t)LinkId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAILocalNavigationSubsystem
bool UNPCAILocalNavigationSubsystem::SetCellSize(float CellSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "SetCellSize");
    struct
    {
        float CellSize;
        bool ReturnValue;
    } Parms{};
    Parms.CellSize = (float)CellSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAILocalNavigationSubsystem::RemoveGridById(int32_t GridId, bool bUpdate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "RemoveGridById");
    struct
    {
        int32_t GridId;
        bool bUpdate;
        int32_t ReturnValue;
    } Parms{};
    Parms.GridId = (int32_t)GridId;
    Parms.bUpdate = (bool)bUpdate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAILocalNavigationSubsystem::RemoveGridByCauser(struct UObject* Causer, bool bUpdate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "RemoveGridByCauser");
    struct
    {
        struct UObject* Causer;
        bool bUpdate;
        int32_t ReturnValue;
    } Parms{};
    Parms.Causer = (struct UObject*)Causer;
    Parms.bUpdate = (bool)bUpdate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAILocalNavigationSubsystem::RemoveAllGrids()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "RemoveAllGrids");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAILocalNavigationSubsystem::OnNavigationGridUpdated__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "OnNavigationGridUpdated__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UNPCAILocalNavigationSubsystem::CreateGridForPoints(struct UObject* Causer, ENPCAICellGridValue CellGridValue, const struct TArray<struct FVector>& Locations, float Padding2D, float Height, bool bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "CreateGridForPoints");
    struct
    {
        struct UObject* Causer;
        enum ENPCAICellGridValue CellGridValue;
        struct TArray<struct FVector> Locations;
        float Padding2D;
        float Height;
        bool bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.Causer = (struct UObject*)Causer;
    Parms.CellGridValue = (enum ENPCAICellGridValue)CellGridValue;
    Parms.Locations = (struct TArray<struct FVector>)Locations;
    Parms.Padding2D = (float)Padding2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAILocalNavigationSubsystem::CreateGridForCapsule(struct UObject* Causer, ENPCAICellGridValue CellGridValue, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, float Padding2D, float Height, bool bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "CreateGridForCapsule");
    struct
    {
        struct UObject* Causer;
        enum ENPCAICellGridValue CellGridValue;
        struct FVector Location;
        float CapsuleRadius;
        float CapsuleHalfHeight;
        float Padding2D;
        float Height;
        bool bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.Causer = (struct UObject*)Causer;
    Parms.CellGridValue = (enum ENPCAICellGridValue)CellGridValue;
    Parms.Location = (struct FVector)Location;
    Parms.CapsuleRadius = (float)CapsuleRadius;
    Parms.CapsuleHalfHeight = (float)CapsuleHalfHeight;
    Parms.Padding2D = (float)Padding2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAILocalNavigationSubsystem::CreateGridForBox(struct UObject* Causer, ENPCAICellGridValue CellGridValue, const struct FVector& Location, const struct FVector& Extent, struct FRotator Rotation, float Padding2D, float Height, bool bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationSubsystem", "CreateGridForBox");
    struct
    {
        struct UObject* Causer;
        enum ENPCAICellGridValue CellGridValue;
        struct FVector Location;
        struct FVector Extent;
        struct FRotator Rotation;
        float Padding2D;
        float Height;
        bool bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.Causer = (struct UObject*)Causer;
    Parms.CellGridValue = (enum ENPCAICellGridValue)CellGridValue;
    Parms.Location = (struct FVector)Location;
    Parms.Extent = (struct FVector)Extent;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Padding2D = (float)Padding2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ANPCAILocalNavigationTestingActor
void ANPCAILocalNavigationTestingActor::OnNavigationGridUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAILocalNavigationTestingActor", "OnNavigationGridUpdated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIMemorySystemComponent
void UNPCAIMemorySystemComponent::UpdateRoundPathNodes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "UpdateRoundPathNodes");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetStackGunRecord(const struct FVector& InMyPos, const struct FVector& InEnemyPos, const EAIPose& InPose, const EAILeanType& InLean)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetStackGunRecord");
    struct
    {
        struct FVector InMyPos;
        struct FVector InEnemyPos;
        enum EAIPose InPose;
        enum EAILeanType InLean;
    } Parms{};
    Parms.InMyPos = (struct FVector)InMyPos;
    Parms.InEnemyPos = (struct FVector)InEnemyPos;
    Parms.InPose = (enum EAIPose)InPose;
    Parms.InLean = (enum EAILeanType)InLean;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetSightWeakenTime(float WeakenTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetSightWeakenTime");
    struct
    {
        float WeakenTime;
    } Parms{};
    Parms.WeakenTime = (float)WeakenTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetPauseBehaviorTime(float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetPauseBehaviorTime");
    struct
    {
        float Time;
    } Parms{};
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetLastCalculateBackUpCoverPointNearBy(const struct FVector& InEnemyPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetLastCalculateBackUpCoverPointNearBy");
    struct
    {
        struct FVector InEnemyPos;
    } Parms{};
    Parms.InEnemyPos = (struct FVector)InEnemyPos;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetIsMolotovHurted(bool bInHurted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetIsMolotovHurted");
    struct
    {
        bool bInHurted;
    } Parms{};
    Parms.bInHurted = (bool)bInHurted;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetIsInTryLeanShoot(bool bTryLean)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetIsInTryLeanShoot");
    struct
    {
        bool bTryLean;
    } Parms{};
    Parms.bTryLean = (bool)bTryLean;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetIsAttentBeSeenByPlayer(bool bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetIsAttentBeSeenByPlayer");
    struct
    {
        bool bValue;
    } Parms{};
    Parms.bValue = (bool)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetGoalTarget(struct AActor* InOwner, struct UNPCAIAttentionPoint* InPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIMemorySystemComponent", "SetGoalTarget");
    struct
    {
        struct AActor* InOwner;
        struct UNPCAIAttentionPoint* InPoint;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.InPoint = (struct UNPCAIAttentionPoint*)InPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetGoalEnemy(struct AActor* InOwner, struct UNPCAITargetInfo* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIMemorySystemComponent", "SetGoalEnemy");
    struct
    {
        struct AActor* InOwner;
        struct UNPCAITargetInfo* InEnemy;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.InEnemy = (struct UNPCAITargetInfo*)InEnemy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetCurrentCoverPoint(struct AActor* InOwner, int32_t InCoverPointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIMemorySystemComponent", "SetCurrentCoverPoint");
    struct
    {
        struct AActor* InOwner;
        int32_t InCoverPointID;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.InCoverPointID = (int32_t)InCoverPointID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::SetBeSeenByPlayer(bool bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "SetBeSeenByPlayer");
    struct
    {
        bool bValue;
    } Parms{};
    Parms.bValue = (bool)bValue;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMemorySystemComponent::RemoveSceneEvent(int32_t EventUniqueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "RemoveSceneEvent");
    struct
    {
        int32_t EventUniqueId;
    } Parms{};
    Parms.EventUniqueId = (int32_t)EventUniqueId;
    this->ProcessEvent(Func, &Parms);
}

float UNPCAIMemorySystemComponent::QueryPathLengthToPoint(const struct FVector& ToPoint, const int64_t& PointPolyRef, bool bTryUpdatePathNodes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "QueryPathLengthToPoint");
    struct
    {
        struct FVector ToPoint;
        int64_t PointPolyRef;
        bool bTryUpdatePathNodes;
        float ReturnValue;
    } Parms{};
    Parms.ToPoint = (struct FVector)ToPoint;
    Parms.PointPolyRef = (int64_t)PointPolyRef;
    Parms.bTryUpdatePathNodes = (bool)bTryUpdatePathNodes;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::QueryNavPathPoints(const struct FVector& ToPoint, struct TArray<struct FVector>& Paths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "QueryNavPathPoints");
    struct
    {
        struct FVector ToPoint;
        struct TArray<struct FVector> Paths;
        bool ReturnValue;
    } Parms{};
    Parms.ToPoint = (struct FVector)ToPoint;
    this->ProcessEvent(Func, &Parms);
    Paths = Parms.Paths;
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::PointIsAroundAI(const struct FVector& ToPoint, const int64_t& PointPolyRef, bool bTryUpdatePathNodes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "PointIsAroundAI");
    struct
    {
        struct FVector ToPoint;
        int64_t PointPolyRef;
        bool bTryUpdatePathNodes;
        bool ReturnValue;
    } Parms{};
    Parms.ToPoint = (struct FVector)ToPoint;
    Parms.PointPolyRef = (int64_t)PointPolyRef;
    Parms.bTryUpdatePathNodes = (bool)bTryUpdatePathNodes;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::IsSightWeaken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "IsSightWeaken");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::IsInCover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "IsInCover");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::IsGoalEnemyThreaten(float ThreatenDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "IsGoalEnemyThreaten");
    struct
    {
        float ThreatenDistance;
        bool ReturnValue;
    } Parms{};
    Parms.ThreatenDistance = (float)ThreatenDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::IsBeSeenByPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "IsBeSeenByPlayer");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::IsAttentBeSeenByPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "IsAttentBeSeenByPlayer");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::HasGoldEnemyOrTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "HasGoldEnemyOrTarget");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIMemorySystemComponent::GetSightWeakenEndTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "GetSightWeakenEndTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIMemorySystemComponent::GetPauseBehaviorEndTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "GetPauseBehaviorEndTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIMemorySystemComponent::GetLastBeSeenTimeByPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "GetLastBeSeenTimeByPlayer");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::GetIsMolotovHurted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "GetIsMolotovHurted");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::GetIsInTryLeanShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "GetIsInTryLeanShoot");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGoalTarget* UNPCAIMemorySystemComponent::GetGoalTarget(struct AActor* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIMemorySystemComponent", "GetGoalTarget");
    struct
    {
        struct AActor* InOwner;
        struct UNPCAIGoalTarget* ReturnValue;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAITargetInfo* UNPCAIMemorySystemComponent::GetGoalEnemy(struct AActor* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIMemorySystemComponent", "GetGoalEnemy");
    struct
    {
        struct AActor* InOwner;
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::GetCurrentCoverPoint(struct AActor* InOwner, struct FCoverPointOctreeData& Out_CoverPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIMemorySystemComponent", "GetCurrentCoverPoint");
    struct
    {
        struct AActor* InOwner;
        struct FCoverPointOctreeData Out_CoverPoint;
        bool ReturnValue;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Out_CoverPoint = Parms.Out_CoverPoint;
    return Parms.ReturnValue;
}

struct UNPCAIPerceptionComponent* UNPCAIMemorySystemComponent::GetCachedPerceptionComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "GetCachedPerceptionComponent");
    struct
    {
        struct UNPCAIPerceptionComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::CanCalculateBackUpCoverPointNearBy(const struct FVector& InEnemyPos, float InRadiusNoCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "CanCalculateBackUpCoverPointNearBy");
    struct
    {
        struct FVector InEnemyPos;
        float InRadiusNoCheck;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemyPos = (struct FVector)InEnemyPos;
    Parms.InRadiusNoCheck = (float)InRadiusNoCheck;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMemorySystemComponent::AcceptSceneEvent(int32_t EventUniqueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMemorySystemComponent", "AcceptSceneEvent");
    struct
    {
        int32_t EventUniqueId;
        bool ReturnValue;
    } Parms{};
    Parms.EventUniqueId = (int32_t)EventUniqueId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIProfileBaseComponent
void UNPCAIProfileBaseComponent::SetProfile(struct UNPCAIPropertyProfileBase* InPropertyProfile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIProfileBaseComponent", "SetProfile");
    struct
    {
        struct UNPCAIPropertyProfileBase* InPropertyProfile;
    } Parms{};
    Parms.InPropertyProfile = (struct UNPCAIPropertyProfileBase*)InPropertyProfile;
    this->ProcessEvent(Func, &Parms);
}

float UNPCAIProfileBaseComponent::GetTimeSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIProfileBaseComponent", "GetTimeSeconds");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAIProfileBaseComponent::GetOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIProfileBaseComponent", "GetOwner");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIModifierComponent_AIData
void UNPCAIModifierComponent_AIData::SetDamageScale(float InDamageScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIModifierComponent_AIData", "SetDamageScale");
    struct
    {
        float InDamageScale;
    } Parms{};
    Parms.InDamageScale = (float)InDamageScale;
    this->ProcessEvent(Func, &Parms);
}

float UNPCAIModifierComponent_AIData::GetDamageScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIModifierComponent_AIData", "GetDamageScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIMoverSystemComponent
void UNPCAIMoverSystemComponent::SetupRegionWhereNavLinksNeedDisable(int32_t RegionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "SetupRegionWhereNavLinksNeedDisable");
    struct
    {
        int32_t RegionIndex;
    } Parms{};
    Parms.RegionIndex = (int32_t)RegionIndex;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::SetupFlanking(const struct FVector& InDangerPoint, const struct FVector& InDangerPointDirection, float InDangerPointEffectRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "SetupFlanking");
    struct
    {
        struct FVector InDangerPoint;
        struct FVector InDangerPointDirection;
        float InDangerPointEffectRadius;
    } Parms{};
    Parms.InDangerPoint = (struct FVector)InDangerPoint;
    Parms.InDangerPointDirection = (struct FVector)InDangerPointDirection;
    Parms.InDangerPointEffectRadius = (float)InDangerPointEffectRadius;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::SetIgnoreGotoPoint(float IgnoreTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "SetIgnoreGotoPoint");
    struct
    {
        float IgnoreTime;
    } Parms{};
    Parms.IgnoreTime = (float)IgnoreTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::SetDisposableOffsetFromCornersDistance(float OffsetDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "SetDisposableOffsetFromCornersDistance");
    struct
    {
        float OffsetDistance;
    } Parms{};
    Parms.OffsetDistance = (float)OffsetDistance;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::SetDestination(struct FVector InPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "SetDestination");
    struct
    {
        struct FVector InPosition;
    } Parms{};
    Parms.InPosition = (struct FVector)InPosition;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::SetCurrentMoveType(EAIMoveType InMoveType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "SetCurrentMoveType");
    struct
    {
        enum EAIMoveType InMoveType;
    } Parms{};
    Parms.InMoveType = (enum EAIMoveType)InMoveType;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::SetAvoidVolumes(struct TArray<struct AVolume*> Volumes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "SetAvoidVolumes");
    struct
    {
        struct TArray<struct AVolume*> Volumes;
    } Parms{};
    Parms.Volumes = (struct TArray<struct AVolume*>)Volumes;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::PauseMovement(float PauseTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "PauseMovement");
    struct
    {
        float PauseTime;
    } Parms{};
    Parms.PauseTime = (float)PauseTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::OnMovementModeChanged(struct ACharacter* MovedCharacter, uint8_t PrevMovementMode, uint8_t PreviousCustomMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "OnMovementModeChanged");
    struct
    {
        struct ACharacter* MovedCharacter;
        uint8_t PrevMovementMode;
        uint8_t PreviousCustomMode;
    } Parms{};
    Parms.MovedCharacter = (struct ACharacter*)MovedCharacter;
    Parms.PrevMovementMode = (uint8_t)PrevMovementMode;
    Parms.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::OnMoveCompleted(struct FAIRequestID RequestID, uint8_t MovementResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "OnMoveCompleted");
    struct
    {
        struct FAIRequestID RequestID;
        uint8_t MovementResult;
    } Parms{};
    Parms.RequestID = (struct FAIRequestID)RequestID;
    Parms.MovementResult = (uint8_t)MovementResult;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::OnLanded(const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "OnLanded");
    struct
    {
        struct FHitResult Hit;
    } Parms{};
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIMoverSystemComponent::IsSprintEnergyEnough(bool bSprinting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsSprintEnergyEnough");
    struct
    {
        bool bSprinting;
        bool ReturnValue;
    } Parms{};
    Parms.bSprinting = (bool)bSprinting;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsPauseMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsPauseMovement");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsMovingMayBlocking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsMovingMayBlocking");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsLastPathPassDoor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsLastPathPassDoor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsLastMoveSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsLastMoveSuccess");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsInIgnoreGotoPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsInIgnoreGotoPoint");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsGoalPositionReached()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsGoalPositionReached");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsComeTo(bool OnCover)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsComeTo");
    struct
    {
        bool OnCover;
        bool ReturnValue;
    } Parms{};
    Parms.OnCover = (bool)OnCover;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsCloseToDestination(float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsCloseToDestination");
    struct
    {
        float InRadius;
        bool ReturnValue;
    } Parms{};
    Parms.InRadius = (float)InRadius;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMoverSystemComponent::IsAnyLegBroken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "IsAnyLegBroken");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIMoverSystemComponent::GoDirectly(const struct FVector& Direction, float Seconds, const struct FVector& InBlendingVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GoDirectly");
    struct
    {
        struct FVector Direction;
        float Seconds;
        struct FVector InBlendingVelocity;
    } Parms{};
    Parms.Direction = (struct FVector)Direction;
    Parms.Seconds = (float)Seconds;
    Parms.InBlendingVelocity = (struct FVector)InBlendingVelocity;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::GoAccordingToWayPoints(const struct FNavSkeletonGraphFindResult& PathResult, const struct FNavSkeletonMoveSettings& Settings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GoAccordingToWayPoints");
    struct
    {
        struct FNavSkeletonGraphFindResult PathResult;
        struct FNavSkeletonMoveSettings Settings;
    } Parms{};
    Parms.PathResult = (struct FNavSkeletonGraphFindResult)PathResult;
    Parms.Settings = (struct FNavSkeletonMoveSettings)Settings;
    this->ProcessEvent(Func, &Parms);
}

int32_t UNPCAIMoverSystemComponent::GetNearestDoorState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetNearestDoorState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIMoverSystemComponent::GetNearestDoorLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetNearestDoorLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIMoveType UNPCAIMoverSystemComponent::GetMoveType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetMoveType");
    struct
    {
        enum EAIMoveType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIPropertyComponent_Move* UNPCAIMoverSystemComponent::GetMoveProperty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetMoveProperty");
    struct
    {
        struct UNPCAIPropertyComponent_Move* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCAIMovementKind UNPCAIMoverSystemComponent::GetMovementKind()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetMovementKind");
    struct
    {
        enum ENPCAIMovementKind ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCAIMoveResult UNPCAIMoverSystemComponent::GetLastMoveResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetLastMoveResult");
    struct
    {
        enum ENPCAIMoveResult ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIMoverSystemComponent::GetFromPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetFromPosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIMoverSystemComponent::GetDirCurPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetDirCurPoint");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIMoverSystemComponent::GetDestinationUpdateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetDestinationUpdateTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIMoverSystemComponent::GetDestination()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "GetDestination");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIMoverSystemComponent::ClearMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "ClearMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMoverSystemComponent::ClearLastPathPassDoorFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMoverSystemComponent", "ClearLastPathPassDoorFlag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIMultiTargetSystemComponent
void UNPCAIMultiTargetSystemComponent::WantToCalculateGoalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "WantToCalculateGoalEnemy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::UpdateGroupEnemyVisibleInfo(struct AActor* InEnemy, struct FVector InLastSeenPosition, float SeenTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "UpdateGroupEnemyVisibleInfo");
    struct
    {
        struct AActor* InEnemy;
        struct FVector InLastSeenPosition;
        float SeenTime;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InLastSeenPosition = (struct FVector)InLastSeenPosition;
    Parms.SeenTime = (float)SeenTime;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIMultiTargetSystemComponent::SwitchToTemporaryEnemy(struct AActor* InNeutral, float InEndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SwitchToTemporaryEnemy");
    struct
    {
        struct AActor* InNeutral;
        float InEndTime;
        bool ReturnValue;
    } Parms{};
    Parms.InNeutral = (struct AActor*)InNeutral;
    Parms.InEndTime = (float)InEndTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::SwitchEnemyToNeutral(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SwitchEnemyToNeutral");
    struct
    {
        struct AActor* InEnemy;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::SwitchEnemyToAlly(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SwitchEnemyToAlly");
    struct
    {
        struct AActor* InEnemy;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIMultiTargetSystemComponent::SetZoneGroupInfo(struct UNPCAIZoneGroupInfo* InGroupInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SetZoneGroupInfo");
    struct
    {
        struct UNPCAIZoneGroupInfo* InGroupInfo;
    } Parms{};
    Parms.InGroupInfo = (struct UNPCAIZoneGroupInfo*)InGroupInfo;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::SetScavPlayerTeamAsGroupEnemy(struct AActor* InScavPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SetScavPlayerTeamAsGroupEnemy");
    struct
    {
        struct AActor* InScavPlayer;
    } Parms{};
    Parms.InScavPlayer = (struct AActor*)InScavPlayer;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::SetKnowEnemySeenTimeAndPosition(struct AActor* InTargetPawn, bool bCanSeenSoon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SetKnowEnemySeenTimeAndPosition");
    struct
    {
        struct AActor* InTargetPawn;
        bool bCanSeenSoon;
    } Parms{};
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    Parms.bCanSeenSoon = (bool)bCanSeenSoon;
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAIAttentionPoint* UNPCAIMultiTargetSystemComponent::SearchDangerPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SearchDangerPoint");
    struct
    {
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAITargetInfo* UNPCAIMultiTargetSystemComponent::SearchDangerEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "SearchDangerEnemy");
    struct
    {
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIMultiTargetSystemComponent::RemoveSuspectedPointByType(ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "RemoveSuspectedPointByType");
    struct
    {
        enum ENPCPlaceForCheckType InPlaceType;
        struct AActor* InCreator;
    } Parms{};
    Parms.InPlaceType = (enum ENPCPlaceForCheckType)InPlaceType;
    Parms.InCreator = (struct AActor*)InCreator;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::RemoveSuspectedPoint(struct UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "RemoveSuspectedPoint");
    struct
    {
        struct UNPCAIAttentionPoint* InAttentionPoint;
        bool bRemoveNearCanSee;
    } Parms{};
    Parms.InAttentionPoint = (struct UNPCAIAttentionPoint*)InAttentionPoint;
    Parms.bRemoveNearCanSee = (bool)bRemoveNearCanSee;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::RemoveNeutral(struct AActor* InNeutral)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "RemoveNeutral");
    struct
    {
        struct AActor* InNeutral;
    } Parms{};
    Parms.InNeutral = (struct AActor*)InNeutral;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::RemoveEnemy(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "RemoveEnemy");
    struct
    {
        struct AActor* InEnemy;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::RemoveAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "RemoveAlly");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::QuitToDynamicGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "QuitToDynamicGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIMultiTargetSystemComponent::JoinToDynamicGroup(int32_t DyGroupId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "JoinToDynamicGroup");
    struct
    {
        int32_t DyGroupId;
        bool ReturnValue;
    } Parms{};
    Parms.DyGroupId = (int32_t)DyGroupId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::IsPointInVShootScope(const struct FVector& GunPoint, const struct FVector& ShootPoint, float HRadin, float VTopRadin, float VLowRadin, const struct FVector& InPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "IsPointInVShootScope");
    struct
    {
        struct FVector GunPoint;
        struct FVector ShootPoint;
        float HRadin;
        float VTopRadin;
        float VLowRadin;
        struct FVector InPoint;
        bool ReturnValue;
    } Parms{};
    Parms.GunPoint = (struct FVector)GunPoint;
    Parms.ShootPoint = (struct FVector)ShootPoint;
    Parms.HRadin = (float)HRadin;
    Parms.VTopRadin = (float)VTopRadin;
    Parms.VLowRadin = (float)VLowRadin;
    Parms.InPoint = (struct FVector)InPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::IsPointInHShootScope(const struct FVector& GunPoint, const struct FVector& ShootPoint, float HRadin, float VTopRadin, float VLowRadin, const struct FVector& InPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "IsPointInHShootScope");
    struct
    {
        struct FVector GunPoint;
        struct FVector ShootPoint;
        float HRadin;
        float VTopRadin;
        float VLowRadin;
        struct FVector InPoint;
        bool ReturnValue;
    } Parms{};
    Parms.GunPoint = (struct FVector)GunPoint;
    Parms.ShootPoint = (struct FVector)ShootPoint;
    Parms.HRadin = (float)HRadin;
    Parms.VTopRadin = (float)VTopRadin;
    Parms.VLowRadin = (float)VLowRadin;
    Parms.InPoint = (struct FVector)InPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::IsNeutral(struct AActor* InNeutral)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "IsNeutral");
    struct
    {
        struct AActor* InNeutral;
        bool ReturnValue;
    } Parms{};
    Parms.InNeutral = (struct AActor*)InNeutral;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::IsInSameZoneGroup(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "IsInSameZoneGroup");
    struct
    {
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::IsGroupEnemy(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "IsGroupEnemy");
    struct
    {
        struct AActor* InEnemy;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::IsAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "IsAlly");
    struct
    {
        struct AActor* InAlly;
        bool ReturnValue;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::HasOthersAllyInShootScope()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "HasOthersAllyInShootScope");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIZoneGroupInfo* UNPCAIMultiTargetSystemComponent::GetZoneGroupInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetZoneGroupInfo");
    struct
    {
        struct UNPCAIZoneGroupInfo* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAIMultiTargetSystemComponent::GetYoungestSuspectedPoint(struct AActor* InCharacter, float InRadius, bool InPriorityDanger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetYoungestSuspectedPoint");
    struct
    {
        struct AActor* InCharacter;
        float InRadius;
        bool InPriorityDanger;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct AActor*)InCharacter;
    Parms.InRadius = (float)InRadius;
    Parms.InPriorityDanger = (bool)InPriorityDanger;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* UNPCAIMultiTargetSystemComponent::GetWarningScavPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetWarningScavPlayer");
    struct
    {
        struct ACharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIMultiTargetSystemComponent::GetNeutralsNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetNeutralsNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIMultiTargetSystemComponent::GetEnemyNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetEnemyNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAIMultiTargetSystemComponent::GetEnemyGroupInfo(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetEnemyGroupInfo");
    struct
    {
        struct AActor* InTarget;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIMultiTargetSystemComponent::GetDynamicGroupId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetDynamicGroupId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIMultiTargetSystemComponent::GetBulletFireDangerPower(bool IsHitNoise, struct FVector InNoisePosition, float InNoiseDistance, struct FVector InBulletVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetBulletFireDangerPower");
    struct
    {
        bool IsHitNoise;
        struct FVector InNoisePosition;
        float InNoiseDistance;
        struct FVector InBulletVelocity;
        int32_t ReturnValue;
    } Parms{};
    Parms.IsHitNoise = (bool)IsHitNoise;
    Parms.InNoisePosition = (struct FVector)InNoisePosition;
    Parms.InNoiseDistance = (float)InNoiseDistance;
    Parms.InBulletVelocity = (struct FVector)InBulletVelocity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIMultiTargetSystemComponent::GetAllyNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetAllyNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UNPCAITargetInfo*> UNPCAIMultiTargetSystemComponent::GetAllTargetInfoList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetAllTargetInfoList");
    struct
    {
        struct TArray<struct UNPCAITargetInfo*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIMultiTargetSystemComponent::GetAllInSightEnemys(struct TArray<struct AActor*>& OutEnemys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetAllInSightEnemys");
    struct
    {
        struct TArray<struct AActor*> OutEnemys;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutEnemys = Parms.OutEnemys;
}

void UNPCAIMultiTargetSystemComponent::GetAllHadSeenEnemys(struct TArray<struct AActor*>& OutEnemys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "GetAllHadSeenEnemys");
    struct
    {
        struct TArray<struct AActor*> OutEnemys;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutEnemys = Parms.OutEnemys;
}

void UNPCAIMultiTargetSystemComponent::FilterNotValidEnemyOrPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "FilterNotValidEnemyOrPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::CheckNearScavPlayerBehavior()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "CheckNearScavPlayerBehavior");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIMultiTargetSystemComponent::CanHeardNoise(float InNoiseDistance, float InNoisePower, float InNoiseAttractScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "CanHeardNoise");
    struct
    {
        float InNoiseDistance;
        float InNoisePower;
        float InNoiseAttractScale;
        bool ReturnValue;
    } Parms{};
    Parms.InNoiseDistance = (float)InNoiseDistance;
    Parms.InNoisePower = (float)InNoisePower;
    Parms.InNoiseAttractScale = (float)InNoiseAttractScale;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSystemComponent::CalculateShootScope(struct FVector& GunPoint, struct FVector& ShootPoint, float& HRadian, float& VTopRadian, float& VLowRadian, struct FVector& HMaxPoint1, struct FVector& HMaxPoint2, struct FVector& VTopPoint, struct FVector& VLowPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "CalculateShootScope");
    struct
    {
        struct FVector GunPoint;
        struct FVector ShootPoint;
        float HRadian;
        float VTopRadian;
        float VLowRadian;
        struct FVector HMaxPoint1;
        struct FVector HMaxPoint2;
        struct FVector VTopPoint;
        struct FVector VLowPoint;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    GunPoint = Parms.GunPoint;
    ShootPoint = Parms.ShootPoint;
    HRadian = Parms.HRadian;
    VTopRadian = Parms.VTopRadian;
    VLowRadian = Parms.VLowRadian;
    HMaxPoint1 = Parms.HMaxPoint1;
    HMaxPoint2 = Parms.HMaxPoint2;
    VTopPoint = Parms.VTopPoint;
    VLowPoint = Parms.VLowPoint;
    return Parms.ReturnValue;
}

void UNPCAIMultiTargetSystemComponent::CalculateGoalPointForBot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "CalculateGoalPointForBot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::CalculateGoalForBot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "CalculateGoalForBot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSystemComponent::CalculateGoalEnemyForBot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "CalculateGoalEnemyForBot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAIAttentionPoint* UNPCAIMultiTargetSystemComponent::AddSuspectedPointToSearch(struct FVector InPoint, ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator, bool bIsAutoReCalculate, bool bIsAddSuspectedNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "AddSuspectedPointToSearch");
    struct
    {
        struct FVector InPoint;
        enum ENPCPlaceForCheckType InPlaceType;
        struct AActor* InCreator;
        bool bIsAutoReCalculate;
        bool bIsAddSuspectedNum;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InPoint = (struct FVector)InPoint;
    Parms.InPlaceType = (enum ENPCPlaceForCheckType)InPlaceType;
    Parms.InCreator = (struct AActor*)InCreator;
    Parms.bIsAutoReCalculate = (bool)bIsAutoReCalculate;
    Parms.bIsAddSuspectedNum = (bool)bIsAddSuspectedNum;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIMultiTargetSystemComponent::AddNeutral(struct AActor* InNeutral)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "AddNeutral");
    struct
    {
        struct AActor* InNeutral;
    } Parms{};
    Parms.InNeutral = (struct AActor*)InNeutral;
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAIMultiTargetSystemComponent::AddEnemy(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "AddEnemy");
    struct
    {
        struct AActor* InEnemy;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAITargetInfo* UNPCAIMultiTargetSystemComponent::AddAllyGoalEnemyIfNotTarget(float InRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "AddAllyGoalEnemyIfNotTarget");
    struct
    {
        float InRange;
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    Parms.InRange = (float)InRange;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIMultiTargetSystemComponent::AddAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSystemComponent", "AddAlly");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIMultiTargetSelectorComponent
void UNPCAIMultiTargetSelectorComponent::SetBeHitDetail(struct AActor* DamageCauser, float DamageValue, float InTimeSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "SetBeHitDetail");
    struct
    {
        struct AActor* DamageCauser;
        float DamageValue;
        float InTimeSec;
    } Parms{};
    Parms.DamageCauser = (struct AActor*)DamageCauser;
    Parms.DamageValue = (float)DamageValue;
    Parms.InTimeSec = (float)InTimeSec;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::SeparateMultiTags(struct FName InTotalTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "SeparateMultiTags");
    struct
    {
        struct FName InTotalTag;
    } Parms{};
    Parms.InTotalTag = (struct FName)InTotalTag;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::OnSmokeExplosionToDo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "OnSmokeExplosionToDo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::OnSightToDo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "OnSightToDo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::OnPerceptionUpdated(struct AActor* InTarget, struct FAIStimulus InAIStimulus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "OnPerceptionUpdated");
    struct
    {
        struct AActor* InTarget;
        struct FAIStimulus InAIStimulus;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    Parms.InAIStimulus = (struct FAIStimulus)InAIStimulus;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::OnHearingToDo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "OnHearingToDo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::OnDamageToDo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "OnDamageToDo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::OnBulletFireToDo(struct AActor* InInstigator, struct FVector InBulletLocation, struct FVector InBulletVelocity, struct FName InNoiseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "OnBulletFireToDo");
    struct
    {
        struct AActor* InInstigator;
        struct FVector InBulletLocation;
        struct FVector InBulletVelocity;
        struct FName InNoiseType;
    } Parms{};
    Parms.InInstigator = (struct AActor*)InInstigator;
    Parms.InBulletLocation = (struct FVector)InBulletLocation;
    Parms.InBulletVelocity = (struct FVector)InBulletVelocity;
    Parms.InNoiseType = (struct FName)InNoiseType;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIMultiTargetSelectorComponent::MakeEnemyKnowImpl(struct ACharacter* AIPawn, struct ACharacter* EnemyPawn, bool IsGroupEnemy, bool IsTeamFriendly, bool bAsRealSee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "MakeEnemyKnowImpl");
    struct
    {
        struct ACharacter* AIPawn;
        struct ACharacter* EnemyPawn;
        bool IsGroupEnemy;
        bool IsTeamFriendly;
        bool bAsRealSee;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.EnemyPawn = (struct ACharacter*)EnemyPawn;
    Parms.IsGroupEnemy = (bool)IsGroupEnemy;
    Parms.IsTeamFriendly = (bool)IsTeamFriendly;
    Parms.bAsRealSee = (bool)bAsRealSee;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIMultiTargetSelectorComponent::IsGunNoise(struct FString InTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "IsGunNoise");
    struct
    {
        struct FString InTag;
        bool ReturnValue;
    } Parms{};
    Parms.InTag = (struct FString)InTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIMultiTargetSelectorComponent::IsBeingFireHited(float InTime, struct AActor*& OutWhoFire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "IsBeingFireHited");
    struct
    {
        float InTime;
        struct AActor* OutWhoFire;
        bool ReturnValue;
    } Parms{};
    Parms.InTime = (float)InTime;
    this->ProcessEvent(Func, &Parms);
    OutWhoFire = Parms.OutWhoFire;
    return Parms.ReturnValue;
}

float UNPCAIMultiTargetSelectorComponent::GetLastBeHitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "GetLastBeHitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIMultiTargetSelectorComponent::GetFuzzyPointCoef(struct FString InHearTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "GetFuzzyPointCoef");
    struct
    {
        struct FString InHearTag;
        float ReturnValue;
    } Parms{};
    Parms.InHearTag = (struct FString)InHearTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIMultiTargetSelectorComponent::GetFirstBeHitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "GetFirstBeHitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIMultiTargetSelectorComponent::GetBeHitCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "GetBeHitCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIMultiTargetSelectorComponent::CreateFuzzyPoint(struct FVector InCenterPoint, float InFuzzyRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIMultiTargetSelectorComponent", "CreateFuzzyPoint");
    struct
    {
        struct FVector InCenterPoint;
        float InFuzzyRadius;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InCenterPoint = (struct FVector)InCenterPoint;
    Parms.InFuzzyRadius = (float)InFuzzyRadius;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAINavConnectivitySystem
bool UNPCAINavConnectivitySystem::GetNavLinkCylinderLocation(struct ANPCAINavLinkProxy* NavLink, int32_t RegionIndex, struct FVector& OutLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavConnectivitySystem", "GetNavLinkCylinderLocation");
    struct
    {
        struct ANPCAINavLinkProxy* NavLink;
        int32_t RegionIndex;
        struct FVector OutLocation;
        bool ReturnValue;
    } Parms{};
    Parms.NavLink = (struct ANPCAINavLinkProxy*)NavLink;
    Parms.RegionIndex = (int32_t)RegionIndex;
    this->ProcessEvent(Func, &Parms);
    OutLocation = Parms.OutLocation;
    return Parms.ReturnValue;
}

int32_t UNPCAINavConnectivitySystem::GetLinkUsageCount(const struct FVector& SourceLocation, const struct FVector& TargetLocation, int32_t& OutSourceRegionIndex, int32_t& OutTargetRegionIndex, int32_t& OutSourceRegionSize, int32_t& OutTargetRegionSize, EGetLinkUsageCountStatus& OutStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavConnectivitySystem", "GetLinkUsageCount");
    struct
    {
        struct FVector SourceLocation;
        struct FVector TargetLocation;
        int32_t OutSourceRegionIndex;
        int32_t OutTargetRegionIndex;
        int32_t OutSourceRegionSize;
        int32_t OutTargetRegionSize;
        enum EGetLinkUsageCountStatus OutStatus;
        int32_t ReturnValue;
    } Parms{};
    Parms.SourceLocation = (struct FVector)SourceLocation;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    this->ProcessEvent(Func, &Parms);
    OutSourceRegionIndex = Parms.OutSourceRegionIndex;
    OutTargetRegionIndex = Parms.OutTargetRegionIndex;
    OutSourceRegionSize = Parms.OutSourceRegionSize;
    OutTargetRegionSize = Parms.OutTargetRegionSize;
    OutStatus = Parms.OutStatus;
    return Parms.ReturnValue;
}

struct TArray<struct ANPCAINavLinkProxy*> UNPCAINavConnectivitySystem::GetDoorNavLinksInRegion(int32_t RegionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavConnectivitySystem", "GetDoorNavLinksInRegion");
    struct
    {
        int32_t RegionIndex;
        struct TArray<struct ANPCAINavLinkProxy*> ReturnValue;
    } Parms{};
    Parms.RegionIndex = (int32_t)RegionIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ANPCAINavLinkProxy*> UNPCAINavConnectivitySystem::GetDoorNavLinksBetweenAdjacentRegions(int32_t SourceRegionIndex, int32_t TargetRegionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavConnectivitySystem", "GetDoorNavLinksBetweenAdjacentRegions");
    struct
    {
        int32_t SourceRegionIndex;
        int32_t TargetRegionIndex;
        struct TArray<struct ANPCAINavLinkProxy*> ReturnValue;
    } Parms{};
    Parms.SourceRegionIndex = (int32_t)SourceRegionIndex;
    Parms.TargetRegionIndex = (int32_t)TargetRegionIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAINavCostSubsystem
struct UNPCAINavCostSubsystem* UNPCAINavCostSubsystem::GetInstance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavCostSubsystem", "GetInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UNPCAINavCostSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAINavDebugSystem
bool UNPCAINavDebugSystem::TestDoorPath(struct UObject* WorldContextObject, struct ANPCAINavLinkProxy* NavLinkProxy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "TestDoorPath");
    struct
    {
        struct UObject* WorldContextObject;
        struct ANPCAINavLinkProxy* NavLinkProxy;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.NavLinkProxy = (struct ANPCAINavLinkProxy*)NavLinkProxy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAINavDebugSystem::ProjectPointToNavMesh(struct UObject* WorldContextObject, const struct FVector& Location, const struct FVector& QueryExtent, int32_t& OutPolyIndex, struct FVector& OutProjectedLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "ProjectPointToNavMesh");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        struct FVector QueryExtent;
        int32_t OutPolyIndex;
        struct FVector OutProjectedLocation;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.QueryExtent = (struct FVector)QueryExtent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPolyIndex = Parms.OutPolyIndex;
    OutProjectedLocation = Parms.OutProjectedLocation;
    return Parms.ReturnValue;
}

void UNPCAINavDebugSystem::PrintNavMeshPolygonSlope(struct UObject* WorldContextObject, const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "PrintNavMeshPolygonSlope");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavDebugSystem::PlaceActorsOnNodes(struct UObject* WorldContextObject, struct FString NodeIndicesString, bool bUseNodeIndexAsPolyRef, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "PlaceActorsOnNodes");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString NodeIndicesString;
        bool bUseNodeIndexAsPolyRef;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.NodeIndicesString = (struct FString)NodeIndicesString;
    Parms.bUseNodeIndexAsPolyRef = (bool)bUseNodeIndexAsPolyRef;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UNPCAINavDebugSystem::IsLocationOnNavLinkDebug(struct UObject* WorldContextObject, const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "IsLocationOnNavLinkDebug");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavDebugSystem::GetLinkUsageCountDebug(struct UObject* WorldContextObject, const struct FVector& SourceLocation, const struct FVector& TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "GetLinkUsageCountDebug");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector SourceLocation;
        struct FVector TargetLocation;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SourceLocation = (struct FVector)SourceLocation;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavDebugSystem::GetDoorNavLinksInRegionDebug(struct UObject* WorldContextObject, const struct FVector& SourceLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "GetDoorNavLinksInRegionDebug");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector SourceLocation;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SourceLocation = (struct FVector)SourceLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavDebugSystem::DrawPathPoints(struct UObject* WorldContextObject, const struct TArray<struct FVector>& PathPoints, int32_t StartIndex, bool bFlushBeforeDrawing, bool bColorfulDrawing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "DrawPathPoints");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FVector> PathPoints;
        int32_t StartIndex;
        bool bFlushBeforeDrawing;
        bool bColorfulDrawing;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PathPoints = (struct TArray<struct FVector>)PathPoints;
    Parms.StartIndex = (int32_t)StartIndex;
    Parms.bFlushBeforeDrawing = (bool)bFlushBeforeDrawing;
    Parms.bColorfulDrawing = (bool)bColorfulDrawing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavDebugSystem::DestroyPlacedActors(struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "DestroyPlacedActors");
    struct
    {
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UNPCAINavDebugSystem::CalculateBoundaryEdgeLength(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavDebugSystem", "CalculateBoundaryEdgeLength");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UNPCAINavExperimentSystem
struct TArray<bool> UNPCAINavExperimentSystem::TestRaycastToNavSkeletonPoints(struct UObject* WorldContextObject, const struct FVector& StartLocation, const struct TArray<int32_t>& PointIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestRaycastToNavSkeletonPoints");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector StartLocation;
        struct TArray<int32_t> PointIDs;
        struct TArray<bool> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.PointIDs = (struct TArray<int32_t>)PointIDs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<bool> UNPCAINavExperimentSystem::TestNavSkeletonFloodFrom(struct UObject* WorldContextObject, const struct FVector& StartLocation, float MaxPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestNavSkeletonFloodFrom");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector StartLocation;
        float MaxPathLength;
        struct TArray<bool> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.MaxPathLength = (float)MaxPathLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAINavExperimentSystem::TestNavRaycast(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestNavRaycast");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavExperimentSystem::TestMoveDirectly(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestMoveDirectly");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavExperimentSystem::TestMoveAlongSurface(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestMoveAlongSurface");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavExperimentSystem::TestLimitMoveInRegion(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestLimitMoveInRegion");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavExperimentSystem::TestArrangeStandPositions(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestArrangeStandPositions");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavExperimentSystem::TestAIMoveDirectly(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavExperimentSystem", "TestAIMoveDirectly");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UNPCAINavigationStatics
bool UNPCAINavigationStatics::PointIsInNavigation(struct UObject* WorldContext, const struct FVector& InCheckPoint, const struct FVector& InExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "PointIsInNavigation");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InCheckPoint;
        struct FVector InExtent;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InCheckPoint = (struct FVector)InCheckPoint;
    Parms.InExtent = (struct FVector)InExtent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAINavigationStatics::PathNodesToNeighborPathNodes(struct UObject* WorldContext, const struct TArray<int32_t>& TargetPathNodes, int32_t Step, struct TArray<int32_t>& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "PathNodesToNeighborPathNodes");
    struct
    {
        struct UObject* WorldContext;
        struct TArray<int32_t> TargetPathNodes;
        int32_t Step;
        struct TArray<int32_t> Result;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.TargetPathNodes = (struct TArray<int32_t>)TargetPathNodes;
    Parms.Step = (int32_t)Step;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

void UNPCAINavigationStatics::PathNodesToDistAndNeighborPathNodes(struct UObject* WorldContext, const struct TArray<int32_t>& TargetPathNodes, float PathLength, struct TArray<int32_t>& NodesInPathLength, struct TArray<int32_t>& NodesNeighbor, bool& IsTimeOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "PathNodesToDistAndNeighborPathNodes");
    struct
    {
        struct UObject* WorldContext;
        struct TArray<int32_t> TargetPathNodes;
        float PathLength;
        struct TArray<int32_t> NodesInPathLength;
        struct TArray<int32_t> NodesNeighbor;
        bool IsTimeOut;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.TargetPathNodes = (struct TArray<int32_t>)TargetPathNodes;
    Parms.PathLength = (float)PathLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    NodesInPathLength = Parms.NodesInPathLength;
    NodesNeighbor = Parms.NodesNeighbor;
    IsTimeOut = Parms.IsTimeOut;
}

bool UNPCAINavigationStatics::IsNavigationPlanarFloor(struct UObject* WorldContext, const struct FVector& StartPoint, const struct FVector& Direction, float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "IsNavigationPlanarFloor");
    struct
    {
        struct UObject* WorldContext;
        struct FVector StartPoint;
        struct FVector Direction;
        float Distance;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.Direction = (struct FVector)Direction;
    Parms.Distance = (float)Distance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavigationStatics::GetRandomReachablePoint(struct UObject* WorldContext, struct FVector InCenter, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "GetRandomReachablePoint");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InCenter;
        float InRadius;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadius = (float)InRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavigationStatics::GetRandomNavigationPoint(struct UObject* WorldContext, const struct FVector& InCenter, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "GetRandomNavigationPoint");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InCenter;
        float InRadius;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadius = (float)InRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavigationStatics::GetRandomNavigationAndNearPoint(struct UObject* WorldContext, struct FVector InCenter, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "GetRandomNavigationAndNearPoint");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InCenter;
        float InRadius;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadius = (float)InRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavigationStatics::GetPointToNavigationLocation(struct UObject* WorldContext, const struct FVector& InCenter, const struct FVector& InExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "GetPointToNavigationLocation");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InCenter;
        struct FVector InExtent;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InExtent = (struct FVector)InExtent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavigationStatics::FindPointIsAboveGround(struct UObject* WorldContext, const struct FVector& InPosition, const struct TArray<struct AActor*>& InIgnoreActors, float TraceLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "FindPointIsAboveGround");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InPosition;
        struct TArray<struct AActor*> InIgnoreActors;
        float TraceLength;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InPosition = (struct FVector)InPosition;
    Parms.InIgnoreActors = (struct TArray<struct AActor*>)InIgnoreActors;
    Parms.TraceLength = (float)TraceLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAINavigationStatics::FindCloserToMePoints(struct UObject* WorldContext, const struct TArray<int32_t>& PathNodeIds, const struct FVector& MyLocation, const struct FVector& EnemyLocation, struct TArray<int32_t>& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationStatics", "FindCloserToMePoints");
    struct
    {
        struct UObject* WorldContext;
        struct TArray<int32_t> PathNodeIds;
        struct FVector MyLocation;
        struct FVector EnemyLocation;
        struct TArray<int32_t> Result;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.PathNodeIds = (struct TArray<int32_t>)PathNodeIds;
    Parms.MyLocation = (struct FVector)MyLocation;
    Parms.EnemyLocation = (struct FVector)EnemyLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

// UNPCAINavigationSystem
struct UNPCAINavigationSystem* UNPCAINavigationSystem::GetNPCAINavigationSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavigationSystem", "GetNPCAINavigationSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UNPCAINavigationSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ANPCAINavLinkProxy
void ANPCAINavLinkProxy::OnSmartLinkReachedEvent(struct AActor* Agent, const struct FVector& Destination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavLinkProxy", "OnSmartLinkReachedEvent");
    struct
    {
        struct AActor* Agent;
        struct FVector Destination;
    } Parms{};
    Parms.Agent = (struct AActor*)Agent;
    Parms.Destination = (struct FVector)Destination;
    this->ProcessEvent(Func, &Parms);
}

struct FVector ANPCAINavLinkProxy::GetSmartLinkRightLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavLinkProxy", "GetSmartLinkRightLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ANPCAINavLinkProxy::GetSmartLinkLeftLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavLinkProxy", "GetSmartLinkLeftLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNavLinkCustomComponent* ANPCAINavLinkProxy::GetSmartLinkComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavLinkProxy", "GetSmartLinkComponent");
    struct
    {
        struct UNavLinkCustomComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ANPCAINavMeshManager
void ANPCAINavMeshManager::SetupNavSkeleton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshManager", "SetupNavSkeleton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavMeshManager::PrintSkeletonPointRadiusStat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshManager", "PrintSkeletonPointRadiusStat");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavMeshManager::PrintSkeletonPointDegreeStat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshManager", "PrintSkeletonPointDegreeStat");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavMeshManager::PrintSkeletonMemoryUsage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshManager", "PrintSkeletonMemoryUsage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavMeshManager::PrintSkeletonInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshManager", "PrintSkeletonInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavMeshManager::PrintSkeletonEdgeLengthStat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshManager", "PrintSkeletonEdgeLengthStat");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavMeshManager::OnPostBeginGameInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshManager", "OnPostBeginGameInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ANPCAINavMeshTestingActor
void ANPCAINavMeshTestingActor::UpdateDrawing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavMeshTestingActor", "UpdateDrawing");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ANPCAINavModifierVolume
void ANPCAINavModifierVolume::SetupNavNodesAreaID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavModifierVolume", "SetupNavNodesAreaID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavModifierVolume::OnNavDataRegisteredCallback(struct ANavigationData* NavData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavModifierVolume", "OnNavDataRegisteredCallback");
    struct
    {
        struct ANavigationData* NavData;
    } Parms{};
    Parms.NavData = (struct ANavigationData*)NavData;
    this->ProcessEvent(Func, &Parms);
}

void ANPCAINavModifierVolume::CollectAffectedNavNodes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavModifierVolume", "CollectAffectedNavNodes");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UNPCAINavPlatformComponent
struct FVector UNPCAINavPlatformComponent::WorldLocToRelativeLoc(const struct FVector& WorldLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "WorldLocToRelativeLoc");
    struct
    {
        struct FVector WorldLoc;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldLoc = (struct FVector)WorldLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavPlatformComponent::WorldLocToNavLoc(const struct FVector& WorldLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "WorldLocToNavLoc");
    struct
    {
        struct FVector WorldLoc;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldLoc = (struct FVector)WorldLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavPlatformComponent::RelativeLocToWorldLoc(const struct FVector& RelativeLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "RelativeLocToWorldLoc");
    struct
    {
        struct FVector RelativeLoc;
        struct FVector ReturnValue;
    } Parms{};
    Parms.RelativeLoc = (struct FVector)RelativeLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavPlatformComponent::RelativeLocToNavLoc(const struct FVector& RelativeLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "RelativeLocToNavLoc");
    struct
    {
        struct FVector RelativeLoc;
        struct FVector ReturnValue;
    } Parms{};
    Parms.RelativeLoc = (struct FVector)RelativeLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAINavPlatformComponent::ProjectWorldLocOnPlatform(const struct FVector& WorldLoc, int64_t& PolyRef, const struct FVector& Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "ProjectWorldLocOnPlatform");
    struct
    {
        struct FVector WorldLoc;
        int64_t PolyRef;
        struct FVector Extent;
        bool ReturnValue;
    } Parms{};
    Parms.WorldLoc = (struct FVector)WorldLoc;
    Parms.Extent = (struct FVector)Extent;
    this->ProcessEvent(Func, &Parms);
    PolyRef = Parms.PolyRef;
    return Parms.ReturnValue;
}

void UNPCAINavPlatformComponent::OnMapOpened(struct FString Filename, bool bAsTemplate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "OnMapOpened");
    struct
    {
        struct FString Filename;
        bool bAsTemplate;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    Parms.bAsTemplate = (bool)bAsTemplate;
    this->ProcessEvent(Func, &Parms);
}

struct FVector UNPCAINavPlatformComponent::NavLocToWorldLoc(const struct FVector& NavLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "NavLocToWorldLoc");
    struct
    {
        struct FVector NavLoc;
        struct FVector ReturnValue;
    } Parms{};
    Parms.NavLoc = (struct FVector)NavLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavPlatformComponent::NavLocToRelativeLoc(const struct FVector& NavLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "NavLocToRelativeLoc");
    struct
    {
        struct FVector NavLoc;
        struct FVector ReturnValue;
    } Parms{};
    Parms.NavLoc = (struct FVector)NavLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAINavPlatformComponent::IsWorldLocOnPlatform(const struct FVector& WorldLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "IsWorldLocOnPlatform");
    struct
    {
        struct FVector WorldLoc;
        bool ReturnValue;
    } Parms{};
    Parms.WorldLoc = (struct FVector)WorldLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAINavPlatformComponent::IsNavLocOnPlatform(const struct FVector& NavLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "IsNavLocOnPlatform");
    struct
    {
        struct FVector NavLoc;
        bool ReturnValue;
    } Parms{};
    Parms.NavLoc = (struct FVector)NavLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAINavPlatformComponent::GetOwnerWorldLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "GetOwnerWorldLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNPCAINavPlatformBuildData UNPCAINavPlatformComponent::GetBuildData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "GetBuildData");
    struct
    {
        struct FNPCAINavPlatformBuildData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNPCAINavPlatformBuildConfig UNPCAINavPlatformComponent::GetBuildConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformComponent", "GetBuildConfig");
    struct
    {
        struct FNPCAINavPlatformBuildConfig ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAINavPlatformSystem
void UNPCAINavPlatformSystem::OnNavigationGenerationFinished(struct ANavigationData* NavData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "OnNavigationGenerationFinished");
    struct
    {
        struct ANavigationData* NavData;
    } Parms{};
    Parms.NavData = (struct ANavigationData*)NavData;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAINavPlatformSystem::OnNavigationGenerationBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "OnNavigationGenerationBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAINavPlatformSystem::OnNavDataRegistered(struct ANavigationData* NavData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "OnNavDataRegistered");
    struct
    {
        struct ANavigationData* NavData;
    } Parms{};
    Parms.NavData = (struct ANavigationData*)NavData;
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAINavPlatformSystem* UNPCAINavPlatformSystem::GetNavPlatformSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavPlatformSystem", "GetNavPlatformSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UNPCAINavPlatformSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, struct FNPCAINavPlatformBuildData> UNPCAINavPlatformSystem::GetBuildDatas()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "GetBuildDatas");
    struct
    {
        struct TMap<int32_t, struct FNPCAINavPlatformBuildData> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNPCAINavPlatformBuildData UNPCAINavPlatformSystem::GetBuildDataByTemplateID(int32_t TemplateID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "GetBuildDataByTemplateID");
    struct
    {
        int32_t TemplateID;
        struct FNPCAINavPlatformBuildData ReturnValue;
    } Parms{};
    Parms.TemplateID = (int32_t)TemplateID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNPCAINavPlatformBuildConfig UNPCAINavPlatformSystem::GetBuildConfigByTemplateID(int32_t TemplateID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "GetBuildConfigByTemplateID");
    struct
    {
        int32_t TemplateID;
        struct FNPCAINavPlatformBuildConfig ReturnValue;
    } Parms{};
    Parms.TemplateID = (int32_t)TemplateID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAINavPlatformComponent* UNPCAINavPlatformSystem::FindPlatformComponent(int64_t PID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "FindPlatformComponent");
    struct
    {
        int64_t PID;
        struct UNPCAINavPlatformComponent* ReturnValue;
    } Parms{};
    Parms.PID = (int64_t)PID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UNPCAINavPlatformSystem::FindPID(struct UNPCAINavPlatformComponent* PlatformComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavPlatformSystem", "FindPID");
    struct
    {
        struct UNPCAINavPlatformComponent* PlatformComponent;
        int64_t ReturnValue;
    } Parms{};
    Parms.PlatformComponent = (struct UNPCAINavPlatformComponent*)PlatformComponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAINavRuntimeSystem
void UNPCAINavRuntimeSystem::SetupTripMineAreas(struct UObject* Object, const struct FVector& StartPoint, const struct FVector& EndPoint, bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavRuntimeSystem", "SetupTripMineAreas");
    struct
    {
        struct UObject* Object;
        struct FVector StartPoint;
        struct FVector EndPoint;
        bool bEnabled;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    Parms.bEnabled = (bool)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAINavRuntimeSystem::SetupTearGasAreas(struct UObject* TearGasObject, const struct FVector& CenterPos, const struct FVector& EffectExtent, bool bActiving)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavRuntimeSystem", "SetupTearGasAreas");
    struct
    {
        struct UObject* TearGasObject;
        struct FVector CenterPos;
        struct FVector EffectExtent;
        bool bActiving;
    } Parms{};
    Parms.TearGasObject = (struct UObject*)TearGasObject;
    Parms.CenterPos = (struct FVector)CenterPos;
    Parms.EffectExtent = (struct FVector)EffectExtent;
    Parms.bActiving = (bool)bActiving;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAINavRuntimeSystem::SetupRegionWhereNavLinksNeedDisable(struct AActor* AIPawnOrController, int32_t RegionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavRuntimeSystem", "SetupRegionWhereNavLinksNeedDisable");
    struct
    {
        struct AActor* AIPawnOrController;
        int32_t RegionIndex;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawnOrController = (struct AActor*)AIPawnOrController;
    Parms.RegionIndex = (int32_t)RegionIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAINavRuntimeSystem::SetupBurningAreas(struct UObject* Object, const struct TArray<struct FVector>& Centers, float Radius, bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavRuntimeSystem", "SetupBurningAreas");
    struct
    {
        struct UObject* Object;
        struct TArray<struct FVector> Centers;
        float Radius;
        bool bEnable;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.Centers = (struct TArray<struct FVector>)Centers;
    Parms.Radius = (float)Radius;
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAINavRuntimeSystem::SetupAvoidAreas(struct AAIController* AIController, const struct TArray<struct AVolume*>& Volumes, bool bAvoid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavRuntimeSystem", "SetupAvoidAreas");
    struct
    {
        struct AAIController* AIController;
        struct TArray<struct AVolume*> Volumes;
        bool bAvoid;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    Parms.Volumes = (struct TArray<struct AVolume*>)Volumes;
    Parms.bAvoid = (bool)bAvoid;
    this->ProcessEvent(Func, &Parms);
}

ENPCAIPerceptibleTile UNPCAINavRuntimeSystem::MapAreaIDToPerceptibleTile(int32_t AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavRuntimeSystem", "MapAreaIDToPerceptibleTile");
    struct
    {
        int32_t AreaID;
        enum ENPCAIPerceptibleTile ReturnValue;
    } Parms{};
    Parms.AreaID = (int32_t)AreaID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAINavRuntimeSystem::IsAreaBombing(const struct FVector& Location, bool bCheckMolotov, bool bCheckTearGas)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavRuntimeSystem", "IsAreaBombing");
    struct
    {
        struct FVector Location;
        bool bCheckMolotov;
        bool bCheckTearGas;
        int32_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.bCheckMolotov = (bool)bCheckMolotov;
    Parms.bCheckTearGas = (bool)bCheckTearGas;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAICandidateStandPosition> UNPCAINavRuntimeSystem::ArrangeStandPositions(struct UObject* WorldContextObject, const struct FVector& Location, float MaxRange, float MinGap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavRuntimeSystem", "ArrangeStandPositions");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        float MaxRange;
        float MinGap;
        struct TArray<struct FAICandidateStandPosition> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.MaxRange = (float)MaxRange;
    Parms.MinGap = (float)MinGap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAINavSkeletonSystem
struct FNavSkeletonGraphAStarFilter UNPCAINavSkeletonSystem::SetupTryBestToIncludePointIDs(struct FNavSkeletonGraphAStarFilter& Filter, const struct TArray<int32_t>& PointIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "SetupTryBestToIncludePointIDs");
    struct
    {
        struct FNavSkeletonGraphAStarFilter Filter;
        struct TArray<int32_t> PointIDs;
        struct FNavSkeletonGraphAStarFilter ReturnValue;
    } Parms{};
    Parms.PointIDs = (struct TArray<int32_t>)PointIDs;
    this->ProcessEvent(Func, &Parms);
    Filter = Parms.Filter;
    return Parms.ReturnValue;
}

void UNPCAINavSkeletonSystem::QueryVisiblePointIDsFromMultiTargets(struct TArray<struct AActor*> Targets, struct TArray<float> HalfAngles, struct TArray<int32_t>& Result, float MaxDistance, float AroundRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryVisiblePointIDsFromMultiTargets");
    struct
    {
        struct TArray<struct AActor*> Targets;
        struct TArray<float> HalfAngles;
        struct TArray<int32_t> Result;
        float MaxDistance;
        float AroundRadius;
    } Parms{};
    Parms.Targets = (struct TArray<struct AActor*>)Targets;
    Parms.HalfAngles = (struct TArray<float>)HalfAngles;
    Parms.MaxDistance = (float)MaxDistance;
    Parms.AroundRadius = (float)AroundRadius;
    this->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryVisiblePointIDs(const struct FVector& Location, const struct FVector& Direction, float HalfAngle, float MaxDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryVisiblePointIDs");
    struct
    {
        struct FVector Location;
        struct FVector Direction;
        float HalfAngle;
        float MaxDistance;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Direction = (struct FVector)Direction;
    Parms.HalfAngle = (float)HalfAngle;
    Parms.MaxDistance = (float)MaxDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryThrowablePointIDs(int32_t TargetPointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryThrowablePointIDs");
    struct
    {
        int32_t TargetPointID;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.TargetPointID = (int32_t)TargetPointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryProtectablePointIDs(const struct FVector& Location, float MaxPathLength, int32_t KeepTopK)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryProtectablePointIDs");
    struct
    {
        struct FVector Location;
        float MaxPathLength;
        int32_t KeepTopK;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    Parms.KeepTopK = (int32_t)KeepTopK;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryPointIDsInSphericalCone(const struct FVector& Location, const struct FVector& Direction, float HalfAngle, float MaxDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryPointIDsInSphericalCone");
    struct
    {
        struct FVector Location;
        struct FVector Direction;
        float HalfAngle;
        float MaxDistance;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Direction = (struct FVector)Direction;
    Parms.HalfAngle = (float)HalfAngle;
    Parms.MaxDistance = (float)MaxDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryPointIDs(const struct FVector& Location, float QueryLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryPointIDs");
    struct
    {
        struct FVector Location;
        float QueryLength;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.QueryLength = (float)QueryLength;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryOutdoorsPointIDs(const struct FVector& Location, const struct FVector& Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryOutdoorsPointIDs");
    struct
    {
        struct FVector Location;
        struct FVector Extent;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Extent = (struct FVector)Extent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryNearestPointIDsSorted(const struct TArray<struct FVector>& Locations, float MaxPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryNearestPointIDsSorted");
    struct
    {
        struct TArray<struct FVector> Locations;
        float MaxPathLength;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Locations = (struct TArray<struct FVector>)Locations;
    Parms.MaxPathLength = (float)MaxPathLength;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryNearestPointIDs(const struct FVector& Location, float MaxPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryNearestPointIDs");
    struct
    {
        struct FVector Location;
        float MaxPathLength;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAINavSkeletonSystem::QueryNearestPointID(const struct FVector& Location, float MaxPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryNearestPointID");
    struct
    {
        struct FVector Location;
        float MaxPathLength;
        int32_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAINavSkeletonSystem::QueryNearestDoorPointID(const struct FVector& Location, float MaxPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryNearestDoorPointID");
    struct
    {
        struct FVector Location;
        float MaxPathLength;
        int32_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::QueryBranchyPointIDs(const struct FVector& Location, float MaxPathLength, int32_t KeepTopK)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "QueryBranchyPointIDs");
    struct
    {
        struct FVector Location;
        float MaxPathLength;
        int32_t KeepTopK;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    Parms.KeepTopK = (int32_t)KeepTopK;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNavSkeletonGraphFindResult UNPCAINavSkeletonSystem::OptimizePathResult(const struct FNavSkeletonGraphFindResult& PathResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "OptimizePathResult");
    struct
    {
        struct FNavSkeletonGraphFindResult PathResult;
        struct FNavSkeletonGraphFindResult ReturnValue;
    } Parms{};
    Parms.PathResult = (struct FNavSkeletonGraphFindResult)PathResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAINavSkeletonSystem::IsPointInMaxConnectivitySubGraph(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "IsPointInMaxConnectivitySubGraph");
    struct
    {
        int32_t PointID;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAINavSkeletonSystem::GetTotalPointCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "GetTotalPointCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNavSkeletonPoint UNPCAINavSkeletonSystem::GetPointData(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "GetPointData");
    struct
    {
        int32_t PointID;
        struct FNavSkeletonPoint ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAINavSkeletonSystem* UNPCAINavSkeletonSystem::GetNavSkeletonSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavSkeletonSystem", "GetNavSkeletonSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UNPCAINavSkeletonSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMFGraphAStarResult UNPCAINavSkeletonSystem::GetFindPathStatus(struct UObject* Querier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "GetFindPathStatus");
    struct
    {
        struct UObject* Querier;
        enum EMFGraphAStarResult ReturnValue;
    } Parms{};
    Parms.Querier = (struct UObject*)Querier;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::FloodFromPointIDs(struct TArray<int32_t> PointIDs, const struct FNavSkeletonGraphAStarFilter& Filter, bool bCanEndInUnreachablePoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "FloodFromPointIDs");
    struct
    {
        struct TArray<int32_t> PointIDs;
        struct FNavSkeletonGraphAStarFilter Filter;
        bool bCanEndInUnreachablePoint;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.PointIDs = (struct TArray<int32_t>)PointIDs;
    Parms.Filter = (struct FNavSkeletonGraphAStarFilter)Filter;
    Parms.bCanEndInUnreachablePoint = (bool)bCanEndInUnreachablePoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAINavSkeletonSystem::FloodFromPointID(int32_t PointID, const struct FNavSkeletonGraphAStarFilter& Filter, bool bCanEndInUnreachablePoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "FloodFromPointID");
    struct
    {
        int32_t PointID;
        struct FNavSkeletonGraphAStarFilter Filter;
        bool bCanEndInUnreachablePoint;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.Filter = (struct FNavSkeletonGraphAStarFilter)Filter;
    Parms.bCanEndInUnreachablePoint = (bool)bCanEndInUnreachablePoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNavSkeletonGraphFindResult UNPCAINavSkeletonSystem::FindStepBackPointIDs(int32_t PointID, const struct TArray<int32_t>& CandidatePointIDs, struct FNavSkeletonGraphAStarFilter& Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "FindStepBackPointIDs");
    struct
    {
        int32_t PointID;
        struct TArray<int32_t> CandidatePointIDs;
        struct FNavSkeletonGraphAStarFilter Filter;
        struct FNavSkeletonGraphFindResult ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.CandidatePointIDs = (struct TArray<int32_t>)CandidatePointIDs;
    this->ProcessEvent(Func, &Parms);
    Filter = Parms.Filter;
    return Parms.ReturnValue;
}

bool UNPCAINavSkeletonSystem::FindPathAsync(int32_t StartPointID, int32_t EndPointID, const struct FNavSkeletonGraphAStarFilter& Filter, const struct FMFGraphAStarPolicy& Policy, struct FDelegate Callback, struct UObject* Caller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "FindPathAsync");
    struct
    {
        int32_t StartPointID;
        int32_t EndPointID;
        struct FNavSkeletonGraphAStarFilter Filter;
        struct FMFGraphAStarPolicy Policy;
        struct FDelegate Callback;
        struct UObject* Caller;
        bool ReturnValue;
    } Parms{};
    Parms.StartPointID = (int32_t)StartPointID;
    Parms.EndPointID = (int32_t)EndPointID;
    Parms.Filter = (struct FNavSkeletonGraphAStarFilter)Filter;
    Parms.Policy = (struct FMFGraphAStarPolicy)Policy;
    Parms.Callback = (struct FDelegate)Callback;
    Parms.Caller = (struct UObject*)Caller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNavSkeletonGraphFindResult UNPCAINavSkeletonSystem::FindPath(int32_t StartPointID, int32_t EndPointID, const struct FNavSkeletonGraphAStarFilter& Filter, struct UObject* Caller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "FindPath");
    struct
    {
        int32_t StartPointID;
        int32_t EndPointID;
        struct FNavSkeletonGraphAStarFilter Filter;
        struct UObject* Caller;
        struct FNavSkeletonGraphFindResult ReturnValue;
    } Parms{};
    Parms.StartPointID = (int32_t)StartPointID;
    Parms.EndPointID = (int32_t)EndPointID;
    Parms.Filter = (struct FNavSkeletonGraphAStarFilter)Filter;
    Parms.Caller = (struct UObject*)Caller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNavSkeletonGraphFindResult UNPCAINavSkeletonSystem::FindOutsidePointIDs(int32_t PointID, const struct FNavSkeletonGraphAStarFilter& Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "FindOutsidePointIDs");
    struct
    {
        int32_t PointID;
        struct FNavSkeletonGraphAStarFilter Filter;
        struct FNavSkeletonGraphFindResult ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.Filter = (struct FNavSkeletonGraphAStarFilter)Filter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FNavSkeletonGraphAStarFilter UNPCAINavSkeletonSystem::ClearUnreachablePointIDs(struct FNavSkeletonGraphAStarFilter& Filter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "ClearUnreachablePointIDs");
    struct
    {
        struct FNavSkeletonGraphAStarFilter Filter;
        struct FNavSkeletonGraphAStarFilter ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Filter = Parms.Filter;
    return Parms.ReturnValue;
}

struct TArray<struct FNavSkeletonGraphResultNode> UNPCAINavSkeletonSystem::CalculatePathLengthToEachPoint(const struct TArray<int32_t>& PointIDs, const struct FVector& Location, float MaxPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "CalculatePathLengthToEachPoint");
    struct
    {
        struct TArray<int32_t> PointIDs;
        struct FVector Location;
        float MaxPathLength;
        struct TArray<struct FNavSkeletonGraphResultNode> ReturnValue;
    } Parms{};
    Parms.PointIDs = (struct TArray<int32_t>)PointIDs;
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAINavSkeletonSystem::BuildSkeleton(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavSkeletonSystem", "BuildSkeleton");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FNavSkeletonGraphAStarFilter UNPCAINavSkeletonSystem::AddUnreachablePointIDs(struct FNavSkeletonGraphAStarFilter& Filter, const struct TArray<int32_t>& PointIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "AddUnreachablePointIDs");
    struct
    {
        struct FNavSkeletonGraphAStarFilter Filter;
        struct TArray<int32_t> PointIDs;
        struct FNavSkeletonGraphAStarFilter ReturnValue;
    } Parms{};
    Parms.PointIDs = (struct TArray<int32_t>)PointIDs;
    this->ProcessEvent(Func, &Parms);
    Filter = Parms.Filter;
    return Parms.ReturnValue;
}

struct FNavSkeletonGraphAStarFilter UNPCAINavSkeletonSystem::AddUnreachablePointID(struct FNavSkeletonGraphAStarFilter& Filter, int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "AddUnreachablePointID");
    struct
    {
        struct FNavSkeletonGraphAStarFilter Filter;
        int32_t PointID;
        struct FNavSkeletonGraphAStarFilter ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    Filter = Parms.Filter;
    return Parms.ReturnValue;
}

bool UNPCAINavSkeletonSystem::AbortFindPathRequest(struct UObject* Querier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSkeletonSystem", "AbortFindPathRequest");
    struct
    {
        struct UObject* Querier;
        bool ReturnValue;
    } Parms{};
    Parms.Querier = (struct UObject*)Querier;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAINavSteepZoneSystem
void UNPCAINavSteepZoneSystem::RunDeleter(const struct FSteepZoneDeleteSettings& Settings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAINavSteepZoneSystem", "RunDeleter");
    struct
    {
        struct FSteepZoneDeleteSettings Settings;
    } Parms{};
    Parms.Settings = (struct FSteepZoneDeleteSettings)Settings;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAINavUtilitySystem
void UNPCAINavUtilitySystem::ValidateTacticPointLocations(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "ValidateTacticPointLocations");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAINavUtilitySystem::RemoveUnreachableNavMeshes(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "RemoveUnreachableNavMeshes");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAINavUtilitySystem::NavigationRaycast(struct UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector& HitLocation, struct FVector& OriginalHitLocation, bool& bIsRaycastEndInCorridor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "NavigationRaycast");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector RayStart;
        struct FVector RayEnd;
        struct FVector HitLocation;
        struct FVector OriginalHitLocation;
        bool bIsRaycastEndInCorridor;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.RayStart = (struct FVector)RayStart;
    Parms.RayEnd = (struct FVector)RayEnd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    HitLocation = Parms.HitLocation;
    OriginalHitLocation = Parms.OriginalHitLocation;
    bIsRaycastEndInCorridor = Parms.bIsRaycastEndInCorridor;
    return Parms.ReturnValue;
}

bool UNPCAINavUtilitySystem::IsDefaultNavArea(struct UObject* WorldContextObject, struct FVector Location, bool& bOnNavMesh, ENPCAIPerceptibleTile& NavMeshType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "IsDefaultNavArea");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        bool bOnNavMesh;
        enum ENPCAIPerceptibleTile NavMeshType;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bOnNavMesh = Parms.bOnNavMesh;
    NavMeshType = Parms.NavMeshType;
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UNPCAINavUtilitySystem::GetNavPolyCentersInVolume(struct UObject* WorldContextObject, struct AVolume* Volume, bool bIncludeHighCost, bool bShuffleCandidates, float KeepAwayDistance, int32_t MaxCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "GetNavPolyCentersInVolume");
    struct
    {
        struct UObject* WorldContextObject;
        struct AVolume* Volume;
        bool bIncludeHighCost;
        bool bShuffleCandidates;
        float KeepAwayDistance;
        int32_t MaxCount;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Volume = (struct AVolume*)Volume;
    Parms.bIncludeHighCost = (bool)bIncludeHighCost;
    Parms.bShuffleCandidates = (bool)bShuffleCandidates;
    Parms.KeepAwayDistance = (float)KeepAwayDistance;
    Parms.MaxCount = (int32_t)MaxCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAINavUtilitySystem::FindDistanceToWall(struct UObject* WorldContextObject, const struct FVector& Location, float SearchRadius, struct FVector& OutClosestPointOnWall, float& OutDistanceToWall)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "FindDistanceToWall");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        float SearchRadius;
        struct FVector OutClosestPointOnWall;
        float OutDistanceToWall;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.SearchRadius = (float)SearchRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutClosestPointOnWall = Parms.OutClosestPointOnWall;
    OutDistanceToWall = Parms.OutDistanceToWall;
    return Parms.ReturnValue;
}

bool UNPCAINavUtilitySystem::EstimateLocationAfterSeconds(struct AActor* PawnOrController, float ExpectedSeconds, struct FVector& OutLocation, float& OutActualSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "EstimateLocationAfterSeconds");
    struct
    {
        struct AActor* PawnOrController;
        float ExpectedSeconds;
        struct FVector OutLocation;
        float OutActualSeconds;
        bool ReturnValue;
    } Parms{};
    Parms.PawnOrController = (struct AActor*)PawnOrController;
    Parms.ExpectedSeconds = (float)ExpectedSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutLocation = Parms.OutLocation;
    OutActualSeconds = Parms.OutActualSeconds;
    return Parms.ReturnValue;
}

bool UNPCAINavUtilitySystem::DoesPathExist(struct UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float CostLimit, EPathExistenceTestMode TestMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "DoesPathExist");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        float CostLimit;
        enum EPathExistenceTestMode TestMode;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.CostLimit = (float)CostLimit;
    Parms.TestMode = (enum EPathExistenceTestMode)TestMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FCoverPointPathLengthResult> UNPCAINavUtilitySystem::CalculatePathLengthToEachCoverPoint(struct UObject* WorldContextObject, const struct FVector& Location, float MaxPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAINavUtilitySystem", "CalculatePathLengthToEachCoverPoint");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        float MaxPathLength;
        struct TArray<struct FCoverPointPathLengthResult> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.MaxPathLength = (float)MaxPathLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPathFollowingComponent
void UNPCAIPathFollowingComponent::ResumePathFollowing(struct AActor* Actor, ENPCAIPausePathFollowReason reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIPathFollowingComponent", "ResumePathFollowing");
    struct
    {
        struct AActor* Actor;
        enum ENPCAIPausePathFollowReason reason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.reason = (enum ENPCAIPausePathFollowReason)reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIPathFollowingComponent::PausePathFollowing(struct AActor* Actor, ENPCAIPausePathFollowReason reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIPathFollowingComponent", "PausePathFollowing");
    struct
    {
        struct AActor* Actor;
        enum ENPCAIPausePathFollowReason reason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.reason = (enum ENPCAIPausePathFollowReason)reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIPathFollowingComponent::EnableFocus(struct AActor* Actor, ENPCAIDisableFocusReason reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIPathFollowingComponent", "EnableFocus");
    struct
    {
        struct AActor* Actor;
        enum ENPCAIDisableFocusReason reason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.reason = (enum ENPCAIDisableFocusReason)reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIPathFollowingComponent::EnableCheckPathSafety(struct AActor* Actor, bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIPathFollowingComponent", "EnableCheckPathSafety");
    struct
    {
        struct AActor* Actor;
        bool bEnable;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIPathFollowingComponent::DisableFocus(struct AActor* Actor, ENPCAIDisableFocusReason reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIPathFollowingComponent", "DisableFocus");
    struct
    {
        struct AActor* Actor;
        enum ENPCAIDisableFocusReason reason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.reason = (enum ENPCAIDisableFocusReason)reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UNPCAIPeekPointAsyncTask
void UNPCAIPeekPointAsyncTask::GetNavPath(struct TArray<struct FVector>& OutPath, int32_t& StartIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPeekPointAsyncTask", "GetNavPath");
    struct
    {
        struct TArray<struct FVector> OutPath;
        int32_t StartIndex;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutPath = Parms.OutPath;
    StartIndex = Parms.StartIndex;
}

void UNPCAIPeekPointAsyncTask::ExecuteTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPeekPointAsyncTask", "ExecuteTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAIPeekPointAsyncTask* UNPCAIPeekPointAsyncTask::AIPeekPoint(struct AActor* Pawn, const struct FVector& TargetPoint, const struct FVector& DangerPoint, float PeekLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIPeekPointAsyncTask", "AIPeekPoint");
    struct
    {
        struct AActor* Pawn;
        struct FVector TargetPoint;
        struct FVector DangerPoint;
        float PeekLength;
        struct UNPCAIPeekPointAsyncTask* ReturnValue;
    } Parms{};
    Parms.Pawn = (struct AActor*)Pawn;
    Parms.TargetPoint = (struct FVector)TargetPoint;
    Parms.DangerPoint = (struct FVector)DangerPoint;
    Parms.PeekLength = (float)PeekLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ANPCAIPerceptionAssistActor
void ANPCAIPerceptionAssistActor::DebugShowAIGrassCluster(EnumAIGrassDebugBox Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPerceptionAssistActor", "DebugShowAIGrassCluster");
    struct
    {
        enum EnumAIGrassDebugBox Type;
    } Parms{};
    Parms.Type = (enum EnumAIGrassDebugBox)Type;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIPerceptionSystem
void UNPCAIPerceptionSystem::SetNoiseSpreadEnabled(bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPerceptionSystem", "SetNoiseSpreadEnabled");
    struct
    {
        bool InValue;
    } Parms{};
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPerceptionSystem::OnSourceActorEndPlay(struct AActor* InActor, uint8_t InEndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPerceptionSystem", "OnSourceActorEndPlay");
    struct
    {
        struct AActor* InActor;
        uint8_t InEndPlayReason;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InEndPlayReason = (uint8_t)InEndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIPerceptionSystem::ModifySenseRangeInRuntime(struct AActor* InAIController, float InCatchRadiusScale, float InLossRadiusScale, EAISenseType InSenseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPerceptionSystem", "ModifySenseRangeInRuntime");
    struct
    {
        struct AActor* InAIController;
        float InCatchRadiusScale;
        float InLossRadiusScale;
        enum EAISenseType InSenseType;
        bool ReturnValue;
    } Parms{};
    Parms.InAIController = (struct AActor*)InAIController;
    Parms.InCatchRadiusScale = (float)InCatchRadiusScale;
    Parms.InLossRadiusScale = (float)InLossRadiusScale;
    Parms.InSenseType = (enum EAISenseType)InSenseType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPerceptionSystem::IsNoiseSpreadEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPerceptionSystem", "IsNoiseSpreadEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Aiming
float UNPCAIPropertyComponent_Aiming::SetMaxAimTime(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "SetMaxAimTime");
    struct
    {
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIPropertyComponent_Aiming::SetAimingBodyPartWeightInRuntime(EAIBodyPartType InBodyPart, float InWeight, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "SetAimingBodyPartWeightInRuntime");
    struct
    {
        enum EAIBodyPartType InBodyPart;
        float InWeight;
        bool bIsForPlayer;
    } Parms{};
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    Parms.InWeight = (float)InWeight;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    this->ProcessEvent(Func, &Parms);
}

EAIAimingBodyPartTrend UNPCAIPropertyComponent_Aiming::SetAimingBodyPartTrend(EAIAimingBodyPartTrend AimingTrend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "SetAimingBodyPartTrend");
    struct
    {
        enum EAIAimingBodyPartTrend AimingTrend;
        enum EAIAimingBodyPartTrend ReturnValue;
    } Parms{};
    Parms.AimingTrend = (enum EAIAimingBodyPartTrend)AimingTrend;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIPropertyComponent_Aiming::RemoveAimingTypeInRuntime(EAIBodyBulkType InBulkType, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "RemoveAimingTypeInRuntime");
    struct
    {
        enum EAIBodyBulkType InBulkType;
        bool bIsForPlayer;
    } Parms{};
    Parms.InBulkType = (enum EAIBodyBulkType)InBulkType;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIPropertyComponent_Aiming::IsUsePerdestinedFakeRandom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "IsUsePerdestinedFakeRandom");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Aiming::IsAimingChoicesContains(EAIBodyPartType InBodyPartType, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "IsAimingChoicesContains");
    struct
    {
        enum EAIBodyPartType InBodyPartType;
        bool bIsForPlayer;
        bool ReturnValue;
    } Parms{};
    Parms.InBodyPartType = (enum EAIBodyPartType)InBodyPartType;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaSpreadOffsetXYClamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaSpreadOffsetXYClamp");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaSpreadOffsetMinZClamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaSpreadOffsetMinZClamp");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaSpreadOffsetMaxZClamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaSpreadOffsetMaxZClamp");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UNPCAIPropertyComponent_Aiming::GetUaShootHitRatesAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaShootHitRatesAI");
    struct
    {
        struct TArray<float> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UNPCAIPropertyComponent_Aiming::GetUaShootHitRates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaShootHitRates");
    struct
    {
        struct TArray<float> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfWeaponAdsMoaBias(float AdsMoaBias)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfWeaponAdsMoaBias");
    struct
    {
        float AdsMoaBias;
        float ReturnValue;
    } Parms{};
    Parms.AdsMoaBias = (float)AdsMoaBias;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfVehicleSpeedKPH(float VehicleSpeedKPH)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfVehicleSpeedKPH");
    struct
    {
        float VehicleSpeedKPH;
        float ReturnValue;
    } Parms{};
    Parms.VehicleSpeedKPH = (float)VehicleSpeedKPH;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfUnderFlashLight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfUnderFlashLight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfShootHead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfShootHead");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfInCoverSafe()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfInCoverSafe");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfEnemyMoveSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfEnemyMoveSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfEnemyMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfEnemyMove");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfBeHited()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfBeHited");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfBattleDuration(float BattleDurationTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfBattleDuration");
    struct
    {
        float BattleDurationTime;
        float ReturnValue;
    } Parms{};
    Parms.BattleDurationTime = (float)BattleDurationTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfArmBroken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfArmBroken");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateIfAIMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateIfAIMove");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateForDistanceToPlayer(float InDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateForDistanceToPlayer");
    struct
    {
        float InDistance;
        float ReturnValue;
    } Parms{};
    Parms.InDistance = (float)InDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateForDistanceToAI(float InDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateForDistanceToAI");
    struct
    {
        float InDistance;
        float ReturnValue;
    } Parms{};
    Parms.InDistance = (float)InDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitRateForDistanceIfNotADS(float InDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitRateForDistanceIfNotADS");
    struct
    {
        float InDistance;
        float ReturnValue;
    } Parms{};
    Parms.InDistance = (float)InDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHitLimitedTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHitLimitedTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUAShootHeadFaceRateIfUsedPredstined()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUAShootHeadFaceRateIfUsedPredstined");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaScatteringByDist(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaScatteringByDist");
    struct
    {
        float Distance;
        float ReturnValue;
    } Parms{};
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaQuickAimUnderSeenTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaQuickAimUnderSeenTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaQuickAimTimeCalcCoef()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaQuickAimTimeCalcCoef");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaQuickAimOffsetDisRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaQuickAimOffsetDisRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaMinAimTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaMinAimTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaFakeRandomHitRate(float HitRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaFakeRandomHitRate");
    struct
    {
        float HitRate;
        float ReturnValue;
    } Parms{};
    Parms.HitRate = (float)HitRate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveFloat* UNPCAIPropertyComponent_Aiming::GetUaAimTime2DistMultiplierCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaAimTime2DistMultiplierCurve");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetUaAddAimingTickWhenAngleSmallerThan_Cos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetUaAddAimingTickWhenAngleSmallerThan_Cos");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetShootSpecifiedPartTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetShootSpecifiedPartTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetShootPartRandInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetShootPartRandInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetReAimThreshold_Z()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetReAimThreshold_Z");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetReAimThreshold_XY_Sqr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetReAimThreshold_XY_Sqr");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetReAimThreshold_XY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetReAimThreshold_XY");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetMaxAimTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetMaxAimTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Aiming::GetIsFilterNotSeenPartToAiming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetIsFilterNotSeenPartToAiming");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Aiming::GetFireCountMin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetFireCountMin");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Aiming::GetFireCountMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetFireCountMax");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Aiming::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetAimTimeDelayByMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimTimeDelayByMove");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetAimTimeDelayByFirstShootProb()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimTimeDelayByFirstShootProb");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetAimTimeDelayByFirstShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimTimeDelayByFirstShoot");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetAimTimeDelayByDamageProb()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimTimeDelayByDamageProb");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetAimTimeDelayByDamageMin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimTimeDelayByDamageMin");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetAimTimeDelayByDamageMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimTimeDelayByDamageMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Aiming::GetAimingTypeWeightInRuntime(EAIBodyBulkType InBulkType, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimingTypeWeightInRuntime");
    struct
    {
        enum EAIBodyBulkType InBulkType;
        bool bIsForPlayer;
        float ReturnValue;
    } Parms{};
    Parms.InBulkType = (enum EAIBodyBulkType)InBulkType;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAimingType UNPCAIPropertyComponent_Aiming::GetAimingType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimingType");
    struct
    {
        enum EAimingType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAIBodyBulkAimingChoice> UNPCAIPropertyComponent_Aiming::GetAimingBulks(bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimingBulks");
    struct
    {
        bool bIsForPlayer;
        struct TArray<struct FAIBodyBulkAimingChoice> ReturnValue;
    } Parms{};
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIAimingBodyPartTrend UNPCAIPropertyComponent_Aiming::GetAimingBodyPartTrend()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "GetAimingBodyPartTrend");
    struct
    {
        enum EAIAimingBodyPartTrend ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIPropertyComponent_Aiming::AddAimingTypeInRuntime(EAIBodyBulkType InBulkType, float InWeight, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Aiming", "AddAimingTypeInRuntime");
    struct
    {
        enum EAIBodyBulkType InBulkType;
        float InWeight;
        bool bIsForPlayer;
    } Parms{};
    Parms.InBulkType = (enum EAIBodyBulkType)InBulkType;
    Parms.InWeight = (float)InWeight;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIPropertyComponent_AIType
bool UNPCAIPropertyComponent_AIType::InitModifierComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_AIType", "InitModifierComponents");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_AIType::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_AIType", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIMainType UNPCAIPropertyComponent_AIType::GetAIMainType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_AIType", "GetAIMainType");
    struct
    {
        enum EAIMainType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCAIJobType UNPCAIPropertyComponent_AIType::GetAIJobType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_AIType", "GetAIJobType");
    struct
    {
        enum ENPCAIJobType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Block
EAIProfileType UNPCAIPropertyComponent_Block::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Block", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Block::GetAimTimeAfterTurn(float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Block", "GetAimTimeAfterTurn");
    struct
    {
        float Angle;
        float ReturnValue;
    } Parms{};
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Boss
bool UNPCAIPropertyComponent_Boss::IsThreatenShootEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Boss", "IsThreatenShootEnable");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Boss::GetThreatenShootTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Boss", "GetThreatenShootTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Boss::GetThreatenShootEndDist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Boss", "GetThreatenShootEndDist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Boss::GetThreatenShootDist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Boss", "GetThreatenShootDist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Boss::GetThreatenShootCloseDist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Boss", "GetThreatenShootCloseDist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Boss::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Boss", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Core
EAILODActionPlan UNPCAIPropertyComponent_Core::GetUseLODPlan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Core", "GetUseLODPlan");
    struct
    {
        enum EAILODActionPlan ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Core::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Core", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAimingType UNPCAIPropertyComponent_Core::GetAimingType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Core", "GetAimingType");
    struct
    {
        enum EAimingType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Core::GetAccuratySpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Core", "GetAccuratySpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Curve
struct UCurveFloat* UNPCAIPropertyComponent_Curve::GetSightCurveDaytime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Curve", "GetSightCurveDaytime");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveFloat* UNPCAIPropertyComponent_Curve::GetSightCureOutLight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Curve", "GetSightCureOutLight");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Curve::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Curve", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Damage
void UNPCAIPropertyComponent_Damage::SetProjectilesResist(float InResist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetProjectilesResist");
    struct
    {
        float InResist;
    } Parms{};
    Parms.InResist = (float)InResist;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDotResist(float InResist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDotResist");
    struct
    {
        float InResist;
    } Parms{};
    Parms.InResist = (float)InResist;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDamageScale(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDamageScale");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDamageNoZeroHPValue(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDamageNoZeroHPValue");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDamageNoZeroHPParts(const struct TArray<EAIBodyPartType>& Parts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDamageNoZeroHPParts");
    struct
    {
        struct TArray<EAIBodyPartType> Parts;
    } Parms{};
    Parms.Parts = (struct TArray<EAIBodyPartType>)Parts;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDamageLimitTime(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDamageLimitTime");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDamageLimitPercentage(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDamageLimitPercentage");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDamageLimitEnabledForAI(bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDamageLimitEnabledForAI");
    struct
    {
        bool InValue;
    } Parms{};
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetDamageLimit(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetDamageLimit");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetBulletsResist(float InResist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetBulletsResist");
    struct
    {
        float InResist;
    } Parms{};
    Parms.InResist = (float)InResist;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetBulletArmorPenetrationNotHurt(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetBulletArmorPenetrationNotHurt");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Damage::SetArmorDamageScale(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "SetArmorDamageScale");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIPropertyComponent_Damage::IsInDamageNoZeroHPPart(const EAIBodyPartType& BodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "IsInDamageNoZeroHPPart");
    struct
    {
        enum EAIBodyPartType BodyPart;
        bool ReturnValue;
    } Parms{};
    Parms.BodyPart = (enum EAIBodyPartType)BodyPart;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Damage::IsDamageLimitEnabledForAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "IsDamageLimitEnabledForAI");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Damage::GetTeamGrenadeHarmEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetTeamGrenadeHarmEnable");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetProjectilesResist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetProjectilesResist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Damage::GetFactionGrenadeHarmEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetFactionGrenadeHarmEnable");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetDotResist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetDotResist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetDamageScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetDamageScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetDamageNoZeroHPValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetDamageNoZeroHPValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetDamageLimitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetDamageLimitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetDamageLimitPercentage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetDamageLimitPercentage");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Damage::GetDamageLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetDamageLimit");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetDamageBleedExtraProbability()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetDamageBleedExtraProbability");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetBulletsResist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetBulletsResist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetBulletArmorPenetrationNotHurt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetBulletArmorPenetrationNotHurt");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Damage::GetArmorDamageScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetArmorDamageScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Damage::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Damage", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Global
EAIProfileType UNPCAIPropertyComponent_Global::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Global", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Grenade
struct FVector UNPCAIPropertyComponent_Grenade::GetUaThrowPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType, const struct FRotator& Rotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetUaThrowPositionOffsetByPosture");
    struct
    {
        enum EAIPose PoseType;
        enum EAILeanType LeanType;
        struct FRotator Rotator;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PoseType = (enum EAIPose)PoseType;
    Parms.LeanType = (enum EAILeanType)LeanType;
    Parms.Rotator = (struct FRotator)Rotator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIPropertyComponent_Grenade::GetUaThrowPositionOffset(const struct FRotator& Rotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetUaThrowPositionOffset");
    struct
    {
        struct FRotator Rotator;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Rotator = (struct FRotator)Rotator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Grenade::GetSelfHoldingGrenadeProbability()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetSelfHoldingGrenadeProbability");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Grenade::GetHoldingGrenadeBeKonwIfInDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetHoldingGrenadeBeKonwIfInDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Grenade::GetExtraProjectilePlayEffectTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetExtraProjectilePlayEffectTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Grenade::GetComingGrenadeBeKonwIfFallInDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetComingGrenadeBeKonwIfFallInDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Grenade::GetCloseGrenadeHitDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetCloseGrenadeHitDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Grenade::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Grenade", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Health
void UNPCAIPropertyComponent_Health::SetEnableDBNO(bool InEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "SetEnableDBNO");
    struct
    {
        bool InEnabled;
    } Parms{};
    Parms.InEnabled = (bool)InEnabled;
    this->ProcessEvent(Func, &Parms);
}

float UNPCAIPropertyComponent_Health::GetStomachEnduranceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetStomachEnduranceMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetRightLegEnduranceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetRightLegEnduranceMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetRightArmEnduranceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetRightArmEnduranceMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNPCAIPropertyComponent_Health::GetRandomPerks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetRandomPerks");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetMaxHealthAdjustment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetMaxHealthAdjustment");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetLeftLegEnduranceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetLeftLegEnduranceMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetLeftArmEnduranceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetLeftArmEnduranceMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetHeadEnduranceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetHeadEnduranceMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Health::GetEnableDBNO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetEnableDBNO");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetDangerCoefOfDBNO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetDangerCoefOfDBNO");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Health::GetChestEnduranceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetChestEnduranceMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Health::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Health", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Hearing
void UNPCAIPropertyComponent_Hearing::SetAutoBeEnemyIfCreateDanageNoise(bool bCanAutoBeEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "SetAutoBeEnemyIfCreateDanageNoise");
    struct
    {
        bool bCanAutoBeEnemy;
    } Parms{};
    Parms.bCanAutoBeEnemy = (bool)bCanAutoBeEnemy;
    this->ProcessEvent(Func, &Parms);
}

float UNPCAIPropertyComponent_Hearing::GetVehicleMoveSpeedKPHFatalPointThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetVehicleMoveSpeedKPHFatalPointThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetVehicleMoveRushMeRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetVehicleMoveRushMeRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetVehicleMoveRushMeCheckTimeInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetVehicleMoveRushMeCheckTimeInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetVehicleDistThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetVehicleDistThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetVehicleDistanceFatalPointThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetVehicleDistanceFatalPointThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetSuspectedPointPosUpdateInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetSuspectedPointPosUpdateInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Hearing::GetSuspectedPointAccuracyMaxNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetSuspectedPointAccuracyMaxNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetSuspectedPointAccuracyIncreaseGapTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetSuspectedPointAccuracyIncreaseGapTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetSuspectedPointAccuracyDampingGapTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetSuspectedPointAccuracyDampingGapTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetPowerDanger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetPowerDanger");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerWalk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerWalk");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerVehicleHorn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerVehicleHorn");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerVehicle(float SpeedKPH)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerVehicle");
    struct
    {
        float SpeedKPH;
        float ReturnValue;
    } Parms{};
    Parms.SpeedKPH = (float)SpeedKPH;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerSprint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerSprint");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerSlientWalk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerSlientWalk");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerSlientCrouch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerSlientCrouch");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerSilencedFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerSilencedFire");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerProne()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerProne");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerGunFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerGunFire");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerGrenadeExplosive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerGrenadeExplosive");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerFootStepSounder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerFootStepSounder");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerDoorWreck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerDoorWreck");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerDoorOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerDoorOpen");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetNoisePowerCrouch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetNoisePowerCrouch");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Hearing::GetIsShouldHearOtherAINoise()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetIsShouldHearOtherAINoise");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetHearingSenseRange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetHearingSenseRange");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetHearingPowerCoef()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetHearingPowerCoef");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetGunHitCloseDist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetGunHitCloseDist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetGunFarDist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetGunFarDist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetGunBulletTrackFromMeRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetGunBulletTrackFromMeRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetGunBulletTrackCheckInFireDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetGunBulletTrackCheckInFireDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetFootStepFarDist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetFootStepFarDist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetCoefSilentGunSuspectedPointOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetCoefSilentGunSuspectedPointOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetCoefGunSuspectedPointOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetCoefGunSuspectedPointOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetCoefFootStepSuspectedPointOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetCoefFootStepSuspectedPointOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetBetrayTeammatePerceptionRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetBetrayTeammatePerceptionRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetBetrayRadiusSightForTaker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetBetrayRadiusSightForTaker");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetBetrayRadiusSightForShooter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetBetrayRadiusSightForShooter");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetBetrayRadiusDirectZ()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetBetrayRadiusDirectZ");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetBetrayRadiusDirectForTaker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetBetrayRadiusDirectForTaker");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetBetrayRadiusDirectForShooter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetBetrayRadiusDirectForShooter");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Hearing::GetBetrayAITeammatePerceptionRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetBetrayAITeammatePerceptionRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Hearing::GetAutoBeEnemyIfCreateDanageNoise()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetAutoBeEnemyIfCreateDanageNoise");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Hearing::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Hearing", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Lay
float UNPCAIPropertyComponent_Lay::GetStandUpCooldown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Lay", "GetStandUpCooldown");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Lay::GetProneCooldown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Lay", "GetProneCooldown");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Lay::GetEndProneCooldown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Lay", "GetEndProneCooldown");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Lay::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Lay", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Look
void UNPCAIPropertyComponent_Look::SetSightCheckIntervalToOtherAI(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "SetSightCheckIntervalToOtherAI");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

float UNPCAIPropertyComponent_Look::GetWeakenVisionRadiusScaleWhileRotate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetWeakenVisionRadiusScaleWhileRotate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetWeakenVisionRadiusScaleMaxWhileRotate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetWeakenVisionRadiusScaleMaxWhileRotate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetVisibleAngNormal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetVisibleAngNormal");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetVisibleAngCosNormal(float DistanceSqr, bool bLastInSight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetVisibleAngCosNormal");
    struct
    {
        float DistanceSqr;
        bool bLastInSight;
        float ReturnValue;
    } Parms{};
    Parms.DistanceSqr = (float)DistanceSqr;
    Parms.bLastInSight = (bool)bLastInSight;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetTimeCreateSuspectedPointCheckIfOutSideSightPIE()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetTimeCreateSuspectedPointCheckIfOutSideSightPIE");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetTimeCanSeeEnemyIfFlashLight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetTimeCanSeeEnemyIfFlashLight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetTimeCanSeeEnemyIfBeenShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetTimeCanSeeEnemyIfBeenShoot");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetSmokeSightIgnoreDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSmokeSightIgnoreDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIBodyPartType UNPCAIPropertyComponent_Look::GetSingleBodyPartForPlayerCheckSight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSingleBodyPartForPlayerCheckSight");
    struct
    {
        enum EAIBodyPartType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIBodyPartType UNPCAIPropertyComponent_Look::GetSingleBodyPartForAICheckSight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSingleBodyPartForAICheckSight");
    struct
    {
        enum EAIBodyPartType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCAIPriority UNPCAIPropertyComponent_Look::GetSightPriority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSightPriority");
    struct
    {
        enum ENPCAIPriority ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetSightCheckIntervalToPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSightCheckIntervalToPlayer");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetSightCheckIntervalToOtherAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSightCheckIntervalToOtherAI");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetSightCheckIntervalToDrone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSightCheckIntervalToDrone");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetSightCheckIntervalIfTargetVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetSightCheckIntervalIfTargetVisible");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetRecoverVisionRadiusSpeedAfterWeaken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetRecoverVisionRadiusSpeedAfterWeaken");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetRainySightRadiusMin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetRainySightRadiusMin");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetRainySightRadiusMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetRainySightRadiusMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetNormalVisionRadiusLost()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetNormalVisionRadiusLost");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetNormalVisionRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetNormalVisionRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetMiddleDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetMiddleDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetLostSightRatioByFlashLightBurn(float FlashBurnValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetLostSightRatioByFlashLightBurn");
    struct
    {
        float FlashBurnValue;
        float ReturnValue;
    } Parms{};
    Parms.FlashBurnValue = (float)FlashBurnValue;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIPropertyComponent_Look::GetLookPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetLookPositionOffsetByPosture");
    struct
    {
        enum EAIPose PoseType;
        enum EAILeanType LeanType;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PoseType = (enum EAIPose)PoseType;
    Parms.LeanType = (enum EAILeanType)LeanType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIPropertyComponent_Look::GetLookPositionOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetLookPositionOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIPropertyComponent_Look::GetLeanCheckBlockWallOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetLeanCheckBlockWallOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetLandscapeGrassSightIgnoreAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetLandscapeGrassSightIgnoreAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetInvisibleDelayTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetInvisibleDelayTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetIntervalCheckIfOutSideSightPIE()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetIntervalCheckIfOutSideSightPIE");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetIngoreNolightRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetIngoreNolightRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGrassSightIgnoreDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGrassSightIgnoreDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGrassSightBlockPowner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGrassSightBlockPowner");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGrassSightBlockDensity100()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGrassSightBlockDensity100");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGoalNeedToCalculateFirstAppearDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGoalNeedToCalculateFirstAppearDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGoalFirstAppearMinTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGoalFirstAppearMinTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGoalFirstAppearMaxTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGoalFirstAppearMaxTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGoalFirstAppearCalculateCoef()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGoalFirstAppearCalculateCoef");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetGoalFirstAppearAngleCalculateCoef()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetGoalFirstAppearAngleCalculateCoef");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIPropertyComponent_Look::GetFogVisionInfo(float FogDensity, float& OutFogMin, float& OutFogMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetFogVisionInfo");
    struct
    {
        float FogDensity;
        float OutFogMin;
        float OutFogMax;
    } Parms{};
    Parms.FogDensity = (float)FogDensity;
    this->ProcessEvent(Func, &Parms);
    OutFogMin = Parms.OutFogMin;
    OutFogMax = Parms.OutFogMax;
}

float UNPCAIPropertyComponent_Look::GetFogShotInTimeCanIgnoreFogVision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetFogShotInTimeCanIgnoreFogVision");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetFogDensityAffectLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetFogDensityAffectLimit");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetFogDelayTimeToSeeMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetFogDelayTimeToSeeMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetFarDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetFarDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDroneVisionRadius(int64_t DroneInvItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDroneVisionRadius");
    struct
    {
        int64_t DroneInvItemId;
        float ReturnValue;
    } Parms{};
    Parms.DroneInvItemId = (int64_t)DroneInvItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDroneVisibleRadius180(int64_t DroneInvItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDroneVisibleRadius180");
    struct
    {
        int64_t DroneInvItemId;
        float ReturnValue;
    } Parms{};
    Parms.DroneInvItemId = (int64_t)DroneInvItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDroneVisibleAngNormal(int64_t DroneInvItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDroneVisibleAngNormal");
    struct
    {
        int64_t DroneInvItemId;
        float ReturnValue;
    } Parms{};
    Parms.DroneInvItemId = (int64_t)DroneInvItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDroneVisibleAngCosNormal(int64_t DroneInvItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDroneVisibleAngCosNormal");
    struct
    {
        int64_t DroneInvItemId;
        float ReturnValue;
    } Parms{};
    Parms.DroneInvItemId = (int64_t)DroneInvItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDroneHearRadius(int64_t DroneInvItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDroneHearRadius");
    struct
    {
        int64_t DroneInvItemId;
        float ReturnValue;
    } Parms{};
    Parms.DroneInvItemId = (int64_t)DroneInvItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDistNormalSuspectedPointInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDistNormalSuspectedPointInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDistDangerSuspectedPointInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDistDangerSuspectedPointInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetDistanceCheckIfOutSideSightPIE()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetDistanceCheckIfOutSideSightPIE");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Look::GetCloseDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetCloseDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Look::GetCanHearDroneNoMove(int64_t DroneInvItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetCanHearDroneNoMove");
    struct
    {
        int64_t DroneInvItemId;
        bool ReturnValue;
    } Parms{};
    Parms.DroneInvItemId = (int64_t)DroneInvItemId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Look::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Look", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Mind
float UNPCAIPropertyComponent_Mind::GetTimeToForgorAboutEnemySec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetTimeToForgorAboutEnemySec");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetTimeOfHitForGoalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetTimeOfHitForGoalEnemy");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetTimeNotSeeForGoalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetTimeNotSeeForGoalEnemy");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetTimeEnemyDeadPassCanDelete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetTimeEnemyDeadPassCanDelete");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetTimeEnemyDeadPassCanConfirm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetTimeEnemyDeadPassCanConfirm");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetScoreToDistanceForGoalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetScoreToDistanceForGoalEnemy");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetScoreMultipleFaceAngleForGoalEnemyByCos(float AngleCos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetScoreMultipleFaceAngleForGoalEnemyByCos");
    struct
    {
        float AngleCos;
        float ReturnValue;
    } Parms{};
    Parms.AngleCos = (float)AngleCos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetScoreCutOfZoomWeaponForGoalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetScoreCutOfZoomWeaponForGoalEnemy");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetScoreCutOfHitMeForGoalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetScoreCutOfHitMeForGoalEnemy");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetScoreCutOfHitAllyForGoalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetScoreCutOfHitAllyForGoalEnemy");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetNoRepeatQREMyselfAtDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetNoRepeatQREMyselfAtDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetNoRepeatQREEnemyAtDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetNoRepeatQREEnemyAtDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Mind::GetItemCheapPriceCanIgnorePickUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetItemCheapPriceCanIgnorePickUp");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Mind::GetItemCheapPriceCanDestoryWhenPickUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetItemCheapPriceCanDestoryWhenPickUp");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetHatredValueToDist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetHatredValueToDist");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetCareTargetHasZoomWeaponDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetCareTargetHasZoomWeaponDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Mind::GetCalculateGoalEnemyPriporityInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetCalculateGoalEnemyPriporityInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Mind::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Mind", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Move
bool UNPCAIPropertyComponent_Move::IsEnableImmediatelyTurn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "IsEnableImmediatelyTurn");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Move::IsEnabledQuicklyTurnInPlace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "IsEnabledQuicklyTurnInPlace");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetWeaponShootingMovingScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetWeaponShootingMovingScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetSoundDiffusionMaxDistanceFactor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetSoundDiffusionMaxDistanceFactor");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetSoundDiffusionLevelFactor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetSoundDiffusionLevelFactor");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetRotateAngleMinDeviation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetRotateAngleMinDeviation");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetRotateAngleMaxDeviation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetRotateAngleMaxDeviation");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetRotateAngleInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetRotateAngleInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetRecoverPointPerSecond()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetRecoverPointPerSecond");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetMinRotateSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetMinRotateSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetMinRequiredTimeToSrpint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetMinRequiredTimeToSrpint");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetMaxSprintDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetMaxSprintDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetMaxRotateAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetMaxRotateAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetMaxRequiredTimeToRecover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetMaxRequiredTimeToRecover");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Move::GetEnabledUseRotateAngleLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetEnabledUseRotateAngleLimit");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetCanMoveTestDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetCanMoveTestDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Move::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetAcceptanceRadiusZ()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetAcceptanceRadiusZ");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Move::GetAcceptanceRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Move", "GetAcceptanceRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Nav
EAIProfileType UNPCAIPropertyComponent_Nav::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Nav", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_PlayerActionReaction
EAIProfileType UNPCAIPropertyComponent_PlayerActionReaction::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_PlayerActionReaction", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_RequestRun
EAIProfileType UNPCAIPropertyComponent_RequestRun::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_RequestRun", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Shoot
void UNPCAIPropertyComponent_Shoot::SetIsCanTransferDangerHitToOtherPart(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetIsCanTransferDangerHitToOtherPart");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Shoot::SetHitZeroBodyPartTransferToOtherMinHealthPercent(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetHitZeroBodyPartTransferToOtherMinHealthPercent");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Shoot::SetHitZeroBodyPartTransferToOtherMaxHealthPercent(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetHitZeroBodyPartTransferToOtherMaxHealthPercent");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Shoot::SetHitIntervalRate(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetHitIntervalRate");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Shoot::SetEnabledTransferHitBetterPart(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetEnabledTransferHitBetterPart");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Shoot::SetEnabledIgnoreBlockDirectHit(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetEnabledIgnoreBlockDirectHit");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Shoot::SetCountIfHitHeadTransferToOther(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetCountIfHitHeadTransferToOther");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIPropertyComponent_Shoot::SetCountIfHitChestTransferToOther(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "SetCountIfHitChestTransferToOther");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIPropertyComponent_Shoot::IsIfHitHeadTransferToOtherWhenShootLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "IsIfHitHeadTransferToOtherWhenShootLoc");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Shoot::IsIfHitChestTransferToOtherWhenShootLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "IsIfHitChestTransferToOtherWhenShootLoc");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Shoot::IsEnabledIgnoreBlockDirectHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "IsEnabledIgnoreBlockDirectHit");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Shoot::IsEnabledHitIntervalByGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "IsEnabledHitIntervalByGroup");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Shoot::IsCanTransferDangerHitToOtherPart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "IsCanTransferDangerHitToOtherPart");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetVerticalRecoilScaleMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetVerticalRecoilScaleMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetVerticalRecoilScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetVerticalRecoilScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetUaShootPositionZOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetUaShootPositionZOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIPropertyComponent_Shoot::GetUaShootPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetUaShootPositionOffsetByPosture");
    struct
    {
        enum EAIPose PoseType;
        enum EAILeanType LeanType;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PoseType = (enum EAIPose)PoseType;
    Parms.LeanType = (enum EAILeanType)LeanType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIPropertyComponent_Shoot::GetUaShootPositionOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetUaShootPositionOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveFloat* UNPCAIPropertyComponent_Shoot::GetUaCurveShootAccuracyByRecoil()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetUaCurveShootAccuracyByRecoil");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetTryLeanRayCheckDistanceSqr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetTryLeanRayCheckDistanceSqr");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetTryLeanRayCheckDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetTryLeanRayCheckDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetStandShootZLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetStandShootZLocation");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetShootLocIfHitStillShakeOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetShootLocIfHitStillShakeOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetRecoilRecoverTimeMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetRecoilRecoverTimeMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetRecoilRecoverTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetRecoilRecoverTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetInstantBulletVaildDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetInstantBulletVaildDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Shoot::GetHorizontRecoilStepSizeNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetHorizontRecoilStepSizeNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetHorizontalRecoilScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetHorizontalRecoilScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetHitZeroBodyPartTransferToOtherMinHealthPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetHitZeroBodyPartTransferToOtherMinHealthPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetHitZeroBodyPartTransferToOtherMaxHealthPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetHitZeroBodyPartTransferToOtherMaxHealthPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetHitIntervalRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetHitIntervalRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Shoot::GetHitIntervalIncreaseByShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetHitIntervalIncreaseByShoot");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Shoot::GetHitIntervalCountBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetHitIntervalCountBase");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetFaceToTargetAngleLimitCanFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetFaceToTargetAngleLimitCanFire");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Shoot::GetEnabledTransfterHitBetterPart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetEnabledTransfterHitBetterPart");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Shoot::GetCrouchHeadTopZLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetCrouchHeadTopZLocation");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Shoot::GetCountIfHitHeadTransferToOther()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetCountIfHitHeadTransferToOther");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIPropertyComponent_Shoot::GetCountIfHitChestTransferToOther()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetCountIfHitChestTransferToOther");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Shoot::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Shoot", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Smart
EAIProfileType UNPCAIPropertyComponent_Smart::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Smart", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Sound
float UNPCAIPropertyComponent_Sound::GetSelfYellCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Sound", "GetSelfYellCD");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UNPCAIPropertyComponent_Sound::GetDataTableOfAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Sound", "GetDataTableOfAI");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Sound::GetAreaYellCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Sound", "GetAreaYellCD");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Sound::GetAIVoiceRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Sound", "GetAIVoiceRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Sound::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Sound", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Strategy
EAIProfileType UNPCAIPropertyComponent_Strategy::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Strategy", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Tactic
EAIProfileType UNPCAIPropertyComponent_Tactic::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Tactic", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIPropertyComponent_Weapon
bool UNPCAIPropertyComponent_Weapon::IsShouldImmediatelyGiveEquipItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "IsShouldImmediatelyGiveEquipItem");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Weapon::IsCanUseTacticalPistol()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "IsCanUseTacticalPistol");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UNPCAIPropertyComponent_Weapon::GetWeaponTorrBodyBoneName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetWeaponTorrBodyBoneName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetWeaponBaseSpread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetWeaponBaseSpread");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetWeaponBaseRecoil()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetWeaponBaseRecoil");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIPropertyComponent_Weapon::GetShouldCheckTacticalPistolStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetShouldCheckTacticalPistolStatus");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetReloadMinPercentage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetReloadMinPercentage");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetReloadMaxPercentage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetReloadMaxPercentage");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetMinFillBulletTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetMinFillBulletTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UNPCAIPropertyComponent_Weapon::GetMeleeWeaponID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetMeleeWeaponID");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UNPCAIPropertyComponent_Weapon::GetLocalEquipID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetLocalEquipID");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetHipShootSpread(int32_t ShootCount, bool bMoving, bool bSprinting, bool bJumping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetHipShootSpread");
    struct
    {
        int32_t ShootCount;
        bool bMoving;
        bool bSprinting;
        bool bJumping;
        float ReturnValue;
    } Parms{};
    Parms.ShootCount = (int32_t)ShootCount;
    Parms.bMoving = (bool)bMoving;
    Parms.bSprinting = (bool)bSprinting;
    Parms.bJumping = (bool)bJumping;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetGunShieldSphereRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetGunShieldSphereRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIPropertyComponent_Weapon::GetGunShieldPositionOffset(struct ACharacter* Character, EAIPose AIPose, EAILeanType AILeanType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetGunShieldPositionOffset");
    struct
    {
        struct ACharacter* Character;
        enum EAIPose AIPose;
        enum EAILeanType AILeanType;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.AIPose = (enum EAIPose)AIPose;
    Parms.AILeanType = (enum EAILeanType)AILeanType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIPropertyComponent_Weapon::GetGunShieldDistFromBody()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetGunShieldDistFromBody");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIProfileType UNPCAIPropertyComponent_Weapon::GetAIProfileType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIPropertyComponent_Weapon", "GetAIProfileType");
    struct
    {
        enum EAIProfileType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIQueryRoundEnvironmentAsyncTask
void UNPCAIQueryRoundEnvironmentAsyncTask::ExecuteTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIQueryRoundEnvironmentAsyncTask", "ExecuteTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAIQueryRoundEnvironmentAsyncTask::CheckCanUseMemoryData(struct AActor* Pawn, const struct FVector& EnemyLocation, struct FNPCAIQueryRoundEnvironmentResult& OutResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIQueryRoundEnvironmentAsyncTask", "CheckCanUseMemoryData");
    struct
    {
        struct AActor* Pawn;
        struct FVector EnemyLocation;
        struct FNPCAIQueryRoundEnvironmentResult OutResult;
        bool ReturnValue;
    } Parms{};
    Parms.Pawn = (struct AActor*)Pawn;
    Parms.EnemyLocation = (struct FVector)EnemyLocation;
    this->ProcessEvent(Func, &Parms);
    OutResult = Parms.OutResult;
    return Parms.ReturnValue;
}

struct UNPCAIQueryRoundEnvironmentAsyncTask* UNPCAIQueryRoundEnvironmentAsyncTask::AIQueryRoundEnvironment(struct AActor* Pawn, struct AActor* EnemyPawn, float LRDistance, float FBDistance, bool bCheckLRDefense, bool bCheckLRAttack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIQueryRoundEnvironmentAsyncTask", "AIQueryRoundEnvironment");
    struct
    {
        struct AActor* Pawn;
        struct AActor* EnemyPawn;
        float LRDistance;
        float FBDistance;
        bool bCheckLRDefense;
        bool bCheckLRAttack;
        struct UNPCAIQueryRoundEnvironmentAsyncTask* ReturnValue;
    } Parms{};
    Parms.Pawn = (struct AActor*)Pawn;
    Parms.EnemyPawn = (struct AActor*)EnemyPawn;
    Parms.LRDistance = (float)LRDistance;
    Parms.FBDistance = (float)FBDistance;
    Parms.bCheckLRDefense = (bool)bCheckLRDefense;
    Parms.bCheckLRAttack = (bool)bCheckLRAttack;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCAIRecoilInterface
void INPCAIRecoilInterface::UpdatePressureWeaponPower(float HitRate, bool bNextHit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "UpdatePressureWeaponPower");
    struct
    {
        float HitRate;
        bool bNextHit;
    } Parms{};
    Parms.HitRate = (float)HitRate;
    Parms.bNextHit = (bool)bNextHit;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIRecoilInterface::SetExactAimingPoint(const struct FVector& AimingPoint, float TurnTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "SetExactAimingPoint");
    struct
    {
        struct FVector AimingPoint;
        float TurnTime;
    } Parms{};
    Parms.AimingPoint = (struct FVector)AimingPoint;
    Parms.TurnTime = (float)TurnTime;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIRecoilInterface::SetEnabledAIRecoilControl(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "SetEnabledAIRecoilControl");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIRecoilInterface::SetDimAimingPoint(const struct FVector& DimAimingPoint, float TurnTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "SetDimAimingPoint");
    struct
    {
        struct FVector DimAimingPoint;
        float TurnTime;
    } Parms{};
    Parms.DimAimingPoint = (struct FVector)DimAimingPoint;
    Parms.TurnTime = (float)TurnTime;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIRecoilInterface::SetAIRLModifyViewRotation(const struct FRotator& ModifyRotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "SetAIRLModifyViewRotation");
    struct
    {
        struct FRotator ModifyRotator;
    } Parms{};
    Parms.ModifyRotator = (struct FRotator)ModifyRotator;
    this->ProcessEvent(Func, &Parms);
}

float INPCAIRecoilInterface::Recoil(int32_t CurrentShotCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "Recoil");
    struct
    {
        int32_t CurrentShotCount;
        float ReturnValue;
    } Parms{};
    Parms.CurrentShotCount = (int32_t)CurrentShotCount;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIRecoilInterface::LosingRecoil(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "LosingRecoil");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

bool INPCAIRecoilInterface::IsInPressureWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "IsInPressureWeapon");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCAIRecoilInterface::GetRecoilOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRecoilInterface", "GetRecoilOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCAIRLAgentComponentInterface
void INPCAIRLAgentComponentInterface::TestChangeRLMode(uint8_t TragetRLMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRLAgentComponentInterface", "TestChangeRLMode");
    struct
    {
        uint8_t TragetRLMode;
    } Parms{};
    Parms.TragetRLMode = (uint8_t)TragetRLMode;
    this->ProcessEvent(Func, &Parms);
}

bool INPCAIRLAgentComponentInterface::IsAIRLFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRLAgentComponentInterface", "IsAIRLFire");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIRLAgentComponentInterface::IsAIRLActionReload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIRLAgentComponentInterface", "IsAIRLActionReload");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAISense_ComingExplosion
void UNPCAISense_ComingExplosion::ReportComingExplosionEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Damage, struct AActor* Instigator, float MaxRange, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISense_ComingExplosion", "ReportComingExplosionEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector NoiseLocation;
        float Damage;
        struct AActor* Instigator;
        float MaxRange;
        struct FName Tag;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.NoiseLocation = (struct FVector)NoiseLocation;
    Parms.Damage = (float)Damage;
    Parms.Instigator = (struct AActor*)Instigator;
    Parms.MaxRange = (float)MaxRange;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UNPCAISense_Damage
void UNPCAISense_Damage::ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISense_Damage", "ReportDamageEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* DamagedActor;
        struct AActor* Instigator;
        float DamageAmount;
        struct FVector EventLocation;
        struct FVector HitLocation;
        struct FName Tag;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.DamagedActor = (struct AActor*)DamagedActor;
    Parms.Instigator = (struct AActor*)Instigator;
    Parms.DamageAmount = (float)DamageAmount;
    Parms.EventLocation = (struct FVector)EventLocation;
    Parms.HitLocation = (struct FVector)HitLocation;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISense_Damage::IsDamageStimulus(const struct FAIStimulus& Stimulus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISense_Damage", "IsDamageStimulus");
    struct
    {
        struct FAIStimulus Stimulus;
        bool ReturnValue;
    } Parms{};
    Parms.Stimulus = (struct FAIStimulus)Stimulus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCAISenseSourceInterface
EAISenseSourceType INPCAISenseSourceInterface::GetAISenseSourceType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAISenseSourceInterface", "GetAISenseSourceType");
    struct
    {
        enum EAISenseSourceType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIStatics
bool UNPCAIStatics::VectorsIsClosed(const struct FVector& A, const struct FVector& B, float XYRange, float ZRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "VectorsIsClosed");
    struct
    {
        struct FVector A;
        struct FVector B;
        float XYRange;
        float ZRange;
        bool ReturnValue;
    } Parms{};
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.XYRange = (float)XYRange;
    Parms.ZRange = (float)ZRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::VectorClockwiseAngleR(const struct FVector& A, const struct FVector& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "VectorClockwiseAngleR");
    struct
    {
        struct FVector A;
        struct FVector B;
        float ReturnValue;
    } Parms{};
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::VectorAngleR(const struct FVector& A, const struct FVector& B, bool bDoNomalize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "VectorAngleR");
    struct
    {
        struct FVector A;
        struct FVector B;
        bool bDoNomalize;
        float ReturnValue;
    } Parms{};
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.bDoNomalize = (bool)bDoNomalize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::VectorAngleIsClockwise(const struct FVector& A, const struct FVector& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "VectorAngleIsClockwise");
    struct
    {
        struct FVector A;
        struct FVector B;
        bool ReturnValue;
    } Parms{};
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::VectorAngleD(const struct FVector& A, const struct FVector& B, bool bDoNomalize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "VectorAngleD");
    struct
    {
        struct FVector A;
        struct FVector B;
        bool bDoNomalize;
        float ReturnValue;
    } Parms{};
    Parms.A = (struct FVector)A;
    Parms.B = (struct FVector)B;
    Parms.bDoNomalize = (bool)bDoNomalize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::UnProne(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "UnProne");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::UnCrouch(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "UnCrouch");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UNPCAIStatics::TakeDamage(struct AActor* Actor, float Damage, const struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "TakeDamage");
    struct
    {
        struct AActor* Actor;
        float Damage;
        struct FDamageEvent DamageEvent;
        struct AController* EventInstigator;
        struct AActor* DamageCauser;
        float ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Damage = (float)Damage;
    Parms.DamageEvent = (struct FDamageEvent)DamageEvent;
    Parms.EventInstigator = (struct AController*)EventInstigator;
    Parms.DamageCauser = (struct AActor*)DamageCauser;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::StopToTakeCover(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "StopToTakeCover");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::StopActiveMovement(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "StopActiveMovement");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct AActor* UNPCAIStatics::SpawnAnyActorInEditor(struct UObject* WorldContext, struct AActor* ActorClass, struct FTransform InTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SpawnAnyActorInEditor");
    struct
    {
        struct UObject* WorldContext;
        struct AActor* ActorClass;
        struct FTransform InTransform;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.InTransform = (struct FTransform)InTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::SortIntArraySelf(struct TArray<int32_t>& InVal, bool bUpped)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SortIntArraySelf");
    struct
    {
        struct TArray<int32_t> InVal;
        bool bUpped;
    } Parms{};
    Parms.bUpped = (bool)bUpped;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InVal = Parms.InVal;
}

void UNPCAIStatics::SortIntArrayCopy(const struct TArray<int32_t>& InVal, struct TArray<int32_t>& out_ref, bool bUpped)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SortIntArrayCopy");
    struct
    {
        struct TArray<int32_t> InVal;
        struct TArray<int32_t> out_ref;
        bool bUpped;
    } Parms{};
    Parms.InVal = (struct TArray<int32_t>)InVal;
    Parms.bUpped = (bool)bUpped;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_ref = Parms.out_ref;
}

void UNPCAIStatics::SortFloatArraySelf(struct TArray<float>& InVal, bool bUpped)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SortFloatArraySelf");
    struct
    {
        struct TArray<float> InVal;
        bool bUpped;
    } Parms{};
    Parms.bUpped = (bool)bUpped;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InVal = Parms.InVal;
}

void UNPCAIStatics::SortFloatArrayCopy(const struct TArray<float>& InVal, struct TArray<float>& out_ref, bool bUpped)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SortFloatArrayCopy");
    struct
    {
        struct TArray<float> InVal;
        struct TArray<float> out_ref;
        bool bUpped;
    } Parms{};
    Parms.InVal = (struct TArray<float>)InVal;
    Parms.bUpped = (bool)bUpped;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_ref = Parms.out_ref;
}

bool UNPCAIStatics::SetShootCountRnage(struct ACharacter* AICharacter, int32_t MinRecalcCount, int32_t MaxRecalcCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SetShootCountRnage");
    struct
    {
        struct ACharacter* AICharacter;
        int32_t MinRecalcCount;
        int32_t MaxRecalcCount;
        bool ReturnValue;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    Parms.MinRecalcCount = (int32_t)MinRecalcCount;
    Parms.MaxRecalcCount = (int32_t)MaxRecalcCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::SetCollisionByFBox(struct UBoxComponent* BoxCollision, const struct FBox& Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SetCollisionByFBox");
    struct
    {
        struct UBoxComponent* BoxCollision;
        struct FBox Box;
    } Parms{};
    Parms.BoxCollision = (struct UBoxComponent*)BoxCollision;
    Parms.Box = (struct FBox)Box;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::SetAIProjectileRatio(struct AActor* InAICharacter, float InResist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SetAIProjectileRatio");
    struct
    {
        struct AActor* InAICharacter;
        float InResist;
    } Parms{};
    Parms.InAICharacter = (struct AActor*)InAICharacter;
    Parms.InResist = (float)InResist;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::SetAIDotRatio(struct AActor* InAICharacter, float InResist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SetAIDotRatio");
    struct
    {
        struct AActor* InAICharacter;
        float InResist;
    } Parms{};
    Parms.InAICharacter = (struct AActor*)InAICharacter;
    Parms.InResist = (float)InResist;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::SetAIBulletRatio(struct AActor* InAICharacter, float InResist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "SetAIBulletRatio");
    struct
    {
        struct AActor* InAICharacter;
        float InResist;
    } Parms{};
    Parms.InAICharacter = (struct AActor*)InAICharacter;
    Parms.InResist = (float)InResist;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVector UNPCAIStatics::RotateOnAngleUp(const struct FVector& InVector, float InAngleDegree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "RotateOnAngleUp");
    struct
    {
        struct FVector InVector;
        float InAngleDegree;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InVector = (struct FVector)InVector;
    Parms.InAngleDegree = (float)InAngleDegree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UNPCAIStatics::RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeedPitch, float InterpSpeedYaw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "RInterpTo");
    struct
    {
        struct FRotator Current;
        struct FRotator Target;
        float DeltaTime;
        float InterpSpeedPitch;
        float InterpSpeedYaw;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Current = (struct FRotator)Current;
    Parms.Target = (struct FRotator)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeedPitch = (float)InterpSpeedPitch;
    Parms.InterpSpeedYaw = (float)InterpSpeedYaw;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UNPCAIStatics::RInterpConstantTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeedPitch, float InterpSpeedYaw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "RInterpConstantTo");
    struct
    {
        struct FRotator Current;
        struct FRotator Target;
        float DeltaTime;
        float InterpSpeedPitch;
        float InterpSpeedYaw;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Current = (struct FRotator)Current;
    Parms.Target = (struct FRotator)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.InterpSpeedPitch = (float)InterpSpeedPitch;
    Parms.InterpSpeedYaw = (float)InterpSpeedYaw;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::RemoveItemsFromVectors(const struct TArray<struct FVector>& inArray, const struct FVector& Location, float XYRange, float ZRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "RemoveItemsFromVectors");
    struct
    {
        struct TArray<struct FVector> inArray;
        struct FVector Location;
        float XYRange;
        float ZRange;
    } Parms{};
    Parms.inArray = (struct TArray<struct FVector>)inArray;
    Parms.Location = (struct FVector)Location;
    Parms.XYRange = (float)XYRange;
    Parms.ZRange = (float)ZRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::RegisterPawnToSenseSource(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "RegisterPawnToSenseSource");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UNPCAIStatics::RandomNormal(float Min, float Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "RandomNormal");
    struct
    {
        float Min;
        float Max;
        float ReturnValue;
    } Parms{};
    Parms.Min = (float)Min;
    Parms.Max = (float)Max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::Prone(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "Prone");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::PrintBTNodeExecuteMessageWithEventName(struct AActor* InActor, struct UBTNode* InNode, struct FString Tag, struct FString Message, bool bLogTime, struct FString FnName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "PrintBTNodeExecuteMessageWithEventName");
    struct
    {
        struct AActor* InActor;
        struct UBTNode* InNode;
        struct FString Tag;
        struct FString Message;
        bool bLogTime;
        struct FString FnName;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InNode = (struct UBTNode*)InNode;
    Parms.Tag = (struct FString)Tag;
    Parms.Message = (struct FString)Message;
    Parms.bLogTime = (bool)bLogTime;
    Parms.FnName = (struct FString)FnName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::PrintBTNodeExecuteMessage(struct AActor* InActor, struct UBTNode* InNode, struct FString Tag, struct FString Message, bool bLogTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "PrintBTNodeExecuteMessage");
    struct
    {
        struct AActor* InActor;
        struct UBTNode* InNode;
        struct FString Tag;
        struct FString Message;
        bool bLogTime;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InNode = (struct UBTNode*)InNode;
    Parms.Tag = (struct FString)Tag;
    Parms.Message = (struct FString)Message;
    Parms.bLogTime = (bool)bLogTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::PrintBPLog(struct FString Content, int32_t Verbosity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "PrintBPLog");
    struct
    {
        struct FString Content;
        int32_t Verbosity;
    } Parms{};
    Parms.Content = (struct FString)Content;
    Parms.Verbosity = (int32_t)Verbosity;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::PlayAISoundByType(struct ACharacter* AICharacter, EAISoundType CurrType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "PlayAISoundByType");
    struct
    {
        struct ACharacter* AICharacter;
        enum EAISoundType CurrType;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    Parms.CurrType = (enum EAISoundType)CurrType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::LogBPEnumDefaultNames(struct UObject* BPEnum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "LogBPEnumDefaultNames");
    struct
    {
        struct UObject* BPEnum;
    } Parms{};
    Parms.BPEnum = (struct UObject*)BPEnum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAIStatics::LineTraceIsHitWithResult(struct UObject* WorldContext, const struct FVector& StartPos, const struct FVector& EndPos, uint8_t TraceChannel, bool bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, bool bIgnoreSelf, struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "LineTraceIsHitWithResult");
    struct
    {
        struct UObject* WorldContext;
        struct FVector StartPos;
        struct FVector EndPos;
        uint8_t TraceChannel;
        bool bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        bool bIgnoreSelf;
        struct FHitResult HitResult;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.StartPos = (struct FVector)StartPos;
    Parms.EndPos = (struct FVector)EndPos;
    Parms.TraceChannel = (uint8_t)TraceChannel;
    Parms.bTraceComplex = (bool)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.bIgnoreSelf = (bool)bIgnoreSelf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    HitResult = Parms.HitResult;
    return Parms.ReturnValue;
}

bool UNPCAIStatics::LineTraceIsHitFoliageOrSmoke(struct AActor* AIPawn, const struct FVector& StartPos, const struct FVector& EndPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "LineTraceIsHitFoliageOrSmoke");
    struct
    {
        struct AActor* AIPawn;
        struct FVector StartPos;
        struct FVector EndPos;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.StartPos = (struct FVector)StartPos;
    Parms.EndPos = (struct FVector)EndPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::LineTraceIsHit(struct UObject* WorldContext, const struct FVector& StartPos, const struct FVector& EndPos, uint8_t TraceChannel, bool bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "LineTraceIsHit");
    struct
    {
        struct UObject* WorldContext;
        struct FVector StartPos;
        struct FVector EndPos;
        uint8_t TraceChannel;
        bool bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.StartPos = (struct FVector)StartPos;
    Parms.EndPos = (struct FVector)EndPos;
    Parms.TraceChannel = (uint8_t)TraceChannel;
    Parms.bTraceComplex = (bool)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::LineCylinderIntersection(const struct FVector& LineStartPoint, const struct FVector& LineEndPoint, const struct FVector& CylinderCenter, const float& CylinderZExtent, const float& CylinderRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "LineCylinderIntersection");
    struct
    {
        struct FVector LineStartPoint;
        struct FVector LineEndPoint;
        struct FVector CylinderCenter;
        float CylinderZExtent;
        float CylinderRadius;
        bool ReturnValue;
    } Parms{};
    Parms.LineStartPoint = (struct FVector)LineStartPoint;
    Parms.LineEndPoint = (struct FVector)LineEndPoint;
    Parms.CylinderCenter = (struct FVector)CylinderCenter;
    Parms.CylinderZExtent = (float)CylinderZExtent;
    Parms.CylinderRadius = (float)CylinderRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsZombieAICharacter(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsZombieAICharacter");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsVolumeEncompassesPoint(struct AVolume* Volume, const struct FVector& Point, float SphereRadius, float& OutDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsVolumeEncompassesPoint");
    struct
    {
        struct AVolume* Volume;
        struct FVector Point;
        float SphereRadius;
        float OutDistance;
        bool ReturnValue;
    } Parms{};
    Parms.Volume = (struct AVolume*)Volume;
    Parms.Point = (struct FVector)Point;
    Parms.SphereRadius = (float)SphereRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDistance = Parms.OutDistance;
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsVehicleActor(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsVehicleActor");
    struct
    {
        struct AActor* InActor;
        bool ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsValidLocation(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsValidLocation");
    struct
    {
        struct FVector Location;
        bool ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsTeamFriendly(struct AActor* AIPawn, struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsTeamFriendly");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsTeamEnemy(struct AActor* AIPawn, struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsTeamEnemy");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsTeamAlly(struct AActor* AIPawn, struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsTeamAlly");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsTeachingAI(struct AActor* InPawnOrCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsTeachingAI");
    struct
    {
        struct AActor* InPawnOrCtrl;
        bool ReturnValue;
    } Parms{};
    Parms.InPawnOrCtrl = (struct AActor*)InPawnOrCtrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsTargetDead(struct AActor* AIPawn, struct AActor* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsTargetDead");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* TargetPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsTakingCover(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsTakingCover");
    struct
    {
        struct ACharacter* AICharacter;
        bool ReturnValue;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsStandaloneTutorialGame(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsStandaloneTutorialGame");
    struct
    {
        struct UObject* WorldContext;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsSameFrame(float T1, float T2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsSameFrame");
    struct
    {
        float T1;
        float T2;
        bool ReturnValue;
    } Parms{};
    Parms.T1 = (float)T1;
    Parms.T2 = (float)T2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsPMCAI(struct AActor* InPawnOrCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsPMCAI");
    struct
    {
        struct AActor* InPawnOrCtrl;
        bool ReturnValue;
    } Parms{};
    Parms.InPawnOrCtrl = (struct AActor*)InPawnOrCtrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsPlayingAnimation(struct ACharacter* InAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsPlayingAnimation");
    struct
    {
        struct ACharacter* InAI;
        bool ReturnValue;
    } Parms{};
    Parms.InAI = (struct ACharacter*)InAI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsPlayerTeammateAI(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsPlayerTeammateAI");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsNPCBoss(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsNPCBoss");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsNPCAIMakeNoiseEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsNPCAIMakeNoiseEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsNPCAICharacter(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsNPCAICharacter");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsNormalScav(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsNormalScav");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsMoving(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsMoving");
    struct
    {
        struct ACharacter* Character;
        bool ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsLastMoveSuccess(struct ACharacter* InAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsLastMoveSuccess");
    struct
    {
        struct ACharacter* InAI;
        bool ReturnValue;
    } Parms{};
    Parms.InAI = (struct ACharacter*)InAI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsInGrass(struct ACharacter* InCharacter, struct ANPCAIPerceptionAssistActor* PerceptionAssist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsInGrass");
    struct
    {
        struct ACharacter* InCharacter;
        struct ANPCAIPerceptionAssistActor* PerceptionAssist;
        bool ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct ACharacter*)InCharacter;
    Parms.PerceptionAssist = (struct ANPCAIPerceptionAssistActor*)PerceptionAssist;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsInAbilityState(struct ACharacter* AIPawn, const struct FName& GameplayTagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsInAbilityState");
    struct
    {
        struct ACharacter* AIPawn;
        struct FName GameplayTagName;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.GameplayTagName = (struct FName)GameplayTagName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsFacingTargetPoint(struct AActor* AIPawn, const struct FVector& ToPoint, float AngleDLimit, uint8_t UseCtrlROrActorR)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsFacingTargetPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector ToPoint;
        float AngleDLimit;
        uint8_t UseCtrlROrActorR;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.ToPoint = (struct FVector)ToPoint;
    Parms.AngleDLimit = (float)AngleDLimit;
    Parms.UseCtrlROrActorR = (uint8_t)UseCtrlROrActorR;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsEnemy(struct AActor* AIPawn, struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsEnemy");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsEnabledBTNodeShared()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsEnabledBTNodeShared");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsEnabledBTNodeOptimize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsEnabledBTNodeOptimize");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsEliteScav(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsEliteScav");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsDroneBroken(struct AActor* InPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsDroneBroken");
    struct
    {
        struct AActor* InPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InPawn = (struct AActor*)InPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsDroneActor(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsDroneActor");
    struct
    {
        struct AActor* InActor;
        bool ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsDead(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsDead");
    struct
    {
        struct AActor* Actor;
        bool ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsBossFollower(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsBossFollower");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsAllyAI(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsAllyAI");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsAIReady(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsAIReady");
    struct
    {
        struct AActor* Actor;
        bool ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsAIInfluenceByWeather()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsAIInfluenceByWeather");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::IsAIActive(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "IsAIActive");
    struct
    {
        struct AActor* Actor;
        bool ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::HasAnyPlayerAround(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "HasAnyPlayerAround");
    struct
    {
        struct AActor* Actor;
        bool ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNPCAIStatics::GetWeaponUseTraceChannel(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetWeaponUseTraceChannel");
    struct
    {
        struct ACharacter* AICharacter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::GetTimeSeconds(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetTimeSeconds");
    struct
    {
        struct UObject* WorldContext;
        float ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UNPCAIStatics::GetTargetViewRotation(struct AActor* AIPawn, struct AActor* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetTargetViewRotation");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* TargetPawn;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* UNPCAIStatics::GetTargetCharacter(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetTargetCharacter");
    struct
    {
        struct AActor* InActor;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ATacticSystemActor* UNPCAIStatics::GetTacticSystemActor(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetTacticSystemActor");
    struct
    {
        struct UObject* WorldContext;
        struct ATacticSystemActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIStatics::GetSingleBodyPartLocation(struct ACharacter* InAICharacter, struct ACharacter* InCheckTarget, EAIBodyPartType InBodyPartType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetSingleBodyPartLocation");
    struct
    {
        struct ACharacter* InAICharacter;
        struct ACharacter* InCheckTarget;
        enum EAIBodyPartType InBodyPartType;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InAICharacter = (struct ACharacter*)InAICharacter;
    Parms.InCheckTarget = (struct ACharacter*)InCheckTarget;
    Parms.InBodyPartType = (enum EAIBodyPartType)InBodyPartType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::GetRandomFoliageTree(struct UObject* WorldContext, const struct FVector& InCenter, struct FVector& OutLocation, struct FVector& OutExtent, float InRadiusScope, float TreeMinHeight, float TreeMaxHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetRandomFoliageTree");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InCenter;
        struct FVector OutLocation;
        struct FVector OutExtent;
        float InRadiusScope;
        float TreeMinHeight;
        float TreeMaxHeight;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadiusScope = (float)InRadiusScope;
    Parms.TreeMinHeight = (float)TreeMinHeight;
    Parms.TreeMaxHeight = (float)TreeMaxHeight;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutLocation = Parms.OutLocation;
    OutExtent = Parms.OutExtent;
    return Parms.ReturnValue;
}

struct ANPCAIPerceptionAssistActor* UNPCAIStatics::GetPerceptionAssistInWorld(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetPerceptionAssistInWorld");
    struct
    {
        struct UObject* WorldContext;
        struct ANPCAIPerceptionAssistActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ANPCAIPerceptionAssistActor* UNPCAIStatics::GetPerceptionAssistActor(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetPerceptionAssistActor");
    struct
    {
        struct UObject* WorldContext;
        struct ANPCAIPerceptionAssistActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupRequestController* UNPCAIStatics::GetOrCreateGroupRequestController(struct ACharacter* InAICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetOrCreateGroupRequestController");
    struct
    {
        struct ACharacter* InAICharacter;
        struct UNPCAIGroupRequestController* ReturnValue;
    } Parms{};
    Parms.InAICharacter = (struct ACharacter*)InAICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNPCAIStatics::GetLookSightUseTraceChannel(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetLookSightUseTraceChannel");
    struct
    {
        struct ACharacter* AICharacter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAIStatics::GetLocation(struct AActor* InAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetLocation");
    struct
    {
        struct AActor* InAI;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InAI = (struct AActor*)InAI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ANPCAIHNavActor* UNPCAIStatics::GetHierarchicalNavigation(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetHierarchicalNavigation");
    struct
    {
        struct UObject* WorldContextObject;
        struct ANPCAIHNavActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::GetHealthMax(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetHealthMax");
    struct
    {
        struct AActor* Actor;
        float ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::GetHealth(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetHealth");
    struct
    {
        struct AActor* Actor;
        float ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupRequestController* UNPCAIStatics::GetGroupRequestController(struct ACharacter* InAICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetGroupRequestController");
    struct
    {
        struct ACharacter* InAICharacter;
        struct UNPCAIGroupRequestController* ReturnValue;
    } Parms{};
    Parms.InAICharacter = (struct ACharacter*)InAICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::GetFBoxVertexs2D(const struct FBox& Box, struct TArray<struct FVector2D>& Vertexs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetFBoxVertexs2D");
    struct
    {
        struct FBox Box;
        struct TArray<struct FVector2D> Vertexs;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Vertexs = Parms.Vertexs;
}

void UNPCAIStatics::GetFBoxVertexs(const struct FBox& Box, struct TArray<struct FVector>& Vertexs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetFBoxVertexs");
    struct
    {
        struct FBox Box;
        struct TArray<struct FVector> Vertexs;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Vertexs = Parms.Vertexs;
}

struct UNPCAICoverEnvQueryData* UNPCAIStatics::GetEQSData(struct AActor* AIPawn, int32_t QueryID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetEQSData");
    struct
    {
        struct AActor* AIPawn;
        int32_t QueryID;
        struct UNPCAICoverEnvQueryData* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.QueryID = (int32_t)QueryID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* UNPCAIStatics::GetDroneCharacterOwner(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetDroneCharacterOwner");
    struct
    {
        struct AActor* InActor;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UNPCAIStatics::GetDroneCharacterItemId(struct AActor* InDronePawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetDroneCharacterItemId");
    struct
    {
        struct AActor* InDronePawn;
        int64_t ReturnValue;
    } Parms{};
    Parms.InDronePawn = (struct AActor*)InDronePawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::GetCurrentWeatherAIKnown(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetCurrentWeatherAIKnown");
    struct
    {
        struct AActor* AIPawn;
        float ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::GetCurrentFogDensity(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetCurrentFogDensity");
    struct
    {
        struct UObject* WorldContext;
        float ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACoverSystemActor* UNPCAIStatics::GetCoverSystemActor(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetCoverSystemActor");
    struct
    {
        struct UObject* WorldContext;
        struct ACoverSystemActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::GetBodyPartEndurace(struct AActor* InAIPawn, struct AActor* InTargetPawn, EAIBodyPartType InBodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetBodyPartEndurace");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InTargetPawn;
        enum EAIBodyPartType InBodyPart;
        float ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::GetAngOfNormazedVectors(const struct FVector& v1, const struct FVector& v2, bool ToAngle, bool ToAbs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAngOfNormazedVectors");
    struct
    {
        struct FVector v1;
        struct FVector v2;
        bool ToAngle;
        bool ToAbs;
        float ReturnValue;
    } Parms{};
    Parms.v1 = (struct FVector)v1;
    Parms.v2 = (struct FVector)v2;
    Parms.ToAngle = (bool)ToAngle;
    Parms.ToAbs = (bool)ToAbs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISGDoorManager* UNPCAIStatics::GetAISGDoorManager(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAISGDoorManager");
    struct
    {
        struct UObject* WorldContext;
        struct UAISGDoorManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISceneEventsTriggerManager* UNPCAIStatics::GetAISceneEventsTriggerManager(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAISceneEventsTriggerManager");
    struct
    {
        struct UObject* WorldContext;
        struct UAISceneEventsTriggerManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIPropertyComponent* UNPCAIStatics::GetAIPropertyComponentByClass(struct AAIController* InAIController, struct UNPCAIPropertyComponent* InPropertyClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAIPropertyComponentByClass");
    struct
    {
        struct AAIController* InAIController;
        struct UNPCAIPropertyComponent* InPropertyClass;
        struct UNPCAIPropertyComponent* ReturnValue;
    } Parms{};
    Parms.InAIController = (struct AAIController*)InAIController;
    Parms.InPropertyClass = (struct UNPCAIPropertyComponent*)InPropertyClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ANPCAIPerceptionDynamicActor* UNPCAIStatics::GetAIPerceptionDynamicActor(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAIPerceptionDynamicActor");
    struct
    {
        struct UObject* WorldContext;
        struct ANPCAIPerceptionDynamicActor* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIMainType UNPCAIStatics::GetAIMainType(struct AActor* InPawnOrCtrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAIMainType");
    struct
    {
        struct AActor* InPawnOrCtrl;
        enum EAIMainType ReturnValue;
    } Parms{};
    Parms.InPawnOrCtrl = (struct AActor*)InPawnOrCtrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCAIJobType UNPCAIStatics::GetAIJobType(struct AActor* InPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAIJobType");
    struct
    {
        struct AActor* InPawn;
        enum ENPCAIJobType ReturnValue;
    } Parms{};
    Parms.InPawn = (struct AActor*)InPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIController* UNPCAIStatics::GetAIController(struct AActor* InAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAIController");
    struct
    {
        struct AActor* InAI;
        struct AAIController* ReturnValue;
    } Parms{};
    Parms.InAI = (struct AActor*)InAI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* UNPCAIStatics::GetAICharacter(struct AActor* InAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAICharacter");
    struct
    {
        struct AActor* InAI;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.InAI = (struct AActor*)InAI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIBodyPartType UNPCAIStatics::GetAIBodyPartTypeByHitGroupType(struct AActor* InAIPawn, uint8_t HitGroupType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "GetAIBodyPartTypeByHitGroupType");
    struct
    {
        struct AActor* InAIPawn;
        uint8_t HitGroupType;
        enum EAIBodyPartType ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.HitGroupType = (uint8_t)HitGroupType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::FindNearestFromVectors(const struct TArray<struct FVector>& inArray, const struct FVector& Location, struct FVector& OutPoint, float& OutMinDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "FindNearestFromVectors");
    struct
    {
        struct TArray<struct FVector> inArray;
        struct FVector Location;
        struct FVector OutPoint;
        float OutMinDistance;
        bool ReturnValue;
    } Parms{};
    Parms.inArray = (struct TArray<struct FVector>)inArray;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPoint = Parms.OutPoint;
    OutMinDistance = Parms.OutMinDistance;
    return Parms.ReturnValue;
}

void UNPCAIStatics::Crouch(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "Crouch");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UNPCAIStatics::CreateSimpleUniqueID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "CreateSimpleUniqueID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIStatics::CreateRandom(float Value, float Fraction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "CreateRandom");
    struct
    {
        float Value;
        float Fraction;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    Parms.Fraction = (float)Fraction;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAIStatics::CanbeRevived(struct AActor* InAIPawn, struct ACharacter* TargetChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "CanbeRevived");
    struct
    {
        struct AActor* InAIPawn;
        struct ACharacter* TargetChar;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.TargetChar = (struct ACharacter*)TargetChar;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAIStatics::CalculateCharacterInLightValue(struct ACharacter* InAICharacter, struct ACharacter* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "CalculateCharacterInLightValue");
    struct
    {
        struct ACharacter* InAICharacter;
        struct ACharacter* InTarget;
        int32_t ReturnValue;
    } Parms{};
    Parms.InAICharacter = (struct ACharacter*)InAICharacter;
    Parms.InTarget = (struct ACharacter*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UNPCAIStatics::BoxMullerNormal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "BoxMullerNormal");
    struct
    {
        double ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double UNPCAIStatics::BoxMuller(double Mean, double StdDev)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "BoxMuller");
    struct
    {
        double Mean;
        double StdDev;
        double ReturnValue;
    } Parms{};
    Parms.Mean = (double)Mean;
    Parms.StdDev = (double)StdDev;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::BoardcastDrawDebugLine(struct AAIController* InAIController, int32_t InDrawID, struct FVector InStart, struct FVector InEnd, struct FColor InColor, float InTime, float InThickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "BoardcastDrawDebugLine");
    struct
    {
        struct AAIController* InAIController;
        int32_t InDrawID;
        struct FVector InStart;
        struct FVector InEnd;
        struct FColor InColor;
        float InTime;
        float InThickness;
    } Parms{};
    Parms.InAIController = (struct AAIController*)InAIController;
    Parms.InDrawID = (int32_t)InDrawID;
    Parms.InStart = (struct FVector)InStart;
    Parms.InEnd = (struct FVector)InEnd;
    Parms.InColor = (struct FColor)InColor;
    Parms.InTime = (float)InTime;
    Parms.InThickness = (float)InThickness;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::BeginToTakeCoverCrouch(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "BeginToTakeCoverCrouch");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::BeginToTakeCover(struct ACharacter* AICharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "BeginToTakeCover");
    struct
    {
        struct ACharacter* AICharacter;
    } Parms{};
    Parms.AICharacter = (struct ACharacter*)AICharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UNPCAIStatics::AngleNormalized360(const float& Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "AngleNormalized360");
    struct
    {
        float Value;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIStatics::AIDebugPrintSingleMessage(struct UObject* WorldContext, struct FString Tag, struct FString Content, bool ToScreen, bool ToLog, bool ToShippingLog, struct FLinearColor LinearColor, float Duration, struct AActor* AIActor, bool bIsErrorLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "AIDebugPrintSingleMessage");
    struct
    {
        struct UObject* WorldContext;
        struct FString Tag;
        struct FString Content;
        bool ToScreen;
        bool ToLog;
        bool ToShippingLog;
        struct FLinearColor LinearColor;
        float Duration;
        struct AActor* AIActor;
        bool bIsErrorLog;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.Tag = (struct FString)Tag;
    Parms.Content = (struct FString)Content;
    Parms.ToScreen = (bool)ToScreen;
    Parms.ToLog = (bool)ToLog;
    Parms.ToShippingLog = (bool)ToShippingLog;
    Parms.LinearColor = (struct FLinearColor)LinearColor;
    Parms.Duration = (float)Duration;
    Parms.AIActor = (struct AActor*)AIActor;
    Parms.bIsErrorLog = (bool)bIsErrorLog;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAIStatics::AIDebugPrintMultiMessage(struct UObject* WorldContext, struct FString Tag, const struct TArray<struct FString>& Content, bool ToScreen, bool ToLog, bool ToShippingLog, struct FLinearColor LinearColor, float Duration, struct AActor* AIActor, bool bIsErrorLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIStatics", "AIDebugPrintMultiMessage");
    struct
    {
        struct UObject* WorldContext;
        struct FString Tag;
        struct TArray<struct FString> Content;
        bool ToScreen;
        bool ToLog;
        bool ToShippingLog;
        struct FLinearColor LinearColor;
        float Duration;
        struct AActor* AIActor;
        bool bIsErrorLog;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.Tag = (struct FString)Tag;
    Parms.Content = (struct TArray<struct FString>)Content;
    Parms.ToScreen = (bool)ToScreen;
    Parms.ToLog = (bool)ToLog;
    Parms.ToShippingLog = (bool)ToShippingLog;
    Parms.LinearColor = (struct FLinearColor)LinearColor;
    Parms.Duration = (float)Duration;
    Parms.AIActor = (struct AActor*)AIActor;
    Parms.bIsErrorLog = (bool)bIsErrorLog;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// INPCAIStaticsInterface
void INPCAIStaticsInterface::SetCharacterSignificanceImportant(struct ACharacter* TargetCharacter, bool IsImportant)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "SetCharacterSignificanceImportant");
    struct
    {
        struct ACharacter* TargetCharacter;
        bool IsImportant;
    } Parms{};
    Parms.TargetCharacter = (struct ACharacter*)TargetCharacter;
    Parms.IsImportant = (bool)IsImportant;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIStaticsInterface::SetAIProjectileRatio(float InRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "SetAIProjectileRatio");
    struct
    {
        float InRatio;
    } Parms{};
    Parms.InRatio = (float)InRatio;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIStaticsInterface::SetAIDotRatio(float InRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "SetAIDotRatio");
    struct
    {
        float InRatio;
    } Parms{};
    Parms.InRatio = (float)InRatio;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIStaticsInterface::SetAIBulletRatio(float InRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "SetAIBulletRatio");
    struct
    {
        float InRatio;
    } Parms{};
    Parms.InRatio = (float)InRatio;
    this->ProcessEvent(Func, &Parms);
}

bool INPCAIStaticsInterface::ModifyCurrentEndurance(float MaxRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "ModifyCurrentEndurance");
    struct
    {
        float MaxRatio;
        bool ReturnValue;
    } Parms{};
    Parms.MaxRatio = (float)MaxRatio;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsVehicleRushMe(struct AActor* InVehicle, float Radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsVehicleRushMe");
    struct
    {
        struct AActor* InVehicle;
        float Radius;
        bool ReturnValue;
    } Parms{};
    Parms.InVehicle = (struct AActor*)InVehicle;
    Parms.Radius = (float)Radius;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsTeamFriendly(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsTeamFriendly");
    struct
    {
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsTeamEnemy(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsTeamEnemy");
    struct
    {
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsTeamAlly(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsTeamAlly");
    struct
    {
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsTargetInGhost(struct AActor* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsTargetInGhost");
    struct
    {
        struct AActor* TargetPawn;
        bool ReturnValue;
    } Parms{};
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsTacticalPistolStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsTacticalPistolStatus");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsScavPlayer(struct ACharacter* InPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsScavPlayer");
    struct
    {
        struct ACharacter* InPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InPawn = (struct ACharacter*)InPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsInTransitionAnim(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsInTransitionAnim");
    struct
    {
        struct ACharacter* Character;
        bool ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsInGhost()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsInGhost");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsInAbilityState(struct ACharacter* InPawn, const struct FName& GameplayTagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsInAbilityState");
    struct
    {
        struct ACharacter* InPawn;
        struct FName GameplayTagName;
        bool ReturnValue;
    } Parms{};
    Parms.InPawn = (struct ACharacter*)InPawn;
    Parms.GameplayTagName = (struct FName)GameplayTagName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsFriendlyFactionType(uint8_t RelationType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsFriendlyFactionType");
    struct
    {
        uint8_t RelationType;
        bool ReturnValue;
    } Parms{};
    Parms.RelationType = (uint8_t)RelationType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsEnemyMoveableArmorActor(struct ACharacter* TargetCharacter, struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsEnemyMoveableArmorActor");
    struct
    {
        struct ACharacter* TargetCharacter;
        struct AActor* InActor;
        bool ReturnValue;
    } Parms{};
    Parms.TargetCharacter = (struct ACharacter*)TargetCharacter;
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsEnemyCanProtected(struct AActor* InTarget, EAIBodyPartType InBodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsEnemyCanProtected");
    struct
    {
        struct AActor* InTarget;
        enum EAIBodyPartType InBodyPart;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsEnemyArmorCanProtected(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsEnemyArmorCanProtected");
    struct
    {
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsCharacterInVehicle(struct ACharacter* TargetCharacter, struct AActor* InVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsCharacterInVehicle");
    struct
    {
        struct ACharacter* TargetCharacter;
        struct AActor* InVehicle;
        bool ReturnValue;
    } Parms{};
    Parms.TargetCharacter = (struct ACharacter*)TargetCharacter;
    Parms.InVehicle = (struct AActor*)InVehicle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsCanSeeOtherByUniqueIDUsedPathPoint(int32_t OtherUniqueID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsCanSeeOtherByUniqueIDUsedPathPoint");
    struct
    {
        int32_t OtherUniqueID;
        bool ReturnValue;
    } Parms{};
    Parms.OtherUniqueID = (int32_t)OtherUniqueID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsBulletPenetrationActor(struct AActor* InCheckActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsBulletPenetrationActor");
    struct
    {
        struct AActor* InCheckActor;
        bool ReturnValue;
    } Parms{};
    Parms.InCheckActor = (struct AActor*)InCheckActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsAIReady(struct AActor* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsAIReady");
    struct
    {
        struct AActor* TargetPawn;
        bool ReturnValue;
    } Parms{};
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::IsAIActive(struct AActor* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "IsAIActive");
    struct
    {
        struct AActor* TargetPawn;
        bool ReturnValue;
    } Parms{};
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIStaticsInterface::InitAITrackLOGTemplateStr(EAITrackLOGType LogType, struct FString& TemplateStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "InitAITrackLOGTemplateStr");
    struct
    {
        enum EAITrackLOGType LogType;
        struct FString TemplateStr;
    } Parms{};
    Parms.LogType = (enum EAITrackLOGType)LogType;
    this->ProcessEvent(Func, &Parms);
    TemplateStr = Parms.TemplateStr;
}

bool INPCAIStaticsInterface::HasEnabledMovableArmorActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "HasEnabledMovableArmorActors");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator INPCAIStaticsInterface::GetViewRotation(struct AActor* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetViewRotation");
    struct
    {
        struct AActor* InCharacter;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct AActor*)InCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* INPCAIStaticsInterface::GetVehicleDriver(struct AActor* InVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetVehicleDriver");
    struct
    {
        struct AActor* InVehicle;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.InVehicle = (struct AActor*)InVehicle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* INPCAIStaticsInterface::GetVehicleByDriverOrPassenger(struct ACharacter* CharacterInVehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetVehicleByDriverOrPassenger");
    struct
    {
        struct ACharacter* CharacterInVehicle;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.CharacterInVehicle = (struct ACharacter*)CharacterInVehicle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIStaticsInterface::GetTargetBodyPartEnduranceRatios(struct AActor* InTarget, struct TArray<float>& OutEnduranceRatios)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetTargetBodyPartEnduranceRatios");
    struct
    {
        struct AActor* InTarget;
        struct TArray<float> OutEnduranceRatios;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    OutEnduranceRatios = Parms.OutEnduranceRatios;
}

float INPCAIStaticsInterface::GetSightScaleToTarget(struct ACharacter* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetSightScaleToTarget");
    struct
    {
        struct ACharacter* InTarget;
        float ReturnValue;
    } Parms{};
    Parms.InTarget = (struct ACharacter*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* INPCAIStaticsInterface::GetProtectedArmor(struct AActor* InTargetPawn, EAIBodyPartType InBodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetProtectedArmor");
    struct
    {
        struct AActor* InTargetPawn;
        enum EAIBodyPartType InBodyPart;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCAIStaticsInterface::GetPawnViewLocationIfStand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetPawnViewLocationIfStand");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCAIStaticsInterface::GetPawnViewLocationIfCrouch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetPawnViewLocationIfCrouch");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIStaticsInterface::GetNearestPlayerList(float InRadius, bool InSight, struct TArray<struct AActor*>& PlayerList, uint8_t TeamType, EAISenseBehaviorType Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetNearestPlayerList");
    struct
    {
        float InRadius;
        bool InSight;
        struct TArray<struct AActor*> PlayerList;
        uint8_t TeamType;
        enum EAISenseBehaviorType Action;
    } Parms{};
    Parms.InRadius = (float)InRadius;
    Parms.InSight = (bool)InSight;
    Parms.TeamType = (uint8_t)TeamType;
    Parms.Action = (enum EAISenseBehaviorType)Action;
    this->ProcessEvent(Func, &Parms);
    PlayerList = Parms.PlayerList;
}

struct AActor* INPCAIStaticsInterface::GetNearestPlayer(float InRadius, bool InSight, uint8_t TeamType, EAISenseBehaviorType Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetNearestPlayer");
    struct
    {
        float InRadius;
        bool InSight;
        uint8_t TeamType;
        enum EAISenseBehaviorType Action;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InRadius = (float)InRadius;
    Parms.InSight = (bool)InSight;
    Parms.TeamType = (uint8_t)TeamType;
    Parms.Action = (enum EAISenseBehaviorType)Action;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIStaticsInterface::GetHearingScaleToTarget(struct ACharacter* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetHearingScaleToTarget");
    struct
    {
        struct ACharacter* InTarget;
        float ReturnValue;
    } Parms{};
    Parms.InTarget = (struct ACharacter*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* INPCAIStaticsInterface::GetFootSounderThrower(struct AActor* Projectile, bool& OutbAttractAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetFootSounderThrower");
    struct
    {
        struct AActor* Projectile;
        bool OutbAttractAI;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Projectile = (struct AActor*)Projectile;
    this->ProcessEvent(Func, &Parms);
    OutbAttractAI = Parms.OutbAttractAI;
    return Parms.ReturnValue;
}

uint8_t INPCAIStaticsInterface::GetFactionRelationTypeWithTarget(struct ACharacter* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetFactionRelationTypeWithTarget");
    struct
    {
        struct ACharacter* TargetPawn;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetPawn = (struct ACharacter*)TargetPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAICoverEnvQueryData* INPCAIStaticsInterface::GetEQSData(int32_t QueryID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetEQSData");
    struct
    {
        int32_t QueryID;
        struct UNPCAICoverEnvQueryData* ReturnValue;
    } Parms{};
    Parms.QueryID = (int32_t)QueryID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIStaticsInterface::GetEnabledMovableArmorActors(struct TArray<struct AActor*>& OutMovableArmorActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetEnabledMovableArmorActors");
    struct
    {
        struct TArray<struct AActor*> OutMovableArmorActors;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutMovableArmorActors = Parms.OutMovableArmorActors;
}

float INPCAIStaticsInterface::GetCurrentWeather()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetCurrentWeather");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIStaticsInterface::GetCurrentWeaponZoomInTimes(struct AActor* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetCurrentWeaponZoomInTimes");
    struct
    {
        struct AActor* TargetPawn;
        float ReturnValue;
    } Parms{};
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAIStaticsInterface::GetCurrentWeaponPenetrationLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetCurrentWeaponPenetrationLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIStaticsInterface::GetBulletEstimateDamageValue(struct AActor* InEnemyPawn, EAIBodyPartType InBodyPart, bool bOutArmorProected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetBulletEstimateDamageValue");
    struct
    {
        struct AActor* InEnemyPawn;
        enum EAIBodyPartType InBodyPart;
        bool bOutArmorProected;
        float ReturnValue;
    } Parms{};
    Parms.InEnemyPawn = (struct AActor*)InEnemyPawn;
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    Parms.bOutArmorProected = (bool)bOutArmorProected;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCAIStaticsInterface::GetBulletDamageValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetBulletDamageValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::GetBodyPartInArmorProtected(struct AActor* InTarget, struct TArray<EAIBodyPartType>& OutBodyParts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetBodyPartInArmorProtected");
    struct
    {
        struct AActor* InTarget;
        struct TArray<EAIBodyPartType> OutBodyParts;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    OutBodyParts = Parms.OutBodyParts;
    return Parms.ReturnValue;
}

float INPCAIStaticsInterface::GetBodyPartEndurace(struct AActor* InTarget, EAIBodyPartType InBodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetBodyPartEndurace");
    struct
    {
        struct AActor* InTarget;
        enum EAIBodyPartType InBodyPart;
        float ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAIStaticsInterface::GetAllPlayers(struct TArray<struct AActor*>& PlayerList, bool bContainsRemoteActor, bool InSight, uint8_t TeamType, EAISenseBehaviorType Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAllPlayers");
    struct
    {
        struct TArray<struct AActor*> PlayerList;
        bool bContainsRemoteActor;
        bool InSight;
        uint8_t TeamType;
        enum EAISenseBehaviorType Action;
    } Parms{};
    Parms.bContainsRemoteActor = (bool)bContainsRemoteActor;
    Parms.InSight = (bool)InSight;
    Parms.TeamType = (uint8_t)TeamType;
    Parms.Action = (enum EAISenseBehaviorType)Action;
    this->ProcessEvent(Func, &Parms);
    PlayerList = Parms.PlayerList;
}

void INPCAIStaticsInterface::GetAllAICharactersInWorld(struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAllAICharactersInWorld");
    struct
    {
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void INPCAIStaticsInterface::GetAliveTeamMembers(struct ACharacter* Player, struct TArray<struct ACharacter*>& OutTeamMembers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAliveTeamMembers");
    struct
    {
        struct ACharacter* Player;
        struct TArray<struct ACharacter*> OutTeamMembers;
    } Parms{};
    Parms.Player = (struct ACharacter*)Player;
    this->ProcessEvent(Func, &Parms);
    OutTeamMembers = Parms.OutTeamMembers;
}

int64_t INPCAIStaticsInterface::GetAIPathGroupID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAIPathGroupID");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIMainType INPCAIStaticsInterface::GetAIMainType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAIMainType");
    struct
    {
        enum EAIMainType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCAIJobType INPCAIStaticsInterface::GetAIJobType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAIJobType");
    struct
    {
        enum ENPCAIJobType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t INPCAIStaticsInterface::GetAIID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAIID");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIBodyPartType INPCAIStaticsInterface::GetAIBodyPartTypeByHitGroupType(uint8_t HitGroupType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "GetAIBodyPartTypeByHitGroupType");
    struct
    {
        uint8_t HitGroupType;
        enum EAIBodyPartType ReturnValue;
    } Parms{};
    Parms.HitGroupType = (uint8_t)HitGroupType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::CheckIsVisibilityRelevancyWithOther(struct APawn* InPlayer1, struct APawn* InPlayer2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "CheckIsVisibilityRelevancyWithOther");
    struct
    {
        struct APawn* InPlayer1;
        struct APawn* InPlayer2;
        bool ReturnValue;
    } Parms{};
    Parms.InPlayer1 = (struct APawn*)InPlayer1;
    Parms.InPlayer2 = (struct APawn*)InPlayer2;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::ChangeAIProfileFaction(struct TSoftClassPtr<struct UNPCAIFactionComponent*> FactionClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "ChangeAIProfileFaction");
    struct
    {
        struct TSoftClassPtr<struct UNPCAIFactionComponent*> FactionClass;
        bool ReturnValue;
    } Parms{};
    Parms.FactionClass = (struct TSoftClassPtr<struct UNPCAIFactionComponent*>)FactionClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::CanbeRevived(struct ACharacter* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "CanbeRevived");
    struct
    {
        struct ACharacter* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct ACharacter*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::CalculateTransfterHealthyBodyPartByZeroPartHit(struct ACharacter* InEnemyPawn, EAIBodyPartType InHitBodyPart, EAIBodyPartType& OutTransferBodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "CalculateTransfterHealthyBodyPartByZeroPartHit");
    struct
    {
        struct ACharacter* InEnemyPawn;
        enum EAIBodyPartType InHitBodyPart;
        enum EAIBodyPartType OutTransferBodyPart;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemyPawn = (struct ACharacter*)InEnemyPawn;
    Parms.InHitBodyPart = (enum EAIBodyPartType)InHitBodyPart;
    this->ProcessEvent(Func, &Parms);
    OutTransferBodyPart = Parms.OutTransferBodyPart;
    return Parms.ReturnValue;
}

bool INPCAIStaticsInterface::CalculateTransfterHealthyBodyPartByDangerHit(struct ACharacter* InEnemyPawn, EAIBodyPartType InHitBodyPart, EAIBodyPartType& OutTransferBodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "CalculateTransfterHealthyBodyPartByDangerHit");
    struct
    {
        struct ACharacter* InEnemyPawn;
        enum EAIBodyPartType InHitBodyPart;
        enum EAIBodyPartType OutTransferBodyPart;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemyPawn = (struct ACharacter*)InEnemyPawn;
    Parms.InHitBodyPart = (enum EAIBodyPartType)InHitBodyPart;
    this->ProcessEvent(Func, &Parms);
    OutTransferBodyPart = Parms.OutTransferBodyPart;
    return Parms.ReturnValue;
}

void INPCAIStaticsInterface::BroadcastReceiveTaunt(struct ACharacter* TauntCharacter, float TauntLeftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "BroadcastReceiveTaunt");
    struct
    {
        struct ACharacter* TauntCharacter;
        float TauntLeftTime;
    } Parms{};
    Parms.TauntCharacter = (struct ACharacter*)TauntCharacter;
    Parms.TauntLeftTime = (float)TauntLeftTime;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIStaticsInterface::BroadcastAICaredVehicleControlChangedEvent(struct AActor* InVehicle, struct ACharacter* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "BroadcastAICaredVehicleControlChangedEvent");
    struct
    {
        struct AActor* InVehicle;
        struct ACharacter* AIPawn;
    } Parms{};
    Parms.InVehicle = (struct AActor*)InVehicle;
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    this->ProcessEvent(Func, &Parms);
}

void INPCAIStaticsInterface::BroadcastAIBeSeenByPlayerUpdateEvent(bool bIsBeingSeen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIStaticsInterface", "BroadcastAIBeSeenByPlayerUpdateEvent");
    struct
    {
        bool bIsBeingSeen;
    } Parms{};
    Parms.bIsBeingSeen = (bool)bIsBeingSeen;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAISubSystemStatics
void UNPCAISubSystemStatics::WantToReCalcGoalEnemy(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "WantToReCalcGoalEnemy");
    struct
    {
        struct AActor* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UpdateTargetInfoOnTakeDamage(struct AActor* Casuer, struct AActor* Taker, float DamageValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UpdateTargetInfoOnTakeDamage");
    struct
    {
        struct AActor* Casuer;
        struct AActor* Taker;
        float DamageValue;
    } Parms{};
    Parms.Casuer = (struct AActor*)Casuer;
    Parms.Taker = (struct AActor*)Taker;
    Parms.DamageValue = (float)DamageValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UpdateTargetInfoOnCauseDamage(struct AActor* Casuer, struct AActor* Taker, float DamageValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UpdateTargetInfoOnCauseDamage");
    struct
    {
        struct AActor* Casuer;
        struct AActor* Taker;
        float DamageValue;
    } Parms{};
    Parms.Casuer = (struct AActor*)Casuer;
    Parms.Taker = (struct AActor*)Taker;
    Parms.DamageValue = (float)DamageValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UpdatePersistentFireSetting(struct AActor* AIPawn, bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, const struct FVector& FireLocation, float FireInterval, bool bIgnoreAimingTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UpdatePersistentFireSetting");
    struct
    {
        struct AActor* AIPawn;
        bool CalcShoot;
        bool CalcSight;
        struct AActor* EnemyTarget;
        struct FVector FireLocation;
        float FireInterval;
        bool bIgnoreAimingTime;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.CalcShoot = (bool)CalcShoot;
    Parms.CalcSight = (bool)CalcSight;
    Parms.EnemyTarget = (struct AActor*)EnemyTarget;
    Parms.FireLocation = (struct FVector)FireLocation;
    Parms.FireInterval = (float)FireInterval;
    Parms.bIgnoreAimingTime = (bool)bIgnoreAimingTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UpdateNaturalFireSetting(struct AActor* AIPawn, const struct FVector& FireLocation, bool bEnabledRecoilControl, bool bEnabledHitRateControl, bool bIgnoreAimingTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UpdateNaturalFireSetting");
    struct
    {
        struct AActor* AIPawn;
        struct FVector FireLocation;
        bool bEnabledRecoilControl;
        bool bEnabledHitRateControl;
        bool bIgnoreAimingTime;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.FireLocation = (struct FVector)FireLocation;
    Parms.bEnabledRecoilControl = (bool)bEnabledRecoilControl;
    Parms.bEnabledHitRateControl = (bool)bEnabledHitRateControl;
    Parms.bIgnoreAimingTime = (bool)bIgnoreAimingTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UpdateAIWalkSpeed(struct ACharacter* AIPawn, float NewWalkSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UpdateAIWalkSpeed");
    struct
    {
        struct ACharacter* AIPawn;
        float NewWalkSpeed;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.NewWalkSpeed = (float)NewWalkSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UpdateAIPeekCount(struct AActor* AIPawn, int32_t PeekCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UpdateAIPeekCount");
    struct
    {
        struct AActor* AIPawn;
        int32_t PeekCount;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.PeekCount = (int32_t)PeekCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UnregisterSceneEvent(struct UObject* WorldContext, struct UAISceneEventMessage* SceneEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UnregisterSceneEvent");
    struct
    {
        struct UObject* WorldContext;
        struct UAISceneEventMessage* SceneEvent;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.SceneEvent = (struct UAISceneEventMessage*)SceneEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::UnLockGoalEnemy(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "UnLockGoalEnemy");
    struct
    {
        struct AActor* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::TryProne(struct AActor* AIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryProne");
    struct
    {
        struct AActor* AIOwner;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TryLean(struct AActor* AIOwner, EAILeanType LeanType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryLean");
    struct
    {
        struct AActor* AIOwner;
        enum EAILeanType LeanType;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.LeanType = (enum EAILeanType)LeanType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TryJump(struct AActor* AIPawn, struct FVector JumpDirection, float JumpSpeed, bool bUseNowVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryJump");
    struct
    {
        struct AActor* AIPawn;
        struct FVector JumpDirection;
        float JumpSpeed;
        bool bUseNowVelocity;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.JumpDirection = (struct FVector)JumpDirection;
    Parms.JumpSpeed = (float)JumpSpeed;
    Parms.bUseNowVelocity = (bool)bUseNowVelocity;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TryCrouchSliding(struct AActor* AIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryCrouchSliding");
    struct
    {
        struct AActor* AIOwner;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TryCrouch(struct AActor* AIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryCrouch");
    struct
    {
        struct AActor* AIOwner;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TryCoverShootFiring(struct AActor* AIOwner, bool bCoverShootFiring)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryCoverShootFiring");
    struct
    {
        struct AActor* AIOwner;
        bool bCoverShootFiring;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.bCoverShootFiring = (bool)bCoverShootFiring;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TryCoverShoot(struct AActor* AIOwner, bool bCoverShoot, bool bCrouch, bool bLeft)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryCoverShoot");
    struct
    {
        struct AActor* AIOwner;
        bool bCoverShoot;
        bool bCrouch;
        bool bLeft;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.bCoverShoot = (bool)bCoverShoot;
    Parms.bCrouch = (bool)bCrouch;
    Parms.bLeft = (bool)bLeft;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TryCasualStandingPose(struct AActor* AIOwner, bool bCasual)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TryCasualStandingPose");
    struct
    {
        struct AActor* AIOwner;
        bool bCasual;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.bCasual = (bool)bCasual;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::TriggerSceneEventDIY(struct UObject* WorldContext, ENPCAISceneEventID EventId, const struct FVector& Location, float ValidScope, float ValidTime, const struct TArray<int64_t>& AIIDs, const struct TArray<int64_t>& AIPathGroupIDs, float CoverRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TriggerSceneEventDIY");
    struct
    {
        struct UObject* WorldContext;
        enum ENPCAISceneEventID EventId;
        struct FVector Location;
        float ValidScope;
        float ValidTime;
        struct TArray<int64_t> AIIDs;
        struct TArray<int64_t> AIPathGroupIDs;
        float CoverRange;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EventId = (enum ENPCAISceneEventID)EventId;
    Parms.Location = (struct FVector)Location;
    Parms.ValidScope = (float)ValidScope;
    Parms.ValidTime = (float)ValidTime;
    Parms.AIIDs = (struct TArray<int64_t>)AIIDs;
    Parms.AIPathGroupIDs = (struct TArray<int64_t>)AIPathGroupIDs;
    Parms.CoverRange = (float)CoverRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::TriggerSceneEvent(struct UObject* WorldContext, ENPCAISceneEventID EventId, const struct FVector& Location, float CoverRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TriggerSceneEvent");
    struct
    {
        struct UObject* WorldContext;
        enum ENPCAISceneEventID EventId;
        struct FVector Location;
        float CoverRange;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EventId = (enum ENPCAISceneEventID)EventId;
    Parms.Location = (struct FVector)Location;
    Parms.CoverRange = (float)CoverRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::TestDir(struct UObject* WorldContextObject, const struct FVector& HeadPosition, const struct FVector& Direction, float Distance, struct FVector& OutPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "TestDir");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector HeadPosition;
        struct FVector Direction;
        float Distance;
        struct FVector OutPosition;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.HeadPosition = (struct FVector)HeadPosition;
    Parms.Direction = (struct FVector)Direction;
    Parms.Distance = (float)Distance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPosition = Parms.OutPosition;
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::StopRescueOtherDBNOTeammate(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "StopRescueOtherDBNOTeammate");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::StopPickUpBoxContainer(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "StopPickUpBoxContainer");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::StopPersistentFire(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "StopPersistentFire");
    struct
    {
        struct AActor* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::StartPersistentFire(struct AActor* AIPawn, float DurationTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "StartPersistentFire");
    struct
    {
        struct AActor* AIPawn;
        float DurationTime;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.DurationTime = (float)DurationTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::ShouldTriggerMine(struct AActor* AIPawnOrController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "ShouldTriggerMine");
    struct
    {
        struct AActor* AIPawnOrController;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawnOrController = (struct AActor*)AIPawnOrController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::ShortQueryPathToPoint(struct AActor* AIPawn, const struct FVector& InPointToGo, struct TArray<struct FVector>& PathPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "ShortQueryPathToPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector InPointToGo;
        struct TArray<struct FVector> PathPoints;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InPointToGo = (struct FVector)InPointToGo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PathPoints = Parms.PathPoints;
}

void UNPCAISubSystemStatics::SetupTearGasAreas(struct UObject* WorldContextObject, const struct FVector& Center, const struct FVector& EffectExtent, bool bActiving)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetupTearGasAreas");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Center;
        struct FVector EffectExtent;
        bool bActiving;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Center = (struct FVector)Center;
    Parms.EffectExtent = (struct FVector)EffectExtent;
    Parms.bActiving = (bool)bActiving;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetupFlanking(struct AActor* InOwner, const struct FVector& InDangerPoint, const struct FVector& InDangerPointDirection, float InDangerPointEffectRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetupFlanking");
    struct
    {
        struct AActor* InOwner;
        struct FVector InDangerPoint;
        struct FVector InDangerPointDirection;
        float InDangerPointEffectRange;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.InDangerPoint = (struct FVector)InDangerPoint;
    Parms.InDangerPointDirection = (struct FVector)InDangerPointDirection;
    Parms.InDangerPointEffectRange = (float)InDangerPointEffectRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetSightWeakenTime(struct AActor* AIPawn, float WeakenTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetSightWeakenTime");
    struct
    {
        struct AActor* AIPawn;
        float WeakenTime;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.WeakenTime = (float)WeakenTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetOpenWeaponADS(struct AActor* AIPawn, bool bOpenOrClose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetOpenWeaponADS");
    struct
    {
        struct AActor* AIPawn;
        bool bOpenOrClose;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.bOpenOrClose = (bool)bOpenOrClose;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetMovingAIMaxNumInRendered(struct UObject* WorldContext, int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetMovingAIMaxNumInRendered");
    struct
    {
        struct UObject* WorldContext;
        int32_t InMaxNum;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InMaxNum = (int32_t)InMaxNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetIsInTryLeanShoot(struct AActor* InAIPawn, bool bTryLean, float CheckInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetIsInTryLeanShoot");
    struct
    {
        struct AActor* InAIPawn;
        bool bTryLean;
        float CheckInterval;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.bTryLean = (bool)bTryLean;
    Parms.CheckInterval = (float)CheckInterval;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetGroupEnemyHatredValue(struct AActor* InAIOwner, struct AActor* InEnemy, int32_t InHatredValue, float IndateTime, bool InbCalucateGoalEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetGroupEnemyHatredValue");
    struct
    {
        struct AActor* InAIOwner;
        struct AActor* InEnemy;
        int32_t InHatredValue;
        float IndateTime;
        bool InbCalucateGoalEnemy;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InHatredValue = (int32_t)InHatredValue;
    Parms.IndateTime = (float)IndateTime;
    Parms.InbCalucateGoalEnemy = (bool)InbCalucateGoalEnemy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetGoalProtectedPerson(struct AActor* AIPawn, struct AActor* PersonPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetGoalProtectedPerson");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* PersonPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.PersonPawn = (struct AActor*)PersonPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetGoalEnemyInfo(struct AActor* InAIPawn, struct UNPCAITargetInfo* InGoalEnemyInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetGoalEnemyInfo");
    struct
    {
        struct AActor* InAIPawn;
        struct UNPCAITargetInfo* InGoalEnemyInfo;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InGoalEnemyInfo = (struct UNPCAITargetInfo*)InGoalEnemyInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetFiringAIMaxNum(struct UObject* WorldContext, int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetFiringAIMaxNum");
    struct
    {
        struct UObject* WorldContext;
        int32_t InMaxNum;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InMaxNum = (int32_t)InMaxNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetEnemyThreatenDistCannotOpenDoor(struct AActor* AIPawn, float InDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetEnemyThreatenDistCannotOpenDoor");
    struct
    {
        struct AActor* AIPawn;
        float InDistance;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InDistance = (float)InDistance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetEnemyHatredValue(struct AActor* InAIPawn, struct AActor* InEnemy, int32_t InHatredValue, float IndateTime, bool bEffectGroup, bool InbCalucateGoalEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetEnemyHatredValue");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InEnemy;
        int32_t InHatredValue;
        float IndateTime;
        bool bEffectGroup;
        bool InbCalucateGoalEnemy;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InHatredValue = (int32_t)InHatredValue;
    Parms.IndateTime = (float)IndateTime;
    Parms.bEffectGroup = (bool)bEffectGroup;
    Parms.InbCalucateGoalEnemy = (bool)InbCalucateGoalEnemy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetDamageLimitEnabledForAI(struct AActor* AIPawn, bool bIsEnabledForAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetDamageLimitEnabledForAI");
    struct
    {
        struct AActor* AIPawn;
        bool bIsEnabledForAI;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.bIsEnabledForAI = (bool)bIsEnabledForAI;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetCurrentMoveType(struct AActor* AIOwner, EAIMoveType InMoveType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetCurrentMoveType");
    struct
    {
        struct AActor* AIOwner;
        enum EAIMoveType InMoveType;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.InMoveType = (enum EAIMoveType)InMoveType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAvoidNavAreas(struct UObject* WorldContext, const struct TArray<int64_t>& AvoidPolyRefs, bool bAvoid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAvoidNavAreas");
    struct
    {
        struct UObject* WorldContext;
        struct TArray<int64_t> AvoidPolyRefs;
        bool bAvoid;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.AvoidPolyRefs = (struct TArray<int64_t>)AvoidPolyRefs;
    Parms.bAvoid = (bool)bAvoid;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAISprint(struct AActor* AIPawn, bool bSprint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAISprint");
    struct
    {
        struct AActor* AIPawn;
        bool bSprint;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.bSprint = (bool)bSprint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAIRLModifyViewRotation(struct AActor* AIPawn, const struct FRotator& ModifyRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAIRLModifyViewRotation");
    struct
    {
        struct AActor* AIPawn;
        struct FRotator ModifyRotation;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.ModifyRotation = (struct FRotator)ModifyRotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAIProtectTreasureBox(struct AActor* AIPawn, struct AActor* TreasureBox)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAIProtectTreasureBox");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* TreasureBox;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.TreasureBox = (struct AActor*)TreasureBox;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAimingPoint(struct AActor* AIPawn, const struct FVector& AimingPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAimingPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector AimingPoint;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.AimingPoint = (struct FVector)AimingPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAimingBodyPartWeightInRuntime(struct AActor* InAIPawn, EAIBodyPartType InBodyPart, float InWeight, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAimingBodyPartWeightInRuntime");
    struct
    {
        struct AActor* InAIPawn;
        enum EAIBodyPartType InBodyPart;
        float InWeight;
        bool bIsForPlayer;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    Parms.InWeight = (float)InWeight;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAimingBodyPartTrend(struct AActor* AIPawn, EAIAimingBodyPartTrend AimingTrend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAimingBodyPartTrend");
    struct
    {
        struct AActor* AIPawn;
        enum EAIAimingBodyPartTrend AimingTrend;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.AimingTrend = (enum EAIAimingBodyPartTrend)AimingTrend;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAIKnowEnemy(struct AActor* AIPawn, struct AActor* EnemyPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAIKnowEnemy");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* EnemyPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.EnemyPawn = (struct AActor*)EnemyPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAIInSection(struct AActor* AIPawn, int32_t InSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAIInSection");
    struct
    {
        struct AActor* AIPawn;
        int32_t InSection;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InSection = (int32_t)InSection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAICallUpResult(struct AActor* AIPawn, uint8_t Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAICallUpResult");
    struct
    {
        struct AActor* AIPawn;
        uint8_t Result;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.Result = (uint8_t)Result;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAICallUpReason(struct AActor* AIPawn, uint8_t reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAICallUpReason");
    struct
    {
        struct AActor* AIPawn;
        uint8_t reason;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.reason = (uint8_t)reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::SetAIBeSeeByPlayer(struct ACharacter* AIPawn, bool bSeen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SetAIBeSeeByPlayer");
    struct
    {
        struct ACharacter* AIPawn;
        bool bSeen;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.bSeen = (bool)bSeen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UBTService* UNPCAISubSystemStatics::SearchBehaviorService(struct AAIController* InAIController, struct FString InNodeName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "SearchBehaviorService");
    struct
    {
        struct AAIController* InAIController;
        struct FString InNodeName;
        struct UBTService* ReturnValue;
    } Parms{};
    Parms.InAIController = (struct AAIController*)InAIController;
    Parms.InNodeName = (struct FString)InNodeName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::ResumeAIBehaviorLogic(struct AActor* AIPawn, struct FString reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "ResumeAIBehaviorLogic");
    struct
    {
        struct AActor* AIPawn;
        struct FString reason;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.reason = (struct FString)reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::RescueDBNOAITeammate(struct AActor* InAIPawn, struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "RescueDBNOAITeammate");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::RemoveSuspectedPoint(struct AActor* AIPawn, struct UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "RemoveSuspectedPoint");
    struct
    {
        struct AActor* AIPawn;
        struct UNPCAIAttentionPoint* InAttentionPoint;
        bool bRemoveNearCanSee;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InAttentionPoint = (struct UNPCAIAttentionPoint*)InAttentionPoint;
    Parms.bRemoveNearCanSee = (bool)bRemoveNearCanSee;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::RemoveEnemyInAllGroup(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "RemoveEnemyInAllGroup");
    struct
    {
        struct AActor* InEnemy;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::RemoveAimingTypeInRuntime(struct AActor* InAIPawn, EAIBodyBulkType InBodyBulk, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "RemoveAimingTypeInRuntime");
    struct
    {
        struct AActor* InAIPawn;
        enum EAIBodyBulkType InBodyBulk;
        bool bIsForPlayer;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InBodyBulk = (enum EAIBodyBulkType)InBodyBulk;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UNPCAISubSystemStatics::RegisterSceneEvent(struct UObject* WorldContext, struct UAISceneEventMessage* SceneEvent, const struct FVector& Location, float CoverRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "RegisterSceneEvent");
    struct
    {
        struct UObject* WorldContext;
        struct UAISceneEventMessage* SceneEvent;
        struct FVector Location;
        float CoverRange;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.SceneEvent = (struct UAISceneEventMessage*)SceneEvent;
    Parms.Location = (struct FVector)Location;
    Parms.CoverRange = (float)CoverRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::RefreshNavigationMainData(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "RefreshNavigationMainData");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::QuitToDynamicGroup(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "QuitToDynamicGroup");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UNPCAISubSystemStatics::QueryPathLengthFromAIToPoint(struct AActor* AIPawn, const struct FVector& PointToGo, int64_t PointPolyRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "QueryPathLengthFromAIToPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector PointToGo;
        int64_t PointPolyRef;
        float ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.PointToGo = (struct FVector)PointToGo;
    Parms.PointPolyRef = (int64_t)PointPolyRef;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::PointIsInSmoke(struct UObject* WorldContext, struct FVector InPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "PointIsInSmoke");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InPoint;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InPoint = (struct FVector)InPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::PointIsInMolotov(struct AActor* InAIPawn, struct FVector InPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "PointIsInMolotov");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InPoint;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InPoint = (struct FVector)InPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::PointIsInBombRange(struct UObject* WorldContext, struct FVector InPoint, ENPCAIPerceptibleTile InTile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "PointIsInBombRange");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InPoint;
        enum ENPCAIPerceptibleTile InTile;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InPoint = (struct FVector)InPoint;
    Parms.InTile = (enum ENPCAIPerceptibleTile)InTile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::PointIsAroundAI(struct AActor* AIPawn, const struct FVector& PointToGo, int64_t PointPolyRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "PointIsAroundAI");
    struct
    {
        struct AActor* AIPawn;
        struct FVector PointToGo;
        int64_t PointPolyRef;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.PointToGo = (struct FVector)PointToGo;
    Parms.PointPolyRef = (int64_t)PointPolyRef;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::PickUpInventory(struct AActor* InAIPawn, struct AActor* Inventory, bool bCheckIsCanAdd, float WaitSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "PickUpInventory");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* Inventory;
        bool bCheckIsCanAdd;
        float WaitSeconds;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.Inventory = (struct AActor*)Inventory;
    Parms.bCheckIsCanAdd = (bool)bCheckIsCanAdd;
    Parms.WaitSeconds = (float)WaitSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::PickUpBoxContainer(struct AActor* InAIPawn, struct AActor* BoxContainer, bool bCheckIsCanAdd, float InDelayStarttime, float InPickUpInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "PickUpBoxContainer");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* BoxContainer;
        bool bCheckIsCanAdd;
        float InDelayStarttime;
        float InPickUpInterval;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.BoxContainer = (struct AActor*)BoxContainer;
    Parms.bCheckIsCanAdd = (bool)bCheckIsCanAdd;
    Parms.InDelayStarttime = (float)InDelayStarttime;
    Parms.InPickUpInterval = (float)InPickUpInterval;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::PauseAIBehaviorLogic(struct AActor* AIPawn, struct FString reason, float PauseTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "PauseAIBehaviorLogic");
    struct
    {
        struct AActor* AIPawn;
        struct FString reason;
        float PauseTime;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.reason = (struct FString)reason;
    Parms.PauseTime = (float)PauseTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::OpenDoor(struct AActor* InAIPawn, struct AActor* InDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "OpenDoor");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InDoor;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InDoor = (struct AActor*)InDoor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::MultiJoinToDynamicGroup(int32_t DyGroupId, const struct TArray<struct AActor*>& InAIPawns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "MultiJoinToDynamicGroup");
    struct
    {
        int32_t DyGroupId;
        struct TArray<struct AActor*> InAIPawns;
    } Parms{};
    Parms.DyGroupId = (int32_t)DyGroupId;
    Parms.InAIPawns = (struct TArray<struct AActor*>)InAIPawns;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::ModifyAICurrentEndurance(struct AActor* AIPawn, float MaxRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "ModifyAICurrentEndurance");
    struct
    {
        struct AActor* AIPawn;
        float MaxRatio;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.MaxRatio = (float)MaxRatio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::MarkAIAttentBeSeen(struct ACharacter* AIPawn, bool bShouldMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "MarkAIAttentBeSeen");
    struct
    {
        struct ACharacter* AIPawn;
        bool bShouldMark;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.bShouldMark = (bool)bShouldMark;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::LookToPoint(struct AActor* AIOwner, struct FVector InPoint, float InRotateSpeedInDegree, float AcceleratedSpeedInDegree, bool bQuickly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "LookToPoint");
    struct
    {
        struct AActor* AIOwner;
        struct FVector InPoint;
        float InRotateSpeedInDegree;
        float AcceleratedSpeedInDegree;
        bool bQuickly;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.InPoint = (struct FVector)InPoint;
    Parms.InRotateSpeedInDegree = (float)InRotateSpeedInDegree;
    Parms.AcceleratedSpeedInDegree = (float)AcceleratedSpeedInDegree;
    Parms.bQuickly = (bool)bQuickly;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::LookToMovingDirection(struct AActor* AIOwner, float RotateSpeedInDegree, float AcceleratedSpeedInDegree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "LookToMovingDirection");
    struct
    {
        struct AActor* AIOwner;
        float RotateSpeedInDegree;
        float AcceleratedSpeedInDegree;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.RotateSpeedInDegree = (float)RotateSpeedInDegree;
    Parms.AcceleratedSpeedInDegree = (float)AcceleratedSpeedInDegree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::LockLookToPoint(struct AActor* AIOwner, float LockTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "LockLookToPoint");
    struct
    {
        struct AActor* AIOwner;
        float LockTime;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.LockTime = (float)LockTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UNPCAITargetInfo* UNPCAISubSystemStatics::LockGoalEnemy(struct AActor* AIPawn, struct AActor* EnemyPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "LockGoalEnemy");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* EnemyPawn;
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.EnemyPawn = (struct AActor*)EnemyPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::JoinToGroupTogetherForTest(const struct TArray<struct AActor*>& AIPawns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "JoinToGroupTogetherForTest");
    struct
    {
        struct TArray<struct AActor*> AIPawns;
    } Parms{};
    Parms.AIPawns = (struct TArray<struct AActor*>)AIPawns;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::JoinToDynamicGroup(int32_t DyGroupId, struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "JoinToDynamicGroup");
    struct
    {
        int32_t DyGroupId;
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.DyGroupId = (int32_t)DyGroupId;
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsWaitingStartAiming(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsWaitingStartAiming");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::IsSightWeakenByFlashProjectile(struct AActor* AIPawn, bool& IsWeaken, float& RemainTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsSightWeakenByFlashProjectile");
    struct
    {
        struct AActor* AIPawn;
        bool IsWeaken;
        float RemainTime;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    IsWeaken = Parms.IsWeaken;
    RemainTime = Parms.RemainTime;
}

bool UNPCAISubSystemStatics::IsSightWeakenByFlashLight(struct AActor* AIPawn, float& SightWeaknScaleValue, struct FVector& LightLocation, struct ACharacter*& LightOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsSightWeakenByFlashLight");
    struct
    {
        struct AActor* AIPawn;
        float SightWeaknScaleValue;
        struct FVector LightLocation;
        struct ACharacter* LightOwnerCharacter;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SightWeaknScaleValue = Parms.SightWeaknScaleValue;
    LightLocation = Parms.LightLocation;
    LightOwnerCharacter = Parms.LightOwnerCharacter;
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsRecentlyFire(struct AActor* AIPawn, float InSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsRecentlyFire");
    struct
    {
        struct AActor* AIPawn;
        float InSeconds;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InSeconds = (float)InSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsReachMovingNumInRenderedLimit(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsReachMovingNumInRenderedLimit");
    struct
    {
        struct UObject* WorldContext;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsReachFiringNumLimit(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsReachFiringNumLimit");
    struct
    {
        struct UObject* WorldContext;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsPersistentFiring(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsPersistentFiring");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsOpeningDoor(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsOpeningDoor");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsNavPathFounded(const struct FNPCAINavPathForBP& NavPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsNavPathFounded");
    struct
    {
        struct FNPCAINavPathForBP NavPath;
        bool ReturnValue;
    } Parms{};
    Parms.NavPath = (struct FNPCAINavPathForBP)NavPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsMovingToDestination(struct AActor* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsMovingToDestination");
    struct
    {
        struct AActor* InOwner;
        bool ReturnValue;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsLODStatus(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsLODStatus");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAITargetInfo* UNPCAISubSystemStatics::IsLockingGoalEnemy(struct AActor* AIPawn, bool& IsLocking)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsLockingGoalEnemy");
    struct
    {
        struct AActor* AIPawn;
        bool IsLocking;
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    IsLocking = Parms.IsLocking;
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsLockDoor(struct AActor* InAIPawn, struct AActor* InDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsLockDoor");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InDoor;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InDoor = (struct AActor*)InDoor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsJumping(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsJumping");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsInPullBolt(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsInPullBolt");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsInOpenDoorStatus(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsInOpenDoorStatus");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsInMolotovHurted(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsInMolotovHurted");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsInDynamicGroup(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsInDynamicGroup");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsInCrossFireState(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsInCrossFireState");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsImmuneTearGas(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsImmuneTearGas");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsGroupEnemy(struct AActor* InAIOwner, struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsGroupEnemy");
    struct
    {
        struct AActor* InAIOwner;
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsGroupAlly(struct AActor* InAIOwner, struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsGroupAlly");
    struct
    {
        struct AActor* InAIOwner;
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsGoalPositionReached(struct AActor* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsGoalPositionReached");
    struct
    {
        struct AActor* InOwner;
        bool ReturnValue;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsGoalEnemyThreaten(struct AActor* InAIPawn, float ThreatenDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsGoalEnemyThreaten");
    struct
    {
        struct AActor* InAIPawn;
        float ThreatenDistance;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.ThreatenDistance = (float)ThreatenDistance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsFaceToPoint(struct AActor* InAIPawn, struct FVector InPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsFaceToPoint");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InPoint;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InPoint = (struct FVector)InPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsEnoughAllyKillInRange(struct AActor* InAIPawn, const struct FVector& InSearchCenter, float InSearchRange, float InSearchTime, int32_t InSearchCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsEnoughAllyKillInRange");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InSearchCenter;
        float InSearchRange;
        float InSearchTime;
        int32_t InSearchCount;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InSearchCenter = (struct FVector)InSearchCenter;
    Parms.InSearchRange = (float)InSearchRange;
    Parms.InSearchTime = (float)InSearchTime;
    Parms.InSearchCount = (int32_t)InSearchCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsEnoughAllyDeathInRange(struct AActor* InAIPawn, const struct FVector& InSearchCenter, float InSearchRange, float InSearchTime, int32_t InSearchCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsEnoughAllyDeathInRange");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InSearchCenter;
        float InSearchRange;
        float InSearchTime;
        int32_t InSearchCount;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InSearchCenter = (struct FVector)InSearchCenter;
    Parms.InSearchRange = (float)InSearchRange;
    Parms.InSearchTime = (float)InSearchTime;
    Parms.InSearchCount = (int32_t)InSearchCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsEnabledAimingBodyPartLOGDebug(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsEnabledAimingBodyPartLOGDebug");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsDynamicGroupExist(struct AActor* InAIPawn, int32_t DyGroupId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsDynamicGroupExist");
    struct
    {
        struct AActor* InAIPawn;
        int32_t DyGroupId;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.DyGroupId = (int32_t)DyGroupId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsDoorOpened(struct AActor* InAIPawn, struct AActor* InDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsDoorOpened");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InDoor;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InDoor = (struct AActor*)InDoor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAISubSystemStatics::IsDoorInDirectionOfMe(struct AActor* InAIPawn, const struct FVector& InDirection, float InRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsDoorInDirectionOfMe");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InDirection;
        float InRange;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InDirection = (struct FVector)InDirection;
    Parms.InRange = (float)InRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsDBNO(struct AActor* InAIPawn, struct AActor* InTargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsDBNO");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InTargetPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsCrouchSliding(struct AActor* AIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsCrouchSliding");
    struct
    {
        struct AActor* AIOwner;
        bool ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsCompletedPickUpBoxContainer(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsCompletedPickUpBoxContainer");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsCloseToDestination(struct AActor* InOwner, float InCloseRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsCloseToDestination");
    struct
    {
        struct AActor* InOwner;
        float InCloseRadius;
        bool ReturnValue;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.InCloseRadius = (float)InCloseRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsBeingFireHited(struct AActor* InAIPawn, float InTime, struct AActor*& OutFirePawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsBeingFireHited");
    struct
    {
        struct AActor* InAIPawn;
        float InTime;
        struct AActor* OutFirePawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTime = (float)InTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutFirePawn = Parms.OutFirePawn;
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAlert(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAlert");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAISprinting(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAISprinting");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIRLFire(struct AAIController* AIController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIRLFire");
    struct
    {
        struct AAIController* AIController;
        bool ReturnValue;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIRLAgentActionReload(struct AAIController* AIController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIRLAgentActionReload");
    struct
    {
        struct AAIController* AIController;
        bool ReturnValue;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIProtectingTreasureBox(struct AActor* AIPawn, struct AActor*& TreaureBox)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIProtectingTreasureBox");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* TreaureBox;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TreaureBox = Parms.TreaureBox;
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIPawnCanSeeOtherUsedPathPoint(struct ACharacter* AIPawn, struct ACharacter* OtherPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIPawnCanSeeOtherUsedPathPoint");
    struct
    {
        struct ACharacter* AIPawn;
        struct ACharacter* OtherPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.OtherPawn = (struct ACharacter*)OtherPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIPawnCanSeeOtherByUniqueIDUsedPathPoint(struct ACharacter* AIPawn, int32_t InOtherUniqueID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIPawnCanSeeOtherByUniqueIDUsedPathPoint");
    struct
    {
        struct ACharacter* AIPawn;
        int32_t InOtherUniqueID;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.InOtherUniqueID = (int32_t)InOtherUniqueID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIInBombRange(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIInBombRange");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIDBNO(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIDBNO");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::IsAIBeSeenByPlayer(struct ACharacter* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "IsAIBeSeenByPlayer");
    struct
    {
        struct ACharacter* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::HasPlacePickUpInventory(struct AActor* InAIPawn, struct AActor* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "HasPlacePickUpInventory");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* Inventory;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.Inventory = (struct AActor*)Inventory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::HasOthersAllyInShootScope(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "HasOthersAllyInShootScope");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::HasNoDBNOAllyInGroup(struct AActor* InAIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "HasNoDBNOAllyInGroup");
    struct
    {
        struct AActor* InAIOwner;
        bool ReturnValue;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GroupAllyDeathToDo(struct AActor* InAIPawn, const struct FVector& InKillerLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GroupAllyDeathToDo");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InKillerLocation;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InKillerLocation = (struct FVector)InKillerLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::GoToPoint(struct AActor* InOwner, struct FVector InPosition, const struct FNPCAIMoveRequestCustomDataImpl& MoveRequestCustomData, const struct TArray<struct AVolume*>& AvoidVolumes, bool bSlowAtTheEnd, float InReachDist, bool bShoudGetUp, bool bGetUpWithCheck, struct AActor* CaredActor, float CaredActorEffectRadius, int32_t GoDecision, bool bUsePathfinding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GoToPoint");
    struct
    {
        struct AActor* InOwner;
        struct FVector InPosition;
        struct FNPCAIMoveRequestCustomDataImpl MoveRequestCustomData;
        struct TArray<struct AVolume*> AvoidVolumes;
        bool bSlowAtTheEnd;
        float InReachDist;
        bool bShoudGetUp;
        bool bGetUpWithCheck;
        struct AActor* CaredActor;
        float CaredActorEffectRadius;
        int32_t GoDecision;
        bool bUsePathfinding;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.InPosition = (struct FVector)InPosition;
    Parms.MoveRequestCustomData = (struct FNPCAIMoveRequestCustomDataImpl)MoveRequestCustomData;
    Parms.AvoidVolumes = (struct TArray<struct AVolume*>)AvoidVolumes;
    Parms.bSlowAtTheEnd = (bool)bSlowAtTheEnd;
    Parms.InReachDist = (float)InReachDist;
    Parms.bShoudGetUp = (bool)bShoudGetUp;
    Parms.bGetUpWithCheck = (bool)bGetUpWithCheck;
    Parms.CaredActor = (struct AActor*)CaredActor;
    Parms.CaredActorEffectRadius = (float)CaredActorEffectRadius;
    Parms.GoDecision = (int32_t)GoDecision;
    Parms.bUsePathfinding = (bool)bUsePathfinding;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::GoDirectly(struct AActor* InOwner, const struct FVector& Direction, float Seconds, struct FVector InBlendingVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GoDirectly");
    struct
    {
        struct AActor* InOwner;
        struct FVector Direction;
        float Seconds;
        struct FVector InBlendingVelocity;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.Direction = (struct FVector)Direction;
    Parms.Seconds = (float)Seconds;
    Parms.InBlendingVelocity = (struct FVector)InBlendingVelocity;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::GoAccordingToWayPoints(struct AActor* InOwner, const struct FNavSkeletonGraphFindResult& PathResult, const struct FNavSkeletonMoveSettings& Settings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GoAccordingToWayPoints");
    struct
    {
        struct AActor* InOwner;
        struct FNavSkeletonGraphFindResult PathResult;
        struct FNavSkeletonMoveSettings Settings;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.PathResult = (struct FNavSkeletonGraphFindResult)PathResult;
    Parms.Settings = (struct FNavSkeletonMoveSettings)Settings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::GiveInventoryToAI(struct AActor* AIPawn, int64_t itemID, int32_t ItemNum, int32_t SkinID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GiveInventoryToAI");
    struct
    {
        struct AActor* AIPawn;
        int64_t itemID;
        int32_t ItemNum;
        int32_t SkinID;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.itemID = (int64_t)itemID;
    Parms.ItemNum = (int32_t)ItemNum;
    Parms.SkinID = (int32_t)SkinID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIZoneGroupInfo* UNPCAISubSystemStatics::GetZoneGroupInfo(struct AActor* InAIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetZoneGroupInfo");
    struct
    {
        struct AActor* InAIOwner;
        struct UNPCAIZoneGroupInfo* ReturnValue;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetZoneGroupAllyTotalDeathNum(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetZoneGroupAllyTotalDeathNum");
    struct
    {
        struct AActor* AIPawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAISubSystemStatics::GetYoungestSuspectedPoint(struct AActor* InCharacter, float InRadius, bool InPriorityDanger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetYoungestSuspectedPoint");
    struct
    {
        struct AActor* InCharacter;
        float InRadius;
        bool InPriorityDanger;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct AActor*)InCharacter;
    Parms.InRadius = (float)InRadius;
    Parms.InPriorityDanger = (bool)InPriorityDanger;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::GetVehicleCanPickUpInVolume(struct AActor* AIPawn, struct AVolume* Volume, struct AActor*& VehicleKey, struct AActor*& Vehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetVehicleCanPickUpInVolume");
    struct
    {
        struct AActor* AIPawn;
        struct AVolume* Volume;
        struct AActor* VehicleKey;
        struct AActor* Vehicle;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.Volume = (struct AVolume*)Volume;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    VehicleKey = Parms.VehicleKey;
    Vehicle = Parms.Vehicle;
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetUp(struct AActor* AIOwner, bool bWithCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetUp");
    struct
    {
        struct AActor* AIOwner;
        bool bWithCheck;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    Parms.bWithCheck = (bool)bWithCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UNPCAISubSystemStatics::GetTargetInSightBodyPartsLocation(struct AActor* AIPawn, struct AActor* TargetPawn, struct TArray<struct FVector>& BodyPartsLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetTargetInSightBodyPartsLocation");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* TargetPawn;
        struct TArray<struct FVector> BodyPartsLocation;
        float ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BodyPartsLocation = Parms.BodyPartsLocation;
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetTargetBodyPartEnduranceRatios(struct AActor* AIPawn, struct AActor* InTarget, struct TArray<float>& OutEnduranceRatios)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetTargetBodyPartEnduranceRatios");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* InTarget;
        struct TArray<float> OutEnduranceRatios;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InTarget = (struct AActor*)InTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutEnduranceRatios = Parms.OutEnduranceRatios;
}

float UNPCAISubSystemStatics::GetSightScaleToTarget(struct ACharacter* AIPawn, struct ACharacter* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetSightScaleToTarget");
    struct
    {
        struct ACharacter* AIPawn;
        struct ACharacter* TargetPawn;
        float ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.TargetPawn = (struct ACharacter*)TargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetSightLookStartPointByPose(struct AActor* InAIPawn, const EAIPose& AIPose, const EAILeanType& AILean, struct UNPCAIPropertyComponent_Look* InLookProps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetSightLookStartPointByPose");
    struct
    {
        struct AActor* InAIPawn;
        enum EAIPose AIPose;
        enum EAILeanType AILean;
        struct UNPCAIPropertyComponent_Look* InLookProps;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.AIPose = (enum EAIPose)AIPose;
    Parms.AILean = (enum EAILeanType)AILean;
    Parms.InLookProps = (struct UNPCAIPropertyComponent_Look*)InLookProps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::GetSceneEventInfo(struct UObject* WorldContext, int32_t EvtUniqueId, struct FNPCAISceneEventInfo& OutEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetSceneEventInfo");
    struct
    {
        struct UObject* WorldContext;
        int32_t EvtUniqueId;
        struct FNPCAISceneEventInfo OutEvent;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EvtUniqueId = (int32_t)EvtUniqueId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutEvent = Parms.OutEvent;
    return Parms.ReturnValue;
}

struct UAISceneEventMessage* UNPCAISubSystemStatics::GetSceneEvent(struct UObject* WorldContext, int32_t EvtUniqueId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetSceneEvent");
    struct
    {
        struct UObject* WorldContext;
        int32_t EvtUniqueId;
        struct UAISceneEventMessage* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EvtUniqueId = (int32_t)EvtUniqueId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetRandomReachablePointUseFilter(struct UObject* WorldContext, struct FVector InPoint, float InRadius, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetRandomReachablePointUseFilter");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InPoint;
        float InRadius;
        struct UNavigationQueryFilter* FilterClass;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InPoint = (struct FVector)InPoint;
    Parms.InRadius = (float)InRadius;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetProjectPointToNavigation(struct UObject* WorldContext, struct FVector InCenter, bool bNotFoundReturnSelf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetProjectPointToNavigation");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InCenter;
        bool bNotFoundReturnSelf;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InCenter = (struct FVector)InCenter;
    Parms.bNotFoundReturnSelf = (bool)bNotFoundReturnSelf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIPose UNPCAISubSystemStatics::GetPoseType(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetPoseType");
    struct
    {
        struct ACharacter* Character;
        enum EAIPose ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::GetPathAcrossLastDoorInfo(struct AActor* AIPawn, struct FAISafetyOpenDoorResp& AcrossDoorInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetPathAcrossLastDoorInfo");
    struct
    {
        struct AActor* AIPawn;
        struct FAISafetyOpenDoorResp AcrossDoorInfo;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AcrossDoorInfo = Parms.AcrossDoorInfo;
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetOpenDoorSuitableLocation(struct AActor* InAIPawn, struct AActor* InDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetOpenDoorSuitableLocation");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InDoor;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InDoor = (struct AActor*)InDoor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetOpenDoorSafetyPoints(struct AActor* AIPawn, struct AActor* InDoor, struct FVector NavLinkPoint, struct TArray<struct FAIDoorSingleSafetyPoint>& SafetyPoints, int32_t& PointsNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetOpenDoorSafetyPoints");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* InDoor;
        struct FVector NavLinkPoint;
        struct TArray<struct FAIDoorSingleSafetyPoint> SafetyPoints;
        int32_t PointsNum;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InDoor = (struct AActor*)InDoor;
    Parms.NavLinkPoint = (struct FVector)NavLinkPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SafetyPoints = Parms.SafetyPoints;
    PointsNum = Parms.PointsNum;
}

struct FVector UNPCAISubSystemStatics::GetNearReachablePointEscapeBombArea(struct UObject* WorldContext, struct FVector InPoint, float InRadius, const struct TArray<ENPCAIPerceptibleTile>& EscapeTiles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNearReachablePointEscapeBombArea");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InPoint;
        float InRadius;
        struct TArray<ENPCAIPerceptibleTile> EscapeTiles;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InPoint = (struct FVector)InPoint;
    Parms.InRadius = (float)InRadius;
    Parms.EscapeTiles = (struct TArray<ENPCAIPerceptibleTile>)EscapeTiles;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetNearestScavPlayerList(struct AActor* InAIPawn, struct TArray<struct AActor*>& ScavPlayerList, float InRadius, bool InSight, EAISenseBehaviorType Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNearestScavPlayerList");
    struct
    {
        struct AActor* InAIPawn;
        struct TArray<struct AActor*> ScavPlayerList;
        float InRadius;
        bool InSight;
        enum EAISenseBehaviorType Action;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRadius = (float)InRadius;
    Parms.InSight = (bool)InSight;
    Parms.Action = (enum EAISenseBehaviorType)Action;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ScavPlayerList = Parms.ScavPlayerList;
}

struct AActor* UNPCAISubSystemStatics::GetNearestScavPlayer(struct AActor* InAIPawn, float InRadius, bool InSight, EAISenseBehaviorType Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNearestScavPlayer");
    struct
    {
        struct AActor* InAIPawn;
        float InRadius;
        bool InSight;
        enum EAISenseBehaviorType Action;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRadius = (float)InRadius;
    Parms.InSight = (bool)InSight;
    Parms.Action = (enum EAISenseBehaviorType)Action;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAISubSystemStatics::GetNearestPMCPlayer(struct AActor* InAIPawn, float InRadius, bool InSight, EAISenseBehaviorType Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNearestPMCPlayer");
    struct
    {
        struct AActor* InAIPawn;
        float InRadius;
        bool InSight;
        enum EAISenseBehaviorType Action;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRadius = (float)InRadius;
    Parms.InSight = (bool)InSight;
    Parms.Action = (enum EAISenseBehaviorType)Action;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAISubSystemStatics::GetNearestInventoryCanPickUp(struct AActor* InAIPawn, float InRange, bool bIgnoreChecked, float PathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNearestInventoryCanPickUp");
    struct
    {
        struct AActor* InAIPawn;
        float InRange;
        bool bIgnoreChecked;
        float PathLength;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRange = (float)InRange;
    Parms.bIgnoreChecked = (bool)bIgnoreChecked;
    Parms.PathLength = (float)PathLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAISubSystemStatics::GetNearestDBNOAITeammate(struct AActor* InAIPawn, float InRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNearestDBNOAITeammate");
    struct
    {
        struct AActor* InAIPawn;
        float InRange;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRange = (float)InRange;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAISubSystemStatics::GetNearbyDoor(struct AActor* InAIPawn, float InRadius, bool bWantNearest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNearbyDoor");
    struct
    {
        struct AActor* InAIPawn;
        float InRadius;
        bool bWantNearest;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRadius = (float)InRadius;
    Parms.bWantNearest = (bool)bWantNearest;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetNavPathEndLoc(const struct FNPCAINavPathForBP& NavPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetNavPathEndLoc");
    struct
    {
        struct FNPCAINavPathForBP NavPath;
        struct FVector ReturnValue;
    } Parms{};
    Parms.NavPath = (struct FNPCAINavPathForBP)NavPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetMovingAINumInRendered(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetMovingAINumInRendered");
    struct
    {
        struct UObject* WorldContext;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetMovingAINum(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetMovingAINum");
    struct
    {
        struct UObject* WorldContext;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAILeanType UNPCAISubSystemStatics::GetLeanType(struct AActor* AIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetLeanType");
    struct
    {
        struct AActor* AIOwner;
        enum EAILeanType ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::GetLatestAllyDeathInfo(struct AActor* InAIPawn, struct FAIGroupAllyDeathInfo& OutDeathInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetLatestAllyDeathInfo");
    struct
    {
        struct AActor* InAIPawn;
        struct FAIGroupAllyDeathInfo OutDeathInfo;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDeathInfo = Parms.OutDeathInfo;
    return Parms.ReturnValue;
}

ENPCAIMoveResult UNPCAISubSystemStatics::GetLastMoveResult(struct AActor* AIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetLastMoveResult");
    struct
    {
        struct AActor* AIOwner;
        enum ENPCAIMoveResult ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAISubSystemStatics::GetLastBeHitedTime(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetLastBeHitedTime");
    struct
    {
        struct AActor* InAIPawn;
        float ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::GetIsInTryLeanShoot(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetIsInTryLeanShoot");
    struct
    {
        struct AActor* InAIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::GetInventorysCanPickUp(struct AActor* InAIPawn, float InRange, float PathLength, bool bIgnoreChecked, struct TArray<struct AActor*>& OutInventorys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetInventorysCanPickUp");
    struct
    {
        struct AActor* InAIPawn;
        float InRange;
        float PathLength;
        bool bIgnoreChecked;
        struct TArray<struct AActor*> OutInventorys;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRange = (float)InRange;
    Parms.PathLength = (float)PathLength;
    Parms.bIgnoreChecked = (bool)bIgnoreChecked;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutInventorys = Parms.OutInventorys;
    return Parms.ReturnValue;
}

struct APawn* UNPCAISubSystemStatics::GetIfOverlapOther(struct AActor* InAIPawn, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetIfOverlapOther");
    struct
    {
        struct AActor* InAIPawn;
        float InRadius;
        struct APawn* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRadius = (float)InRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetGunShootStartPointByPose(struct AActor* InAIPawn, const EAIPose& AIPose, const EAILeanType& AILean, struct UNPCAIPropertyComponent_Shoot* InShootProps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGunShootStartPointByPose");
    struct
    {
        struct AActor* InAIPawn;
        enum EAIPose AIPose;
        enum EAILeanType AILean;
        struct UNPCAIPropertyComponent_Shoot* InShootProps;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.AIPose = (enum EAIPose)AIPose;
    Parms.AILean = (enum EAILeanType)AILean;
    Parms.InShootProps = (struct UNPCAIPropertyComponent_Shoot*)InShootProps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetGunShootStartPointAtLocation(struct AActor* InAIPawn, const struct FVector& InActorLocation, const EAIPose& AIPose, const EAILeanType& AILean)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGunShootStartPointAtLocation");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InActorLocation;
        enum EAIPose AIPose;
        enum EAILeanType AILean;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InActorLocation = (struct FVector)InActorLocation;
    Parms.AIPose = (enum EAIPose)AIPose;
    Parms.AILean = (enum EAILeanType)AILean;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetGunShootStartPoint(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGunShootStartPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAISubSystemStatics::GetGroupSharedEnemySingleInfoByTarget(struct AActor* InAIPawn, struct AActor* InTargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGroupSharedEnemySingleInfoByTarget");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InTargetPawn;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAISubSystemStatics::GetGroupSharedEnemySingleInfo(struct AActor* InAIOwner, struct UNPCAITargetInfo* InEnemyInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGroupSharedEnemySingleInfo");
    struct
    {
        struct AActor* InAIOwner;
        struct UNPCAITargetInfo* InEnemyInfo;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    Parms.InEnemyInfo = (struct UNPCAITargetInfo*)InEnemyInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetGroupEnemyHartedValue(struct AActor* InAIOwner, struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGroupEnemyHartedValue");
    struct
    {
        struct AActor* InAIOwner;
        struct AActor* InEnemy;
        int32_t ReturnValue;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    Parms.InEnemy = (struct AActor*)InEnemy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* UNPCAISubSystemStatics::GetGoalProtectedPerson(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGoalProtectedPerson");
    struct
    {
        struct AActor* AIPawn;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* UNPCAISubSystemStatics::GetGoalEnemyPerson(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGoalEnemyPerson");
    struct
    {
        struct AActor* InAIPawn;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAITargetInfo* UNPCAISubSystemStatics::GetGoalEnemyInfo(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetGoalEnemyInfo");
    struct
    {
        struct AActor* InAIPawn;
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAISubSystemStatics::GetFootSounderThrower(struct AActor* AIPawn, struct AActor* FootSounder, bool& OutbAttractAI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetFootSounderThrower");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* FootSounder;
        bool OutbAttractAI;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.FootSounder = (struct AActor*)FootSounder;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutbAttractAI = Parms.OutbAttractAI;
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetFiringAINum(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetFiringAINum");
    struct
    {
        struct UObject* WorldContext;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAISubSystemStatics::GetFireHitEnemyLastTimeUsePredestined(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetFireHitEnemyLastTimeUsePredestined");
    struct
    {
        struct AActor* InAIPawn;
        float ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetEnemyHartedValue(struct AActor* InAIPawn, struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetEnemyHartedValue");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InEnemy;
        int32_t ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InEnemy = (struct AActor*)InEnemy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIGroupRequestController* UNPCAISubSystemStatics::GetDynamicGroupRequestController(int32_t DyGroupId, struct UObject* InWorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetDynamicGroupRequestController");
    struct
    {
        int32_t DyGroupId;
        struct UObject* InWorldContext;
        struct UNPCAIGroupRequestController* ReturnValue;
    } Parms{};
    Parms.DyGroupId = (int32_t)DyGroupId;
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIDynamicGroupInfo* UNPCAISubSystemStatics::GetDynamicGroupInfo(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetDynamicGroupInfo");
    struct
    {
        struct AActor* InAIPawn;
        struct UNPCAIDynamicGroupInfo* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetDSGetMuzzleFlashSocketLocation(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetDSGetMuzzleFlashSocketLocation");
    struct
    {
        struct ACharacter* Character;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetDestination(struct AActor* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetDestination");
    struct
    {
        struct AActor* InOwner;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIMoveType UNPCAISubSystemStatics::GetCurrentMoveType(struct AActor* AIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetCurrentMoveType");
    struct
    {
        struct AActor* AIOwner;
        enum EAIMoveType ReturnValue;
    } Parms{};
    Parms.AIOwner = (struct AActor*)AIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetCurrentDynamicGroupId(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetCurrentDynamicGroupId");
    struct
    {
        struct AActor* InAIPawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::GetCharactersIfOverlapOther(struct AActor* InAIPawn, float InRadius, struct TArray<struct AActor*>& OverlapCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetCharactersIfOverlapOther");
    struct
    {
        struct AActor* InAIPawn;
        float InRadius;
        struct TArray<struct AActor*> OverlapCharacters;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InRadius = (float)InRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OverlapCharacters = Parms.OverlapCharacters;
    return Parms.ReturnValue;
}

struct ACharacter* UNPCAISubSystemStatics::GetCanWarningScavPlayer(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetCanWarningScavPlayer");
    struct
    {
        struct AActor* AIPawn;
        struct ACharacter* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetAllSceneEvents(struct UObject* WorldContext, struct TArray<struct UAISceneEventMessage*>& SceneEvents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllSceneEvents");
    struct
    {
        struct UObject* WorldContext;
        struct TArray<struct UAISceneEventMessage*> SceneEvents;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SceneEvents = Parms.SceneEvents;
}

void UNPCAISubSystemStatics::GetAllSceneEventInfoListWithAI(struct UObject* WorldContext, int64_t AIID, int64_t AIPathGroupID, const struct FVector& AILocation, struct TArray<struct FNPCAISceneEventInfo>& OutEventInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllSceneEventInfoListWithAI");
    struct
    {
        struct UObject* WorldContext;
        int64_t AIID;
        int64_t AIPathGroupID;
        struct FVector AILocation;
        struct TArray<struct FNPCAISceneEventInfo> OutEventInfos;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.AIID = (int64_t)AIID;
    Parms.AIPathGroupID = (int64_t)AIPathGroupID;
    Parms.AILocation = (struct FVector)AILocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutEventInfos = Parms.OutEventInfos;
}

void UNPCAISubSystemStatics::GetAllScavPlayerList(struct AActor* InAIPawn, struct TArray<struct AActor*>& ScavPlayerList, bool bContainsRemoteActor, bool InSight, EAISenseBehaviorType Action)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllScavPlayerList");
    struct
    {
        struct AActor* InAIPawn;
        struct TArray<struct AActor*> ScavPlayerList;
        bool bContainsRemoteActor;
        bool InSight;
        enum EAISenseBehaviorType Action;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.bContainsRemoteActor = (bool)bContainsRemoteActor;
    Parms.InSight = (bool)InSight;
    Parms.Action = (enum EAISenseBehaviorType)Action;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ScavPlayerList = Parms.ScavPlayerList;
}

struct TArray<struct AActor*> UNPCAISubSystemStatics::GetAllInSightEnemysBySelf(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllInSightEnemysBySelf");
    struct
    {
        struct AActor* InAIPawn;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAISubSystemStatics::GetAllInSightEnemysByGroup(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllInSightEnemysByGroup");
    struct
    {
        struct AActor* InAIPawn;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAISubSystemStatics::GetAllHadSeenEnemysBySelf(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllHadSeenEnemysBySelf");
    struct
    {
        struct AActor* InAIPawn;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAISubSystemStatics::GetAllHadSeenEnemysByGroup(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllHadSeenEnemysByGroup");
    struct
    {
        struct AActor* InAIPawn;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetAllAllyDeathInfo(struct AActor* InAIPawn, struct TArray<struct FAIGroupAllyDeathInfo>& OutDeathInfoList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAllAllyDeathInfo");
    struct
    {
        struct AActor* InAIPawn;
        struct TArray<struct FAIGroupAllyDeathInfo> OutDeathInfoList;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDeathInfoList = Parms.OutDeathInfoList;
}

void UNPCAISubSystemStatics::GetAliveTeamMembers(struct AActor* AIPawn, struct AActor* Player, struct TArray<struct ACharacter*>& OutTeamMembers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAliveTeamMembers");
    struct
    {
        struct AActor* AIPawn;
        struct AActor* Player;
        struct TArray<struct ACharacter*> OutTeamMembers;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.Player = (struct AActor*)Player;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTeamMembers = Parms.OutTeamMembers;
}

int32_t UNPCAISubSystemStatics::GetAIPeekCount(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAIPeekCount");
    struct
    {
        struct AActor* AIPawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAISubSystemStatics::GetAimingTypeWeightInRuntime(struct AActor* InAIPawn, EAIBodyBulkType InBodyBulk, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAimingTypeWeightInRuntime");
    struct
    {
        struct AActor* InAIPawn;
        enum EAIBodyBulkType InBodyBulk;
        bool bIsForPlayer;
        float ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InBodyBulk = (enum EAIBodyBulkType)InBodyBulk;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetAimingPoint(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAimingPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAISubSystemStatics::GetAimingOffset(struct AActor* AIPawn, float WeakenTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAimingOffset");
    struct
    {
        struct AActor* AIPawn;
        float WeakenTime;
        struct FVector ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.WeakenTime = (float)WeakenTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAISubSystemStatics::GetAIInSection(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAIInSection");
    struct
    {
        struct AActor* AIPawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNPCAISubSystemStatics::GetAICallUpResult(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAICallUpResult");
    struct
    {
        struct AActor* AIPawn;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNPCAISubSystemStatics::GetAICallUpReason(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAICallUpReason");
    struct
    {
        struct AActor* AIPawn;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetAIBeTakeDamageDetail(struct AActor* AIPawn, struct ACharacter*& DamageCauser, struct FVector& CauserLocation, struct FVector& TakerLocation, float& DamageValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAIBeTakeDamageDetail");
    struct
    {
        struct AActor* AIPawn;
        struct ACharacter* DamageCauser;
        struct FVector CauserLocation;
        struct FVector TakerLocation;
        float DamageValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    DamageCauser = Parms.DamageCauser;
    CauserLocation = Parms.CauserLocation;
    TakerLocation = Parms.TakerLocation;
    DamageValue = Parms.DamageValue;
}

int32_t UNPCAISubSystemStatics::GetAIBeenHitCount(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAIBeenHitCount");
    struct
    {
        struct AActor* AIPawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::GetAIAcceptedSceneEventsInProgress(struct AActor* AIPawn, struct TArray<struct UAISceneEventMessage*>& SceneEvents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "GetAIAcceptedSceneEventsInProgress");
    struct
    {
        struct AActor* AIPawn;
        struct TArray<struct UAISceneEventMessage*> SceneEvents;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SceneEvents = Parms.SceneEvents;
}

struct UNPCAITargetInfo* UNPCAISubSystemStatics::FindTargetInfo(struct AActor* InAIPawn, struct AActor* InTargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "FindTargetInfo");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InTargetPawn;
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::FindRushDangerCanStopPoint(struct AActor* InAIPawn, const struct FVector& InCheckPoint, struct FVector& StopPoint, float InBackDist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "FindRushDangerCanStopPoint");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InCheckPoint;
        struct FVector StopPoint;
        float InBackDist;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InCheckPoint = (struct FVector)InCheckPoint;
    Parms.InBackDist = (float)InBackDist;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    StopPoint = Parms.StopPoint;
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UNPCAISubSystemStatics::FindPathToPointAndLength(struct UObject* WorldContext, struct ACharacter* AIPawn, float& OutPathLength, float& OutPathCost, bool& bFind, const struct FVector& InPointStart, const struct FVector& InPointToGo, EPathExistenceTestMode TestMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "FindPathToPointAndLength");
    struct
    {
        struct UObject* WorldContext;
        struct ACharacter* AIPawn;
        float OutPathLength;
        float OutPathCost;
        bool bFind;
        struct FVector InPointStart;
        struct FVector InPointToGo;
        enum EPathExistenceTestMode TestMode;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.InPointStart = (struct FVector)InPointStart;
    Parms.InPointToGo = (struct FVector)InPointToGo;
    Parms.TestMode = (enum EPathExistenceTestMode)TestMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPathLength = Parms.OutPathLength;
    OutPathCost = Parms.OutPathCost;
    bFind = Parms.bFind;
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UNPCAISubSystemStatics::FindPathToPoint(struct AActor* InAIPawn, const struct FVector& InPointStart, const struct FVector& InPointToGo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "FindPathToPoint");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InPointStart;
        struct FVector InPointToGo;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InPointStart = (struct FVector)InPointStart;
    Parms.InPointToGo = (struct FVector)InPointToGo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::FindAmbushAgainstPoint(struct AActor* InAIPawn, struct FVector InPointStart, struct FVector InPointToGo, struct FVector& OutPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "FindAmbushAgainstPoint");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InPointStart;
        struct FVector InPointToGo;
        struct FVector OutPoint;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InPointStart = (struct FVector)InPointStart;
    Parms.InPointToGo = (struct FVector)InPointToGo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPoint = Parms.OutPoint;
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::DismissDynamicGroupById(int32_t DyGroupId, struct UObject* InWorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "DismissDynamicGroupById");
    struct
    {
        int32_t DyGroupId;
        struct UObject* InWorldContext;
    } Parms{};
    Parms.DyGroupId = (int32_t)DyGroupId;
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::DismissDynamicGroup(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "DismissDynamicGroup");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::DisableFlanking(struct AActor* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "DisableFlanking");
    struct
    {
        struct AActor* InOwner;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UNPCAIDynamicGroupInfo* UNPCAISubSystemStatics::CreateDynamicGroup(struct AActor* InAIPawn, struct UNPCAIDynamicGroupInfo* DynamicGroupClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CreateDynamicGroup");
    struct
    {
        struct AActor* InAIPawn;
        struct UNPCAIDynamicGroupInfo* DynamicGroupClass;
        struct UNPCAIDynamicGroupInfo* ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.DynamicGroupClass = (struct UNPCAIDynamicGroupInfo*)DynamicGroupClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::CloseDoor(struct AActor* InAIPawn, struct AActor* InDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CloseDoor");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InDoor;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InDoor = (struct AActor*)InDoor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::CheckFireCanHitPenetration(struct AActor* InAIPawn, const struct FHitResult& InHitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CheckFireCanHitPenetration");
    struct
    {
        struct AActor* InAIPawn;
        struct FHitResult InHitResult;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InHitResult = (struct FHitResult)InHitResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::CheckCanStackGun(struct AActor* InAIPawn, struct AActor* InTargetPawn, EAIPose& OutAIPose, EAILeanType& OutAILean, struct FVector& OutShotPoint, float InCheckTargetRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CheckCanStackGun");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InTargetPawn;
        enum EAIPose OutAIPose;
        enum EAILeanType OutAILean;
        struct FVector OutShotPoint;
        float InCheckTargetRadius;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    Parms.InCheckTargetRadius = (float)InCheckTargetRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutAIPose = Parms.OutAIPose;
    OutAILean = Parms.OutAILean;
    OutShotPoint = Parms.OutShotPoint;
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::CheckCanGotoPoint(struct UObject* WorldContext, const struct FVector& InPointStart, const struct FVector& InPointToGo, float LimitLenght)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CheckCanGotoPoint");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InPointStart;
        struct FVector InPointToGo;
        float LimitLenght;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InPointStart = (struct FVector)InPointStart;
    Parms.InPointToGo = (struct FVector)InPointToGo;
    Parms.LimitLenght = (float)LimitLenght;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::CheckAIGroupDBNOWipeOut(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CheckAIGroupDBNOWipeOut");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::ChangeAlert(struct AActor* AIPawn, bool bAlert)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "ChangeAlert");
    struct
    {
        struct AActor* AIPawn;
        bool bAlert;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.bAlert = (bool)bAlert;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::CanTryProne(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CanTryProne");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::CanShootPointIfOnStandPoint(struct AActor* AIPawn, const struct FVector& StandPoint, const struct FVector& TargetPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CanShootPointIfOnStandPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector StandPoint;
        struct FVector TargetPoint;
        struct AActor* IgnoreActor;
        bool bIgnoreCharacters;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.StandPoint = (struct FVector)StandPoint;
    Parms.TargetPoint = (struct FVector)TargetPoint;
    Parms.IgnoreActor = (struct AActor*)IgnoreActor;
    Parms.bIgnoreCharacters = (bool)bIgnoreCharacters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::CanShootPoint(struct AActor* InAIPawn, struct FVector InShootPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CanShootPoint");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InShootPoint;
        struct AActor* IgnoreActor;
        bool bIgnoreCharacters;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InShootPoint = (struct FVector)InShootPoint;
    Parms.IgnoreActor = (struct AActor*)IgnoreActor;
    Parms.bIgnoreCharacters = (bool)bIgnoreCharacters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::CanSeePointIfOnStandPoint(struct AActor* AIPawn, const struct FVector& StandPoint, const struct FVector& TargetPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CanSeePointIfOnStandPoint");
    struct
    {
        struct AActor* AIPawn;
        struct FVector StandPoint;
        struct FVector TargetPoint;
        struct AActor* IgnoreActor;
        bool bIgnoreCharacters;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.StandPoint = (struct FVector)StandPoint;
    Parms.TargetPoint = (struct FVector)TargetPoint;
    Parms.IgnoreActor = (struct AActor*)IgnoreActor;
    Parms.bIgnoreCharacters = (bool)bIgnoreCharacters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::CanSeePoint(struct AActor* InAIPawn, struct FVector InPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CanSeePoint");
    struct
    {
        struct AActor* InAIPawn;
        struct FVector InPoint;
        struct AActor* IgnoreActor;
        bool bIgnoreCharacters;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InPoint = (struct FVector)InPoint;
    Parms.IgnoreActor = (struct AActor*)IgnoreActor;
    Parms.bIgnoreCharacters = (bool)bIgnoreCharacters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAISubSystemStatics::CanOpenDoor(struct AActor* InAIPawn, struct AActor* InDoor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CanOpenDoor");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InDoor;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InDoor = (struct AActor*)InDoor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::CancelPickUpInventory(struct AActor* InAIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CancelPickUpInventory");
    struct
    {
        struct AActor* InAIPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UNPCAISubSystemStatics::CalculateRequiredAimingTime(struct AActor* AIPawn, const struct FVector& AimingPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CalculateRequiredAimingTime");
    struct
    {
        struct AActor* AIPawn;
        struct FVector AimingPoint;
        float ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.AimingPoint = (struct FVector)AimingPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAISubSystemStatics::CalculatePathLengthToPoint(struct UObject* WorldContext, const struct FVector& InPointStart, const struct FVector& InPointToGo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CalculatePathLengthToPoint");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InPointStart;
        struct FVector InPointToGo;
        float ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InPointStart = (struct FVector)InPointStart;
    Parms.InPointToGo = (struct FVector)InPointToGo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::CalculateGroupMembersGoalEnemy(struct AActor* InAIOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CalculateGroupMembersGoalEnemy");
    struct
    {
        struct AActor* InAIOwner;
    } Parms{};
    Parms.InAIOwner = (struct AActor*)InAIOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::CalcPathToPoint(struct AActor* InOwner, struct FVector InPosition, const struct FNPCAIMoveRequestCustomDataImpl& MoveRequestCustomData, struct FNPCAINavPathForBP& OutNavPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "CalcPathToPoint");
    struct
    {
        struct AActor* InOwner;
        struct FVector InPosition;
        struct FNPCAIMoveRequestCustomDataImpl MoveRequestCustomData;
        struct FNPCAINavPathForBP OutNavPath;
    } Parms{};
    Parms.InOwner = (struct AActor*)InOwner;
    Parms.InPosition = (struct FVector)InPosition;
    Parms.MoveRequestCustomData = (struct FNPCAIMoveRequestCustomDataImpl)MoveRequestCustomData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutNavPath = Parms.OutNavPath;
}

bool UNPCAISubSystemStatics::AIUseInventoryByClass(struct AActor* InAIPawn, struct UObject* InventoryClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIUseInventoryByClass");
    struct
    {
        struct AActor* InAIPawn;
        struct UObject* InventoryClass;
        bool ReturnValue;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InventoryClass = (struct UObject*)InventoryClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::AIStopFire(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIStopFire");
    struct
    {
        struct AActor* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::AIStartFire(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIStartFire");
    struct
    {
        struct AActor* AIPawn;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::AIRLUpdateFireSetting(struct AActor* AIPawn, bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, float FireInterval, bool bIgnoreAimingTime, bool bEnabledRecoilControl, bool bEnabledHitRateControl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIRLUpdateFireSetting");
    struct
    {
        struct AActor* AIPawn;
        bool CalcShoot;
        bool CalcSight;
        struct AActor* EnemyTarget;
        float FireInterval;
        bool bIgnoreAimingTime;
        bool bEnabledRecoilControl;
        bool bEnabledHitRateControl;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.CalcShoot = (bool)CalcShoot;
    Parms.CalcSight = (bool)CalcSight;
    Parms.EnemyTarget = (struct AActor*)EnemyTarget;
    Parms.FireInterval = (float)FireInterval;
    Parms.bIgnoreAimingTime = (bool)bIgnoreAimingTime;
    Parms.bEnabledRecoilControl = (bool)bEnabledRecoilControl;
    Parms.bEnabledHitRateControl = (bool)bEnabledHitRateControl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AIRLThrowProjectile(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIRLThrowProjectile");
    struct
    {
        struct AActor* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AIRLSwitchToProjectile(struct AActor* AIPawn, int64_t ProjectileID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIRLSwitchToProjectile");
    struct
    {
        struct AActor* AIPawn;
        int64_t ProjectileID;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.ProjectileID = (int64_t)ProjectileID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AIRLSwitchToBestWeapon(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIRLSwitchToBestWeapon");
    struct
    {
        struct AActor* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AIRLHoldProjectile(struct AActor* AIPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIRLHoldProjectile");
    struct
    {
        struct AActor* AIPawn;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AIGiveUpSceneEvent(struct AActor* AIPawn, struct UAISceneEventMessage* SceneEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIGiveUpSceneEvent");
    struct
    {
        struct AActor* AIPawn;
        struct UAISceneEventMessage* SceneEvent;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.SceneEvent = (struct UAISceneEventMessage*)SceneEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AICompleteSceneEvent(struct AActor* AIPawn, struct UAISceneEventMessage* SceneEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AICompleteSceneEvent");
    struct
    {
        struct AActor* AIPawn;
        struct UAISceneEventMessage* SceneEvent;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.SceneEvent = (struct UAISceneEventMessage*)SceneEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNPCAISubSystemStatics::AIAcceptSceneEvent(struct AActor* AIPawn, struct UAISceneEventMessage* SceneEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AIAcceptSceneEvent");
    struct
    {
        struct AActor* AIPawn;
        struct UAISceneEventMessage* SceneEvent;
        bool ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.SceneEvent = (struct UAISceneEventMessage*)SceneEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAISubSystemStatics::AddToGroupEnemy(struct AActor* InAIPawn, struct AActor* InEnemy, bool IsTemporary, float TemporaryTime, bool IsLetOthersAllyKnow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AddToGroupEnemy");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InEnemy;
        bool IsTemporary;
        float TemporaryTime;
        bool IsLetOthersAllyKnow;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.IsTemporary = (bool)IsTemporary;
    Parms.TemporaryTime = (float)TemporaryTime;
    Parms.IsLetOthersAllyKnow = (bool)IsLetOthersAllyKnow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AddToGroupAlly(struct AActor* InAIPawn, struct AActor* InTargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AddToGroupAlly");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* InTargetPawn;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InTargetPawn = (struct AActor*)InTargetPawn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AddInventoryToIgnorePickUp(struct AActor* InAIPawn, struct AActor* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AddInventoryToIgnorePickUp");
    struct
    {
        struct AActor* InAIPawn;
        struct AActor* Inventory;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.Inventory = (struct AActor*)Inventory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAISubSystemStatics::AddAimingTypeInRuntime(struct AActor* InAIPawn, EAIBodyBulkType InBodyBulk, float InWeight, bool bIsForPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAISubSystemStatics", "AddAimingTypeInRuntime");
    struct
    {
        struct AActor* InAIPawn;
        enum EAIBodyBulkType InBodyBulk;
        float InWeight;
        bool bIsForPlayer;
    } Parms{};
    Parms.InAIPawn = (struct AActor*)InAIPawn;
    Parms.InBodyBulk = (enum EAIBodyBulkType)InBodyBulk;
    Parms.InWeight = (float)InWeight;
    Parms.bIsForPlayer = (bool)bIsForPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UNPCAITacticSystemComponent
bool UNPCAITacticSystemComponent::UnOccupyTacticPoint(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "UnOccupyTacticPoint");
    struct
    {
        int32_t PointID;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITacticSystemComponent::SetCurrentTacticPointID(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "SetCurrentTacticPointID");
    struct
    {
        int32_t PointID;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAITacticSystemComponent::PointIsOccupy(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "PointIsOccupy");
    struct
    {
        int32_t PointID;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::OccupyTacticPoint(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "OccupyTacticPoint");
    struct
    {
        int32_t PointID;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::IsSafeForOneEnemy(const struct FVector& InPointLocation, const struct TArray<struct FActionPointRadianSafe>& InOrientRadianSafetys, const struct FVector& InEnemyPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "IsSafeForOneEnemy");
    struct
    {
        struct FVector InPointLocation;
        struct TArray<struct FActionPointRadianSafe> InOrientRadianSafetys;
        struct FVector InEnemyPos;
        bool ReturnValue;
    } Parms{};
    Parms.InPointLocation = (struct FVector)InPointLocation;
    Parms.InOrientRadianSafetys = (struct TArray<struct FActionPointRadianSafe>)InOrientRadianSafetys;
    Parms.InEnemyPos = (struct FVector)InEnemyPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::IsSafeForAllEnemy(const struct FVector& InPointLocation, const struct TArray<struct FActionPointRadianSafe>& InOrientRadianSafetys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "IsSafeForAllEnemy");
    struct
    {
        struct FVector InPointLocation;
        struct TArray<struct FActionPointRadianSafe> InOrientRadianSafetys;
        bool ReturnValue;
    } Parms{};
    Parms.InPointLocation = (struct FVector)InPointLocation;
    Parms.InOrientRadianSafetys = (struct TArray<struct FActionPointRadianSafe>)InOrientRadianSafetys;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITacticSystemComponent::GetTotalTacticPointNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetTotalTacticPointNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::GetTacticPointData(int32_t PointID, struct FTacticPointData& PointData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetTacticPointData");
    struct
    {
        int32_t PointID;
        struct FTacticPointData PointData;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    PointData = Parms.PointData;
    return Parms.ReturnValue;
}

struct AActor* UNPCAITacticSystemComponent::GetPointOccupiedTaker(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetPointOccupiedTaker");
    struct
    {
        int32_t PointID;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::GetKeyRoutePointDataByUniqueIndex(int32_t PointUniqueIndex, struct FKeyRoutePointData& PointData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetKeyRoutePointDataByUniqueIndex");
    struct
    {
        int32_t PointUniqueIndex;
        struct FKeyRoutePointData PointData;
        bool ReturnValue;
    } Parms{};
    Parms.PointUniqueIndex = (int32_t)PointUniqueIndex;
    this->ProcessEvent(Func, &Parms);
    PointData = Parms.PointData;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::GetKeyRoutePointData(int32_t PointID, struct FKeyRoutePointData& PointData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetKeyRoutePointData");
    struct
    {
        int32_t PointID;
        struct FKeyRoutePointData PointData;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    PointData = Parms.PointData;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::GetFarthestTacticPointInList(struct FVector InCenter, const struct TArray<struct FTacticPointData>& InPointsList, struct FTacticPointData& OutPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetFarthestTacticPointInList");
    struct
    {
        struct FVector InCenter;
        struct TArray<struct FTacticPointData> InPointsList;
        struct FTacticPointData OutPoint;
        bool ReturnValue;
    } Parms{};
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InPointsList = (struct TArray<struct FTacticPointData>)InPointsList;
    this->ProcessEvent(Func, &Parms);
    OutPoint = Parms.OutPoint;
    return Parms.ReturnValue;
}

int32_t UNPCAITacticSystemComponent::GetCurrentTacticPointID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetCurrentTacticPointID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::GetCurrentTacticPointData(struct FTacticPointData& PointData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetCurrentTacticPointData");
    struct
    {
        struct FTacticPointData PointData;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PointData = Parms.PointData;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::GetClosestTacticPointInList(struct FVector InCenter, const struct TArray<struct FTacticPointData>& InPointsList, struct FTacticPointData& OutPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "GetClosestTacticPointInList");
    struct
    {
        struct FVector InCenter;
        struct TArray<struct FTacticPointData> InPointsList;
        struct FTacticPointData OutPoint;
        bool ReturnValue;
    } Parms{};
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InPointsList = (struct TArray<struct FTacticPointData>)InPointsList;
    this->ProcessEvent(Func, &Parms);
    OutPoint = Parms.OutPoint;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::FindTacticPointsInRadius(struct FVector InCenter, float InRadius, struct TArray<struct FTacticPointData>& OutPoints, const struct TArray<ETacticPointType>& InFindType, float ZLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "FindTacticPointsInRadius");
    struct
    {
        struct FVector InCenter;
        float InRadius;
        struct TArray<struct FTacticPointData> OutPoints;
        struct TArray<ETacticPointType> InFindType;
        float ZLimit;
        bool ReturnValue;
    } Parms{};
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadius = (float)InRadius;
    Parms.InFindType = (struct TArray<ETacticPointType>)InFindType;
    Parms.ZLimit = (float)ZLimit;
    this->ProcessEvent(Func, &Parms);
    OutPoints = Parms.OutPoints;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::FindSafeToPointByKeyRoute(const struct FVector& ToPoint, float InRadius, struct TArray<struct FKeyRoutePointData>& OutPaths, int32_t InDepth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "FindSafeToPointByKeyRoute");
    struct
    {
        struct FVector ToPoint;
        float InRadius;
        struct TArray<struct FKeyRoutePointData> OutPaths;
        int32_t InDepth;
        bool ReturnValue;
    } Parms{};
    Parms.ToPoint = (struct FVector)ToPoint;
    Parms.InRadius = (float)InRadius;
    Parms.InDepth = (int32_t)InDepth;
    this->ProcessEvent(Func, &Parms);
    OutPaths = Parms.OutPaths;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::FindPathByKeyRoute(const struct FKeyRoutePointData& FromPoint, const struct FKeyRoutePointData& ToPoint, EAIKeyRouteQueryType QueryType, struct TArray<struct FKeyRoutePointData>& OutPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "FindPathByKeyRoute");
    struct
    {
        struct FKeyRoutePointData FromPoint;
        struct FKeyRoutePointData ToPoint;
        enum EAIKeyRouteQueryType QueryType;
        struct TArray<struct FKeyRoutePointData> OutPaths;
        bool ReturnValue;
    } Parms{};
    Parms.FromPoint = (struct FKeyRoutePointData)FromPoint;
    Parms.ToPoint = (struct FKeyRoutePointData)ToPoint;
    Parms.QueryType = (enum EAIKeyRouteQueryType)QueryType;
    this->ProcessEvent(Func, &Parms);
    OutPaths = Parms.OutPaths;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::FindNearestSingleTacticPoint(struct FVector InCenter, float InRadius, struct FTacticPointData& OutPoint, const struct TArray<ETacticPointType>& InFindType, float ZLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "FindNearestSingleTacticPoint");
    struct
    {
        struct FVector InCenter;
        float InRadius;
        struct FTacticPointData OutPoint;
        struct TArray<ETacticPointType> InFindType;
        float ZLimit;
        bool ReturnValue;
    } Parms{};
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadius = (float)InRadius;
    Parms.InFindType = (struct TArray<ETacticPointType>)InFindType;
    Parms.ZLimit = (float)ZLimit;
    this->ProcessEvent(Func, &Parms);
    OutPoint = Parms.OutPoint;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::FindBestKeyRoutePoint(const struct FVector& InCenter, float InRadius, struct FKeyRoutePointData& OutPointData, EAIKeyRouteQueryType QueryType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "FindBestKeyRoutePoint");
    struct
    {
        struct FVector InCenter;
        float InRadius;
        struct FKeyRoutePointData OutPointData;
        enum EAIKeyRouteQueryType QueryType;
        bool ReturnValue;
    } Parms{};
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadius = (float)InRadius;
    Parms.QueryType = (enum EAIKeyRouteQueryType)QueryType;
    this->ProcessEvent(Func, &Parms);
    OutPointData = Parms.OutPointData;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CheckPointIsAvailable(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CheckPointIsAvailable");
    struct
    {
        int32_t PointID;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CheckPointIsActivationForAim(int32_t PointID, struct AActor* ThreatTarget, struct FVector ThreatTargetLoc, struct FRotator& AimRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CheckPointIsActivationForAim");
    struct
    {
        int32_t PointID;
        struct AActor* ThreatTarget;
        struct FVector ThreatTargetLoc;
        struct FRotator AimRot;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.ThreatTarget = (struct AActor*)ThreatTarget;
    Parms.ThreatTargetLoc = (struct FVector)ThreatTargetLoc;
    this->ProcessEvent(Func, &Parms);
    AimRot = Parms.AimRot;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CheckActivation(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CheckActivation");
    struct
    {
        int32_t PointID;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CanShootToTarget(int32_t PointID, struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CanShootToTarget");
    struct
    {
        int32_t PointID;
        struct AActor* InEnemy;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CanOverWatch(int32_t PointID, struct AActor* ThreatTarget, struct FVector InThreatTargetLocation, struct FRotator& OutAimRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CanOverWatch");
    struct
    {
        int32_t PointID;
        struct AActor* ThreatTarget;
        struct FVector InThreatTargetLocation;
        struct FRotator OutAimRot;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.ThreatTarget = (struct AActor*)ThreatTarget;
    Parms.InThreatTargetLocation = (struct FVector)InThreatTargetLocation;
    this->ProcessEvent(Func, &Parms);
    OutAimRot = Parms.OutAimRot;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CanEscape(int32_t PointID, struct FVector InPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CanEscape");
    struct
    {
        int32_t PointID;
        struct FVector InPosition;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    Parms.InPosition = (struct FVector)InPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CalculateTacticPointIsSafeById(int32_t PointID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CalculateTacticPointIsSafeById");
    struct
    {
        int32_t PointID;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CalculateTacticPointIsSafe(const struct FTacticPointData& PointData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CalculateTacticPointIsSafe");
    struct
    {
        struct FTacticPointData PointData;
        bool ReturnValue;
    } Parms{};
    Parms.PointData = (struct FTacticPointData)PointData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CalculateKeyRouteSaftyInDepth(const struct FKeyRoutePointData& InKeyRoutePointData, struct TArray<int32_t>& OutPointsIndexs, int32_t InDepth, bool bSort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CalculateKeyRouteSaftyInDepth");
    struct
    {
        struct FKeyRoutePointData InKeyRoutePointData;
        struct TArray<int32_t> OutPointsIndexs;
        int32_t InDepth;
        bool bSort;
        bool ReturnValue;
    } Parms{};
    Parms.InKeyRoutePointData = (struct FKeyRoutePointData)InKeyRoutePointData;
    Parms.InDepth = (int32_t)InDepth;
    Parms.bSort = (bool)bSort;
    this->ProcessEvent(Func, &Parms);
    OutPointsIndexs = Parms.OutPointsIndexs;
    return Parms.ReturnValue;
}

bool UNPCAITacticSystemComponent::CalculateKeyRoutePointIsSafe(const struct FKeyRoutePointData& InKeyRoutePointData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITacticSystemComponent", "CalculateKeyRoutePointIsSafe");
    struct
    {
        struct FKeyRoutePointData InKeyRoutePointData;
        bool ReturnValue;
    } Parms{};
    Parms.InKeyRoutePointData = (struct FKeyRoutePointData)InKeyRoutePointData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAITargetInfo
bool UNPCAITargetInfo::ShallSeenEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "ShallSeenEnemy");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::ShallKnowEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "ShallKnowEnemy");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITargetInfo::SetVisibleFlashLight(bool InVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "SetVisibleFlashLight");
    struct
    {
        bool InVisible;
    } Parms{};
    Parms.InVisible = (bool)InVisible;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::SetVisible(bool InVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "SetVisible");
    struct
    {
        bool InVisible;
    } Parms{};
    Parms.InVisible = (bool)InVisible;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::SetEnemyGroupSingleInfo(struct UNPCAIEnemyGroupSingleInfo* Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "SetEnemyGroupSingleInfo");
    struct
    {
        struct UNPCAIEnemyGroupSingleInfo* Info;
    } Parms{};
    Parms.Info = (struct UNPCAIEnemyGroupSingleInfo*)Info;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::SetCanShoot(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "SetCanShoot");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::ResetCalculatePartInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "ResetCalculatePartInterval");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::RandomUpperPartToShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "RandomUpperPartToShoot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::RandomArmToShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "RandomArmToShoot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAITargetInfo::IsWantShootArmorPart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsWantShootArmorPart");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsVisibleFlashLight(float FlashLightSeeDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsVisibleFlashLight");
    struct
    {
        float FlashLightSeeDuration;
        bool ReturnValue;
    } Parms{};
    Parms.FlashLightSeeDuration = (float)FlashLightSeeDuration;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsVisible");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsRealVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsRealVisible");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsPersonValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsPersonValid");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsInShotProtectedTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsInShotProtectedTime");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsHideInGrassOrSmoke()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsHideInGrassOrSmoke");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsDBNO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsDBNO");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::IsArmorCanProtected(EAIBodyPartType PartType, bool bReCalculate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "IsArmorCanProtected");
    struct
    {
        enum EAIBodyPartType PartType;
        bool bReCalculate;
        bool ReturnValue;
    } Parms{};
    Parms.PartType = (enum EAIBodyPartType)PartType;
    Parms.bReCalculate = (bool)bReCalculate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::HaveSeenPerson()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "HaveSeenPerson");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIEnemyVisibilityType UNPCAITargetInfo::GetVisibleOnlyBySense()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetVisibleOnlyBySense");
    struct
    {
        enum EAIEnemyVisibilityType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfo::GetPersonDeadTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetPersonDeadTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAITargetInfo::GetPersonActorLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetPersonActorLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAITargetInfo::GetPerson()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetPerson");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIBodyPartType UNPCAITargetInfo::GetPartTypeToShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetPartTypeToShoot");
    struct
    {
        enum EAIBodyPartType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfo::GetPartToShootOfGrassRatio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetPartToShootOfGrassRatio");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENPCAISenseBarrier UNPCAITargetInfo::GetPartToShootOfBarrier()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetPartToShootOfBarrier");
    struct
    {
        enum ENPCAISenseBarrier ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAITargetInfo::GetPartToShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetPartToShoot");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfo::GetLastFireTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetLastFireTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfo::GetLastFireMeTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetLastFireMeTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfo::GetInSightBodyPartsLocation(struct TArray<struct FVector>& BodyPartsLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetInSightBodyPartsLocation");
    struct
    {
        struct TArray<struct FVector> BodyPartsLocation;
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    BodyPartsLocation = Parms.BodyPartsLocation;
    return Parms.ReturnValue;
}

float UNPCAITargetInfo::GetGroupSharedTimeLastSeen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetGroupSharedTimeLastSeen");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAITargetInfo::GetGroupSharedPositionLastSeen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetGroupSharedPositionLastSeen");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAITargetInfo::GetGroupSharedPositionEstimate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetGroupSharedPositionEstimate");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAITargetInfo::GetEnemyLastPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetEnemyLastPosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAITargetInfo::GetEnemyGroupSingleInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetEnemyGroupSingleInfo");
    struct
    {
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAITargetInfo::GetEnemyEstimatePosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetEnemyEstimatePosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAITargetInfo::GetDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNPCAITargetInfo::GetCurrentPositon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetCurrentPositon");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITargetInfo::GetCanSeeBodyPartsNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetCanSeeBodyPartsNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::GetBodyPartVisibleInfo(EAIBodyPartType InBodyPart, struct FAIBodyPartVisibilityInfo& OutInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetBodyPartVisibleInfo");
    struct
    {
        enum EAIBodyPartType InBodyPart;
        struct FAIBodyPartVisibilityInfo OutInfo;
        bool ReturnValue;
    } Parms{};
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    this->ProcessEvent(Func, &Parms);
    OutInfo = Parms.OutInfo;
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::GetBodyPartCanShoot(const EAIBodyPartType& InBodyPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetBodyPartCanShoot");
    struct
    {
        enum EAIBodyPartType InBodyPart;
        bool ReturnValue;
    } Parms{};
    Parms.InBodyPart = (enum EAIBodyPartType)InBodyPart;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAIBodyPartVisibilityInfo> UNPCAITargetInfo::GetAllBodyPartVisibleInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetAllBodyPartVisibleInfo");
    struct
    {
        struct TArray<struct FAIBodyPartVisibilityInfo> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UNPCAITargetInfo::GetAlivePerson()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "GetAlivePerson");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITargetInfo::CanShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "CanShoot");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITargetInfo::CalculatePartToShoot(bool bIgnoreInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "CalculatePartToShoot");
    struct
    {
        bool bIgnoreInterval;
    } Parms{};
    Parms.bIgnoreInterval = (bool)bIgnoreInterval;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::CalculateBodyPartForShoot(bool InCanHead, bool InCanChest, bool InStomach, bool InCanLArm, bool InCanRArm, bool InCanLLeg, bool InCanRLeg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "CalculateBodyPartForShoot");
    struct
    {
        bool InCanHead;
        bool InCanChest;
        bool InStomach;
        bool InCanLArm;
        bool InCanRArm;
        bool InCanLLeg;
        bool InCanRLeg;
    } Parms{};
    Parms.InCanHead = (bool)InCanHead;
    Parms.InCanChest = (bool)InCanChest;
    Parms.InStomach = (bool)InStomach;
    Parms.InCanLArm = (bool)InCanLArm;
    Parms.InCanRArm = (bool)InCanRArm;
    Parms.InCanLLeg = (bool)InCanLLeg;
    Parms.InCanRLeg = (bool)InCanRLeg;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITargetInfo::CalculateBodyPartByEnemyArmor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITargetInfo", "CalculateBodyPartByEnemyArmor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UNPCAITeam
void UNPCAITeam::UpdateTemporaryEnemyEndTime(struct AActor* InEnemy, float InEndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "UpdateTemporaryEnemyEndTime");
    struct
    {
        struct AActor* InEnemy;
        float InEndTime;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InEndTime = (float)InEndTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::UpdateGroupEnemyEstimatePosition(struct AActor* InEnemy, struct FVector InPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "UpdateGroupEnemyEstimatePosition");
    struct
    {
        struct AActor* InEnemy;
        struct FVector InPosition;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InPosition = (struct FVector)InPosition;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::UpdateEnemyVisibleInfo(struct AActor* InEnemy, struct FVector InLastSeenPosition, float InLastSeenTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "UpdateEnemyVisibleInfo");
    struct
    {
        struct AActor* InEnemy;
        struct FVector InLastSeenPosition;
        float InLastSeenTime;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InLastSeenPosition = (struct FVector)InLastSeenPosition;
    Parms.InLastSeenTime = (float)InLastSeenTime;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAITeam::SwitchToEnemy(struct AActor* InMember)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "SwitchToEnemy");
    struct
    {
        struct AActor* InMember;
        bool ReturnValue;
    } Parms{};
    Parms.InMember = (struct AActor*)InMember;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITeam::SwitchEnemyToNeutral(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "SwitchEnemyToNeutral");
    struct
    {
        struct AActor* InEnemy;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITeam::SwitchEnemyToAlly(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "SwitchEnemyToAlly");
    struct
    {
        struct AActor* InEnemy;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITeam::SetTemporaryEnemyInfo(struct AActor* InEnemy, bool InIsTemporaryEnemy, float InEndTime, bool InIsFromAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "SetTemporaryEnemyInfo");
    struct
    {
        struct AActor* InEnemy;
        bool InIsTemporaryEnemy;
        float InEndTime;
        bool InIsFromAlly;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InIsTemporaryEnemy = (bool)InIsTemporaryEnemy;
    Parms.InEndTime = (float)InEndTime;
    Parms.InIsFromAlly = (bool)InIsFromAlly;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::SetEnemyHartedValue(struct AActor* InEnemy, int32_t InHartedValue, float IndateTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "SetEnemyHartedValue");
    struct
    {
        struct AActor* InEnemy;
        int32_t InHartedValue;
        float IndateTime;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    Parms.InHartedValue = (int32_t)InHartedValue;
    Parms.IndateTime = (float)IndateTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::RemoveSuspectedPointByType(ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveSuspectedPointByType");
    struct
    {
        enum ENPCPlaceForCheckType InPlaceType;
        struct AActor* InCreator;
    } Parms{};
    Parms.InPlaceType = (enum ENPCPlaceForCheckType)InPlaceType;
    Parms.InCreator = (struct AActor*)InCreator;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::RemoveSuspectedPoint(struct ACharacter* AIPawn, struct UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveSuspectedPoint");
    struct
    {
        struct ACharacter* AIPawn;
        struct UNPCAIAttentionPoint* InAttentionPoint;
        bool bRemoveNearCanSee;
    } Parms{};
    Parms.AIPawn = (struct ACharacter*)AIPawn;
    Parms.InAttentionPoint = (struct UNPCAIAttentionPoint*)InAttentionPoint;
    Parms.bRemoveNearCanSee = (bool)bRemoveNearCanSee;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::RemoveNeutral(struct AActor* InNeutral)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveNeutral");
    struct
    {
        struct AActor* InNeutral;
    } Parms{};
    Parms.InNeutral = (struct AActor*)InNeutral;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::RemoveNearSuspectedPoint(struct UObject* WorldContext, const struct FVector& InLocation, float XYRange, float ZRange, float PointExistTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveNearSuspectedPoint");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InLocation;
        float XYRange;
        float ZRange;
        float PointExistTime;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InLocation = (struct FVector)InLocation;
    Parms.XYRange = (float)XYRange;
    Parms.ZRange = (float)ZRange;
    Parms.PointExistTime = (float)PointExistTime;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAITeam::RemoveFromTeam(struct AActor* C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveFromTeam");
    struct
    {
        struct AActor* C;
        bool ReturnValue;
    } Parms{};
    Parms.C = (struct AActor*)C;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAITeam::RemoveEnemyInfo(struct UNPCAIEnemyGroupSingleInfo* SingleInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveEnemyInfo");
    struct
    {
        struct UNPCAIEnemyGroupSingleInfo* SingleInfo;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.SingleInfo = (struct UNPCAIEnemyGroupSingleInfo*)SingleInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAITeam::RemoveEnemy(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveEnemy");
    struct
    {
        struct AActor* InEnemy;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITeam::RemoveAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "RemoveAlly");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAITeam::IsNeutral(struct AActor* InNeutral)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "IsNeutral");
    struct
    {
        struct AActor* InNeutral;
        bool ReturnValue;
    } Parms{};
    Parms.InNeutral = (struct AActor*)InNeutral;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITeam::IsGroupEnemy(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "IsGroupEnemy");
    struct
    {
        struct AActor* InEnemy;
        bool ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITeam::IsEnoughAllyKillInRange(struct UObject* WorldContext, const struct FVector& InSearchCenter, const float& InSearchRange, const float& InSearchTime, const int32_t& InSearchCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "IsEnoughAllyKillInRange");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InSearchCenter;
        float InSearchRange;
        float InSearchTime;
        int32_t InSearchCount;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InSearchCenter = (struct FVector)InSearchCenter;
    Parms.InSearchRange = (float)InSearchRange;
    Parms.InSearchTime = (float)InSearchTime;
    Parms.InSearchCount = (int32_t)InSearchCount;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITeam::IsEnoughAllyDeathInRange(struct UObject* WorldContext, const struct FVector& InSearchCenter, const float& InSearchRange, const float& InSearchTime, const int32_t& InSearchCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "IsEnoughAllyDeathInRange");
    struct
    {
        struct UObject* WorldContext;
        struct FVector InSearchCenter;
        float InSearchRange;
        float InSearchTime;
        int32_t InSearchCount;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InSearchCenter = (struct FVector)InSearchCenter;
    Parms.InSearchRange = (float)InSearchRange;
    Parms.InSearchTime = (float)InSearchTime;
    Parms.InSearchCount = (int32_t)InSearchCount;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITeam::IsAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "IsAlly");
    struct
    {
        struct AActor* InAlly;
        bool ReturnValue;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAITeam::GetYoungestSuspectedPoint(struct AActor* InPawn, float InRadius, bool InPriorityDanger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetYoungestSuspectedPoint");
    struct
    {
        struct AActor* InPawn;
        float InRadius;
        bool InPriorityDanger;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InPawn = (struct AActor*)InPawn;
    Parms.InRadius = (float)InRadius;
    Parms.InPriorityDanger = (bool)InPriorityDanger;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITeam::GetValidPointsCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetValidPointsCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAITeam::GetTeamMembers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetTeamMembers");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITeam::GetSuspectedPointsNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetSuspectedPointsNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UNPCAIAttentionPoint*> UNPCAITeam::GetSuspectedPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetSuspectedPoints");
    struct
    {
        struct TArray<struct UNPCAIAttentionPoint*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAITeam::GetPlayerAllyList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetPlayerAllyList");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITeam::GetNeutralsNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetNeutralsNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAITeam::GetNearestSuspectedPoint(const struct FVector& InLocation, float Range, float& OutMinDist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetNearestSuspectedPoint");
    struct
    {
        struct FVector InLocation;
        float Range;
        float OutMinDist;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InLocation = (struct FVector)InLocation;
    Parms.Range = (float)Range;
    this->ProcessEvent(Func, &Parms);
    OutMinDist = Parms.OutMinDist;
    return Parms.ReturnValue;
}

int32_t UNPCAITeam::GetNearEnemyNum(struct FVector InCenter, float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetNearEnemyNum");
    struct
    {
        struct FVector InCenter;
        float InRadius;
        int32_t ReturnValue;
    } Parms{};
    Parms.InCenter = (struct FVector)InCenter;
    Parms.InRadius = (float)InRadius;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCAITeam::GetLatestAllyDeathInfo(struct FAIGroupAllyDeathInfo& OutDeathInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetLatestAllyDeathInfo");
    struct
    {
        struct FAIGroupAllyDeathInfo OutDeathInfo;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutDeathInfo = Parms.OutDeathInfo;
    return Parms.ReturnValue;
}

struct UNPCAIGroupRequestController* UNPCAITeam::GetGroupRequestController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetGroupRequestController");
    struct
    {
        struct UNPCAIGroupRequestController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITeam::GetGroupKnowEnemys(struct AActor* AIPawn, float InRange, struct TArray<struct AActor*>& Enemys, int32_t& EnemysNum, bool bIncludeEnemys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetGroupKnowEnemys");
    struct
    {
        struct AActor* AIPawn;
        float InRange;
        struct TArray<struct AActor*> Enemys;
        int32_t EnemysNum;
        bool bIncludeEnemys;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InRange = (float)InRange;
    Parms.bIncludeEnemys = (bool)bIncludeEnemys;
    this->ProcessEvent(Func, &Parms);
    Enemys = Parms.Enemys;
    EnemysNum = Parms.EnemysNum;
}

struct UActorComponent* UNPCAITeam::GetFactionComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetFactionComp");
    struct
    {
        struct UActorComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITeam::GetEnemyNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetEnemyNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UNPCAIEnemyGroupSingleInfo*> UNPCAITeam::GetEnemyInfoList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetEnemyInfoList");
    struct
    {
        struct TArray<struct UNPCAIEnemyGroupSingleInfo*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAITeam::GetEnemyInfo(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetEnemyInfo");
    struct
    {
        struct AActor* InTarget;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITeam::GetEnemyHartedValue(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetEnemyHartedValue");
    struct
    {
        struct AActor* InEnemy;
        int32_t ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNPCAITeam::GetAllyTotalDeathNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetAllyTotalDeathNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UNPCAITeam::GetAllyList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetAllyList");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITeam::GetAllInSightEnemys(float InWorldTimeSeconds, struct TArray<struct AActor*>& InEnemys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetAllInSightEnemys");
    struct
    {
        float InWorldTimeSeconds;
        struct TArray<struct AActor*> InEnemys;
    } Parms{};
    Parms.InWorldTimeSeconds = (float)InWorldTimeSeconds;
    this->ProcessEvent(Func, &Parms);
    InEnemys = Parms.InEnemys;
}

void UNPCAITeam::GetAllHadSeenEnemys(float InWorldTimeSeconds, struct TArray<struct AActor*>& InEnemys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetAllHadSeenEnemys");
    struct
    {
        float InWorldTimeSeconds;
        struct TArray<struct AActor*> InEnemys;
    } Parms{};
    Parms.InWorldTimeSeconds = (float)InWorldTimeSeconds;
    this->ProcessEvent(Func, &Parms);
    InEnemys = Parms.InEnemys;
}

void UNPCAITeam::GetAllAllyDeathInfo(struct TArray<struct FAIGroupAllyDeathInfo>& OutDeathInfoList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "GetAllAllyDeathInfo");
    struct
    {
        struct TArray<struct FAIGroupAllyDeathInfo> OutDeathInfoList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutDeathInfoList = Parms.OutDeathInfoList;
}

void UNPCAITeam::FilterInValidTemporaryEnemys(float InTimeSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "FilterInValidTemporaryEnemys");
    struct
    {
        float InTimeSeconds;
    } Parms{};
    Parms.InTimeSeconds = (float)InTimeSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::FilterInValidSuspectedPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "FilterInValidSuspectedPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::FilterInValidEnemys(float DeleteInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "FilterInValidEnemys");
    struct
    {
        float DeleteInterval;
    } Parms{};
    Parms.DeleteInterval = (float)DeleteInterval;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::FilterInValidAllyAndNeutrals()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "FilterInValidAllyAndNeutrals");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNPCAITeam::AddToTeam(struct AActor* C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "AddToTeam");
    struct
    {
        struct AActor* C;
        bool ReturnValue;
    } Parms{};
    Parms.C = (struct AActor*)C;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIAttentionPoint* UNPCAITeam::AddPointToSearch(struct AActor* InActor, struct FVector InPosition, ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "AddPointToSearch");
    struct
    {
        struct AActor* InActor;
        struct FVector InPosition;
        enum ENPCPlaceForCheckType InPlaceType;
        struct AActor* InCreator;
        struct UNPCAIAttentionPoint* ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InPosition = (struct FVector)InPosition;
    Parms.InPlaceType = (enum ENPCPlaceForCheckType)InPlaceType;
    Parms.InCreator = (struct AActor*)InCreator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITeam::AddNeutral(struct AActor* InNeutral)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "AddNeutral");
    struct
    {
        struct AActor* InNeutral;
    } Parms{};
    Parms.InNeutral = (struct AActor*)InNeutral;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::AddEnemyForAllyKnow(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "AddEnemyForAllyKnow");
    struct
    {
        struct AActor* InEnemy;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
}

struct UNPCAIEnemyGroupSingleInfo* UNPCAITeam::AddEnemy(struct AActor* InEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "AddEnemy");
    struct
    {
        struct AActor* InEnemy;
        struct UNPCAIEnemyGroupSingleInfo* ReturnValue;
    } Parms{};
    Parms.InEnemy = (struct AActor*)InEnemy;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITeam::AddAllyDeathInfo(const struct FVector& InDeathLocation, const struct FVector& InKillerLocation, float InNowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "AddAllyDeathInfo");
    struct
    {
        struct FVector InDeathLocation;
        struct FVector InKillerLocation;
        float InNowTime;
    } Parms{};
    Parms.InDeathLocation = (struct FVector)InDeathLocation;
    Parms.InKillerLocation = (struct FVector)InKillerLocation;
    Parms.InNowTime = (float)InNowTime;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAITeam::AddAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeam", "AddAlly");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

// INPCAITeamInterface
void INPCAITeamInterface::RemoveAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "RemoveAlly");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

bool INPCAITeamInterface::IsAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "IsAlly");
    struct
    {
        struct AActor* InAlly;
        bool ReturnValue;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCAITeamInterface::HasNoDBNOAlly(struct AActor* InSelf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "HasNoDBNOAlly");
    struct
    {
        struct AActor* InSelf;
        bool ReturnValue;
    } Parms{};
    Parms.InSelf = (struct AActor*)InSelf;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* INPCAITeamInterface::GetNearestAlly(struct AActor* AIPawn, float MaxRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetNearestAlly");
    struct
    {
        struct AActor* AIPawn;
        float MaxRange;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.MaxRange = (float)MaxRange;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAITeamInterface::GetHealthyAllyNum(struct AActor* IgnorePawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetHealthyAllyNum");
    struct
    {
        struct AActor* IgnorePawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.IgnorePawn = (struct AActor*)IgnorePawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAITeamInterface::GetAllyNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetAllyNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> INPCAITeamInterface::GetAllyList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetAllyList");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAITeamInterface::GetAllyGoalEnemys(struct TArray<struct UNPCAITargetInfo*>& GoalEnemysList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetAllyGoalEnemys");
    struct
    {
        struct TArray<struct UNPCAITargetInfo*> GoalEnemysList;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    GoalEnemysList = Parms.GoalEnemysList;
}

struct UNPCAITargetInfo* INPCAITeamInterface::GetAllyGoalEnemyNearest(struct AActor* AIPawn, float InRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetAllyGoalEnemyNearest");
    struct
    {
        struct AActor* AIPawn;
        float InRange;
        struct UNPCAITargetInfo* ReturnValue;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.InRange = (float)InRange;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t INPCAITeamInterface::GetAliveAllysNum(struct AActor* IgnorePawn, bool bContainDBNO)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetAliveAllysNum");
    struct
    {
        struct AActor* IgnorePawn;
        bool bContainDBNO;
        int32_t ReturnValue;
    } Parms{};
    Parms.IgnorePawn = (struct AActor*)IgnorePawn;
    Parms.bContainDBNO = (bool)bContainDBNO;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCAITeamInterface::GetAliveAllys(struct AActor* IgnorePawn, bool bContainDBNO, struct TArray<struct AActor*>& AliveAllys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "GetAliveAllys");
    struct
    {
        struct AActor* IgnorePawn;
        bool bContainDBNO;
        struct TArray<struct AActor*> AliveAllys;
    } Parms{};
    Parms.IgnorePawn = (struct AActor*)IgnorePawn;
    Parms.bContainDBNO = (bool)bContainDBNO;
    this->ProcessEvent(Func, &Parms);
    AliveAllys = Parms.AliveAllys;
}

void INPCAITeamInterface::FilterInValidAllys()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "FilterInValidAllys");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCAITeamInterface::AllyPostDied(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "AllyPostDied");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

void INPCAITeamInterface::AddAlly(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAITeamInterface", "AddAlly");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

// UNPCAIThrowSystem
struct FHitResult UNPCAIThrowSystem::PretestGrenadeTrajectory(struct UObject* WorldContextObject, struct AActor* AttackerActor, const struct FVector& ThrowLocation, const struct FVector& TargetLocation, float InitSpeed, float ThrowAngle, float& FlyingTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIThrowSystem", "PretestGrenadeTrajectory");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* AttackerActor;
        struct FVector ThrowLocation;
        struct FVector TargetLocation;
        float InitSpeed;
        float ThrowAngle;
        float FlyingTime;
        struct FHitResult ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AttackerActor = (struct AActor*)AttackerActor;
    Parms.ThrowLocation = (struct FVector)ThrowLocation;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    Parms.InitSpeed = (float)InitSpeed;
    Parms.ThrowAngle = (float)ThrowAngle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    FlyingTime = Parms.FlyingTime;
    return Parms.ReturnValue;
}

struct FRotator UNPCAIThrowSystem::GetThrowRotator(const struct FVector& ActorLocation, const struct FVector& TargetLocation, float ThrowAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIThrowSystem", "GetThrowRotator");
    struct
    {
        struct FVector ActorLocation;
        struct FVector TargetLocation;
        float ThrowAngle;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.ActorLocation = (struct FVector)ActorLocation;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    Parms.ThrowAngle = (float)ThrowAngle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIThrowSystem::GetFlyingTime(const struct FVector& ThrowLocation, const struct FVector& TargetLocation, float InitSpeed, float ThrowAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIThrowSystem", "GetFlyingTime");
    struct
    {
        struct FVector ThrowLocation;
        struct FVector TargetLocation;
        float InitSpeed;
        float ThrowAngle;
        float ReturnValue;
    } Parms{};
    Parms.ThrowLocation = (struct FVector)ThrowLocation;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    Parms.InitSpeed = (float)InitSpeed;
    Parms.ThrowAngle = (float)ThrowAngle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNPCAIThrowSystem::GetFesiableGrenadeThrowAngle(struct UObject* WorldContextObject, struct AActor* AttackerActor, const struct FVector& ActorLocation, const struct FVector& TargetLocation, float InitSpeed, EAIPose PoseType, EAILeanType LeanType, bool bMustThrow, bool bHigherFirst, float& FlyingTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIThrowSystem", "GetFesiableGrenadeThrowAngle");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* AttackerActor;
        struct FVector ActorLocation;
        struct FVector TargetLocation;
        float InitSpeed;
        enum EAIPose PoseType;
        enum EAILeanType LeanType;
        bool bMustThrow;
        bool bHigherFirst;
        float FlyingTime;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AttackerActor = (struct AActor*)AttackerActor;
    Parms.ActorLocation = (struct FVector)ActorLocation;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    Parms.InitSpeed = (float)InitSpeed;
    Parms.PoseType = (enum EAIPose)PoseType;
    Parms.LeanType = (enum EAILeanType)LeanType;
    Parms.bMustThrow = (bool)bMustThrow;
    Parms.bHigherFirst = (bool)bHigherFirst;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    FlyingTime = Parms.FlyingTime;
    return Parms.ReturnValue;
}

struct TArray<float> UNPCAIThrowSystem::GetCandidateGrenadeThrowAngles(struct UObject* WorldContextObject, const struct FVector& ThrowLocation, const struct FVector& TargetLocation, float InitSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAIThrowSystem", "GetCandidateGrenadeThrowAngles");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector ThrowLocation;
        struct FVector TargetLocation;
        float InitSpeed;
        struct TArray<float> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ThrowLocation = (struct FVector)ThrowLocation;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    Parms.InitSpeed = (float)InitSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAITrackLogger
void UNPCAITrackLogger::TrackLOG_Shoot(struct AActor* AIPawn, struct FString EnemyName, bool bUsePredestined, uint8_t PartWantToShoot, const struct FVector& PositionWantToShoot, uint8_t PartActualShoot, const struct FVector& PositionActualShoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "TrackLOG_Shoot");
    struct
    {
        struct AActor* AIPawn;
        struct FString EnemyName;
        bool bUsePredestined;
        uint8_t PartWantToShoot;
        struct FVector PositionWantToShoot;
        uint8_t PartActualShoot;
        struct FVector PositionActualShoot;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.EnemyName = (struct FString)EnemyName;
    Parms.bUsePredestined = (bool)bUsePredestined;
    Parms.PartWantToShoot = (uint8_t)PartWantToShoot;
    Parms.PositionWantToShoot = (struct FVector)PositionWantToShoot;
    Parms.PartActualShoot = (uint8_t)PartActualShoot;
    Parms.PositionActualShoot = (struct FVector)PositionActualShoot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAITrackLogger::TrackLOG_AimingTime(struct AActor* AIPawn, struct FString EnemyName, float OffsetRatio, float ElapsedAimingTime, float RequiredAimingTime, float AimingProgress, float RawRatio, float MaxAimPrecicing, float CurrPrecicingSpd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "TrackLOG_AimingTime");
    struct
    {
        struct AActor* AIPawn;
        struct FString EnemyName;
        float OffsetRatio;
        float ElapsedAimingTime;
        float RequiredAimingTime;
        float AimingProgress;
        float RawRatio;
        float MaxAimPrecicing;
        float CurrPrecicingSpd;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.EnemyName = (struct FString)EnemyName;
    Parms.OffsetRatio = (float)OffsetRatio;
    Parms.ElapsedAimingTime = (float)ElapsedAimingTime;
    Parms.RequiredAimingTime = (float)RequiredAimingTime;
    Parms.AimingProgress = (float)AimingProgress;
    Parms.RawRatio = (float)RawRatio;
    Parms.MaxAimPrecicing = (float)MaxAimPrecicing;
    Parms.CurrPrecicingSpd = (float)CurrPrecicingSpd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAITrackLogger::TrackLOG_AimingPredestined(struct AActor* AIPawn, struct FString EnemyName, bool IsHit, float FinalRate, float RandomValue, float PredestinedRate, int32_t RepeatIndex, float ShotHeadRate, float AIMoveRate, float EnemyMoveRate, float ArmBrokenRate, int32_t ArmBrokenCount, float BattleDurationRate, float InCoverSafeRate, float BeHitedRate, float WeaponAdsMoaBiasRate, float GrassRate, float FlashLightRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "TrackLOG_AimingPredestined");
    struct
    {
        struct AActor* AIPawn;
        struct FString EnemyName;
        bool IsHit;
        float FinalRate;
        float RandomValue;
        float PredestinedRate;
        int32_t RepeatIndex;
        float ShotHeadRate;
        float AIMoveRate;
        float EnemyMoveRate;
        float ArmBrokenRate;
        int32_t ArmBrokenCount;
        float BattleDurationRate;
        float InCoverSafeRate;
        float BeHitedRate;
        float WeaponAdsMoaBiasRate;
        float GrassRate;
        float FlashLightRate;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.EnemyName = (struct FString)EnemyName;
    Parms.IsHit = (bool)IsHit;
    Parms.FinalRate = (float)FinalRate;
    Parms.RandomValue = (float)RandomValue;
    Parms.PredestinedRate = (float)PredestinedRate;
    Parms.RepeatIndex = (int32_t)RepeatIndex;
    Parms.ShotHeadRate = (float)ShotHeadRate;
    Parms.AIMoveRate = (float)AIMoveRate;
    Parms.EnemyMoveRate = (float)EnemyMoveRate;
    Parms.ArmBrokenRate = (float)ArmBrokenRate;
    Parms.ArmBrokenCount = (int32_t)ArmBrokenCount;
    Parms.BattleDurationRate = (float)BattleDurationRate;
    Parms.InCoverSafeRate = (float)InCoverSafeRate;
    Parms.BeHitedRate = (float)BeHitedRate;
    Parms.WeaponAdsMoaBiasRate = (float)WeaponAdsMoaBiasRate;
    Parms.GrassRate = (float)GrassRate;
    Parms.FlashLightRate = (float)FlashLightRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAITrackLogger::TrackLOG_AimingBodyPart(struct AActor* AIPawn, struct FString EnemyName, uint8_t PartAiming, int8_t bHeadCanSee, int8_t bChestCanSee, int8_t bStomachCanSee, int8_t bLArmCanSee, int8_t bRArmCanSee, int8_t bLLegCanSee, int8_t bRLegCanSee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "TrackLOG_AimingBodyPart");
    struct
    {
        struct AActor* AIPawn;
        struct FString EnemyName;
        uint8_t PartAiming;
        int8_t bHeadCanSee;
        int8_t bChestCanSee;
        int8_t bStomachCanSee;
        int8_t bLArmCanSee;
        int8_t bRArmCanSee;
        int8_t bLLegCanSee;
        int8_t bRLegCanSee;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.EnemyName = (struct FString)EnemyName;
    Parms.PartAiming = (uint8_t)PartAiming;
    Parms.bHeadCanSee = (int8_t)bHeadCanSee;
    Parms.bChestCanSee = (int8_t)bChestCanSee;
    Parms.bStomachCanSee = (int8_t)bStomachCanSee;
    Parms.bLArmCanSee = (int8_t)bLArmCanSee;
    Parms.bRArmCanSee = (int8_t)bRArmCanSee;
    Parms.bLLegCanSee = (int8_t)bLLegCanSee;
    Parms.bRLegCanSee = (int8_t)bRLegCanSee;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAITrackLogger::TrackLOG(struct AActor* AIPawn, const EAITrackLOGType& LogType, const struct TArray<struct FString>& KValues)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "TrackLOG");
    struct
    {
        struct AActor* AIPawn;
        enum EAITrackLOGType LogType;
        struct TArray<struct FString> KValues;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.LogType = (enum EAITrackLOGType)LogType;
    Parms.KValues = (struct TArray<struct FString>)KValues;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UNPCAITrackLogger::ToTrackLOGString(const struct FAITrackLOG& LOGData, struct FString TemplateStr, bool bIncludeTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "ToTrackLOGString");
    struct
    {
        struct FAITrackLOG LOGData;
        struct FString TemplateStr;
        bool bIncludeTime;
        struct FString ReturnValue;
    } Parms{};
    Parms.LOGData = (struct FAITrackLOG)LOGData;
    Parms.TemplateStr = (struct FString)TemplateStr;
    Parms.bIncludeTime = (bool)bIncludeTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAITrackLogger::PrintTrackLOG(struct AActor* AIPawn, struct UNPCAIGlobalSharedInfo* SharedVariables, const EAITrackLOGType& LogType, const struct TArray<struct FString>& KValues)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "PrintTrackLOG");
    struct
    {
        struct AActor* AIPawn;
        struct UNPCAIGlobalSharedInfo* SharedVariables;
        enum EAITrackLOGType LogType;
        struct TArray<struct FString> KValues;
    } Parms{};
    Parms.AIPawn = (struct AActor*)AIPawn;
    Parms.SharedVariables = (struct UNPCAIGlobalSharedInfo*)SharedVariables;
    Parms.LogType = (enum EAITrackLOGType)LogType;
    Parms.KValues = (struct TArray<struct FString>)KValues;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNPCAITrackLogger::AutoReleaseTrackLOG(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NPCAITrackLogger", "AutoReleaseTrackLOG");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// INPCAIUALootSubAreaVolumeInterface
int32_t INPCAIUALootSubAreaVolumeInterface::GetBattleIntensityExpectation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIUALootSubAreaVolumeInterface", "GetBattleIntensityExpectation");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCAIZoneGroupInfo
void UNPCAIZoneGroupInfo::UpdateAreaClusterWeight(const float& InPathWeightFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "UpdateAreaClusterWeight");
    struct
    {
        float InPathWeightFactor;
    } Parms{};
    Parms.InPathWeightFactor = (float)InPathWeightFactor;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FAIAreaWeightQueryInfo> UNPCAIZoneGroupInfo::QueryAreaWeightByLocationList(const struct TArray<struct FVector>& InQueryLocList, const float& InPathWeightFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "QueryAreaWeightByLocationList");
    struct
    {
        struct TArray<struct FVector> InQueryLocList;
        float InPathWeightFactor;
        struct TArray<struct FAIAreaWeightQueryInfo> ReturnValue;
    } Parms{};
    Parms.InQueryLocList = (struct TArray<struct FVector>)InQueryLocList;
    Parms.InPathWeightFactor = (float)InPathWeightFactor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIDynamicGroupInfo* UNPCAIZoneGroupInfo::GetDynamicGroupInfo(int32_t GroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "GetDynamicGroupInfo");
    struct
    {
        int32_t GroupID;
        struct UNPCAIDynamicGroupInfo* ReturnValue;
    } Parms{};
    Parms.GroupID = (int32_t)GroupID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNPCAIDynamicGroupInfo* UNPCAIZoneGroupInfo::CreateDynamicGroup(struct AActor* InCreator, struct UNPCAIDynamicGroupInfo* DynamicGroupClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "CreateDynamicGroup");
    struct
    {
        struct AActor* InCreator;
        struct UNPCAIDynamicGroupInfo* DynamicGroupClass;
        struct UNPCAIDynamicGroupInfo* ReturnValue;
    } Parms{};
    Parms.InCreator = (struct AActor*)InCreator;
    Parms.DynamicGroupClass = (struct UNPCAIDynamicGroupInfo*)DynamicGroupClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCAIZoneGroupInfo::BP_OnInitGroupMessage(int32_t InGroupType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "BP_OnInitGroupMessage");
    struct
    {
        int32_t InGroupType;
    } Parms{};
    Parms.InGroupType = (int32_t)InGroupType;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIZoneGroupInfo::BP_OnAllyRemoved(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "BP_OnAllyRemoved");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIZoneGroupInfo::BP_OnAllyDied(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "BP_OnAllyDied");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIZoneGroupInfo::BP_OnAllyAdded(struct AActor* InAlly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "BP_OnAllyAdded");
    struct
    {
        struct AActor* InAlly;
    } Parms{};
    Parms.InAlly = (struct AActor*)InAlly;
    this->ProcessEvent(Func, &Parms);
}

void UNPCAIZoneGroupInfo::AutoReleaseDynamicGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCAIZoneGroupInfo", "AutoReleaseDynamicGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UNPCBTDecorator_BlueprintBase
void UNPCBTDecorator_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveObserverDeactivatedAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveObserverDeactivated(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveObserverDeactivated");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveObserverActivatedAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveObserverActivated(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveObserverActivated");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveExecutionStartAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveExecutionStart(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveExecutionStart");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, uint8_t NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveExecutionFinishAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        uint8_t NodeResult;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.NodeResult = (uint8_t)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_BlueprintBase::ReceiveExecutionFinish(struct AActor* OwnerActor, uint8_t NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "ReceiveExecutionFinish");
    struct
    {
        struct AActor* OwnerActor;
        uint8_t NodeResult;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.NodeResult = (uint8_t)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCBTDecorator_BlueprintBase::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "PerformConditionCheckAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        bool ReturnValue;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCBTDecorator_BlueprintBase::PerformConditionCheck(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "PerformConditionCheck");
    struct
    {
        struct AActor* OwnerActor;
        bool ReturnValue;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "IsDecoratorObserverActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "IsDecoratorExecutionActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APawn* UNPCBTDecorator_BlueprintBase::GetOwnerPawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "GetOwnerPawn");
    struct
    {
        struct APawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIController* UNPCBTDecorator_BlueprintBase::GetOwnerController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_BlueprintBase", "GetOwnerController");
    struct
    {
        struct AAIController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCBTDecorator_SingletonBlueprintBase
void UNPCBTDecorator_SingletonBlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveObserverDeactivatedAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveObserverDeactivated(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveObserverDeactivated");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveObserverActivatedAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveObserverActivated(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveObserverActivated");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveExecutionStartAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveExecutionStart(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveExecutionStart");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, uint8_t NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveExecutionFinishAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        uint8_t NodeResult;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.NodeResult = (uint8_t)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTDecorator_SingletonBlueprintBase::ReceiveExecutionFinish(struct AActor* OwnerActor, uint8_t NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "ReceiveExecutionFinish");
    struct
    {
        struct AActor* OwnerActor;
        uint8_t NodeResult;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.NodeResult = (uint8_t)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCBTDecorator_SingletonBlueprintBase::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "PerformConditionCheckAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        bool ReturnValue;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCBTDecorator_SingletonBlueprintBase::PerformConditionCheck(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "PerformConditionCheck");
    struct
    {
        struct AActor* OwnerActor;
        bool ReturnValue;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCBTDecorator_SingletonBlueprintBase::IsDecoratorObserverActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "IsDecoratorObserverActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCBTDecorator_SingletonBlueprintBase::IsDecoratorExecutionActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTDecorator_SingletonBlueprintBase", "IsDecoratorExecutionActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCBTService_BlueprintBase
void UNPCBTService_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_BlueprintBase::ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveSearchStartAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_BlueprintBase::ReceiveSearchStart(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveSearchStart");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_BlueprintBase::ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveDeactivationAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_BlueprintBase::ReceiveDeactivation(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveDeactivation");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_BlueprintBase::ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveActivationAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_BlueprintBase::ReceiveActivation(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "ReceiveActivation");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCBTService_BlueprintBase::IsServiceActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "IsServiceActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APawn* UNPCBTService_BlueprintBase::GetOwnerPawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "GetOwnerPawn");
    struct
    {
        struct APawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIController* UNPCBTService_BlueprintBase::GetOwnerController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_BlueprintBase", "GetOwnerController");
    struct
    {
        struct AAIController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNPCBTService_SingletonBlueprintBase
void UNPCBTService_SingletonBlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_SingletonBlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_SingletonBlueprintBase::ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveSearchStartAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_SingletonBlueprintBase::ReceiveSearchStart(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveSearchStart");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_SingletonBlueprintBase::ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveDeactivationAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_SingletonBlueprintBase::ReceiveDeactivation(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveDeactivation");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_SingletonBlueprintBase::ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveActivationAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTService_SingletonBlueprintBase::ReceiveActivation(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTService_SingletonBlueprintBase", "ReceiveActivation");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

// UNPCBTTask_BlueprintBase
void UNPCBTTask_BlueprintBase::SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "SetFinishOnMessageWithId");
    struct
    {
        struct FName MessageName;
        int32_t RequestID;
    } Parms{};
    Parms.MessageName = (struct FName)MessageName;
    Parms.RequestID = (int32_t)RequestID;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::SetFinishOnMessage(struct FName MessageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "SetFinishOnMessage");
    struct
    {
        struct FName MessageName;
    } Parms{};
    Parms.MessageName = (struct FName)MessageName;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "ReceiveExecuteAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::ReceiveExecute(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "ReceiveExecute");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "ReceiveAbortAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::ReceiveAbort(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "ReceiveAbort");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

bool UNPCBTTask_BlueprintBase::IsTaskExecuting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "IsTaskExecuting");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNPCBTTask_BlueprintBase::IsTaskAborting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "IsTaskAborting");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APawn* UNPCBTTask_BlueprintBase::GetOwnerPawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "GetOwnerPawn");
    struct
    {
        struct APawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIController* UNPCBTTask_BlueprintBase::GetOwnerController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "GetOwnerController");
    struct
    {
        struct AAIController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNPCBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "FinishExecute");
    struct
    {
        bool bSuccess;
    } Parms{};
    Parms.bSuccess = (bool)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UNPCBTTask_BlueprintBase::FinishAbort()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCBTTask_BlueprintBase", "FinishAbort");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAIDBNOInterface
bool INPCCharacterAIDBNOInterface::IsTargetDBNO(struct AActor* TargetPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIDBNOInterface", "IsTargetDBNO");
    struct
    {
        struct AActor* TargetPawn;
        bool ReturnValue;
    } Parms{};
    Parms.TargetPawn = (struct AActor*)TargetPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIDBNOInterface::IsSelfDBNO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIDBNOInterface", "IsSelfDBNO");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIDBNOInterface::CheckAIGroupDBNOWipeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIDBNOInterface", "CheckAIGroupDBNOWipeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAIDeathInterface
bool INPCCharacterAIDeathInterface::IsDead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIDeathInterface", "IsDead");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAIDebugInterface
void INPCCharacterAIDebugInterface::BoardcastDrawDebugLine(int32_t InDrawID, struct FVector InStart, struct FVector InEnd, struct FColor Color, float InTime, float InThickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIDebugInterface", "BoardcastDrawDebugLine");
    struct
    {
        int32_t InDrawID;
        struct FVector InStart;
        struct FVector InEnd;
        struct FColor Color;
        float InTime;
        float InThickness;
    } Parms{};
    Parms.InDrawID = (int32_t)InDrawID;
    Parms.InStart = (struct FVector)InStart;
    Parms.InEnd = (struct FVector)InEnd;
    Parms.Color = (struct FColor)Color;
    Parms.InTime = (float)InTime;
    Parms.InThickness = (float)InThickness;
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAIExplodeInterface
void INPCCharacterAIExplodeInterface::SetExplodeParams(float InMinDamage, float InMaxDamage, float InDamageRange, bool bInExplodeAtDeath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIExplodeInterface", "SetExplodeParams");
    struct
    {
        float InMinDamage;
        float InMaxDamage;
        float InDamageRange;
        bool bInExplodeAtDeath;
    } Parms{};
    Parms.InMinDamage = (float)InMinDamage;
    Parms.InMaxDamage = (float)InMaxDamage;
    Parms.InDamageRange = (float)InDamageRange;
    Parms.bInExplodeAtDeath = (bool)bInExplodeAtDeath;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIExplodeInterface::NetMulticastExplode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIExplodeInterface", "NetMulticastExplode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAIFireInterface
void INPCCharacterAIFireInterface::UpdatePersistentFireSetting(bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, const struct FVector& FireLocation, float FireInterval, bool bIgnoreAimingTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "UpdatePersistentFireSetting");
    struct
    {
        bool CalcShoot;
        bool CalcSight;
        struct AActor* EnemyTarget;
        struct FVector FireLocation;
        float FireInterval;
        bool bIgnoreAimingTime;
    } Parms{};
    Parms.CalcShoot = (bool)CalcShoot;
    Parms.CalcSight = (bool)CalcSight;
    Parms.EnemyTarget = (struct AActor*)EnemyTarget;
    Parms.FireLocation = (struct FVector)FireLocation;
    Parms.FireInterval = (float)FireInterval;
    Parms.bIgnoreAimingTime = (bool)bIgnoreAimingTime;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::UpdateNaturalFireSetting(const struct FVector& FireLocation, bool bEnabledRecoilControl, bool bEnabledHitRateControl, bool bIgnoreAimingTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "UpdateNaturalFireSetting");
    struct
    {
        struct FVector FireLocation;
        bool bEnabledRecoilControl;
        bool bEnabledHitRateControl;
        bool bIgnoreAimingTime;
    } Parms{};
    Parms.FireLocation = (struct FVector)FireLocation;
    Parms.bEnabledRecoilControl = (bool)bEnabledRecoilControl;
    Parms.bEnabledHitRateControl = (bool)bEnabledHitRateControl;
    Parms.bIgnoreAimingTime = (bool)bIgnoreAimingTime;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::StopPersistentFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "StopPersistentFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::StopFireDirectly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "StopFireDirectly");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::StopFire(int32_t FireMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "StopFire");
    struct
    {
        int32_t FireMode;
    } Parms{};
    Parms.FireMode = (int32_t)FireMode;
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIFireInterface::StartPersistentFire(float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "StartPersistentFire");
    struct
    {
        float Duration;
        bool ReturnValue;
    } Parms{};
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIFireInterface::StartFireNextTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "StartFireNextTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIFireInterface::StartFireDirectly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "StartFireDirectly");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIFireInterface::StartFire(int32_t FireMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "StartFire");
    struct
    {
        int32_t FireMode;
    } Parms{};
    Parms.FireMode = (int32_t)FireMode;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::SetFireAimingPoint(const struct FVector& AimingPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "SetFireAimingPoint");
    struct
    {
        struct FVector AimingPoint;
    } Parms{};
    Parms.AimingPoint = (struct FVector)AimingPoint;
    this->ProcessEvent(Func, &Parms);
}

EAIWorkResult INPCCharacterAIFireInterface::PrepareToFire(struct FNPCAIFireSetting& FireSetting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "PrepareToFire");
    struct
    {
        struct FNPCAIFireSetting FireSetting;
        enum EAIWorkResult ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    FireSetting = Parms.FireSetting;
    return Parms.ReturnValue;
}

bool INPCCharacterAIFireInterface::IsRecentlyFire(float InSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "IsRecentlyFire");
    struct
    {
        float InSeconds;
        bool ReturnValue;
    } Parms{};
    Parms.InSeconds = (float)InSeconds;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIFireInterface::IsPersistentFiring()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "IsPersistentFiring");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIFireInterface::IsInFiringState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "IsInFiringState");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t INPCCharacterAIFireInterface::GetWeaponUseTraceChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "GetWeaponUseTraceChannel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCCharacterAIFireInterface::GetSingleBodyPartLocation(struct ACharacter* InCharacter, EAIBodyPartType InBodyPartType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "GetSingleBodyPartLocation");
    struct
    {
        struct ACharacter* InCharacter;
        enum EAIBodyPartType InBodyPartType;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct ACharacter*)InCharacter;
    Parms.InBodyPartType = (enum EAIBodyPartType)InBodyPartType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCCharacterAIFireInterface::GetMuzzleFlashSocketLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "GetMuzzleFlashSocketLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t INPCCharacterAIFireInterface::GetLookSightUseTraceChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "GetLookSightUseTraceChannel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAIFireInterface::GetLastStopFireTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "GetLastStopFireTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAIFireInterface::GetLastFireTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "GetLastFireTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAIFireInterface::GetFireHitEnemyLastTimeUsePredestined()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "GetFireHitEnemyLastTimeUsePredestined");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIFireInterface::ForcePullBoltReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "ForcePullBoltReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIFireInterface::CheckFireCanHitPenetration(const struct FHitResult& InHitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "CheckFireCanHitPenetration");
    struct
    {
        struct FHitResult InHitResult;
        bool ReturnValue;
    } Parms{};
    Parms.InHitResult = (struct FHitResult)InHitResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIFireInterface::CanStartPersistentFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "CanStartPersistentFire");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIFireInterface::CanMeleeFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "CanMeleeFire");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIFireInterface::CanFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "CanFire");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIFireInterface::AIRLUpdateFireSetting(bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, float FireInterval, bool bIgnoreAimingTime, bool bEnabledRecoilControl, bool bEnabledHitRateControl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "AIRLUpdateFireSetting");
    struct
    {
        bool CalcShoot;
        bool CalcSight;
        struct AActor* EnemyTarget;
        float FireInterval;
        bool bIgnoreAimingTime;
        bool bEnabledRecoilControl;
        bool bEnabledHitRateControl;
    } Parms{};
    Parms.CalcShoot = (bool)CalcShoot;
    Parms.CalcSight = (bool)CalcSight;
    Parms.EnemyTarget = (struct AActor*)EnemyTarget;
    Parms.FireInterval = (float)FireInterval;
    Parms.bIgnoreAimingTime = (bool)bIgnoreAimingTime;
    Parms.bEnabledRecoilControl = (bool)bEnabledRecoilControl;
    Parms.bEnabledHitRateControl = (bool)bEnabledHitRateControl;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::AIRLThrowProjectile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "AIRLThrowProjectile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::AIRLSwitchToProjectile(int64_t ProjectileID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "AIRLSwitchToProjectile");
    struct
    {
        int64_t ProjectileID;
    } Parms{};
    Parms.ProjectileID = (int64_t)ProjectileID;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::AIRLSwitchToBestWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "AIRLSwitchToBestWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIFireInterface::AIRLHoldProjectile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIFireInterface", "AIRLHoldProjectile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAIIKInterface
void INPCCharacterAIIKInterface::UpdateDSIKFootHighDiff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIIKInterface", "UpdateDSIKFootHighDiff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIIKInterface::ShouldDSEnableFootIK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIIKInterface", "ShouldDSEnableFootIK");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAIIKInterface::GetIKFootHighDiffValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIIKInterface", "GetIKFootHighDiffValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAIInventoryInterface
void INPCCharacterAIInventoryInterface::SetReTryTimes(int32_t ReTryTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "SetReTryTimes");
    struct
    {
        int32_t ReTryTimes;
    } Parms{};
    Parms.ReTryTimes = (int32_t)ReTryTimes;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIInventoryInterface::SetReTryInterval(float ReTryInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "SetReTryInterval");
    struct
    {
        float ReTryInterval;
    } Parms{};
    Parms.ReTryInterval = (float)ReTryInterval;
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIInventoryInterface::HasPendingSlicedSuitToGive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "HasPendingSlicedSuitToGive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIInventoryInterface::HasPendingRandSuitToGive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "HasPendingRandSuitToGive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIInventoryInterface::GiveInventoryToAI(uint64_t itemID, int32_t ItemNum, int32_t SkinID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "GiveInventoryToAI");
    struct
    {
        uint64_t itemID;
        int32_t ItemNum;
        int32_t SkinID;
        bool ReturnValue;
    } Parms{};
    Parms.itemID = (uint64_t)itemID;
    Parms.ItemNum = (int32_t)ItemNum;
    Parms.SkinID = (int32_t)SkinID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIInventoryInterface::DoGiveSlicedSuit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "DoGiveSlicedSuit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIInventoryInterface::DoGiveRandSuit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "DoGiveRandSuit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIInventoryInterface::AIUseInventoryByClass(struct UObject* InventoryClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIInventoryInterface", "AIUseInventoryByClass");
    struct
    {
        struct UObject* InventoryClass;
        bool ReturnValue;
    } Parms{};
    Parms.InventoryClass = (struct UObject*)InventoryClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAIMoveInterface
void INPCCharacterAIMoveInterface::StopActiveMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "StopActiveMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIMoveInterface::SetSprint(bool bInSprint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "SetSprint");
    struct
    {
        bool bInSprint;
    } Parms{};
    Parms.bInSprint = (bool)bInSprint;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIMoveInterface::SetSilentWalk(bool bInSilentWalk)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "SetSilentWalk");
    struct
    {
        bool bInSilentWalk;
    } Parms{};
    Parms.bInSilentWalk = (bool)bInSilentWalk;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIMoveInterface::SetMovementSpeed(float BasicStandSpeed, float BasicCrouchSpeed, float BasicProneSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "SetMovementSpeed");
    struct
    {
        float BasicStandSpeed;
        float BasicCrouchSpeed;
        float BasicProneSpeed;
    } Parms{};
    Parms.BasicStandSpeed = (float)BasicStandSpeed;
    Parms.BasicCrouchSpeed = (float)BasicCrouchSpeed;
    Parms.BasicProneSpeed = (float)BasicProneSpeed;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIMoveInterface::SetEnabledSliding(bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "SetEnabledSliding");
    struct
    {
        bool bEnabled;
    } Parms{};
    Parms.bEnabled = (bool)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIMoveInterface::OnNavMoveCompleted(struct FAIRequestID RequestID, uint8_t MovementResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "OnNavMoveCompleted");
    struct
    {
        struct FAIRequestID RequestID;
        uint8_t MovementResult;
    } Parms{};
    Parms.RequestID = (struct FAIRequestID)RequestID;
    Parms.MovementResult = (uint8_t)MovementResult;
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIMoveInterface::IsSprinting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "IsSprinting");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIMoveInterface::IsInNavWalking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "IsInNavWalking");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIMoveInterface::IsBraking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "IsBraking");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIMoveInterface::IsAnyLegBroken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "IsAnyLegBroken");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAIMoveInterface::GetSlidingDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "GetSlidingDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIMoveInterface::CanMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIMoveInterface", "CanMove");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAIPathNodeInterface
bool INPCCharacterAIPathNodeInterface::ShouldWaitAtNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPathNodeInterface", "ShouldWaitAtNode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAIPathNodeInterface::GetWaitTimeAtNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPathNodeInterface", "GetWaitTimeAtNode");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector INPCCharacterAIPathNodeInterface::GetTargetWanderPathLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPathNodeInterface", "GetTargetWanderPathLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPathNodeInterface::CalcNextPathNode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPathNodeInterface", "CalcNextPathNode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAIPerceptionInterface
struct UAISenseConfig_Touch* INPCCharacterAIPerceptionInterface::GetTouchConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPerceptionInterface", "GetTouchConfig");
    struct
    {
        struct UAISenseConfig_Touch* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISenseConfig_Sight* INPCCharacterAIPerceptionInterface::GetSightConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPerceptionInterface", "GetSightConfig");
    struct
    {
        struct UAISenseConfig_Sight* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISenseConfig_Hearing* INPCCharacterAIPerceptionInterface::GetHearingConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPerceptionInterface", "GetHearingConfig");
    struct
    {
        struct UAISenseConfig_Hearing* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAISenseConfig_Damage* INPCCharacterAIPerceptionInterface::GetDamageConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPerceptionInterface", "GetDamageConfig");
    struct
    {
        struct UAISenseConfig_Damage* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAIPickUpInterface
void INPCCharacterAIPickUpInterface::StopPickUpBoxContainer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "StopPickUpBoxContainer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIPickUpInterface::SetInventoryHasChecked(struct AActor* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "SetInventoryHasChecked");
    struct
    {
        struct AActor* Inventory;
    } Parms{};
    Parms.Inventory = (struct AActor*)Inventory;
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIPickUpInterface::PickUpInventory(struct AActor* Inventory, bool bCheckIsCanAdd, float WaitSeconds, bool bFromBoxContainer, bool bIgnoreDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "PickUpInventory");
    struct
    {
        struct AActor* Inventory;
        bool bCheckIsCanAdd;
        float WaitSeconds;
        bool bFromBoxContainer;
        bool bIgnoreDistance;
        bool ReturnValue;
    } Parms{};
    Parms.Inventory = (struct AActor*)Inventory;
    Parms.bCheckIsCanAdd = (bool)bCheckIsCanAdd;
    Parms.WaitSeconds = (float)WaitSeconds;
    Parms.bFromBoxContainer = (bool)bFromBoxContainer;
    Parms.bIgnoreDistance = (bool)bIgnoreDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIPickUpInterface::PickUpBoxContainer(struct AActor* BoxContainer, bool bCheckIsCanAdd, float InDelayStarttime, float InPickUpInterval, uint8_t ItemIdType, bool IsDiscardIfHas)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "PickUpBoxContainer");
    struct
    {
        struct AActor* BoxContainer;
        bool bCheckIsCanAdd;
        float InDelayStarttime;
        float InPickUpInterval;
        uint8_t ItemIdType;
        bool IsDiscardIfHas;
    } Parms{};
    Parms.BoxContainer = (struct AActor*)BoxContainer;
    Parms.bCheckIsCanAdd = (bool)bCheckIsCanAdd;
    Parms.InDelayStarttime = (float)InDelayStarttime;
    Parms.InPickUpInterval = (float)InPickUpInterval;
    Parms.ItemIdType = (uint8_t)ItemIdType;
    Parms.IsDiscardIfHas = (bool)IsDiscardIfHas;
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIPickUpInterface::IsCompletedPickUpBoxContainer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "IsCompletedPickUpBoxContainer");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPickUpInterface::IsCanAddUnitInventory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "IsCanAddUnitInventory");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPickUpInterface::HasPlacePickUpInventoryIml(struct AActor* Inventory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "HasPlacePickUpInventoryIml");
    struct
    {
        struct AActor* Inventory;
        bool ReturnValue;
    } Parms{};
    Parms.Inventory = (struct AActor*)Inventory;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPickUpInterface::GetVehicleCanPickUpInVolume(struct AVolume* Volume, struct AActor*& VehicleKey, struct AActor*& Vehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "GetVehicleCanPickUpInVolume");
    struct
    {
        struct AVolume* Volume;
        struct AActor* VehicleKey;
        struct AActor* Vehicle;
        bool ReturnValue;
    } Parms{};
    Parms.Volume = (struct AVolume*)Volume;
    this->ProcessEvent(Func, &Parms);
    VehicleKey = Parms.VehicleKey;
    Vehicle = Parms.Vehicle;
    return Parms.ReturnValue;
}

struct AActor* INPCCharacterAIPickUpInterface::GetNearestInventoryCanPickUp(float InRange, float PathLength, bool bIgnoreChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "GetNearestInventoryCanPickUp");
    struct
    {
        float InRange;
        float PathLength;
        bool bIgnoreChecked;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InRange = (float)InRange;
    Parms.PathLength = (float)PathLength;
    Parms.bIgnoreChecked = (bool)bIgnoreChecked;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPickUpInterface::GetInventorysCanPickUp(float InRange, float PathLength, bool bIgnoreChecked, struct TArray<struct AActor*>& OutInventorys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "GetInventorysCanPickUp");
    struct
    {
        float InRange;
        float PathLength;
        bool bIgnoreChecked;
        struct TArray<struct AActor*> OutInventorys;
        bool ReturnValue;
    } Parms{};
    Parms.InRange = (float)InRange;
    Parms.PathLength = (float)PathLength;
    Parms.bIgnoreChecked = (bool)bIgnoreChecked;
    this->ProcessEvent(Func, &Parms);
    OutInventorys = Parms.OutInventorys;
    return Parms.ReturnValue;
}

void INPCCharacterAIPickUpInterface::CancelPickUpInventory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPickUpInterface", "CancelPickUpInventory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAIPoseCacheInterface
EAIPose INPCCharacterAIPoseCacheInterface::GetPoseAIType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseCacheInterface", "GetPoseAIType");
    struct
    {
        enum EAIPose ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAILeanType INPCCharacterAIPoseCacheInterface::GetLeanAIType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseCacheInterface", "GetLeanAIType");
    struct
    {
        enum EAILeanType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAIPoseInterface
bool INPCCharacterAIPoseInterface::UpdateDSPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "UpdateDSPose");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::UpdateDSLeanPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "UpdateDSLeanPose");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryProne()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryProne");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryLean(EAILeanType NewLeanType, bool bCheckBlockByWall)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryLean");
    struct
    {
        enum EAILeanType NewLeanType;
        bool bCheckBlockByWall;
        bool ReturnValue;
    } Parms{};
    Parms.NewLeanType = (enum EAILeanType)NewLeanType;
    Parms.bCheckBlockByWall = (bool)bCheckBlockByWall;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryJump(const struct FVector& InJumpDirection, float InJumpSpeed, bool bUseNowVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryJump");
    struct
    {
        struct FVector InJumpDirection;
        float InJumpSpeed;
        bool bUseNowVelocity;
        bool ReturnValue;
    } Parms{};
    Parms.InJumpDirection = (struct FVector)InJumpDirection;
    Parms.InJumpSpeed = (float)InJumpSpeed;
    Parms.bUseNowVelocity = (bool)bUseNowVelocity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryCrouchSliding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryCrouchSliding");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryCrouch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryCrouch");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryCoverShootFiring(bool bFiring)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryCoverShootFiring");
    struct
    {
        bool bFiring;
        bool ReturnValue;
    } Parms{};
    Parms.bFiring = (bool)bFiring;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryCoverShoot(bool bCoverShoot, bool bCrouch, bool bLeft)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryCoverShoot");
    struct
    {
        bool bCoverShoot;
        bool bCrouch;
        bool bLeft;
        bool ReturnValue;
    } Parms{};
    Parms.bCoverShoot = (bool)bCoverShoot;
    Parms.bCrouch = (bool)bCrouch;
    Parms.bLeft = (bool)bLeft;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::TryCasualStandingPose(bool bCasual)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "TryCasualStandingPose");
    struct
    {
        bool bCasual;
        bool ReturnValue;
    } Parms{};
    Parms.bCasual = (bool)bCasual;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIPoseInterface::StopCrouchSliding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "StopCrouchSliding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIPoseInterface::SetPoseToProne(bool bNewProne)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "SetPoseToProne");
    struct
    {
        bool bNewProne;
    } Parms{};
    Parms.bNewProne = (bool)bNewProne;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIPoseInterface::SetPoseToCrouch(bool bNewCrouch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "SetPoseToCrouch");
    struct
    {
        bool bNewCrouch;
    } Parms{};
    Parms.bNewCrouch = (bool)bNewCrouch;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIPoseInterface::SetIsCoverShootFiring(bool bCoverShoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "SetIsCoverShootFiring");
    struct
    {
        bool bCoverShoot;
    } Parms{};
    Parms.bCoverShoot = (bool)bCoverShoot;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIPoseInterface::SetIsCasual(bool bCasual)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "SetIsCasual");
    struct
    {
        bool bCasual;
    } Parms{};
    Parms.bCasual = (bool)bCasual;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAIPoseInterface::SetAIPose(EAIPose InAIPose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "SetAIPose");
    struct
    {
        enum EAIPose InAIPose;
    } Parms{};
    Parms.InAIPose = (enum EAIPose)InAIPose;
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIPoseInterface::IsJumping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "IsJumping");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::IsInTransitionAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "IsInTransitionAnimation");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::IsCrouchSliding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "IsCrouchSliding");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIPoseInterface::GetUp(bool bWithCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "GetUp");
    struct
    {
        bool bWithCheck;
    } Parms{};
    Parms.bWithCheck = (bool)bWithCheck;
    this->ProcessEvent(Func, &Parms);
}

EAILeanType INPCCharacterAIPoseInterface::GetLeanType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "GetLeanType");
    struct
    {
        enum EAILeanType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::GetIsCoverShootFiring()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "GetIsCoverShootFiring");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::GetIsCoverShoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "GetIsCoverShoot");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::GetIsCasual()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "GetIsCasual");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAIPoseInterface::GetCrouchSlidingStartTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "GetCrouchSlidingStartTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIPose INPCCharacterAIPoseInterface::GetAIPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "GetAIPose");
    struct
    {
        enum EAIPose ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAIPoseInterface::CheckLeanIfBlock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "CheckLeanIfBlock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAIPoseInterface::CanProneInCurrentEnvironment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "CanProneInCurrentEnvironment");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAIPoseInterface::CanJump(const struct FVector& InJumpDirection, float InJumpSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAIPoseInterface", "CanJump");
    struct
    {
        struct FVector InJumpDirection;
        float InJumpSpeed;
        bool ReturnValue;
    } Parms{};
    Parms.InJumpDirection = (struct FVector)InJumpDirection;
    Parms.InJumpSpeed = (float)InJumpSpeed;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAISenseAbilityInterface
bool INPCCharacterAISenseAbilityInterface::IsInGasArea()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAISenseAbilityInterface", "IsInGasArea");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAISenseAbilityInterface::IsImmuneTearGas()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAISenseAbilityInterface", "IsImmuneTearGas");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAISenseAbilityInterface::AIProcessOnFlashStrobe(float Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAISenseAbilityInterface", "AIProcessOnFlashStrobe");
    struct
    {
        float Level;
    } Parms{};
    Parms.Level = (float)Level;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAISenseAbilityInterface::AIProcessOnEnterInventoryFlash(bool bInSevere, bool bInModerate, bool bInMild, float CharFaceAngleDegree, struct FVector SocketLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAISenseAbilityInterface", "AIProcessOnEnterInventoryFlash");
    struct
    {
        bool bInSevere;
        bool bInModerate;
        bool bInMild;
        float CharFaceAngleDegree;
        struct FVector SocketLoc;
    } Parms{};
    Parms.bInSevere = (bool)bInSevere;
    Parms.bInModerate = (bool)bInModerate;
    Parms.bInMild = (bool)bInMild;
    Parms.CharFaceAngleDegree = (float)CharFaceAngleDegree;
    Parms.SocketLoc = (struct FVector)SocketLoc;
    this->ProcessEvent(Func, &Parms);
}

float INPCCharacterAISenseAbilityInterface::AIGetFlashBurnValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAISenseAbilityInterface", "AIGetFlashBurnValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAISoundInterface
void INPCCharacterAISoundInterface::PlaySoundAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AudioEvent, struct FVector Location, struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAISoundInterface", "PlaySoundAtLocation");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAkAudioEvent* AudioEvent;
        struct FVector Location;
        struct FRotator Rotation;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AudioEvent = (struct UAkAudioEvent*)AudioEvent;
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAISoundInterface::PlayAISoundByType(EAISoundType CurrType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAISoundInterface", "PlayAISoundByType");
    struct
    {
        enum EAISoundType CurrType;
    } Parms{};
    Parms.CurrType = (enum EAISoundType)CurrType;
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAITakeCoverInterface
void INPCCharacterAITakeCoverInterface::StopToTakeCover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITakeCoverInterface", "StopToTakeCover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAITakeCoverInterface::IsTakingCover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITakeCoverInterface", "IsTakingCover");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void INPCCharacterAITakeCoverInterface::BeginToTakeCoverCrouch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITakeCoverInterface", "BeginToTakeCoverCrouch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAITakeCoverInterface::BeginToTakeCover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITakeCoverInterface", "BeginToTakeCover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// INPCCharacterAITeamRescueInterface
void INPCCharacterAITeamRescueInterface::StopRescueTeammate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITeamRescueInterface", "StopRescueTeammate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAITeamRescueInterface::RescueDBNOTeammate(struct AActor* InTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITeamRescueInterface", "RescueDBNOTeammate");
    struct
    {
        struct AActor* InTarget;
        bool ReturnValue;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* INPCCharacterAITeamRescueInterface::GetNearestDBNOTeammate(float InRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITeamRescueInterface", "GetNearestDBNOTeammate");
    struct
    {
        float InRange;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InRange = (float)InRange;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool INPCCharacterAITeamRescueInterface::GetIsRescuingTeammate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITeamRescueInterface", "GetIsRescuingTeammate");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterAITurnInterface
void INPCCharacterAITurnInterface::LookToPoint(const struct FVector& Point, float RotateSpeedInDegree, float AcceleratedSpeedInDegree, bool bQuickly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITurnInterface", "LookToPoint");
    struct
    {
        struct FVector Point;
        float RotateSpeedInDegree;
        float AcceleratedSpeedInDegree;
        bool bQuickly;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    Parms.RotateSpeedInDegree = (float)RotateSpeedInDegree;
    Parms.AcceleratedSpeedInDegree = (float)AcceleratedSpeedInDegree;
    Parms.bQuickly = (bool)bQuickly;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAITurnInterface::LookToMovingDirection(float RotateSpeedInDegree, float AcceleratedSpeedInDegree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITurnInterface", "LookToMovingDirection");
    struct
    {
        float RotateSpeedInDegree;
        float AcceleratedSpeedInDegree;
    } Parms{};
    Parms.RotateSpeedInDegree = (float)RotateSpeedInDegree;
    Parms.AcceleratedSpeedInDegree = (float)AcceleratedSpeedInDegree;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterAITurnInterface::LockLookToPoint(float LockTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITurnInterface", "LockLookToPoint");
    struct
    {
        float LockTime;
    } Parms{};
    Parms.LockTime = (float)LockTime;
    this->ProcessEvent(Func, &Parms);
}

bool INPCCharacterAITurnInterface::IsTurning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITurnInterface", "IsTurning");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterAITurnInterface::GetActualActorTurnSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterAITurnInterface", "GetActualActorTurnSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterHealthInterface
void INPCCharacterHealthInterface::SetHealthMax(float Value, struct AActor* Instigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterHealthInterface", "SetHealthMax");
    struct
    {
        float Value;
        struct AActor* Instigator;
    } Parms{};
    Parms.Value = (float)Value;
    Parms.Instigator = (struct AActor*)Instigator;
    this->ProcessEvent(Func, &Parms);
}

void INPCCharacterHealthInterface::SetHealth(float Value, struct AActor* Instigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterHealthInterface", "SetHealth");
    struct
    {
        float Value;
        struct AActor* Instigator;
    } Parms{};
    Parms.Value = (float)Value;
    Parms.Instigator = (struct AActor*)Instigator;
    this->ProcessEvent(Func, &Parms);
}

float INPCCharacterHealthInterface::GetHealthMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterHealthInterface", "GetHealthMax");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float INPCCharacterHealthInterface::GetHealth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterHealthInterface", "GetHealth");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCCharacterTakeDamageInterface
float INPCCharacterTakeDamageInterface::TakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCCharacterTakeDamageInterface", "TakeDamage");
    struct
    {
        float DamageAmount;
        struct FDamageEvent DamageEvent;
        struct AController* EventInstigator;
        struct AActor* DamageCauser;
        float ReturnValue;
    } Parms{};
    Parms.DamageAmount = (float)DamageAmount;
    Parms.DamageEvent = (struct FDamageEvent)DamageEvent;
    Parms.EventInstigator = (struct AController*)EventInstigator;
    Parms.DamageCauser = (struct AActor*)DamageCauser;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INPCDroneCharacterInterface
bool INPCDroneCharacterInterface::IsBroken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCDroneCharacterInterface", "IsBroken");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACharacter* INPCDroneCharacterInterface::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCDroneCharacterInterface", "GetCharacterOwner");
    struct
    {
        struct ACharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t INPCDroneCharacterInterface::GetBindInventoryItemID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NPCDroneCharacterInterface", "GetBindInventoryItemID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ISGTeamInterface
void ISGTeamInterface::RemoveToFriendlyTeam(int32_t InTeamIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "RemoveToFriendlyTeam");
    struct
    {
        int32_t InTeamIndex;
    } Parms{};
    Parms.InTeamIndex = (int32_t)InTeamIndex;
    this->ProcessEvent(Func, &Parms);
}

bool ISGTeamInterface::RemoveFromTeam(struct AActor* C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "RemoveFromTeam");
    struct
    {
        struct AActor* C;
        bool ReturnValue;
    } Parms{};
    Parms.C = (struct AActor*)C;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ISGTeamInterface::IsFriendlyTeam(int32_t InTeamIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "IsFriendlyTeam");
    struct
    {
        int32_t InTeamIndex;
        bool ReturnValue;
    } Parms{};
    Parms.InTeamIndex = (int32_t)InTeamIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> ISGTeamInterface::GetTeamMembers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "GetTeamMembers");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ISGTeamInterface::GetFriendlyTeamIndexs(struct TArray<int32_t>& OutFriendTeamIndexs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "GetFriendlyTeamIndexs");
    struct
    {
        struct TArray<int32_t> OutFriendTeamIndexs;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutFriendTeamIndexs = Parms.OutFriendTeamIndexs;
}

struct UActorComponent* ISGTeamInterface::GetFactionComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "GetFactionComp");
    struct
    {
        struct UActorComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ISGTeamInterface::FactionChanged(uint8_t NewFactionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "FactionChanged");
    struct
    {
        uint8_t NewFactionType;
    } Parms{};
    Parms.NewFactionType = (uint8_t)NewFactionType;
    this->ProcessEvent(Func, &Parms);
}

bool ISGTeamInterface::AddToTeam(struct AActor* C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "AddToTeam");
    struct
    {
        struct AActor* C;
        bool ReturnValue;
    } Parms{};
    Parms.C = (struct AActor*)C;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ISGTeamInterface::AddToFriendlyTeam(int32_t InTeamIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SGTeamInterface", "AddToFriendlyTeam");
    struct
    {
        int32_t InTeamIndex;
    } Parms{};
    Parms.InTeamIndex = (int32_t)InTeamIndex;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
