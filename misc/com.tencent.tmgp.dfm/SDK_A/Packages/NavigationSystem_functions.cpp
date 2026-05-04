#include "NavigationSystem.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UNavigationPath::* ----
uint8_t UNavigationPath::IsValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "IsValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNavigationPath::IsStringPulled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "IsStringPulled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNavigationPath::IsPartial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "IsPartial");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNavigationPath::GetPathLength()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "GetPathLength");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNavigationPath::GetPathCost()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "GetPathCost");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UNavigationPath::GetDebugString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "GetDebugString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNavigationPath::EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "EnableRecalculationOnInvalidation");
    struct
    {
        enum ENavigationOptionFlag DoRecalculation;
    } Parms{};
    Parms.DoRecalculation = (enum ENavigationOptionFlag)DoRecalculation;
    this->ProcessEvent(Func, &Parms);
}

void UNavigationPath::EnableDebugDrawing(uint8_t bShouldDrawDebugData, struct FLinearColor PathColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationPath", "EnableDebugDrawing");
    struct
    {
        uint8_t bShouldDrawDebugData;
        struct FLinearColor PathColor;
    } Parms{};
    Parms.bShouldDrawDebugData = (uint8_t)bShouldDrawDebugData;
    Parms.PathColor = (struct FLinearColor)PathColor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UNavigationSystemV1::* ----
void UNavigationSystemV1::UnregisterNavigationInvoker(struct AActor* Invoker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationSystemV1", "UnregisterNavigationInvoker");
    struct
    {
        struct AActor* Invoker;
    } Parms{};
    Parms.Invoker = (struct AActor*)Invoker;
    this->ProcessEvent(Func, &Parms);
}

void UNavigationSystemV1::SimpleMoveToLocation(struct AController* Controller, const struct FVector& Goal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "SimpleMoveToLocation");
    struct
    {
        struct AController* Controller;
        struct FVector Goal;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    Parms.Goal = (struct FVector)Goal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNavigationSystemV1::SimpleMoveToActor(struct AController* Controller, struct AActor* Goal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "SimpleMoveToActor");
    struct
    {
        struct AController* Controller;
        struct AActor* Goal;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    Parms.Goal = (struct AActor*)Goal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationSystemV1", "SetMaxSimultaneousTileGenerationJobsCount");
    struct
    {
        int32_t MaxNumberOfJobs;
    } Parms{};
    Parms.MaxNumberOfJobs = (int32_t)MaxNumberOfJobs;
    this->ProcessEvent(Func, &Parms);
}

void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationSystemV1", "SetGeometryGatheringMode");
    struct
    {
        enum ENavDataGatheringModeConfig NewMode;
    } Parms{};
    Parms.NewMode = (enum ENavDataGatheringModeConfig)NewMode;
    this->ProcessEvent(Func, &Parms);
}

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationSystemV1", "ResetMaxSimultaneousTileGenerationJobsCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNavigationSystemV1::RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationSystemV1", "RegisterNavigationInvoker");
    struct
    {
        struct AActor* Invoker;
        float TileGenerationRadius;
        float TileRemovalRadius;
    } Parms{};
    Parms.Invoker = (struct AActor*)Invoker;
    Parms.TileGenerationRadius = (float)TileGenerationRadius;
    Parms.TileRemovalRadius = (float)TileRemovalRadius;
    this->ProcessEvent(Func, &Parms);
}

struct FVector UNavigationSystemV1::ProjectPointToNavigation(struct UObject* WorldContextObject, const struct FVector& Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "ProjectPointToNavigation");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Point;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        struct FVector QueryExtent;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Point = (struct FVector)Point;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    Parms.QueryExtent = (struct FVector)QueryExtent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNavigationSystemV1::OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationSystemV1", "OnNavigationBoundsUpdated");
    struct
    {
        struct ANavMeshBoundsVolume* NavVolume;
    } Parms{};
    Parms.NavVolume = (struct ANavMeshBoundsVolume*)NavVolume;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UNavigationSystemV1::NavigationRaycast(struct UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "NavigationRaycast");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector RayStart;
        struct FVector RayEnd;
        struct FVector HitLocation;
        struct UNavigationQueryFilter* FilterClass;
        struct AController* Querier;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.RayStart = (struct FVector)RayStart;
    Parms.RayEnd = (struct FVector)RayEnd;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    Parms.Querier = (struct AController*)Querier;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    HitLocation = Parms.HitLocation;
    return Parms.ReturnValue;
}

uint8_t UNavigationSystemV1::K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavigationSystemV1", "K2_ReplaceAreaInOctreeData");
    struct
    {
        struct UObject* Object;
        struct UNavArea* OldArea;
        struct UNavArea* NewArea;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.OldArea = (struct UNavArea*)OldArea;
    Parms.NewArea = (struct UNavArea*)NewArea;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNavigationSystemV1::K2_ProjectPointToNavigation(struct UObject* WorldContextObject, const struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_ProjectPointToNavigation");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Point;
        struct FVector ProjectedLocation;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        struct FVector QueryExtent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Point = (struct FVector)Point;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    Parms.QueryExtent = (struct FVector)QueryExtent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ProjectedLocation = Parms.ProjectedLocation;
    return Parms.ReturnValue;
}

uint8_t UNavigationSystemV1::K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, const struct FVector& Origin, struct FVector& RandomLocation, float radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_GetRandomReachablePointInRadius");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Origin;
        struct FVector RandomLocation;
        float radius;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    RandomLocation = Parms.RandomLocation;
    return Parms.ReturnValue;
}

