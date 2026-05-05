#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: GPDeformable
// Enums: 7
// Structs: 31
// Classes: 23

struct AActor;
enum class ECollisionChannel : uint8_t;
enum class EPerfGearQualityLevel : uint8_t;
enum class ERendererStencilMask : uint8_t;
struct FProcMeshTangent;
struct FTimerHandle;
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
struct UBoxComponent;
struct UCapsuleComponent;
struct UCurveFloat;
struct UCurveLinearColor;
struct UExponentialHeightFogComponent;
struct UInstancedStaticMeshComponent;
struct UMaterial;
struct UMaterialInstance;
struct UMaterialInstanceDynamic;
struct UMeshComponent;
struct UProceduralMeshComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTextureRenderTarget2D;
struct FDeformableEmitParticleConfig;
struct FDeformableEmitParticleDeviceConfig;
struct FGPDeformableEmitVolumeCube;
struct FGPDeformableEmitSphere;
struct FGPDeformableEmiter;
struct FGPDeformableSubEmiter;
struct FSkillSmokeBreakerInfo;
struct FSmokeBreakInfo;
struct FGPDeformableEmitMeshEmitData;
struct FGPDeformableEmitConfig;
struct FGPDeformableNetRuntimeData;
struct FGPDeformableActorConfig;
struct FDeformableConfigAsset;
struct FGPSmokeHoleInfo;
struct FGPDeformableSmokeEmitterMaterialConfig;
struct FGPDeformableFXSmokeConfig;
struct FGPSmokeDyeConfig;
struct FSkillSmokeBreakTakerInfo;
struct FGPDeformableSmokeDataConfig;
struct FGPDeformableSmokeEmitterConfig;
struct FGPDeformableSmokeEmitPointConfig;
struct FSkillSmokeBreakSetting;
struct FSkillSmokeBreakTakerDataConfig;
struct FSkillSmokeBreakerDataConfig;
struct FGPDeformableSmokeRuntimeData;
struct FGPDeformableSmokeEmitter;
struct FGPDeformableSmokeEmitPoint;
struct FGPDeformableSmokePathPoint;
struct FVolumeSmokeTODMatParameter;
struct FSpawnDeformableActorConfig;
struct FUASMovementStack;
struct AGPDeformableActor;
struct UGPDeformableAnimModule;
struct UGPDeformableShapeComponentBase;
struct UGPDeformableBoxComponent;
struct UGPDeformableCubeAnimModule;
struct UGPDeformableCubeRayMarchingComponent;
struct UGPDeformableEmitEntity;
struct UGPDeformableGameStateComponent;
struct UGPDeformableInstancedSmokeComponent;
struct UGPDeformableMeshComponent;
struct UGPDeformableMeshEmitComponent;
struct UGPDeformableMeshLineComponent;
struct UGPDeformablePlaneSmokeComponent;
struct UGPDeformableActorRuntimeData;
struct AGPDeformableSmokeEmitActor;
struct UGPDeformableUnitSphere;
struct UGPDeformableSphereComponent;
struct UGPDeformableVolumeRayMarchingComponent;
struct UGPDeformableVolumeSmokeComponent;
struct AGPUASActor;
struct IGPUASActorInterface;
struct UGPUASMovementComponent;
struct ARangeFinderDigitalDisplayActor;

// Object: Enum GPDeformable.EGPDeformableActorStage
enum class EGPDeformableActorStage : uint8_t
{
	GPDeformableActor_None = 0,
	GPDeformableActor_GeneratePoint = 1,
	GPDeformableActor_GenerateGrid = 2,
	GPDeformableActor_GenerateSmoke = 3,
	GPDeformableActor_MAX = 4
};

// Object: Enum GPDeformable.EGPDeformableStage
enum class EGPDeformableStage : uint8_t
{
	Init = 0,
	Move = 1,
	CheckHeight = 2,
	GenerateMesh = 3,
	Normal = 4,
	EGPDeformableStage_MAX = 5
};

// Object: Enum GPDeformable.ESmokeBreakType
enum class ESmokeBreakType : uint8_t
{
	None = 0,
	SmokeBreaker = 1,
	SmokeBreakTaker = 2,
	ESmokeBreakType_MAX = 3
};

// Object: Enum GPDeformable.ESmokeClassType
enum class ESmokeClassType : uint8_t
{
	None = 0,
	CharacterSkill = 1,
	Vehicle = 2,
	ESmokeClassType_MAX = 3
};

// Object: Enum GPDeformable.ESmokeActorType
enum class ESmokeActorType : uint8_t
{
	FX = 0,
	ISM = 1,
	ESmokeActorType_MAX = 2
};

// Object: Enum GPDeformable.ESmokeState
enum class ESmokeState : uint8_t
{
	None = 0,
	BlowingOut = 1,
	Recovering = 2,
	Generating = 3,
	Disappearing = 4,
	Playing = 5,
	Disappeared = 6,
	Explosion1X = 7,
	Explosion2X = 8,
	ESmokeState_MAX = 9
};

// Object: Enum GPDeformable.EUASMovementMode
enum class EUASMovementMode : uint8_t
{
	UASMovementMode_None = 0,
	UASMovementMode_ClientLocalControlled = 1,
	UASMovementMode_ServerAIControlled = 2,
	UASMovementMode_Server = 3,
	UASMovementMode_Simulate = 4,
	UASMovementMode_MAX = 5
};

// Object: ScriptStruct GPDeformable.DeformableEmitParticleConfig
// Size: 0x40 (Inherited: 0x0)
struct FDeformableEmitParticleConfig
{
	int32_t QualityLevel; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> ShapeComponentClass; // 0x8(0x28)
	struct TArray<struct FDeformableEmitParticleDeviceConfig> DeviceConfigs; // 0x30(0x10)
};

// Object: ScriptStruct GPDeformable.DeformableEmitParticleDeviceConfig
// Size: 0x30 (Inherited: 0x0)
struct FDeformableEmitParticleDeviceConfig
{
	int32_t DeviceLevel; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> ShapeComponentClass; // 0x8(0x28)
};

// Object: ScriptStruct GPDeformable.GPDeformableEmitVolumeCube
// Size: 0x50 (Inherited: 0x0)
struct FGPDeformableEmitVolumeCube
{
	int32_t GridIndex; // 0x0(0x4)
	float InitRadius; // 0x4(0x4)
	float TargetRadius; // 0x8(0x4)
	float BaseDelayTime; // 0xC(0x4)
	float ExpandTime; // 0x10(0x4)
	float ExpandDelayTime; // 0x14(0x4)
	float ExpandLocTime; // 0x18(0x4)
	float ExpandLocDelayTime; // 0x1C(0x4)
	float BaseExpandTime; // 0x20(0x4)
	struct FVector InitOriginCenter; // 0x24(0xC)
	struct FVector ExpandOriginCenter; // 0x30(0xC)
	float LandTime; // 0x3C(0x4)
	struct FVector FinalOriginCenter; // 0x40(0xC)
	float EmitLifeTime; // 0x4C(0x4)
};

// Object: ScriptStruct GPDeformable.GPDeformableEmitSphere
// Size: 0x58 (Inherited: 0x0)
struct FGPDeformableEmitSphere
{
	int32_t GridIndex; // 0x0(0x4)
	float InitRadius; // 0x4(0x4)
	float TargetRadius; // 0x8(0x4)
	int32_t StartVertexIndex; // 0xC(0x4)
	int32_t EndVertexIndex; // 0x10(0x4)
	float BaseDelayTime; // 0x14(0x4)
	float ExpandTime; // 0x18(0x4)
	float ExpandDelayTime; // 0x1C(0x4)
	float ExpandLocTime; // 0x20(0x4)
	float ExpandLocDelayTime; // 0x24(0x4)
	float BaseExpandTime; // 0x28(0x4)
	struct FVector InitOriginCenter; // 0x2C(0xC)
	struct FVector ExpandOriginCenter; // 0x38(0xC)
	float LandTime; // 0x44(0x4)
	struct FVector FinalOriginCenter; // 0x48(0xC)
	float EmitLifeTime; // 0x54(0x4)
};

// Object: ScriptStruct GPDeformable.GPDeformableEmiter
// Size: 0x70 (Inherited: 0x0)
struct FGPDeformableEmiter
{
	float EmitStartDistance; // 0x0(0x4)
	float CurrentEmitDistance; // 0x4(0x4)
	struct UCurveFloat* EmitScaleCurve; // 0x8(0x8)
	struct TArray<struct FGPDeformableEmitMeshEmitData> EmitDataArray; // 0x10(0x10)
	struct TArray<struct FSmokeBreakInfo> SmokeBreakInfo; // 0x20(0x10)
	int32_t CurrentHoleIndex; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FTimerHandle> BurstHoleTimerHandle; // 0x38(0x10)
	struct TArray<struct FTransform> InstancedTransforms; // 0x48(0x10)
	struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x58(0x8)
	struct TArray<struct FGPDeformableSubEmiter> SubEmiters; // 0x60(0x10)
};

// Object: ScriptStruct GPDeformable.GPDeformableSubEmiter
// Size: 0x78 (Inherited: 0x0)
struct FGPDeformableSubEmiter
{
	float EmitStartDistance; // 0x0(0x4)
	float CurrentEmitDistance; // 0x4(0x4)
	struct TArray<struct FGPDeformableEmitMeshEmitData> EmitDataArray; // 0x8(0x10)
	struct TArray<struct FSmokeBreakInfo> SmokeBreakInfo; // 0x18(0x10)
	int32_t CurrentHoleIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FTimerHandle> BurstHoleTimerHandle; // 0x30(0x10)
	struct TArray<struct FTransform> InstancedTransforms; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	struct FVector ZerodBasedCenter; // 0x60(0xC)
	uint8_t bZerodBasedCenterInit : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x70(0x8)
};

// Object: ScriptStruct GPDeformable.SkillSmokeBreakerInfo
// Size: 0x44 (Inherited: 0x0)
struct FSkillSmokeBreakerInfo
{
	uint8_t bBlowInSOL : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bBlowInMP : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bEnableBlowHole : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bEnableBurstOutSmoke : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	float BurstOutDelay; // 0x4(0x4)
	uint8_t bUseDamageDistance : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float BurstDistance; // 0xC(0x4)
	uint8_t bBlowOutTogether : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float BurstSpeed; // 0x14(0x4)
	float MeanwhileBurstDelayTime; // 0x18(0x4)
	float RecoverTime; // 0x1C(0x4)
	float FadeOutTime_HD; // 0x20(0x4)
	float FadeOutTime_MB; // 0x24(0x4)
	float FadeInTime_HD; // 0x28(0x4)
	float FadeInTime_MB; // 0x2C(0x4)
	float RecoverHoleTime; // 0x30(0x4)
	float FadeOutHoleTime_HD; // 0x34(0x4)
	float FadeOutHoleTime_MB; // 0x38(0x4)
	float FadeInHoleTime_HD; // 0x3C(0x4)
	float FadeInHoleTime_MB; // 0x40(0x4)
};

// Object: ScriptStruct GPDeformable.SmokeBreakInfo
// Size: 0x48 (Inherited: 0x0)
struct FSmokeBreakInfo
{
	int32_t SmokeBreakUID; // 0x0(0x4)
	struct FSkillSmokeBreakerInfo SmokeBreakerInfo; // 0x4(0x44)
};

// Object: ScriptStruct GPDeformable.GPDeformableEmitMeshEmitData
// Size: 0xB0 (Inherited: 0x0)
struct FGPDeformableEmitMeshEmitData
{
	struct FVector InitScale; // 0x0(0xC)
	struct FVector TargetScale; // 0xC(0xC)
	float ScaleTime; // 0x18(0x4)
	struct FVector InitLocation; // 0x1C(0xC)
	struct FVector TargetLocation; // 0x28(0xC)
	struct FVector LocationDelta; // 0x34(0xC)
	float CurrnetMoveVelocity; // 0x40(0x4)
	float CurrnetMoveDistance; // 0x44(0x4)
	float TotalMoveDistance; // 0x48(0x4)
	float LocationTime; // 0x4C(0x4)
	struct FRotator InitRotator; // 0x50(0xC)
	struct FRotator TargetRotator; // 0x5C(0xC)
	float RotatorTime; // 0x68(0x4)
	float InitAlphaThresholdValue; // 0x6C(0x4)
	float TargetAlphaThresholdValue; // 0x70(0x4)
	float AlphaThresholdTime; // 0x74(0x4)
	struct FVector InitColorLife; // 0x78(0xC)
	struct FVector TargetColorLife; // 0x84(0xC)
	float FadeInTime; // 0x90(0x4)
	float TickTime; // 0x94(0x4)
	uint8_t IsInTick : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t IsTickFadeIn : 1; // 0x99(0x1), Mask(0x1)
	uint8_t BitPad_0x99_1 : 7; // 0x99(0x1)
	uint8_t IsTickFadeOut : 1; // 0x9A(0x1), Mask(0x1)
	uint8_t BitPad_0x9A_1 : 7; // 0x9A(0x1)
	uint8_t IsTickLocation : 1; // 0x9B(0x1), Mask(0x1)
	uint8_t BitPad_0x9B_1 : 7; // 0x9B(0x1)
	int32_t PileIndex; // 0x9C(0x4)
	ESmokeState LastState; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct FTimerHandle EmitTimerHandle; // 0xA8(0x8)
};

// Object: ScriptStruct GPDeformable.GPDeformableEmitConfig
// Size: 0xF8 (Inherited: 0x0)
struct FGPDeformableEmitConfig
{
	struct FString EmiterName; // 0x0(0x10)
	float MaxEmitDistanceInSingle; // 0x10(0x4)
	uint8_t UseSubEmiter : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t EmitAtFirstPoint : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float DelayEmitTime; // 0x18(0x4)
	float EmitDistance; // 0x1C(0x4)
	int32_t EmitNumberInPile; // 0x20(0x4)
	struct FVector EmitLocationRandomBox; // 0x24(0xC)
	float EmitLocaltionTime; // 0x30(0x4)
	float EmitLocationMaxVelocity; // 0x34(0x4)
	float EmitLocationAcceletation; // 0x38(0x4)
	struct FVector EmitScaleRandomMax; // 0x3C(0xC)
	struct FVector EmitScaleRandomMin; // 0x48(0xC)
	struct FVector EmitInitScale; // 0x54(0xC)
	float EmitScaleDelayTime; // 0x60(0x4)
	float EmitScaleTime; // 0x64(0x4)
	struct UCurveFloat* EmitScaleCurve; // 0x68(0x8)
	struct FRotator EmitRotatorRandomMax; // 0x70(0xC)
	struct FRotator EmitRotatorRandomMin; // 0x7C(0xC)
	float EmitRotatorTime; // 0x88(0x4)
	struct FVector InitColorLife; // 0x8C(0xC)
	struct FVector TargetColorLife; // 0x98(0xC)
	float FadeInTime; // 0xA4(0x4)
	struct FVector FadeOutInitColorLife; // 0xA8(0xC)
	struct FVector FadeOutTargetColorLife; // 0xB4(0xC)
	struct FVector FadeOutTargetScale; // 0xC0(0xC)
	uint8_t EnableFadeoutScale : 1; // 0xCC(0x1), Mask(0x1)
	uint8_t BitPad_0xCC_1 : 7; // 0xCC(0x1)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	float DelayFadeOutTime; // 0xD0(0x4)
	float FadeOutTime; // 0xD4(0x4)
	uint8_t InvisibleInFadeOut : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct UStaticMesh* StaticMesh; // 0xE0(0x8)
	struct UMaterialInstance* MaterialInstance; // 0xE8(0x8)
	int32_t ExplosionFXStencilIndex; // 0xF0(0x4)
	ERendererStencilMask ExplosionFXStencilMask; // 0xF4(0x1)
	uint8_t Pad_0xF5[0x3]; // 0xF5(0x3)
};

// Object: ScriptStruct GPDeformable.GPDeformableNetRuntimeData
// Size: 0x20 (Inherited: 0x0)
struct FGPDeformableNetRuntimeData
{
	struct TArray<struct FVector> MoveOriginPointList; // 0x0(0x10)
	struct TArray<struct FVector> MoveForwardList; // 0x10(0x10)
};

