#include "GPPhysics.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGPPhysics::* ----
uint8_t UGPPhysics::WeaponTraceSingle(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct FHitResult& OutHitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "WeaponTraceSingle");
    struct
    {
        struct UWorld* World;
        struct TArray<struct AActor*> IgnoreActors;
        struct FVector Start;
        struct FVector End;
        uint8_t IgnoreHidden;
        struct FHitResult OutHitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IgnoreActors = (struct TArray<struct AActor*>)IgnoreActors;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.IgnoreHidden = (uint8_t)IgnoreHidden;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitResult = Parms.OutHitResult;
    return Parms.ReturnValue;
}

int32_t UGPPhysics::WeaponTraceMultiExtend(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct TArray<struct AActor*>& PenetrationTypes, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct TArray<struct FHitResult>& OutHitsResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "WeaponTraceMultiExtend");
    struct
    {
        struct UWorld* World;
        struct TArray<struct AActor*> IgnoreActors;
        struct TArray<struct AActor*> PenetrationTypes;
        struct FVector Start;
        struct FVector End;
        uint8_t IgnoreHidden;
        struct TArray<struct FHitResult> OutHitsResult;
        int32_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IgnoreActors = (struct TArray<struct AActor*>)IgnoreActors;
    Parms.PenetrationTypes = (struct TArray<struct AActor*>)PenetrationTypes;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.IgnoreHidden = (uint8_t)IgnoreHidden;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitsResult = Parms.OutHitsResult;
    return Parms.ReturnValue;
}

