#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFPropsDestruction
// Enums: 0
// Structs: 2
// Classes: 3

struct FHitResult;
struct UTexture2D;
struct FGlassBoxCollisionInfo;
struct FGlassHitEffectInfo;
struct ABreakableWinBaseActor;
struct UGlassBoxComponent;
struct UMFGlassCutterComponent;

// Object: ScriptStruct MFPropsDestruction.GlassBoxCollisionInfo
// Size: 0x1 (Inherited: 0x0)
struct FGlassBoxCollisionInfo
{
	bool bBroken; // 0x0(0x1)
};

// Object: ScriptStruct MFPropsDestruction.GlassHitEffectInfo
// Size: 0x38 (Inherited: 0x0)
struct FGlassHitEffectInfo
{
	struct TArray<int32_t> IDList; // 0x0(0x10)
	struct TArray<struct FVector> DirList; // 0x10(0x10)
	struct TArray<int32_t> WeaponTypeList; // 0x20(0x10)
	int32_t Count; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: Class MFPropsDestruction.BreakableWinBaseActor
// Size: 0x310 (Inherited: 0x310)
struct ABreakableWinBaseActor : AStaticMeshActor
{
	DEFINE_UE_CLASS_HELPERS(ABreakableWinBaseActor, "BreakableWinBaseActor")
};

// Object: Class MFPropsDestruction.GlassBoxComponent
// Size: 0x6C0 (Inherited: 0x6A0)
struct UGlassBoxComponent : UBoxComponent
{
	DEFINE_UE_CLASS_HELPERS(UGlassBoxComponent, "GlassBoxComponent")

	int32_t ColorID; // 0x6A0(0x4)
	struct FGlassBoxCollisionInfo GlassBoxCollisionInfo; // 0x6A4(0x1)
	uint8_t Pad_0x6A5[0x3]; // 0x6A5(0x3)
	struct UMFGlassCutterComponent* CachedGlassCutter; // 0x6A8(0x8)
	uint8_t Pad_0x6B0[0x10]; // 0x6B0(0x10)

	// Object: Function MFPropsDestruction.GlassBoxComponent.TestHitGlass
	// Flags: [Final|Native|Public]
	// Offset: 0x4f1aec4
	// Params: [ Num(0) Size(0x0) ]
	void TestHitGlass();

	// Object: Function MFPropsDestruction.GlassBoxComponent.OnHitGlassOffline
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4f1aed8
	// Params: [ Num(1) Size(0x98) ]
	void OnHitGlassOffline(const struct FHitResult& Hit);

	// Object: Function MFPropsDestruction.GlassBoxComponent.OnHitGlass
	// Flags: [Final|Native|Public]
	// Offset: 0x4f1afa0
	// Params: [ Num(0) Size(0x0) ]
	void OnHitGlass();
};

// Object: Class MFPropsDestruction.MFGlassCutterComponent
// Size: 0x348 (Inherited: 0xE0)
struct UMFGlassCutterComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFGlassCutterComponent, "MFGlassCutterComponent")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct UTexture2D* MaskTex; // 0xE8(0x8)
	struct TArray<uint8_t> MaskIDCache; // 0xF0(0x10)
	struct TArray<uint8_t> ClientMaskIDCache; // 0x100(0x10)
	bool Inited; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	int32_t IDMaxCount; // 0x114(0x4)
	int32_t TestPartId; // 0x118(0x4)
	struct FVector Scale; // 0x11C(0xC)
	struct FVector Dir; // 0x128(0xC)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct TArray<struct FVector> Pos; // 0x138(0x10)
	struct TMap<int32_t, int32_t> IDTriangleStartIndexMap; // 0x148(0x50)
	struct TMap<int32_t, int32_t> IDTriangleEndIndexMap; // 0x198(0x50)
	uint8_t bPassable : 1; // 0x1E8(0x1), Mask(0x1)
	uint8_t BitPad_0x1E8_1 : 7; // 0x1E8(0x1)
	uint8_t Pad_0x1E9[0x11F]; // 0x1E9(0x11F)
	int32_t HitWeaponType; // 0x308(0x4)
	uint8_t Pad_0x30C[0x4]; // 0x30C(0x4)
	struct TArray<struct UGlassBoxComponent*> GlassBoxCompList; // 0x310(0x10)
	struct TArray<struct FGlassHitEffectInfo> GlassHitEffectInfo; // 0x320(0x10)
	int32_t bResetState; // 0x330(0x4)
	uint8_t Pad_0x334[0x14]; // 0x334(0x14)

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.SetHitWeaponType
	// Flags: [Final|Native|Public]
	// Offset: 0x4f1afe4
	// Params: [ Num(1) Size(0x4) ]
	void SetHitWeaponType(int32_t WeaponType);

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.ResetState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f1b1dc
	// Params: [ Num(0) Size(0x0) ]
	void ResetState();

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.ReConstructPhysic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f1b1f0
	// Params: [ Num(0) Size(0x0) ]
	void ReConstructPhysic();

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.OnReplicate_MaskIDCache
	// Flags: [Final|Native|Protected]
	// Offset: 0x87ec5b4
	// Params: [ Num(0) Size(0x0) ]
	void OnReplicate_MaskIDCache();

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.OnRep_GlassHitEffectInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x4f1afbc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GlassHitEffectInfo();

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.OnRep_bResetState
	// Flags: [Final|Native|Protected]
	// Offset: 0x4f1afd0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bResetState();

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.ChangeShapeCollision
	// Flags: [Final|Native|Public]
	// Offset: 0x4f1b134
	// Params: [ Num(1) Size(0x4) ]
	void ChangeShapeCollision(int32_t ColorID);

	// Object: Function MFPropsDestruction.MFGlassCutterComponent.ChangeBehaviour
	// Flags: [Final|Native|Public]
	// Offset: 0x4f1b08c
	// Params: [ Num(1) Size(0x4) ]
	void ChangeBehaviour(int32_t ColorID);
};

} // namespace SDK