// Object: ScriptStruct GPDeformable.GPDeformableActorConfig
// Size: 0x80 (Inherited: 0x0)
struct FGPDeformableActorConfig
{
	float VoxelSize; // 0x0(0x4)
	int32_t VerticalGridNum; // 0x4(0x4)
	int32_t HonrizontalGridNum; // 0x8(0x4)
	int32_t PileNum; // 0xC(0x4)
	float MoveSize; // 0x10(0x4)
	float GridSizeY; // 0x14(0x4)
	float GridSizeZ; // 0x18(0x4)
	float ForwardGridDistanceScale; // 0x1C(0x4)
	float HonrizontalDistanceScale; // 0x20(0x4)
	float VerticalDistanceScale; // 0x24(0x4)
	float DesignCubeGrideSizeYInHighQuality; // 0x28(0x4)
	float DesignCubeGrideSizeZInHighQuality; // 0x2C(0x4)
	int32_t IteratorGridInFrame; // 0x30(0x4)
	uint8_t EnableAnimation : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	float InitMaxRadius; // 0x38(0x4)
	float TargetRadius; // 0x3C(0x4)
	float ExpandLifeMinTime; // 0x40(0x4)
	float ExpandLifeMaxTime; // 0x44(0x4)
	float ExpandDelayLifeMinTime; // 0x48(0x4)
	float ExpandDelayLifeMaxTime; // 0x4C(0x4)
	float ExpandLocLifeMinTime; // 0x50(0x4)
	float ExpandLocLifeMaxTime; // 0x54(0x4)
	float ExpandDelayLocLifeMinTime; // 0x58(0x4)
	float ExpandDelayLocLifeMaxTime; // 0x5C(0x4)
	float EmitFallMinSpeed; // 0x60(0x4)
	float EmitFallMaxSpeed; // 0x64(0x4)
	float PopDistance; // 0x68(0x4)
	int32_t UseUASZ; // 0x6C(0x4)
	float DelayTimePerPile; // 0x70(0x4)
	int32_t BeginAnimModuleIndex; // 0x74(0x4)
	struct FName MaterialParameterName; // 0x78(0x8)
};

// Object: ScriptStruct GPDeformable.DeformableConfigAsset
// Size: 0x68 (Inherited: 0x0)
struct FDeformableConfigAsset
{
	int32_t Quality; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TSoftObjectPtr<UStaticMesh> MeshAssetPath; // 0x8(0x28)
	struct TSoftObjectPtr<UMaterialInstance> MaterialAssetPath; // 0x30(0x28)
	struct UStaticMesh* MeshAsset; // 0x58(0x8)
	struct UMaterialInstance* MaterialAsset; // 0x60(0x8)
};

// Object: ScriptStruct GPDeformable.GPSmokeHoleInfo
// Size: 0x20 (Inherited: 0x0)
struct FGPSmokeHoleInfo
{
	uint8_t bIsTicking : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FTimerHandle SmokeHoleHandle; // 0x8(0x8)
	struct TArray<int32_t> BurstSmokeIndexArray; // 0x10(0x10)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokeEmitterMaterialConfig
// Size: 0x50 (Inherited: 0x0)
struct FGPDeformableSmokeEmitterMaterialConfig
{
	struct UMaterialInstance* MaterialInstance; // 0x0(0x8)
	struct FName BurstHoleLocationParamName; // 0x8(0x8)
	struct FName BurstHoleRadiusParamName; // 0x10(0x8)
	struct FName BurstHoleLocation2ParamName; // 0x18(0x8)
	struct FName BurstHoleRadius2ParamName; // 0x20(0x8)
	struct FName SmokeColorParamName; // 0x28(0x8)
	struct FName SmokeAlphaParamName; // 0x30(0x8)
	EPerfGearQualityLevel SmokeFullQuality; // 0x38(0x1)
	EPerfGearQualityLevel SmokeNoFadeQuality; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	float PriorityFadeOutTime; // 0x3C(0x4)
	float DelayFadeOutTime; // 0x40(0x4)
	float PriorityFadeInTime; // 0x44(0x4)
	float DelayFadeInTime; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct GPDeformable.GPDeformableFXSmokeConfig
// Size: 0xE0 (Inherited: 0x0)
struct FGPDeformableFXSmokeConfig
{
	struct FName ExplosionFXID; // 0x0(0x8)
	int32_t SmokeBlockNum; // 0x8(0x4)
	struct FName ExplosionFXRadiusName; // 0xC(0x8)
	float BurstCoeff; // 0x14(0x4)
	uint8_t bNeedRotate : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bIsCompParam_HD : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t bIsNeedEditAlphaAdd : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x5]; // 0x1B(0x5)
	struct FGPDeformableSmokeEmitterMaterialConfig MaterialConfig_HD; // 0x20(0x50)
	uint8_t bIsCompParam_MB : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FGPDeformableSmokeEmitterMaterialConfig MaterialConfig_MB; // 0x78(0x50)
	float FadeInTime; // 0xC8(0x4)
	float FadeOutTime; // 0xCC(0x4)
	int32_t ExplosionFXStencilIndex; // 0xD0(0x4)
	ERendererStencilMask ExplosionFXStencilMask; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	float TranslucencySortDistance; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: ScriptStruct GPDeformable.GPSmokeDyeConfig
// Size: 0x68 (Inherited: 0x0)
struct FGPSmokeDyeConfig
{
	struct FName DyeAlphaParamName_HD; // 0x0(0x8)
	struct FName DyeAlphaParamName2_HD; // 0x8(0x8)
	struct FName DyeAlphaParamName_MB; // 0x10(0x8)
	struct FName DyeAlphaParamName2_MB; // 0x18(0x8)
	struct FName DyeColorParamName_HD; // 0x20(0x8)
	struct FName DyeColorParamName_MB; // 0x28(0x8)
	float DyeTickTime_HD; // 0x30(0x4)
	float DyeTickTime_MB; // 0x34(0x4)
	float DyeTickInterval_HD; // 0x38(0x4)
	float DyeTickInterval_MB; // 0x3C(0x4)
	struct UCurveFloat* DyeAlphaCurve; // 0x40(0x8)
	struct UCurveFloat* DyeAlphaCurve2; // 0x48(0x8)
	struct UCurveLinearColor* DyeColorCurve; // 0x50(0x8)
	struct TArray<int32_t> DyeSmokeBuffList; // 0x58(0x10)
};

// Object: ScriptStruct GPDeformable.SkillSmokeBreakTakerInfo
// Size: 0x40 (Inherited: 0x0)
struct FSkillSmokeBreakTakerInfo
{
	uint8_t bBeBlowInSOL_HD : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bBeBlowInSOL_MB : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bBeBlowInMP_HD : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bBeBlowInMP_MB : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bEnableHole : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bEnableBurstOut : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t bBurstOut : 1; // 0x6(0x1), Mask(0x1)
	uint8_t BitPad_0x6_1 : 7; // 0x6(0x1)
	uint8_t Pad_0x7[0x1]; // 0x7(0x1)
	float FadeOutTimeCoeff_HD; // 0x8(0x4)
	float FadeOutTimeCoeff_MB; // 0xC(0x4)
	float RecoverTimeCoeff_HD; // 0x10(0x4)
	float RecoverTimeCoeff_MB; // 0x14(0x4)
	float FadeInTimeCoeff_HD; // 0x18(0x4)
	float FadeInTimeCoeff_MB; // 0x1C(0x4)
	float FadeOutHoleTimeCoeff_HD; // 0x20(0x4)
	float FadeOutHoleTimeCoeff_MB; // 0x24(0x4)
	float RecoverHoleTimeCoeff_HD; // 0x28(0x4)
	float RecoverHoleTimeCoeff_MB; // 0x2C(0x4)
	float FadeInHoleTimeCoeff_HD; // 0x30(0x4)
	float FadeInHoleTimeCoeff_MB; // 0x34(0x4)
	float FadeHoleTickInterval_HD; // 0x38(0x4)
	float FadeHoleTickInterval_MB; // 0x3C(0x4)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokeDataConfig
// Size: 0x1D8 (Inherited: 0x10)
struct FGPDeformableSmokeDataConfig : FDescRowBase
{
	int32_t SmokeId; // 0x10(0x4)
	struct FName AudioId; // 0x14(0x8)
	float SmokeRadius; // 0x1C(0x4)
	uint8_t SmokeAttachGround : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float AttachGroundDownHeight; // 0x24(0x4)
	ESmokeClassType SmokeClassType; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float SmokeHeight; // 0x2C(0x4)
	float SmokeLifeTime; // 0x30(0x4)
	uint8_t bSupportSmokeDye : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FGPSmokeDyeConfig DyeConfig; // 0x38(0x68)
	ESmokeActorType SmokeActorType; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct TArray<struct FGPDeformableSmokeEmitterConfig> EmitterConfigs; // 0xA8(0x10)
	struct FGPDeformableFXSmokeConfig FXConfig; // 0xB8(0xE0)
	struct FSkillSmokeBreakTakerInfo SmokeBreakTakerInfo; // 0x198(0x40)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokeEmitterConfig
// Size: 0x118 (Inherited: 0x0)
struct FGPDeformableSmokeEmitterConfig
{
	float CircleRadius; // 0x0(0x4)
	float PointRadius; // 0x4(0x4)
	float EmitHeight; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UStaticMesh* StaticMesh; // 0x10(0x8)
	struct FGPDeformableSmokeEmitterMaterialConfig MaterialConfig_HD; // 0x18(0x50)
	struct FGPDeformableSmokeEmitterMaterialConfig MaterialConfig_MB; // 0x68(0x50)
	struct UCurveFloat* EmitVelocityCurve; // 0xB8(0x8)
	struct UCurveFloat* EmitFadeInScaleCurve; // 0xC0(0x8)
	struct FVector EmitMaxScale; // 0xC8(0xC)
	float BurstCoeff; // 0xD4(0x4)
	struct FColor EmitStartColor; // 0xD8(0x4)
	struct FColor EmitEndColor; // 0xDC(0x4)
	float EmitFadeInTime_HD; // 0xE0(0x4)
	float EmitFadeInTime_MB; // 0xE4(0x4)
	float EmitFadeInDelay; // 0xE8(0x4)
	float EmitFadeOutTime_HD; // 0xEC(0x4)
	float EmitFadeOutTime_MB; // 0xF0(0x4)
	float EmitFadeOutDelay; // 0xF4(0x4)
	int32_t ExplosionFXStencilIndex; // 0xF8(0x4)
	ERendererStencilMask ExplosionFXStencilMask; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	float TranslucencySortDistance; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct TArray<struct FGPDeformableSmokeEmitPointConfig> EmitPointConfigs; // 0x108(0x10)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokeEmitPointConfig
// Size: 0x60 (Inherited: 0x0)
struct FGPDeformableSmokeEmitPointConfig
{
	struct FVector EmitTargetDir; // 0x0(0xC)
	uint8_t bGenerateMultiPathPoint : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float EmitIntervalDistance; // 0x10(0x4)
	uint8_t bUseSpecializedConfig : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float EmitRadius; // 0x18(0x4)
	struct FVector EmitMaxScale; // 0x1C(0xC)
	struct UCurveFloat* EmitVelocityCurve; // 0x28(0x8)
	struct UCurveFloat* EmitFadeInScaleCurve; // 0x30(0x8)
	float BurstCoeff; // 0x38(0x4)
	struct FColor EmitStartColor; // 0x3C(0x4)
	struct FColor EmitEndColor; // 0x40(0x4)
	float EmitFadeInTime_HD; // 0x44(0x4)
	float EmitFadeInTime_MB; // 0x48(0x4)
	float EmitFadeInDelay; // 0x4C(0x4)
	float EmitFadeOutTime_HD; // 0x50(0x4)
	float EmitFadeOutTime_MB; // 0x54(0x4)
	float EmitFadeOutDelay; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct GPDeformable.SkillSmokeBreakSetting
// Size: 0x14 (Inherited: 0x0)
struct FSkillSmokeBreakSetting
{
	ESmokeBreakType SmokeBreakType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName SmokeBreakID; // 0x4(0x8)
	int32_t SmokeID_SOL; // 0xC(0x4)
	int32_t SmokeID_MP; // 0x10(0x4)
};

// Object: ScriptStruct GPDeformable.SkillSmokeBreakTakerDataConfig
// Size: 0x58 (Inherited: 0x10)
struct FSkillSmokeBreakTakerDataConfig : FDescRowBase
{
	struct FName SmokeBreakTakerID; // 0x10(0x8)
	struct FSkillSmokeBreakTakerInfo SmokeBreakTakerInfo; // 0x18(0x40)
};

// Object: ScriptStruct GPDeformable.SkillSmokeBreakerDataConfig
// Size: 0x60 (Inherited: 0x10)
struct FSkillSmokeBreakerDataConfig : FDescRowBase
{
	struct FName SmokeBreakerID; // 0x10(0x8)
	struct FSkillSmokeBreakerInfo SmokeBreakerInfo; // 0x18(0x44)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokeRuntimeData
// Size: 0x10 (Inherited: 0x0)
struct FGPDeformableSmokeRuntimeData
{
	struct FVector Location; // 0x0(0xC)
	float radius; // 0xC(0x4)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokeEmitter
// Size: 0x38 (Inherited: 0x0)
struct FGPDeformableSmokeEmitter
{
	int32_t EmitterIndex; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
	struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x10(0x8)
	struct TArray<struct FGPDeformableSmokeEmitPoint> PointDatas; // 0x18(0x10)
	struct TArray<int32_t> PathPointIndex; // 0x28(0x10)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokeEmitPoint
// Size: 0x4C (Inherited: 0x0)
struct FGPDeformableSmokeEmitPoint
{
	struct FVector StartLocation; // 0x0(0xC)
	struct FVector TargetLocation; // 0xC(0xC)
	struct FVector CurrentLocation; // 0x18(0xC)
	float InstanceDistance; // 0x24(0x4)
	struct FVector CurrentVelocity; // 0x28(0xC)
	struct FVector CurrentScale; // 0x34(0xC)
	struct FColor CurrentColor; // 0x40(0x4)
	float TickTime; // 0x44(0x4)
	int32_t PathPointNum; // 0x48(0x4)
};

// Object: ScriptStruct GPDeformable.GPDeformableSmokePathPoint
// Size: 0x50 (Inherited: 0x0)
struct FGPDeformableSmokePathPoint
{
	int32_t SmokeIndex; // 0x0(0x4)
	int32_t InstanceIndex; // 0x4(0x4)
	int32_t EmitterIndex; // 0x8(0x4)
	int32_t EmitPointIndex; // 0xC(0x4)
	int32_t DetectBoxIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	uint64_t VoxelID; // 0x18(0x8)
	int32_t ExtinguishBoxIndex; // 0x20(0x4)
	struct FVector PointLocation; // 0x24(0xC)
	float PointRadius; // 0x30(0x4)
	struct FVector PointScale; // 0x34(0xC)
	struct FColor PointColor; // 0x40(0x4)
	float TickTime; // 0x44(0x4)
	int32_t HoleNum; // 0x48(0x4)
	ESmokeState PointState; // 0x4C(0x1)
	ESmokeState PointBurstState; // 0x4D(0x1)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)
};

// Object: ScriptStruct GPDeformable.VolumeSmokeTODMatParameter
// Size: 0x10 (Inherited: 0x0)
struct FVolumeSmokeTODMatParameter
{
	int32_t TODWeatherIndex; // 0x0(0x4)
	struct FName MatParameterName; // 0x4(0x8)
	float Value; // 0xC(0x4)
};

// Object: ScriptStruct GPDeformable.SpawnDeformableActorConfig
// Size: 0x20 (Inherited: 0x0)
struct FSpawnDeformableActorConfig
{
	int32_t GamePlayMode; // 0x0(0x4)
	int32_t MapID; // 0x4(0x4)
	struct FName Desc; // 0x8(0x8)
	struct AGPDeformableActor* DeformableActorClass; // 0x10(0x8)
	struct UGPUASMovementComponent* DeformableActorMovementClass; // 0x18(0x8)
};

// Object: ScriptStruct GPDeformable.UASMovementStack
// Size: 0x1C (Inherited: 0x0)
struct FUASMovementStack
{
	struct FVector OriginLocation; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float MoveTime; // 0x18(0x4)
};

// Object: Class GPDeformable.GPDeformableActor
// Size: 0x718 (Inherited: 0x370)
struct AGPDeformableActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPDeformableActor, "GPDeformableActor")

