#include "AIActionPointGeneratorRuntime.hpp"
#include "Engine.hpp"
#include "NavigationSystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ABPTacticPointEditorActor
bool ABPTacticPointEditorActor::CheckActivationCPlus(struct AActor* ThreatTarget, struct FVector ThreatTargetLoc, bool bOccupied, struct FRotator& AimRot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BPTacticPointEditorActor", "CheckActivationCPlus");
    struct
    {
        struct AActor* ThreatTarget;
        struct FVector ThreatTargetLoc;
        bool bOccupied;
        struct FRotator AimRot;
        bool ReturnValue;
    } Parms{};
    Parms.ThreatTarget = (struct AActor*)ThreatTarget;
    Parms.ThreatTargetLoc = (struct FVector)ThreatTargetLoc;
    Parms.bOccupied = (bool)bOccupied;
    this->ProcessEvent(Func, &Parms);
    AimRot = Parms.AimRot;
    return Parms.ReturnValue;
}

// AChangeNotifyingRecastNavMesh
void AChangeNotifyingRecastNavMesh::ProcessQueuedTiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChangeNotifyingRecastNavMesh", "ProcessQueuedTiles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChangeNotifyingRecastNavMesh::OnNavmeshGenerationFinishedHandler(struct ANavigationData* NavData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChangeNotifyingRecastNavMesh", "OnNavmeshGenerationFinishedHandler");
    struct
    {
        struct ANavigationData* NavData;
    } Parms{};
    Parms.NavData = (struct ANavigationData*)NavData;
    this->ProcessEvent(Func, &Parms);
}

// UCoverSystem
void UCoverSystem::RemoveStaleCoverPoints(struct FVector Origin, struct FVector Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystem", "RemoveStaleCoverPoints");
    struct
    {
        struct FVector Origin;
        struct FVector Extent;
    } Parms{};
    Parms.Origin = (struct FVector)Origin;
    Parms.Extent = (struct FVector)Extent;
    this->ProcessEvent(Func, &Parms);
}

void UCoverSystem::RemoveCoverPointsOfObject(struct AActor* CoverObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystem", "RemoveCoverPointsOfObject");
    struct
    {
        struct AActor* CoverObject;
    } Parms{};
    Parms.CoverObject = (struct AActor*)CoverObject;
    this->ProcessEvent(Func, &Parms);
}

void UCoverSystem::RemoveAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystem", "RemoveAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCoverSystem::OnNavMeshTilesUpdated(const struct TSet<uint32_t>& UpdatedTiles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystem", "OnNavMeshTilesUpdated");
    struct
    {
        struct TSet<uint32_t> UpdatedTiles;
    } Parms{};
    Parms.UpdatedTiles = (struct TSet<uint32_t>)UpdatedTiles;
    this->ProcessEvent(Func, &Parms);
}

void UCoverSystem::OnBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystem", "OnBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCoverSystem::NotifyCoverActorDied(struct AActor* InCheckActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystem", "NotifyCoverActorDied");
    struct
    {
        struct AActor* InCheckActor;
    } Parms{};
    Parms.InCheckActor = (struct AActor*)InCheckActor;
    this->ProcessEvent(Func, &Parms);
}

bool UCoverSystem::GetCoverPointData(int32_t PointID, struct FCoverPointOctreeData& Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystem", "GetCoverPointData");
    struct
    {
        int32_t PointID;
        struct FCoverPointOctreeData Data;
        bool ReturnValue;
    } Parms{};
    Parms.PointID = (int32_t)PointID;
    this->ProcessEvent(Func, &Parms);
    Data = Parms.Data;
    return Parms.ReturnValue;
}

// ACoverSystemActor
bool ACoverSystemActor::InitOctreeTree(bool bForceRebuild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverSystemActor", "InitOctreeTree");
    struct
    {
        bool bForceRebuild;
        bool ReturnValue;
    } Parms{};
    Parms.bForceRebuild = (bool)bForceRebuild;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AGuardPointVolume
void AGuardPointVolume::SaveToTaticSystemActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GuardPointVolume", "SaveToTaticSystemActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGuardPointVolume::GenTacticalPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GuardPointVolume", "GenTacticalPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AKeyRouteVolume
bool AKeyRouteVolume::IsInVolume(const struct FVector& Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KeyRouteVolume", "IsInVolume");
    struct
    {
        struct FVector Point;
        bool ReturnValue;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USeekPointStatics
bool USeekPointStatics::GetKeyRoutePointIndexsOfDepth(int32_t FromIndex, struct TArray<struct FKeyRoutePointData>& KeyRoutePoints, int32_t Depth, struct TArray<int32_t>& OutPointIndexs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SeekPointStatics", "GetKeyRoutePointIndexsOfDepth");
    struct
    {
        int32_t FromIndex;
        struct TArray<struct FKeyRoutePointData> KeyRoutePoints;
        int32_t Depth;
        struct TArray<int32_t> OutPointIndexs;
        bool ReturnValue;
    } Parms{};
    Parms.FromIndex = (int32_t)FromIndex;
    Parms.Depth = (int32_t)Depth;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    KeyRoutePoints = Parms.KeyRoutePoints;
    OutPointIndexs = Parms.OutPointIndexs;
    return Parms.ReturnValue;
}

bool USeekPointStatics::FindKeyRoutePath(struct ATacticSystemActor* TacticSystem, int32_t FromIndex, int32_t ToIndex, struct TArray<struct FKeyRoutePointData>& KeyRoutePoints, struct TArray<int32_t>& OutPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SeekPointStatics", "FindKeyRoutePath");
    struct
    {
        struct ATacticSystemActor* TacticSystem;
        int32_t FromIndex;
        int32_t ToIndex;
        struct TArray<struct FKeyRoutePointData> KeyRoutePoints;
        struct TArray<int32_t> OutPath;
        bool ReturnValue;
    } Parms{};
    Parms.TacticSystem = (struct ATacticSystemActor*)TacticSystem;
    Parms.FromIndex = (int32_t)FromIndex;
    Parms.ToIndex = (int32_t)ToIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    KeyRoutePoints = Parms.KeyRoutePoints;
    OutPath = Parms.OutPath;
    return Parms.ReturnValue;
}

float USeekPointStatics::CalculateNavPathLength(struct UObject* InWorldContext, const struct FVector& InFromPoint, const struct FVector& InToPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SeekPointStatics", "CalculateNavPathLength");
    struct
    {
        struct UObject* InWorldContext;
        struct FVector InFromPoint;
        struct FVector InToPoint;
        float ReturnValue;
    } Parms{};
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    Parms.InFromPoint = (struct FVector)InFromPoint;
    Parms.InToPoint = (struct FVector)InToPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
