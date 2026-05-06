#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFEnvironment
// Enums: 3
// Structs: 7
// Classes: 17

struct ACharacter;
struct APlayerController;
struct UDataTable;
struct UHierarchicalInstancedStaticMeshComponent;
struct ULevelSequence;
struct ULevelSequencePlayer;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UParticleSystem;
struct UParticleSystemComponent;
struct USceneCaptureComponent2D;
struct USkeletalMeshComponent;
struct USkinnedMeshComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture2D;
struct UTextureRenderTarget2D;
struct UWorld;
struct FMFEnvBurnBlockBound;
struct FMFEnvBlockInitInfo;
struct FMFEnvPhysFoliageMeshRow;
struct FMFEnvTrailPlayerInfo;
struct FMFEnvWindSwayInstInfo;
struct FMFEnvWindDirectForceInfo;
struct FMFEnvWindExplodeForceInfo;
struct UMFEnvActorInfoComponent;
struct UMFEnvBaseComponent;
struct UMFEnvAutoExposureComponent;
struct UMFEnvBurnComponent;
struct UMFEnvBurnFireBlockComponent;
struct UMFEnvBurnFireComponent;
struct UMFEnvMudComponent;
struct AMFEnvPhysFoliageActor;
struct UMFEnvPhysFoliageComponent;
struct UMFEnvSceneInfoCharacterComponent;
struct UMFEnvSceneInfoComponent;
struct UMFEnvStatics;
struct AMFEnvSystem;
struct UMFEnvTrailComponent;
struct UMFEnvWaterComponent;
struct UMFEnvWindComponent;
struct AMFMudDeformationActor;

// Object: Enum MFEnvironment.EEnvActorType
enum class EEnvActorType : uint8_t
{
	EnvActorType_Water = 0,
	EnvActorType_Capsule = 1,
	EnvActorType_Mud = 2,
	EnvActorType_AutoExposure = 3,
	EnvActorType_MAX = 4
};

// Object: Enum MFEnvironment.EMFPhysFoliageMeshTypeEnum
enum class EMFPhysFoliageMeshTypeEnum : uint8_t
{
	SkeletalMesh = 0,
	StaticMesh = 1,
	EditableMesh = 2,
	EMFPhysFoliageMeshTypeEnum_MAX = 3
};

// Object: Enum MFEnvironment.EMFEnvTrailShapeEnum
enum class EMFEnvTrailShapeEnum : uint8_t
{
	None = 0,
	Circle = 1,
	Triangle = 2,
	EMFEnvTrailShapeEnum_MAX = 3
};

// Object: ScriptStruct MFEnvironment.MFEnvBurnBlockBound
// Size: 0x10 (Inherited: 0x0)
struct FMFEnvBurnBlockBound
{
	struct FVector CenterPos; // 0x0(0xC)
	int16_t RotYaw; // 0xC(0x2)
	uint8_t Extent; // 0xE(0x1)
	uint8_t Pad_0xF[0x1]; // 0xF(0x1)
};

// Object: ScriptStruct MFEnvironment.MFEnvBlockInitInfo
// Size: 0x14 (Inherited: 0x0)
struct FMFEnvBlockInitInfo
{
	struct FMFEnvBurnBlockBound BurnBounds; // 0x0(0x10)
	uint8_t DamageScale; // 0x10(0x1)
	uint8_t TimeScale; // 0x11(0x1)
	bool bNoEffects; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
};

