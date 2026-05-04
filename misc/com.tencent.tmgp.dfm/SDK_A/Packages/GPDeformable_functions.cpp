#include "GPDeformable.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AGPDeformableActor::* ----
void AGPDeformableActor::UnRegisterBoxCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "UnRegisterBoxCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::TickLifeTime(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "TickLifeTime");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::TickGenerateGrid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "TickGenerateGrid");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::SyncDSDataToRuntime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "SyncDSDataToRuntime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::StoreDSSyncData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "StoreDSSyncData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::SetSmokeStatePlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "SetSmokeStatePlaying");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::SetPlayerUIN(uint64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "SetPlayerUIN");
    struct
    {
        uint64_t Uin;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::SetOwnerActor(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "SetOwnerActor");
    struct
    {
        struct AActor* InActor;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::SetMoveTargetByIndex(int32_t Index, const struct FVector& TargetPosition, const struct FVector& Forward, int32_t Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "SetMoveTargetByIndex");
    struct
    {
        int32_t Index;
        struct FVector TargetPosition;
        struct FVector Forward;
        int32_t Source;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.TargetPosition = (struct FVector)TargetPosition;
    Parms.Forward = (struct FVector)Forward;
    Parms.Source = (int32_t)Source;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::SetMoveTarget(const struct FVector& TargetPosition, const struct FVector& Forward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "SetMoveTarget");
    struct
    {
        struct FVector TargetPosition;
        struct FVector Forward;
    } Parms{};
    Parms.TargetPosition = (struct FVector)TargetPosition;
    Parms.Forward = (struct FVector)Forward;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::ServerSetMoveTargetByIndex(int32_t Index, const struct FVector& TargetPosition, const struct FVector& Forward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "ServerSetMoveTargetByIndex");
    struct
    {
        int32_t Index;
        struct FVector TargetPosition;
        struct FVector Forward;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.TargetPosition = (struct FVector)TargetPosition;
    Parms.Forward = (struct FVector)Forward;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::RegisterBoxCollision(struct FVector Center, struct FVector Forward, struct FVector Right, struct FVector Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "RegisterBoxCollision");
    struct
    {
        struct FVector Center;
        struct FVector Forward;
        struct FVector Right;
        struct FVector Extent;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.Forward = (struct FVector)Forward;
    Parms.Right = (struct FVector)Right;
    Parms.Extent = (struct FVector)Extent;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::ProcessSyncMoveList(const struct TArray<struct FVector>& InSyncMoveList, const struct TArray<struct FVector>& InSyncMoveForwardList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "ProcessSyncMoveList");
    struct
    {
        struct TArray<struct FVector> InSyncMoveList;
        struct TArray<struct FVector> InSyncMoveForwardList;
    } Parms{};
    Parms.InSyncMoveList = (struct TArray<struct FVector>)InSyncMoveList;
    Parms.InSyncMoveForwardList = (struct TArray<struct FVector>)InSyncMoveForwardList;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnVolumeSmokeIndexChange(int32_t CurrentLevelIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnVolumeSmokeIndexChange");
    struct
    {
        int32_t CurrentLevelIndex;
    } Parms{};
    Parms.CurrentLevelIndex = (int32_t)CurrentLevelIndex;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnRep_VisibleList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnRep_VisibleList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnRep_SyncMoveList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnRep_SyncMoveList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnRep_InDisappearing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnRep_InDisappearing");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnRep_AuthorityRuntimeData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnRep_AuthorityRuntimeData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnFinishCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnFinishCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnDeformableSmokeComponentLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnDeformableSmokeComponentLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnBoxCollisionInit(struct UBoxComponent* BoxComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnBoxCollisionInit");
    struct
    {
        struct UBoxComponent* BoxComponent;
    } Parms{};
    Parms.BoxComponent = (struct UBoxComponent*)BoxComponent;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::OnBeginCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "OnBeginCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::MulticastMoveTargetByIndex(int32_t Index, struct FVector TargetPosition, struct FVector Forward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "MulticastMoveTargetByIndex");
    struct
    {
        int32_t Index;
        struct FVector TargetPosition;
        struct FVector Forward;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.TargetPosition = (struct FVector)TargetPosition;
    Parms.Forward = (struct FVector)Forward;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::MulticastInDisappearing(uint8_t isInDisappearing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "MulticastInDisappearing");
    struct
    {
        uint8_t isInDisappearing;
    } Parms{};
    Parms.isInDisappearing = (uint8_t)isInDisappearing;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::MulticastDrawBox(int32_t Index, struct FVector Center, struct FVector Extent, struct FVector Forward, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "MulticastDrawBox");
    struct
    {
        int32_t Index;
        struct FVector Center;
        struct FVector Extent;
        struct FVector Forward;
        float Duration;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Center = (struct FVector)Center;
    Parms.Extent = (struct FVector)Extent;
    Parms.Forward = (struct FVector)Forward;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPDeformableActor::LineTestOnly(const struct FVector& LineStart, const struct FVector& LineEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "LineTestOnly");
    struct
    {
        struct FVector LineStart;
        struct FVector LineEnd;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LineStart = (struct FVector)LineStart;
    Parms.LineEnd = (struct FVector)LineEnd;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::LineTest(const struct FVector& LineStart, const struct FVector& LineEnd, float& hitTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "LineTest");
    struct
    {
        struct FVector LineStart;
        struct FVector LineEnd;
        float hitTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LineStart = (struct FVector)LineStart;
    Parms.LineEnd = (struct FVector)LineEnd;
    this->ProcessEvent(Func, &Parms);
    hitTime = Parms.hitTime;
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::IsVeryLowQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "IsVeryLowQuality");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::IsUseVolumetric()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "IsUseVolumetric");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::IsSmokeWallLowQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "IsSmokeWallLowQuality");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::IsReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "IsReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::IsLowQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "IsLowQuality");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::IsBuildingMoveList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "IsBuildingMoveList");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableActor::InSideSmoke(const struct FVector& OriginBaseLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "InSideSmoke");
    struct
    {
        struct FVector OriginBaseLoc;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OriginBaseLoc = (struct FVector)OriginBaseLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPDeformableActor::InitSmokeData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "InitSmokeData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::InitRuntimeData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "InitRuntimeData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::InitPseudoRandomSeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "InitPseudoRandomSeed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::InitDeformableSmokeComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "InitDeformableSmokeComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float AGPDeformableActor::GetPileMoveSizeX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "GetPileMoveSizeX");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPDeformableActor::GetGridPileNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "GetGridPileNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath AGPDeformableActor::GetEmitParticleClassPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "GetEmitParticleClassPath");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AGPDeformableActor::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "GetCharacterOwner");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPDeformableActor::GenerateNewSection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "GenerateNewSection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::GenerateBottomAndTop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "GenerateBottomAndTop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::CutBySphere(struct FVector& Center, float radius, uint8_t& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "CutBySphere");
    struct
    {
        struct FVector Center;
        float radius;
        uint8_t Result;
    } Parms{};
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
    Center = Parms.Center;
    Result = Parms.Result;
}

void AGPDeformableActor::CreateServerVoxel(struct FVector& Center, struct FVector& Forward, struct FVector& Right, struct FVector& Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "CreateServerVoxel");
    struct
    {
        struct FVector Center;
        struct FVector Forward;
        struct FVector Right;
        struct FVector Extent;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Center = Parms.Center;
    Forward = Parms.Forward;
    Right = Parms.Right;
    Extent = Parms.Extent;
}

void AGPDeformableActor::CreateBoxCollision(struct FVector Center, struct FVector Forward, struct FVector Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "CreateBoxCollision");
    struct
    {
        struct FVector Center;
        struct FVector Forward;
        struct FVector Extent;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.Forward = (struct FVector)Forward;
    Parms.Extent = (struct FVector)Extent;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::ClearServerVoxel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "ClearServerVoxel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::ClearBoxCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "ClearBoxCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::CancelComponentLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "CancelComponentLoad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableActor::CalculateActorsInside(struct TArray<struct TWeakObjectPtr<struct AActor>>& InsideSmokeActorListResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "CalculateActorsInside");
    struct
    {
        struct TArray<struct TWeakObjectPtr<struct AActor>> InsideSmokeActorListResult;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InsideSmokeActorListResult = Parms.InsideSmokeActorListResult;
}

void AGPDeformableActor::ApplyFinishEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableActor", "ApplyFinishEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPDeformableShapeComponentBase::* ----
void UGPDeformableShapeComponentBase::SetPointState(int32_t Index, ESmokeState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "SetPointState");
    struct
    {
        int32_t Index;
        enum ESmokeState NewState;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.NewState = (enum ESmokeState)NewState;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPDeformableShapeComponentBase::ReadVibilityList(struct TArray<uint8_t>& InList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "ReadVibilityList");
    struct
    {
        struct TArray<uint8_t> InList;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InList = Parms.InList;
    return Parms.ReturnValue;
}

void UGPDeformableShapeComponentBase::OnCreateFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "OnCreateFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPDeformableShapeComponentBase::IsRunningAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "IsRunningAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPDeformableShapeComponentBase::InitRuntimeData(struct UGPDeformableActorRuntimeData* InDataPtr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "InitRuntimeData");
    struct
    {
        struct UGPDeformableActorRuntimeData* InDataPtr;
    } Parms{};
    Parms.InDataPtr = (struct UGPDeformableActorRuntimeData*)InDataPtr;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableShapeComponentBase::GenerateNewSection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "GenerateNewSection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableShapeComponentBase::CutBySphere(struct FVector& Center, float radius, uint8_t& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "CutBySphere");
    struct
    {
        struct FVector Center;
        float radius;
        uint8_t Result;
    } Parms{};
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
    Center = Parms.Center;
    Result = Parms.Result;
}

uint8_t UGPDeformableShapeComponentBase::CheckCanSetSmokeStatePlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "CheckCanSetSmokeStatePlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPDeformableShapeComponentBase::CheckBurst(struct FVector BurstLocation, float BurstRadius, float BurstDelay, int32_t SmokeIndex, struct FSmokeBreakInfo& SmokeBreakerInfo, struct FSkillSmokeBreakTakerInfo& SmokeBreakTakerInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "CheckBurst");
    struct
    {
        struct FVector BurstLocation;
        float BurstRadius;
        float BurstDelay;
        int32_t SmokeIndex;
        struct FSmokeBreakInfo SmokeBreakerInfo;
        struct FSkillSmokeBreakTakerInfo SmokeBreakTakerInfo;
    } Parms{};
    Parms.BurstLocation = (struct FVector)BurstLocation;
    Parms.BurstRadius = (float)BurstRadius;
    Parms.BurstDelay = (float)BurstDelay;
    Parms.SmokeIndex = (int32_t)SmokeIndex;
    this->ProcessEvent(Func, &Parms);
    SmokeBreakerInfo = Parms.SmokeBreakerInfo;
    SmokeBreakTakerInfo = Parms.SmokeBreakTakerInfo;
}

void UGPDeformableShapeComponentBase::BeginDisappearing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "BeginDisappearing");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPDeformableShapeComponentBase::ApplyVibilityList(struct TArray<uint8_t>& InList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "ApplyVibilityList");
    struct
    {
        struct TArray<uint8_t> InList;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InList = Parms.InList;
    return Parms.ReturnValue;
}

void UGPDeformableShapeComponentBase::AddGridDectionTree(int32_t GridIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableShapeComponentBase", "AddGridDectionTree");
    struct
    {
        int32_t GridIndex;
    } Parms{};
    Parms.GridIndex = (int32_t)GridIndex;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPDeformableCubeRayMarchingComponent::* ----
void UGPDeformableCubeRayMarchingComponent::TickRecalculateStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableCubeRayMarchingComponent", "TickRecalculateStep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableCubeRayMarchingComponent::TickGenerateRayMarching()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableCubeRayMarchingComponent", "TickGenerateRayMarching");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableCubeRayMarchingComponent::StartRecalculateStepTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableCubeRayMarchingComponent", "StartRecalculateStepTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableCubeRayMarchingComponent::GenerateRayMarching()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableCubeRayMarchingComponent", "GenerateRayMarching");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableCubeRayMarchingComponent::ClearRuntimeAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableCubeRayMarchingComponent", "ClearRuntimeAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableCubeRayMarchingComponent::ClearRecalculateStepTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableCubeRayMarchingComponent", "ClearRecalculateStepTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPDeformableGameStateComponent::* ----
void UGPDeformableGameStateComponent::UpdateVolumetricViewDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "UpdateVolumetricViewDistance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::UpdateVolumetricFogGridSizeZ()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "UpdateVolumetricFogGridSizeZ");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::UpdateDeformableActor(struct AGPDeformableActor* InDeformableActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "UpdateDeformableActor");
    struct
    {
        struct AGPDeformableActor* InDeformableActor;
    } Parms{};
    Parms.InDeformableActor = (struct AGPDeformableActor*)InDeformableActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::UnRegisterDeformableActor(struct AGPDeformableActor* InDeformableActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "UnRegisterDeformableActor");
    struct
    {
        struct AGPDeformableActor* InDeformableActor;
    } Parms{};
    Parms.InDeformableActor = (struct AGPDeformableActor*)InDeformableActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::TickVolumeSmokeInView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "TickVolumeSmokeInView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::TickActorInSide(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "TickActorInSide");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::SetOverrideVolumetricViewDistance(float ViewDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "SetOverrideVolumetricViewDistance");
    struct
    {
        float ViewDistance;
    } Parms{};
    Parms.ViewDistance = (float)ViewDistance;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::RegisterDeformableActor(struct AGPDeformableActor* InDeformableActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "RegisterDeformableActor");
    struct
    {
        struct AGPDeformableActor* InDeformableActor;
    } Parms{};
    Parms.InDeformableActor = (struct AGPDeformableActor*)InDeformableActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::ProcessLocalPlayerOutSmokeWall(struct AActor* LocalActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "ProcessLocalPlayerOutSmokeWall");
    struct
    {
        struct AActor* LocalActor;
    } Parms{};
    Parms.LocalActor = (struct AActor*)LocalActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::ProcessLocalPlayerInSmokeWall(struct AActor* LocalActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "ProcessLocalPlayerInSmokeWall");
    struct
    {
        struct AActor* LocalActor;
    } Parms{};
    Parms.LocalActor = (struct AActor*)LocalActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::OnVolumeSmokeLevelTimerCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "OnVolumeSmokeLevelTimerCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::OnLocalControlledEndReleaseUAS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "OnLocalControlledEndReleaseUAS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::OnLocalControlledBeginReleaseUAS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "OnLocalControlledBeginReleaseUAS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPDeformableGameStateComponent::LineTestDeformableActor(const struct FVector& LineStart, const struct FVector& LineEnd, float& hitTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "LineTestDeformableActor");
    struct
    {
        struct FVector LineStart;
        struct FVector LineEnd;
        float hitTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LineStart = (struct FVector)LineStart;
    Parms.LineEnd = (struct FVector)LineEnd;
    this->ProcessEvent(Func, &Parms);
    hitTime = Parms.hitTime;
    return Parms.ReturnValue;
}

uint8_t UGPDeformableGameStateComponent::IsInsideDeformableActor(const struct FVector& InPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "IsInsideDeformableActor");
    struct
    {
        struct FVector InPos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPos = (struct FVector)InPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPDeformableGameStateComponent::InitVolumetricFogGridSizeZ()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "InitVolumetricFogGridSizeZ");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::InitHeightFogComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "InitHeightFogComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPDeformableGameStateComponent::HasVolumetricDeformableActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "HasVolumetricDeformableActor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPDeformableGameStateComponent::GetVolumeSmokeLevelIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "GetVolumeSmokeLevelIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UGPDeformableGameStateComponent::GetInSmokeActorOwner(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "GetInSmokeActorOwner");
    struct
    {
        struct AActor* InActor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPDeformableGameStateComponent::GetDeformableActorNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "GetDeformableActorNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPDeformableGameStateComponent::GetCurrentQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "GetCurrentQuality");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPDeformableGameStateComponent::Explode(struct FVector centor, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "Explode");
    struct
    {
        struct FVector centor;
        float radius;
    } Parms{};
    Parms.centor = (struct FVector)centor;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::ClearAllCharacterBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "ClearAllCharacterBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableGameStateComponent::ClearActorInside()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableGameStateComponent", "ClearActorInside");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPDeformableMeshEmitComponent::* ----
void UGPDeformableMeshEmitComponent::TickSmokeState(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "TickSmokeState");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableMeshEmitComponent::TickSmokeFadeOut(int32_t EmiterIndex, float DeltaTime, int32_t SubIndex, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "TickSmokeFadeOut");
    struct
    {
        int32_t EmiterIndex;
        float DeltaTime;
        int32_t SubIndex;
        int32_t Index;
    } Parms{};
    Parms.EmiterIndex = (int32_t)EmiterIndex;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableMeshEmitComponent::TickSmokeFadeIn(int32_t EmiterIndex, float DeltaTime, int32_t SubIndex, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "TickSmokeFadeIn");
    struct
    {
        int32_t EmiterIndex;
        float DeltaTime;
        int32_t SubIndex;
        int32_t Index;
    } Parms{};
    Parms.EmiterIndex = (int32_t)EmiterIndex;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableMeshEmitComponent::TickRecoverHole(float CurrentRadius, int32_t EmiterIndex, int32_t SubEmiterIndex, uint8_t bUseSub, int32_t HoleIndex, float TickInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "TickRecoverHole");
    struct
    {
        float CurrentRadius;
        int32_t EmiterIndex;
        int32_t SubEmiterIndex;
        uint8_t bUseSub;
        int32_t HoleIndex;
        float TickInterval;
    } Parms{};
    Parms.CurrentRadius = (float)CurrentRadius;
    Parms.EmiterIndex = (int32_t)EmiterIndex;
    Parms.SubEmiterIndex = (int32_t)SubEmiterIndex;
    Parms.bUseSub = (uint8_t)bUseSub;
    Parms.HoleIndex = (int32_t)HoleIndex;
    Parms.TickInterval = (float)TickInterval;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableMeshEmitComponent::TickBurstHole(struct FVector BurstLoc, float CurrentRadius, int32_t EmiterIndex, int32_t SubEmiterIndex, uint8_t bUseSub, int32_t HoleIndex, float TickInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "TickBurstHole");
    struct
    {
        struct FVector BurstLoc;
        float CurrentRadius;
        int32_t EmiterIndex;
        int32_t SubEmiterIndex;
        uint8_t bUseSub;
        int32_t HoleIndex;
        float TickInterval;
    } Parms{};
    Parms.BurstLoc = (struct FVector)BurstLoc;
    Parms.CurrentRadius = (float)CurrentRadius;
    Parms.EmiterIndex = (int32_t)EmiterIndex;
    Parms.SubEmiterIndex = (int32_t)SubEmiterIndex;
    Parms.bUseSub = (uint8_t)bUseSub;
    Parms.HoleIndex = (int32_t)HoleIndex;
    Parms.TickInterval = (float)TickInterval;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableMeshEmitComponent::ClearEmiter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "ClearEmiter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPDeformableMeshEmitComponent::CheckIsDisappearState(ESmokeState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "CheckIsDisappearState");
    struct
    {
        enum ESmokeState NewState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewState = (enum ESmokeState)NewState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPDeformableMeshEmitComponent::CheckIsConstantState(ESmokeState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableMeshEmitComponent", "CheckIsConstantState");
    struct
    {
        enum ESmokeState NewState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewState = (enum ESmokeState)NewState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AGPDeformableSmokeEmitActor::* ----
void AGPDeformableSmokeEmitActor::UpdateSmokeBlockCollisionLoc(int32_t Index, struct FVector NewLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "UpdateSmokeBlockCollisionLoc");
    struct
    {
        int32_t Index;
        struct FVector NewLocation;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.NewLocation = (struct FVector)NewLocation;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickSmokePointState_FX(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickSmokePointState_FX");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickSmokePointState(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickSmokePointState");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickSmokeGenerate_FX(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickSmokeGenerate_FX");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickSmokeGenerate(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickSmokeGenerate");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickSmokeDisappear_FX(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickSmokeDisappear_FX");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickSmokeDisappear(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickSmokeDisappear");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickLifeTime(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickLifeTime");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::TickInstanceReorder(struct FVector CharacterLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "TickInstanceReorder");
    struct
    {
        struct FVector CharacterLoc;
    } Parms{};
    Parms.CharacterLoc = (struct FVector)CharacterLoc;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::SetSmokeID(int32_t NewSmokeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "SetSmokeID");
    struct
    {
        int32_t NewSmokeID;
    } Parms{};
    Parms.NewSmokeID = (int32_t)NewSmokeID;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::SetSmokeGenerate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "SetSmokeGenerate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::SetPlayerUIN(uint64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "SetPlayerUIN");
    struct
    {
        uint64_t Uin;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::SetOwnerActor(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "SetOwnerActor");
    struct
    {
        struct AActor* InActor;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::OnRep_SmokeId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "OnRep_SmokeId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::MuticastInitSmokeData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "MuticastInitSmokeData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPDeformableSmokeEmitActor::IsVeryLowQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "IsVeryLowQuality");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableSmokeEmitActor::IsSmokeWallLowQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "IsSmokeWallLowQuality");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableSmokeEmitActor::IsServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "IsServer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPDeformableSmokeEmitActor::IsLowQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "IsLowQuality");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPDeformableSmokeEmitActor::InitSmokeData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "InitSmokeData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::InitFXComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "InitFXComp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPDeformableSmokeEmitActor::InitEmitter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "InitEmitter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float AGPDeformableSmokeEmitActor::GetTickTime(struct FGPDeformableSmokePathPoint& pathPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "GetTickTime");
    struct
    {
        struct FGPDeformableSmokePathPoint pathPoint;
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    pathPoint = Parms.pathPoint;
    return Parms.ReturnValue;
}

struct FBox AGPDeformableSmokeEmitActor::GetSmokeTotalBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "GetSmokeTotalBox");
    struct
    {
        struct FBox ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FBox> AGPDeformableSmokeEmitActor::GetPointSmokeBoxes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "GetPointSmokeBoxes");
    struct
    {
        struct TArray<struct FBox> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPDeformableSmokeEmitActor::GetCurrentTODWeatherID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "GetCurrentTODWeatherID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPDeformableSmokeEmitActor::GetCurrentQualitySettingIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "GetCurrentQualitySettingIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPDeformableSmokeEmitActor::GetCurrentDeviceLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "GetCurrentDeviceLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AGPDeformableSmokeEmitActor::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "GetCharacterOwner");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPDeformableSmokeEmitActor::ClearPointData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "ClearPointData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPDeformableSmokeEmitActor::CheckPathPointValid(struct FGPDeformableSmokePathPoint& pathPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "CheckPathPointValid");
    struct
    {
        struct FGPDeformableSmokePathPoint pathPoint;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    pathPoint = Parms.pathPoint;
    return Parms.ReturnValue;
}

void AGPDeformableSmokeEmitActor::AddSmokeBlockCollision(int32_t Index, float radius, float Height, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableSmokeEmitActor", "AddSmokeBlockCollision");
    struct
    {
        int32_t Index;
        float radius;
        float Height;
        struct FVector Location;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.radius = (float)radius;
    Parms.Height = (float)Height;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPDeformableVolumeRayMarchingComponent::* ----
void UGPDeformableVolumeRayMarchingComponent::TickExpandVertices()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeRayMarchingComponent", "TickExpandVertices");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeRayMarchingComponent::InitBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeRayMarchingComponent", "InitBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeRayMarchingComponent::GenerateRayMarching()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeRayMarchingComponent", "GenerateRayMarching");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeRayMarchingComponent::FillTriangles(int32_t InGridIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeRayMarchingComponent", "FillTriangles");
    struct
    {
        int32_t InGridIndex;
    } Parms{};
    Parms.InGridIndex = (int32_t)InGridIndex;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeRayMarchingComponent::CreateProceduralMesh(struct FVector Min, struct FVector Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeRayMarchingComponent", "CreateProceduralMesh");
    struct
    {
        struct FVector Min;
        struct FVector Max;
    } Parms{};
    Parms.Min = (struct FVector)Min;
    Parms.Max = (struct FVector)Max;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPDeformableVolumeSmokeComponent::* ----
void UGPDeformableVolumeSmokeComponent::TickFadeOut(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeSmokeComponent", "TickFadeOut");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeSmokeComponent::OnFadeOutTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeSmokeComponent", "OnFadeOutTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeSmokeComponent::InitTODMatParameter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeSmokeComponent", "InitTODMatParameter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeSmokeComponent::ClearFadeOutTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeSmokeComponent", "ClearFadeOutTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPDeformableVolumeSmokeComponent::ApplyTODMatParameter(struct UMaterialInstanceDynamic* Mid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPDeformableVolumeSmokeComponent", "ApplyTODMatParameter");
    struct
    {
        struct UMaterialInstanceDynamic* Mid;
    } Parms{};
    Parms.Mid = (struct UMaterialInstanceDynamic*)Mid;
    this->ProcessEvent(Func, &Parms);
}

// ---- AGPUASActor::* ----
void AGPUASActor::SyncMovePointToServer(int32_t Index, struct FVector InMovePoint, struct FVector InDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "SyncMovePointToServer");
    struct
    {
        int32_t Index;
        struct FVector InMovePoint;
        struct FVector InDirection;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.InMovePoint = (struct FVector)InMovePoint;
    Parms.InDirection = (struct FVector)InDirection;
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::SyncMoveListToServer(struct TArray<struct FVector> InMoveList, struct TArray<struct FVector> InDirectionList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "SyncMoveListToServer");
    struct
    {
        struct TArray<struct FVector> InMoveList;
        struct TArray<struct FVector> InDirectionList;
    } Parms{};
    Parms.InMoveList = (struct TArray<struct FVector>)InMoveList;
    Parms.InDirectionList = (struct TArray<struct FVector>)InDirectionList;
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::SetDeformableSkillID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "SetDeformableSkillID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::ServerMove(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "ServerMove");
    struct
    {
        float Timestamp;
        struct FVector_NetQuantize10 Location;
        struct FVector_NetQuantize100 Rotator;
        struct FVector_NetQuantize100 Velocity;
    } Parms{};
    Parms.Timestamp = (float)Timestamp;
    Parms.Location = (struct FVector_NetQuantize10)Location;
    Parms.Rotator = (struct FVector_NetQuantize100)Rotator;
    Parms.Velocity = (struct FVector_NetQuantize100)Velocity;
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::OnRep_TargetDeformable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "OnRep_TargetDeformable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::OnBeginMoveStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "OnBeginMoveStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::OnBeginDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "OnBeginDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::MulticastServerMovement(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "MulticastServerMovement");
    struct
    {
        float Timestamp;
        struct FVector_NetQuantize10 Location;
        struct FVector_NetQuantize100 Rotator;
        struct FVector_NetQuantize100 Velocity;
    } Parms{};
    Parms.Timestamp = (float)Timestamp;
    Parms.Location = (struct FVector_NetQuantize10)Location;
    Parms.Rotator = (struct FVector_NetQuantize100)Rotator;
    Parms.Velocity = (struct FVector_NetQuantize100)Velocity;
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::MulticastMovePoint(int32_t Index, struct FVector InMovePoint, struct FVector InDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "MulticastMovePoint");
    struct
    {
        int32_t Index;
        struct FVector InMovePoint;
        struct FVector InDirection;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.InMovePoint = (struct FVector)InMovePoint;
    Parms.InDirection = (struct FVector)InDirection;
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::MulticastBeginMoveStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "MulticastBeginMoveStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPUASActor::MulticastBeginDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "MulticastBeginDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPUASActor::IsMoveStoped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "IsMoveStoped");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPUASMovementComponent* AGPUASActor::GetUASMovementClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "GetUASMovementClass");
    struct
    {
        struct UGPUASMovementComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPUASActor::GetGamePlayMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "GetGamePlayMode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AGPUASActor::GetGameMapID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "GetGameMapID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPDeformableActor* AGPUASActor::GetDeformableActorClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActor", "GetDeformableActorClass");
    struct
    {
        struct AGPDeformableActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IGPUASActorInterface::* ----
uint8_t IGPUASActorInterface::IsLocalControlled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActorInterface", "IsLocalControlled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPUASActorInterface::IsAIControlled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActorInterface", "IsAIControlled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPUASActorInterface::DoServerMove(float Timestamp, struct FVector Location, struct FVector Rotator, struct FVector Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActorInterface", "DoServerMove");
    struct
    {
        float Timestamp;
        struct FVector Location;
        struct FVector Rotator;
        struct FVector Velocity;
    } Parms{};
    Parms.Timestamp = (float)Timestamp;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FVector)Rotator;
    Parms.Velocity = (struct FVector)Velocity;
    this->ProcessEvent(Func, &Parms);
}

void IGPUASActorInterface::DoMulticastServerMovement(float Timestamp, struct FVector Location, struct FVector Rotator, struct FVector Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASActorInterface", "DoMulticastServerMovement");
    struct
    {
        float Timestamp;
        struct FVector Location;
        struct FVector Rotator;
        struct FVector Velocity;
    } Parms{};
    Parms.Timestamp = (float)Timestamp;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FVector)Rotator;
    Parms.Velocity = (struct FVector)Velocity;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPUASMovementComponent::* ----
void UGPUASMovementComponent::TickSimulateMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "TickSimulateMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::TickServerMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "TickServerMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::TickPerceiveBlock(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "TickPerceiveBlock");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::TickMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "TickMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::TickAuthorityMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "TickAuthorityMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::TickAIAuthorithMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "TickAIAuthorithMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUASMovementComponent::IsStrucked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "IsStrucked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUASMovementComponent::CheckDecrease(float InMoveTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "CheckDecrease");
    struct
    {
        float InMoveTime;
    } Parms{};
    Parms.InMoveTime = (float)InMoveTime;
    this->ProcessEvent(Func, &Parms);
}

float UGPUASMovementComponent::CalculatePitch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "CalculatePitch");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPUASMovementComponent::CalculateCurrentSpeed(float InMoveTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "CalculateCurrentSpeed");
    struct
    {
        float InMoveTime;
        float ReturnValue;
    } Parms{};
    Parms.InMoveTime = (float)InMoveTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUASMovementComponent::CalcRollStep(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "CalcRollStep");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::BeginMove(struct FVector InVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "BeginMove");
    struct
    {
        struct FVector InVelocity;
    } Parms{};
    Parms.InVelocity = (struct FVector)InVelocity;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::ApplyServerMulticast(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "ApplyServerMulticast");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::ApplyServerMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "ApplyServerMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPUASMovementComponent::ApplyCollisionMoveStep(struct FVector& MoveDelta, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUASMovementComponent", "ApplyCollisionMoveStep");
    struct
    {
        struct FVector MoveDelta;
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    MoveDelta = Parms.MoveDelta;
}

} // namespace SDK