	struct TArray<uint8_t> VisibleList; // 0x370(0x10)
	struct TArray<struct FVector> SyncMoveList; // 0x380(0x10)
	struct TArray<struct FVector> SyncMoveForwardList; // 0x390(0x10)
	uint8_t bInDisappearing : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)
	uint64_t OwnerPlayerUin; // 0x3A8(0x8)
	uint32_t PseudoRandomSeed; // 0x3B0(0x4)
	uint8_t Pad_0x3B4[0x4]; // 0x3B4(0x4)
	struct AActor* OwnerCharacter; // 0x3B8(0x8)
	struct FGPDeformableNetRuntimeData AuthorityRuntimeData; // 0x3C0(0x20)
	struct UGPDeformableActorRuntimeData* RuntimeData; // 0x3E0(0x8)
	uint8_t bIsLocalControlled : 1; // 0x3E8(0x1), Mask(0x1)
	uint8_t BitPad_0x3E8_1 : 7; // 0x3E8(0x1)
	uint8_t bIsAIControlled : 1; // 0x3E9(0x1), Mask(0x1)
	uint8_t BitPad_0x3E9_1 : 7; // 0x3E9(0x1)
	uint8_t bIsUseVolumetric : 1; // 0x3EA(0x1), Mask(0x1)
	uint8_t BitPad_0x3EA_1 : 7; // 0x3EA(0x1)
	uint8_t Pad_0x3EB[0x1]; // 0x3EB(0x1)
	float AccumulateLifeTime; // 0x3EC(0x4)
	float AccumulateIdleLifeTime; // 0x3F0(0x4)
	float AccumulateDisappearTime; // 0x3F4(0x4)
	EGPDeformableStage DeformableStage; // 0x3F8(0x1)
	uint8_t Pad_0x3F9[0x7]; // 0x3F9(0x7)
	struct UGPDeformableShapeComponentBase* DeformableSmokeComponent; // 0x400(0x8)
	uint64_t LoadHandler; // 0x408(0x8)
	int32_t CurrentVolumeSmokeLevelIndex; // 0x410(0x4)
	uint8_t Pad_0x414[0x4]; // 0x414(0x4)
	struct TArray<struct UBoxComponent*> VisibilityBoxArray; // 0x418(0x10)
	uint8_t Pad_0x428[0x4]; // 0x428(0x4)
	int32_t MovePointCount; // 0x42C(0x4)
	float ToFloorDistance; // 0x430(0x4)
	float radius; // 0x434(0x4)
	float HalfHeight; // 0x438(0x4)
	uint8_t Pad_0x43C[0x4]; // 0x43C(0x4)
	struct UProceduralMeshComponent* GenerateMesh; // 0x440(0x8)
	int32_t IteratorCount; // 0x448(0x4)
	uint8_t bEnableCheckVerticalLine : 1; // 0x44C(0x1), Mask(0x1)
	uint8_t BitPad_0x44C_1 : 7; // 0x44C(0x1)
	uint8_t Pad_0x44D[0x3]; // 0x44D(0x3)
	float BoxCollisionYCoeff; // 0x450(0x4)
	float MaxLifeTime; // 0x454(0x4)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> DeformableShableClass; // 0x458(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> HD_DeformableShapeClass; // 0x480(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> VolumeSmokeClass; // 0x4A8(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> RayMarchingSmokeClass; // 0x4D0(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> ParticleSmokeClass; // 0x4F8(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> EmitParticleSmokeClass; // 0x520(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> EmitParticleSmokeClass_MobileLow; // 0x548(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> EmitParticleSmokeClass_MobileVeryLow; // 0x570(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> EmitParticleSmokeClass_HD; // 0x598(0x28)
	struct TSoftClassPtr<struct UGPDeformableShapeComponentBase*> EmitParticleSmokeClass_HDLow; // 0x5C0(0x28)
	struct TArray<struct FDeformableEmitParticleConfig> EmitParticleClassArray_HD; // 0x5E8(0x10)
	struct TArray<struct FDeformableEmitParticleConfig> EmitParticleClassArray_Mobile; // 0x5F8(0x10)
	float DisappearTime; // 0x608(0x4)
	ECollisionChannel GridTestChannel; // 0x60C(0x1)
	uint8_t Pad_0x60D[0x3]; // 0x60D(0x3)
	struct FGPDeformableActorConfig SmokeParamConfig; // 0x610(0x80)
	struct FCollisionResponseContainer CollisionResponse; // 0x690(0x20)
	uint8_t Pad_0x6B0[0x4]; // 0x6B0(0x4)
	struct FVector MinPoint; // 0x6B4(0xC)
	struct FVector MaxPoint; // 0x6C0(0xC)
	uint8_t Pad_0x6CC[0x4]; // 0x6CC(0x4)
	int32_t SmokeId; // 0x6D0(0x4)
	struct FSkillSmokeBreakTakerInfo SmokeBreakTakerInfo; // 0x6D4(0x40)
	uint8_t Pad_0x714[0x4]; // 0x714(0x4)

	// Object: Function GPDeformable.GPDeformableActor.UnRegisterBoxCollision
	// Flags: [Native|Protected]
	// Offset: 0x905a17c
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterBoxCollision();

	// Object: Function GPDeformable.GPDeformableActor.TickLifeTime
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a0d8
	// Params: [ Num(1) Size(0x4) ]
	void TickLifeTime(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableActor.TickGenerateGrid
	// Flags: [Final|Native|Public]
	// Offset: 0x905a0c4
	// Params: [ Num(0) Size(0x0) ]
	void TickGenerateGrid();

	// Object: Function GPDeformable.GPDeformableActor.SyncDSDataToRuntime
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a0b0
	// Params: [ Num(0) Size(0x0) ]
	void SyncDSDataToRuntime();

	// Object: Function GPDeformable.GPDeformableActor.StoreDSSyncData
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a09c
	// Params: [ Num(0) Size(0x0) ]
	void StoreDSSyncData();

	// Object: Function GPDeformable.GPDeformableActor.SetSmokeStatePlaying
	// Flags: [Native|Public]
	// Offset: 0x905a080
	// Params: [ Num(0) Size(0x0) ]
	void SetSmokeStatePlaying();

	// Object: Function GPDeformable.GPDeformableActor.SetPlayerUIN
	// Flags: [Final|Native|Public]
	// Offset: 0x9059fdc
	// Params: [ Num(1) Size(0x8) ]
	void SetPlayerUIN(uint64_t Uin);

	// Object: Function GPDeformable.GPDeformableActor.SetOwnerActor
	// Flags: [Final|Native|Public]
	// Offset: 0x9059f38
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerActor(struct AActor* InActor);

	// Object: Function GPDeformable.GPDeformableActor.SetMoveTargetByIndex
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x9059dc0
	// Params: [ Num(4) Size(0x20) ]
	void SetMoveTargetByIndex(int32_t Index, const struct FVector& TargetPosition, const struct FVector& Forward, int32_t Source);

	// Object: Function GPDeformable.GPDeformableActor.SetMoveTarget
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x9059cc8
	// Params: [ Num(2) Size(0x18) ]
	void SetMoveTarget(const struct FVector& TargetPosition, const struct FVector& Forward);

	// Object: Function GPDeformable.GPDeformableActor.ServerSetMoveTargetByIndex
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x9059b94
	// Params: [ Num(3) Size(0x1C) ]
	void ServerSetMoveTargetByIndex(int32_t Index, const struct FVector& TargetPosition, const struct FVector& Forward);

	// Object: Function GPDeformable.GPDeformableActor.RegisterBoxCollision
	// Flags: [Native|Protected|HasDefaults]
	// Offset: 0x9059a24
	// Params: [ Num(4) Size(0x30) ]
	void RegisterBoxCollision(struct FVector Center, struct FVector Forward, struct FVector Right, struct FVector Extent);

	// Object: Function GPDeformable.GPDeformableActor.ProcessSyncMoveList
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x9059914
	// Params: [ Num(2) Size(0x20) ]
	void ProcessSyncMoveList(const struct TArray<struct FVector>& InSyncMoveList, const struct TArray<struct FVector>& InSyncMoveForwardList);

	// Object: Function GPDeformable.GPDeformableActor.OnVolumeSmokeIndexChange
	// Flags: [Native|Public]
	// Offset: 0x9059868
	// Params: [ Num(1) Size(0x4) ]
	void OnVolumeSmokeIndexChange(int32_t CurrentLevelIndex);

	// Object: Function GPDeformable.GPDeformableActor.OnRep_VisibleList
	// Flags: [Final|Native|Public]
	// Offset: 0x9059854
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_VisibleList();

	// Object: Function GPDeformable.GPDeformableActor.OnRep_SyncMoveList
	// Flags: [Final|Native|Protected]
	// Offset: 0x9059840
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SyncMoveList();

	// Object: Function GPDeformable.GPDeformableActor.OnRep_InDisappearing
	// Flags: [Final|Native|Protected]
	// Offset: 0x905982c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_InDisappearing();

	// Object: Function GPDeformable.GPDeformableActor.OnRep_AuthorityRuntimeData
	// Flags: [Final|Native|Protected]
	// Offset: 0x109db1c8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AuthorityRuntimeData();

	// Object: Function GPDeformable.GPDeformableActor.OnFinishCreate
	// Flags: [Native|Protected]
	// Offset: 0x9059810
	// Params: [ Num(0) Size(0x0) ]
	void OnFinishCreate();

	// Object: Function GPDeformable.GPDeformableActor.OnDeformableSmokeComponentLoaded
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x9059748
	// Params: [ Num(1) Size(0x18) ]
	void OnDeformableSmokeComponentLoaded(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function GPDeformable.GPDeformableActor.OnBoxCollisionInit
	// Flags: [Final|Native|Protected]
	// Offset: 0x90596a4
	// Params: [ Num(1) Size(0x8) ]
	void OnBoxCollisionInit(struct UBoxComponent* BoxComponent);

	// Object: Function GPDeformable.GPDeformableActor.OnBeginCreate
	// Flags: [Native|Protected]
	// Offset: 0x9059688
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginCreate();

	// Object: Function GPDeformable.GPDeformableActor.MulticastMoveTargetByIndex
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate]
	// Offset: 0xf27e06c
	// Params: [ Num(3) Size(0x1C) ]
	void MulticastMoveTargetByIndex(int32_t Index, struct FVector TargetPosition, struct FVector Forward);

	// Object: Function GPDeformable.GPDeformableActor.MulticastInDisappearing
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetValidate]
	// Offset: 0x106bca78
	// Params: [ Num(1) Size(0x1) ]
	void MulticastInDisappearing(uint8_t isInDisappearing);

	// Object: Function GPDeformable.GPDeformableActor.MulticastDrawBox
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate]
	// Offset: 0x9059490
	// Params: [ Num(5) Size(0x2C) ]
	void MulticastDrawBox(int32_t Index, struct FVector Center, struct FVector Extent, struct FVector Forward, float Duration);

	// Object: Function GPDeformable.GPDeformableActor.LineTestOnly
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x9059384
	// Params: [ Num(3) Size(0x19) ]
	uint8_t LineTestOnly(const struct FVector& LineStart, const struct FVector& LineEnd);

	// Object: Function GPDeformable.GPDeformableActor.LineTest
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x905922c
	// Params: [ Num(4) Size(0x1D) ]
	uint8_t LineTest(const struct FVector& LineStart, const struct FVector& LineEnd, float& hitTime);

	// Object: Function GPDeformable.GPDeformableActor.IsVeryLowQuality
	// Flags: [Final|Native|Protected]
	// Offset: 0x90591f4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVeryLowQuality();

	// Object: Function GPDeformable.GPDeformableActor.IsUseVolumetric
	// Flags: [Final|Native|Public]
	// Offset: 0x90591bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUseVolumetric();

	// Object: Function GPDeformable.GPDeformableActor.IsSmokeWallLowQuality
	// Flags: [Final|Native|Protected]
	// Offset: 0x9059184
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSmokeWallLowQuality();

	// Object: Function GPDeformable.GPDeformableActor.IsReady
	// Flags: [Final|Native|Public]
	// Offset: 0x905914c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsReady();

	// Object: Function GPDeformable.GPDeformableActor.IsLowQuality
	// Flags: [Final|Native|Protected]
	// Offset: 0x9059114
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLowQuality();

	// Object: Function GPDeformable.GPDeformableActor.IsBuildingMoveList
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x90590dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsBuildingMoveList();

	// Object: Function GPDeformable.GPDeformableActor.InSideSmoke
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x9059018
	// Params: [ Num(2) Size(0xD) ]
	uint8_t InSideSmoke(const struct FVector& OriginBaseLoc);

	// Object: Function GPDeformable.GPDeformableActor.InitSmokeData
	// Flags: [Native|Public]
	// Offset: 0x9058ffc
	// Params: [ Num(0) Size(0x0) ]
	void InitSmokeData();

	// Object: Function GPDeformable.GPDeformableActor.InitRuntimeData
	// Flags: [Final|Native|Protected]
	// Offset: 0x9058fe8
	// Params: [ Num(0) Size(0x0) ]
	void InitRuntimeData();

	// Object: Function GPDeformable.GPDeformableActor.InitPseudoRandomSeed
	// Flags: [Final|Native|Protected]
	// Offset: 0x9058fd4
	// Params: [ Num(0) Size(0x0) ]
	void InitPseudoRandomSeed();

	// Object: Function GPDeformable.GPDeformableActor.InitDeformableSmokeComponent
	// Flags: [Final|Native|Protected]
	// Offset: 0x9058fc0
	// Params: [ Num(0) Size(0x0) ]
	void InitDeformableSmokeComponent();

	// Object: Function GPDeformable.GPDeformableActor.GetPileMoveSizeX
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9058f8c
	// Params: [ Num(1) Size(0x4) ]
	float GetPileMoveSizeX();

	// Object: Function GPDeformable.GPDeformableActor.GetGridPileNum
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9058f58
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetGridPileNum();

	// Object: Function GPDeformable.GPDeformableActor.GetEmitParticleClassPath
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x9058eb4
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetEmitParticleClassPath();

	// Object: Function GPDeformable.GPDeformableActor.GetCharacterOwner
	// Flags: [Final|Native|Public]
	// Offset: 0x9058e80
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetCharacterOwner();

	// Object: Function GPDeformable.GPDeformableActor.GenerateNewSection
	// Flags: [Final|Native|Public]
	// Offset: 0x9058e6c
	// Params: [ Num(0) Size(0x0) ]
	void GenerateNewSection();

	// Object: Function GPDeformable.GPDeformableActor.GenerateBottomAndTop
	// Flags: [Final|Native|Public]
	// Offset: 0x9058e58
	// Params: [ Num(0) Size(0x0) ]
	void GenerateBottomAndTop();

	// Object: Function GPDeformable.GPDeformableActor.CutBySphere
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x9058d20
	// Params: [ Num(3) Size(0x11) ]
	void CutBySphere(struct FVector& Center, float radius, uint8_t& Result);

	// Object: Function GPDeformable.GPDeformableActor.CreateServerVoxel
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x9058b88
	// Params: [ Num(4) Size(0x30) ]
	void CreateServerVoxel(struct FVector& Center, struct FVector& Forward, struct FVector& Right, struct FVector& Extent);

	// Object: Function GPDeformable.GPDeformableActor.CreateBoxCollision
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x9058a64
	// Params: [ Num(3) Size(0x24) ]
	void CreateBoxCollision(struct FVector Center, struct FVector Forward, struct FVector Extent);