// Object: ScriptStruct MFEnvironment.MFEnvPhysFoliageMeshRow
// Size: 0x50 (Inherited: 0x8)
struct FMFEnvPhysFoliageMeshRow : FTableRowBase
{
	struct TSoftObjectPtr<UStaticMesh> StaticMeshSoftPtr; // 0x8(0x28)
	struct FSoftObjectPath MeshObjectPath; // 0x30(0x18)
	EMFPhysFoliageMeshTypeEnum MeshType; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct MFEnvironment.MFEnvTrailPlayerInfo
// Size: 0x38 (Inherited: 0x0)
struct FMFEnvTrailPlayerInfo
{
	struct FVector PlayerPosition; // 0x0(0xC)
	struct FVector PlayerPositionLeft; // 0xC(0xC)
	struct FVector PlayerPositionRight; // 0x18(0xC)
	struct FVector2D Direction; // 0x24(0x8)
	float Velocity; // 0x2C(0x4)
	float Radius; // 0x30(0x4)
	EMFEnvTrailShapeEnum Shape; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct MFEnvironment.MFEnvWindSwayInstInfo
// Size: 0x30 (Inherited: 0x0)
struct FMFEnvWindSwayInstInfo
{
	struct UHierarchicalInstancedStaticMeshComponent* InstPtr; // 0x0(0x8)
	int32_t InstId; // 0x8(0x4)
	struct FVector2D Pos; // 0xC(0x8)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FVector4 Params; // 0x20(0x10)
};

// Object: ScriptStruct MFEnvironment.MFEnvWindDirectForceInfo
// Size: 0x14 (Inherited: 0x0)
struct FMFEnvWindDirectForceInfo
{
	struct FVector2D ForceVector; // 0x0(0x8)
	struct FVector2D ForceOrigin; // 0x8(0x8)
	float ForceMomentum; // 0x10(0x4)
};

// Object: ScriptStruct MFEnvironment.MFEnvWindExplodeForceInfo
// Size: 0x10 (Inherited: 0x0)
struct FMFEnvWindExplodeForceInfo
{
	struct FVector2D ForceOrigin; // 0x0(0x8)
	float ForceMomentum; // 0x8(0x4)
	float LastTime; // 0xC(0x4)
};

// Object: Class MFEnvironment.MFEnvActorInfoComponent
// Size: 0x110 (Inherited: 0xE0)
struct UMFEnvActorInfoComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvActorInfoComponent, "MFEnvActorInfoComponent")

	struct AMFEnvSystem* EnvSystem; // 0xE0(0x8)
	struct TArray<struct USkinnedMeshComponent*> SkinMeshArray; // 0xE8(0x10)
	struct FVector PreviousPosition; // 0xF8(0xC)
	float PreviousPositionTime; // 0x104(0x4)
	EEnvActorType EnvActorType; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	int32_t LatentFrames; // 0x10C(0x4)
};

// Object: Class MFEnvironment.MFEnvBaseComponent
// Size: 0xE8 (Inherited: 0xE0)
struct UMFEnvBaseComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvBaseComponent, "MFEnvBaseComponent")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
};

// Object: Class MFEnvironment.MFEnvAutoExposureComponent
// Size: 0x190 (Inherited: 0xE8)
struct UMFEnvAutoExposureComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvAutoExposureComponent, "MFEnvAutoExposureComponent")

	struct FName ComponentTag; // 0xE4(0x8)
	bool TakeEffect; // 0xEC(0x1)
	struct UStaticMeshComponent* AEComp; // 0xF0(0x8)
	uint8_t Pad_0xF9[0x97]; // 0xF9(0x97)
};

