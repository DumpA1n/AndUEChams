#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: MFClimateRuntime
// Enums: 8
// Structs: 17
// Classes: 60

struct AActor;
struct ADirectionalLight;
struct FHitResult;
struct UActorComponent;
struct UBoxComponent;
struct UCameraComponent;
struct UDirectionalLightComponent;
struct ULevelSequence;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UMaterialParameterCollectionInstance;
struct UNiagaraComponent;
struct UParticleSystemComponent;
struct UPhysicalMaterial;
struct UPrimitiveComponent;
struct UProceduralMeshComponent;
struct USceneComponent;
struct USkyAtmosphereComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture;
struct UTexture2D;
struct UTextureCube;
struct UTextureRenderTarget2D;
struct UVolumeTexture;
struct FMFClimateLightningEvent;
struct FMFClimateCirrusCloudEmissiveEvent;
struct FMFClimateCurlCloudNoiseGenerationParams;
struct FMFClimateNoiseGenerationParams;
struct FMFClimateWeatherMapCloudNoiseGenerationParams;
struct FMFClimateSharedNoiseGenerationSettings;
struct FMFClimatePlatformNoiseGenerationSettings;
struct FMFClimateCloudTypeDescriptor;
struct FMFClimateFractalLightningGenerateParams;
struct FMFClimateRainParameterUpdateTick;
struct FMFClimateRainOcclusionTestQueueItem;
struct FSnowTrail;
struct FMFClimateCloudSettings;
struct FMFClimateWeatherLayer;
struct FMFClimateLayerPreset;
struct FMFClimateWeatherLayerPresetItem;
struct FMFClimateMPCItem;
struct AMFClimateActor;
struct UMFClimateComponent;
struct UMFClimateBakeModeComponent;
struct AMFClimateBakeMode;
struct UMFClimateBaseBakeProcedure;
struct UMFClimateBakeProcedure;
struct UMFClimateBaseLightningEventProducer;
struct UMFClimateCelestialOrbit;
struct AMFClimateCelestialBody;
struct UMFClimateCirrusCloud;
struct AMFClimateCloudCustomVolume;
struct AMFClimateCloudCustomVolumesManager;
struct UMFClimateCloudNoiseGroup;
struct UMFClimateCloudNoiseGroupPlatformSwitcher;
struct UMFClimateCloudProfile;
struct AMFClimateDemoGameMode;
struct UMFClimateEffectComponent;
struct UMFClimateGlobalWindComponent;
struct AMFClimateGlobalWind;
struct UMFClimateSceneLightInterfaceComponent;
struct UMFClimateHDSunMoonSceneLightComponent;
struct AMFClimateHDSunMoonSceneLight;
struct AMFClimateIndoorVolume;
struct AMFClimateIrcCamera;
struct AMFClimateLightningChannelActor;
struct UMFClimateLightningDirectorComponent;
struct UMFClimateLightningEventProducer;
struct UMFClimateMovableRainWetnessComponent;
struct AMFClimateRain;
struct AMFClimateParticleRain;
struct UMFClimatePlayerTransformComponent;
struct UMFClimateRainOcclusionTestManager;
struct AMFClimateSDFCanvas;
struct UMFClimateSettings;
struct UMFClimateSingleSceneLightComponent;
struct AMFClimateSimpleLight;
struct UMFClimateSkyAtmosphereComponent;
struct AMFClimateBaseSkyMesh;
struct AMFClimateSingleMeshSky;
struct UMFClimateSnowTrailManager;
struct UMFClimateStatics;
struct UMFClimateSunMoonSceneLightComponent;
struct AMFClimateSunMoonSceneLight;
struct UMFClimateTimeGeographyComponent;
struct AMFClimateTimeGeography;
struct UMFClimateTodIrcBase;
struct UMFClimateTodIrc2D;
struct UMFClimateTodIrcPanorama;
struct AMFClimateTodSequenceMixer;
struct UMFClimateTypes;
struct UMFClimateUIBase;
struct UMFClimateVolumeCloudComponent;
struct AMFClimateVolumeCloud;
struct UMFClimateWeatherComponent;
struct UMFClimateWeatherLayerPresetsComponent;
struct AMFClimateWeatherLayerSceneBindings;
struct UMFClimateWeatherListEntry;
struct AMFClimateWeatherMapGenerator;
struct AMFClimateWeatherMapCloudMask;
struct UMFClimateWorldSubSystem;

// Object: Enum MFClimateRuntime.EMFClimateCelestialOrbitType
enum class EMFClimateCelestialOrbitType : uint8_t
{
	Sun = 0,
	SunCounter = 1,
	Satellite = 2,
	Distant = 3,
	Manual = 4,
	EMFClimateCelestialOrbitType_MAX = 5
};

// Object: Enum MFClimateRuntime.EMFClimateCloudNoiseGroupTier
enum class EMFClimateCloudNoiseGroupTier : uint8_t
{
	Desktop = 0,
	Mobile = 1,
	EMFClimateCloudNoiseGroupTier_MAX = 2
};

// Object: Enum MFClimateRuntime.EMFClimateNoiseType
enum class EMFClimateNoiseType : uint8_t
{
	PerlinWorley = 0,
	WorleyCloud = 1,
	NRCCloud = 2,
	EMFClimateNoiseType_MAX = 3
};

// Object: Enum MFClimateRuntime.EMFClimateRainWeatherType
enum class EMFClimateRainWeatherType : uint8_t
{
	Rain = 0,
	Snow = 1,
	Sand = 2,
	MistFog = 3,
	Num = 4,
	EMFClimateRainWeatherType_MAX = 5
};

// Object: Enum MFClimateRuntime.EMFClimateTickBudgetAdvice
enum class EMFClimateTickBudgetAdvice : uint8_t
{
	DontTick = 0,
	Tick = 1,
	FullUpdate = 2,
	EMFClimateTickBudgetAdvice_MAX = 3
};

// Object: Enum MFClimateRuntime.EWeatherLayerEvaluationMode
enum class EWeatherLayerEvaluationMode : uint8_t
{
	TimeOfDay = 0,
	SunAngle = 1,
	Constant = 2,
	NUM_EVALUATION_MODE = 3,
	EWeatherLayerEvaluationMode_MAX = 4
};

// Object: Enum MFClimateRuntime.EMFClimateCloudMaskType
enum class EMFClimateCloudMaskType : uint8_t
{
	Normal = 0,
	FullCover = 1,
	EMFClimateCloudMaskType_MAX = 2
};

// Object: Enum MFClimateRuntime.EMFClimateGetFeatureErrorMode
enum class EMFClimateGetFeatureErrorMode : uint8_t
{
	ReturnNull = 0,
	LogAndReturnNull = 1,
	Assert = 2,
	EMFClimateGetFeatureErrorMode_MAX = 3
};

// Object: ScriptStruct MFClimateRuntime.MFClimateLightningEvent
// Size: 0x24 (Inherited: 0x0)
struct FMFClimateLightningEvent
{
	bool bForceRejectPrevious; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector StartPosition; // 0x4(0xC)
	struct FVector EndPosition; // 0x10(0xC)
	float NormalizedReturnStrikeEnergy; // 0x1C(0x4)
	int32_t ReStrikeCount; // 0x20(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateCirrusCloudEmissiveEvent
// Size: 0x38 (Inherited: 0x0)
struct FMFClimateCirrusCloudEmissiveEvent
{
	struct FVector2D ExtraEmissiveIntensityRange; // 0x0(0x8)
	struct FVector2D FakeLightIntensityRange; // 0x8(0x8)
	struct FVector2D IncreaseSpeedRange; // 0x10(0x8)
	struct FVector2D DecreaseSpeedRange; // 0x18(0x8)
	struct FVector2D KeepTimeRange; // 0x20(0x8)
	struct FVector2D LoopTimeRange; // 0x28(0x8)
	struct FVector2D NextEventIntervalRange; // 0x30(0x8)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateCurlCloudNoiseGenerationParams
// Size: 0x8 (Inherited: 0x0)
struct FMFClimateCurlCloudNoiseGenerationParams
{
	int32_t CurlCells; // 0x0(0x4)
	float CurlBrightness; // 0x4(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateNoiseGenerationParams
// Size: 0x14 (Inherited: 0x0)
struct FMFClimateNoiseGenerationParams
{
	EMFClimateNoiseType NoiseType; // 0x0(0x4)
	int32_t CellNoiseCells; // 0x4(0x4)
	float CellNoiseScale; // 0x8(0x4)
	uint8_t bCellNoiseUseSmoothMin : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float CellNoiseSmoothMinK; // 0x10(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateWeatherMapCloudNoiseGenerationParams
// Size: 0xC (Inherited: 0x0)
struct FMFClimateWeatherMapCloudNoiseGenerationParams
{
	int32_t CoverageWorleyCellNum; // 0x0(0x4)
	int32_t CoveragePerlinFreq; // 0x4(0x4)
	int32_t CloudTypePerlinFreq; // 0x8(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateSharedNoiseGenerationSettings
// Size: 0x64 (Inherited: 0x0)
struct FMFClimateSharedNoiseGenerationSettings
{
	struct FMFClimateNoiseGenerationParams BaseNoiseGenerationParams; // 0x0(0x14)
	struct FMFClimateNoiseGenerationParams DetailNoiseGenerationParams; // 0x14(0x14)
	struct FMFClimateNoiseGenerationParams BaseNoise2DGenerationParams; // 0x28(0x14)
	struct FMFClimateNoiseGenerationParams DetailNoise2DGenerationParams; // 0x3C(0x14)
	struct FMFClimateCurlCloudNoiseGenerationParams CurlNoiseParams; // 0x50(0x8)
	struct FMFClimateWeatherMapCloudNoiseGenerationParams WeatherMapParams; // 0x58(0xC)
};

// Object: ScriptStruct MFClimateRuntime.MFClimatePlatformNoiseGenerationSettings
// Size: 0x38 (Inherited: 0x0)
struct FMFClimatePlatformNoiseGenerationSettings
{
	struct FIntVector BaseNoiseTextureSize; // 0x0(0xC)
	struct FIntVector DetailNoiseTextureSize; // 0xC(0xC)
	struct FIntPoint BaseNoise2DTextureSize; // 0x18(0x8)
	struct FIntPoint DetailNoise2DTextureSize; // 0x20(0x8)
	struct FIntPoint WeatherMapNoiseTextureSize; // 0x28(0x8)
	struct FIntPoint CurlNoiseTextureSize; // 0x30(0x8)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateCloudTypeDescriptor
// Size: 0x228 (Inherited: 0x0)
struct FMFClimateCloudTypeDescriptor
{
	float TypeWeight; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FRuntimeFloatCurve BaseNoiseCenter; // 0x8(0x88)
	struct FRuntimeFloatCurve BaseNoiseVariation; // 0x90(0x88)
	struct FRuntimeFloatCurve ExtinctionScale; // 0x118(0x88)
	struct FRuntimeFloatCurve Erosion; // 0x1A0(0x88)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateFractalLightningGenerateParams
// Size: 0x34 (Inherited: 0x0)
struct FMFClimateFractalLightningGenerateParams
{
	int32_t RandomSeed; // 0x0(0x4)
	float InitialBranchProb; // 0x4(0x4)
	float BranchProbAttenuation; // 0x8(0x4)
	struct FVector TargetOffset; // 0xC(0xC)
	float MinSegmentLength; // 0x18(0x4)
	int32_t MaxFracTimes; // 0x1C(0x4)
	float WidthFactor; // 0x20(0x4)
	float BranchShortenFactor; // 0x24(0x4)
	struct FVector2D MinMaxBranchLiftAngleDegrees; // 0x28(0x8)
	float MinChannelCreationDistance; // 0x30(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateRainParameterUpdateTick
// Size: 0x40 (Inherited: 0x38)
struct FMFClimateRainParameterUpdateTick : FTickFunction
{
	struct AMFClimateRain* Rain; // 0x38(0x8)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateRainOcclusionTestQueueItem
// Size: 0x18 (Inherited: 0x0)
struct FMFClimateRainOcclusionTestQueueItem
{
	struct UMFClimateMovableRainWetnessComponent* Component; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct MFClimateRuntime.SnowTrail
// Size: 0x18 (Inherited: 0x0)
struct FSnowTrail
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateCloudSettings
// Size: 0x94 (Inherited: 0x0)
struct FMFClimateCloudSettings
{
	float CloudBaseTilingVertical; // 0x0(0x4)
	float CloudBaseTilingHorizontal; // 0x4(0x4)
	float CloudDetailTiling; // 0x8(0x4)
	float CloudDetailStrength; // 0xC(0x4)
	float CloudCurlStrength; // 0x10(0x4)
	float CloudCurlTiling; // 0x14(0x4)
	float DetailWindMultiply; // 0x18(0x4)
	float CloudBottomHeight; // 0x1C(0x4)
	float CloudThickness; // 0x20(0x4)
	float CloudViewDistance; // 0x24(0x4)
	float CloudViewDistanceEnd; // 0x28(0x4)
	float CloudDetailFadeStart; // 0x2C(0x4)
	float CloudDetailFadeEnd; // 0x30(0x4)
	float HorizonAARange; // 0x34(0x4)
	float HorizonAAValue; // 0x38(0x4)
	struct FLinearColor CloudAlbedo; // 0x3C(0x10)
	float CloudExtinction; // 0x4C(0x4)
	float CloudFirstLobeG; // 0x50(0x4)
	float CloudSecondLobeG; // 0x54(0x4)
	float MaxShadowRayLength; // 0x58(0x4)
	float ShadowAttenuation; // 0x5C(0x4)
	float CloudAmbientOcclusionSky; // 0x60(0x4)
	float CloudAmbientOcclusionGround; // 0x64(0x4)
	float CloudOpacityScale; // 0x68(0x4)
	struct FLinearColor CloudEmissive; // 0x6C(0x10)
	struct FLinearColor LightningTint; // 0x7C(0x10)
	float EarthShadowSharpness; // 0x8C(0x4)
	float InscatteringBrightness; // 0x90(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateWeatherLayer
// Size: 0x60 (Inherited: 0x0)
struct FMFClimateWeatherLayer
{
	float BlendWeight; // 0x0(0x4)
	float EffectiveBlendWeight; // 0x4(0x4)
	struct ULevelSequence* TimeOfDaySequence; // 0x8(0x8)
	EWeatherLayerEvaluationMode EvaluationMode; // 0x10(0x4)
	bool bIgnorePresetSystem; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	int32_t IntTag; // 0x18(0x4)
	uint8_t Pad_0x1C[0x44]; // 0x1C(0x44)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateLayerPreset
// Size: 0x28 (Inherited: 0x0)
struct FMFClimateLayerPreset
{
	struct FString PresetName; // 0x0(0x10)
	struct TArray<struct FMFClimateWeatherLayerPresetItem> Items; // 0x10(0x10)
	float Weight; // 0x20(0x4)
	int32_t IntTag; // 0x24(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateWeatherLayerPresetItem
// Size: 0x10 (Inherited: 0x0)
struct FMFClimateWeatherLayerPresetItem
{
	struct ULevelSequence* Sequence; // 0x0(0x8)
	float Weight; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct MFClimateRuntime.MFClimateMPCItem
// Size: 0x10 (Inherited: 0x0)
struct FMFClimateMPCItem
{
	struct UMaterialParameterCollection* PublicMPC; // 0x0(0x8)
	struct UMaterialParameterCollectionInstance* MPCI; // 0x8(0x8)
};

// Object: Class MFClimateRuntime.MFClimateActor
// Size: 0x310 (Inherited: 0x300)
struct AMFClimateActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateActor, "MFClimateActor")

