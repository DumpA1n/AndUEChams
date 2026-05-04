#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OpenWorldStreaming.hpp"

namespace SDK
{

// Package: OpenWorldWaterDataStreaming
// Enums: 2
// Structs: 13
// Classes: 16

struct AActor;
struct ACHARACTER;
struct AExponentialHeightFog;
struct AStaticMeshActor;
struct UArrowComponent;
struct UBillboardComponent;
struct UDataTable;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UPostProcessComponent;
struct USceneCaptureComponent2D;
struct USplineComponent;
struct UStaticMeshComponent;
struct UTextRenderComponent;
struct UTextureRenderTarget2D;
struct UWorld;
struct FOpenWorldSampledWaterParameter;
struct FOpenWorldSampledWaterData;
struct FOpenWorldWaterVolumeSettings;
struct FWaterActor_WaterEffectSetting;
struct FWaterActor_WaterSectionInfo;
struct FWaterMeshData;
struct FWaterPoint;
struct FWaterPointNew;
struct FWaterDataNewAssetIndexTable;
struct FOpenWorldWaterSubsystemTickFunction;
struct FOpenWorldWaterGerstnerWave;
struct FWaterWaveData;
struct FWaterActor_WaterEffectSetting_Other;
struct AOpenWorldWaterActor;
struct AOpenWorldWaterBody;
struct UOpenWorldWaterBodyGenerator;
struct AOpenWorldWaterBodyExclusionVolume;
struct UOpenWorldWaterDataAsset;
struct UOpenWorldWaterDataComponent;
struct UOpenWorldWaterDataNewAsset;
struct AWaterDataAssetsStreamer;
struct UOpenWorldWaterInteractiveWaterComponent;
struct AOpenWorldWaterInteractiveWaterManager;
struct AOpenWorldWaterMeshActor;
struct UOpenWorldWaterSubsystem;
struct AOpenWorldWaterVolume;
struct AOpenWorldWaterWaveGenerator;
struct UWaterEffectSetting;
struct AWaterHeightTextureGenerateTool;

// Object: Enum OpenWorldWaterDataStreaming.EWaterBodyType
enum class EWaterBodyType : uint8_t
{
	River = 0,
	Lake = 1,
	Ocean = 2,
	Transition = 3,
	Num = 4,
	EWaterBodyType_MAX = 5
};

// Object: Enum OpenWorldWaterDataStreaming.EInteractiveWaterType
enum class EInteractiveWaterType : uint8_t
{
	TraceAttachPoint = 0,
	EmmitOnce = 1,
	Custom = 2,
	EInteractiveWaterType_MAX = 3
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.OpenWorldSampledWaterParameter
// Size: 0x4 (Inherited: 0x0)
struct FOpenWorldSampledWaterParameter
{
	uint8_t bNeedBilinearSampling : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x1]; // 0x1(0x1)
	uint8_t bQueryStaticData : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bQueryClosestPoint : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.OpenWorldSampledWaterData
// Size: 0x24 (Inherited: 0x0)
struct FOpenWorldSampledWaterData
{
	float WaterHeight; // 0x0(0x4)
	float WaterDepth; // 0x4(0x4)
	float WaveOffset; // 0x8(0x4)
	struct FVector2D ClosestPoint2D; // 0xC(0x8)
	uint8_t bIsClosestPointValid : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bIsClosestMaxWaterDepthValid : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FVector2D ClosestMaxWaterDepthPoint2D; // 0x18(0x8)
	float ClosestMaxWaterDepth; // 0x20(0x4)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.OpenWorldWaterVolumeSettings
// Size: 0xA8 (Inherited: 0x0)
struct FOpenWorldWaterVolumeSettings
{
	uint8_t bOverride_GerstnerAmplitudeMin : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_GerstnerAmplitudeMax : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_GerstnerLengthMin : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_GerstnerLengthMax : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_GerstnerSteepnessMin : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_GerstnerSteepnessMax : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bOverride_GerstnerDistribution : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bOverride_GerstnerSpread : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bOverride_GerstnerBigWaveSpeed : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bOverride_GerstnerMediumWaveSpeed : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bOverride_WaterLineColor : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bOverride_WaterHeightOffset : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bOverride_bUnderwaterFogEnableWave : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bOverride_UnderwaterFogColor : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bOverride_UnderwaterDepthFogDensity : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bOverride_UnderwaterFogAttenuation : 1; // 0x1(0x1), Mask(0x80)
	uint8_t bOverride_UnderwaterFogStartDistance : 1; // 0x2(0x1), Mask(0x1)
	uint8_t bOverride_UnderwaterFogAbsorptionColor : 1; // 0x2(0x1), Mask(0x2)
	uint8_t bOverride_UnderwaterFogInscatteringColor : 1; // 0x2(0x1), Mask(0x4)
	uint8_t bOverride_UnderwaterFogDensity : 1; // 0x2(0x1), Mask(0x8)
	uint8_t bOverride_UnderwaterFogHeightFalloff : 1; // 0x2(0x1), Mask(0x10)
	uint8_t bOverride_UnderwaterFogExponentialStartDistance : 1; // 0x2(0x1), Mask(0x20)
	uint8_t bOverride_UnderwaterFogCustomData1 : 1; // 0x2(0x1), Mask(0x40)
	uint8_t bOverride_UnderwaterFogCustomData2 : 1; // 0x2(0x1), Mask(0x80)
	uint8_t bOverride_UnderwaterFogCustomData3 : 1; // 0x3(0x1), Mask(0x1)
	uint8_t bOverride_UnderwaterFogCustomData4 : 1; // 0x3(0x1), Mask(0x2)
	uint8_t bOverride_UnderwaterVolumetricFogScale : 1; // 0x3(0x1), Mask(0x4)
	uint8_t bOverride_WaterClipmapHeightOffset : 1; // 0x3(0x1), Mask(0x8)
	uint8_t bOverride_DynamicWaterHeightOffset : 1; // 0x3(0x1), Mask(0x10)
	uint8_t BitPad_0x3_5 : 3; // 0x3(0x1)
	float DynamicWaterHeightOffset; // 0x4(0x4)
	float GerstnerAmplitudeMin; // 0x8(0x4)
	float GerstnerAmplitudeMax; // 0xC(0x4)
	float GerstnerLengthMin; // 0x10(0x4)
	float GerstnerLengthMax; // 0x14(0x4)
	float GerstnerSteepnessMin; // 0x18(0x4)
	float GerstnerSteepnessMax; // 0x1C(0x4)
	float GerstnerDistribution; // 0x20(0x4)
	float GerstnerSpread; // 0x24(0x4)
	float GerstnerBigWaveSpeed; // 0x28(0x4)
	float GerstnerMediumWaveSpeed; // 0x2C(0x4)
	struct FLinearColor WaterLineColor; // 0x30(0x10)
	float WaterHeightOffset; // 0x40(0x4)
	uint8_t bUnderwaterFogEnableWave : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct FLinearColor UnderwaterFogColor; // 0x48(0x10)
	float UnderwaterDepthFogDensity; // 0x58(0x4)
	float UnderwaterFogAttenuation; // 0x5C(0x4)
	float UnderwaterFogStartDistance; // 0x60(0x4)
	struct FLinearColor UnderwaterFogAbsorptionColor; // 0x64(0x10)
	struct FLinearColor UnderwaterFogInscatteringColor; // 0x74(0x10)
	float UnderwaterFogDensity; // 0x84(0x4)
	float UnderwaterFogHeightFalloff; // 0x88(0x4)
	float UnderwaterFogExponentialStartDistance; // 0x8C(0x4)
	float UnderwaterFogCustomData1; // 0x90(0x4)
	float UnderwaterFogCustomData2; // 0x94(0x4)
	float UnderwaterVolumetricFogScale; // 0x98(0x4)
	float UnderwaterFogCustomData3; // 0x9C(0x4)
	float UnderwaterFogCustomData4; // 0xA0(0x4)
	float WaterClipmapHeightOffset; // 0xA4(0x4)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterActor_WaterEffectSetting
// Size: 0x38 (Inherited: 0x0)
struct FWaterActor_WaterEffectSetting
{
	int64_t TOD_ID; // 0x0(0x8)
	float BlendTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TSoftObjectPtr<UWaterEffectSetting> Settings; // 0x10(0x28)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterActor_WaterSectionInfo
// Size: 0x50 (Inherited: 0x0)
struct FWaterActor_WaterSectionInfo
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	int32_t TileX; // 0x4(0x4)
	int32_t TileY; // 0x8(0x4)
	uint8_t Pad_0xC[0xC]; // 0xC(0xC)
	int32_t BaseX; // 0x18(0x4)
	int32_t BaseY; // 0x1C(0x4)
	struct FBox Bounds; // 0x20(0x1C)
	uint8_t Pad_0x3C[0x14]; // 0x3C(0x14)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterMeshData
// Size: 0x10 (Inherited: 0x0)
struct FWaterMeshData
{
	struct AActor* WaterMeshActor; // 0x0(0x8)
	int32_t GenerateIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterPoint
// Size: 0xC (Inherited: 0x0)
struct FWaterPoint
{
	int16_t X; // 0x0(0x2)
	int16_t Y; // 0x2(0x2)
	float Height; // 0x4(0x4)
	float Depth; // 0x8(0x4)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterPointNew
// Size: 0x4 (Inherited: 0x0)
struct FWaterPointNew
{
	int16_t HeightOffset; // 0x0(0x2)
	uint16_t Depth; // 0x2(0x2)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterDataNewAssetIndexTable
// Size: 0x30 (Inherited: 0x0)
struct FWaterDataNewAssetIndexTable
{
	struct TArray<struct UOpenWorldWaterDataNewAsset*> WaterDataNewAssetArray; // 0x0(0x10)
	int16_t NumOfX; // 0x10(0x2)
	int16_t NumOfY; // 0x12(0x2)
	struct FVector2D AssetSize; // 0x14(0x8)
	struct FVector2D InvAssetSize; // 0x1C(0x8)
	struct FVector2D Origin; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.OpenWorldWaterSubsystemTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FOpenWorldWaterSubsystemTickFunction : FTickFunction
{
	struct UOpenWorldWaterSubsystem* Owner; // 0x60(0x8)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.OpenWorldWaterGerstnerWave
// Size: 0x30 (Inherited: 0x0)
struct FOpenWorldWaterGerstnerWave
{
	float WaveLength; // 0x0(0x4)
	float Amplitude; // 0x4(0x4)
	float Steepness; // 0x8(0x4)
	struct FVector Direction; // 0xC(0xC)
	struct FVector2D WaveVector; // 0x18(0x8)
	float WaveSpeed; // 0x20(0x4)
	float WKA; // 0x24(0x4)
	float Q; // 0x28(0x4)
	float PhaseOffset; // 0x2C(0x4)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterWaveData
// Size: 0x68 (Inherited: 0x0)
struct FWaterWaveData
{
	float BlendWeight; // 0x0(0x4)
	float GerstnerAmplitudeMin; // 0x4(0x4)
	float GerstnerAmplitudeMax; // 0x8(0x4)
	float GerstnerLengthMin; // 0xC(0x4)
	float GerstnerLengthMax; // 0x10(0x4)
	float GerstnerSteepnessMin; // 0x14(0x4)
	float GerstnerSteepnessMax; // 0x18(0x4)
	float GerstnerDistribution; // 0x1C(0x4)
	float GerstnerSpread; // 0x20(0x4)
	float GerstnerWaves; // 0x24(0x4)
	float GerstnerSeed; // 0x28(0x4)
	float GerstnerTileSoftness; // 0x2C(0x4)
	float InTime; // 0x30(0x4)
	float RebaseOffsetZ; // 0x34(0x4)
	struct FLinearColor Wind; // 0x38(0x10)
	struct FLinearColor WaterLineColor; // 0x48(0x10)
	float WaterHeightOffset; // 0x58(0x4)
	float DynamicWaterHeightOffset; // 0x5C(0x4)
	uint8_t bUnderwaterFogEnableWave; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float WaterHeightClipmapOffset; // 0x64(0x4)
};

// Object: ScriptStruct OpenWorldWaterDataStreaming.WaterActor_WaterEffectSetting_Other
// Size: 0x18 (Inherited: 0x0)
struct FWaterActor_WaterEffectSetting_Other
{
	uint8_t EnableUnderwaterSunAttenuation : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float SunAttenuation; // 0x4(0x4)
	float SunAttenuationContract; // 0x8(0x4)
	float CausticLightScale; // 0xC(0x4)
	float DefaultWaterHeightTextureOffset; // 0x10(0x4)
	uint8_t EnableWaterData : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterActor
// Size: 0x660 (Inherited: 0x370)
struct AOpenWorldWaterActor : AActor
{
	struct FString ToolTip; // 0x370(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMeshComponent>> GenerateMesh_Render_HD; // 0x380(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMeshComponent>> GenerateMesh_Physics_HD; // 0x390(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMeshComponent>> GenerateMesh_Render_Mobile; // 0x3A0(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMeshComponent>> GenerateMesh_Physics_Mobile; // 0x3B0(0x10)
	struct FName WaterMeshTag; // 0x3C0(0x8)
	struct FName WaterCollisionTag; // 0x3C8(0x8)
	struct FVector WaterHeightTextureUV_NoRebase; // 0x3D0(0xC)
	uint8_t Pad_0x3DC[0x4]; // 0x3DC(0x4)
	struct TArray<struct FWaterMeshData> WaterMeshes; // 0x3E0(0x10)
	struct TArray<struct AActor*> WaterDepthCollisions; // 0x3F0(0x10)
	int64_t CurrentTOD_ID; // 0x400(0x8)
	int64_t LastTOD_ID; // 0x408(0x8)
	float CurrentBlendTime; // 0x410(0x4)
	uint8_t Pad_0x414[0xC]; // 0x414(0xC)
	struct TArray<struct FWaterActor_WaterEffectSetting> WaterEffectSettings; // 0x420(0x10)
	struct TArray<int64_t> TOD_ID_PC; // 0x430(0x10)
	struct TArray<int64_t> TOD_ID_Mobile; // 0x440(0x10)
	struct TArray<struct AActor*> WaterVolumes; // 0x450(0x10)
	struct TSoftObjectPtr<AOpenWorldWaterWaveGenerator> WaterWaveGenerator; // 0x460(0x28)
	struct TSoftClassPtr<struct AActor*> WaterWaveGeneratorClass; // 0x488(0x28)
	struct TSoftObjectPtr<AActor> WaterInteractionSimulator; // 0x4B0(0x28)
	struct TSoftClassPtr<struct AActor*> WaterInteractionSimulatorClass; // 0x4D8(0x28)
	struct TSoftObjectPtr<AOpenWorldWaterInteractiveWaterManager> WaterInteractiveWaterManager; // 0x500(0x28)
	struct TSoftObjectPtr<AExponentialHeightFog> FogActor; // 0x528(0x28)
	struct TSoftObjectPtr<AActor> BiomeManager; // 0x550(0x28)
	struct TSoftClassPtr<struct AActor*> BiomeManagerClass; // 0x578(0x28)
	struct UDataTable* SceneTODSettings; // 0x5A0(0x8)
	struct TSoftObjectPtr<AActor> TODLevelSequenceActor; // 0x5A8(0x28)
	struct TArray<struct TSoftObjectPtr<AActor>> GenerateWaterMeshActor_Render; // 0x5D0(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> GenerateWaterMeshActor_Physics; // 0x5E0(0x10)
	struct TSoftObjectPtr<UPostProcessComponent> UnderWaterPostProcessComponent; // 0x5F0(0x28)
	struct TSoftObjectPtr<UPostProcessComponent> UnderWaterPostProcessComponentDst; // 0x618(0x28)
	struct UMaterialParameterCollection* MPCFluidFlux; // 0x640(0x8)
	struct UMaterialParameterCollection* MPCBuoyancyTest; // 0x648(0x8)
	struct UOpenWorldWaterSubsystem* WaterSubsystem; // 0x650(0x8)
	struct ACHARACTER* CurrentFirstCharacter; // 0x658(0x8)


	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.UpdateWaterEffect_NetMulticast
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x7cd542c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWaterEffect_NetMulticast();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.UpdateWaterEffect_EditorClientToServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x7cd53c8
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWaterEffect_EditorClientToServer();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.UpdateWaterEffect_EditorClient
	// Flags: [Native|Public]
	// Offset: 0x7cd5364
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWaterEffect_EditorClient();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.UpdateWaterEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5284
	// Params: [ Num(2) Size(0x5) ]
	uint8_t UpdateWaterEffect(float DeltaTime);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.PreviewUnderWaterEffect
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7cd5228
	// Params: [ Num(0) Size(0x0) ]
	void PreviewUnderWaterEffect();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.GetWaterWaveGenerator
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7cd51c4
	// Params: [ Num(1) Size(0x8) ]
	struct AOpenWorldWaterWaveGenerator* GetWaterWaveGenerator();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.GetPlayableWorld
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7cd5160
	// Params: [ Num(1) Size(0x8) ]
	struct UWorld* GetPlayableWorld();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.GetFogActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd50fc
	// Params: [ Num(1) Size(0x8) ]
	struct AExponentialHeightFog* GetFogActor();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.GetBiomeManager
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7cd5098
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetBiomeManager();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterActor.GenerateBPExp
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void GenerateBPExp();
	DEFINE_UE_CLASS_HELPERS(AOpenWorldWaterActor, "OpenWorldWaterActor")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterBody
// Size: 0x458 (Inherited: 0x370)
struct AOpenWorldWaterBody : AActor
{
	struct UMaterialInterface* WaterMaterial; // 0x370(0x8)
	struct UMaterialInstanceDynamic* WaterMID; // 0x378(0x8)
	struct FName OutWaterScreenEffectName; // 0x380(0x8)
	struct FName UnderWaterScreenEffectName; // 0x388(0x8)
	struct FName UnderWaterBubblesName; // 0x390(0x8)
	struct FName UnderWaterFallingBubblesName; // 0x398(0x8)
	struct FOpenWorldWaterVolumeSettings Settings; // 0x3A0(0xA8)
	struct TArray<struct TLazyObjectPtr<struct AOpenWorldWaterBodyExclusionVolume>> ExclusionVolumes; // 0x448(0x10)


	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterBody.GetExclusionVolumes
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7cd5554
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AOpenWorldWaterBodyExclusionVolume*> GetExclusionVolumes();
	DEFINE_UE_CLASS_HELPERS(AOpenWorldWaterBody, "OpenWorldWaterBody")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterBodyGenerator
// Size: 0x28 (Inherited: 0x28)
struct UOpenWorldWaterBodyGenerator : UObject
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldWaterBodyGenerator, "OpenWorldWaterBodyGenerator")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterBodyExclusionVolume
// Size: 0x3B8 (Inherited: 0x3B8)
struct AOpenWorldWaterBodyExclusionVolume : APhysicsVolume
{	DEFINE_UE_CLASS_HELPERS(AOpenWorldWaterBodyExclusionVolume, "OpenWorldWaterBodyExclusionVolume")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterDataAsset
// Size: 0xD0 (Inherited: 0x28)
struct UOpenWorldWaterDataAsset : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
	int16_t MinX; // 0x58(0x2)
	int16_t MaxX; // 0x5A(0x2)
	int16_t Spacing; // 0x5C(0x2)
	uint8_t Pad_0x5E[0x2]; // 0x5E(0x2)
	struct FTransform Transform; // 0x60(0x30)
	struct FBoxSphereBounds Bounds; // 0x90(0x1C)
	uint8_t Pad_0xAC[0x24]; // 0xAC(0x24)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldWaterDataAsset, "OpenWorldWaterDataAsset")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterDataComponent
// Size: 0x590 (Inherited: 0x580)
struct UOpenWorldWaterDataComponent : UPrimitiveComponent
{
	struct UOpenWorldWaterDataAsset* WaterDataAsset; // 0x578(0x8)
	uint8_t Pad_0x588[0x8]; // 0x588(0x8)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldWaterDataComponent, "OpenWorldWaterDataComponent")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterDataNewAsset
// Size: 0x80 (Inherited: 0x28)
struct UOpenWorldWaterDataNewAsset : UObject
{
	int16_t NumOfX; // 0x28(0x2)
	int16_t NumOfY; // 0x2A(0x2)
	struct FVector2D AssetSize; // 0x2C(0x8)
	struct FVector2D Origin; // 0x34(0x8)
	int16_t X; // 0x3C(0x2)
	int16_t Y; // 0x3E(0x2)
	struct FVector2D SectionOrigin; // 0x40(0x8)
	int32_t Spacing; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct TArray<struct FWaterPointNew> WaterPoints; // 0x50(0x10)
	struct FBoxSphereBounds WaterBounds; // 0x60(0x1C)
	float WaterHeightBase; // 0x7C(0x4)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldWaterDataNewAsset, "OpenWorldWaterDataNewAsset")

};

// Object: Class OpenWorldWaterDataStreaming.WaterDataAssetsStreamer
// Size: 0x900 (Inherited: 0x7B0)
struct AWaterDataAssetsStreamer : AAssetsStreamer
{
	struct UWorld* OwnerWorld; // 0x7A8(0x8)
	struct AOpenWorldWaterWaveGenerator* WaveGenerator; // 0x7B0(0x8)
	uint8_t Pad_0x7C0[0x28]; // 0x7C0(0x28)
	struct TMap<struct FString, struct UOpenWorldWaterDataAsset*> AssetDataMap; // 0x7E8(0x50)
	struct FWaterDataNewAssetIndexTable WaterDataNewAssetIndexTable; // 0x838(0x30)
	uint8_t Pad_0x868[0x88]; // 0x868(0x88)
	int32_t Spacing; // 0x8F0(0x4)
	uint8_t Pad_0x8F4[0xC]; // 0x8F4(0xC)
	DEFINE_UE_CLASS_HELPERS(AWaterDataAssetsStreamer, "WaterDataAssetsStreamer")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterComponent
// Size: 0x2F0 (Inherited: 0x240)
struct UOpenWorldWaterInteractiveWaterComponent : USceneComponent
{
	float Duration; // 0x240(0x4)
	uint8_t Pad_0x244[0x4]; // 0x244(0x4)
	struct UParticleSystem* InteractiveProducer; // 0x248(0x8)
	float MoveThreshold; // 0x250(0x4)
	uint8_t bEnableInteractiveStrengthDepthDecay : 1; // 0x254(0x1), Mask(0x1)
	uint8_t BitPad_0x254_1 : 7; // 0x254(0x1)
	uint8_t Pad_0x255[0x3]; // 0x255(0x3)
	float InteractiveBaseStrength; // 0x258(0x4)
	float InteractiveDepthDecayRate; // 0x25C(0x4)
	float InteractiveStrength; // 0x260(0x4)
	uint8_t bEnableSampleWaterData : 1; // 0x264(0x1), Mask(0x1)
	uint8_t BitPad_0x264_1 : 7; // 0x264(0x1)
	uint8_t Pad_0x265[0x3]; // 0x265(0x3)
	float SampleInterval; // 0x268(0x4)
	uint8_t bEnableWaterSurfaceRangeCheck : 1; // 0x26C(0x1), Mask(0x1)
	uint8_t BitPad_0x26C_1 : 7; // 0x26C(0x1)
	uint8_t Pad_0x26D[0x3]; // 0x26D(0x3)
	float InteractiveBelowWaterHeightOffset; // 0x270(0x4)
	float InteractiveAboveWaterHeightOffset; // 0x274(0x4)
	uint8_t bIsClosestPointValid : 1; // 0x278(0x1), Mask(0x1)
	uint8_t BitPad_0x278_1 : 7; // 0x278(0x1)
	uint8_t Pad_0x279[0x3]; // 0x279(0x3)
	struct FVector2D ClosestPointOfWater; // 0x27C(0x8)
	uint8_t bIsWaterDataValid : 1; // 0x284(0x1), Mask(0x1)
	uint8_t BitPad_0x284_1 : 7; // 0x284(0x1)
	uint8_t Pad_0x285[0x3]; // 0x285(0x3)
	struct FOpenWorldSampledWaterData WaterData; // 0x288(0x24)
	uint8_t Pad_0x2AC[0x4]; // 0x2AC(0x4)
	struct FMulticastInlineDelegate OnComponentUpdate; // 0x2B0(0x10)
	struct FMulticastInlineDelegate OnParticleUpdate; // 0x2C0(0x10)
	struct UParticleSystemComponent* ParticleComponent; // 0x2D0(0x8)
	struct FVector PrevWorldLocation; // 0x2D8(0xC)
	uint8_t Pad_0x2E4[0xC]; // 0x2E4(0xC)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldWaterInteractiveWaterComponent, "OpenWorldWaterInteractiveWaterComponent")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager
// Size: 0x528 (Inherited: 0x370)
struct AOpenWorldWaterInteractiveWaterManager : AActor
{
	struct TMap<struct FName, struct UParticleSystem*> ParticleSystemCacheMap; // 0x370(0x50)
	struct UTextureRenderTarget2D* InteractiveRenderTarget; // 0x3C0(0x8)
	struct UTextureRenderTarget2D* SimulationCurrentRenderTarget; // 0x3C8(0x8)
	struct UTextureRenderTarget2D* SimulationPreviousRenderTarget; // 0x3D0(0x8)
	struct UTextureRenderTarget2D* SimulationPrePreviousRenderTarget; // 0x3D8(0x8)
	struct UTextureRenderTarget2D* NormalRenderTarget; // 0x3E0(0x8)
	uint8_t Pad_0x3E8[0x8]; // 0x3E8(0x8)
	struct TArray<struct UOpenWorldWaterInteractiveWaterComponent*> InteractiveWaterComponents; // 0x3F0(0x10)
	struct TArray<struct UOpenWorldWaterInteractiveWaterComponent*> ActiveInteractiveComponents; // 0x400(0x10)
	struct TArray<struct UOpenWorldWaterInteractiveWaterComponent*> MarkForFreeInteractiveComponents; // 0x410(0x10)
	struct TArray<struct UParticleSystemComponent*> WaterParticleSystemComponents; // 0x420(0x10)
	struct TArray<struct UParticleSystemComponent*> UnusedParticleComponents; // 0x430(0x10)
	struct TArray<struct UParticleSystemComponent*> ActiveParticleComponents; // 0x440(0x10)
	struct TArray<struct UParticleSystemComponent*> DrawedParticleComponents; // 0x450(0x10)
	struct TMap<struct UParticleSystemComponent*, struct UOpenWorldWaterInteractiveWaterComponent*> ParticleIndexToInteractiveComponentMap; // 0x460(0x50)
	uint8_t Pad_0x4B0[0x11]; // 0x4B0(0x11)
	uint8_t bIsInteractiveWaterEnabled : 1; // 0x4C1(0x1), Mask(0x1)
	uint8_t BitPad_0x4C1_1 : 7; // 0x4C1(0x1)
	uint8_t Pad_0x4C2[0x2]; // 0x4C2(0x2)
	struct FVector PrevMainPlayerLocation; // 0x4C4(0xC)
	uint8_t Pad_0x4D0[0x4]; // 0x4D0(0x4)
	uint8_t bIsClosestPointValid : 1; // 0x4D4(0x1), Mask(0x1)
	uint8_t BitPad_0x4D4_1 : 7; // 0x4D4(0x1)
	uint8_t Pad_0x4D5[0x3]; // 0x4D5(0x3)
	struct FVector2D ClosestPointOfWaterFromMainPlayer; // 0x4D8(0x8)
	uint8_t bIsWaterDataValid : 1; // 0x4E0(0x1), Mask(0x1)
	uint8_t BitPad_0x4E0_1 : 7; // 0x4E0(0x1)
	uint8_t Pad_0x4E1[0x3]; // 0x4E1(0x3)
	struct FOpenWorldSampledWaterData MainViewerWaterData; // 0x4E4(0x24)
	uint8_t Pad_0x508[0x4]; // 0x508(0x4)
	float ExitingInteractiveWaterUpdateTimer; // 0x50C(0x4)
	uint8_t Pad_0x510[0x10]; // 0x510(0x10)
	struct TWeakObjectPtr<struct UOpenWorldWaterSubsystem> WaterSubsystem; // 0x520(0x8)


	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetSimulationTravelSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5e08
	// Params: [ Num(1) Size(0x4) ]
	float GetSimulationTravelSpeed();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetSimulationRenderTargetWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5da4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSimulationRenderTargetWidth();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetSimulationPreviousRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5d40
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetSimulationPreviousRenderTarget();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetSimulationPrePreviousRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5cdc
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetSimulationPrePreviousRenderTarget();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetSimulationDampening
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5c78
	// Params: [ Num(1) Size(0x4) ]
	float GetSimulationDampening();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetSimulationCurrentRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5c14
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetSimulationCurrentRenderTarget();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetNormalRenderTargetWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5bb0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNormalRenderTargetWidth();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetInteractiveRenderTargetWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5b4c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInteractiveRenderTargetWidth();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetInteractiveRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5ae8
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetInteractiveRenderTarget();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetCaptureRangeWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5a84
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCaptureRangeWidth();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetCaptureRangeFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd5a20
	// Params: [ Num(1) Size(0x4) ]
	float GetCaptureRangeFactor();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterInteractiveWaterManager.GetCaptureRangeBaseWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cd59bc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCaptureRangeBaseWidth();
	DEFINE_UE_CLASS_HELPERS(AOpenWorldWaterInteractiveWaterManager, "OpenWorldWaterInteractiveWaterManager")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterMeshActor
// Size: 0x3A0 (Inherited: 0x370)
struct AOpenWorldWaterMeshActor : AActor
{
	int32_t SplineActorIndex; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct USplineComponent* SplineForGenerate; // 0x378(0x8)
	uint8_t Pad_0x380[0x20]; // 0x380(0x20)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldWaterMeshActor, "OpenWorldWaterMeshActor")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem
// Size: 0x240 (Inherited: 0x30)
struct UOpenWorldWaterSubsystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate WaterInteractiveRenderTargetChangedEvent; // 0x38(0x10)
	struct FMulticastInlineDelegate WaterInteractiveEnableChangedEvent; // 0x48(0x10)
	uint8_t Pad_0x58[0x18]; // 0x58(0x18)
	struct AWaterDataAssetsStreamer* WaterDataAssetsStreamer; // 0x70(0x8)
	struct AOpenWorldWaterWaveGenerator* WaterWaveGenerator; // 0x78(0x8)
	uint8_t Pad_0x80[0x40]; // 0x80(0x40)
	struct TArray<struct TWeakObjectPtr<struct AActor>> RegisteredWaterActors; // 0xC0(0x10)
	struct AOpenWorldWaterInteractiveWaterManager* InteractiveWaterManager; // 0xD0(0x8)
	float DefaultWaterHeightOffset; // 0xD8(0x4)
	float bUseWaterDataHeight; // 0xDC(0x4)
	struct TArray<struct UOpenWorldWaterInteractiveWaterComponent*> InteractiveWaterComponents; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x28]; // 0xF0(0x28)
	uint8_t bIsClosestPointValid : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x3]; // 0x119(0x3)
	struct FVector ClosestPointOfWaterFromMainView; // 0x11C(0xC)
	uint8_t Pad_0x128[0x68]; // 0x128(0x68)
	uint8_t bIsMainViewCloseToWater : 1; // 0x190(0x1), Mask(0x1)
	uint8_t BitPad_0x190_1 : 7; // 0x190(0x1)
	uint8_t Pad_0x191[0x3]; // 0x191(0x3)
	struct FOpenWorldWaterVolumeSettings MainViewWaterVolumeSettings; // 0x194(0xA8)
	uint8_t bIsFogValid : 1; // 0x23C(0x1), Mask(0x1)
	uint8_t BitPad_0x23C_1 : 7; // 0x23C(0x1)
	uint8_t bIsWaveValid : 1; // 0x23D(0x1), Mask(0x1)
	uint8_t BitPad_0x23D_1 : 7; // 0x23D(0x1)
	uint8_t Pad_0x23E[0x2]; // 0x23E(0x2)


	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.SampleWaterData
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7cda884
	// Params: [ Num(5) Size(0x3D) ]
	static uint8_t SampleWaterData(struct UObject* ContextObject, const struct FVector& WorldLocation, struct FOpenWorldSampledWaterData& SampledData, const struct FOpenWorldSampledWaterParameter& Parameter);