	// Object: Function GPDeformable.GPDeformableActor.ClearServerVoxel
	// Flags: [Native|Protected]
	// Offset: 0x9058a48
	// Params: [ Num(0) Size(0x0) ]
	void ClearServerVoxel();

	// Object: Function GPDeformable.GPDeformableActor.ClearBoxCollision
	// Flags: [Final|Native|Protected]
	// Offset: 0x9058a34
	// Params: [ Num(0) Size(0x0) ]
	void ClearBoxCollision();

	// Object: Function GPDeformable.GPDeformableActor.CancelComponentLoad
	// Flags: [Final|Native|Protected]
	// Offset: 0x9058a20
	// Params: [ Num(0) Size(0x0) ]
	void CancelComponentLoad();

	// Object: Function GPDeformable.GPDeformableActor.CalculateActorsInside
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x9058964
	// Params: [ Num(1) Size(0x10) ]
	void CalculateActorsInside(struct TArray<struct TWeakObjectPtr<struct AActor>>& InsideSmokeActorListResult);

	// Object: Function GPDeformable.GPDeformableActor.ApplyFinishEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x9058950
	// Params: [ Num(0) Size(0x0) ]
	void ApplyFinishEvent();
};

// Object: Class GPDeformable.GPDeformableAnimModule
// Size: 0x40 (Inherited: 0x28)
struct UGPDeformableAnimModule : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableAnimModule, "GPDeformableAnimModule")

	struct UGPDeformableSphereComponent* DeformableSphereComponent; // 0x28(0x8)
	struct TArray<struct FGPDeformableEmitSphere> EmitList; // 0x30(0x10)
};

// Object: Class GPDeformable.GPDeformableShapeComponentBase
// Size: 0x310 (Inherited: 0xF8)
struct UGPDeformableShapeComponentBase : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableShapeComponentBase, "GPDeformableShapeComponentBase")

	uint8_t Pad_0xF8[0x98]; // 0xF8(0x98)
	int32_t QualitySettingIndex; // 0x190(0x4)
	int32_t VolumeSmokeLevelIndex; // 0x194(0x4)
	int32_t CurrentTODWeatherID; // 0x198(0x4)
	uint8_t Pad_0x19C[0x94]; // 0x19C(0x94)
	struct UProceduralMeshComponent* GenerateMesh; // 0x230(0x8)
	struct UGPDeformableActorRuntimeData* RuntimeDataPtr; // 0x238(0x8)
	float VoxelSize; // 0x240(0x4)
	int32_t VerticalGridNum; // 0x244(0x4)
	int32_t HonrizontalGridNum; // 0x248(0x4)
	int32_t PileNum; // 0x24C(0x4)
	float MoveSize; // 0x250(0x4)
	float GridSizeY; // 0x254(0x4)
	float GridSizeZ; // 0x258(0x4)
	float ForwardGridDistanceScale; // 0x25C(0x4)
	float HonrizontalDistanceScale; // 0x260(0x4)
	float VerticalDistanceScale; // 0x264(0x4)
	float DesignCubeGrideSizeYInHighQuality; // 0x268(0x4)
	float DesignCubeGrideSizeZInHighQuality; // 0x26C(0x4)
	struct TSoftObjectPtr<UMaterialInstance> DefaultMaterialPath; // 0x270(0x28)
	struct TSoftObjectPtr<UStaticMesh> DefaultMeshAssetPath; // 0x298(0x28)
	struct UMaterialInstance* RuntimeDefaultMatInst; // 0x2C0(0x8)
	struct UMaterialInstanceDynamic* CacheMID; // 0x2C8(0x8)
	struct FSkillSmokeBreakTakerInfo SmokeInfo; // 0x2D0(0x40)

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.SetPointState
	// Flags: [Native|Public]
	// Offset: 0x905e49c
	// Params: [ Num(2) Size(0x5) ]
	void SetPointState(int32_t Index, ESmokeState NewState);

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.ReadVibilityList
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x905e3cc
	// Params: [ Num(2) Size(0x11) ]
	uint8_t ReadVibilityList(struct TArray<uint8_t>& InList);

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.OnCreateFinished
	// Flags: [Native|Protected]
	// Offset: 0x905e3b0
	// Params: [ Num(0) Size(0x0) ]
	void OnCreateFinished();

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.IsRunningAnimation
	// Flags: [Native|Public]
	// Offset: 0x905e370
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRunningAnimation();

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.InitRuntimeData
	// Flags: [Native|Public]
	// Offset: 0x905e2c4
	// Params: [ Num(1) Size(0x8) ]
	void InitRuntimeData(struct UGPDeformableActorRuntimeData* InDataPtr);

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.GenerateNewSection
	// Flags: [Native|Public]
	// Offset: 0x905e2a8
	// Params: [ Num(0) Size(0x0) ]
	void GenerateNewSection();

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.CutBySphere
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x905e168
	// Params: [ Num(3) Size(0x11) ]
	void CutBySphere(struct FVector& Center, float radius, uint8_t& Result);

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.CheckCanSetSmokeStatePlaying
	// Flags: [Native|Public]
	// Offset: 0x905e128
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckCanSetSmokeStatePlaying();

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.CheckBurst
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x905dec8
	// Params: [ Num(6) Size(0xA0) ]
	void CheckBurst(struct FVector BurstLocation, float BurstRadius, float BurstDelay, int32_t SmokeIndex, struct FSmokeBreakInfo& SmokeBreakerInfo, struct FSkillSmokeBreakTakerInfo& SmokeBreakTakerInfo);

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.BeginDisappearing
	// Flags: [Native|Public]
	// Offset: 0x905deac
	// Params: [ Num(0) Size(0x0) ]
	void BeginDisappearing();

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.ApplyVibilityList
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x905dddc
	// Params: [ Num(2) Size(0x11) ]
	uint8_t ApplyVibilityList(struct TArray<uint8_t>& InList);

	// Object: Function GPDeformable.GPDeformableShapeComponentBase.AddGridDectionTree
	// Flags: [Final|Native|Protected]
	// Offset: 0x905dd38
	// Params: [ Num(1) Size(0x4) ]
	void AddGridDectionTree(int32_t GridIndex);
};

// Object: Class GPDeformable.GPDeformableBoxComponent
// Size: 0x330 (Inherited: 0x310)
struct UGPDeformableBoxComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableBoxComponent, "GPDeformableBoxComponent")

	float DensityTestSize; // 0x310(0x4)
	uint8_t Pad_0x314[0x1C]; // 0x314(0x1C)
};

// Object: Class GPDeformable.GPDeformableCubeAnimModule
// Size: 0x70 (Inherited: 0x28)
struct UGPDeformableCubeAnimModule : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableCubeAnimModule, "GPDeformableCubeAnimModule")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
	struct UGPDeformableShapeComponentBase* ShapeComponent; // 0x58(0x8)
	struct TArray<struct FGPDeformableEmitVolumeCube> EmitList; // 0x60(0x10)
};

// Object: Class GPDeformable.GPDeformableCubeRayMarchingComponent
// Size: 0x3E0 (Inherited: 0x310)
struct UGPDeformableCubeRayMarchingComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableCubeRayMarchingComponent, "GPDeformableCubeRayMarchingComponent")

	uint8_t Pad_0x310[0x8]; // 0x310(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0x318(0x8)
	int32_t RenderTextureSizeX; // 0x320(0x4)
	int32_t RenderTextureSizeY; // 0x324(0x4)
	float PaintDensity; // 0x328(0x4)
	float PaintRadius; // 0x32C(0x4)
	float VolumeDistanceToEdge; // 0x330(0x4)
	float CubeScale; // 0x334(0x4)
	struct UMaterial* PaintMaterial; // 0x338(0x8)
	struct UMaterialInstance* RayMarchingMaterial; // 0x340(0x8)
	struct UStaticMesh* BaseMesh; // 0x348(0x8)
	float BoxScale; // 0x350(0x4)
	float XYFrames; // 0x354(0x4)
	struct UStaticMeshComponent* StaticComponent; // 0x358(0x8)
	struct FVector TillingBaseBox; // 0x360(0xC)
	struct FVector TillingBaseValue; // 0x36C(0xC)
	int32_t FarSteps; // 0x378(0x4)
	int32_t NearSteps; // 0x37C(0x4)
	float FarDistanceForSteps; // 0x380(0x4)
	int32_t CurrentRayMarchingSteps; // 0x384(0x4)
	struct UMaterialInstanceDynamic* DynamicRayMarchingMaterial; // 0x388(0x8)
	struct FVector ZeroBasedAABBCenter; // 0x390(0xC)
	uint8_t bInitGenerating : 1; // 0x39C(0x1), Mask(0x1)
	uint8_t BitPad_0x39C_1 : 7; // 0x39C(0x1)
	uint8_t bIsCreateCube : 1; // 0x39D(0x1), Mask(0x1)
	uint8_t BitPad_0x39D_1 : 7; // 0x39D(0x1)
	uint8_t Pad_0x39E[0x2]; // 0x39E(0x2)
	struct UTextureRenderTarget2D* CurrentRenderTarget; // 0x3A0(0x8)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x3A8(0x8)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x3B0(0x8)
	struct UMaterialInstance* CurrentHQCubeMaterialInstance; // 0x3B8(0x8)
	struct TArray<struct UMaterialInstance*> CurrentMaterialInstanceArray; // 0x3C0(0x10)
	struct TArray<struct UStaticMesh*> CurrentMeshArray; // 0x3D0(0x10)

	// Object: Function GPDeformable.GPDeformableCubeRayMarchingComponent.TickRecalculateStep
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a450
	// Params: [ Num(0) Size(0x0) ]
	void TickRecalculateStep();

	// Object: Function GPDeformable.GPDeformableCubeRayMarchingComponent.TickGenerateRayMarching
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a43c
	// Params: [ Num(0) Size(0x0) ]
	void TickGenerateRayMarching();

	// Object: Function GPDeformable.GPDeformableCubeRayMarchingComponent.StartRecalculateStepTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a428
	// Params: [ Num(0) Size(0x0) ]
	void StartRecalculateStepTimer();

	// Object: Function GPDeformable.GPDeformableCubeRayMarchingComponent.GenerateRayMarching
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a414
	// Params: [ Num(0) Size(0x0) ]
	void GenerateRayMarching();

	// Object: Function GPDeformable.GPDeformableCubeRayMarchingComponent.ClearRuntimeAsset
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a400
	// Params: [ Num(0) Size(0x0) ]
	void ClearRuntimeAsset();

	// Object: Function GPDeformable.GPDeformableCubeRayMarchingComponent.ClearRecalculateStepTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a3ec
	// Params: [ Num(0) Size(0x0) ]
	void ClearRecalculateStepTimer();
};

// Object: Class GPDeformable.GPDeformableEmitEntity
// Size: 0x28 (Inherited: 0x28)
struct UGPDeformableEmitEntity : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableEmitEntity, "GPDeformableEmitEntity")
};

// Object: Class GPDeformable.GPDeformableGameStateComponent
// Size: 0x1D0 (Inherited: 0xF8)
struct UGPDeformableGameStateComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableGameStateComponent, "GPDeformableGameStateComponent")

	float OriginVolumetricFogGridSizeZ; // 0xF8(0x4)
	float OriginVolumetricFogGridSizeXY; // 0xFC(0x4)
	int32_t TemporalReprojection; // 0x100(0x4)
	float LastRecordVolumetricViewDistance; // 0x104(0x4)
	uint8_t bDynamicSetVolumetricViewDistance : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t bIsLocalFocusInside : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x2]; // 0x10A(0x2)
	struct TWeakObjectPtr<struct UExponentialHeightFogComponent> HeightFogComponent; // 0x10C(0x8)
	uint8_t bIsLocalControlledReleaseUAS : 1; // 0x114(0x1), Mask(0x1)
	uint8_t BitPad_0x114_1 : 7; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct TArray<struct AGPDeformableActor*> DeformableActors; // 0x118(0x10)
	struct TArray<struct AGPDeformableActor*> VolumeSmokeActors; // 0x128(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> PreInsideActorList; // 0x138(0x10)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct TWeakObjectPtr<struct AGPDeformableActor>> CharacterInSmokeMap; // 0x148(0x50)
	struct TArray<struct TWeakObjectPtr<struct AActor>> TempActorList; // 0x198(0x10)
	int32_t InSmokeWallBuffId; // 0x1A8(0x4)
	float TickActorInSideTime; // 0x1AC(0x4)
	uint8_t bOnlyCheckActorInsideInDS : 1; // 0x1B0(0x1), Mask(0x1)
	uint8_t BitPad_0x1B0_1 : 7; // 0x1B0(0x1)
	uint8_t Pad_0x1B1[0x3]; // 0x1B1(0x3)
	float TickAccumulateTime; // 0x1B4(0x4)
	uint8_t bTickCheckActors : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t BitPad_0x1B8_1 : 7; // 0x1B8(0x1)
	uint8_t bTickVolumeInFront : 1; // 0x1B9(0x1), Mask(0x1)
	uint8_t BitPad_0x1B9_1 : 7; // 0x1B9(0x1)
	uint8_t Pad_0x1BA[0x2]; // 0x1BA(0x2)
	int32_t CurrentInFrontVolumeCount; // 0x1BC(0x4)
	int32_t LastCalcFrontVolumeFrame; // 0x1C0(0x4)
	uint8_t Pad_0x1C4[0x4]; // 0x1C4(0x4)
	struct FTimerHandle VolumeSmokeLevelTimer; // 0x1C8(0x8)

	// Object: Function GPDeformable.GPDeformableGameStateComponent.UpdateVolumetricViewDistance
	// Flags: [Final|Native|Public]
	// Offset: 0x905af34
	// Params: [ Num(0) Size(0x0) ]
	void UpdateVolumetricViewDistance();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.UpdateVolumetricFogGridSizeZ
	// Flags: [Final|Native|Public]
	// Offset: 0x905af20
	// Params: [ Num(0) Size(0x0) ]
	void UpdateVolumetricFogGridSizeZ();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.UpdateDeformableActor
	// Flags: [Final|Native|Public]
	// Offset: 0x905ae7c
	// Params: [ Num(1) Size(0x8) ]
	void UpdateDeformableActor(struct AGPDeformableActor* InDeformableActor);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.UnRegisterDeformableActor
	// Flags: [Final|Native|Public]
	// Offset: 0x905add8
	// Params: [ Num(1) Size(0x8) ]
	void UnRegisterDeformableActor(struct AGPDeformableActor* InDeformableActor);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.TickVolumeSmokeInView
	// Flags: [Final|Native|Protected]
	// Offset: 0x905adc4
	// Params: [ Num(0) Size(0x0) ]
	void TickVolumeSmokeInView();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.TickActorInSide
	// Flags: [Final|Native|Protected]
	// Offset: 0x905ad20
	// Params: [ Num(1) Size(0x4) ]
	void TickActorInSide(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.SetOverrideVolumetricViewDistance
	// Flags: [Final|Native|Public]
	// Offset: 0x905ac7c
	// Params: [ Num(1) Size(0x4) ]
	void SetOverrideVolumetricViewDistance(float ViewDistance);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.RegisterDeformableActor
	// Flags: [Final|Native|Public]
	// Offset: 0x905abd8
	// Params: [ Num(1) Size(0x8) ]
	void RegisterDeformableActor(struct AGPDeformableActor* InDeformableActor);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.ProcessLocalPlayerOutSmokeWall
	// Flags: [Final|Native|Public]
	// Offset: 0x905ab34
	// Params: [ Num(1) Size(0x8) ]
	void ProcessLocalPlayerOutSmokeWall(struct AActor* LocalActor);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.ProcessLocalPlayerInSmokeWall
	// Flags: [Final|Native|Public]
	// Offset: 0x905aa90
	// Params: [ Num(1) Size(0x8) ]
	void ProcessLocalPlayerInSmokeWall(struct AActor* LocalActor);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.OnVolumeSmokeLevelTimerCallBack
	// Flags: [Native|Protected]
	// Offset: 0x905aa74
	// Params: [ Num(0) Size(0x0) ]
	void OnVolumeSmokeLevelTimerCallBack();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.OnLocalControlledEndReleaseUAS
	// Flags: [Final|Native|Public]
	// Offset: 0x905aa60
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalControlledEndReleaseUAS();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.OnLocalControlledBeginReleaseUAS
	// Flags: [Final|Native|Public]
	// Offset: 0x905aa4c
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalControlledBeginReleaseUAS();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.LineTestDeformableActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x905a8f4
	// Params: [ Num(4) Size(0x1D) ]
	uint8_t LineTestDeformableActor(const struct FVector& LineStart, const struct FVector& LineEnd, float& hitTime);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.IsInsideDeformableActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x905a838
	// Params: [ Num(2) Size(0xD) ]
	uint8_t IsInsideDeformableActor(const struct FVector& InPos);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.InitVolumetricFogGridSizeZ
	// Flags: [Final|Native|Public]
	// Offset: 0x905a824
	// Params: [ Num(0) Size(0x0) ]
	void InitVolumetricFogGridSizeZ();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.InitHeightFogComponent
	// Flags: [Final|Native|Public]
	// Offset: 0x905a810
	// Params: [ Num(0) Size(0x0) ]
	void InitHeightFogComponent();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.HasVolumetricDeformableActor
	// Flags: [Native|Protected]
	// Offset: 0x905a7d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasVolumetricDeformableActor();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.GetVolumeSmokeLevelIndex
	// Flags: [Native|Public]
	// Offset: 0x905a794
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVolumeSmokeLevelIndex();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.GetInSmokeActorOwner
	// Flags: [Final|Native|Public]
	// Offset: 0x905a6e8
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetInSmokeActorOwner(struct AActor* InActor);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.GetDeformableActorNum
	// Flags: [Final|Native|Public]
	// Offset: 0x905a6b4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDeformableActorNum();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.GetCurrentQuality
	// Flags: [Native|Public]
	// Offset: 0x905a678
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentQuality();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.Explode
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x905a598
	// Params: [ Num(2) Size(0x10) ]
	void Explode(struct FVector centor, float radius);

	// Object: Function GPDeformable.GPDeformableGameStateComponent.ClearAllCharacterBuff
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a584
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllCharacterBuff();

	// Object: Function GPDeformable.GPDeformableGameStateComponent.ClearActorInside
	// Flags: [Final|Native|Protected]
	// Offset: 0x905a570
	// Params: [ Num(0) Size(0x0) ]
	void ClearActorInside();
};