	struct UMFClimateWorldSubSystem* System; // 0x300(0x8)
	uint8_t Pad_0x308[0x8]; // 0x308(0x8)
};

// Object: Class MFClimateRuntime.MFClimateComponent
// Size: 0xF8 (Inherited: 0xE0)
struct UMFClimateComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateComponent, "MFClimateComponent")

	struct UMFClimateWorldSubSystem* System; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x10]; // 0xE8(0x10)
};

// Object: Class MFClimateRuntime.MFClimateBakeModeComponent
// Size: 0x180 (Inherited: 0xF8)
struct UMFClimateBakeModeComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateBakeModeComponent, "MFClimateBakeModeComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct TArray<struct UMFClimateBaseBakeProcedure*> RegisteredBakeProcedures; // 0x100(0x10)
	uint8_t Pad_0x110[0x60]; // 0x110(0x60)
	bool bBakeMode; // 0x170(0x1)
	uint8_t Pad_0x171[0x7]; // 0x171(0x7)
	struct UMFClimateBaseBakeProcedure* RunningBakeProcedure; // 0x178(0x8)

	// Object: Function MFClimateRuntime.MFClimateBakeModeComponent.ToggleBakeMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40da96c
	// Params: [ Num(1) Size(0x1) ]
	void ToggleBakeMode(bool bBakeModeOn);

	// Object: Function MFClimateRuntime.MFClimateBakeModeComponent.RunBakeProcedure
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40da8c4
	// Params: [ Num(1) Size(0x8) ]
	void RunBakeProcedure(struct UMFClimateBaseBakeProcedure* BakeProcedure);

	// Object: Function MFClimateRuntime.MFClimateBakeModeComponent.IsBakeMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40da8a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsBakeMode();

	// Object: Function MFClimateRuntime.MFClimateBakeModeComponent.BakeUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40da894
	// Params: [ Num(0) Size(0x0) ]
	void BakeUpdate();

	// Object: Function MFClimateRuntime.MFClimateBakeModeComponent.AbortBakeProcedure
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40da880
	// Params: [ Num(0) Size(0x0) ]
	void AbortBakeProcedure();
};

// Object: Class MFClimateRuntime.MFClimateBakeMode
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateBakeMode : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateBakeMode, "MFClimateBakeMode")

	struct UMFClimateBakeModeComponent* BakeMode; // 0x300(0x8)
};

// Object: Class MFClimateRuntime.MFClimateBaseBakeProcedure
// Size: 0x40 (Inherited: 0x28)
struct UMFClimateBaseBakeProcedure : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateBaseBakeProcedure, "MFClimateBaseBakeProcedure")

	bool bEditorOnly; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct UMFClimateBakeModeComponent* Baker; // 0x30(0x8)
	bool bBakeDone; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)

	// Object: Function MFClimateRuntime.MFClimateBaseBakeProcedure.TickBaking
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x40dabec
	// Params: [ Num(0) Size(0x0) ]
	void TickBaking();

	// Object: Function MFClimateRuntime.MFClimateBaseBakeProcedure.OnFinalizeBaking
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x40dab98
	// Params: [ Num(0) Size(0x0) ]
	void OnFinalizeBaking();

	// Object: Function MFClimateRuntime.MFClimateBaseBakeProcedure.OnBeginBake
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x40dac08
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginBake();

	// Object: Function MFClimateRuntime.MFClimateBaseBakeProcedure.OnAbortBaking
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x40dab7c
	// Params: [ Num(0) Size(0x0) ]
	void OnAbortBaking();

	// Object: Function MFClimateRuntime.MFClimateBaseBakeProcedure.IsBakingDone
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dabd0
	// Params: [ Num(1) Size(0x1) ]
	bool IsBakingDone();

	// Object: Function MFClimateRuntime.MFClimateBaseBakeProcedure.FinishBaking
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40dabb4
	// Params: [ Num(0) Size(0x0) ]
	void FinishBaking();

	// Object: Function MFClimateRuntime.MFClimateBaseBakeProcedure.BakeUpdate
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x40dab60
	// Params: [ Num(0) Size(0x0) ]
	void BakeUpdate();
};

// Object: Class MFClimateRuntime.MFClimateBakeProcedure
// Size: 0xB8 (Inherited: 0x40)
struct UMFClimateBakeProcedure : UMFClimateBaseBakeProcedure
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateBakeProcedure, "MFClimateBakeProcedure")

	struct TArray<float> TodsToBake; // 0x40(0x10)
	bool bIterateWeatherPresets; // 0x50(0x1)
	bool bHideCelestials; // 0x51(0x1)
	bool bHideLightning; // 0x52(0x1)
	bool bHideRain; // 0x53(0x1)
	float PrepareTime; // 0x54(0x4)
	bool bDisableVolumetricFog; // 0x58(0x1)
	bool bDisableRealTimeSkyLightTimeSlicing; // 0x59(0x1)
	uint8_t Pad_0x5A[0x2]; // 0x5A(0x2)
	int32_t OuterLoopCount; // 0x5C(0x4)
	int32_t CurrentOuterLoop; // 0x60(0x4)
	int32_t CurrentTODIndex; // 0x64(0x4)
	float CurrentTOD; // 0x68(0x4)
	int32_t CurrentWeatherIndex; // 0x6C(0x4)
	struct FString CurrentWeatherName; // 0x70(0x10)
	int32_t BackupTimeSlicingEnabled; // 0x80(0x4)
	int32_t BackupVolumetricFog; // 0x84(0x4)
	float BackupTOD; // 0x88(0x4)
	bool bBackupEventProducerActive; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	struct TArray<float> BackupWeatherLayers; // 0x90(0x10)
	uint8_t Pad_0xA0[0x18]; // 0xA0(0x18)

	// Object: Function MFClimateRuntime.MFClimateBakeProcedure.SetupBake
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x40daa54
	// Params: [ Num(0) Size(0x0) ]
	void SetupBake();

	// Object: Function MFClimateRuntime.MFClimateBakeProcedure.DoBake
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x40daa70
	// Params: [ Num(0) Size(0x0) ]
	void DoBake();
};

// Object: Class MFClimateRuntime.MFClimateBaseLightningEventProducer
// Size: 0x30 (Inherited: 0x28)
struct UMFClimateBaseLightningEventProducer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateBaseLightningEventProducer, "MFClimateBaseLightningEventProducer")

	struct UMFClimateLightningDirectorComponent* Director; // 0x28(0x8)

	// Object: Function MFClimateRuntime.MFClimateBaseLightningEventProducer.Tick
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x998d968
	// Params: [ Num(1) Size(0x4) ]
	void Tick(float DeltaTime);
};

// Object: Class MFClimateRuntime.MFClimateCelestialOrbit
// Size: 0x270 (Inherited: 0x230)
struct UMFClimateCelestialOrbit : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateCelestialOrbit, "MFClimateCelestialOrbit")

	EMFClimateCelestialOrbitType OrbitType; // 0x224(0x4)
	uint8_t SatelliteOrbitFrequencyYear; // 0x228(0x1)
	float AscendingNodeLongitude; // 0x22C(0x4)
	float OrbitalInclination; // 0x230(0x4)
	float OrbitOffset; // 0x234(0x4)
	float DistantOrbitLatitude; // 0x238(0x4)
	float DistantOrbitLongitude; // 0x23C(0x4)
	float ExtraHorizontalOffset; // 0x240(0x4)
	struct FRotator CelestialRotation; // 0x244(0xC)
	struct FRotator CelestialPosition; // 0x250(0xC)
	struct FRotator CelestialToEarthEcliptic; // 0x25C(0xC)

	// Object: Function MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialToEarthEcliptic
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40dad8c
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetCelestialToEarthEcliptic();

	// Object: Function MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialRotationInScene
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dae20
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetCelestialRotationInScene();

	// Object: Function MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialPositionInScene
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dadfc
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetCelestialPositionInScene();

	// Object: Function MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialFacingSceneDirection
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dadb4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCelestialFacingSceneDirection();
};

// Object: Class MFClimateRuntime.MFClimateCelestialBody
// Size: 0x328 (Inherited: 0x300)
struct AMFClimateCelestialBody : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateCelestialBody, "MFClimateCelestialBody")

	bool bSpriteMode; // 0x300(0x1)
	uint8_t Pad_0x301[0x3]; // 0x301(0x3)
	struct FColor Color; // 0x304(0x4)
	float Intensity; // 0x308(0x4)
	float AngularDiameter; // 0x30C(0x4)
	float Distance; // 0x310(0x4)
	uint8_t Pad_0x314[0x4]; // 0x314(0x4)
	struct UMFClimateCelestialOrbit* OrbitComponent; // 0x318(0x8)
	struct USceneComponent* RotatedPivot; // 0x320(0x8)

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.SystemTexturesRefreshed
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void SystemTexturesRefreshed();

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.SetIntensity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40daf60
	// Params: [ Num(1) Size(0x4) ]
	void SetIntensity(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.SetColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x998dd50
	// Params: [ Num(1) Size(0x4) ]
	void SetColor(struct FColor NewValue);

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.GetOrbitComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dae50
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateCelestialOrbit* GetOrbitComponent();

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.GetIrradiance
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40daee0
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetIrradiance();

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.GetIntensity
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40daea8
	// Params: [ Num(1) Size(0x4) ]
	float GetIntensity();

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.GetColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40daec4
	// Params: [ Num(1) Size(0x4) ]
	struct FColor GetColor();

	// Object: Function MFClimateRuntime.MFClimateCelestialBody.GetCenterDir
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dae6c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCenterDir();
};

