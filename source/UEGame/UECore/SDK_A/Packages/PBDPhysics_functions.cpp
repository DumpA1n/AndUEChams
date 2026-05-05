#include "PBDPhysics.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPBDPhysicsBPLibrary
float UPBDPhysicsBPLibrary::SquaredDistanceFromPointToSegment(struct FVector CapsulePointA, struct FVector CapsulePointB, struct FVector TestPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PBDPhysicsBPLibrary", "SquaredDistanceFromPointToSegment");
    struct
    {
        struct FVector CapsulePointA;
        struct FVector CapsulePointB;
        struct FVector TestPoint;
        float ReturnValue;
    } Parms{};
    Parms.CapsulePointA = (struct FVector)CapsulePointA;
    Parms.CapsulePointB = (struct FVector)CapsulePointB;
    Parms.TestPoint = (struct FVector)TestPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPBDPhysicsBPLibrary::SquaredDistanceAndReferencePointFromPointToSegment(struct FVector CapsulePointA, struct FVector CapsulePointB, struct FVector TestPoint, struct FVector& ReferencePoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PBDPhysicsBPLibrary", "SquaredDistanceAndReferencePointFromPointToSegment");
    struct
    {
        struct FVector CapsulePointA;
        struct FVector CapsulePointB;
        struct FVector TestPoint;
        struct FVector ReferencePoint;
        float ReturnValue;
    } Parms{};
    Parms.CapsulePointA = (struct FVector)CapsulePointA;
    Parms.CapsulePointB = (struct FVector)CapsulePointB;
    Parms.TestPoint = (struct FVector)TestPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ReferencePoint = Parms.ReferencePoint;
    return Parms.ReturnValue;
}

} // namespace SDK