	// Object: DelegateFunction OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.OpenWorldWaterInteractiveRenderTargetChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OpenWorldWaterInteractiveRenderTargetChanged__DelegateSignature();

	// Object: DelegateFunction OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.OpenWorldWaterInteractiveEnableChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OpenWorldWaterInteractiveEnableChanged__DelegateSignature();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.IsEnableWaterDataHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7cda81c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableWaterDataHeight();

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.GetInteractiveWaterManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7cda744
	// Params: [ Num(2) Size(0x10) ]
	static struct AOpenWorldWaterInteractiveWaterManager* GetInteractiveWaterManager(struct UObject* ContextObject);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.GetInteractiveWaterEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7cda668
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetInteractiveWaterEnabled(struct UObject* ContextObject);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.GetInteractiveSimulationParam
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7cda494
	// Params: [ Num(4) Size(0x11) ]
	static uint8_t GetInteractiveSimulationParam(struct UObject* ContextObject, float& SimulationTravelSpeed, float& SimulationDampening);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.GetInteractiveRTWidth
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7cda248
	// Params: [ Num(5) Size(0x15) ]
	static uint8_t GetInteractiveRTWidth(struct UObject* ContextObject, int32_t& InteractiveRTWidth, int32_t& SimulationRTWidth, int32_t& NormalRTWidth);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.GetCurrentWaterSubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7cda170
	// Params: [ Num(2) Size(0x10) ]
	static struct UOpenWorldWaterSubsystem* GetCurrentWaterSubsystem(struct UWorld* World);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.GetClosestDistanceToWater
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7cd9f98
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t GetClosestDistanceToWater(struct UObject* ContextObject, const struct FVector& WorldLocation, float& ClosestDistance);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.FreeInteractiveWaterComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7cd9e74
	// Params: [ Num(2) Size(0x10) ]
	static void FreeInteractiveWaterComponent(struct UObject* ContextObject, struct UOpenWorldWaterInteractiveWaterComponent* InInteractiveWaterComponent);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.FindClosestPointOfWater
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7cd9c98
	// Params: [ Num(4) Size(0x21) ]
	static uint8_t FindClosestPointOfWater(struct UObject* ContextObject, const struct FVector& WorldLocation, struct FVector& ClosestPoint);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.EnableWaterDataHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1010b790
	// Params: [ Num(1) Size(0x1) ]
	void EnableWaterDataHeight(uint8_t bEnable);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem.AllocateInteractiveWaterComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7cd9b6c
	// Params: [ Num(3) Size(0x18) ]
	static struct UOpenWorldWaterInteractiveWaterComponent* AllocateInteractiveWaterComponent(struct UObject* ContextObject, struct AActor* InActor);
	DEFINE_UE_CLASS_HELPERS(UOpenWorldWaterSubsystem, "OpenWorldWaterSubsystem")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterVolume
// Size: 0x4D0 (Inherited: 0x3B8)
struct AOpenWorldWaterVolume : APhysicsVolume
{
	struct FName WaterMeshTag; // 0x3B8(0x8)
	struct TArray<struct AStaticMeshActor*> WaterMeshActors; // 0x3C0(0x10)
	struct FOpenWorldWaterVolumeSettings Settings; // 0x3D0(0xA8)
	uint8_t bEnableDynamicWater : 1; // 0x478(0x1), Mask(0x1)
	uint8_t BitPad_0x478_1 : 7; // 0x478(0x1)
	uint8_t Pad_0x479[0x3]; // 0x479(0x3)
	struct FVector2D DynamicWaterHeightOffsetRange; // 0x47C(0x8)
	float DynamicWaterHeightOffset; // 0x484(0x4)
	float OldDynamicWaterHeightOffset; // 0x488(0x4)
	float VolumePriority; // 0x48C(0x4)
	float BlendRadius; // 0x490(0x4)
	float BlendWeight; // 0x494(0x4)
	uint8_t bEnabled : 1; // 0x498(0x1), Mask(0x1)
	uint8_t bUnbound : 1; // 0x498(0x1), Mask(0x2)
	uint8_t BitPad_0x498_2 : 6; // 0x498(0x1)
	uint8_t Pad_0x499[0x3]; // 0x499(0x3)
	struct FName OutWaterScreenEffectName; // 0x49C(0x8)
	struct FName UnderWaterScreenEffectName; // 0x4A4(0x8)
	struct FName UnderWaterBubblesName; // 0x4AC(0x8)
	struct FName UnderWaterFallingBubblesName; // 0x4B4(0x8)
	uint8_t Pad_0x4BC[0x4]; // 0x4BC(0x4)
	struct UOpenWorldWaterSubsystem* WaterSubsystem; // 0x4C0(0x8)
	uint8_t Pad_0x4C8[0x8]; // 0x4C8(0x8)


	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterVolume.SetDynamicWaterHeightOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cdb164
	// Params: [ Num(1) Size(0x4) ]
	void SetDynamicWaterHeightOffset(float NewDynamicWaterHeightOffset);

	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterVolume.SetDynamicWaterHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cdb090
	// Params: [ Num(1) Size(0x4) ]
	void SetDynamicWaterHeight(float NewHeight);
	DEFINE_UE_CLASS_HELPERS(AOpenWorldWaterVolume, "OpenWorldWaterVolume")

};

// Object: Class OpenWorldWaterDataStreaming.OpenWorldWaterWaveGenerator
// Size: 0x4F8 (Inherited: 0x370)
struct AOpenWorldWaterWaveGenerator : AActor
{
	uint8_t Pad_0x370[0x30]; // 0x370(0x30)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x3A0(0x8)
	uint8_t bIsGeneratingWaterData : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t BitPad_0x3A8_1 : 7; // 0x3A8(0x1)
	uint8_t Pad_0x3A9[0x3]; // 0x3A9(0x3)
	float GerstnerAmplitudeMin; // 0x3AC(0x4)
	float GerstnerAmplitudeMax; // 0x3B0(0x4)
	float GerstnerLengthMin; // 0x3B4(0x4)
	float GerstnerLengthMax; // 0x3B8(0x4)
	float GerstnerSteepnessMin; // 0x3BC(0x4)
	float GerstnerSteepnessMax; // 0x3C0(0x4)
	float GerstnerDistribution; // 0x3C4(0x4)
	int32_t GerstnerWaves; // 0x3C8(0x4)
	int32_t GerstnerSeed; // 0x3CC(0x4)
	float GerstnerWindYaw; // 0x3D0(0x4)
	float GerstnerTileSoftness; // 0x3D4(0x4)
	float GerstnerSpread; // 0x3D8(0x4)
	float GerstnerBigWaveSpeed; // 0x3DC(0x4)
	float GerstnerMediumWaveSpeed; // 0x3E0(0x4)
	struct FLinearColor WaterLineColor; // 0x3E4(0x10)
	float WaterHeightOffset; // 0x3F4(0x4)
	struct UBillboardComponent* BillboardComp; // 0x3F8(0x8)
	struct UArrowComponent* ArrowComp; // 0x400(0x8)
	struct UTextRenderComponent* TextRenderComp; // 0x408(0x8)
	struct FVector Wind; // 0x410(0xC)
	struct FWaterWaveData PrevWaterVolumeWaveData; // 0x41C(0x68)
	uint8_t Pad_0x484[0x6C]; // 0x484(0x6C)
	struct UOpenWorldWaterSubsystem* WaterSubsystem; // 0x4F0(0x8)


