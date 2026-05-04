#include "SOL.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AAiBuffArea::* ----
void AAiBuffArea::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AiBuffArea", "OnOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void AAiBuffArea::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AiBuffArea", "OnOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void AAiBuffArea::Broadcast_FxPreDestory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AiBuffArea", "Broadcast_FxPreDestory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAnimNotify_PlaceFootballGate::* ----
void UAnimNotify_PlaceFootballGate::ReceivedPlaceFootballGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_PlaceFootballGate", "ReceivedPlaceFootballGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UAnimNotify_ThrowFootball::* ----
void UAnimNotify_ThrowFootball::ReceivedThrowFootball(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* AnimSeq)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_ThrowFootball", "ReceivedThrowFootball");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UAnimSequenceBase* AnimSeq;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.AnimSeq = (struct UAnimSequenceBase*)AnimSeq;
    this->ProcessEvent(Func, &Parms);
}

// ---- ABirdsFlush::* ----
void ABirdsFlush::TriggerFlush(struct ACHARACTER* CHARACTER, struct FBirdFlushConfig FlushConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "TriggerFlush");
    struct
    {
        struct ACHARACTER* CHARACTER;
        struct FBirdFlushConfig FlushConfig;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.FlushConfig = (struct FBirdFlushConfig)FlushConfig;
    this->ProcessEvent(Func, &Parms);
}

void ABirdsFlush::PlayAnim_Internal(struct USkeletalMeshComponent* BirdComp, int32_t ChainIndex, int32_t ChainStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "PlayAnim_Internal");
    struct
    {
        struct USkeletalMeshComponent* BirdComp;
        int32_t ChainIndex;
        int32_t ChainStep;
    } Parms{};
    Parms.BirdComp = (struct USkeletalMeshComponent*)BirdComp;
    Parms.ChainIndex = (int32_t)ChainIndex;
    Parms.ChainStep = (int32_t)ChainStep;
    this->ProcessEvent(Func, &Parms);
}

void ABirdsFlush::PerformObstacleDetection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "PerformObstacleDetection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABirdsFlush::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "OnOverlapEnd");
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

void ABirdsFlush::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "OnOverlapBegin");
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

void ABirdsFlush::OnAudioInfoCollect(struct FAudioListenerItemInfo& AudioInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "OnAudioInfoCollect");
    struct
    {
        struct FAudioListenerItemInfo AudioInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AudioInfo = Parms.AudioInfo;
}

void ABirdsFlush::OnAnimLoaded2Play(struct USkeletalMeshComponent* BirdComp, int32_t ChainIndex, int32_t ChainStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "OnAnimLoaded2Play");
    struct
    {
        struct USkeletalMeshComponent* BirdComp;
        int32_t ChainIndex;
        int32_t ChainStep;
    } Parms{};
    Parms.BirdComp = (struct USkeletalMeshComponent*)BirdComp;
    Parms.ChainIndex = (int32_t)ChainIndex;
    Parms.ChainStep = (int32_t)ChainStep;
    this->ProcessEvent(Func, &Parms);
}

void ABirdsFlush::OnAnimEnd(struct USkeletalMeshComponent* BirdComp, int32_t ChainIndex, int32_t ChainStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "OnAnimEnd");
    struct
    {
        struct USkeletalMeshComponent* BirdComp;
        int32_t ChainIndex;
        int32_t ChainStep;
    } Parms{};
    Parms.BirdComp = (struct USkeletalMeshComponent*)BirdComp;
    Parms.ChainIndex = (int32_t)ChainIndex;
    Parms.ChainStep = (int32_t)ChainStep;
    this->ProcessEvent(Func, &Parms);
}

void ABirdsFlush::MulticastPlayAudio(struct FBirdFlushConfig FlushConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "MulticastPlayAudio");
    struct
    {
        struct FBirdFlushConfig FlushConfig;
    } Parms{};
    Parms.FlushConfig = (struct FBirdFlushConfig)FlushConfig;
    this->ProcessEvent(Func, &Parms);
}