// Object: Class MFClimateRuntime.MFClimateCirrusCloud
// Size: 0x1E0 (Inherited: 0xF8)
struct UMFClimateCirrusCloud : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateCirrusCloud, "MFClimateCirrusCloud")

	bool bAutoColorFromSystem; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	struct FLinearColor EnvironmentLightColor; // 0xFC(0x10)
	struct FVector EnvironmentLightDir; // 0x10C(0xC)
	float Height; // 0x118(0x4)
	float Fill; // 0x11C(0x4)
	struct FColor Albedo; // 0x120(0x4)
	struct FLinearColor Emissive; // 0x124(0x10)
	float ExtinctionCoefficient; // 0x134(0x4)
	float FirstLobeG; // 0x138(0x4)
	float SecondLobeG; // 0x13C(0x4)
	float CirrusCloudRotateAngle; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct UTexture2D* ExtraEmissiveTexture; // 0x148(0x8)
	float StartExtraEmissiveIntensity; // 0x150(0x4)
	float EndExtraEmissiveIntensity; // 0x154(0x4)
	float StartFakeLightIntensity; // 0x158(0x4)
	float EndFakeLightIntensity; // 0x15C(0x4)
	struct FLinearColor ExtraEmissiveColor; // 0x160(0x10)
	float ExtraEmissiveIncreaseSpeed; // 0x170(0x4)
	float ExtraEmissiveDecreaseSpeed; // 0x174(0x4)
	float ExtraEmissiveKeepTime; // 0x178(0x4)
	float NextEmissiveEventInterval; // 0x17C(0x4)
	int32_t ExtraEmissiveLoopTime; // 0x180(0x4)
	float BlendProgress; // 0x184(0x4)
	struct FMFClimateCirrusCloudEmissiveEvent CurrentEvent; // 0x188(0x38)
	uint8_t Pad_0x1C0[0x20]; // 0x1C0(0x20)

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.UpdateCloudExtraEmissive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40db0f8
	// Params: [ Num(0) Size(0x0) ]
	void UpdateCloudExtraEmissive();

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.StartExtraCloudEmissiveEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40db1b4
	// Params: [ Num(2) Size(0x3C) ]
	void StartExtraCloudEmissiveEvent(struct FMFClimateCirrusCloudEmissiveEvent Event, float DelayTime);

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.RefreshCloudEmissiveEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40db10c
	// Params: [ Num(1) Size(0x4) ]
	void RefreshCloudEmissiveEvent(float DelayTime);

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.GetExtraEmissiveTexture
	// Flags: [Final|Native|Public]
	// Offset: 0x40db024
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture2D* GetExtraEmissiveTexture();

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.GetExtraEmissiveColor
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x40db08c
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetExtraEmissiveColor();

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.GetCurrentExtraEmissive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40db0c4
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentExtraEmissive();

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.GetCloudExtrFakeLightIntensity
	// Flags: [Final|Native|Public]
	// Offset: 0x40db058
	// Params: [ Num(1) Size(0x4) ]
	float GetCloudExtrFakeLightIntensity();

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.DebugStopCloudEmissiveEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40db2c0
	// Params: [ Num(0) Size(0x0) ]
	void DebugStopCloudEmissiveEvent();

	// Object: Function MFClimateRuntime.MFClimateCirrusCloud.DebugStartCloudEmissiveEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40db2d4
	// Params: [ Num(0) Size(0x0) ]
	void DebugStartCloudEmissiveEvent();
};

// Object: Class MFClimateRuntime.MFClimateCloudCustomVolume
// Size: 0x338 (Inherited: 0x300)
struct AMFClimateCloudCustomVolume : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateCloudCustomVolume, "MFClimateCloudCustomVolume")

	int32_t TextureIndex; // 0x300(0x4)
	float EdgeThreshold; // 0x304(0x4)
	float BaseTiling; // 0x308(0x4)
	float DetailStrength; // 0x30C(0x4)
	float DetailTiling; // 0x310(0x4)
	float CurlStrength; // 0x314(0x4)
	float CurlTiling; // 0x318(0x4)
	struct FVector2D DetailOffset; // 0x31C(0x8)
	float BaseNoiseCenter; // 0x324(0x4)
	float BaseNoiseVariation; // 0x328(0x4)
	float ExtinctionScale; // 0x32C(0x4)
	float Erosion; // 0x330(0x4)
	uint8_t Pad_0x334[0x4]; // 0x334(0x4)
};

// Object: Class MFClimateRuntime.MFClimateCloudCustomVolumesManager
// Size: 0x348 (Inherited: 0x300)
struct AMFClimateCloudCustomVolumesManager : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateCloudCustomVolumesManager, "MFClimateCloudCustomVolumesManager")

	struct TArray<struct UVolumeTexture*> CloudTextures; // 0x300(0x10)
	bool bShowCloudBoundingBoxes; // 0x310(0x1)
	uint8_t Pad_0x311[0x7]; // 0x311(0x7)
	struct UVolumeTexture* CloudTextureAtlas; // 0x318(0x8)
	uint8_t Pad_0x320[0x28]; // 0x320(0x28)
};

// Object: Class MFClimateRuntime.MFClimateCloudNoiseGroup
// Size: 0x88 (Inherited: 0x30)
struct UMFClimateCloudNoiseGroup : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateCloudNoiseGroup, "MFClimateCloudNoiseGroup")

	struct FMFClimatePlatformNoiseGenerationSettings PlatformSettings; // 0x30(0x38)
	struct UVolumeTexture* SavedBaseNoise; // 0x68(0x8)
	struct UVolumeTexture* SavedDetailNoise; // 0x70(0x8)
	struct UTexture2D* SavedWeatherMapNoise; // 0x78(0x8)
	struct UTexture2D* SavedCurlNoise; // 0x80(0x8)

	// Object: Function MFClimateRuntime.MFClimateCloudNoiseGroup.CreateAssets
	// Flags: [Final|Native|Public]
	// Offset: 0x40db364
	// Params: [ Num(0) Size(0x0) ]
	void CreateAssets();
};

// Object: Class MFClimateRuntime.MFClimateCloudNoiseGroupPlatformSwitcher
// Size: 0x38 (Inherited: 0x30)
struct UMFClimateCloudNoiseGroupPlatformSwitcher : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateCloudNoiseGroupPlatformSwitcher, "MFClimateCloudNoiseGroupPlatformSwitcher")

	struct UMFClimateCloudNoiseGroup* CookedAsset; // 0x30(0x8)

	// Object: Function MFClimateRuntime.MFClimateCloudNoiseGroupPlatformSwitcher.UpdateAllNoise
	// Flags: [Final|Native|Public]
	// Offset: 0x40db380
	// Params: [ Num(0) Size(0x0) ]
	void UpdateAllNoise();
};

// Object: Class MFClimateRuntime.MFClimateCloudProfile
// Size: 0x78 (Inherited: 0x30)
struct UMFClimateCloudProfile : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateCloudProfile, "MFClimateCloudProfile")

	struct TArray<struct FMFClimateCloudTypeDescriptor> TypeDescriptors; // 0x30(0x10)
	struct UTexture2D* LUT0; // 0x40(0x8)
	uint32_t LUT0SizeX; // 0x48(0x4)
	uint32_t LUT0SizeY; // 0x4C(0x4)
	float LUTMSApproxMaxOpticalDepth; // 0x50(0x4)
	float LUTMSApproxRangeCompress; // 0x54(0x4)
	uint32_t LUTMSApproxSizeX; // 0x58(0x4)
	uint32_t LUTMSApproxSizeY; // 0x5C(0x4)
	uint32_t LUTMSApproxIterationCount; // 0x60(0x4)
	float CloudMSApproxA; // 0x64(0x4)
	float CloudMSApproxB; // 0x68(0x4)
	float CloudMSApproxC; // 0x6C(0x4)
	float CloudMSApproxLobeG1; // 0x70(0x4)
	float CloudMSApproxLobeG2; // 0x74(0x4)
};

// Object: Class MFClimateRuntime.MFClimateDemoGameMode
// Size: 0x3E8 (Inherited: 0x3E8)
struct AMFClimateDemoGameMode : AGameMode
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateDemoGameMode, "MFClimateDemoGameMode")
};

// Object: Class MFClimateRuntime.MFClimateEffectComponent
// Size: 0x790 (Inherited: 0x790)
struct UMFClimateEffectComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateEffectComponent, "MFClimateEffectComponent")

	EMFClimateRainWeatherType RainWeatherType; // 0x78C(0x1)
};

// Object: Class MFClimateRuntime.MFClimateGlobalWindComponent
// Size: 0x128 (Inherited: 0xF8)
struct UMFClimateGlobalWindComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateGlobalWindComponent, "MFClimateGlobalWindComponent")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct FVector2D Direction; // 0x110(0x8)
	float Level; // 0x118(0x4)
	struct FVector2D WindTravel; // 0x11C(0x8)
	uint8_t Pad_0x124[0x4]; // 0x124(0x4)

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.SetWindLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40de268
	// Params: [ Num(1) Size(0x4) ]
	void SetWindLevel(float WindLevel);

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.SetWindDirection
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40de188
	// Params: [ Num(1) Size(0x8) ]
	void SetWindDirection(struct FVector2D WindDir);

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.SetLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f060
	// Params: [ Num(1) Size(0x4) ]
	void SetLevel(float WindLevel);

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.SetDirection
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x998eea4
	// Params: [ Num(1) Size(0x8) ]
	void SetDirection(struct FVector2D WindDir);

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.GetWindVelocityInMeter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40de398
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetWindVelocityInMeter();

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.GetWindTravel
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40de378
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetWindTravel();

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.GetWindLevel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40de160
	// Params: [ Num(1) Size(0x4) ]
	float GetWindLevel();

	// Object: Function MFClimateRuntime.MFClimateGlobalWindComponent.GetWindDirection
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40de320
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetWindDirection();
};

// Object: Class MFClimateRuntime.MFClimateGlobalWind
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateGlobalWind : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateGlobalWind, "MFClimateGlobalWind")

	struct UMFClimateGlobalWindComponent* GlobalWindComponent; // 0x300(0x8)
};

// Object: Class MFClimateRuntime.MFClimateSceneLightInterfaceComponent
// Size: 0x100 (Inherited: 0xF8)
struct UMFClimateSceneLightInterfaceComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateSceneLightInterfaceComponent, "MFClimateSceneLightInterfaceComponent")

	bool bHasMainLightControl; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	float MobileForceUpdateTimer; // 0xFC(0x4)

	// Object: Function MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetMainLight
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e2c24
	// Params: [ Num(2) Size(0x9) ]
	bool GetMainLight(struct UDirectionalLightComponent*& OutLightComponent);

	// Object: Function MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetLightInfoForLightingCloud
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e28fc
	// Params: [ Num(6) Size(0x35) ]
	bool GetLightInfoForLightingCloud(struct FVector& OutDir, float BottomHeight, struct FLinearColor& OutColorBottom, float TopHeight, struct FLinearColor& OutColorTop);

	// Object: Function MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetGroundLevelIrradiance
	// Flags: [Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e28bc
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetGroundLevelIrradiance();

	// Object: Function MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetCloudLightingAtHeight
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e2ad0
	// Params: [ Num(4) Size(0x21) ]
	bool GetCloudLightingAtHeight(float Height, struct FVector& LightDir, struct FLinearColor& Color);

	// Object: Function MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetAtmosphereLight
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e2cec
	// Params: [ Num(4) Size(0x21) ]
	bool GetAtmosphereLight(struct FVector& OutDir, struct FLinearColor& OutColoredBrightness, int32_t LightIndex);
};

// Object: Class MFClimateRuntime.MFClimateHDSunMoonSceneLightComponent
// Size: 0x1A8 (Inherited: 0x100)
struct UMFClimateHDSunMoonSceneLightComponent : UMFClimateSceneLightInterfaceComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateHDSunMoonSceneLightComponent, "MFClimateHDSunMoonSceneLightComponent")

	struct ADirectionalLight* SunLight; // 0x100(0x8)
	struct ADirectionalLight* MoonLight; // 0x108(0x8)
	struct AMFClimateCelestialBody* BindSun; // 0x110(0x8)
	struct AMFClimateCelestialBody* BindMoon; // 0x118(0x8)
	struct FVector SunDirection; // 0x120(0xC)
	struct FVector MoonDirection; // 0x12C(0xC)
	struct FLinearColor SunColoredBrightness; // 0x138(0x10)
	struct FLinearColor MoonColoredBrightness; // 0x148(0x10)
	bool bAutoUpdateCloudCastShadow; // 0x158(0x1)
	uint8_t Pad_0x159[0x3]; // 0x159(0x3)
	float CastCloudShadowTransferTime; // 0x15C(0x4)
	struct UDirectionalLightComponent* SunLightComponent; // 0x160(0x8)
	struct UDirectionalLightComponent* MoonLightComponent; // 0x168(0x8)
	struct FLinearColor SunScatteredIrradiance; // 0x170(0x10)
	struct FLinearColor MoonScatteredIrradiance; // 0x180(0x10)
	struct FLinearColor CurrentLightningSceneLightColor; // 0x190(0x10)
	struct UDirectionalLightComponent* LightningFakeLight; // 0x1A0(0x8)
};