// Object: Class MFEnvironment.MFEnvBurnComponent
// Size: 0x1B0 (Inherited: 0xE8)
struct UMFEnvBurnComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvBurnComponent, "MFEnvBurnComponent")

	struct TArray<struct FMFEnvBurnBlockBound> BurnedBlocks; // 0xE8(0x10)
	struct TArray<struct UMFEnvBurnFireComponent*> FireComponents; // 0xF8(0x10)
	struct UTexture2D* BurnMaskTex; // 0x108(0x8)
	struct TArray<struct UParticleSystemComponent*> AshesPSCArray; // 0x110(0x10)
	struct FMulticastInlineDelegate BurnFireBlockEvent; // 0x120(0x10)
	uint8_t Pad_0x130[0x4]; // 0x130(0x4)
	int32_t BurnTexSize; // 0x134(0x4)
	int32_t BurnAreaSize; // 0x138(0x4)
	struct FVector2D BurnAreaCenter; // 0x13C(0x8)
	int32_t SpreadTimes; // 0x144(0x4)
	int32_t Extent; // 0x148(0x4)
	float DitherScale; // 0x14C(0x4)
	float BurnProbability; // 0x150(0x4)
	float BurnWeightProbabilityScale; // 0x154(0x4)
	float BurnWindDirWeightScale; // 0x158(0x4)
	float SpreadInv; // 0x15C(0x4)
	float BurnTimePlantDown; // 0x160(0x4)
	float BurnTimePlantBufferRatio; // 0x164(0x4)
	float BurnTimeEffectOff; // 0x168(0x4)
	float FireDamagePerSec; // 0x16C(0x4)
	float FireDamageDuration; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct UMaterialInterface* BurnDecalMaterial; // 0x178(0x8)
	float DecalFadeInTime; // 0x180(0x4)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	struct UParticleSystem* ContinuousFiringPS1; // 0x188(0x8)
	struct UParticleSystem* ContinuousFiringPS2; // 0x190(0x8)
	float FiringPS1Probability; // 0x198(0x4)
	float AshesPSProbability; // 0x19C(0x4)
	float TexBoxExpand; // 0x1A0(0x4)
	uint8_t Pad_0x1A4[0x4]; // 0x1A4(0x4)
	struct UParticleSystem* AshesPS; // 0x1A8(0x8)

	// Object: Function MFEnvironment.MFEnvBurnComponent.OnRep_BurnedBlocks
	// Flags: [Native|Protected]
	// Offset: 0x412b374
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BurnedBlocks();
};

// Object: Class MFEnvironment.MFEnvBurnFireBlockComponent
// Size: 0x138 (Inherited: 0xE8)
struct UMFEnvBurnFireBlockComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvBurnFireBlockComponent, "MFEnvBurnFireBlockComponent")

	struct FMFEnvBlockInitInfo BlockInfo; // 0xE4(0x14)
	uint8_t Pad_0xFC[0xD]; // 0xFC(0xD)
	bool bRemovePlants; // 0x109(0x1)
	bool bTurnOffEffect; // 0x10A(0x1)
	uint8_t Pad_0x10B[0x5]; // 0x10B(0x5)
	struct UParticleSystemComponent* ContinuousFiringPSC; // 0x110(0x8)
	struct UMFEnvBurnFireComponent* FireComponent; // 0x118(0x8)
	uint8_t Pad_0x120[0x18]; // 0x120(0x18)

	// Object: Function MFEnvironment.MFEnvBurnFireBlockComponent.OnRep_TurnOffEffect
	// Flags: [Native|Protected]
	// Offset: 0x412b434
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TurnOffEffect();

	// Object: Function MFEnvironment.MFEnvBurnFireBlockComponent.OnRep_RemovePlants
	// Flags: [Native|Protected]
	// Offset: 0x412b450
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RemovePlants();

	// Object: Function MFEnvironment.MFEnvBurnFireBlockComponent.OnRep_BurnRep
	// Flags: [Native|Protected]
	// Offset: 0x412b46c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BurnRep();
};

// Object: Class MFEnvironment.MFEnvBurnFireComponent
// Size: 0x1A8 (Inherited: 0xE8)
struct UMFEnvBurnFireComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvBurnFireComponent, "MFEnvBurnFireComponent")

	struct UMFEnvBurnComponent* BurnComponent; // 0xE8(0x8)
	struct TArray<struct UMFEnvBurnFireBlockComponent*> FireBlocks; // 0xF0(0x10)
	uint8_t Pad_0x100[0xA8]; // 0x100(0xA8)
};