// Object: Class GPDeformable.GPDeformableInstancedSmokeComponent
// Size: 0x420 (Inherited: 0x310)
struct UGPDeformableInstancedSmokeComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableInstancedSmokeComponent, "GPDeformableInstancedSmokeComponent")

	uint8_t bInitGenerating : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t bIsGeneratingMesh : 1; // 0x311(0x1), Mask(0x1)
	uint8_t BitPad_0x311_1 : 7; // 0x311(0x1)
	uint8_t Pad_0x312[0x6]; // 0x312(0x6)
	uint8_t bIsCreateCube : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t Pad_0x319[0xB]; // 0x319(0xB)
	uint8_t bIsTickAnimation : 1; // 0x324(0x1), Mask(0x1)
	uint8_t BitPad_0x324_1 : 7; // 0x324(0x1)
	uint8_t Pad_0x325[0x3]; // 0x325(0x3)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x328(0x8)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x330(0x8)
	uint8_t bRenderInstance : 1; // 0x338(0x1), Mask(0x1)
	uint8_t BitPad_0x338_1 : 7; // 0x338(0x1)
	uint8_t Pad_0x339[0x7]; // 0x339(0x7)
	struct UGPDeformableCubeAnimModule* AnimModule; // 0x340(0x8)
	struct UInstancedStaticMeshComponent* InstancedComponent; // 0x348(0x8)
	struct TArray<struct FTransform> InstancedTransforms; // 0x350(0x10)
	struct TArray<struct FDeformableConfigAsset> ConfigAssetArray; // 0x360(0x10)
	struct TArray<struct UMeshComponent*> MeshList; // 0x370(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstanceList; // 0x380(0x10)
	int32_t IteratorMeshInFrame; // 0x390(0x4)
	int32_t IteratorCreateCubeInFrame; // 0x394(0x4)
	int32_t IteratorDelayNewstMoveIndex; // 0x398(0x4)
	float SizeRandomMin; // 0x39C(0x4)
	float SizeRandomMax; // 0x3A0(0x4)
	struct FVector CubeRandomOffsetMin; // 0x3A4(0xC)
	struct FVector CubeRandomOffsetMax; // 0x3B0(0xC)
	float ForwardSizeScale; // 0x3BC(0x4)
	float MaxWidthSize; // 0x3C0(0x4)
	uint8_t EnableGeneratingInFlying : 1; // 0x3C4(0x1), Mask(0x1)
	uint8_t BitPad_0x3C4_1 : 7; // 0x3C4(0x1)
	uint8_t EnableAnimation : 1; // 0x3C5(0x1), Mask(0x1)
	uint8_t BitPad_0x3C5_1 : 7; // 0x3C5(0x1)
	uint8_t Pad_0x3C6[0x2]; // 0x3C6(0x2)
	float InitMaxRadius; // 0x3C8(0x4)
	float TargetRadius; // 0x3CC(0x4)
	float ExpandLifeMinTime; // 0x3D0(0x4)
	float ExpandLifeMaxTime; // 0x3D4(0x4)
	float ExpandDelayLifeMinTime; // 0x3D8(0x4)
	float ExpandDelayLifeMaxTime; // 0x3DC(0x4)
	float ExpandLocLifeMinTime; // 0x3E0(0x4)
	float ExpandLocLifeMaxTime; // 0x3E4(0x4)
	float ExpandDelayLocLifeMinTime; // 0x3E8(0x4)
	float ExpandDelayLocLifeMaxTime; // 0x3EC(0x4)
	float EmitFallMinSpeed; // 0x3F0(0x4)
	float EmitFallMaxSpeed; // 0x3F4(0x4)
	float PopDistance; // 0x3F8(0x4)
	int32_t UseUASZ; // 0x3FC(0x4)
	float DelayTimePerPile; // 0x400(0x4)
	int32_t BeginAnimModuleIndex; // 0x404(0x4)
	struct FName MaterialParameterName; // 0x408(0x8)
	int32_t ParameterCustomDataIndex; // 0x410(0x4)
	uint8_t Pad_0x414[0xC]; // 0x414(0xC)
};

// Object: Class GPDeformable.GPDeformableMeshComponent
// Size: 0x360 (Inherited: 0x310)
struct UGPDeformableMeshComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableMeshComponent, "GPDeformableMeshComponent")

	float DensityTestSize; // 0x310(0x4)
	float ExpandMinRadius; // 0x314(0x4)
	float ExpandMaxRadius; // 0x318(0x4)
	int32_t PileNumStep; // 0x31C(0x4)
	float BaseVerticalOffset; // 0x320(0x4)
	float RandomSphereGap; // 0x324(0x4)
	int32_t RandomSpereCount; // 0x328(0x4)
	struct FVector RandomCenterOffsetMin; // 0x32C(0xC)
	struct FVector RandomCenterOffsetMax; // 0x338(0xC)
	uint8_t Pad_0x344[0x1C]; // 0x344(0x1C)
};

// Object: Class GPDeformable.GPDeformableMeshEmitComponent
// Size: 0x470 (Inherited: 0x310)
struct UGPDeformableMeshEmitComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableMeshEmitComponent, "GPDeformableMeshEmitComponent")

	uint8_t bInitGenerating : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t bIsGeneratingPath : 1; // 0x311(0x1), Mask(0x1)
	uint8_t BitPad_0x311_1 : 7; // 0x311(0x1)
	uint8_t Pad_0x312[0x2]; // 0x312(0x2)
	int32_t CurrentPileIndex; // 0x314(0x4)
	uint8_t bIsGenerateEmiter : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t Pad_0x319[0x3]; // 0x319(0x3)
	int32_t HonrizontalCubeCount; // 0x31C(0x4)
	int32_t VerticalCubeCount; // 0x320(0x4)
	float HonrizontalCubeSize; // 0x324(0x4)
	float VerticalCubeSize; // 0x328(0x4)
	int32_t CurrentCreateCubePileIndex; // 0x32C(0x4)
	int32_t CurrentGridIndex; // 0x330(0x4)
	uint8_t bIsTickAnimation : 1; // 0x334(0x1), Mask(0x1)
	uint8_t BitPad_0x334_1 : 7; // 0x334(0x1)
	uint8_t bHasStartAnimation : 1; // 0x335(0x1), Mask(0x1)
	uint8_t BitPad_0x335_1 : 7; // 0x335(0x1)
	uint8_t Pad_0x336[0x2]; // 0x336(0x2)
	float AccumulateDelayMoveTime; // 0x338(0x4)
	float AccumulateMoveTime; // 0x33C(0x4)
	float CurrentEmitDistance; // 0x340(0x4)
	uint8_t bIsTickFadeOut : 1; // 0x344(0x1), Mask(0x1)
	uint8_t BitPad_0x344_1 : 7; // 0x344(0x1)
	uint8_t Pad_0x345[0x3]; // 0x345(0x3)
	float FadeOutTickTime; // 0x348(0x4)
	uint8_t Pad_0x34C[0x4]; // 0x34C(0x4)
	struct TArray<struct FVector> PathList; // 0x350(0x10)
	struct TArray<float> PathDistList; // 0x360(0x10)
	struct TArray<float> PathXYDistList; // 0x370(0x10)
	float PathTotalDistance; // 0x380(0x4)
	float PathTotalXYDistance; // 0x384(0x4)
	int32_t LastPathXYMovedIndex; // 0x388(0x4)
	uint8_t Pad_0x38C[0x4]; // 0x38C(0x4)
	struct TArray<struct FGPDeformableEmiter> EmiterArray; // 0x390(0x10)
	struct TArray<struct FGPDeformableEmitConfig> EmiterConfigs; // 0x3A0(0x10)
	float IteratorPathZOffset; // 0x3B0(0x4)
	float AlphaThresholdInitValue; // 0x3B4(0x4)
	float AlphaThresholdTargetValue; // 0x3B8(0x4)
	float AlphaThresholdTime; // 0x3BC(0x4)
	struct FVector InitColorLife; // 0x3C0(0xC)
	struct FVector TargetColorLife; // 0x3CC(0xC)
	float ColorLifeTime; // 0x3D8(0x4)
	float FadeOutTime; // 0x3DC(0x4)
	struct UStaticMesh* StaticMesh; // 0x3E0(0x8)
	struct UMaterialInstance* MaterialInstance; // 0x3E8(0x8)
	int32_t StartMoveIndex; // 0x3F0(0x4)
	float DelayMoveTime; // 0x3F4(0x4)
	float MoveSpeed; // 0x3F8(0x4)
	uint8_t MoveIgoreZ : 1; // 0x3FC(0x1), Mask(0x1)
	uint8_t BitPad_0x3FC_1 : 7; // 0x3FC(0x1)
	uint8_t Pad_0x3FD[0x3]; // 0x3FD(0x3)
	int32_t IteratorPathPointInFrame; // 0x400(0x4)
	int32_t IteratorCreateCubeInFrame; // 0x404(0x4)
	int32_t IteratorDelayNewstMoveIndex; // 0x408(0x4)
	uint8_t Pad_0x40C[0x4]; // 0x40C(0x4)
	struct TArray<float> FadeOutTickTimeArray; // 0x410(0x10)
	struct TArray<struct FGPDeformableSmokePathPoint> PointDatas; // 0x420(0x10)
	struct TArray<struct FTimerHandle> SmokeFadeTimer; // 0x430(0x10)
	float BlowFadeOutTime; // 0x440(0x4)
	float BlowFadeInTime; // 0x444(0x4)
	uint8_t Pad_0x448[0x10]; // 0x448(0x10)
	uint8_t bNeedTickSmokeState : 1; // 0x458(0x1), Mask(0x1)
	uint8_t BitPad_0x458_1 : 7; // 0x458(0x1)
	uint8_t Pad_0x459[0x17]; // 0x459(0x17)

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.TickSmokeState
	// Flags: [Native|Public]
	// Offset: 0x905cb44
	// Params: [ Num(1) Size(0x4) ]
	void TickSmokeState(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.TickSmokeFadeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x905c9f0
	// Params: [ Num(4) Size(0x10) ]
	void TickSmokeFadeOut(int32_t EmiterIndex, float DeltaTime, int32_t SubIndex, int32_t Index);

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.TickSmokeFadeIn
	// Flags: [Final|Native|Public]
	// Offset: 0x905c89c
	// Params: [ Num(4) Size(0x10) ]
	void TickSmokeFadeIn(int32_t EmiterIndex, float DeltaTime, int32_t SubIndex, int32_t Index);

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.TickRecoverHole
	// Flags: [Final|Native|Public]
	// Offset: 0x905c6c8
	// Params: [ Num(6) Size(0x18) ]
	void TickRecoverHole(float CurrentRadius, int32_t EmiterIndex, int32_t SubEmiterIndex, uint8_t bUseSub, int32_t HoleIndex, float TickInterval);

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.TickBurstHole
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x905c4b8
	// Params: [ Num(7) Size(0x24) ]
	void TickBurstHole(struct FVector BurstLoc, float CurrentRadius, int32_t EmiterIndex, int32_t SubEmiterIndex, uint8_t bUseSub, int32_t HoleIndex, float TickInterval);

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.ClearEmiter
	// Flags: [Final|Native|Protected]
	// Offset: 0x905c4a4
	// Params: [ Num(0) Size(0x0) ]
	void ClearEmiter();

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.CheckIsDisappearState
	// Flags: [Final|Native|Public]
	// Offset: 0x905c3f4
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckIsDisappearState(ESmokeState NewState);

	// Object: Function GPDeformable.GPDeformableMeshEmitComponent.CheckIsConstantState
	// Flags: [Final|Native|Public]
	// Offset: 0x905c344
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckIsConstantState(ESmokeState NewState);
};

// Object: Class GPDeformable.GPDeformableMeshLineComponent
// Size: 0x420 (Inherited: 0x310)
struct UGPDeformableMeshLineComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableMeshLineComponent, "GPDeformableMeshLineComponent")

	struct TArray<struct FVector> CachedVertices; // 0x310(0x10)
	struct TArray<int32_t> CachedTriangles; // 0x320(0x10)
	struct TArray<struct FVector> CachedNormals; // 0x330(0x10)
	struct TArray<struct FVector2D> CachedUV0; // 0x340(0x10)
	struct TArray<struct FVector2D> CachedUV1; // 0x350(0x10)
	struct TArray<struct FProcMeshTangent> CachedTangents; // 0x360(0x10)
	struct TArray<struct FColor> CachedVertexColors; // 0x370(0x10)
	uint8_t bUseHighQualityCube : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t bInitGenerating : 1; // 0x381(0x1), Mask(0x1)
	uint8_t BitPad_0x381_1 : 7; // 0x381(0x1)
	uint8_t bIsGeneratingMesh : 1; // 0x382(0x1), Mask(0x1)
	uint8_t BitPad_0x382_1 : 7; // 0x382(0x1)
	uint8_t Pad_0x383[0x5]; // 0x383(0x5)
	uint8_t bIsCreateCube : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0xB]; // 0x389(0xB)
	uint8_t bIsTickAnimation : 1; // 0x394(0x1), Mask(0x1)
	uint8_t BitPad_0x394_1 : 7; // 0x394(0x1)
	uint8_t Pad_0x395[0x3]; // 0x395(0x3)
	struct TArray<struct FVector> VolumeLocalCenterList; // 0x398(0x10)
	struct TArray<float> VolumeLocalCenterDistList; // 0x3A8(0x10)
	float LocalCenterTotalDistance; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct UStaticMesh* StaticMesh; // 0x3C0(0x8)
	struct FVector StaticMeshLocalCenter; // 0x3C8(0xC)
	struct FVector StaticMeshLocalForward; // 0x3D4(0xC)
	float MeshDistance; // 0x3E0(0x4)
	int32_t SmoothDivideCount; // 0x3E4(0x4)
	int32_t SmoothCalcBezierCount; // 0x3E8(0x4)
	int32_t IteratorMeshInFrame; // 0x3EC(0x4)
	int32_t IteratorCreateCubeInFrame; // 0x3F0(0x4)
	int32_t IteratorDelayNewstMoveIndex; // 0x3F4(0x4)
	float SizeRandomMin; // 0x3F8(0x4)
	float SizeRandomMax; // 0x3FC(0x4)
	struct FVector CubeRandomOffsetMin; // 0x400(0xC)
	struct FVector CubeRandomOffsetMax; // 0x40C(0xC)
	float ForwardSizeScale; // 0x418(0x4)
	float MaxWidthSize; // 0x41C(0x4)
};