	// Object: Function OpenWorldWaterDataStreaming.OpenWorldWaterWaveGenerator.ForBlueprintDebugging
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x7cdb2d4
	// Params: [ Num(0) Size(0x0) ]
	void ForBlueprintDebugging();
	DEFINE_UE_CLASS_HELPERS(AOpenWorldWaterWaveGenerator, "OpenWorldWaterWaveGenerator")

};

// Object: Class OpenWorldWaterDataStreaming.WaterEffectSetting
// Size: 0xA30 (Inherited: 0x30)
struct UWaterEffectSetting : UDataAsset
{
	struct FString Description; // 0x30(0x10)
	struct FOpenWorldWaterVolumeSettings WaterEffectSettings; // 0x40(0xA8)
	struct FWaterActor_WaterEffectSetting_Other WaterEffectSettingsEx; // 0xE8(0x18)
	struct FPostProcessSettings UnderWaterPostProcess; // 0x100(0x930)
	DEFINE_UE_CLASS_HELPERS(UWaterEffectSetting, "WaterEffectSetting")

};

// Object: Class OpenWorldWaterDataStreaming.WaterHeightTextureGenerateTool
// Size: 0x3A8 (Inherited: 0x370)
struct AWaterHeightTextureGenerateTool : AActor
{
	float DelayTime; // 0x370(0x4)
	uint8_t bForceOnce : 1; // 0x374(0x1), Mask(0x1)
	uint8_t BitPad_0x374_1 : 7; // 0x374(0x1)
	uint8_t Pad_0x375[0x3]; // 0x375(0x3)
	struct UTextureRenderTarget2D* WaterHeightTextureRT; // 0x378(0x8)
	struct UTextureRenderTarget2D* WaterHeightTextureRTCollision; // 0x380(0x8)
	struct USceneCaptureComponent2D* SceneCapture; // 0x388(0x8)
	struct USceneCaptureComponent2D* SceneCaptureCollision; // 0x390(0x8)
	struct USceneCaptureComponent2D* SceneCaptureFinal; // 0x398(0x8)
	struct AOpenWorldWaterActor* OPWaterActor; // 0x3A0(0x8)
	DEFINE_UE_CLASS_HELPERS(AWaterHeightTextureGenerateTool, "WaterHeightTextureGenerateTool")

};

} // namespace SDK