// Object: Class MFClimateRuntime.MFClimateHDSunMoonSceneLight
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateHDSunMoonSceneLight : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateHDSunMoonSceneLight, "MFClimateHDSunMoonSceneLight")

	struct UMFClimateHDSunMoonSceneLightComponent* MFClimateLight; // 0x300(0x8)
};

// Object: Class MFClimateRuntime.MFClimateIndoorVolume
// Size: 0x338 (Inherited: 0x300)
struct AMFClimateIndoorVolume : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateIndoorVolume, "MFClimateIndoorVolume")

	struct UBoxComponent* CollisionComponent; // 0x300(0x8)
	bool bBlockParticleEffects; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)
	struct TArray<struct UMFClimateEffectComponent*> EffectComponents; // 0x310(0x10)
	struct FVector EffectVolumeExtend; // 0x320(0xC)
	uint8_t Pad_0x32C[0xC]; // 0x32C(0xC)
};

// Object: Class MFClimateRuntime.MFClimateIrcCamera
// Size: 0x318 (Inherited: 0x300)
struct AMFClimateIrcCamera : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateIrcCamera, "MFClimateIrcCamera")

	struct UCameraComponent* CameraComponent; // 0x300(0x8)
	struct FString CameraTag; // 0x308(0x10)

	// Object: Function MFClimateRuntime.MFClimateIrcCamera.GetCameraTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de510
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCameraTag();
};

// Object: Class MFClimateRuntime.MFClimateLightningChannelActor
// Size: 0x390 (Inherited: 0x300)
struct AMFClimateLightningChannelActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateLightningChannelActor, "MFClimateLightningChannelActor")

	struct UMaterialInterface* LightningMaterial; // 0x300(0x8)
	struct UMaterialInstanceDynamic* Mid; // 0x308(0x8)
	struct FMFClimateFractalLightningGenerateParams Params; // 0x310(0x34)
	uint8_t Pad_0x344[0x4]; // 0x344(0x4)
	struct UProceduralMeshComponent* PMC; // 0x348(0x8)
	float Width; // 0x350(0x4)
	float MinObserveDegree; // 0x354(0x4)
	bool bEnableMockRange; // 0x358(0x1)
	uint8_t Pad_0x359[0x3]; // 0x359(0x3)
	float MockRange; // 0x35C(0x4)
	uint8_t Pad_0x360[0x30]; // 0x360(0x30)

	// Object: Function MFClimateRuntime.MFClimateLightningChannelActor.RefreshChannel
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x40de5e8
	// Params: [ Num(4) Size(0x20) ]
	void RefreshChannel(struct FVector InStart, struct FVector InEnd, int32_t InRandomSeed, float NormalizedEnergy);

	// Object: Function MFClimateRuntime.MFClimateLightningChannelActor.ReceiveOnReturnStrike
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(6) Size(0x38) ]
	void ReceiveOnReturnStrike(float NormalizedEnergy, struct FVector StartInKM, struct FVector EndInKM, int32_t InRandomSeed, struct FVector MockActorLocation, struct FVector MockActorScale);

	// Object: Function MFClimateRuntime.MFClimateLightningChannelActor.ReceiveOnRefreshChannel
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(6) Size(0x38) ]
	void ReceiveOnRefreshChannel(float NormalizedEnergy, struct FVector StartInKM, struct FVector EndInKM, int32_t InRandomSeed, struct FVector MockActorLocation, struct FVector MockActorScale);

	// Object: Function MFClimateRuntime.MFClimateLightningChannelActor.ReceiveOnLightningHidden
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveOnLightningHidden();

	// Object: Function MFClimateRuntime.MFClimateLightningChannelActor.GenerateFractalTree
	// Flags: [Final|Native|Public]
	// Offset: 0x40de750
	// Params: [ Num(0) Size(0x0) ]
	void GenerateFractalTree();
};

// Object: Class MFClimateRuntime.MFClimateLightningDirectorComponent
// Size: 0x1F0 (Inherited: 0xF8)
struct UMFClimateLightningDirectorComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateLightningDirectorComponent, "MFClimateLightningDirectorComponent")

	struct AMFClimateLightningChannelActor* InstantiatedLightningActor; // 0xF8(0x8)
	struct FMFClimateLightningEvent ExecutingLightningEvent; // 0x100(0x24)
	float LightningLeaderProgress; // 0x124(0x4)
	float CurrentEnergy; // 0x128(0x4)
	int32_t RemainingReStrike; // 0x12C(0x4)
	float ReStrikeTimer; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct UMFClimateBaseLightningEventProducer* EventProducer; // 0x138(0x8)
	struct AMFClimateLightningChannelActor* LightningChannelType; // 0x140(0x8)
	float LightningFrequency; // 0x148(0x4)
	float ReturnStrikeEnergyMean; // 0x14C(0x4)
	float ReturnStrikeEnergyStdDev; // 0x150(0x4)
	float StrikeEnergyBoost; // 0x154(0x4)
	float LightningDecayAlpha; // 0x158(0x4)
	struct FLinearColor LightningTint; // 0x15C(0x10)
	float EventOverEnergyThreshold; // 0x16C(0x4)
	bool bAllowLightningEventOverride; // 0x170(0x1)
	uint8_t Pad_0x171[0x3]; // 0x171(0x3)
	float ReStrikeFrequency; // 0x174(0x4)
	float ReStrikeCountMean; // 0x178(0x4)
	float ReStrikeCountStdDev; // 0x17C(0x4)
	float ReStrikeEnergyMean; // 0x180(0x4)
	float ReStrikeEnergyStdDev; // 0x184(0x4)
	float ReStrikeTickInterval; // 0x188(0x4)
	float LightningLeaderDuration; // 0x18C(0x4)
	float LightningLeaderRelativeEv; // 0x190(0x4)
	bool bRelativeToCamera; // 0x194(0x1)
	uint8_t Pad_0x195[0x3]; // 0x195(0x3)
	float LightningCloudLayerHeight; // 0x198(0x4)
	float MaxDistance; // 0x19C(0x4)
	float MinDistance; // 0x1A0(0x4)
	float MaxGroundOffset; // 0x1A4(0x4)
	float SceneLightEVScale; // 0x1A8(0x4)
	bool bDevelopmentModeEnable; // 0x1AC(0x1)
	bool bDevelopmentModeAutoLightning; // 0x1AD(0x1)
	bool bEventProducerActive; // 0x1AE(0x1)
	uint8_t Pad_0x1AF[0x1]; // 0x1AF(0x1)
	struct FMulticastInlineDelegate OnLightningEventRegistered; // 0x1B0(0x10)
	struct FMulticastInlineDelegate OnLightningStrike; // 0x1C0(0x10)
	uint8_t Pad_0x1D0[0x20]; // 0x1D0(0x20)

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.SetReStrikeRandomSeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40de8d0
	// Params: [ Num(1) Size(0x4) ]
	void SetReStrikeRandomSeed(int32_t Seed);

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.SetLightningFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40debf0
	// Params: [ Num(1) Size(0x4) ]
	void SetLightningFrequency(float InValue);

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.SampleLightningEvent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de784
	// Params: [ Num(2) Size(0x28) ]
	struct FMFClimateLightningEvent SampleLightningEvent(int32_t Seed);

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.RegisterLightningEventDetermined
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40dea5c
	// Params: [ Num(2) Size(0x28) ]
	void RegisterLightningEventDetermined(const struct FMFClimateLightningEvent& Evt, int32_t RandomSeed);

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.RegisterLightningEvent
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40de998
	// Params: [ Num(1) Size(0x24) ]
	void RegisterLightningEvent(const struct FMFClimateLightningEvent& Evt);

	// Object: DelegateFunction MFClimateRuntime.MFClimateLightningDirectorComponent.LightningStrikeEventDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x28) ]
	void LightningStrikeEventDelegate__DelegateSignature(const struct FMFClimateLightningEvent& Event, float NormStrikeEnergy);

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.LightningEventGoingOn
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40decf8
	// Params: [ Num(1) Size(0x1) ]
	bool LightningEventGoingOn();

	// Object: DelegateFunction MFClimateRuntime.MFClimateLightningDirectorComponent.LightningEventDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x24) ]
	void LightningEventDelegate__DelegateSignature(const struct FMFClimateLightningEvent& Event);

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetSceneLightIntensityScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40debb8
	// Params: [ Num(1) Size(0x4) ]
	float GetSceneLightIntensityScale();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetSceneLightEVScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40deb9c
	// Params: [ Num(1) Size(0x4) ]
	float GetSceneLightEVScale();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetReStrikeCountStdDev
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de898
	// Params: [ Num(1) Size(0x4) ]
	float GetReStrikeCountStdDev();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetReStrikeCountMean
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de8b4
	// Params: [ Num(1) Size(0x4) ]
	float GetReStrikeCountMean();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetMinDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de860
	// Params: [ Num(1) Size(0x4) ]
	float GetMinDistance();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetMaxGroundOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de844
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxGroundOffset();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetMaxDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de87c
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxDistance();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetLocalToCamera
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40deb80
	// Params: [ Num(1) Size(0x1) ]
	bool GetLocalToCamera();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetLightningTint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40deb60
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetLightningTint();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetLightningFrequency
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dec94
	// Params: [ Num(1) Size(0x4) ]
	float GetLightningFrequency();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetLightningChannelActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40decb0
	// Params: [ Num(1) Size(0x8) ]
	struct AMFClimateLightningChannelActor* GetLightningChannelActor();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.GetEnergyNormalDistribution
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40de978
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetEnergyNormalDistribution();

	// Object: Function MFClimateRuntime.MFClimateLightningDirectorComponent.DevelopmentModeCallLightning
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x40dece4
	// Params: [ Num(0) Size(0x0) ]
	void DevelopmentModeCallLightning();
};

// Object: Class MFClimateRuntime.MFClimateLightningEventProducer
// Size: 0x40 (Inherited: 0x30)
struct UMFClimateLightningEventProducer : UMFClimateBaseLightningEventProducer
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateLightningEventProducer, "MFClimateLightningEventProducer")

	bool bDeterministicByTOD; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float TestIntervalInTodSeconds; // 0x34(0x4)
	bool bDisableDeterministicInEditor; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: Class MFClimateRuntime.MFClimateMovableRainWetnessComponent