// Object: Class MFEnvironment.MFEnvMudComponent
// Size: 0x170 (Inherited: 0xE8)
struct UMFEnvMudComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvMudComponent, "MFEnvMudComponent")

	uint8_t Pad_0xE8[0x20]; // 0xE8(0x20)
	struct UMaterialInstanceDynamic* MudRTMID; // 0x108(0x8)
	struct UMaterialInstanceDynamic* MudRTCopyMID; // 0x110(0x8)
	uint8_t Pad_0x118[0x18]; // 0x118(0x18)
	float UpdateInv; // 0x130(0x4)
	float SampleInv; // 0x134(0x4)
	float MudDepth; // 0x138(0x4)
	float MudRoll; // 0x13C(0x4)
	float MudBottom; // 0x140(0x4)
	float MudBottomTime; // 0x144(0x4)
	struct UTextureRenderTarget2D* MudRT; // 0x148(0x8)
	struct UTextureRenderTarget2D* MudRTCopy; // 0x150(0x8)
	struct UTextureRenderTarget2D* MudRTComposite; // 0x158(0x8)
	struct UTextureRenderTarget2D* MudRTBlur; // 0x160(0x8)
	struct UTextureRenderTarget2D* MudRTNormal; // 0x168(0x8)
};

// Object: Class MFEnvironment.MFEnvPhysFoliageActor
// Size: 0x340 (Inherited: 0x300)
struct AMFEnvPhysFoliageActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFEnvPhysFoliageActor, "MFEnvPhysFoliageActor")

	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
	struct UHierarchicalInstancedStaticMeshComponent* HISMInc; // 0x310(0x8)
	uint8_t Pad_0x318[0x10]; // 0x318(0x10)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x328(0x8)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x330(0x8)
	uint8_t Pad_0x338[0x8]; // 0x338(0x8)
};

// Object: Class MFEnvironment.MFEnvPhysFoliageComponent
// Size: 0x128 (Inherited: 0xE8)
struct UMFEnvPhysFoliageComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvPhysFoliageComponent, "MFEnvPhysFoliageComponent")

	float FoliageReplaceInv; // 0xE4(0x4)
	float FoliageReplaceRadius; // 0xE8(0x4)
	uint8_t CollisionObjectType; // 0xEC(0x1)
	uint8_t CollisionResponse; // 0xED(0x1)
	struct AMFEnvPhysFoliageActor* EnvPhysFoliageActorTemplate; // 0xF0(0x8)
	struct UDataTable* PhysFoliageMeshDT; // 0xF8(0x8)
	uint8_t Pad_0x102[0x16]; // 0x102(0x16)
	struct TArray<struct AMFEnvPhysFoliageActor*> EnvPhysFoliageActorList; // 0x118(0x10)
};

// Object: Class MFEnvironment.MFEnvSceneInfoCharacterComponent
// Size: 0x100 (Inherited: 0xE8)
struct UMFEnvSceneInfoCharacterComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvSceneInfoCharacterComponent, "MFEnvSceneInfoCharacterComponent")

	uint8_t Pad_0xE8[0x4]; // 0xE8(0x4)
	float WindSpeedDown; // 0xEC(0x4)
	float WindSpeedHorizontal; // 0xF0(0x4)
	float WindRotation; // 0xF4(0x4)
	struct FVector2D WindDirection; // 0xF8(0x8)
};