int32_t UGPPhysics::WeaponTraceMulti(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct TArray<struct AActor*>& PenetrationTypes, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct TArray<struct FHitResult>& OutHitsResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "WeaponTraceMulti");
    struct
    {
        struct UWorld* World;
        struct TArray<struct AActor*> IgnoreActors;
        struct TArray<struct AActor*> PenetrationTypes;
        struct FVector Start;
        struct FVector End;
        uint8_t IgnoreHidden;
        struct TArray<struct FHitResult> OutHitsResult;
        int32_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IgnoreActors = (struct TArray<struct AActor*>)IgnoreActors;
    Parms.PenetrationTypes = (struct TArray<struct AActor*>)PenetrationTypes;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.IgnoreHidden = (uint8_t)IgnoreHidden;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitsResult = Parms.OutHitsResult;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::ViewTraceSingle(struct UWorld* World, const struct TArray<struct AActor*>& IgnoreActors, const struct FVector& Start, const struct FVector& End, uint8_t IgnoreHidden, struct FHitResult& OutHitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "ViewTraceSingle");
    struct
    {
        struct UWorld* World;
        struct TArray<struct AActor*> IgnoreActors;
        struct FVector Start;
        struct FVector End;
        uint8_t IgnoreHidden;
        struct FHitResult OutHitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IgnoreActors = (struct TArray<struct AActor*>)IgnoreActors;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.IgnoreHidden = (uint8_t)IgnoreHidden;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitResult = Parms.OutHitResult;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::SphereTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "SphereTraceSingleForObjects");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        float radius;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::SphereTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "SphereTraceSingle");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        float radius;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::SphereTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "SphereTraceMultiForObjects");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        float radius;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::SphereTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "SphereTraceMulti");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        float radius;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::SphereLineIntersectExtend(const struct FVector& Origin, float radius, const struct FVector& Start, const struct FVector& Dir, float Length, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "SphereLineIntersectExtend");
    struct
    {
        struct FVector Origin;
        float radius;
        struct FVector Start;
        struct FVector Dir;
        float Length;
        struct FVector OutHitLoc;
        struct FVector OutHitNormal;
        float OutHitTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    Parms.Start = (struct FVector)Start;
    Parms.Dir = (struct FVector)Dir;
    Parms.Length = (float)Length;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitLoc = Parms.OutHitLoc;
    OutHitNormal = Parms.OutHitNormal;
    OutHitTime = Parms.OutHitTime;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::SphereLineIntersect(const struct FVector& Origin, float radius, const struct FVector& Start, const struct FVector& End, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "SphereLineIntersect");
    struct
    {
        struct FVector Origin;
        float radius;
        struct FVector Start;
        struct FVector End;
        struct FVector OutHitLoc;
        struct FVector OutHitNormal;
        float OutHitTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Origin = (struct FVector)Origin;
    Parms.radius = (float)radius;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitLoc = Parms.OutHitLoc;
    OutHitNormal = Parms.OutHitNormal;
    OutHitTime = Parms.OutHitTime;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::MeshTraceSingle(struct USkeletalMeshComponent* SkelComp, const struct FVector& Start, const struct FVector& End, struct FHitResult& OutHitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "MeshTraceSingle");
    struct
    {
        struct USkeletalMeshComponent* SkelComp;
        struct FVector Start;
        struct FVector End;
        struct FHitResult OutHitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SkelComp = (struct USkeletalMeshComponent*)SkelComp;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitResult = Parms.OutHitResult;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::LineTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "LineTraceSingleForObjects");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::LineTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "LineTraceSingle");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::LineTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "LineTraceMultiForObjects");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::LineTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "LineTraceMulti");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::GetSimpleCheckPassedCharMeshs(struct TArray<struct USkeletalMeshComponent*>& SimpleCheckPassedCharMeshs, struct UWorld* World, struct TArray<struct AActor*> IgnoreActors, const struct FVector& Start, const struct FVector& WorldEnd, uint8_t IgnoreHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "GetSimpleCheckPassedCharMeshs");
    struct
    {
        struct TArray<struct USkeletalMeshComponent*> SimpleCheckPassedCharMeshs;
        struct UWorld* World;
        struct TArray<struct AActor*> IgnoreActors;
        struct FVector Start;
        struct FVector WorldEnd;
        uint8_t IgnoreHidden;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IgnoreActors = (struct TArray<struct AActor*>)IgnoreActors;
    Parms.Start = (struct FVector)Start;
    Parms.WorldEnd = (struct FVector)WorldEnd;
    Parms.IgnoreHidden = (uint8_t)IgnoreHidden;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SimpleCheckPassedCharMeshs = Parms.SimpleCheckPassedCharMeshs;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::GetMultiLineTraceSingleByChannel(struct UWorld* World, struct FHitResult& AddHitResult, struct FHitResult& HitResult, struct TArray<struct FHitResult>& OutHits, const struct TArray<struct AActor*>& IgnoreActors, const struct TArray<struct AActor*>& PenetrationTypes, struct FVector& WorldEnd, const struct FVector& Start, const struct FVector& End, float& OuterTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "GetMultiLineTraceSingleByChannel");
    struct
    {
        struct UWorld* World;
        struct FHitResult AddHitResult;
        struct FHitResult HitResult;
        struct TArray<struct FHitResult> OutHits;
        struct TArray<struct AActor*> IgnoreActors;
        struct TArray<struct AActor*> PenetrationTypes;
        struct FVector WorldEnd;
        struct FVector Start;
        struct FVector End;
        float OuterTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IgnoreActors = (struct TArray<struct AActor*>)IgnoreActors;
    Parms.PenetrationTypes = (struct TArray<struct AActor*>)PenetrationTypes;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AddHitResult = Parms.AddHitResult;
    HitResult = Parms.HitResult;
    OutHits = Parms.OutHits;
    WorldEnd = Parms.WorldEnd;
    OuterTime = Parms.OuterTime;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CheckSingleDropPositionWrapper(struct AActor* Actor, const struct FVector& InPos, float radius, struct FVector& OutPos, struct FRotator& OutRotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CheckSingleDropPositionWrapper");
    struct
    {
        struct AActor* Actor;
        struct FVector InPos;
        float radius;
        struct FVector OutPos;
        struct FRotator OutRotate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.InPos = (struct FVector)InPos;
    Parms.radius = (float)radius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPos = Parms.OutPos;
    OutRotate = Parms.OutRotate;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CheckHitPointOnGround(const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CheckHitPointOnGround");
    struct
    {
        struct FHitResult HitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CheckDropPositionOnGroundWrapper(struct UWorld* World, const struct FVector& InPos, float BoxExtent, float& ZOffset, struct FVector& OutPos, struct FRotator& OutRotate, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CheckDropPositionOnGroundWrapper");
    struct
    {
        struct UWorld* World;
        struct FVector InPos;
        float BoxExtent;
        float ZOffset;
        struct FVector OutPos;
        struct FRotator OutRotate;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InPos = (struct FVector)InPos;
    Parms.BoxExtent = (float)BoxExtent;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ZOffset = Parms.ZOffset;
    OutPos = Parms.OutPos;
    OutRotate = Parms.OutRotate;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CheckDropPoint(struct UWorld* World, struct FVector StartLoc, struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CheckDropPoint");
    struct
    {
        struct UWorld* World;
        struct FVector StartLoc;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.StartLoc = (struct FVector)StartLoc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ActorsToIgnore = Parms.ActorsToIgnore;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CheckDropIgnoreListPositionWrapper(struct UWorld* World, const struct FVector& InPos, float radius, struct FVector& OutPos, struct FRotator& OutRotate, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CheckDropIgnoreListPositionWrapper");
    struct
    {
        struct UWorld* World;
        struct FVector InPos;
        float radius;
        struct FVector OutPos;
        struct FRotator OutRotate;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InPos = (struct FVector)InPos;
    Parms.radius = (float)radius;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPos = Parms.OutPos;
    OutRotate = Parms.OutRotate;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CapsuleTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, float HalfHeight, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CapsuleTraceSingleForObjects");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        float radius;
        float HalfHeight;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.HalfHeight = (float)HalfHeight;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CapsuleTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, float radius, float HalfHeight, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CapsuleTraceSingle");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        float radius;
        float HalfHeight;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.HalfHeight = (float)HalfHeight;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CapsuleTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, float HalfHeight, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CapsuleTraceMultiForObjects");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        float radius;
        float HalfHeight;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.HalfHeight = (float)HalfHeight;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CapsuleTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, float radius, float HalfHeight, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CapsuleTraceMulti");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        float radius;
        float HalfHeight;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.radius = (float)radius;
    Parms.HalfHeight = (float)HalfHeight;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::CapsuleLineIntersect(const struct FTransform& LocalToWorldNoScale, float radius, float Length, const struct FVector& Start, const struct FVector& End, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "CapsuleLineIntersect");
    struct
    {
        struct FTransform LocalToWorldNoScale;
        float radius;
        float Length;
        struct FVector Start;
        struct FVector End;
        struct FVector OutHitLoc;
        struct FVector OutHitNormal;
        float OutHitTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LocalToWorldNoScale = (struct FTransform)LocalToWorldNoScale;
    Parms.radius = (float)radius;
    Parms.Length = (float)Length;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitLoc = Parms.OutHitLoc;
    OutHitNormal = Parms.OutHitNormal;
    OutHitTime = Parms.OutHitTime;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::BoxTraceSingleForObjects(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "BoxTraceSingleForObjects");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        struct FVector HalfSize;
        struct FRotator Orientation;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.HalfSize = (struct FVector)HalfSize;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::BoxTraceSingle(struct UWorld* World, struct FHitResult& OutHit, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "BoxTraceSingle");
    struct
    {
        struct UWorld* World;
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        struct FVector HalfSize;
        struct FRotator Orientation;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.HalfSize = (struct FVector)HalfSize;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::BoxTraceMultiForObjects(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const struct TArray<ECollisionChannel>& ObjectTypes, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "BoxTraceMultiForObjects");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        struct FVector HalfSize;
        struct FRotator Orientation;
        struct TArray<ECollisionChannel> ObjectTypes;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.HalfSize = (struct FVector)HalfSize;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.ObjectTypes = (struct TArray<ECollisionChannel>)ObjectTypes;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::BoxTraceMulti(struct UWorld* World, struct TArray<struct FHitResult>& OutHits, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, ECollisionChannel TraceChannel, uint8_t bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "BoxTraceMulti");
    struct
    {
        struct UWorld* World;
        struct TArray<struct FHitResult> OutHits;
        struct FVector Start;
        struct FVector End;
        struct FVector HalfSize;
        struct FRotator Orientation;
        enum ECollisionChannel TraceChannel;
        uint8_t bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.HalfSize = (struct FVector)HalfSize;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.TraceChannel = (enum ECollisionChannel)TraceChannel;
    Parms.bTraceComplex = (uint8_t)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHits = Parms.OutHits;
    return Parms.ReturnValue;
}

uint8_t UGPPhysics::BoxLineIntersect(const struct FTransform& LocalToWorldNoScale, const struct FVector& Center, const struct FVector& Extend, const struct FVector& Start, const struct FVector& End, struct FVector& OutHitLoc, struct FVector& OutHitNormal, float& OutHitTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPhysics", "BoxLineIntersect");
    struct
    {
        struct FTransform LocalToWorldNoScale;
        struct FVector Center;
        struct FVector Extend;
        struct FVector Start;
        struct FVector End;
        struct FVector OutHitLoc;
        struct FVector OutHitNormal;
        float OutHitTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LocalToWorldNoScale = (struct FTransform)LocalToWorldNoScale;
    Parms.Center = (struct FVector)Center;
    Parms.Extend = (struct FVector)Extend;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutHitLoc = Parms.OutHitLoc;
    OutHitNormal = Parms.OutHitNormal;
    OutHitTime = Parms.OutHitTime;
    return Parms.ReturnValue;
}

} // namespace SDK