// Object: Class GPDeformable.GPDeformablePlaneSmokeComponent
// Size: 0x440 (Inherited: 0x310)
struct UGPDeformablePlaneSmokeComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformablePlaneSmokeComponent, "GPDeformablePlaneSmokeComponent")

	int32_t CurrentConfigLevelIndex; // 0x310(0x4)
	uint8_t bUseHighQualityCube : 1; // 0x314(0x1), Mask(0x1)
	uint8_t BitPad_0x314_1 : 7; // 0x314(0x1)
	uint8_t bInitGenerating : 1; // 0x315(0x1), Mask(0x1)
	uint8_t BitPad_0x315_1 : 7; // 0x315(0x1)
	uint8_t bIsGeneratingMesh : 1; // 0x316(0x1), Mask(0x1)
	uint8_t BitPad_0x316_1 : 7; // 0x316(0x1)
	uint8_t Pad_0x317[0x5]; // 0x317(0x5)
	uint8_t bIsCreateCube : 1; // 0x31C(0x1), Mask(0x1)
	uint8_t BitPad_0x31C_1 : 7; // 0x31C(0x1)
	uint8_t Pad_0x31D[0x3]; // 0x31D(0x3)
	int32_t HonrizontalCubeCount; // 0x320(0x4)
	int32_t VerticalCubeCount; // 0x324(0x4)
	float HonrizontalCubeSize; // 0x328(0x4)
	float VerticalCubeSize; // 0x32C(0x4)
	uint8_t Pad_0x330[0x8]; // 0x330(0x8)
	uint8_t bIsTickAnimation : 1; // 0x338(0x1), Mask(0x1)
	uint8_t BitPad_0x338_1 : 7; // 0x338(0x1)
	uint8_t Pad_0x339[0x7]; // 0x339(0x7)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x340(0x8)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x348(0x8)
	struct UMaterialInstance* CurrentHQCubeMaterialInstance; // 0x350(0x8)
	struct TArray<struct UMaterialInstance*> CurrentMaterialInstanceArray; // 0x358(0x10)
	struct TArray<struct UStaticMesh*> CurrentMeshArray; // 0x368(0x10)
	struct TArray<struct FVector> WorldSpaceVertices; // 0x378(0x10)
	struct TArray<struct FDeformableConfigAsset> ConfigAssetArray; // 0x388(0x10)
	int32_t IteratorMeshInFrame; // 0x398(0x4)
	int32_t IteratorCreateCubeInFrame; // 0x39C(0x4)
	int32_t IteratorDelayNewstMoveIndex; // 0x3A0(0x4)
	float SizeRandomMin; // 0x3A4(0x4)
	float SizeRandomMax; // 0x3A8(0x4)
	struct FVector CubeRandomOffsetMin; // 0x3AC(0xC)
	struct FVector CubeRandomOffsetMax; // 0x3B8(0xC)
	float ForwardSizeScale; // 0x3C4(0x4)
	float MaxWidthSize; // 0x3C8(0x4)
	uint8_t EnableGeneratingInFlying : 1; // 0x3CC(0x1), Mask(0x1)
	uint8_t BitPad_0x3CC_1 : 7; // 0x3CC(0x1)
	uint8_t Pad_0x3CD[0x3]; // 0x3CD(0x3)
	int32_t ForwardBaseLineEdgeVertexCount; // 0x3D0(0x4)
	int32_t ForwardUpperLineEdgeVertexCount; // 0x3D4(0x4)
	int32_t HonrizontalBaseLineEdgeVertexCount; // 0x3D8(0x4)
	int32_t HonrizontalUpperLineEdgeVertexCount; // 0x3DC(0x4)
	int32_t VerticalBaseLineEdgeVertexCount; // 0x3E0(0x4)
	int32_t VerticalUpperLineEdgeVertexCount; // 0x3E4(0x4)
	float ExpandDistance; // 0x3E8(0x4)
	float EdgeDistance; // 0x3EC(0x4)
	uint8_t EnableAnimation : 1; // 0x3F0(0x1), Mask(0x1)
	uint8_t BitPad_0x3F0_1 : 7; // 0x3F0(0x1)
	uint8_t Pad_0x3F1[0x3]; // 0x3F1(0x3)
	float InitMaxRadius; // 0x3F4(0x4)
	float TargetRadius; // 0x3F8(0x4)
	float ExpandLifeMinTime; // 0x3FC(0x4)
	float ExpandLifeMaxTime; // 0x400(0x4)
	float ExpandDelayLifeMinTime; // 0x404(0x4)
	float ExpandDelayLifeMaxTime; // 0x408(0x4)
	float ExpandLocLifeMinTime; // 0x40C(0x4)
	float ExpandLocLifeMaxTime; // 0x410(0x4)
	float ExpandDelayLocLifeMinTime; // 0x414(0x4)
	float ExpandDelayLocLifeMaxTime; // 0x418(0x4)
	float EmitFallMinSpeed; // 0x41C(0x4)
	float EmitFallMaxSpeed; // 0x420(0x4)
	float PopDistance; // 0x424(0x4)
	int32_t UseUASZ; // 0x428(0x4)
	float DelayTimePerPile; // 0x42C(0x4)
	int32_t BeginAnimModuleIndex; // 0x430(0x4)
	struct FName MaterialParameterName; // 0x434(0x8)
	uint8_t Pad_0x43C[0x4]; // 0x43C(0x4)
};

// Object: Class GPDeformable.GPDeformableActorRuntimeData
// Size: 0xC8 (Inherited: 0x28)
struct UGPDeformableActorRuntimeData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableActorRuntimeData, "GPDeformableActorRuntimeData")

	int32_t CurrentMoveIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FVector> MoveOriginPointList; // 0x30(0x10)
	struct TArray<struct FVector> MoveForwardList; // 0x40(0x10)
	struct TArray<uint8_t> MovePointStateList; // 0x50(0x10)
	struct TArray<struct FVector> BottomOriginPointList; // 0x60(0x10)
	struct TArray<struct FVector> TopOriginPointList; // 0x70(0x10)
	struct TArray<struct FVector> WorldSpaceVertices; // 0x80(0x10)
	uint8_t IsGeneratingGrid : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t CurrentGenerateWorldPileIndex; // 0x94(0x4)
	int32_t CurrentGenerateGridIndex; // 0x98(0x4)
	int32_t PileNum; // 0x9C(0x4)
	int32_t HonrizontalGridCount; // 0xA0(0x4)
	int32_t VerticalGridCount; // 0xA4(0x4)
	float HonrizontalGridSize; // 0xA8(0x4)
	float VerticalGridSize; // 0xAC(0x4)
	uint8_t Pad_0xB0[0x18]; // 0xB0(0x18)
};

// Object: Class GPDeformable.GPDeformableSmokeEmitActor
// Size: 0x520 (Inherited: 0x370)
struct AGPDeformableSmokeEmitActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPDeformableSmokeEmitActor, "GPDeformableSmokeEmitActor")

	uint8_t Pad_0x370[0x18]; // 0x370(0x18)
	int32_t SmokeId; // 0x388(0x4)
	int32_t OriginSmokeId; // 0x38C(0x4)
	int32_t SkinAppearanceId; // 0x390(0x4)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	uint64_t OwnerPlayerUin; // 0x398(0x8)
	uint32_t PseudoRandomSeed; // 0x3A0(0x4)
	uint8_t Pad_0x3A4[0x4]; // 0x3A4(0x4)
	struct AActor* OwnerCharacter; // 0x3A8(0x8)
	ESmokeActorType SmokeActorType; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x3]; // 0x3B1(0x3)
	struct FName AudioId; // 0x3B4(0x8)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct TArray<struct FGPDeformableSmokeEmitterConfig> EmitterConfigs; // 0x3C0(0x10)
	struct FGPDeformableFXSmokeConfig FXConfig; // 0x3D0(0xE0)
	ESmokeClassType SmokeClassType; // 0x4B0(0x1)
	uint8_t SmokeAttachGround : 1; // 0x4B1(0x1), Mask(0x1)
	uint8_t BitPad_0x4B1_1 : 7; // 0x4B1(0x1)
	uint8_t Pad_0x4B2[0x2]; // 0x4B2(0x2)
	float AttachGroundDownHeight; // 0x4B4(0x4)
	float SmokeRadius; // 0x4B8(0x4)
	float SmokeHeight; // 0x4BC(0x4)
	float MaxLifeTime; // 0x4C0(0x4)
	float DebugLifeTime; // 0x4C4(0x4)
	struct TArray<struct FGPDeformableSmokeEmitter> EmitterDatas; // 0x4C8(0x10)
	struct TArray<struct FGPDeformableSmokePathPoint> PointSmokeDatas; // 0x4D8(0x10)
	float CurrLifeTime; // 0x4E8(0x4)
	int32_t WeatherID; // 0x4EC(0x4)
	struct FVector WindDirection; // 0x4F0(0xC)
	uint8_t bIsGenerating : 1; // 0x4FC(0x1), Mask(0x1)
	uint8_t BitPad_0x4FC_1 : 7; // 0x4FC(0x1)
	uint8_t bIsDisappearing : 1; // 0x4FD(0x1), Mask(0x1)
	uint8_t BitPad_0x4FD_1 : 7; // 0x4FD(0x1)
	uint8_t bNeedTick : 1; // 0x4FE(0x1), Mask(0x1)
	uint8_t BitPad_0x4FE_1 : 7; // 0x4FE(0x1)
	uint8_t Pad_0x4FF[0x1]; // 0x4FF(0x1)
	int32_t bInitialize; // 0x500(0x4)
	uint8_t Pad_0x504[0x4]; // 0x504(0x4)
	struct UCapsuleComponent* SmokeCollisionComp; // 0x508(0x8)
	struct TArray<struct UBoxComponent*> SmokeBlockCollisionArray; // 0x510(0x10)

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.UpdateSmokeBlockCollisionLoc
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x9062828
	// Params: [ Num(2) Size(0x10) ]
	void UpdateSmokeBlockCollisionLoc(int32_t Index, struct FVector NewLocation);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickSmokePointState_FX
	// Flags: [Native|Protected]
	// Offset: 0x906277c
	// Params: [ Num(1) Size(0x4) ]
	void TickSmokePointState_FX(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickSmokePointState
	// Flags: [Native|Protected]
	// Offset: 0x90626d0
	// Params: [ Num(1) Size(0x4) ]
	void TickSmokePointState(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickSmokeGenerate_FX
	// Flags: [Native|Protected]
	// Offset: 0x9062624
	// Params: [ Num(1) Size(0x4) ]
	void TickSmokeGenerate_FX(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickSmokeGenerate
	// Flags: [Native|Protected]
	// Offset: 0x9062578
	// Params: [ Num(1) Size(0x4) ]
	void TickSmokeGenerate(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickSmokeDisappear_FX
	// Flags: [Native|Protected]
	// Offset: 0x90624cc
	// Params: [ Num(1) Size(0x4) ]
	void TickSmokeDisappear_FX(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickSmokeDisappear
	// Flags: [Native|Protected]
	// Offset: 0x9062420
	// Params: [ Num(1) Size(0x4) ]
	void TickSmokeDisappear(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickLifeTime
	// Flags: [Native|Protected]
	// Offset: 0x9062374
	// Params: [ Num(1) Size(0x4) ]
	void TickLifeTime(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.TickInstanceReorder
	// Flags: [Native|Protected|HasDefaults]
	// Offset: 0x90622c8
	// Params: [ Num(1) Size(0xC) ]
	void TickInstanceReorder(struct FVector CharacterLoc);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.SetSmokeID
	// Flags: [Final|Native|Public]
	// Offset: 0x9062228
	// Params: [ Num(1) Size(0x4) ]
	void SetSmokeID(int32_t NewSmokeID);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.SetSmokeGenerate
	// Flags: [Final|Native|Public]
	// Offset: 0x9062214
	// Params: [ Num(0) Size(0x0) ]
	void SetSmokeGenerate();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.SetPlayerUIN
	// Flags: [Final|Native|Public]
	// Offset: 0x9062174
	// Params: [ Num(1) Size(0x8) ]
	void SetPlayerUIN(uint64_t Uin);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.SetOwnerActor
	// Flags: [Final|Native|Public]
	// Offset: 0x90620d4
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerActor(struct AActor* InActor);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.OnRep_SmokeId
	// Flags: [Final|Native|Protected]
	// Offset: 0xf708104
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SmokeId();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.MuticastInitSmokeData
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x90620b8
	// Params: [ Num(0) Size(0x0) ]
	void MuticastInitSmokeData();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.IsVeryLowQuality
	// Flags: [Final|Native|Protected]
	// Offset: 0x90620a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVeryLowQuality();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.IsSmokeWallLowQuality
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062088
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSmokeWallLowQuality();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.IsServer
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062050
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsServer();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.IsLowQuality
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062038
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLowQuality();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.InitSmokeData
	// Flags: [Native|Public]
	// Offset: 0x906201c
	// Params: [ Num(0) Size(0x0) ]
	void InitSmokeData();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.InitFXComp
	// Flags: [Native|Protected]
	// Offset: 0x9062000
	// Params: [ Num(0) Size(0x0) ]
	void InitFXComp();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.InitEmitter
	// Flags: [Native|Protected]
	// Offset: 0x9061fe4
	// Params: [ Num(0) Size(0x0) ]
	void InitEmitter();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.GetTickTime
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x9061f04
	// Params: [ Num(2) Size(0x54) ]
	float GetTickTime(struct FGPDeformableSmokePathPoint& pathPoint);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.GetSmokeTotalBox
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x9061e90
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox GetSmokeTotalBox();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.GetPointSmokeBoxes
	// Flags: [Native|Public]
	// Offset: 0x9061df0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FBox> GetPointSmokeBoxes();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.GetCurrentTODWeatherID
	// Flags: [Native|Protected]
	// Offset: 0x9061db4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentTODWeatherID();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.GetCurrentQualitySettingIndex
	// Flags: [Native|Protected]
	// Offset: 0x9061d78
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentQualitySettingIndex();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.GetCurrentDeviceLevel
	// Flags: [Native|Protected]
	// Offset: 0x9061d3c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentDeviceLevel();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.GetCharacterOwner
	// Flags: [Final|Native|Public]
	// Offset: 0x9061d20
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetCharacterOwner();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.ClearPointData
	// Flags: [Final|Native|Protected]
	// Offset: 0x9061d0c
	// Params: [ Num(0) Size(0x0) ]
	void ClearPointData();

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.CheckPathPointValid
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x9061c30
	// Params: [ Num(2) Size(0x51) ]
	uint8_t CheckPathPointValid(struct FGPDeformableSmokePathPoint& pathPoint);

	// Object: Function GPDeformable.GPDeformableSmokeEmitActor.AddSmokeBlockCollision
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x9061adc
	// Params: [ Num(4) Size(0x18) ]
	void AddSmokeBlockCollision(int32_t Index, float radius, float Height, struct FVector Location);
};

// Object: Class GPDeformable.GPDeformableUnitSphere
// Size: 0x60 (Inherited: 0x28)
struct UGPDeformableUnitSphere : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableUnitSphere, "GPDeformableUnitSphere")

	uint8_t Pad_0x28[0x38]; // 0x28(0x38)
};

// Object: Class GPDeformable.GPDeformableSphereComponent
// Size: 0x3F0 (Inherited: 0x310)
struct UGPDeformableSphereComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableSphereComponent, "GPDeformableSphereComponent")

	struct UGPDeformableUnitSphere* UnitSpere; // 0x310(0x8)
	struct UGPDeformableAnimModule* AnimModule; // 0x318(0x8)
	uint8_t bEnableAnimation : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t bIsTickCalculateGridVertices : 1; // 0x321(0x1), Mask(0x1)
	uint8_t BitPad_0x321_1 : 7; // 0x321(0x1)
	uint8_t bIsTickExpandSphere : 1; // 0x322(0x1), Mask(0x1)
	uint8_t BitPad_0x322_1 : 7; // 0x322(0x1)
	uint8_t bIsTickAnimation : 1; // 0x323(0x1), Mask(0x1)
	uint8_t BitPad_0x323_1 : 7; // 0x323(0x1)
	int32_t CurrentExpandPileIndex; // 0x324(0x4)
	int32_t CurrentGridIndex; // 0x328(0x4)
	uint8_t Pad_0x32C[0x4]; // 0x32C(0x4)
	struct TArray<float> GridSphereRadius; // 0x330(0x10)
	struct TArray<struct FVector> GridSphereCenters; // 0x340(0x10)
	struct TArray<struct FRotator> GridSphereRotator; // 0x350(0x10)
	struct TArray<float> GridSphereMoveRates; // 0x360(0x10)
	int32_t LongitudeLineNum; // 0x370(0x4)
	int32_t LatitudeLineNum; // 0x374(0x4)
	int32_t IteratorSphereCount; // 0x378(0x4)
	float SpereMinRadius; // 0x37C(0x4)
	float SpereMaxRadius; // 0x380(0x4)
	float RadiusRandomMin; // 0x384(0x4)
	float RadiusRandomMax; // 0x388(0x4)
	struct FVector RadiusRandomOffsetMin; // 0x38C(0xC)
	struct FVector RadiusRandomOffsetMax; // 0x398(0xC)
	float RandomSphereIncreaseDistace; // 0x3A4(0x4)
	float BottomSphereRadiusScale; // 0x3A8(0x4)
	uint8_t EnablePlayAnimation : 1; // 0x3AC(0x1), Mask(0x1)
	uint8_t BitPad_0x3AC_1 : 7; // 0x3AC(0x1)
	uint8_t Pad_0x3AD[0x3]; // 0x3AD(0x3)
	int32_t EnablePlayAnimation_DelayPileIndex; // 0x3B0(0x4)
	float InitMaxRadius; // 0x3B4(0x4)
	float ExpandLifeMinTime; // 0x3B8(0x4)
	float ExpandLifeMaxTime; // 0x3BC(0x4)
	float ExpandDelayLifeMinTime; // 0x3C0(0x4)
	float ExpandDelayLifeMaxTime; // 0x3C4(0x4)
	float ExpandLocLifeMinTime; // 0x3C8(0x4)
	float ExpandLocLifeMaxTime; // 0x3CC(0x4)
	float ExpandDelayLocLifeMinTime; // 0x3D0(0x4)
	float ExpandDelayLocLifeMaxTime; // 0x3D4(0x4)
	float EmitFallMinSpeed; // 0x3D8(0x4)
	float EmitFallMaxSpeed; // 0x3DC(0x4)
	float PopDistance; // 0x3E0(0x4)
	int32_t BeginAnimModuleIndex; // 0x3E4(0x4)
	int32_t UseUASZ; // 0x3E8(0x4)
	float DelayTimePerPile; // 0x3EC(0x4)
};

// Object: Class GPDeformable.GPDeformableVolumeRayMarchingComponent
// Size: 0x370 (Inherited: 0x310)
struct UGPDeformableVolumeRayMarchingComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableVolumeRayMarchingComponent, "GPDeformableVolumeRayMarchingComponent")

	uint8_t Pad_0x310[0xC]; // 0x310(0xC)
	uint8_t bIsGeneratingMesh : 1; // 0x31C(0x1), Mask(0x1)
	uint8_t BitPad_0x31C_1 : 7; // 0x31C(0x1)
	uint8_t bInitGenerating : 1; // 0x31D(0x1), Mask(0x1)
	uint8_t BitPad_0x31D_1 : 7; // 0x31D(0x1)
	uint8_t bIsCreateCube : 1; // 0x31E(0x1), Mask(0x1)
	uint8_t BitPad_0x31E_1 : 7; // 0x31E(0x1)
	uint8_t Pad_0x31F[0x1]; // 0x31F(0x1)
	struct UTextureRenderTarget2D* RenderTarget; // 0x320(0x8)
	int32_t RenderTextureSizeX; // 0x328(0x4)
	int32_t RenderTextureSizeY; // 0x32C(0x4)
	float PaintDensity; // 0x330(0x4)
	float PaintRadius; // 0x334(0x4)
	float VolumeDistanceToEdge; // 0x338(0x4)
	float CubeScale; // 0x33C(0x4)
	struct UMaterial* PaintMaterial; // 0x340(0x8)
	struct UMaterialInstance* RayMarchingMaterial; // 0x348(0x8)
	float BoxScale; // 0x350(0x4)
	float XYFrames; // 0x354(0x4)
	struct UTextureRenderTarget2D* CurrentRenderTarget; // 0x358(0x8)
	struct UProceduralMeshComponent* ProceduralMeshComponent; // 0x360(0x8)
	uint8_t Pad_0x368[0x8]; // 0x368(0x8)

	// Object: Function GPDeformable.GPDeformableVolumeRayMarchingComponent.TickExpandVertices
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062c30
	// Params: [ Num(0) Size(0x0) ]
	void TickExpandVertices();

	// Object: Function GPDeformable.GPDeformableVolumeRayMarchingComponent.InitBox
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062c1c
	// Params: [ Num(0) Size(0x0) ]
	void InitBox();

	// Object: Function GPDeformable.GPDeformableVolumeRayMarchingComponent.GenerateRayMarching
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062c08
	// Params: [ Num(0) Size(0x0) ]
	void GenerateRayMarching();

	// Object: Function GPDeformable.GPDeformableVolumeRayMarchingComponent.FillTriangles
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062b64
	// Params: [ Num(1) Size(0x4) ]
	void FillTriangles(int32_t InGridIndex);

	// Object: Function GPDeformable.GPDeformableVolumeRayMarchingComponent.CreateProceduralMesh
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x9062a84
	// Params: [ Num(2) Size(0x18) ]
	void CreateProceduralMesh(struct FVector Min, struct FVector Max);
};