// Size: 0x228 (Inherited: 0xE0)
struct UMFClimateMovableRainWetnessComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateMovableRainWetnessComponent, "MFClimateMovableRainWetnessComponent")

	struct UPhysicalMaterial* LastOccludePhysicalMaterial; // 0xE0(0x8)
	float WetSpeed; // 0xE8(0x4)
	float DrySpeed; // 0xEC(0x4)
	float OcclusionSmoothRate; // 0xF0(0x4)
	float SnowWetSpeed; // 0xF4(0x4)
	float SnowDrySpeed; // 0xF8(0x4)
	float SnowOcclusionSmoothRate; // 0xFC(0x4)
	float SandWetSpeed; // 0x100(0x4)
	float SandDrySpeed; // 0x104(0x4)
	float SandOcclusionSmoothRate; // 0x108(0x4)
	bool bUpdateMaterialParam; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)
	struct FName AccumulationParameterName; // 0x110(0x8)
	struct FName OcclusionParameterName; // 0x118(0x8)
	bool bUpdatePrimitiveData; // 0x120(0x1)
	uint8_t PrimitiveDataIndex; // 0x121(0x1)
	uint8_t PrimitiveDataValidBitIndex; // 0x122(0x1)
	uint8_t Pad_0x123[0x1]; // 0x123(0x1)
	float OcclusionRate; // 0x124(0x4)
	float CurrentAccumulation; // 0x128(0x4)
	float SmoothedOcclusion; // 0x12C(0x4)
	float AppliedVisualAccumulation; // 0x130(0x4)
	float AppliedVisualOcclusion; // 0x134(0x4)
	bool bShouldForceUpdateOcclusion; // 0x138(0x1)
	uint8_t Pad_0x139[0x17]; // 0x139(0x17)
	struct FMulticastInlineDelegate OnOcclusionChanged; // 0x150(0x10)
	uint8_t Pad_0x160[0x8]; // 0x160(0x8)
	struct UMFClimateWorldSubSystem* MFClimateSystem; // 0x168(0x8)
	struct AMFClimateRain* RainActor; // 0x170(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> CollectedMaterials; // 0x178(0x10)
	struct TSet<struct UPrimitiveComponent*> CollectedPrimitive; // 0x188(0x50)
	struct TSet<struct AActor*> CollectedProtective; // 0x1D8(0x50)

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.UpdateWetnessParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40dee98
	// Params: [ Num(2) Size(0x8) ]
	void UpdateWetnessParameter(float GlobalRainAmount, float DeltaTime);

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.UpdateVisualEffects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40df0e4
	// Params: [ Num(1) Size(0x1) ]
	void UpdateVisualEffects(bool bForceUpdate);

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.UpdateOcclusionRateByLineTrace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40dedb0
	// Params: [ Num(1) Size(0x1) ]
	void UpdateOcclusionRateByLineTrace(bool bForceSync);

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.RefreshPrimitiveMaterialCollection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40df0d0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshPrimitiveMaterialCollection();

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.RefreshPrimitiveAndUpdateVisualEffectsNextFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40df0a8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshPrimitiveAndUpdateVisualEffectsNextFrame();

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.RefreshPrimitiveAndUpdateVisualEffects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40df0bc
	// Params: [ Num(0) Size(0x0) ]
	void RefreshPrimitiveAndUpdateVisualEffects();

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.GetOcclusionRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dee60
	// Params: [ Num(1) Size(0x4) ]
	float GetOcclusionRate();

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.GetOcclusionDetectionPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40def7c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetOcclusionDetectionPosition();

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.GetLastOccludeMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40dee7c
	// Params: [ Num(1) Size(0x8) ]
	struct UPhysicalMaterial* GetLastOccludeMaterial();

	// Object: Function MFClimateRuntime.MFClimateMovableRainWetnessComponent.AddExtraPrimitive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40defb8
	// Params: [ Num(2) Size(0x9) ]
	void AddExtraPrimitive(struct AActor* Actor, bool bAddChild);
};

// Object: Class MFClimateRuntime.MFClimateRain
// Size: 0x410 (Inherited: 0x310)
struct AMFClimateRain : AMFClimateActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateRain, "MFClimateRain")

	uint8_t DynamicObjectPrimitiveIndex; // 0x309(0x1)
	bool bIsUsePrimitiveCustomData; // 0x30A(0x1)
	float PuddleDisturbSpeed; // 0x30C(0x4)
	float PuddleDisturbTiling; // 0x310(0x4)
	float PuddleDisturbStrength; // 0x314(0x4)
	float PuddleRippleStrength; // 0x318(0x4)
	struct FVector4 PuddleRippleFrequencies; // 0x320(0x10)
	float PuddleRippleTiling; // 0x330(0x4)
	float IsSnow; // 0x334(0x4)
	float IsSand; // 0x338(0x4)
	float IsMistFog; // 0x33C(0x4)
	struct UMFClimateSnowTrailManager* SnowTrailManager; // 0x340(0x8)
	float HeavySnowPercentage; // 0x348(0x4)
	float AmountOfSnowStorm; // 0x34C(0x4)
	float AmountOfRain; // 0x350(0x4)
	float Accumulation; // 0x354(0x4)
	float MaxAccumulation; // 0x358(0x4)
	bool bRainAutoUpdateAccumulation; // 0x35C(0x1)
	uint8_t Pad_0x35F[0x1]; // 0x35F(0x1)
	float AccumulateSpeed; // 0x360(0x4)
	float DecaySpeed; // 0x364(0x4)
	float WindTiltMultiplier; // 0x368(0x4)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)
	struct UMFClimatePlayerTransformComponent* PlayerPosition; // 0x370(0x8)
	struct UMFClimatePlayerTransformComponent* PlayerRotation; // 0x378(0x8)
	struct USceneComponent* WindAlignedPivot; // 0x380(0x8)
	struct USceneComponent* BackgroundEffectPivot; // 0x388(0x8)
	struct UMFClimateMovableRainWetnessComponent* WetnessComponent; // 0x390(0x8)
	bool bTraceComplex; // 0x398(0x1)
	uint8_t DebugType; // 0x399(0x1)
	bool bUseObjectChannels; // 0x39A(0x1)
	uint8_t DetectChannel; // 0x39B(0x1)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	struct TArray<uint8_t> ObjectChannels; // 0x3A0(0x10)
	float detectrange; // 0x3B0(0x4)
	uint8_t Pad_0x3B4[0x4]; // 0x3B4(0x4)
	struct UMFClimateRainOcclusionTestManager* RainOcclusionTestManager; // 0x3B8(0x8)
	uint8_t Pad_0x3C0[0x50]; // 0x3C0(0x50)

	// Object: Function MFClimateRuntime.MFClimateRain.SetRainAutoUpdateAccumulation
	// Flags: [Final|Native|Public]
	// Offset: 0x40e24e8
	// Params: [ Num(1) Size(0x1) ]
	void SetRainAutoUpdateAccumulation(bool NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.SetIsSnow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97f56d8
	// Params: [ Num(1) Size(0x4) ]
	void SetIsSnow(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.SetIsSand
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e2708
	// Params: [ Num(1) Size(0x4) ]
	void SetIsSand(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.SetIsMistFog
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e2660
	// Params: [ Num(1) Size(0x4) ]
	void SetIsMistFog(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.SetHeavySnowPercentage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e2440
	// Params: [ Num(1) Size(0x4) ]
	void SetHeavySnowPercentage(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.SetAmountOfSnowStorm
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e2398
	// Params: [ Num(1) Size(0x4) ]
	void SetAmountOfSnowStorm(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.SetAmountOfRain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x85c56ec
	// Params: [ Num(1) Size(0x4) ]
	void SetAmountOfRain(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.SetAccumulation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x76a6f00
	// Params: [ Num(1) Size(0x4) ]
	void SetAccumulation(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateRain.OnParameterUpdated
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x40e237c
	// Params: [ Num(0) Size(0x0) ]
	void OnParameterUpdated();

	// Object: Function MFClimateRuntime.MFClimateRain.LineTraceRainOcclusion
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x40e219c
	// Params: [ Num(4) Size(0xB9) ]
	bool LineTraceRainOcclusion(struct FVector position, const struct TArray<struct AActor*>& ActorsToIgnore, struct FHitResult& OutHitResult);

	// Object: Function MFClimateRuntime.MFClimateRain.GetRainOcclusionRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e2348
	// Params: [ Num(1) Size(0x4) ]
	float GetRainOcclusionRate();

	// Object: Function MFClimateRuntime.MFClimateRain.GetRainDownVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e27e8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetRainDownVector();

	// Object: Function MFClimateRuntime.MFClimateRain.GetRainAutoUpdateAccumulation
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x40e2598
	// Params: [ Num(1) Size(0x1) ]
	bool GetRainAutoUpdateAccumulation();

	// Object: Function MFClimateRuntime.MFClimateRain.GetLastOcclusionMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e2314
	// Params: [ Num(1) Size(0x8) ]
	struct UPhysicalMaterial* GetLastOcclusionMaterial();

	// Object: Function MFClimateRuntime.MFClimateRain.GetIsSnow
	// Flags: [Final|Native|Public]
	// Offset: 0x40e25fc
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsSnow();

	// Object: Function MFClimateRuntime.MFClimateRain.GetIsSand
	// Flags: [Final|Native|Public]
	// Offset: 0x40e25d8
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsSand();

	// Object: Function MFClimateRuntime.MFClimateRain.GetIsRain
	// Flags: [Final|Native|Public]
	// Offset: 0x40e2620
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsRain();

	// Object: Function MFClimateRuntime.MFClimateRain.GetIsMistFog
	// Flags: [Final|Native|Public]
	// Offset: 0x40e25b4
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsMistFog();

	// Object: Function MFClimateRuntime.MFClimateRain.GetAmountOfRain
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e27b0
	// Params: [ Num(1) Size(0x4) ]
	float GetAmountOfRain();

	// Object: Function MFClimateRuntime.MFClimateRain.GetAccumulation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e27cc
	// Params: [ Num(1) Size(0x4) ]
	float GetAccumulation();
};

// Object: Class MFClimateRuntime.MFClimateParticleRain
// Size: 0x5B0 (Inherited: 0x410)
struct AMFClimateParticleRain : AMFClimateRain
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateParticleRain, "MFClimateParticleRain")

	struct UActorComponent* RainShadowCapture; // 0x408(0x8)
	struct UActorComponent* WideShadowCapture; // 0x410(0x8)
	struct UTextureRenderTarget2D* ShadowESM; // 0x418(0x8)
	float ESMConstant; // 0x420(0x4)
	struct FIntPoint ShadowCaptureResolution; // 0x424(0x8)
	struct FIntPoint DummyResolution; // 0x42C(0x8)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; // 0x438(0x10)
	struct TArray<struct UParticleSystemComponent*> CascadesComponents; // 0x448(0x10)
	struct TArray<struct UMFClimateEffectComponent*> EffectComponents; // 0x458(0x10)
	struct TArray<struct AActor*> CachedIndoorVolumeList; // 0x468(0x10)
	int32_t BlockParticleEffectsVolumeCount; // 0x478(0x4)
	bool CachedShouldBlockParticleEffects; // 0x47C(0x1)
	bool CachedShouldBlockMaterialEffects; // 0x47D(0x1)
	uint8_t Pad_0x482[0x12E]; // 0x482(0x12E)

	// Object: Function MFClimateRuntime.MFClimateParticleRain.UpdateIndoorState
	// Flags: [Final|Native|Protected]
	// Offset: 0x40df2ec
	// Params: [ Num(0) Size(0x0) ]
	void UpdateIndoorState();

	// Object: Function MFClimateRuntime.MFClimateParticleRain.ShouldBlockParticleEffects
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x40df324
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldBlockParticleEffects();

	// Object: Function MFClimateRuntime.MFClimateParticleRain.SetForceUpdateShadowCapture
	// Flags: [Final|Native|Public]
	// Offset: 0x40df794
	// Params: [ Num(1) Size(0x1) ]
	void SetForceUpdateShadowCapture(bool NewValue);

	// Object: Function MFClimateRuntime.MFClimateParticleRain.SetESMConstant
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x6bbcac0
	// Params: [ Num(1) Size(0x4) ]
	void SetESMConstant(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateParticleRain.OnWideShadowCaptureUpdated
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x40) ]
	void OnWideShadowCaptureUpdated(struct FMatrix Matrix);

	// Object: Function MFClimateRuntime.MFClimateParticleRain.OnRainShadowCaptureUpdated
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x40) ]
	void OnRainShadowCaptureUpdated(struct FMatrix Matrix);

	// Object: Function MFClimateRuntime.MFClimateParticleRain.OnEndOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x40df424
	// Params: [ Num(4) Size(0x1C) ]
	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function MFClimateRuntime.MFClimateParticleRain.OnBeginOverlap
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x40df588
	// Params: [ Num(6) Size(0xB8) ]
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function MFClimateRuntime.MFClimateParticleRain.IsOverlapWithIndoorVolume
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x40df300
	// Params: [ Num(1) Size(0x1) ]
	bool IsOverlapWithIndoorVolume();

	// Object: Function MFClimateRuntime.MFClimateParticleRain.IsMFCliamteIndoorVolume
	// Flags: [Final|Native|Protected]
	// Offset: 0x40df348
	// Params: [ Num(2) Size(0x9) ]
	bool IsMFCliamteIndoorVolume(struct AActor* InActor);
};

// Object: Class MFClimateRuntime.MFClimatePlayerTransformComponent
// Size: 0x270 (Inherited: 0x230)
struct UMFClimatePlayerTransformComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimatePlayerTransformComponent, "MFClimatePlayerTransformComponent")

	bool bCameraOrPawn; // 0x224(0x1)
	bool bSyncPosition; // 0x225(0x1)
	bool bSyncRotation; // 0x226(0x1)
	bool bIgnorePitchRotation; // 0x227(0x1)
	uint8_t Pad_0x234[0x3C]; // 0x234(0x3C)
};

// Object: Class MFClimateRuntime.MFClimateRainOcclusionTestManager
// Size: 0x118 (Inherited: 0xE0)
struct UMFClimateRainOcclusionTestManager : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateRainOcclusionTestManager, "MFClimateRainOcclusionTestManager")

	struct AMFClimateRain* Rain; // 0xE0(0x8)
	float TickBudget; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct UMFClimateMovableRainWetnessComponent* LocalObservingTargetComponent; // 0xF0(0x8)
	struct TArray<struct FMFClimateRainOcclusionTestQueueItem> MovableObjectQueue; // 0xF8(0x10)
	struct TArray<struct FMFClimateRainOcclusionTestQueueItem> MovableObjectQueue_Off; // 0x108(0x10)
};