void ABirdsFlush::MulticastPlayAnim(int32_t BirdIndex, struct FRotator BirdRotation, int32_t ChainIndex, float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "MulticastPlayAnim");
    struct
    {
        int32_t BirdIndex;
        struct FRotator BirdRotation;
        int32_t ChainIndex;
        float DelayTime;
    } Parms{};
    Parms.BirdIndex = (int32_t)BirdIndex;
    Parms.BirdRotation = (struct FRotator)BirdRotation;
    Parms.ChainIndex = (int32_t)ChainIndex;
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void ABirdsFlush::CleanupBirdState(struct USkeletalMeshComponent* BirdComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BirdsFlush", "CleanupBirdState");
    struct
    {
        struct USkeletalMeshComponent* BirdComp;
    } Parms{};
    Parms.BirdComp = (struct USkeletalMeshComponent*)BirdComp;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCapacitorInspectComponent::* ----
void UCapacitorInspectComponent::UpdatePanel(float InDistance, float InAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorInspectComponent", "UpdatePanel");
    struct
    {
        float InDistance;
        float InAngle;
    } Parms{};
    Parms.InDistance = (float)InDistance;
    Parms.InAngle = (float)InAngle;
    this->ProcessEvent(Func, &Parms);
}

void UCapacitorInspectComponent::OnInspectPanelLoaded(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorInspectComponent", "OnInspectPanelLoaded");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

// ---- ACapacitorSpawner::* ----
struct AInventoryPickup* ACapacitorSpawner::SpawnCapacitor(struct AActor* TrackedActor, int32_t Rank)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorSpawner", "SpawnCapacitor");
    struct
    {
        struct AActor* TrackedActor;
        int32_t Rank;
        struct AInventoryPickup* ReturnValue;
    } Parms{};
    Parms.TrackedActor = (struct AActor*)TrackedActor;
    Parms.Rank = (int32_t)Rank;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ACapacitorManager::* ----
void ACapacitorManager::RecordCapacitorTraceTarget(uint64_t ItemGid, struct AInteractorBase* TargetInteract)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorManager", "RecordCapacitorTraceTarget");
    struct
    {
        uint64_t ItemGid;
        struct AInteractorBase* TargetInteract;
    } Parms{};
    Parms.ItemGid = (uint64_t)ItemGid;
    Parms.TargetInteract = (struct AInteractorBase*)TargetInteract;
    this->ProcessEvent(Func, &Parms);
}

struct ACapacitorManager* ACapacitorManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CapacitorManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct ACapacitorManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ACapacitorManager::FindTraceDataByItemGID(uint64_t InItemGid, struct FCapacitorTraceData& OutData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorManager", "FindTraceDataByItemGID");
    struct
    {
        uint64_t InItemGid;
        struct FCapacitorTraceData OutData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    this->ProcessEvent(Func, &Parms);
    OutData = Parms.OutData;
    return Parms.ReturnValue;
}

uint8_t ACapacitorManager::FindTraceDataByActor(struct AActor* InActor, struct FCapacitorTraceData& OutData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorManager", "FindTraceDataByActor");
    struct
    {
        struct AActor* InActor;
        struct FCapacitorTraceData OutData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
    OutData = Parms.OutData;
    return Parms.ReturnValue;
}

struct TArray<struct ACapacitorSpawner*> ACapacitorManager::FindNearbyUnusedCapacitorSpawners(const struct FVector& Center, float Distance, struct FName GroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorManager", "FindNearbyUnusedCapacitorSpawners");
    struct
    {
        struct FVector Center;
        float Distance;
        struct FName GroupID;
        struct TArray<struct ACapacitorSpawner*> ReturnValue;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.Distance = (float)Distance;
    Parms.GroupID = (struct FName)GroupID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* ACapacitorManager::ClientGetTraceTargetActor(uint64_t ItemGid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CapacitorManager", "ClientGetTraceTargetActor");
    struct
    {
        uint64_t ItemGid;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.ItemGid = (uint64_t)ItemGid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCharacterFalloutComponent::* ----
void UCharacterFalloutComponent::TryAddRandomBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "TryAddRandomBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::TickCheckFalloutObjectNearby(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "TickCheckFalloutObjectNearby");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::SetRadiationStrengthInner(float InRadiationStrength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "SetRadiationStrengthInner");
    struct
    {
        float InRadiationStrength;
    } Parms{};
    Parms.InRadiationStrength = (float)InRadiationStrength;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::SetRadiationStrengthByFalloutObjectDistance(float InDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "SetRadiationStrengthByFalloutObjectDistance");
    struct
    {
        float InDistance;
    } Parms{};
    Parms.InDistance = (float)InDistance;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::SetRadiationStrengthByCharacterFalloutValue(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "SetRadiationStrengthByCharacterFalloutValue");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::SetIsInFalloutArea(uint8_t bInArea)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "SetIsInFalloutArea");
    struct
    {
        uint8_t bInArea;
    } Parms{};
    Parms.bInArea = (uint8_t)bInArea;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ServerTriggerScanInner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ServerTriggerScanInner");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ServerTriggerScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ServerTriggerScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::RemoveBuffsForConfigIndex(int32_t ConfigIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "RemoveBuffsForConfigIndex");
    struct
    {
        int32_t ConfigIndex;
    } Parms{};
    Parms.ConfigIndex = (int32_t)ConfigIndex;
    this->ProcessEvent(Func, &Parms);
}

struct FBuffRandomPair UCharacterFalloutComponent::RandomSelectBuffPair(const struct FFalloutRandomBuffConfig& Config)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "RandomSelectBuffPair");
    struct
    {
        struct FFalloutRandomBuffConfig Config;
        struct FBuffRandomPair ReturnValue;
    } Parms{};
    Parms.Config = (struct FFalloutRandomBuffConfig)Config;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCharacterFalloutComponent::OnPutWeaponComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnPutWeaponComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::OnInventoryItemAddOrRemove(uint64_t ItemID, uint64_t ItemGid, uint8_t bAddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnInventoryItemAddOrRemove");
    struct
    {
        uint64_t ItemID;
        uint64_t ItemGid;
        uint8_t bAddOrRemove;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemGid = (uint64_t)ItemGid;
    Parms.bAddOrRemove = (uint8_t)bAddOrRemove;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::OnGeigerMeshAssetLoadComplete(const struct FSoftObjectPath& AssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnGeigerMeshAssetLoadComplete");
    struct
    {
        struct FSoftObjectPath AssetPath;
    } Parms{};
    Parms.AssetPath = (struct FSoftObjectPath)AssetPath;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::OnCharacterPressScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnCharacterPressScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::OnCharacterFalloutChanged(struct AActor* Owner, float FalloutValue, float MaxFalloutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnCharacterFalloutChanged");
    struct
    {
        struct AActor* Owner;
        float FalloutValue;
        float MaxFalloutValue;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.FalloutValue = (float)FalloutValue;
    Parms.MaxFalloutValue = (float)MaxFalloutValue;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::OnAudioAssetLoadComplete(const struct FSoftObjectPath& AssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnAudioAssetLoadComplete");
    struct
    {
        struct FSoftObjectPath AssetPath;
    } Parms{};
    Parms.AssetPath = (struct FSoftObjectPath)AssetPath;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::OnAnimPlayComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnAnimPlayComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::OnAnimLoadComplete(struct TArray<struct FSoftObjectPath> AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "OnAnimLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> AssetRef;
    } Parms{};
    Parms.AssetRef = (struct TArray<struct FSoftObjectPath>)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector> UCharacterFalloutComponent::GetNearbyRadioactiveItemLoc(float CheckRadius, uint8_t bCheckFalloutClassTypes, uint8_t bCheckPickup, uint8_t bCheckChara)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "GetNearbyRadioactiveItemLoc");
    struct
    {
        float CheckRadius;
        uint8_t bCheckFalloutClassTypes;
        uint8_t bCheckPickup;
        uint8_t bCheckChara;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.CheckRadius = (float)CheckRadius;
    Parms.bCheckFalloutClassTypes = (uint8_t)bCheckFalloutClassTypes;
    Parms.bCheckPickup = (uint8_t)bCheckPickup;
    Parms.bCheckChara = (uint8_t)bCheckChara;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UCharacterFalloutComponent::GetCurrentFalloutConfigIndex(float FalloutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "GetCurrentFalloutConfigIndex");
    struct
    {
        float FalloutValue;
        int32_t ReturnValue;
    } Parms{};
    Parms.FalloutValue = (float)FalloutValue;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UCharacterFalloutComponent::ClientSwitchToEmptyHand(uint8_t bEmptyHand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientSwitchToEmptyHand");
    struct
    {
        uint8_t bEmptyHand;
        float ReturnValue;
    } Parms{};
    Parms.bEmptyHand = (uint8_t)bEmptyHand;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCharacterFalloutComponent::ClientSpawnGeigerMesh(uint8_t bSpawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientSpawnGeigerMesh");
    struct
    {
        uint8_t bSpawn;
    } Parms{};
    Parms.bSpawn = (uint8_t)bSpawn;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ClientRemoveAllScanMarkers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientRemoveAllScanMarkers");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UCharacterFalloutComponent::ClientPlayGeigerMeshAnimation(struct UAnimSequenceBase* Animation, uint8_t bLooping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientPlayGeigerMeshAnimation");
    struct
    {
        struct UAnimSequenceBase* Animation;
        uint8_t bLooping;
        float ReturnValue;
    } Parms{};
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.bLooping = (uint8_t)bLooping;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCharacterFalloutComponent::ClientPlayEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientPlayEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ClientPlayAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientPlayAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ClientNotifyCooldownEnd(float RemainingTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientNotifyCooldownEnd");
    struct
    {
        float RemainingTime;
    } Parms{};
    Parms.RemainingTime = (float)RemainingTime;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ClientMarkContainerInteracted(struct AInteractorBase* Container)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientMarkContainerInteracted");
    struct
    {
        struct AInteractorBase* Container;
    } Parms{};
    Parms.Container = (struct AInteractorBase*)Container;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ClientAddMarkersByLocation(struct TArray<struct FVector> MarkerPositions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClientAddMarkersByLocation");
    struct
    {
        struct TArray<struct FVector> MarkerPositions;
    } Parms{};
    Parms.MarkerPositions = (struct TArray<struct FVector>)MarkerPositions;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::ClearAllFalloutStateBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "ClearAllFalloutStateBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::CheckPreloadHighValueRoomNearby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "CheckPreloadHighValueRoomNearby");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::CheckFalloutValueAndUpdateBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "CheckFalloutValueAndUpdateBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UCharacterFalloutComponent::CastRadiationStrengthToRTPCValue(float Strength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "CastRadiationStrengthToRTPCValue");
    struct
    {
        float Strength;
        float ReturnValue;
    } Parms{};
    Parms.Strength = (float)Strength;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UCharacterFalloutComponent::CastFalloutValueToRadiationStrength(float CharaFalloutValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "CastFalloutValueToRadiationStrength");
    struct
    {
        float CharaFalloutValue;
        float ReturnValue;
    } Parms{};
    Parms.CharaFalloutValue = (float)CharaFalloutValue;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UCharacterFalloutComponent::CastFalloutDistanceToRadiationStrength(float ObjectDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "CastFalloutDistanceToRadiationStrength");
    struct
    {
        float ObjectDistance;
        float ReturnValue;
    } Parms{};
    Parms.ObjectDistance = (float)ObjectDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCharacterFalloutComponent::BP_ClientPlayAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "BP_ClientPlayAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterFalloutComponent::AddInstantIncreaseBuff(int32_t InstantIncreaseBuffID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterFalloutComponent", "AddInstantIncreaseBuff");
    struct
    {
        int32_t InstantIncreaseBuffID;
    } Parms{};
    Parms.InstantIncreaseBuffID = (int32_t)InstantIncreaseBuffID;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMAIRCVPurifierCharacter::* ----
void ADFMAIRCVPurifierCharacter::SetPurifierYawDelta(float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "SetPurifierYawDelta");
    struct
    {
        float Delta;
    } Parms{};
    Parms.Delta = (float)Delta;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIRCVPurifierCharacter::SetPurifierMoveDelta(float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "SetPurifierMoveDelta");
    struct
    {
        float Delta;
    } Parms{};
    Parms.Delta = (float)Delta;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIRCVPurifierCharacter::SetPurifierFire(EDFMAIWaterGunFireMode FireMode, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "SetPurifierFire");
    struct
    {
        enum EDFMAIWaterGunFireMode FireMode;
        float Time;
    } Parms{};
    Parms.FireMode = (enum EDFMAIWaterGunFireMode)FireMode;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIRCVPurifierCharacter::SetPurifierDirection(float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "SetPurifierDirection");
    struct
    {
        float Delta;
    } Parms{};
    Parms.Delta = (float)Delta;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIRCVPurifierCharacter::SetDelayMarkingTrigger(EMarkingLocationType PoseType, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "SetDelayMarkingTrigger");
    struct
    {
        enum EMarkingLocationType PoseType;
        float Time;
    } Parms{};
    Parms.PoseType = (enum EMarkingLocationType)PoseType;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIRCVPurifierCharacter::OnPlayerMarking(uint64_t PlayerUin, int32_t OperationType, struct FVector MarkLocation, int32_t MarkingType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "OnPlayerMarking");
    struct
    {
        uint64_t PlayerUin;
        int32_t OperationType;
        struct FVector MarkLocation;
        int32_t MarkingType;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    Parms.OperationType = (int32_t)OperationType;
    Parms.MarkLocation = (struct FVector)MarkLocation;
    Parms.MarkingType = (int32_t)MarkingType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIRCVPurifierCharacter::OnControllerFsmTransitionEvent(EGPFSMTransitionEvent Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "OnControllerFsmTransitionEvent");
    struct
    {
        enum EGPFSMTransitionEvent Event;
    } Parms{};
    Parms.Event = (enum EGPFSMTransitionEvent)Event;
    this->ProcessEvent(Func, &Parms);
}

float ADFMAIRCVPurifierCharacter::GetWaterGunYawRotateSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierCharacter", "GetWaterGunYawRotateSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMAIRCVPurifierComponent::* ----
void UDFMAIRCVPurifierComponent::PlayWeakPartFlameFX(struct FVector FXLocation, struct FVector FXNormal, EDFMAIRCVPurifierFXType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierComponent", "PlayWeakPartFlameFX");
    struct
    {
        struct FVector FXLocation;
        struct FVector FXNormal;
        enum EDFMAIRCVPurifierFXType Type;
    } Parms{};
    Parms.FXLocation = (struct FVector)FXLocation;
    Parms.FXNormal = (struct FVector)FXNormal;
    Parms.Type = (enum EDFMAIRCVPurifierFXType)Type;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIRCVPurifierComponent::OnPurifierHPChanged__DelegateSignature(EDFMAIRCVPurifierFXType FXType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierComponent", "OnPurifierHPChanged__DelegateSignature");
    struct
    {
        enum EDFMAIRCVPurifierFXType FXType;
    } Parms{};
    Parms.FXType = (enum EDFMAIRCVPurifierFXType)FXType;
    this->ProcessEvent(Func, &Parms);
}

EDFMAIRCVPurifierFXType UDFMAIRCVPurifierComponent::OnHPChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierComponent", "OnHPChanged");
    struct
    {
        enum EDFMAIRCVPurifierFXType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAIRCVPurifierComponent::OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierComponent", "OnCharacterDead");
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

uint8_t UDFMAIRCVPurifierComponent::HitWeakPartCheck(const struct FDamageSourceInfo& SourceInfo, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIRCVPurifierComponent", "HitWeakPartCheck");
    struct
    {
        struct FDamageSourceInfo SourceInfo;
        struct FDamageResultInfo DamageResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SourceInfo = (struct FDamageSourceInfo)SourceInfo;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMAIWaterGunComponent::* ----
void UDFMAIWaterGunComponent::GetFireStartAndEndPoint(const struct FDFMAIWaterGunFireModeConfig& FireConfig, struct FVector& OutStartPos, struct FVector& OutEndPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterGunComponent", "GetFireStartAndEndPoint");
    struct
    {
        struct FDFMAIWaterGunFireModeConfig FireConfig;
        struct FVector OutStartPos;
        struct FVector OutEndPos;
    } Parms{};
    Parms.FireConfig = (struct FDFMAIWaterGunFireModeConfig)FireConfig;
    this->ProcessEvent(Func, &Parms);
    OutStartPos = Parms.OutStartPos;
    OutEndPos = Parms.OutEndPos;
}

void UDFMAIWaterGunComponent::Broadcast_StopFire(struct FDFMAIWaterGunFireData FireData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterGunComponent", "Broadcast_StopFire");
    struct
    {
        struct FDFMAIWaterGunFireData FireData;
    } Parms{};
    Parms.FireData = (struct FDFMAIWaterGunFireData)FireData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIWaterGunComponent::Broadcast_StartFire(struct FDFMAIWaterGunFireData FireData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterGunComponent", "Broadcast_StartFire");
    struct
    {
        struct FDFMAIWaterGunFireData FireData;
    } Parms{};
    Parms.FireData = (struct FDFMAIWaterGunFireData)FireData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIWaterGunComponent::Broadcast_Firing(struct FDFMAIWaterGunFireData FireData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterGunComponent", "Broadcast_Firing");
    struct
    {
        struct FDFMAIWaterGunFireData FireData;
    } Parms{};
    Parms.FireData = (struct FDFMAIWaterGunFireData)FireData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIWaterGunComponent::Broadcast_DebugDrawHitTarget(struct FVector Source, struct FVector Target1, struct FVector Target2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterGunComponent", "Broadcast_DebugDrawHitTarget");
    struct
    {
        struct FVector Source;
        struct FVector Target1;
        struct FVector Target2;
    } Parms{};
    Parms.Source = (struct FVector)Source;
    Parms.Target1 = (struct FVector)Target1;
    Parms.Target2 = (struct FVector)Target2;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIWaterGunComponent::Broadcast_DebugDrawDamageConeBox(struct FVector Source, struct FVector ConeEndCenter, struct FVector ConeEndTop, struct FVector ConeEndBottom, struct FVector ConeEndLeft, struct FVector ConeEndRight, struct FVector BoxCenter, struct FVector BoxExtent, struct FRotator BoxRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterGunComponent", "Broadcast_DebugDrawDamageConeBox");
    struct
    {
        struct FVector Source;
        struct FVector ConeEndCenter;
        struct FVector ConeEndTop;
        struct FVector ConeEndBottom;
        struct FVector ConeEndLeft;
        struct FVector ConeEndRight;
        struct FVector BoxCenter;
        struct FVector BoxExtent;
        struct FRotator BoxRotation;
    } Parms{};
    Parms.Source = (struct FVector)Source;
    Parms.ConeEndCenter = (struct FVector)ConeEndCenter;
    Parms.ConeEndTop = (struct FVector)ConeEndTop;
    Parms.ConeEndBottom = (struct FVector)ConeEndBottom;
    Parms.ConeEndLeft = (struct FVector)ConeEndLeft;
    Parms.ConeEndRight = (struct FVector)ConeEndRight;
    Parms.BoxCenter = (struct FVector)BoxCenter;
    Parms.BoxExtent = (struct FVector)BoxExtent;
    Parms.BoxRotation = (struct FRotator)BoxRotation;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMAIWaterTankComponent::* ----
void UDFMAIWaterTankComponent::OnRep_ShowDamagedDecalCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterTankComponent", "OnRep_ShowDamagedDecalCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIWaterTankComponent::OnRep_CurrentHealth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterTankComponent", "OnRep_CurrentHealth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAIWaterTankComponent::HitWaterTankCheck(const struct FDamageSourceInfo& SourceInfo, const struct FDamageResultInfo& DamageResult, struct UPrimitiveComponent* TankMeshComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterTankComponent", "HitWaterTankCheck");
    struct
    {
        struct FDamageSourceInfo SourceInfo;
        struct FDamageResultInfo DamageResult;
        struct UPrimitiveComponent* TankMeshComp;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SourceInfo = (struct FDamageSourceInfo)SourceInfo;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    Parms.TankMeshComp = (struct UPrimitiveComponent*)TankMeshComp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAIWaterTankComponent::Broadcast_HitWaterTank()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterTankComponent", "Broadcast_HitWaterTank");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAIWaterTankComponent::Broadcast_Explode(struct AActor* Maker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIWaterTankComponent", "Broadcast_Explode");
    struct
    {
        struct AActor* Maker;
    } Parms{};
    Parms.Maker = (struct AActor*)Maker;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMContainerRandomManager::* ----
void UDFMContainerRandomManager::RandomContainer(uint8_t bFromGM)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMContainerRandomManager", "RandomContainer");
    struct
    {
        uint8_t bFromGM;
    } Parms{};
    Parms.bFromGM = (uint8_t)bFromGM;
    this->ProcessEvent(Func, &Parms);
}

void UDFMContainerRandomManager::OnMatchRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMContainerRandomManager", "OnMatchRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMRoomRandomManager::* ----
void UDFMRoomRandomManager::RandomRooms(uint8_t bFromGM, uint64_t InRandSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "RandomRooms");
    struct
    {
        uint8_t bFromGM;
        uint64_t InRandSeed;
    } Parms{};
    Parms.bFromGM = (uint8_t)bFromGM;
    Parms.InRandSeed = (uint64_t)InRandSeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::RandomHighValueRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "RandomHighValueRoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::RandomCapacitorRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "RandomCapacitorRoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::RandHighValueRoomContainersAndPerformance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "RandHighValueRoomContainersAndPerformance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::RandCapacitorRoomContainersByRank()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "RandCapacitorRoomContainersByRank");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::OnMatchRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "OnMatchRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::OnCapacitorLockInteracted(struct AInteractorBase* TargetInteractor, struct AGPCharacter* OperatorCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "OnCapacitorLockInteracted");
    struct
    {
        struct AInteractorBase* TargetInteractor;
        struct AGPCharacter* OperatorCharacter;
    } Parms{};
    Parms.TargetInteractor = (struct AInteractorBase*)TargetInteractor;
    Parms.OperatorCharacter = (struct AGPCharacter*)OperatorCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::Multicast_ShowDebugInfo(uint64_t InRandSeed, struct TArray<struct FString> DebugLines, uint64_t TargetPlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "Multicast_ShowDebugInfo");
    struct
    {
        uint64_t InRandSeed;
        struct TArray<struct FString> DebugLines;
        uint64_t TargetPlayerUin;
    } Parms{};
    Parms.InRandSeed = (uint64_t)InRandSeed;
    Parms.DebugLines = (struct TArray<struct FString>)DebugLines;
    Parms.TargetPlayerUin = (uint64_t)TargetPlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::Multicast_ClearDebugInfo(uint64_t TargetPlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "Multicast_ClearDebugInfo");
    struct
    {
        uint64_t TargetPlayerUin;
    } Parms{};
    Parms.TargetPlayerUin = (uint64_t)TargetPlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::InitRandSeed(uint64_t InRandSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "InitRandSeed");
    struct
    {
        uint64_t InRandSeed;
    } Parms{};
    Parms.InRandSeed = (uint64_t)InRandSeed;
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::InitHighValueRoomTableRows()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "InitHighValueRoomTableRows");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::InitCapacitorDataTableRows()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "InitCapacitorDataTableRows");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::CacheAllHighValueRooms()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "CacheAllHighValueRooms");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMRoomRandomManager::CacheAllCapacitorRooms()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMRoomRandomManager", "CacheAllCapacitorRooms");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IFalloutInterface::* ----
int32_t IFalloutInterface::GetTransferredRadiationBuffID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FalloutInterface", "GetTransferredRadiationBuffID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IFalloutInterface::GetFalloutValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FalloutInterface", "GetFalloutValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UFalloutManager::* ----
void UFalloutManager::OnMatchRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FalloutManager", "OnMatchRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFalloutManager::OnInteractorDoInteract(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FalloutManager", "OnInteractorDoInteract");
    struct
    {
        uint64_t Uin;
        struct AActor* Actor;
        enum EInteractorType InteractorType;
        struct FString Params;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    Parms.Actor = (struct AActor*)Actor;
    Parms.InteractorType = (enum EInteractorType)InteractorType;
    Parms.Params = (struct FString)Params;
    this->ProcessEvent(Func, &Parms);
}

// ---- AFootballGate::* ----
void AFootballGate::OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootballGate", "OnEndOverlap");
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

void AFootballGate::OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootballGate", "OnBeginOverlap");
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

struct FVector AFootballGate::BP_GetRightGateFootLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootballGate", "BP_GetRightGateFootLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AFootballGate::BP_GetLeftGateFootLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootballGate", "BP_GetLeftGateFootLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBoxComponent* AFootballGate::BP_GetGateBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootballGate", "BP_GetGateBox");
    struct
    {
        struct UBoxComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AFootballGate::BP_GetAwardLoc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootballGate", "BP_GetAwardLoc");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AHighValueRoom::* ----
void AHighValueRoom::SetIsHighValue(uint8_t bHighValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HighValueRoom", "SetIsHighValue");
    struct
    {
        uint8_t bHighValue;
    } Parms{};
    Parms.bHighValue = (uint8_t)bHighValue;
    this->ProcessEvent(Func, &Parms);
}

// ---- AInteractor_BlowdownValve::* ----
void AInteractor_BlowdownValve::OnRep_isValveOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_BlowdownValve", "OnRep_isValveOpen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_BlowdownValve::ClientPlayOpenVoice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_BlowdownValve", "ClientPlayOpenVoice");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_BlowdownValve::BP_OnValveOpen(uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_BlowdownValve", "BP_OnValveOpen");
    struct
    {
        uint8_t bOpen;
    } Parms{};
    Parms.bOpen = (uint8_t)bOpen;
    this->ProcessEvent(Func, &Parms);
}

// ---- AInteractor_Football::* ----
void AInteractor_Football::ThrowBall(struct FVector ThrowDirection, struct FVector CharacterVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Football", "ThrowBall");
    struct
    {
        struct FVector ThrowDirection;
        struct FVector CharacterVelocity;
    } Parms{};
    Parms.ThrowDirection = (struct FVector)ThrowDirection;
    Parms.CharacterVelocity = (struct FVector)CharacterVelocity;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Football::OnRep_ItemID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Football", "OnRep_ItemID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Football::OnRep_CurrentFootballState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Football", "OnRep_CurrentFootballState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AGPCharacterBase* AInteractor_Football::GetLastTouchedPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Football", "GetLastTouchedPlayer");
    struct
    {
        struct AGPCharacterBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AInteractor_Football::GetBallVelocity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Football", "GetBallVelocity");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AInteractor_Football::ApplyImpulse(struct FVector Impulse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Football", "ApplyImpulse");
    struct
    {
        struct FVector Impulse;
    } Parms{};
    Parms.Impulse = (struct FVector)Impulse;
    this->ProcessEvent(Func, &Parms);
}

// ---- AInteractor_GiftTreasure::* ----
void AInteractor_GiftTreasure::UnLockTreasure(uint64_t InPlayerUid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_GiftTreasure", "UnLockTreasure");
    struct
    {
        uint64_t InPlayerUid;
    } Parms{};
    Parms.InPlayerUid = (uint64_t)InPlayerUid;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_GiftTreasure::ReallyUnLockTreasure()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_GiftTreasure", "ReallyUnLockTreasure");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_GiftTreasure::OnLootingPlayerChange(struct ADFMCharacter* CHARACTER, uint8_t bAddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_GiftTreasure", "OnLootingPlayerChange");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        uint8_t bAddOrRemove;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    Parms.bAddOrRemove = (uint8_t)bAddOrRemove;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_GiftTreasure::LockTreasure(uint64_t InPlayerUid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_GiftTreasure", "LockTreasure");
    struct
    {
        uint64_t InPlayerUid;
    } Parms{};
    Parms.InPlayerUid = (uint64_t)InPlayerUid;
    this->ProcessEvent(Func, &Parms);
}

// ---- AInteractor_Mound::* ----
void AInteractor_Mound::OnTreasureCoverBegin(struct ACHARACTER* InOperatorCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Mound", "OnTreasureCoverBegin");
    struct
    {
        struct ACHARACTER* InOperatorCharacter;
    } Parms{};
    Parms.InOperatorCharacter = (struct ACHARACTER*)InOperatorCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Mound::OnRep_GiftTreasure()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Mound", "OnRep_GiftTreasure");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Mound::OnRep_CurrentState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Mound", "OnRep_CurrentState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Mound::OnLoadTreasureClass(struct TArray<struct FSoftObjectPath> Assets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Mound", "OnLoadTreasureClass");
    struct
    {
        struct TArray<struct FSoftObjectPath> Assets;
    } Parms{};
    Parms.Assets = (struct TArray<struct FSoftObjectPath>)Assets;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Mound::BP_OnSwitchMoundState(EMoundState InState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Mound", "BP_OnSwitchMoundState");
    struct
    {
        enum EMoundState InState;
    } Parms{};
    Parms.InState = (enum EMoundState)InState;
    this->ProcessEvent(Func, &Parms);
}

// ---- AInteractor_Oscilloscope::* ----
void AInteractor_Oscilloscope::ServerTryInteract(struct AGPCharacter* InOptCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "ServerTryInteract");
    struct
    {
        struct AGPCharacter* InOptCharacter;
    } Parms{};
    Parms.InOptCharacter = (struct AGPCharacter*)InOptCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Oscilloscope::ServerStartOperate(struct AGPCharacter* InOptCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "ServerStartOperate");
    struct
    {
        struct AGPCharacter* InOptCharacter;
    } Parms{};
    Parms.InOptCharacter = (struct AGPCharacter*)InOptCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Oscilloscope::ServerOpenPanel(struct AGPCharacter* InOptCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "ServerOpenPanel");
    struct
    {
        struct AGPCharacter* InOptCharacter;
    } Parms{};
    Parms.InOptCharacter = (struct AGPCharacter*)InOptCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Oscilloscope::ResetRotaryKnobRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "ResetRotaryKnobRotation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Oscilloscope::ClientTryInteract(struct ACHARACTER* InOptCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "ClientTryInteract");
    struct
    {
        struct ACHARACTER* InOptCharacter;
    } Parms{};
    Parms.InOptCharacter = (struct ACHARACTER*)InOptCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_Oscilloscope::ClientOpenOscilloscopePanel(struct AGPCharacter* InOptCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "ClientOpenOscilloscopePanel");
    struct
    {
        struct AGPCharacter* InOptCharacter;
    } Parms{};
    Parms.InOptCharacter = (struct AGPCharacter*)InOptCharacter;
    this->ProcessEvent(Func, &Parms);
}

struct USceneComponent* AInteractor_Oscilloscope::BP_GetRotaryKnob()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "BP_GetRotaryKnob");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AOscilloscopeScreen* AInteractor_Oscilloscope::BP_GetOscilloscopeScreen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "BP_GetOscilloscopeScreen");
    struct
    {
        struct AOscilloscopeScreen* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AInteractor_Oscilloscope::AddRotaryKnobRotation(float InRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_Oscilloscope", "AddRotaryKnobRotation");
    struct
    {
        float InRotation;
    } Parms{};
    Parms.InRotation = (float)InRotation;
    this->ProcessEvent(Func, &Parms);
}

// ---- AInteractor_ParkourStart::* ----
void AInteractor_ParkourStart::ServerStartParkour(struct ADFMCharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ServerStartParkour");
    struct
    {
        struct ADFMCharacter* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct ADFMCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::ServerPutOnBCIEnd(struct ADFMCharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ServerPutOnBCIEnd");
    struct
    {
        struct ADFMCharacter* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct ADFMCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::ServerOverTime(struct ADFMCharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ServerOverTime");
    struct
    {
        struct ADFMCharacter* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct ADFMCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::ServerOnReadyTimerCountdown(uint64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ServerOnReadyTimerCountdown");
    struct
    {
        uint64_t PlayerUin;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::ServerOnOverlapCheckPointEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ServerOnOverlapCheckPointEnd");
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

void AInteractor_ParkourStart::ServerOnOverlapCheckPointBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ServerOnOverlapCheckPointBegin");
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

void AInteractor_ParkourStart::ServerFinishParkour(struct ADFMCharacter* InCharacter, uint8_t bCompleted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ServerFinishParkour");
    struct
    {
        struct ADFMCharacter* InCharacter;
        uint8_t bCompleted;
    } Parms{};
    Parms.InCharacter = (struct ADFMCharacter*)InCharacter;
    Parms.bCompleted = (uint8_t)bCompleted;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::SaveToDatatable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "SaveToDatatable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::RefrsehCheckPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "RefrsehCheckPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::OnServerEnterStartCheckPoint(uint64_t InPlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "OnServerEnterStartCheckPoint");
    struct
    {
        uint64_t InPlayerUin;
    } Parms{};
    Parms.InPlayerUin = (uint64_t)InPlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::MulticastOnStartParkour(struct FParkourProgress PlayerParkourProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "MulticastOnStartParkour");
    struct
    {
        struct FParkourProgress PlayerParkourProgress;
    } Parms{};
    Parms.PlayerParkourProgress = (struct FParkourProgress)PlayerParkourProgress;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::MulticastOnReadyTimerCountdown(struct FParkourProgress PlayerParkourProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "MulticastOnReadyTimerCountdown");
    struct
    {
        struct FParkourProgress PlayerParkourProgress;
    } Parms{};
    Parms.PlayerParkourProgress = (struct FParkourProgress)PlayerParkourProgress;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::MulticastOnPutOnBCIEnd(struct FParkourProgress PlayerParkourProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "MulticastOnPutOnBCIEnd");
    struct
    {
        struct FParkourProgress PlayerParkourProgress;
    } Parms{};
    Parms.PlayerParkourProgress = (struct FParkourProgress)PlayerParkourProgress;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::MulticastOnLeaveReadyCheckPoint(struct FParkourProgress PlayerParkourProgress, uint8_t bFalseStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "MulticastOnLeaveReadyCheckPoint");
    struct
    {
        struct FParkourProgress PlayerParkourProgress;
        uint8_t bFalseStart;
    } Parms{};
    Parms.PlayerParkourProgress = (struct FParkourProgress)PlayerParkourProgress;
    Parms.bFalseStart = (uint8_t)bFalseStart;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::MulticastOnFinishParkour(struct FParkourProgress PlayerParkourProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "MulticastOnFinishParkour");
    struct
    {
        struct FParkourProgress PlayerParkourProgress;
    } Parms{};
    Parms.PlayerParkourProgress = (struct FParkourProgress)PlayerParkourProgress;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::MulticastOnArriveNewCheckPoint(struct FParkourProgress PlayerParkourProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "MulticastOnArriveNewCheckPoint");
    struct
    {
        struct FParkourProgress PlayerParkourProgress;
    } Parms{};
    Parms.PlayerParkourProgress = (struct FParkourProgress)PlayerParkourProgress;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::LoadFromDatatable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "LoadFromDatatable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::LoadAllCheckPointsTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "LoadAllCheckPointsTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UGPParkourHudViewController* AInteractor_ParkourStart::GetParkourHudViewController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "GetParkourHudViewController");
    struct
    {
        struct UGPParkourHudViewController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AInteractor_ParkourStart::ClearAllCheckPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "ClearAllCheckPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::CacheAllCheckPointsTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "CacheAllCheckPointsTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::AddOneCheckPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "AddOneCheckPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourStart::AddCheckPoints(const struct TArray<struct FVector>& Locations, const struct TArray<struct FRotator>& Rotations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourStart", "AddCheckPoints");
    struct
    {
        struct TArray<struct FVector> Locations;
        struct TArray<struct FRotator> Rotations;
    } Parms{};
    Parms.Locations = (struct TArray<struct FVector>)Locations;
    Parms.Rotations = (struct TArray<struct FRotator>)Rotations;
    this->ProcessEvent(Func, &Parms);
}

// ---- AInteractor_ParkourRank::* ----
void AInteractor_ParkourRank::ResquestRankData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "ResquestRankData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourRank::ResquestLocalPlayerData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "ResquestLocalPlayerData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourRank::ResquestFriendData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "ResquestFriendData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourRank::OnResquestRankData(struct TArray<struct FParkourRankDataItem> InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "OnResquestRankData");
    struct
    {
        struct TArray<struct FParkourRankDataItem> InData;
    } Parms{};
    Parms.InData = (struct TArray<struct FParkourRankDataItem>)InData;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourRank::OnResquestLocalPlayerData(struct FParkourRankDataItem InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "OnResquestLocalPlayerData");
    struct
    {
        struct FParkourRankDataItem InData;
    } Parms{};
    Parms.InData = (struct FParkourRankDataItem)InData;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourRank::OnResquestFriendData(struct TArray<struct FParkourRankDataItem> InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "OnResquestFriendData");
    struct
    {
        struct TArray<struct FParkourRankDataItem> InData;
    } Parms{};
    Parms.InData = (struct TArray<struct FParkourRankDataItem>)InData;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_ParkourRank::OnHUDStateModified(struct FName HUDState, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "OnHUDStateModified");
    struct
    {
        struct FName HUDState;
        uint8_t bEnable;
    } Parms{};
    Parms.HUDState = (struct FName)HUDState;
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

struct UGPParkourRankViewController* AInteractor_ParkourRank::GetParkourRankViewController()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "GetParkourRankViewController");
    struct
    {
        struct UGPParkourRankViewController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FParkourRankDataItem> AInteractor_ParkourRank::GetHangUpListData(uint8_t bInAllServer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_ParkourRank", "GetHangUpListData");
    struct
    {
        uint8_t bInAllServer;
        struct TArray<struct FParkourRankDataItem> ReturnValue;
    } Parms{};
    Parms.bInAllServer = (uint8_t)bInAllServer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AInteractor_VaultHackPC::* ----
void AInteractor_VaultHackPC::OnRep_VaultGateActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_VaultHackPC", "OnRep_VaultGateActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_VaultHackPC::OnPCMorseCodeSuccessServer(uint8_t bSuccess, struct AActor* HackPC, uint64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_VaultHackPC", "OnPCMorseCodeSuccessServer");
    struct
    {
        uint8_t bSuccess;
        struct AActor* HackPC;
        uint64_t PlayerId;
    } Parms{};
    Parms.bSuccess = (uint8_t)bSuccess;
    Parms.HackPC = (struct AActor*)HackPC;
    Parms.PlayerId = (uint64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_VaultHackPC::DelayActiveVaultGate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_VaultHackPC", "DelayActiveVaultGate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractor_VaultHackPC::BP_OnVaultGateActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Interactor_VaultHackPC", "BP_OnVaultGateActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UInteractorBallSimComponent::* ----
void UInteractorBallSimComponent::SetBallState(EInteractorBallState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "SetBallState");
    struct
    {
        enum EInteractorBallState NewState;
    } Parms{};
    Parms.NewState = (enum EInteractorBallState)NewState;
    this->ProcessEvent(Func, &Parms);
}

void UInteractorBallSimComponent::OnRep_BallState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "OnRep_BallState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UInteractorBallSimComponent::OnPhysBodyHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "OnPhysBodyHit");
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

void UInteractorBallSimComponent::Initialize(struct UPrimitiveComponent* InPhysBody)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "Initialize");
    struct
    {
        struct UPrimitiveComponent* InPhysBody;
    } Parms{};
    Parms.InPhysBody = (struct UPrimitiveComponent*)InPhysBody;
    this->ProcessEvent(Func, &Parms);
}

struct FVector UInteractorBallSimComponent::GetBallVelocity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "GetBallVelocity");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EInteractorBallState UInteractorBallSimComponent::GetBallState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "GetBallState");
    struct
    {
        enum EInteractorBallState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UInteractorBallSimComponent::GetAuthoritativePosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "GetAuthoritativePosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UInteractorBallSimComponent::ApplyThrowImpulse(struct FVector ThrowDirection, struct FVector CharacterVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "ApplyThrowImpulse");
    struct
    {
        struct FVector ThrowDirection;
        struct FVector CharacterVelocity;
    } Parms{};
    Parms.ThrowDirection = (struct FVector)ThrowDirection;
    Parms.CharacterVelocity = (struct FVector)CharacterVelocity;
    this->ProcessEvent(Func, &Parms);
}

void UInteractorBallSimComponent::ApplyImpulseAtLocation(struct FVector Impulse, struct FVector WorldPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "ApplyImpulseAtLocation");
    struct
    {
        struct FVector Impulse;
        struct FVector WorldPoint;
    } Parms{};
    Parms.Impulse = (struct FVector)Impulse;
    Parms.WorldPoint = (struct FVector)WorldPoint;
    this->ProcessEvent(Func, &Parms);
}

void UInteractorBallSimComponent::ApplyImpulse(struct FVector Impulse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorBallSimComponent", "ApplyImpulse");
    struct
    {
        struct FVector Impulse;
    } Parms{};
    Parms.Impulse = (struct FVector)Impulse;
    this->ProcessEvent(Func, &Parms);
}

// ---- UInteractorData::* ----
struct AInteractorBase* UInteractorData::SpawnInteractor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorData", "SpawnInteractor");
    struct
    {
        struct AInteractorBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AInteractorContainer_Collector::* ----
void AInteractorContainer_Collector::GenerateInteractorData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorContainer_Collector", "GenerateInteractorData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractorContainer_Collector::CollectInteractorBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorContainer_Collector", "CollectInteractorBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractorContainer_Collector::CollectHighValueRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorContainer_Collector", "CollectHighValueRoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractorContainer_Collector::CollectData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorContainer_Collector", "CollectData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AInteractorContainer_Collector::CollectCapacitorRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorContainer_Collector", "CollectCapacitorRoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UInteractorOptExecuteComponent_ShowTreasureCoverUI::* ----
void UInteractorOptExecuteComponent_ShowTreasureCoverUI::OnHUDStateChanged(struct FName StateName, uint8_t bIsVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractorOptExecuteComponent_ShowTreasureCoverUI", "OnHUDStateChanged");
    struct
    {
        struct FName StateName;
        uint8_t bIsVisible;
    } Parms{};
    Parms.StateName = (struct FName)StateName;
    Parms.bIsVisible = (uint8_t)bIsVisible;
    this->ProcessEvent(Func, &Parms);
}

// ---- AOscilloscopeScreen::* ----
void AOscilloscopeScreen::UpdateSpline(int32_t CurrentIndex, float CurrentNodePos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OscilloscopeScreen", "UpdateSpline");
    struct
    {
        int32_t CurrentIndex;
        float CurrentNodePos;
    } Parms{};
    Parms.CurrentIndex = (int32_t)CurrentIndex;
    Parms.CurrentNodePos = (float)CurrentNodePos;
    this->ProcessEvent(Func, &Parms);
}

void AOscilloscopeScreen::SetColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OscilloscopeScreen", "SetColor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AOscilloscopeScreen::InitISM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OscilloscopeScreen", "InitISM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct USceneComponent* AOscilloscopeScreen::GetPointRightBottomComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OscilloscopeScreen", "GetPointRightBottomComponent");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* AOscilloscopeScreen::GetPointLeftTopComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OscilloscopeScreen", "GetPointLeftTopComponent");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* AOscilloscopeScreen::BP_GetOuterPoint2Component()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OscilloscopeScreen", "BP_GetOuterPoint2Component");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* AOscilloscopeScreen::BP_GetOuterPoint1Component()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OscilloscopeScreen", "BP_GetOuterPoint1Component");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ASOLCharacter::* ----
void ASOLCharacter::ClientShowEventBanner(int32_t InEventBannerID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLCharacter", "ClientShowEventBanner");
    struct
    {
        int32_t InEventBannerID;
    } Parms{};
    Parms.InEventBannerID = (int32_t)InEventBannerID;
    this->ProcessEvent(Func, &Parms);
}

// ---- ASOLEventVolumeBox::* ----
void ASOLEventVolumeBox::StartEventWithLevelChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "StartEventWithLevelChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::PlaySequence(struct FSoftObjectPath SequencePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "PlaySequence");
    struct
    {
        struct FSoftObjectPath SequencePath;
    } Parms{};
    Parms.SequencePath = (struct FSoftObjectPath)SequencePath;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::PlayEventSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "PlayEventSequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "OnVolumeEndOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::OnVolumeBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "OnVolumeBeginOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::OnRep_IsEventSeqPlayed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "OnRep_IsEventSeqPlayed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::OnPlayerLocationChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "OnPlayerLocationChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::OnLoadingViewShutDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "OnLoadingViewShutDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::LoadEventLevels(struct TArray<struct FString> LoadLevels, struct TArray<struct FString> UnloadLevels, struct FString LoadSubWorld, struct FString UnloadSubWorld, struct TArray<struct FString> MobileLoadLevels, struct TArray<struct FString> MobileUnloadLevels, uint8_t bIsSwitchPRT)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "LoadEventLevels");
    struct
    {
        struct TArray<struct FString> LoadLevels;
        struct TArray<struct FString> UnloadLevels;
        struct FString LoadSubWorld;
        struct FString UnloadSubWorld;
        struct TArray<struct FString> MobileLoadLevels;
        struct TArray<struct FString> MobileUnloadLevels;
        uint8_t bIsSwitchPRT;
    } Parms{};
    Parms.LoadLevels = (struct TArray<struct FString>)LoadLevels;
    Parms.UnloadLevels = (struct TArray<struct FString>)UnloadLevels;
    Parms.LoadSubWorld = (struct FString)LoadSubWorld;
    Parms.UnloadSubWorld = (struct FString)UnloadSubWorld;
    Parms.MobileLoadLevels = (struct TArray<struct FString>)MobileLoadLevels;
    Parms.MobileUnloadLevels = (struct TArray<struct FString>)MobileUnloadLevels;
    Parms.bIsSwitchPRT = (uint8_t)bIsSwitchPRT;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::EnableScreenEffects(uint8_t bIsEnable, int32_t ScreenIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "EnableScreenEffects");
    struct
    {
        uint8_t bIsEnable;
        int32_t ScreenIndex;
    } Parms{};
    Parms.bIsEnable = (uint8_t)bIsEnable;
    Parms.ScreenIndex = (int32_t)ScreenIndex;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::EnableLocalPlayerScreenEffects(uint8_t bIsEnable, int32_t ScreenIndex, uint8_t bIsEnterRepeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "EnableLocalPlayerScreenEffects");
    struct
    {
        uint8_t bIsEnable;
        int32_t ScreenIndex;
        uint8_t bIsEnterRepeat;
    } Parms{};
    Parms.bIsEnable = (uint8_t)bIsEnable;
    Parms.ScreenIndex = (int32_t)ScreenIndex;
    Parms.bIsEnterRepeat = (uint8_t)bIsEnterRepeat;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::EnableDestroyInnerSkillCreatedWithOverlap(uint8_t bIsEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "EnableDestroyInnerSkillCreatedWithOverlap");
    struct
    {
        uint8_t bIsEnable;
    } Parms{};
    Parms.bIsEnable = (uint8_t)bIsEnable;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::CallCvar(struct FString CVar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "CallCvar");
    struct
    {
        struct FString CVar;
    } Parms{};
    Parms.CVar = (struct FString)CVar;
    this->ProcessEvent(Func, &Parms);
}

void ASOLEventVolumeBox::AdjustPlayerCamera(struct UCameraShake* Shake, float Scale, ECameraAnimPlaySpace PlaySpace, struct FRotator UserPlaySpaceRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLEventVolumeBox", "AdjustPlayerCamera");
    struct
    {
        struct UCameraShake* Shake;
        float Scale;
        enum ECameraAnimPlaySpace PlaySpace;
        struct FRotator UserPlaySpaceRot;
    } Parms{};
    Parms.Shake = (struct UCameraShake*)Shake;
    Parms.Scale = (float)Scale;
    Parms.PlaySpace = (enum ECameraAnimPlaySpace)PlaySpace;
    Parms.UserPlaySpaceRot = (struct FRotator)UserPlaySpaceRot;
    this->ProcessEvent(Func, &Parms);
}

// ---- USOLGameplayDelegates::* ----
struct USOLGameplayDelegates* USOLGameplayDelegates::GetSOLGameplayDelegates(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLGameplayDelegates", "GetSOLGameplayDelegates");
    struct
    {
        struct UObject* WorldContext;
        struct USOLGameplayDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USOLGameplayDelegates* USOLGameplayDelegates::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SOLGameplayDelegates", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct USOLGameplayDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USOLInteractorComponent::* ----
void USOLInteractorComponent::SOLOnShowDSCheckTips(struct FText InTips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "SOLOnShowDSCheckTips");
    struct
    {
        struct FText InTips;
    } Parms{};
    Parms.InTips = (struct FText)InTips;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ServerTryInteractOscilloscope(struct AInteractor_Oscilloscope* Oscilloscope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ServerTryInteractOscilloscope");
    struct
    {
        struct AInteractor_Oscilloscope* Oscilloscope;
    } Parms{};
    Parms.Oscilloscope = (struct AInteractor_Oscilloscope*)Oscilloscope;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ServerTry2AbandonCurrentParkour()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ServerTry2AbandonCurrentParkour");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ServerSendGiftWithMessage(struct AInteractor_GiftTreasure* InTreasure, struct ADFMPlayerState* InPS, struct FString InMesssage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ServerSendGiftWithMessage");
    struct
    {
        struct AInteractor_GiftTreasure* InTreasure;
        struct ADFMPlayerState* InPS;
        struct FString InMesssage;
    } Parms{};
    Parms.InTreasure = (struct AInteractor_GiftTreasure*)InTreasure;
    Parms.InPS = (struct ADFMPlayerState*)InPS;
    Parms.InMesssage = (struct FString)InMesssage;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::SendTipsToTakerBySignFootball(struct ADFMCharacter* Taker, struct ADFMCharacter* Signer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "SendTipsToTakerBySignFootball");
    struct
    {
        struct ADFMCharacter* Taker;
        struct ADFMCharacter* Signer;
    } Parms{};
    Parms.Taker = (struct ADFMCharacter*)Taker;
    Parms.Signer = (struct ADFMCharacter*)Signer;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::SendTipsToSignerBySignFootball(struct ADFMCharacter* Taker, struct ADFMCharacter* Signer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "SendTipsToSignerBySignFootball");
    struct
    {
        struct ADFMCharacter* Taker;
        struct ADFMCharacter* Signer;
    } Parms{};
    Parms.Taker = (struct ADFMCharacter*)Taker;
    Parms.Signer = (struct ADFMCharacter*)Signer;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::SendSignNamesToFootballTaker(uint64_t InItemGid, struct TArray<struct FString> InNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "SendSignNamesToFootballTaker");
    struct
    {
        uint64_t InItemGid;
        struct TArray<struct FString> InNames;
    } Parms{};
    Parms.InItemGid = (uint64_t)InItemGid;
    Parms.InNames = (struct TArray<struct FString>)InNames;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::SendChatByInspectRedBall()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "SendChatByInspectRedBall");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::RequestSpawnThrowableFootball(struct FVector InLoc, struct FVector InThrowDirection, struct FVector InCharacterVelocity, struct FName InItemID, uint64_t InItemGid, int32_t InRandID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "RequestSpawnThrowableFootball");
    struct
    {
        struct FVector InLoc;
        struct FVector InThrowDirection;
        struct FVector InCharacterVelocity;
        struct FName InItemID;
        uint64_t InItemGid;
        int32_t InRandID;
    } Parms{};
    Parms.InLoc = (struct FVector)InLoc;
    Parms.InThrowDirection = (struct FVector)InThrowDirection;
    Parms.InCharacterVelocity = (struct FVector)InCharacterVelocity;
    Parms.InItemID = (struct FName)InItemID;
    Parms.InItemGid = (uint64_t)InItemGid;
    Parms.InRandID = (int32_t)InRandID;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::RequestSpawnFootballGate(int32_t InRandID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "RequestSpawnFootballGate");
    struct
    {
        int32_t InRandID;
    } Parms{};
    Parms.InRandID = (int32_t)InRandID;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::RequestPlayFootballThrow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "RequestPlayFootballThrow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::OnInteractKeyDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "OnInteractKeyDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::NetMultiPlayFootballEffect(int32_t InIdx, struct FVector InServerLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "NetMultiPlayFootballEffect");
    struct
    {
        int32_t InIdx;
        struct FVector InServerLoc;
    } Parms{};
    Parms.InIdx = (int32_t)InIdx;
    Parms.InServerLoc = (struct FVector)InServerLoc;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::NetMultiPlayFootballAudio(int32_t InIdx, struct FVector InServerLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "NetMultiPlayFootballAudio");
    struct
    {
        int32_t InIdx;
        struct FVector InServerLoc;
    } Parms{};
    Parms.InIdx = (int32_t)InIdx;
    Parms.InServerLoc = (struct FVector)InServerLoc;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ClientPlayPlaceFootballGateAnim(int32_t InRandID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ClientPlayPlaceFootballGateAnim");
    struct
    {
        int32_t InRandID;
    } Parms{};
    Parms.InRandID = (int32_t)InRandID;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ClientPlayFootballThrow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ClientPlayFootballThrow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ClientPlayFootballAudio(int32_t InIdx, struct FVector InServerLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ClientPlayFootballAudio");
    struct
    {
        int32_t InIdx;
        struct FVector InServerLoc;
    } Parms{};
    Parms.InIdx = (int32_t)InIdx;
    Parms.InServerLoc = (struct FVector)InServerLoc;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ClientOpenOscilloscopePanel(struct AInteractor_Oscilloscope* Oscilloscope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ClientOpenOscilloscopePanel");
    struct
    {
        struct AInteractor_Oscilloscope* Oscilloscope;
    } Parms{};
    Parms.Oscilloscope = (struct AInteractor_Oscilloscope*)Oscilloscope;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorComponent::ClientBreakPlaceFootballGate(struct AGPCharacterBase* InGPCharacterBase, int32_t BreakType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorComponent", "ClientBreakPlaceFootballGate");
    struct
    {
        struct AGPCharacterBase* InGPCharacterBase;
        int32_t BreakType;
    } Parms{};
    Parms.InGPCharacterBase = (struct AGPCharacterBase*)InGPCharacterBase;
    Parms.BreakType = (int32_t)BreakType;
    this->ProcessEvent(Func, &Parms);
}

// ---- USOLInteractorManningComponent::* ----
uint8_t USOLInteractorManningComponent::IsCountdownReverse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorManningComponent", "IsCountdownReverse");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USOLInteractorOptInteractorAnimExecuteComponent::* ----
void USOLInteractorOptInteractorAnimExecuteComponent::OnMontageEnded(struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorOptInteractorAnimExecuteComponent", "OnMontageEnded");
    struct
    {
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractorOptInteractorAnimExecuteComponent::OnAnimLoadComplete(struct TArray<struct FSoftObjectPath> AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractorOptInteractorAnimExecuteComponent", "OnAnimLoadComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> AssetRef;
    } Parms{};
    Parms.AssetRef = (struct TArray<struct FSoftObjectPath>)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

// ---- USOLInteractSystem::* ----
void USOLInteractSystem::NetMultiPlayFootballEffect(int32_t InIdx, struct FVector InServerLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractSystem", "NetMultiPlayFootballEffect");
    struct
    {
        int32_t InIdx;
        struct FVector InServerLoc;
    } Parms{};
    Parms.InIdx = (int32_t)InIdx;
    Parms.InServerLoc = (struct FVector)InServerLoc;
    this->ProcessEvent(Func, &Parms);
}

void USOLInteractSystem::NetMultiPlayFootballAudio(int32_t InIdx, struct FVector InServerLoc, struct ASOLCharacter* InSOLCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SOLInteractSystem", "NetMultiPlayFootballAudio");
    struct
    {
        int32_t InIdx;
        struct FVector InServerLoc;
        struct ASOLCharacter* InSOLCharacter;
    } Parms{};
    Parms.InIdx = (int32_t)InIdx;
    Parms.InServerLoc = (struct FVector)InServerLoc;
    Parms.InSOLCharacter = (struct ASOLCharacter*)InSOLCharacter;
    this->ProcessEvent(Func, &Parms);
}

// ---- UTreasureMgrComponent::* ----
void UTreasureMgrComponent::OnMatchStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TreasureMgrComponent", "OnMatchStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTreasureMgrComponent::OnMatchEnd(EMatchOverReason MatchOverReason, int64_t PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TreasureMgrComponent", "OnMatchEnd");
    struct
    {
        enum EMatchOverReason MatchOverReason;
        int64_t PlayerId;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    Parms.PlayerId = (int64_t)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

// ---- AVaultGasVolume::* ----
void AVaultGasVolume::TickPerform(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "TickPerform");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::ShowPreviewMesh(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "ShowPreviewMesh");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::ServerRealActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "ServerRealActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::ServerDeactive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "ServerDeactive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::ServerActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "ServerActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::RemoveScreenEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "RemoveScreenEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::OnVolumeOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "OnVolumeOverlapEnd");
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

void AVaultGasVolume::OnVolumeOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "OnVolumeOverlapBegin");
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

void AVaultGasVolume::OnServerGameEnd(EMatchOverReason Reason, int64_t PlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "OnServerGameEnd");
    struct
    {
        enum EMatchOverReason Reason;
        int64_t PlayerUin;
    } Parms{};
    Parms.Reason = (enum EMatchOverReason)Reason;
    Parms.PlayerUin = (int64_t)PlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::OnRep_ActiveState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "OnRep_ActiveState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::OnLocalFocusChange(struct AActor* OldTarget, struct AActor* NewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "OnLocalFocusChange");
    struct
    {
        struct AActor* OldTarget;
        struct AActor* NewTarget;
    } Parms{};
    Parms.OldTarget = (struct AActor*)OldTarget;
    Parms.NewTarget = (struct AActor*)NewTarget;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AVaultGasVolume::GetHasActivatedContainer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "GetHasActivatedContainer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AVaultGasVolume::GetCVarEnableVGVPreview()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("VaultGasVolume", "GetCVarEnableVGVPreview");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AVaultGasVolume::ClientPlayActiveVoice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "ClientPlayActiveVoice");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AVaultGasVolume::CheckCharacterCanPerform(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "CheckCharacterCanPerform");
    struct
    {
        struct AGPCharacter* CHARACTER;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AVaultGasVolume::AddScreenEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "AddScreenEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::ActiveFxActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "ActiveFxActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGasVolume::ActivateContainer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGasVolume", "ActivateContainer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AVaultGateActor::* ----
void AVaultGateActor::ServerActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGateActor", "ServerActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AVaultGateActor::OnRep_GateState(int32_t PreState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGateActor", "OnRep_GateState");
    struct
    {
        int32_t PreState;
    } Parms{};
    Parms.PreState = (int32_t)PreState;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AVaultGateActor::IsOpened()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGateActor", "IsOpened");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AVaultGateActor::BP_PlayOpenAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VaultGateActor", "BP_PlayOpenAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