// Object: Class MFEnvironment.MFEnvSceneInfoComponent
// Size: 0x1E0 (Inherited: 0xE8)
struct UMFEnvSceneInfoComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvSceneInfoComponent, "MFEnvSceneInfoComponent")

	struct TArray<struct USkinnedMeshComponent*> CaptureObjectData_RenderThread; // 0xE8(0x10)
	uint8_t Pad_0xF8[0x48]; // 0xF8(0x48)
	struct TArray<struct UMFEnvActorInfoComponent*> ActorInfoArray; // 0x140(0x10)
	uint8_t Pad_0x150[0x30]; // 0x150(0x30)
	struct USceneCaptureComponent2D* HeightMapCaptureComponent; // 0x180(0x8)
	struct USceneCaptureComponent2D* RainDepthCaptureComponent; // 0x188(0x8)
	struct UTextureRenderTarget2D* CaptureCharacterRT; // 0x190(0x8)
	struct UTextureRenderTarget2D* CaptureHeightMapRT; // 0x198(0x8)
	struct UTextureRenderTarget2D* CaptureRainDepthRT; // 0x1A0(0x8)
	struct UMaterialInterface* CaptureHeightMat; // 0x1A8(0x8)
	struct UMaterialInterface* CaptureRainDepthMat; // 0x1B0(0x8)
	float IdleWaveInv; // 0x1B8(0x4)
	float IdleWaveWindow; // 0x1BC(0x4)
	float CaptureExtent; // 0x1C0(0x4)
	float CaptureCharacterRange; // 0x1C4(0x4)
	float CaptureZOffsetMax; // 0x1C8(0x4)
	float CaptureZOffsetMin; // 0x1CC(0x4)
	float CaptureHeightMapUpdateDistance; // 0x1D0(0x4)
	bool DebugUpdateEveryFrame; // 0x1D4(0x1)
	bool enableShowOnlyRainBlockerMode; // 0x1D5(0x1)
	uint8_t Pad_0x1D6[0xA]; // 0x1D6(0xA)
};

// Object: Class MFEnvironment.MFEnvStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFEnvStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvStatics, "MFEnvStatics")

	// Object: Function MFEnvironment.MFEnvStatics.UpdateWindGlobalParams
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x412b704
	// Params: [ Num(4) Size(0x15) ]
	static bool UpdateWindGlobalParams(struct UWorld* InWorld, float InNormalizedWindLevel, struct FVector2D InWindDirection);

	// Object: Function MFEnvironment.MFEnvStatics.GetFirstEnvSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x412ba18
	// Params: [ Num(2) Size(0x10) ]
	static struct AMFEnvSystem* GetFirstEnvSystem(struct UWorld* InWorld);

	// Object: Function MFEnvironment.MFEnvStatics.ClearRenderTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x412b82c
	// Params: [ Num(1) Size(0x8) ]
	static void ClearRenderTarget(struct UTextureRenderTarget2D* InRT);

	// Object: Function MFEnvironment.MFEnvStatics.CharacterIsProne
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x412b8c4
	// Params: [ Num(2) Size(0x9) ]
	static bool CharacterIsProne(struct ACharacter* Character);

	// Object: Function MFEnvironment.MFEnvStatics.BPGetFirstEnvSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x412b970
	// Params: [ Num(2) Size(0x10) ]
	static struct AMFEnvSystem* BPGetFirstEnvSystem(struct UObject* WorldContextObject);
};

// Object: Class MFEnvironment.MFEnvSystem
// Size: 0x398 (Inherited: 0x300)
struct AMFEnvSystem : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFEnvSystem, "MFEnvSystem")

	struct UMFEnvBurnComponent* BurnComponent; // 0x300(0x8)
	uint8_t Pad_0x308[0x8]; // 0x308(0x8)
	struct USceneCaptureComponent2D* HeightMapCaptureComponent; // 0x310(0x8)
	struct USceneCaptureComponent2D* RainDepthCaptureComponent; // 0x318(0x8)
	struct UMFEnvSceneInfoComponent* SceneInfoComponent; // 0x320(0x8)
	struct UMFEnvWaterComponent* WaterComponent; // 0x328(0x8)
	struct UMFEnvTrailComponent* TrailComponent; // 0x330(0x8)
	struct UMFEnvWindComponent* WindComponent; // 0x338(0x8)
	struct UMFEnvMudComponent* MudComponent; // 0x340(0x8)
	struct UMFEnvPhysFoliageComponent* PhysFoliageComponent; // 0x348(0x8)
	struct UMFEnvAutoExposureComponent* AutoExposureComponent; // 0x350(0x8)
	uint8_t Pad_0x358[0x8]; // 0x358(0x8)
	struct UMaterialInstanceDynamic* DebugActorMID; // 0x360(0x8)
	struct APlayerController* CacheLocalPC; // 0x368(0x8)
	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct UMaterialParameterCollection* EnvMPC; // 0x380(0x8)
	bool Debug_TryFindDebugActor; // 0x388(0x1)
	bool Debug_UseAssetTexture; // 0x389(0x1)
	bool Debug_IsMonsterHunterDemo; // 0x38A(0x1)
	bool Debug_ForRenderDocCapture; // 0x38B(0x1)
	uint8_t Pad_0x38C[0xC]; // 0x38C(0xC)

	// Object: Function MFEnvironment.MFEnvSystem.BPTestSetFire
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x412bc08
	// Params: [ Num(0) Size(0x0) ]
	void BPTestSetFire();

	// Object: Function MFEnvironment.MFEnvSystem.BPTestBlowAir
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x412bae0
	// Params: [ Num(3) Size(0x1C) ]
	void BPTestBlowAir(struct FVector InForceOrigin, struct FVector InForceDir, float InMomentum);
};

