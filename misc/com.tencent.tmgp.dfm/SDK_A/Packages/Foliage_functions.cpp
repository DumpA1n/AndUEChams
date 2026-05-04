#include "Foliage.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UFoliageEd_LogicTypeRedirector::* ----
void UFoliageEd_LogicTypeRedirector::AddFoliageType(struct UFoliageType* InFoliageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageEd_LogicTypeRedirector", "AddFoliageType");
    struct
    {
        struct UFoliageType* InFoliageType;
    } Parms{};
    Parms.InFoliageType = (struct UFoliageType*)InFoliageType;
    this->ProcessEvent(Func, &Parms);
}

// ---- UFoliageStatistics::* ----
int32_t UFoliageStatistics::FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");
    struct
    {
        struct UObject* WorldContextObject;
        struct UStaticMesh* StaticMesh;
        struct FVector CenterPosition;
        float radius;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    Parms.CenterPosition = (struct FVector)CenterPosition;
    Parms.radius = (float)radius;
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

// ---- UFoliageType::* ----
void UFoliageType::SetCullDistanceHD(int32_t InMin, int32_t InMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageType", "SetCullDistanceHD");
    struct
    {
        int32_t InMin;
        int32_t InMax;
    } Parms{};
    Parms.InMin = (int32_t)InMin;
    Parms.InMax = (int32_t)InMax;
    this->ProcessEvent(Func, &Parms);
}

void UFoliageType::SetCullDistance(int32_t InMin, int32_t InMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageType", "SetCullDistance");
    struct
    {
        int32_t InMin;
        int32_t InMax;
    } Parms{};
    Parms.InMin = (int32_t)InMin;
    Parms.InMax = (int32_t)InMax;
    this->ProcessEvent(Func, &Parms);
}

int32_t UFoliageType::GetCullDistanceMin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageType", "GetCullDistanceMin");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFoliageType::GetCullDistanceMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageType", "GetCullDistanceMax");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFoliageType::GetCullDistanceHDMin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageType", "GetCullDistanceHDMin");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UFoliageType::GetCullDistanceHDMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageType", "GetCullDistanceHDMax");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AInteractiveFoliageActor::* ----
void AInteractiveFoliageActor::CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& OverlapInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteractiveFoliageActor", "CapsuleTouched");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* Other;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult OverlapInfo;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.Other = (struct AActor*)Other;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.OverlapInfo = (struct FHitResult)OverlapInfo;
    this->ProcessEvent(Func, &Parms);
}

// ---- UProceduralFoliageSpawner::* ----
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
