#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFDestructionCommon
// Enums: 0
// Structs: 3
// Classes: 4

struct UNiagaraSystem;
struct UPhysicalMaterial;
struct FGlassBreakParam;
struct FDestructibleObjParam;
struct FDestructibleObjParamBind;
struct UMFDestructibleObjParamManager;
struct UMFDestructionEffectPlayerComponent;
struct AMSingletonCollectionActor;
struct UMFDestructibleManagerCollectionSingleton;

// Object: ScriptStruct MFDestructionCommon.GlassBreakParam
// Size: 0x58 (Inherited: 0x0)
struct FGlassBreakParam
{
	struct FVector Pos; // 0x0(0xC)
	struct FVector Dir; // 0xC(0xC)
	struct FVector Size; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UObject* StaticMesh; // 0x28(0x8)
	int32_t TriStartIndex; // 0x30(0x4)
	int32_t TriEndIndex; // 0x34(0x4)
	struct FVector VelocityDir; // 0x38(0xC)
	int32_t EffectType; // 0x44(0x4)
	struct UPhysicalMaterial* PhysMat; // 0x48(0x8)
	int32_t HitWeaponType; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct MFDestructionCommon.DestructibleObjParam
// Size: 0x8 (Inherited: 0x0)
struct FDestructibleObjParam
{
	int32_t DestructibleLevel; // 0x0(0x4)
	float ChunkLife; // 0x4(0x4)
};

// Object: ScriptStruct MFDestructionCommon.DestructibleObjParamBind
// Size: 0x10 (Inherited: 0x0)
struct FDestructibleObjParamBind
{
	struct UPhysicalMaterial* PhysicalMaterial; // 0x0(0x8)
	struct FDestructibleObjParam Param; // 0x8(0x8)
};

// Object: Class MFDestructionCommon.MFDestructibleObjParamManager
// Size: 0x48 (Inherited: 0x28)
struct UMFDestructibleObjParamManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFDestructibleObjParamManager, "MFDestructibleObjParamManager")

	struct UMFDestructibleObjParamManager* MgrClassCache; // 0x28(0x8)
	struct TArray<struct FDestructibleObjParamBind> DestructibleObjParamBindList; // 0x30(0x10)
	struct FDestructibleObjParam DefaultParam; // 0x40(0x8)

	// Object: Function MFDestructionCommon.MFDestructibleObjParamManager.GetDestructibleObjParamFromPhysicalMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f206d0
	// Params: [ Num(2) Size(0x10) ]
	struct FDestructibleObjParam GetDestructibleObjParamFromPhysicalMaterial(struct UPhysicalMaterial* InPhysicalMaterial);
};

// Object: Class MFDestructionCommon.MFDestructionEffectPlayerComponent
// Size: 0x110 (Inherited: 0xE0)
struct UMFDestructionEffectPlayerComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFDestructionEffectPlayerComponent, "MFDestructionEffectPlayerComponent")

	struct TArray<struct UNiagaraSystem*> GlassWindowParticles; // 0xE0(0x10)
	float MaxClusterGlassBreakSoundDist; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x1C]; // 0xF4(0x1C)
};

// Object: Class MFDestructionCommon.MSingletonCollectionActor
// Size: 0x310 (Inherited: 0x300)
struct AMSingletonCollectionActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMSingletonCollectionActor, "MSingletonCollectionActor")

	struct UMFDestructibleManagerCollectionSingleton* DestructibleManagerCollectionSingleton; // 0x300(0x8)
	struct UMFDestructibleManagerCollectionSingleton* SingletonCache; // 0x308(0x8)
};

// Object: Class MFDestructionCommon.MFDestructibleManagerCollectionSingleton
// Size: 0x80 (Inherited: 0x28)
struct UMFDestructibleManagerCollectionSingleton : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFDestructibleManagerCollectionSingleton, "MFDestructibleManagerCollectionSingleton")

	struct UMFDestructibleObjParamManager* DestructibleObjParamMgr; // 0x28(0x8)
	uint8_t Pad_0x30[0x50]; // 0x30(0x50)
};

} // namespace SDK