// Object: Class MFEnvironment.MFEnvTrailComponent
// Size: 0x270 (Inherited: 0xE8)
struct UMFEnvTrailComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvTrailComponent, "MFEnvTrailComponent")

	struct UMaterialInstanceDynamic* TrailRTMID; // 0xE8(0x8)
	struct UMaterialInstanceDynamic* TrailRTCopyMID; // 0xF0(0x8)
	uint8_t Pad_0xF8[0xF8]; // 0xF8(0xF8)
	float Extent; // 0x1F0(0x4)
	float TrailPosExtent; // 0x1F4(0x4)
	float TrailOldScale; // 0x1F8(0x4)
	float ZHeight; // 0x1FC(0x4)
	float ZFootOffset; // 0x200(0x4)
	float Radius; // 0x204(0x4)
	float ReserveTime; // 0x208(0x4)
	float UpdateInv; // 0x20C(0x4)
	struct UTextureRenderTarget2D* TrailRT; // 0x210(0x8)
	struct UTextureRenderTarget2D* TrailRTCopy; // 0x218(0x8)
	struct UTextureRenderTarget2D* TrailPosRT; // 0x220(0x8)
	struct UTextureRenderTarget2D* TrailPosRTCopy; // 0x228(0x8)
	uint8_t Pad_0x230[0x8]; // 0x230(0x8)
	struct TArray<struct FVector4> PlayerInfos_RenderThread; // 0x238(0x10)
	uint8_t Pad_0x248[0x28]; // 0x248(0x28)
};

// Object: Class MFEnvironment.MFEnvWaterComponent
// Size: 0x140 (Inherited: 0xE8)
struct UMFEnvWaterComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvWaterComponent, "MFEnvWaterComponent")

	int32_t SimulateFrame; // 0xE8(0x4)
	float Extent; // 0xEC(0x4)
	struct UTextureRenderTarget2D* WaterHeightRT0; // 0xF0(0x8)
	struct UTextureRenderTarget2D* WaterHeightRT1; // 0xF8(0x8)
	struct UTextureRenderTarget2D* WaterHeightRT2; // 0x100(0x8)
	struct UTextureRenderTarget2D* WaterCompositeRT; // 0x108(0x8)
	uint8_t Pad_0x110[0x30]; // 0x110(0x30)
};