// Object: Class MFClimateRuntime.MFClimateSDFCanvas
// Size: 0x320 (Inherited: 0x300)
struct AMFClimateSDFCanvas : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateSDFCanvas, "MFClimateSDFCanvas")

	struct UStaticMeshComponent* Root; // 0x300(0x8)
	struct UStaticMesh* SourceMesh; // 0x308(0x8)
	struct UVolumeTexture* TargetTexture; // 0x310(0x8)
	float SaveDistanceFieldPortion; // 0x318(0x4)
	bool bSaveEveryFrame; // 0x31C(0x1)
	uint8_t Pad_0x31D[0x3]; // 0x31D(0x3)
};

// Object: Class MFClimateRuntime.MFClimateSettings
// Size: 0x48 (Inherited: 0x38)
struct UMFClimateSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateSettings, "MFClimateSettings")

	struct TArray<struct FSoftObjectPath> MFClimateMPCPaths; // 0x38(0x10)
};

// Object: Class MFClimateRuntime.MFClimateSingleSceneLightComponent
// Size: 0x120 (Inherited: 0x100)
struct UMFClimateSingleSceneLightComponent : UMFClimateSceneLightInterfaceComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateSingleSceneLightComponent, "MFClimateSingleSceneLightComponent")

	struct AMFClimateCelestialBody* BoundCelestialBody; // 0x100(0x8)
	float LongShadowFixDegrees; // 0x108(0x4)
	float LongShadowPower; // 0x10C(0x4)
	struct ADirectionalLight* MainLight; // 0x110(0x8)
	struct UDirectionalLightComponent* Light; // 0x118(0x8)
};

// Object: Class MFClimateRuntime.MFClimateSimpleLight
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateSimpleLight : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateSimpleLight, "MFClimateSimpleLight")

	struct UMFClimateSingleSceneLightComponent* MFClimateLight; // 0x300(0x8)
};

// Object: Class MFClimateRuntime.MFClimateSkyAtmosphereComponent
// Size: 0x3C0 (Inherited: 0xF8)
struct UMFClimateSkyAtmosphereComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateSkyAtmosphereComponent, "MFClimateSkyAtmosphereComponent")

	uint8_t Pad_0xF8[0x240]; // 0xF8(0x240)
	struct USkyAtmosphereComponent* RawSkyAtmosphere; // 0x338(0x8)
	struct FLinearColor SkyAtmosphereTransmittanceAtZenith; // 0x340(0x10)
	struct FLinearColor SkyAtmosphereTransmittanceCurrent[0x2]; // 0x350(0x20)
	struct UTexture2D* CpuSkyAtmosphereSkyTex; // 0x370(0x8)
	struct UTexture2D* CpuSkyAtmosphereTransmittanceTex; // 0x378(0x8)
	uint8_t Pad_0x380[0x40]; // 0x380(0x40)
};

// Object: Class MFClimateRuntime.MFClimateBaseSkyMesh
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateBaseSkyMesh : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateBaseSkyMesh, "MFClimateBaseSkyMesh")

	bool bCenterAtCamera; // 0x300(0x1)
	uint8_t Pad_0x301[0x7]; // 0x301(0x7)

	// Object: Function MFClimateRuntime.MFClimateBaseSkyMesh.OnSystemTexturesUpdated
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x40e2ecc
	// Params: [ Num(0) Size(0x0) ]
	void OnSystemTexturesUpdated();
};

// Object: Class MFClimateRuntime.MFClimateSingleMeshSky
// Size: 0x330 (Inherited: 0x308)
struct AMFClimateSingleMeshSky : AMFClimateBaseSkyMesh
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateSingleMeshSky, "MFClimateSingleMeshSky")

	struct UMaterialInterface* Material; // 0x308(0x8)
	struct UStaticMeshComponent* ShadingMesh; // 0x310(0x8)
	struct FVector SkySphereScale; // 0x318(0xC)
	struct FVector SkySphereLocation; // 0x324(0xC)
};

// Object: Class MFClimateRuntime.MFClimateSnowTrailManager
// Size: 0x168 (Inherited: 0xE0)
struct UMFClimateSnowTrailManager : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateSnowTrailManager, "MFClimateSnowTrailManager")

	struct UMaterialInterface* TrailMaterial; // 0xE0(0x8)
	struct UMaterialInterface* HistoryBlendMaterial; // 0xE8(0x8)
	struct UMaterialInterface* ClearMaterial; // 0xF0(0x8)
	struct UMaterialInterface* CopyMaterial; // 0xF8(0x8)
	struct UMaterialInterface* EdgeAccumulationMaterial; // 0x100(0x8)
	struct UMaterialParameterCollection* SnowTrailMPC; // 0x108(0x8)
	struct FVector2D TrailExtent; // 0x110(0x8)
	struct UStaticMesh* FootPrintMesh; // 0x118(0x8)
	struct FVector2D FootPrintScale; // 0x120(0x8)
	float SnowHeight; // 0x128(0x4)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
	struct UTextureRenderTarget2D* Current; // 0x130(0x8)
	struct UTextureRenderTarget2D* History; // 0x138(0x8)
	struct UTextureRenderTarget2D* Trails; // 0x140(0x8)
	struct AMFClimateRain* Snow; // 0x148(0x8)
	struct TArray<struct FSnowTrail> SnowTrails; // 0x150(0x10)
	uint8_t Pad_0x160[0x8]; // 0x160(0x8)

	// Object: Function MFClimateRuntime.MFClimateSnowTrailManager.AddTrail
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x40e2f08
	// Params: [ Num(4) Size(0x20) ]
	void AddTrail(struct FVector Location, struct FRotator Rotation, float HitDistance, float Radius);
};