// Object: Class GPDeformable.GPDeformableVolumeSmokeComponent
// Size: 0x480 (Inherited: 0x310)
struct UGPDeformableVolumeSmokeComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UGPDeformableVolumeSmokeComponent, "GPDeformableVolumeSmokeComponent")

	uint8_t Pad_0x310[0x8]; // 0x310(0x8)
	uint8_t bInFadeOut : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t Pad_0x319[0x3]; // 0x319(0x3)
	float TickFadeOutTime; // 0x31C(0x4)
	uint8_t bUseHighQualityCube : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t bInitGenerating : 1; // 0x321(0x1), Mask(0x1)
	uint8_t BitPad_0x321_1 : 7; // 0x321(0x1)
	uint8_t Pad_0x322[0x6]; // 0x322(0x6)
	uint8_t bIsCreateCube : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t Pad_0x329[0xB]; // 0x329(0xB)
	uint8_t bIsTickAnimation : 1; // 0x334(0x1), Mask(0x1)
	uint8_t BitPad_0x334_1 : 7; // 0x334(0x1)
	uint8_t Pad_0x335[0x3]; // 0x335(0x3)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x338(0x8)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x340(0x8)
	struct UMaterialInstance* CurrentHQCubeMaterialInstance; // 0x348(0x8)
	struct TArray<struct UMaterialInstance*> CurrentMaterialInstanceArray; // 0x350(0x10)
	struct TArray<struct UStaticMesh*> CurrentMeshArray; // 0x360(0x10)
	struct UGPDeformableCubeAnimModule* AnimModule; // 0x370(0x8)
	struct FVolumeSmokeTODMatParameter CurrentVolumeSmokeTODMatParameter; // 0x378(0x10)
	struct TArray<struct FDeformableConfigAsset> ConfigAssetArray; // 0x388(0x10)
	struct TArray<struct FVolumeSmokeTODMatParameter> TODWeatherParameters; // 0x398(0x10)
	struct TSoftObjectPtr<UMaterialInstance> HighQualityCubeMaterialInstancePath; // 0x3A8(0x28)
	struct TArray<struct UMeshComponent*> MeshList; // 0x3D0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstanceList; // 0x3E0(0x10)
	int32_t IteratorMeshInFrame; // 0x3F0(0x4)
	int32_t IteratorCreateCubeInFrame; // 0x3F4(0x4)
	int32_t IteratorDelayNewstMoveIndex; // 0x3F8(0x4)
	float SizeRandomMin; // 0x3FC(0x4)
	float SizeRandomMax; // 0x400(0x4)
	struct FVector CubeRandomOffsetMin; // 0x404(0xC)
	struct FVector CubeRandomOffsetMax; // 0x410(0xC)
	float ForwardSizeScale; // 0x41C(0x4)
	float MaxWidthSize; // 0x420(0x4)
	uint8_t EnableGeneratingInFlying : 1; // 0x424(0x1), Mask(0x1)
	uint8_t BitPad_0x424_1 : 7; // 0x424(0x1)
	uint8_t EnableAnimation : 1; // 0x425(0x1), Mask(0x1)
	uint8_t BitPad_0x425_1 : 7; // 0x425(0x1)
	uint8_t Pad_0x426[0x2]; // 0x426(0x2)
	float InitMaxRadius; // 0x428(0x4)
	float TargetRadius; // 0x42C(0x4)
	float ExpandLifeMinTime; // 0x430(0x4)
	float ExpandLifeMaxTime; // 0x434(0x4)
	float ExpandDelayLifeMinTime; // 0x438(0x4)
	float ExpandDelayLifeMaxTime; // 0x43C(0x4)
	float ExpandLocLifeMinTime; // 0x440(0x4)
	float ExpandLocLifeMaxTime; // 0x444(0x4)
	float ExpandDelayLocLifeMinTime; // 0x448(0x4)
	float ExpandDelayLocLifeMaxTime; // 0x44C(0x4)
	float EmitFallMinSpeed; // 0x450(0x4)
	float EmitFallMaxSpeed; // 0x454(0x4)
	float PopDistance; // 0x458(0x4)
	int32_t UseUASZ; // 0x45C(0x4)
	float DelayTimePerPile; // 0x460(0x4)
	int32_t BeginAnimModuleIndex; // 0x464(0x4)
	struct FName MaterialParameterName; // 0x468(0x8)
	float FadeOutTime; // 0x470(0x4)
	uint8_t Pad_0x474[0xC]; // 0x474(0xC)

	// Object: Function GPDeformable.GPDeformableVolumeSmokeComponent.TickFadeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x9062d50
	// Params: [ Num(1) Size(0x4) ]
	void TickFadeOut(float DeltaTime);

	// Object: Function GPDeformable.GPDeformableVolumeSmokeComponent.OnFadeOutTimer
	// Flags: [Final|Native|Public]
	// Offset: 0x9062d3c
	// Params: [ Num(0) Size(0x0) ]
	void OnFadeOutTimer();

	// Object: Function GPDeformable.GPDeformableVolumeSmokeComponent.InitTODMatParameter
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062d28
	// Params: [ Num(0) Size(0x0) ]
	void InitTODMatParameter();

	// Object: Function GPDeformable.GPDeformableVolumeSmokeComponent.ClearFadeOutTimer
	// Flags: [Final|Native|Public]
	// Offset: 0x9062d14
	// Params: [ Num(0) Size(0x0) ]
	void ClearFadeOutTimer();

	// Object: Function GPDeformable.GPDeformableVolumeSmokeComponent.ApplyTODMatParameter
	// Flags: [Final|Native|Protected]
	// Offset: 0x9062c70
	// Params: [ Num(1) Size(0x8) ]
	void ApplyTODMatParameter(struct UMaterialInstanceDynamic* Mid);
};

// Object: Class GPDeformable.GPUASActor
// Size: 0x4B0 (Inherited: 0x370)
struct AGPUASActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPUASActor, "GPUASActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	uint8_t bIsLocalControlled : 1; // 0x378(0x1), Mask(0x1)
	uint8_t BitPad_0x378_1 : 7; // 0x378(0x1)
	uint8_t bIsAIControlled : 1; // 0x379(0x1), Mask(0x1)
	uint8_t BitPad_0x379_1 : 7; // 0x379(0x1)
	uint8_t Pad_0x37A[0x2]; // 0x37A(0x2)
	float LastGenerateTime; // 0x37C(0x4)
	float AccumulateLifeTime; // 0x380(0x4)
	float AccumulateIdleLifeTime; // 0x384(0x4)
	uint8_t Pad_0x388[0x78]; // 0x388(0x78)
	struct FVector InitActorLocation; // 0x400(0xC)
	uint8_t Pad_0x40C[0x14]; // 0x40C(0x14)
	uint64_t OwnerPlayerUin; // 0x420(0x8)
	uint8_t bIsDeformableActorCreated : 1; // 0x428(0x1), Mask(0x1)
	uint8_t BitPad_0x428_1 : 7; // 0x428(0x1)
	uint8_t Pad_0x429[0x7]; // 0x429(0x7)
	struct TArray<struct FSpawnDeformableActorConfig> SpawnConfig; // 0x430(0x10)
	struct UGPUASMovementComponent* MovementComponent; // 0x440(0x8)
	struct UCapsuleComponent* CapsuleComponent; // 0x448(0x8)
	struct AGPDeformableActor* DeformableActorClass; // 0x450(0x8)
	struct UGPUASMovementComponent* DeformableActorMovementClass; // 0x458(0x8)
	struct AGPDeformableActor* TargetDeformable; // 0x460(0x8)
	uint64_t FireId; // 0x468(0x8)
	int32_t MaxSamplePoint; // 0x470(0x4)
	float DefaultSampleSize; // 0x474(0x4)
	uint8_t bSampleUnderWater : 1; // 0x478(0x1), Mask(0x1)
	uint8_t BitPad_0x478_1 : 7; // 0x478(0x1)
	uint8_t Pad_0x479[0x3]; // 0x479(0x3)
	float DelayDestroyTime; // 0x47C(0x4)
	float PreDestroyTime; // 0x480(0x4)
	uint8_t EnableDestroyAfterBuildingMoveList : 1; // 0x484(0x1), Mask(0x1)
	uint8_t BitPad_0x484_1 : 7; // 0x484(0x1)
	uint8_t Pad_0x485[0x3]; // 0x485(0x3)
	float MaxLifeTime; // 0x488(0x4)
	float MaxIdleLifeTime; // 0x48C(0x4)
	float MaxFlyDistance; // 0x490(0x4)
	float MaxValidMovePointDistance; // 0x494(0x4)
	float MaxFlyTime; // 0x498(0x4)
	float MinDistanceToGenerateSmoke; // 0x49C(0x4)
	float StepMaxGenerateTime; // 0x4A0(0x4)
	uint8_t Pad_0x4A4[0xC]; // 0x4A4(0xC)

	// Object: Function GPDeformable.GPUASActor.SyncMovePointToServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate]
	// Offset: 0x9063684
	// Params: [ Num(3) Size(0x1C) ]
	void SyncMovePointToServer(int32_t Index, struct FVector InMovePoint, struct FVector InDirection);

	// Object: Function GPDeformable.GPUASActor.SyncMoveListToServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x9063560
	// Params: [ Num(2) Size(0x20) ]
	void SyncMoveListToServer(struct TArray<struct FVector> InMoveList, struct TArray<struct FVector> InDirectionList);

	// Object: Function GPDeformable.GPUASActor.SetDeformableSkillID
	// Flags: [Native|Public]
	// Offset: 0x9063544
	// Params: [ Num(0) Size(0x0) ]
	void SetDeformableSkillID();

	// Object: Function GPDeformable.GPUASActor.ServerMove
	// Flags: [Net|Native|Event|Public|NetServer|NetValidate]
	// Offset: 0x906339c
	// Params: [ Num(4) Size(0x28) ]
	void ServerMove(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity);

	// Object: Function GPDeformable.GPUASActor.OnRep_TargetDeformable
	// Flags: [Final|Native|Public]
	// Offset: 0x106d7340
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TargetDeformable();

	// Object: Function GPDeformable.GPUASActor.OnBeginMoveStop
	// Flags: [Native|Public]
	// Offset: 0x9063380
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginMoveStop();

	// Object: Function GPDeformable.GPUASActor.OnBeginDestroy
	// Flags: [Native|Public]
	// Offset: 0x9063364
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginDestroy();

	// Object: Function GPDeformable.GPUASActor.MulticastServerMovement
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetValidate]
	// Offset: 0xf412420
	// Params: [ Num(4) Size(0x28) ]
	void MulticastServerMovement(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity);

	// Object: Function GPDeformable.GPUASActor.MulticastMovePoint
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate]
	// Offset: 0xf27e1b8
	// Params: [ Num(3) Size(0x1C) ]
	void MulticastMovePoint(int32_t Index, struct FVector InMovePoint, struct FVector InDirection);

	// Object: Function GPDeformable.GPUASActor.MulticastBeginMoveStop
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetValidate]
	// Offset: 0x9063308
	// Params: [ Num(0) Size(0x0) ]
	void MulticastBeginMoveStop();

	// Object: Function GPDeformable.GPUASActor.MulticastBeginDestroy
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetValidate]
	// Offset: 0x90632ac
	// Params: [ Num(0) Size(0x0) ]
	void MulticastBeginDestroy();

	// Object: Function GPDeformable.GPUASActor.IsMoveStoped
	// Flags: [Native|Public]
	// Offset: 0x906326c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMoveStoped();

	// Object: Function GPDeformable.GPUASActor.GetUASMovementClass
	// Flags: [Native|Public]
	// Offset: 0x9063230
	// Params: [ Num(1) Size(0x8) ]
	struct UGPUASMovementComponent* GetUASMovementClass();

	// Object: Function GPDeformable.GPUASActor.GetGamePlayMode
	// Flags: [Native|Public]
	// Offset: 0x90631f4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetGamePlayMode();

	// Object: Function GPDeformable.GPUASActor.GetGameMapID
	// Flags: [Native|Public]
	// Offset: 0x90631b8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetGameMapID();

	// Object: Function GPDeformable.GPUASActor.GetDeformableActorClass
	// Flags: [Native|Public]
	// Offset: 0x906317c
	// Params: [ Num(1) Size(0x8) ]
	struct AGPDeformableActor* GetDeformableActorClass();
};