uint8_t UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, const struct FVector& Origin, struct FVector& RandomLocation, float radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_GetRandomPointInNavigableRadius");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Origin;
        struct FVector RandomLocation;
        float radius;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    RandomLocation = Parms.RandomLocation;
    return Parms.ReturnValue;
}

uint8_t UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, const struct FVector& Origin, struct FVector& RandomLocation, float radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_GetRandomLocationInNavigableRadius");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Origin;
        struct FVector RandomLocation;
        float radius;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    RandomLocation = Parms.RandomLocation;
    return Parms.ReturnValue;
}

uint8_t UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "IsNavigationBeingBuiltOrLocked");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNavigationSystemV1::IsNavigationBeingBuilt(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "IsNavigationBeingBuilt");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNavigationSystemV1::GetRandomReachablePointInRadius(struct UObject* WorldContextObject, const struct FVector& Origin, float radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "GetRandomReachablePointInRadius");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Origin;
        float radius;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, const struct FVector& Origin, float radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "GetRandomPointInNavigableRadius");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Origin;
        float radius;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENavigationQueryResult UNavigationSystemV1::GetPathLength(struct UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "GetPathLength");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector PathStart;
        struct FVector PathEnd;
        float PathLength;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        enum ENavigationQueryResult ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PathStart = (struct FVector)PathStart;
    Parms.PathEnd = (struct FVector)PathEnd;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PathLength = Parms.PathLength;
    return Parms.ReturnValue;
}

ENavigationQueryResult UNavigationSystemV1::GetPathCost(struct UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "GetPathCost");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector PathStart;
        struct FVector PathEnd;
        float PathCost;
        struct ANavigationData* NavData;
        struct UNavigationQueryFilter* FilterClass;
        enum ENavigationQueryResult ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PathStart = (struct FVector)PathStart;
    Parms.PathEnd = (struct FVector)PathEnd;
    Parms.NavData = (struct ANavigationData*)NavData;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PathCost = Parms.PathCost;
    return Parms.ReturnValue;
}

struct UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "GetNavigationSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UNavigationSystemV1* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(struct UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "FindPathToLocationSynchronously");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector PathStart;
        struct FVector PathEnd;
        struct AActor* PathfindingContext;
        struct UNavigationQueryFilter* FilterClass;
        struct UNavigationPath* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PathStart = (struct FVector)PathStart;
    Parms.PathEnd = (struct FVector)PathEnd;
    Parms.PathfindingContext = (struct AActor*)PathfindingContext;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(struct UObject* WorldContextObject, const struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavigationSystemV1", "FindPathToActorSynchronously");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector PathStart;
        struct AActor* GoalActor;
        float TetherDistance;
        struct AActor* PathfindingContext;
        struct UNavigationQueryFilter* FilterClass;
        struct UNavigationPath* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PathStart = (struct FVector)PathStart;
    Parms.GoalActor = (struct AActor*)GoalActor;
    Parms.TetherDistance = (float)TetherDistance;
    Parms.PathfindingContext = (struct AActor*)PathfindingContext;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UNavRelevantComponent::* ----
void UNavRelevantComponent::SetNavigationRelevancy(uint8_t bRelevant)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavRelevantComponent", "SetNavigationRelevancy");
    struct
    {
        uint8_t bRelevant;
    } Parms{};
    Parms.bRelevant = (uint8_t)bRelevant;
    this->ProcessEvent(Func, &Parms);
}

// ---- UNavModifierComponent::* ----
void UNavModifierComponent::SetAreaClass(struct UNavArea* NewAreaClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavModifierComponent", "SetAreaClass");
    struct
    {
        struct UNavArea* NewAreaClass;
    } Parms{};
    Parms.NewAreaClass = (struct UNavArea*)NewAreaClass;
    this->ProcessEvent(Func, &Parms);
}

// ---- ANavModifierVolume::* ----
void ANavModifierVolume::SetAreaClass(struct UNavArea* NewAreaClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavModifierVolume", "SetAreaClass");
    struct
    {
        struct UNavArea* NewAreaClass;
    } Parms{};
    Parms.NewAreaClass = (struct UNavArea*)NewAreaClass;
    this->ProcessEvent(Func, &Parms);
}

// ---- ARecastNavMesh::* ----
uint8_t ARecastNavMesh::K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, uint8_t ReplaceLinks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RecastNavMesh", "K2_ReplaceAreaInTileBounds");
    struct
    {
        struct FBox Bounds;
        struct UNavArea* OldArea;
        struct UNavArea* NewArea;
        uint8_t ReplaceLinks;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Bounds = (struct FBox)Bounds;
    Parms.OldArea = (struct UNavArea*)OldArea;
    Parms.NewArea = (struct UNavArea*)NewArea;
    Parms.ReplaceLinks = (uint8_t)ReplaceLinks;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