// Object: Class MFClimateRuntime.MFClimateStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFClimateStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateStatics, "MFClimateStatics")

	// Object: Function MFClimateRuntime.MFClimateStatics.StepTimeOfDay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e4ff4
	// Params: [ Num(2) Size(0xC) ]
	static void StepTimeOfDay(struct UObject* WorldContextObject, float StepInHours);

	// Object: Function MFClimateRuntime.MFClimateStatics.StartExtraCloudEmissiveEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e3fd8
	// Params: [ Num(3) Size(0x44) ]
	static void StartExtraCloudEmissiveEvent(struct UObject* WorldContextObject, struct FMFClimateCirrusCloudEmissiveEvent Event, float DelayTime);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetWindLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e41c0
	// Params: [ Num(2) Size(0xC) ]
	static void SetWindLevel(struct UObject* WorldContextObject, float WindLevel);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetWindDirection
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40e4298
	// Params: [ Num(2) Size(0x10) ]
	static void SetWindDirection(struct UObject* WorldContextObject, struct FVector2D WindDir);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetWeatherPresetWeights
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40e4e14
	// Params: [ Num(2) Size(0x18) ]
	static void SetWeatherPresetWeights(struct UObject* WorldContextObject, const struct TArray<float>& Params);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetWeatherLayerWeight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e487c
	// Params: [ Num(3) Size(0x10) ]
	static void SetWeatherLayerWeight(struct UObject* WorldContextObject, int32_t LayerIndex, float Weight);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetTimeOfDay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e50cc
	// Params: [ Num(2) Size(0xC) ]
	static void SetTimeOfDay(struct UObject* WorldContextObject, float InTODTime);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetSystemTextures
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x958f0ec
	// Params: [ Num(2) Size(0x10) ]
	static void SetSystemTextures(struct UObject* WorldContextObject, struct UMaterialInstanceDynamic* Mid);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetNorthVector
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40e539c
	// Params: [ Num(2) Size(0x14) ]
	static void SetNorthVector(struct UObject* WorldContextObject, struct FVector NorthVector);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetMatrixRowAsMPCVectorParameter
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x40e3b5c
	// Params: [ Num(8) Size(0x7C) ]
	static void SetMatrixRowAsMPCVectorParameter(struct UObject* WorldContextObject, struct UMaterialParameterCollection* MPC, const struct FMatrix& InMatrix, struct FVector Translation, struct FName RowName0, struct FName RowName1, struct FName RowName2, struct FName RowName3);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetMatrixRowAsMIDVectorParameter
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x40e3db8
	// Params: [ Num(7) Size(0x7C) ]
	static void SetMatrixRowAsMIDVectorParameter(struct UMaterialInstanceDynamic* Mid, const struct FMatrix& InMatrix, struct FVector Translation, struct FName RowName0, struct FName RowName1, struct FName RowName2, struct FName RowName3);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetEditorViewportRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40e3200
	// Params: [ Num(1) Size(0xC) ]
	static void SetEditorViewportRotation(struct FRotator Rotation);

	// Object: Function MFClimateRuntime.MFClimateStatics.SetEditorViewportLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40e3298
	// Params: [ Num(1) Size(0xC) ]
	static void SetEditorViewportLocation(struct FVector position);

	// Object: Function MFClimateRuntime.MFClimateStatics.ProjectPointOnCircleLayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3330
	// Params: [ Num(3) Size(0xC) ]
	static float ProjectPointOnCircleLayer(float PointExtent, float CircleRadius);

	// Object: Function MFClimateRuntime.MFClimateStatics.ModuloWarpNegative
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e311c
	// Params: [ Num(3) Size(0xC) ]
	static float ModuloWarpNegative(float Value, float Mod);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetWindVelocity
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4114
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetWindVelocity(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetWindLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e436c
	// Params: [ Num(2) Size(0xC) ]
	static float GetWindLevel(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetWindDirection
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4414
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetWindDirection(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetWeatherPresetWeights
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40e4f04
	// Params: [ Num(2) Size(0x18) ]
	static void GetWeatherPresetWeights(struct UObject* WorldContextObject, struct TArray<float>& Params);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetWeatherLayerIndexByIntTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4648
	// Params: [ Num(3) Size(0x10) ]
	static int32_t GetWeatherLayerIndexByIntTag(struct UObject* WorldContextObject, int32_t IntTag);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetWeatherLayerIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4730
	// Params: [ Num(3) Size(0x1C) ]
	static int32_t GetWeatherLayerIndex(struct UObject* WorldContextObject, struct FString LayerName);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetWeatherComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3074
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFClimateWeatherComponent* GetWeatherComponent(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetTimeOfDay
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e51a4
	// Params: [ Num(2) Size(0xC) ]
	static float GetTimeOfDay(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e55cc
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFClimateWorldSubSystem* GetSystem(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e36d4
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetQualityLevel();

	// Object: Function MFClimateRuntime.MFClimateStatics.GetPresetName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4994
	// Params: [ Num(3) Size(0x20) ]
	static struct FString GetPresetName(struct UObject* WorldContextObject, int32_t InPresetIndex);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetPresetIndexByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4b9c
	// Params: [ Num(3) Size(0x1C) ]
	static int32_t GetPresetIndexByName(struct UObject* WorldContextObject, struct FString InPresetName);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetPresetIndexByIntTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4ab4
	// Params: [ Num(3) Size(0x10) ]
	static int32_t GetPresetIndexByIntTag(struct UObject* WorldContextObject, int32_t IntTag);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetPlayerRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3708
	// Params: [ Num(2) Size(0x14) ]
	static struct FRotator GetPlayerRotation(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetPlayerLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e37b4
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetPlayerLocation(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetNumWeatherPresets
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e4c94
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetNumWeatherPresets(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetNorthVector
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e5474
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetNorthVector(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetNorthAngleOffset
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e52f4
	// Params: [ Num(2) Size(0xC) ]
	static float GetNorthAngleOffset(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetMaxWeightPresetName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e44c0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetMaxWeightPresetName(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetMaxWeightPresetIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e45a0
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetMaxWeightPresetIndex(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetMatrixRow
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3a60
	// Params: [ Num(3) Size(0x60) ]
	static struct FVector4 GetMatrixRow(const struct FMatrix& Matrix, int32_t Row);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetFirstSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e5674
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFClimateWorldSubSystem* GetFirstSystem(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetFeature
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e571c
	// Params: [ Num(3) Size(0x18) ]
	static struct UObject* GetFeature(struct UObject* WorldContextObject, struct UObject* FeatureType);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetEastVector
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e5520
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetEastVector(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetEastAngleOffset
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e524c
	// Params: [ Num(2) Size(0xC) ]
	static float GetEastAngleOffset(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetCameraRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3860
	// Params: [ Num(2) Size(0x14) ]
	static struct FRotator GetCameraRotation(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetCameraLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e390c
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetCameraLocation(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GetCameraAspect
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e39b8
	// Params: [ Num(2) Size(0xC) ]
	static float GetCameraAspect(struct UObject* WorldContextObject);

	// Object: Function MFClimateRuntime.MFClimateStatics.GaussianSampleFromStream
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3414
	// Params: [ Num(4) Size(0x14) ]
	static float GaussianSampleFromStream(struct FRandomStream& Stream, float Mean, float StdDev);

	// Object: Function MFClimateRuntime.MFClimateStatics.GaussianSample
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3544
	// Params: [ Num(3) Size(0xC) ]
	static float GaussianSample(float Mean, float StdDev);

	// Object: Function MFClimateRuntime.MFClimateStatics.ComputeCubemapBrightness
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e3628
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector ComputeCubemapBrightness(struct UTextureCube* InCubemap);

	// Object: Function MFClimateRuntime.MFClimateStatics.ChangeToWeatherPreset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40e4d3c
	// Params: [ Num(2) Size(0xC) ]
	static void ChangeToWeatherPreset(struct UObject* WorldContextObject, int32_t WeatherIndex);
};

// Object: Class MFClimateRuntime.MFClimateSunMoonSceneLightComponent
// Size: 0x188 (Inherited: 0x100)
struct UMFClimateSunMoonSceneLightComponent : UMFClimateSceneLightInterfaceComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateSunMoonSceneLightComponent, "MFClimateSunMoonSceneLightComponent")

	struct AMFClimateCelestialBody* BindSun; // 0x100(0x8)
	struct AMFClimateCelestialBody* BindMoon; // 0x108(0x8)
	float MainLightIntensityEV; // 0x110(0x4)
	float MainLightTransferTime; // 0x114(0x4)
	float LongShadowFixDegrees; // 0x118(0x4)
	float LongShadowFixPower; // 0x11C(0x4)
	struct ADirectionalLight* MainDirectionalLight; // 0x120(0x8)
	struct UDirectionalLightComponent* MainDirectionalLightComponent; // 0x128(0x8)
	struct FLinearColor CloudExtraEmissiveColor; // 0x130(0x10)
	struct FLinearColor LightningColor; // 0x140(0x10)
	struct UDirectionalLightComponent* FakeAtmLight1; // 0x150(0x8)
	struct UDirectionalLightComponent* FakeAtmLight2; // 0x158(0x8)
	float SunWeight; // 0x160(0x4)
	struct FLinearColor SunScatteredIrradiance; // 0x164(0x10)
	struct FLinearColor MoonScatteredIrradiance; // 0x174(0x10)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
};

// Object: Class MFClimateRuntime.MFClimateSunMoonSceneLight
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateSunMoonSceneLight : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateSunMoonSceneLight, "MFClimateSunMoonSceneLight")

	struct UMFClimateSunMoonSceneLightComponent* MFClimateLight; // 0x300(0x8)
};

// Object: Class MFClimateRuntime.MFClimateTimeGeographyComponent
// Size: 0x200 (Inherited: 0xF8)
struct UMFClimateTimeGeographyComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateTimeGeographyComponent, "MFClimateTimeGeographyComponent")

	float TimeZone; // 0xF8(0x4)
	float YearPercent; // 0xFC(0x4)
	float TimeOfDay; // 0x100(0x4)
	float Longitude; // 0x104(0x4)
	float Latitude; // 0x108(0x4)
	float EarthAxialTilt; // 0x10C(0x4)
	float EarthRadiusKM; // 0x110(0x4)
	struct FVector2D SceneNorthVector; // 0x114(0x8)
	bool bAutoStepTime; // 0x11C(0x1)
	uint8_t Pad_0x11D[0x3]; // 0x11D(0x3)
	float AutoStepTimeRate; // 0x120(0x4)
	bool bAutoStepInEditor; // 0x124(0x1)
	uint8_t Pad_0x125[0x3]; // 0x125(0x3)
	float AutoStepRateInEditor; // 0x128(0x4)
	uint8_t Pad_0x12C[0xD4]; // 0x12C(0xD4)

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.TransformSceneVectorToEcliptic
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e848c
	// Params: [ Num(2) Size(0x18) ]
	struct FVector TransformSceneVectorToEcliptic(struct FVector Vector);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.TransformEclipticVectorToScene
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8544
	// Params: [ Num(2) Size(0x18) ]
	struct FVector TransformEclipticVectorToScene(struct FVector Vector);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.StepTimeOfDay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e82d8
	// Params: [ Num(1) Size(0x4) ]
	void StepTimeOfDay(float DeltaHour);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetYearPercentFromMonthAndDay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e88e4
	// Params: [ Num(3) Size(0xC) ]
	float SetYearPercentFromMonthAndDay(int32_t InMonth, int32_t InDay);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetYearPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8ee8
	// Params: [ Num(1) Size(0x4) ]
	void SetYearPercent(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetTimeZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8fa8
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeZone(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetTimeOfDay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8e28
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeOfDay(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetNorthVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40e9074
	// Params: [ Num(1) Size(0x8) ]
	void SetNorthVector(struct FVector2D NewNorthVector);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetLongitude
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8d4c
	// Params: [ Num(1) Size(0x4) ]
	void SetLongitude(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetLatitude
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8c78
	// Params: [ Num(1) Size(0x4) ]
	void SetLatitude(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetEarthRadiusKM
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8b08
	// Params: [ Num(1) Size(0x4) ]
	void SetEarthRadiusKM(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetEarthAxialTilt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8bc0
	// Params: [ Num(1) Size(0x4) ]
	void SetEarthAxialTilt(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTimeRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8184
	// Params: [ Num(1) Size(0x4) ]
	void SetAutoStepTimeRate(float InValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTimeEditorRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e7ffc
	// Params: [ Num(1) Size(0x4) ]
	void SetAutoStepTimeEditorRate(float InValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTimeEditor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e80a0
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoStepTimeEditor(bool InValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e8228
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoStepTime(bool InValue);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetYearPercent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8ad0
	// Params: [ Num(1) Size(0x4) ]
	float GetYearPercent();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetTimeZone
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8aec
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeZone();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetTimeOfDay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e88c8
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeOfDay();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetSunRotationProgressPingPong
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e839c
	// Params: [ Num(1) Size(0x4) ]
	float GetSunRotationProgressPingPong();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetSunRotationProgress
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e83d0
	// Params: [ Num(1) Size(0x4) ]
	float GetSunRotationProgress();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetSunHorizonAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8404
	// Params: [ Num(1) Size(0x4) ]
	float GetSunHorizonAngle();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetSceneToEclipticMatrix
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e85fc
	// Params: [ Num(1) Size(0x40) ]
	struct FMatrix GetSceneToEclipticMatrix();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetNorthVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8438
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetNorthVector();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetMonthAndDay
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e89d0
	// Params: [ Num(2) Size(0x8) ]
	void GetMonthAndDay(int32_t& OutMonth, int32_t& OutDay);

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetLongitude
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e88ac
	// Params: [ Num(1) Size(0x4) ]
	float GetLongitude();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetLatitude
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8890
	// Params: [ Num(1) Size(0x4) ]
	float GetLatitude();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetEclipticToSceneMatrix
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8834
	// Params: [ Num(1) Size(0x40) ]
	struct FMatrix GetEclipticToSceneMatrix();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetEastVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8458
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetEastVector();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetEarthRadiusKM
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8858
	// Params: [ Num(1) Size(0x4) ]
	float GetEarthRadiusKM();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetEarthAxialTilt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8874
	// Params: [ Num(1) Size(0x4) ]
	float GetEarthAxialTilt();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTimeRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e814c
	// Params: [ Num(1) Size(0x4) ]
	float GetAutoStepTimeRate();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTimeEditorRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e7fc4
	// Params: [ Num(1) Size(0x4) ]
	float GetAutoStepTimeEditorRate();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTimeEditor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e7fe0
	// Params: [ Num(1) Size(0x1) ]
	bool GetAutoStepTimeEditor();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8168
	// Params: [ Num(1) Size(0x1) ]
	bool GetAutoStepTime();

	// Object: Function MFClimateRuntime.MFClimateTimeGeographyComponent.CalculateEclipticToSceneMatrixAtTimeOfDay
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e8620
	// Params: [ Num(6) Size(0xE0) ]
	void CalculateEclipticToSceneMatrixAtTimeOfDay(float InTimeOfDay, float InYearPercent, struct FRotator& OutEarthToEclipticRotator, struct FMatrix& OutSceneToEarthMatrix, struct FMatrix& OutSceneToEclipticMatrix, struct FMatrix& OutEclipticToSceneMatrix);
};

// Object: Class MFClimateRuntime.MFClimateTimeGeography
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateTimeGeography : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateTimeGeography, "MFClimateTimeGeography")

	struct UMFClimateTimeGeographyComponent* TimeGeographyComponent; // 0x300(0x8)
};

// Object: Class MFClimateRuntime.MFClimateTodIrcBase
// Size: 0x118 (Inherited: 0xB8)
struct UMFClimateTodIrcBase : UMFClimateBakeProcedure
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateTodIrcBase, "MFClimateTodIrcBase")

	struct FString OutputFolder; // 0xB8(0x10)
	struct FString FileNameFormat; // 0xC8(0x10)
	struct TArray<struct FString> CameraTagFilter; // 0xD8(0x10)
	bool bSyncEditorViewportWithCamera; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct TArray<struct AMFClimateIrcCamera*> Cameras; // 0xF0(0x10)
	struct FVector BackupCameraLocation; // 0x100(0xC)
	struct FRotator BackupCameraRotation; // 0x10C(0xC)

	// Object: Function MFClimateRuntime.MFClimateTodIrcBase.GetOutputFileName
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e924c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOutputFileName();
};

// Object: Class MFClimateRuntime.MFClimateTodIrc2D
// Size: 0x128 (Inherited: 0x118)
struct UMFClimateTodIrc2D : UMFClimateTodIrcBase
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateTodIrc2D, "MFClimateTodIrc2D")

	bool bSuperFastEyeAdaption; // 0x118(0x1)
	bool bHDR; // 0x119(0x1)
	uint8_t Pad_0x11A[0x2]; // 0x11A(0x2)
	int32_t Width; // 0x11C(0x4)
	int32_t Height; // 0x120(0x4)
	uint8_t Pad_0x124[0x4]; // 0x124(0x4)
};

// Object: Class MFClimateRuntime.MFClimateTodIrcPanorama
// Size: 0x120 (Inherited: 0x118)
struct UMFClimateTodIrcPanorama : UMFClimateTodIrcBase
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateTodIrcPanorama, "MFClimateTodIrcPanorama")

	int32_t Size; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: Class MFClimateRuntime.MFClimateTodSequenceMixer
// Size: 0x310 (Inherited: 0x300)
struct AMFClimateTodSequenceMixer : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateTodSequenceMixer, "MFClimateTodSequenceMixer")

	struct UMFClimateWeatherComponent* WeatherComponent; // 0x300(0x8)
	struct UMFClimateWeatherLayerPresetsComponent* PresetsComponent; // 0x308(0x8)
};

// Object: Class MFClimateRuntime.MFClimateTypes
// Size: 0x28 (Inherited: 0x28)
struct UMFClimateTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateTypes, "MFClimateTypes")
};

// Object: Class MFClimateRuntime.MFClimateUIBase
// Size: 0x298 (Inherited: 0x290)
struct UMFClimateUIBase : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateUIBase, "MFClimateUIBase")

	struct UMFClimateWorldSubSystem* MFClimateSystem; // 0x290(0x8)

	// Object: Function MFClimateRuntime.MFClimateUIBase.SetWeatherConditionWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e96e0
	// Params: [ Num(2) Size(0x8) ]
	void SetWeatherConditionWeight(int32_t Index, float Weight);

	// Object: Function MFClimateRuntime.MFClimateUIBase.SetTimeOfDay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e9878
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeOfDay(float TimeOfDay);

	// Object: Function MFClimateRuntime.MFClimateUIBase.OnTODChanged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40e95d4
	// Params: [ Num(1) Size(0x18) ]
	void OnTODChanged(const struct FText& NewTime);

	// Object: Function MFClimateRuntime.MFClimateUIBase.GetWeatherConditionWeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e97c8
	// Params: [ Num(2) Size(0x8) ]
	float GetWeatherConditionWeight(int32_t Index);

	// Object: Function MFClimateRuntime.MFClimateUIBase.GetWeatherConditionName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e93d4
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetWeatherConditionName(int32_t SequenceIndex);

	// Object: Function MFClimateRuntime.MFClimateUIBase.GetTODText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e94bc
	// Params: [ Num(2) Size(0x20) ]
	struct FText GetTODText(float InValue);

	// Object: Function MFClimateRuntime.MFClimateUIBase.GetTimeOfDay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e9920
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeOfDay();

	// Object: Function MFClimateRuntime.MFClimateUIBase.GetMFClimateSystem
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40e9954
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateWorldSubSystem* GetMFClimateSystem();
};

// Object: Class MFClimateRuntime.MFClimateVolumeCloudComponent
// Size: 0x4C0 (Inherited: 0xF8)
struct UMFClimateVolumeCloudComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateVolumeCloudComponent, "MFClimateVolumeCloudComponent")

	bool bAutoColorFromSystem; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	struct FLinearColor SunColorTop; // 0xFC(0x10)
	struct FLinearColor SunColorBottom; // 0x10C(0x10)
	struct FVector SunDirection; // 0x11C(0xC)
	struct FLinearColor CloudAmbientGround; // 0x128(0x10)
	struct FLinearColor CloudAmbientSky; // 0x138(0x10)
	float PreExposureSmoothness; // 0x148(0x4)
	bool bAutoWindFromSystem; // 0x14C(0x1)
	uint8_t Pad_0x14D[0x3]; // 0x14D(0x3)
	float SystemWindMultiplier; // 0x150(0x4)
	struct FVector2D CloudWind; // 0x154(0x8)
	float CloudVerticalWind; // 0x15C(0x4)
	struct AMFClimateWeatherMapGenerator* WeatherMapGenerator; // 0x160(0x8)
	struct UTexture* CustomWeatherMap; // 0x168(0x8)
	float CustomWeatherMapSize; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct UMFClimateCloudProfile* CloudProfile; // 0x178(0x8)
	struct FMFClimateCloudSettings CloudSettings; // 0x180(0x94)
	uint8_t Pad_0x214[0x224]; // 0x214(0x224)
	float HibernateUpdateRemain; // 0x438(0x4)
	uint8_t Pad_0x43C[0x4]; // 0x43C(0x4)
	struct UMFClimateCloudNoiseGroupPlatformSwitcher* NoiseGroupSwitcher; // 0x440(0x8)
	struct UTextureRenderTarget2D* MSApproxRT; // 0x448(0x8)
	struct UTextureRenderTarget2D* RaymarchRTFull; // 0x450(0x8)
	struct UTextureRenderTarget2D* RaymarchRTCheckerboard; // 0x458(0x8)
	struct UTextureRenderTarget2D* ResolveRT; // 0x460(0x8)
	struct UVolumeTexture* CachedBaseNoiseTexture; // 0x468(0x8)
	struct UVolumeTexture* CachedDetailNoiseTexture; // 0x470(0x8)
	struct UTexture2D* CachedCurlNoiseTexture; // 0x478(0x8)
	struct UTexture2D* CachedLUT0Texture; // 0x480(0x8)
	struct TArray<struct AMFClimateCloudCustomVolume*> CustomVolumes; // 0x488(0x10)
	uint8_t Pad_0x498[0x8]; // 0x498(0x8)
	struct AMFClimateCloudCustomVolumesManager* SDFManager; // 0x4A0(0x8)
	struct UTextureRenderTarget2D* SDFCloudRTFull; // 0x4A8(0x8)
	struct UTextureRenderTarget2D* SDFCloudRTCheckerboard; // 0x4B0(0x8)
	struct UTextureRenderTarget2D* SDFCloudResolveRT; // 0x4B8(0x8)

	// Object: Function MFClimateRuntime.MFClimateVolumeCloudComponent.GetSDFCloudRaymarchResult
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e9990
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture* GetSDFCloudRaymarchResult();

	// Object: Function MFClimateRuntime.MFClimateVolumeCloudComponent.GetRaymarchResult
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e99c4
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture* GetRaymarchResult();
};

// Object: Class MFClimateRuntime.MFClimateVolumeCloud
// Size: 0x308 (Inherited: 0x300)
struct AMFClimateVolumeCloud : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateVolumeCloud, "MFClimateVolumeCloud")

	struct UMFClimateVolumeCloudComponent* VolumeCloud; // 0x300(0x8)
};

// Object: Class MFClimateRuntime.MFClimateWeatherComponent
// Size: 0x188 (Inherited: 0xF8)
struct UMFClimateWeatherComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateWeatherComponent, "MFClimateWeatherComponent")

	struct AMFClimateWeatherLayerSceneBindings* SceneBindings; // 0xF8(0x8)
	struct TArray<struct FMFClimateWeatherLayer> Layers; // 0x100(0x10)
	uint8_t Pad_0x110[0x70]; // 0x110(0x70)
	bool bBindingsDirty; // 0x180(0x1)
	uint8_t Pad_0x181[0x7]; // 0x181(0x7)

	// Object: Function MFClimateRuntime.MFClimateWeatherComponent.SetSequenceWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e9c08
	// Params: [ Num(2) Size(0xC) ]
	void SetSequenceWeight(struct ULevelSequence* Sequence, float NewWeight);

	// Object: Function MFClimateRuntime.MFClimateWeatherComponent.GetSequenceCurrentWeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40e9a70
	// Params: [ Num(2) Size(0xC) ]
	float GetSequenceCurrentWeight(struct ULevelSequence* Sequence);

	// Object: Function MFClimateRuntime.MFClimateWeatherComponent.EvaluateAndUpdateValuesImmediately
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e9a5c
	// Params: [ Num(0) Size(0x0) ]
	void EvaluateAndUpdateValuesImmediately();

	// Object: Function MFClimateRuntime.MFClimateWeatherComponent.BlendInSequencesAndFadeOthers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e9cf0
	// Params: [ Num(2) Size(0x14) ]
	void BlendInSequencesAndFadeOthers(struct TArray<struct ULevelSequence*> ToBlendIn, float MaxDelta);

	// Object: Function MFClimateRuntime.MFClimateWeatherComponent.AddSequenceWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40e9b20
	// Params: [ Num(2) Size(0xC) ]
	void AddSequenceWeight(struct ULevelSequence* Sequence, float Delta);
};

// Object: Class MFClimateRuntime.MFClimateWeatherLayerPresetsComponent
// Size: 0x110 (Inherited: 0xF8)
struct UMFClimateWeatherLayerPresetsComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateWeatherLayerPresetsComponent, "MFClimateWeatherLayerPresetsComponent")

	struct TArray<struct FMFClimateLayerPreset> ActivatedPresets; // 0xF8(0x10)
	struct UMFClimateWeatherComponent* WeatherComponent; // 0x108(0x8)

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.UpdateLayerWeights
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40ecb2c
	// Params: [ Num(1) Size(0x1) ]
	void UpdateLayerWeights(bool bEvaluateImmediately);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SetPresetWeights
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40ec594
	// Params: [ Num(2) Size(0x11) ]
	void SetPresetWeights(const struct TArray<float>& weights, bool bEvaluateImmediately);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SetPresetWeightByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40ec7a4
	// Params: [ Num(3) Size(0x15) ]
	void SetPresetWeightByName(struct FString PresetName, float NewWeight, bool bEvaluateImmediately);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SetPresetWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40ec930
	// Params: [ Num(3) Size(0x9) ]
	void SetPresetWeight(int32_t PresetID, float NewWeight, bool bEvaluateImmediately);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SaveCurrentLayersAsPreset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40ecbdc
	// Params: [ Num(2) Size(0x8) ]
	int32_t SaveCurrentLayersAsPreset(int32_t PresetID);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetPresetWeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ec4c8
	// Params: [ Num(2) Size(0x8) ]
	float GetPresetWeight(int32_t PresetID);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ec3e0
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetPresetName(int32_t PresetID);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetPresetIntTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40eca60
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPresetIntTag(int32_t iPreset);

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetPresetCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ec788
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPresetCount();

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetMaxWeightPresetName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40ec310
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMaxWeightPresetName();

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetMaxWeightPresetIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40ec3ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxWeightPresetIndex();

	// Object: Function MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.AddPresetWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40ec6a0
	// Params: [ Num(2) Size(0x8) ]
	void AddPresetWeight(int32_t PresetID, float DeltaWeight);
};

