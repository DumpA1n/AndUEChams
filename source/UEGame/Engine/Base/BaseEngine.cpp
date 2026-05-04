#include "BaseEngine.h"

#include "UEGame/UECore/CoreUObject_structs.h"

FVector AActor::K2_GetActorLocation() {
    static auto fn = Class->GetFunction("Actor", "K2_GetActorLocation");
    struct {
        FVector ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

FVector AActor::GetVelocity() {
    static auto fn = Class->GetFunction("Actor", "GetVelocity");
    struct {
        FVector ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

bool AActor::IsActorBeingDestroyed() {
    static auto fn = Class->GetFunction("Actor", "IsActorBeingDestroyed");
    struct {
        bool ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

bool APawn::IsPlayerControlled() {
    static auto fn = Class->GetFunction("Pawn", "IsPlayerControlled");
    struct {
        bool ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

UMaterial* UMaterialInterface::GetBaseMaterial() {
    static auto fn = Class->GetFunction("MaterialInterface", "GetBaseMaterial");
    struct {
        UMaterial* ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

void UMaterialInstanceDynamic::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
    static auto fn = Class->GetFunction("MaterialInstanceDynamic", "SetVectorParameterValue");
    struct {
        FName ParameterName;
        FLinearColor Value;
    } parms;
    parms = { ParameterName, Value };
    ProcessEvent(fn, &parms);
}

void UPrimitiveComponent::SetMaterial(int32_t ElementIndex, UMaterialInterface* Material) {
    static auto fn = Class->GetFunction("PrimitiveComponent", "SetMaterial");
    struct {
        int32_t ElementIndex;
        UMaterialInterface* Material;
    } parms;
    parms = { ElementIndex, Material };
    ProcessEvent(fn, &parms);
}

TArray<UMaterialInterface*> UMeshComponent::GetMaterials() {
    static auto fn = Class->GetFunction("MeshComponent", "GetMaterials");
    struct {
        TArray<UMaterialInterface*> ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

bool UKismetSystemLibrary::LineTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, EDrawDebugTrace DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto fn = GetDefaultObj()->Class->GetFunction("KismetSystemLibrary", "LineTraceSingle");
    struct {
        UObject* WorldContextObject;
        FVector Start;
        FVector End;
        ETraceTypeQuery TraceChannel;
        bool bTraceComplex;
        TArray<AActor*> ActorsToIgnore;
        EDrawDebugTrace DrawDebugType;
        FHitResult OutHit;
        bool bIgnoreSelf;
        FLinearColor TraceColor;
        FLinearColor TraceHitColor;
        float DrawTime;
        bool ReturnValue;
    } parms;
    parms = { WorldContextObject, Start, End, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime };
    GetDefaultObj()->ProcessEvent(fn, &parms);
    OutHit = parms.OutHit;
    return parms.ReturnValue;
}

FName UKismetStringLibrary::Conv_StringToName(const FString& InString) {
    static auto fn = GetDefaultObj()->Class->GetFunction("KismetStringLibrary", "Conv_StringToName");
    struct {
        FString InString;
        FName ReturnValue;
    } parms;
    parms = { InString };
    GetDefaultObj()->ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

UMaterialInstanceDynamic* UKismetMaterialLibrary::CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName) {
    static auto fn = GetDefaultObj()->Class->GetFunction("KismetMaterialLibrary", "CreateDynamicMaterialInstance");
    struct {
        UObject* WorldContextObject;
        UMaterialInterface* Parent;
        FName OptionalName;
        UMaterialInstanceDynamic* ReturnValue;
    } parms;
    parms = { WorldContextObject, Parent, OptionalName };
    GetDefaultObj()->ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}