// Object: Class MFEnvironment.MFEnvWindComponent
// Size: 0x270 (Inherited: 0xE8)
struct UMFEnvWindComponent : UMFEnvBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFEnvWindComponent, "MFEnvWindComponent")

	uint8_t Pad_0xE8[0x2C]; // 0xE8(0x2C)
	float SwayTexUpdateInv; // 0x114(0x4)
	float SwayTexUpdateDist; // 0x118(0x4)
	float SwayTexExtent; // 0x11C(0x4)
	struct UTexture2D* SwayParamTex; // 0x120(0x8)
	struct UTextureRenderTarget2D* WindSwayRT; // 0x128(0x8)
	struct UTextureRenderTarget2D* WindSwayRTCopy; // 0x130(0x8)
	float Extent; // 0x138(0x4)
	int32_t IterCountDiffuse; // 0x13C(0x4)
	int32_t IterCountProjection; // 0x140(0x4)
	float ForceDirectMomentum; // 0x144(0x4)
	float ForceDirectExponent; // 0x148(0x4)
	float ForceExplodeMomentum; // 0x14C(0x4)
	float ForceExplodeExponent; // 0x150(0x4)
	float ForceExplodeLastTime; // 0x154(0x4)
	float WindDeltaTimeScale; // 0x158(0x4)
	float WindViscosity; // 0x15C(0x4)
	uint8_t Pad_0x160[0x4]; // 0x160(0x4)
	float WindForce; // 0x164(0x4)
	struct FVector2D WindDirection; // 0x168(0x8)
	float WindMax; // 0x170(0x4)
	float WindSpeedLarge; // 0x174(0x4)
	float WindSpeedDetail; // 0x178(0x4)
	float WindScaleLarge; // 0x17C(0x4)
	float WindScaleDetail; // 0x180(0x4)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	struct ULevelSequence* WindSequence; // 0x188(0x8)
	struct UTextureRenderTarget2D* WindRTV1; // 0x190(0x8)
	struct UTextureRenderTarget2D* WindRTV2; // 0x198(0x8)
	struct UTextureRenderTarget2D* WindRTV3; // 0x1A0(0x8)
	struct UTextureRenderTarget2D* WindRTP1; // 0x1A8(0x8)
	struct UTextureRenderTarget2D* WindRTP2; // 0x1B0(0x8)
	struct UTextureRenderTarget2D* WindRTVelocity; // 0x1B8(0x8)
	struct ULevelSequencePlayer* WindSequencePlayer; // 0x1C0(0x8)
	struct UTextureRenderTarget2D* WindRTV_Slot1_RenderThread; // 0x1C8(0x8)
	struct UTextureRenderTarget2D* WindRTV_Slot2_RenderThread; // 0x1D0(0x8)
	struct UTextureRenderTarget2D* WindRTV_Slot3_RenderThread; // 0x1D8(0x8)
	struct UTextureRenderTarget2D* WindRTP_Slot1_RenderThread; // 0x1E0(0x8)
	struct UTextureRenderTarget2D* WindRTP_Slot2_RenderThread; // 0x1E8(0x8)
	struct UTextureRenderTarget2D* WindRTDebugSlot1_RenderThread; // 0x1F0(0x8)
	struct UTextureRenderTarget2D* WindRTDebugSlot2_RenderThread; // 0x1F8(0x8)
	struct UTextureRenderTarget2D* WindRTJacobi1_RenderThread; // 0x200(0x8)
	struct UTextureRenderTarget2D* WindRTJacobi2_RenderThread; // 0x208(0x8)
	float Jacobi_Alpha; // 0x210(0x4)
	float Jacobi_Beta; // 0x214(0x4)
	uint8_t Pad_0x218[0x58]; // 0x218(0x58)
};

// Object: Class MFEnvironment.MFMudDeformationActor
// Size: 0x348 (Inherited: 0x310)
struct AMFMudDeformationActor : AStaticMeshActor
{
	DEFINE_UE_CLASS_HELPERS(AMFMudDeformationActor, "MFMudDeformationActor")

	int32_t HeightMaskTexelSize; // 0x310(0x4)
	int32_t ScanStepNum; // 0x314(0x4)
	struct FVector LastPos; // 0x318(0xC)
	uint8_t Pad_0x324[0x4]; // 0x324(0x4)
	struct UTexture2D* HeightMaskTex; // 0x328(0x8)
	struct TArray<uint8_t> HeightMaskData; // 0x330(0x10)
	int32_t TexLatentCreateFrameIndexMax; // 0x340(0x4)
	uint8_t Pad_0x344[0x4]; // 0x344(0x4)
};

} // namespace SDK
