#include "DFMFoliage.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AFoliageCollisionData
uint8_t AFoliageCollisionData::TestOverlapSVO(struct FVector Center, struct FVector HalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "TestOverlapSVO");
    struct
    {
        struct FVector Center;
        struct FVector HalfExtent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.HalfExtent = (struct FVector)HalfExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AFoliageCollisionData::TestOverlapBound(struct FVector Center, struct FVector HalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "TestOverlapBound");
    struct
    {
        struct FVector Center;
        struct FVector HalfExtent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.HalfExtent = (struct FVector)HalfExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AFoliageCollisionData::TestBlockSVO(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "TestBlockSVO");
    struct
    {
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AFoliageCollisionData::TestBlockRateSVO(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "TestBlockRateSVO");
    struct
    {
        struct FVector Start;
        struct FVector End;
        float ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AFoliageCollisionData::TestBlockRateBound(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "TestBlockRateBound");
    struct
    {
        struct FVector Start;
        struct FVector End;
        float ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AFoliageCollisionData::TestBlockBound(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "TestBlockBound");
    struct
    {
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AFoliageCollisionData::PreBuild()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "PreBuild");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FIntVector> AFoliageCollisionData::OverlapSVO(struct FVector Center, struct FVector HalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "OverlapSVO");
    struct
    {
        struct FVector Center;
        struct FVector HalfExtent;
        struct TArray<struct FIntVector> ReturnValue;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.HalfExtent = (struct FVector)HalfExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FFoliageData> AFoliageCollisionData::OverlapBoundCylinder(struct FVector Center, float radius, float HalfHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "OverlapBoundCylinder");
    struct
    {
        struct FVector Center;
        float radius;
        float HalfHeight;
        struct TArray<struct FFoliageData> ReturnValue;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.radius = (float)radius;
    Parms.HalfHeight = (float)HalfHeight;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FFoliageData> AFoliageCollisionData::OverlapBound(struct FVector Center, struct FVector HalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "OverlapBound");
    struct
    {
        struct FVector Center;
        struct FVector HalfExtent;
        struct TArray<struct FFoliageData> ReturnValue;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.HalfExtent = (struct FVector)HalfExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AFoliageCollisionData::GetSneakOpt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "GetSneakOpt");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AFoliageCollisionData::ChangeSneakOpt(uint8_t _bSneakOpt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "ChangeSneakOpt");
    struct
    {
        uint8_t _bSneakOpt;
    } Parms{};
    Parms._bSneakOpt = (uint8_t)_bSneakOpt;
    this->ProcessEvent(Func, &Parms);
}

void AFoliageCollisionData::BuildAndSave()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "BuildAndSave");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFoliageCollisionData::Build()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "Build");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFoliageCollisionData::AddFoliages(struct UStaticMesh* FoliageMesh, struct TArray<struct FTransform>& InFoliageInstacenTransforms)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "AddFoliages");
    struct
    {
        struct UStaticMesh* FoliageMesh;
        struct TArray<struct FTransform> InFoliageInstacenTransforms;
    } Parms{};
    Parms.FoliageMesh = (struct UStaticMesh*)FoliageMesh;
    this->ProcessEvent(Func, &Parms);
    InFoliageInstacenTransforms = Parms.InFoliageInstacenTransforms;
}

void AFoliageCollisionData::AddFoliage(struct UStaticMesh* FoliageMesh, struct FTransform Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollisionData", "AddFoliage");
    struct
    {
        struct UStaticMesh* FoliageMesh;
        struct FTransform Transform;
    } Parms{};
    Parms.FoliageMesh = (struct UStaticMesh*)FoliageMesh;
    Parms.Transform = (struct FTransform)Transform;
    this->ProcessEvent(Func, &Parms);
}

// UFoliageCollision
uint8_t UFoliageCollision::TestOverlap(EFoliageCollisionName Name, struct FVector Center, struct FVector HalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "TestOverlap");
    struct
    {
        enum EFoliageCollisionName Name;
        struct FVector Center;
        struct FVector HalfExtent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.Center = (struct FVector)Center;
    Parms.HalfExtent = (struct FVector)HalfExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UFoliageCollision::TestBlockRate(EFoliageCollisionName Name, struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "TestBlockRate");
    struct
    {
        enum EFoliageCollisionName Name;
        struct FVector Start;
        struct FVector End;
        float ReturnValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFoliageCollision::TestBlock(EFoliageCollisionName Name, struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "TestBlock");
    struct
    {
        enum EFoliageCollisionName Name;
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFoliageCollision::SetEnableState(EFoliageCollisionName Name, uint8_t bStatic, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "SetEnableState");
    struct
    {
        enum EFoliageCollisionName Name;
        uint8_t bStatic;
        uint8_t bValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.bStatic = (uint8_t)bStatic;
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FFoliageData> UFoliageCollision::OverlapBoundCylinder(EFoliageCollisionName Name, struct FVector Center, float radius, float HalfHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "OverlapBoundCylinder");
    struct
    {
        enum EFoliageCollisionName Name;
        struct FVector Center;
        float radius;
        float HalfHeight;
        struct TArray<struct FFoliageData> ReturnValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.Center = (struct FVector)Center;
    Parms.radius = (float)radius;
    Parms.HalfHeight = (float)HalfHeight;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FFoliageData> UFoliageCollision::OverlapBound(EFoliageCollisionName Name, struct FVector Center, struct FVector HalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "OverlapBound");
    struct
    {
        enum EFoliageCollisionName Name;
        struct FVector Center;
        struct FVector HalfExtent;
        struct TArray<struct FFoliageData> ReturnValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.Center = (struct FVector)Center;
    Parms.HalfExtent = (struct FVector)HalfExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UFoliageCollision* UFoliageCollision::Inst(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FoliageCollision", "Inst");
    struct
    {
        struct UObject* WorldContextObject;
        struct UFoliageCollision* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFoliageCollision::GetSneakOpt(EFoliageCollisionName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "GetSneakOpt");
    struct
    {
        enum EFoliageCollisionName Name;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFoliageCollision::GetEnableState(EFoliageCollisionName Name, uint8_t bStatic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "GetEnableState");
    struct
    {
        enum EFoliageCollisionName Name;
        uint8_t bStatic;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.bStatic = (uint8_t)bStatic;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFoliageCollision::ChangeSneakOpt(EFoliageCollisionName Name, uint8_t bSneakOpt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FoliageCollision", "ChangeSneakOpt");
    struct
    {
        enum EFoliageCollisionName Name;
        uint8_t bSneakOpt;
    } Parms{};
    Parms.Name = (enum EFoliageCollisionName)Name;
    Parms.bSneakOpt = (uint8_t)bSneakOpt;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