// Object: Class GPDeformable.GPUASActorInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPUASActorInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGPUASActorInterface, "GPUASActorInterface")

	// Object: Function GPDeformable.GPUASActorInterface.IsLocalControlled
	// Flags: [Native|Public|Const]
	// Offset: 0x9064b80
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocalControlled();

	// Object: Function GPDeformable.GPUASActorInterface.IsAIControlled
	// Flags: [Native|Public|Const]
	// Offset: 0x9064b40
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAIControlled();

	// Object: Function GPDeformable.GPUASActorInterface.DoServerMove
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x90649dc
	// Params: [ Num(4) Size(0x28) ]
	void DoServerMove(float Timestamp, struct FVector Location, struct FVector Rotator, struct FVector Velocity);

	// Object: Function GPDeformable.GPUASActorInterface.DoMulticastServerMovement
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x9064878
	// Params: [ Num(4) Size(0x28) ]
	void DoMulticastServerMovement(float Timestamp, struct FVector Location, struct FVector Rotator, struct FVector Velocity);
};

// Object: Class GPDeformable.GPUASMovementComponent
// Size: 0x320 (Inherited: 0x138)
struct UGPUASMovementComponent : UMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPUASMovementComponent, "GPUASMovementComponent")

	uint8_t Pad_0x138[0x30]; // 0x138(0x30)
	struct FVector MoveForwardDirection; // 0x168(0xC)
	struct FVector2D LastInputRotation; // 0x174(0x8)
	uint8_t Pad_0x17C[0x4]; // 0x17C(0x4)
	struct TArray<struct FVector2D> InputList; // 0x180(0x10)
	struct TArray<float> InputTimeList; // 0x190(0x10)
	struct TArray<struct FVector2D> InputDeltaList; // 0x1A0(0x10)
	float TickCheckMaxInputTime; // 0x1B0(0x4)
	float DirectionTime; // 0x1B4(0x4)
	float TicMoveAccumulateTime; // 0x1B8(0x4)
	uint8_t bDisableInput : 1; // 0x1BC(0x1), Mask(0x1)
	uint8_t BitPad_0x1BC_1 : 7; // 0x1BC(0x1)
	uint8_t Pad_0x1BD[0x3]; // 0x1BD(0x3)
	float MoveDidstance; // 0x1C0(0x4)
	int32_t StruckedFrames; // 0x1C4(0x4)
	float MoveTime; // 0x1C8(0x4)
	struct FVector UASBeginOriginLocation; // 0x1CC(0xC)
	struct FVector UASBeginVelocity; // 0x1D8(0xC)
	uint8_t bNetMulticastCastDirty : 1; // 0x1E4(0x1), Mask(0x1)
	uint8_t BitPad_0x1E4_1 : 7; // 0x1E4(0x1)
	uint8_t Pad_0x1E5[0x3]; // 0x1E5(0x3)
	struct FVector LastMultiCastVelocity; // 0x1E8(0xC)
	struct FVector PerceiveBlockDirection; // 0x1F4(0xC)
	uint8_t bIsPerceiveBlock : 1; // 0x200(0x1), Mask(0x1)
	uint8_t BitPad_0x200_1 : 7; // 0x200(0x1)
	uint8_t Pad_0x201[0x3F]; // 0x201(0x3F)
	uint8_t bMoveUpOnHit : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x2B]; // 0x241(0x2B)
	uint8_t bIsDeceleration : 1; // 0x26C(0x1), Mask(0x1)
	uint8_t BitPad_0x26C_1 : 7; // 0x26C(0x1)
	uint8_t Pad_0x26D[0x3]; // 0x26D(0x3)
	float InitMoveSpeed; // 0x270(0x4)
	float AssumeMaxMoveDistance; // 0x274(0x4)
	float StartDecelerationMoveTime; // 0x278(0x4)
	float CurrentPitchAngle; // 0x27C(0x4)
	struct FVector LastMovePosition; // 0x280(0xC)
	uint8_t Pad_0x28C[0x1]; // 0x28C(0x1)
	EUASMovementMode MovementMode; // 0x28D(0x1)
	uint8_t bIsPausedMoveInControlled : 1; // 0x28E(0x1), Mask(0x1)
	uint8_t BitPad_0x28E_1 : 7; // 0x28E(0x1)
	uint8_t Pad_0x28F[0x1]; // 0x28F(0x1)
	struct AActor* Owner; // 0x290(0x8)
	float MaxSpeed; // 0x298(0x4)
	float MaxSpeedInWater; // 0x29C(0x4)
	float FinalMinSpeed; // 0x2A0(0x4)
	float SimulateSpeedScale; // 0x2A4(0x4)
	float Acceleration; // 0x2A8(0x4)
	float Deceleration; // 0x2AC(0x4)
	float DecelerationMoveRate; // 0x2B0(0x4)
	float MoveSpeedRotationAngle; // 0x2B4(0x4)
	float DecelerationRotationAngle; // 0x2B8(0x4)
	float AccelerationRotationAngle; // 0x2BC(0x4)
	float DistanceToFloor; // 0x2C0(0x4)
	float CheckFloorDistance; // 0x2C4(0x4)
	uint8_t ForceDistToFloor : 1; // 0x2C8(0x1), Mask(0x1)
	uint8_t BitPad_0x2C8_1 : 7; // 0x2C8(0x1)
	uint8_t Pad_0x2C9[0x3]; // 0x2C9(0x3)
	float PopUpSpeed; // 0x2CC(0x4)
	float VelocityLerp; // 0x2D0(0x4)
	float DirectionLerp; // 0x2D4(0x4)
	float DirectionFollowCD; // 0x2D8(0x4)
	float DirectionDotValue; // 0x2DC(0x4)
	float PerceiveBlockDistance; // 0x2E0(0x4)
	uint8_t bEnablePerceiveBlock : 1; // 0x2E4(0x1), Mask(0x1)
	uint8_t BitPad_0x2E4_1 : 7; // 0x2E4(0x1)
	uint8_t UseUpForwardWhenHit : 1; // 0x2E5(0x1), Mask(0x1)
	uint8_t BitPad_0x2E5_1 : 7; // 0x2E5(0x1)
	uint8_t Pad_0x2E6[0x2]; // 0x2E6(0x2)
	float MoveStepUpHeight; // 0x2E8(0x4)
	float InputYawMaxTime; // 0x2EC(0x4)
	int32_t InputYawMaxCount; // 0x2F0(0x4)
	int32_t InverseInputAttenuation; // 0x2F4(0x4)
	float CheckMaxInputLimitTime; // 0x2F8(0x4)
	float MaxInputDeltaLimit; // 0x2FC(0x4)
	uint8_t EnableInputToMove : 1; // 0x300(0x1), Mask(0x1)
	uint8_t BitPad_0x300_1 : 7; // 0x300(0x1)
	uint8_t Pad_0x301[0x3]; // 0x301(0x3)
	float RelicateMoveDeltaTime; // 0x304(0x4)
	float ServerValidDistance; // 0x308(0x4)
	float SimulatePositionChaseTime; // 0x30C(0x4)
	float SimulateServerTime; // 0x310(0x4)
	float RotationSpeed; // 0x314(0x4)
	uint8_t bCanMoveDir : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t bCanModifyPitch : 1; // 0x319(0x1), Mask(0x1)
	uint8_t BitPad_0x319_1 : 7; // 0x319(0x1)
	uint8_t Pad_0x31A[0x6]; // 0x31A(0x6)

	// Object: Function GPDeformable.GPUASMovementComponent.TickSimulateMove
	// Flags: [Native|Protected]
	// Offset: 0x9065684
	// Params: [ Num(1) Size(0x4) ]
	void TickSimulateMove(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.TickServerMove
	// Flags: [Native|Protected]
	// Offset: 0x90655d8
	// Params: [ Num(1) Size(0x4) ]
	void TickServerMove(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.TickPerceiveBlock
	// Flags: [Native|Protected]
	// Offset: 0x906552c
	// Params: [ Num(1) Size(0x4) ]
	void TickPerceiveBlock(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.TickMove
	// Flags: [Native|Protected]
	// Offset: 0x9065480
	// Params: [ Num(1) Size(0x4) ]
	void TickMove(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.TickAuthorityMove
	// Flags: [Native|Protected]
	// Offset: 0x90653d4
	// Params: [ Num(1) Size(0x4) ]
	void TickAuthorityMove(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.TickAIAuthorithMove
	// Flags: [Native|Protected]
	// Offset: 0x9065328
	// Params: [ Num(1) Size(0x4) ]
	void TickAIAuthorithMove(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.IsStrucked
	// Flags: [Final|Native|Public]
	// Offset: 0x90652f0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStrucked();

	// Object: Function GPDeformable.GPUASMovementComponent.CheckDecrease
	// Flags: [Native|Protected]
	// Offset: 0x9065244
	// Params: [ Num(1) Size(0x4) ]
	void CheckDecrease(float InMoveTime);

	// Object: Function GPDeformable.GPUASMovementComponent.CalculatePitch
	// Flags: [Native|Protected]
	// Offset: 0x9065208
	// Params: [ Num(1) Size(0x4) ]
	float CalculatePitch();

	// Object: Function GPDeformable.GPUASMovementComponent.CalculateCurrentSpeed
	// Flags: [Native|Protected]
	// Offset: 0x9065154
	// Params: [ Num(2) Size(0x8) ]
	float CalculateCurrentSpeed(float InMoveTime);

	// Object: Function GPDeformable.GPUASMovementComponent.CalcRollStep
	// Flags: [Native|Protected]
	// Offset: 0x90650a8
	// Params: [ Num(1) Size(0x4) ]
	void CalcRollStep(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.BeginMove
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x9064ffc
	// Params: [ Num(1) Size(0xC) ]
	void BeginMove(struct FVector InVelocity);

	// Object: Function GPDeformable.GPUASMovementComponent.ApplyServerMulticast
	// Flags: [Native|Protected]
	// Offset: 0x9064f50
	// Params: [ Num(1) Size(0x4) ]
	void ApplyServerMulticast(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.ApplyServerMove
	// Flags: [Native|Protected]
	// Offset: 0x9064ea4
	// Params: [ Num(1) Size(0x4) ]
	void ApplyServerMove(float DeltaTime);

	// Object: Function GPDeformable.GPUASMovementComponent.ApplyCollisionMoveStep
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x9064db0
	// Params: [ Num(2) Size(0x10) ]
	void ApplyCollisionMoveStep(struct FVector& MoveDelta, float DeltaTime);
};

// Object: Class GPDeformable.RangeFinderDigitalDisplayActor
// Size: 0x520 (Inherited: 0x370)
struct ARangeFinderDigitalDisplayActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ARangeFinderDigitalDisplayActor, "RangeFinderDigitalDisplayActor")

	uint8_t DigitalLength; // 0x370(0x1)
	uint8_t VaildNumber; // 0x371(0x1)
	uint8_t Pad_0x372[0x2]; // 0x372(0x2)
	struct FColor FontColor_Hip; // 0x374(0x4)
	struct FColor FontColor_Aim; // 0x378(0x4)
	struct FColor ZeroColor; // 0x37C(0x4)
	struct FColor NotZeroColor; // 0x380(0x4)
	uint8_t Pad_0x384[0xC]; // 0x384(0xC)
	struct FTransform Trans_HipDistance; // 0x390(0x30)
	struct FTransform Trans_HipPreFalling; // 0x3C0(0x30)
	struct FTransform Trans_AimDistance; // 0x3F0(0x30)
	struct TSoftObjectPtr<UStaticMesh> NumPlaneMeshPath; // 0x420(0x28)
	struct FSoftObjectPath Mat_DigitalDisplayPath; // 0x448(0x18)
	struct TSoftObjectPtr<UStaticMesh> DigitalDisplayMeshUIPath; // 0x460(0x28)
	struct FSoftObjectPath Mat_DigitalDisplayUIPath; // 0x488(0x18)
	struct FVector TargetScale; // 0x4A0(0xC)
	uint8_t IsAimActor : 1; // 0x4AC(0x1), Mask(0x1)
	uint8_t BitPad_0x4AC_1 : 7; // 0x4AC(0x1)
	uint8_t Pad_0x4AD[0x3]; // 0x4AD(0x3)
	struct UStaticMeshComponent* NumPlaneMesh; // 0x4B0(0x8)
	struct UMaterialInstanceDynamic* MatDigitalDisplay; // 0x4B8(0x8)
	struct UProceduralMeshComponent* ProceduralMesh; // 0x4C0(0x8)
	struct UStaticMeshComponent* NumPlaneMeshUI; // 0x4C8(0x8)
	struct UMaterialInstanceDynamic* MatDigitalDisplayUI; // 0x4D0(0x8)
	struct TArray<uint8_t> NumTArray; // 0x4D8(0x10)
	struct TArray<struct FColor> ColorTArray; // 0x4E8(0x10)
	struct TArray<struct FVector2D> UVTArray; // 0x4F8(0x10)
	struct TArray<struct FColor> VertexColors; // 0x508(0x10)
	float DisplayNumber; // 0x518(0x4)
	uint8_t Pad_0x51C[0x4]; // 0x51C(0x4)
};

} // namespace SDK
