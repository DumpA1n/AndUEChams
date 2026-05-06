#include "Foliage.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UFoliageStatistics
int32_t UFoliageStatistics::FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");
    struct
    {
        struct UObject* WorldContextObject;
        struct UStaticMesh* StaticMesh;
        struct FVector CenterPosition;
        float Radius;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    Parms.CenterPosition = (struct FVector)CenterPosition;
    Parms.Radius = (float)Radius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFoliageStatistics::FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingBoxCount");
    struct
    {
        struct UObject* WorldContextObject;
        struct UStaticMesh* StaticMesh;
        struct FBox Box;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    Parms.Box = (struct FBox)Box;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AInteractiveFoliageActor
void AInteractiveFoliageActor::CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractiveFoliageActor", "CapsuleTouched");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* Other;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        bool bFromSweep;
        struct FHitResult OverlapInfo;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.Other = (struct AActor*)Other;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (bool)bFromSweep;
    Parms.OverlapInfo = (struct FHitResult)OverlapInfo;
    this->ProcessEvent(Func, &Parms);
}

// UProceduralFoliageSpawner
void UProceduralFoliageSpawner::Simulate(int32_t NumSteps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralFoliageSpawner", "Simulate");
    struct
    {
        int32_t NumSteps;
    } Parms{};
    Parms.NumSteps = (int32_t)NumSteps;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