// Object: Class MFClimateRuntime.MFClimateWeatherLayerSceneBindings
// Size: 0x368 (Inherited: 0x300)
struct AMFClimateWeatherLayerSceneBindings : AInfo
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateWeatherLayerSceneBindings, "MFClimateWeatherLayerSceneBindings")

	uint8_t Pad_0x300[0x18]; // 0x300(0x18)
	struct TMap<struct FName, struct TLazyObjectPtr<struct AActor>> PersistentMappings_New; // 0x318(0x50)
};

// Object: Class MFClimateRuntime.MFClimateWeatherListEntry
// Size: 0x2A0 (Inherited: 0x298)
struct UMFClimateWeatherListEntry : UMFClimateUIBase
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateWeatherListEntry, "MFClimateWeatherListEntry")

	uint8_t Pad_0x298[0x8]; // 0x298(0x8)
};

// Object: Class MFClimateRuntime.MFClimateWeatherMapGenerator
// Size: 0x330 (Inherited: 0x300)
struct AMFClimateWeatherMapGenerator : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateWeatherMapGenerator, "MFClimateWeatherMapGenerator")

	bool bRefreshEveryFrame; // 0x300(0x1)
	uint8_t Pad_0x301[0x3]; // 0x301(0x3)
	int32_t WeatherMapScaleInKM; // 0x304(0x4)
	struct UTextureRenderTarget2D* OutputTarget; // 0x308(0x8)
	uint8_t Pad_0x310[0x10]; // 0x310(0x10)
	float GlobalCoverage; // 0x320(0x4)
	float GlobalCloudType; // 0x324(0x4)
	bool bGeometryDirty; // 0x328(0x1)
	bool bRenderingDirty; // 0x329(0x1)
	uint8_t Pad_0x32A[0x6]; // 0x32A(0x6)

	// Object: Function MFClimateRuntime.MFClimateWeatherMapGenerator.SetGlobalCoverage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9994564
	// Params: [ Num(1) Size(0x4) ]
	void SetGlobalCoverage(float NewValue);

	// Object: Function MFClimateRuntime.MFClimateWeatherMapGenerator.SetGlobalCloudType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99944b8
	// Params: [ Num(1) Size(0x4) ]
	void SetGlobalCloudType(float NewValue);
};

// Object: Class MFClimateRuntime.MFClimateWeatherMapCloudMask
// Size: 0x330 (Inherited: 0x300)
struct AMFClimateWeatherMapCloudMask : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFClimateWeatherMapCloudMask, "MFClimateWeatherMapCloudMask")

	int32_t DrawLayer; // 0x300(0x4)
	EMFClimateCloudMaskType DrawType; // 0x304(0x4)
	struct UMaterialInterface* Material; // 0x308(0x8)
	struct UMaterialInstanceDynamic* Mid; // 0x310(0x8)
	uint8_t Pad_0x318[0x8]; // 0x318(0x8)
	struct FVector4 MaterialParameter; // 0x320(0x10)
};

// Object: Class MFClimateRuntime.MFClimateWorldSubSystem
// Size: 0xD0 (Inherited: 0x30)
struct UMFClimateWorldSubSystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UMFClimateWorldSubSystem, "MFClimateWorldSubSystem")

	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
	struct TArray<struct UObject*> DuplicatedFeatures; // 0x90(0x10)
	struct TArray<struct UObject*> FeatureTable; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)
	struct TArray<struct FMFClimateMPCItem> PublicMPCs; // 0xC0(0x10)

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetWindComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40eceb8
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateGlobalWindComponent* GetWindComponent();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetWeatherLayerPresetComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ece84
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateWeatherLayerPresetsComponent* GetWeatherLayerPresetComponent();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetWeatherComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ecf54
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateWeatherComponent* GetWeatherComponent();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetVolumeCloud
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ecff0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateVolumeCloudComponent* GetVolumeCloud();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetTimeAndGeographyComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ecf20
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateTimeGeographyComponent* GetTimeAndGeographyComponent();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetSceneLightInterface
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40eceec
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateSceneLightInterfaceComponent* GetSceneLightInterface();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetRain
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ece50
	// Params: [ Num(1) Size(0x8) ]
	struct AMFClimateRain* GetRain();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetFeature
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ed024
	// Params: [ Num(3) Size(0x18) ]
	struct UObject* GetFeature(struct UObject* FeatureType, EMFClimateGetFeatureErrorMode ErrorMode);

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetClimateSkyAtmosphere
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ecf88
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateSkyAtmosphereComponent* GetClimateSkyAtmosphere();

	// Object: Function MFClimateRuntime.MFClimateWorldSubSystem.GetCirrusCloud
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40ecfbc
	// Params: [ Num(1) Size(0x8) ]
	struct UMFClimateCirrusCloud* GetCirrusCloud();
};

} // namespace SDK
