#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>

#include "UEGame/UECore/Basic.h"
#include "UEGame/UECore/CoreUObject_classes.h"
#include "UEGame/UECore/CoreUObject_structs.h"

#define DEFINE_UE_CLASS_HELPERS(FullClassName, ClassNameStr) \
    static struct UClass* StaticClass() { \
        return StaticClassImpl<ClassNameStr>(); \
    } \
    static struct FullClassName* GetDefaultObj() { \
        return GetDefaultObjImpl<FullClassName>(); \
    }

using namespace SDK;
using namespace UC;

#include "BaseStructs.h"
#include "BaseEnums.h"

struct UEngine : UObject {};
struct UWorld  : UObject {};

struct UActorComponent : UObject {};
struct USceneComponent : UActorComponent {};

struct AActor : UObject
{
    DEFINE_UE_CLASS_HELPERS(AActor, "Actor")

    FVector K2_GetActorLocation();
    FVector GetVelocity();
    bool IsActorBeingDestroyed();
};

struct APawn : AActor
{
    DEFINE_UE_CLASS_HELPERS(APawn, "Pawn")

    bool IsPlayerControlled();
};

struct AController       : UObject {};
struct APlayerController : AController
{
    DEFINE_UE_CLASS_HELPERS(APlayerController, "PlayerController")
};

struct UMaterial;
struct UMaterialInterface : UObject
{
    UMaterial* GetBaseMaterial();
};

struct UMaterial          : UMaterialInterface {};
struct UMaterialInstance  : UMaterialInterface {};

struct UMaterialInstanceDynamic : UMaterialInstance
{
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
};

struct UPrimitiveComponent : USceneComponent
{
    void SetMaterial(int32_t ElementIndex, UMaterialInterface* Material);
};

struct UMeshComponent : UPrimitiveComponent
{
    TArray<UMaterialInterface*> GetMaterials();
};

struct USkinnedMeshComponent : UMeshComponent {};

struct UBlueprintFunctionLibrary : UObject {};

struct UKismetSystemLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UKismetSystemLibrary, "KismetSystemLibrary")

    static bool LineTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, EDrawDebugTrace DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
};

struct UKismetStringLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UKismetStringLibrary, "KismetStringLibrary")

    static FName Conv_StringToName(const FString& InString);
};

struct UKismetMaterialLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UKismetMaterialLibrary, "KismetMaterialLibrary")

    static UMaterialInstanceDynamic* CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName);
};

struct UCanvas : UObject
{
    float OrgX;
    float OrgY;
    float ClipX;
    float ClipY;
};
