#pragma once

#include "../CoreUObject_classes.hpp"
#include "AssetPackerRuntime.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: GPResource
// Enums: 14
// Structs: 22
// Classes: 12

struct AActor;
struct ACHARACTER;
enum class EGPAudioBlueprintType : uint8_t;
enum class EGamepadSensitivityCurveType : uint8_t;
enum class ERendererStencilMask : uint8_t;
struct FParticleSysParam;
struct UAnimSequenceBase;
struct UAnimationAsset;
struct UBinkMediaSrt;
struct UCurveFloat;
struct UDataTable;
struct UForceFeedbackAttenuation;
struct UGPAudioEventAsset;
struct UMaterialInstance;
struct UParticleSystem;
struct USceneComponent;
struct USkeletalMesh;
struct UStaticMesh;
struct UTexture;
struct UTexture2D;
struct UWorld;
struct FResourceBaseRow;
struct FSensitivityCurveDataRow;
struct FResourceRumbleRow;
struct FRumbleChannel;
struct FAICharacterAnimationAssetRow;
struct FResourceCommercializationRow;
struct FResourceCommercializationItem;
struct FLoclizeCultureRow;
struct FMediaResRow;
struct FMediaResStruct;
struct FResourceLightRow;
struct FResourceCraterRow;
struct FResourceCraterSizeRow;
struct FResourceDecalRow;
struct FResourceAudioRow;
struct FMusicAudioRow;
struct FResourceUIAudioRow;
struct FFXMaterialCurves;
struct FPhysicsShellDropConfig;
struct FResourceFXRow;
struct FFXMaterialFloatParam;
struct FResourceAnimRow;
struct UFXComponentManager;
struct UFXResourceContainerComponent;
struct UResourceAnimManager;
struct UResourceFXManager;
struct UResourceAudioManager;
struct UClassesResourceAudioManager;
struct UResourceDecalManager;
struct UResourceLightManager;
struct UResourceCommercializationManager;
struct UResourceEmoteCommercializationManager;
struct UResourceCraterManager;
struct UResourceCraterSizeManager;

// Object: Enum GPResource.EFXResourceCompPriority
enum class EFXResourceCompPriority : uint8_t
{
	EPriority_Low = 0,
	EPriority_Mid = 1,
	EPriority_High = 2,
	EPriority_Max = 3
};

// Object: Enum GPResource.EDFRumbleDecoratorType
enum class EDFRumbleDecoratorType : uint8_t
{
	Invalid = 0,
	Normal = 1,
	Silencer = 2,
	EDFRumbleDecoratorType_MAX = 3
};

// Object: Enum GPResource.EDFRumbleType
enum class EDFRumbleType : uint8_t
{
	Invalid = 0,
	Default = 1,
	Fire = 2,
	Harmed = 3,
	Explode = 4,
	Environment = 5,
	EDFRumbleType_MAX = 6
};

// Object: Enum GPResource.EEmoteSpaceCheckBoxType
enum class EEmoteSpaceCheckBoxType : uint8_t
{
	Big = 0,
	Medium = 1,
	Small = 2,
	EEmoteSpaceCheckBoxType_MAX = 3
};

// Object: Enum GPResource.ECommercializationAnimationSlot
enum class ECommercializationAnimationSlot : uint8_t
{
	LeftArm = 0,
	LeftArmBeforeAO = 1,
	UpperBody = 2,
	UpperBodyWithIK = 3,
	FullBody = 4,
	FullBodyTakeHit = 5,
	ECommercializationAnimationSlot_MAX = 6
};

// Object: Enum GPResource.ECommercializationItemUseOption
enum class ECommercializationItemUseOption : uint8_t
{
	GestureItem = 0,
	SkillMesh = 1,
	EmoteItem = 2,
	ECommercializationItemUseOption_MAX = 3
};

// Object: Enum GPResource.ECommercializationAttachableMesh
enum class ECommercializationAttachableMesh : uint8_t
{
	CharacterMesh = 0,
	SkillMesh = 1,
	ECommercializationAttachableMesh_MAX = 2
};

// Object: Enum GPResource.ECommercializationResourceType
enum class ECommercializationResourceType : uint8_t
{
	None = 0,
	Spray = 1,
	Voice = 2,
	OneHandedGesture = 3,
	TwoHandedGesture = 4,
	Emote = 5,
	TwoPersonGesture = 6,
	TwoPersonEmote = 7,
	MultiPersonEmote = 8,
	ECommercializationResourceType_MAX = 9
};

// Object: Enum GPResource.ECommercializationResourceRarity
enum class ECommercializationResourceRarity : uint8_t
{
	None = 0,
	Common = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	Prestige = 5,
	ECommercializationResourceRarity_MAX = 6
};

// Object: Enum GPResource.EMediaDownloadType
enum class EMediaDownloadType : uint8_t
{
	EMDT_DefaultPackage = 0,
	EMDT_PufferDownload = 1,
	EMDT_Web = 2,
	EMDT_PC_Web = 3,
	EMDT_Both_Web = 4,
	EMDT_MAX = 5
};

// Object: Enum GPResource.ECraterSizeType
enum class ECraterSizeType : uint8_t
{
	ZeroSize = 0,
	FlatSmallSize = 1,
	FlatMiddleSize = 2,
	FlatBigSize = 3,
	MicroSize = 4,
	SmallSize = 5,
	MiddleSize = 6,
	BigSize = 7,
	HugeSize = 8,
	ECraterSizeType_MAX = 9
};

// Object: Enum GPResource.EUIAudioPreloadState
enum class EUIAudioPreloadState : uint8_t
{
	EUAPS_Default = 0,
	EUAPS_SOLLobby = 1,
	EUAPS_MPLobby = 2,
	EUAPS_MP = 4,
	EUAPS_SOL = 8,
	EUAPS_Raid = 16,
	EUAPS_BHD = 32,
	EUAPS_ModeHall = 64,
	EUAPS_MAX = 65
};

// Object: Enum GPResource.EFXAudioStopType
enum class EFXAudioStopType : uint8_t
{
	None = 0,
	FXDeactivate = 1,
	FXRecycleToPool = 2,
	Normal = 3,
	Never = 4,
	EFXAudioStopType_MAX = 5
};

// Object: Enum GPResource.EResourceFXType
enum class EResourceFXType : uint8_t
{
	OTHER = 0,
	MUZZLEFLASH = 1,
	EXPLODE = 2,
	IMPACT = 3,
	TRIAL = 4,
	SKILL = 5,
	MUZZLETRAIL = 6,
	SHELLDROP = 7,
	VEHICLE = 8,
	DESTRUCTIBLE = 9,
	GAMEMODE = 10,
	WEAPONPARTS = 11,
	IMPORTANTTRAIL = 12,
	EResourceFXType_MAX = 13
};

// Object: ScriptStruct GPResource.ResourceBaseRow
// Size: 0x10 (Inherited: 0x10)
struct FResourceBaseRow : FDescRowBase
{
};

// Object: ScriptStruct GPResource.SensitivityCurveDataRow
// Size: 0x40 (Inherited: 0x10)
struct FSensitivityCurveDataRow : FResourceBaseRow
{
	EGamepadSensitivityCurveType CurveType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TSoftObjectPtr<UCurveFloat> Curve; // 0x18(0x28)
};

// Object: ScriptStruct GPResource.ResourceRumbleRow
// Size: 0xB0 (Inherited: 0x10)
struct FResourceRumbleRow : FResourceBaseRow
{
	uint64_t RumbleId; // 0x10(0x8)
	EDFRumbleType RumbleType; // 0x18(0x1)
	uint8_t bLooping : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float Duration; // 0x1C(0x4)
	struct TMap<EDFRumbleDecoratorType, struct TSoftObjectPtr<UForceFeedbackEffect>> OverrideRumbleEffects; // 0x20(0x50)
	uint8_t bUseByRumbleComponent : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	float MultiplierValue; // 0x74(0x4)
	float StartTime; // 0x78(0x4)
	struct FName AttachPointName; // 0x7C(0x8)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct TSoftObjectPtr<UForceFeedbackAttenuation> Attenuation; // 0x88(0x28)
};

// Object: ScriptStruct GPResource.RumbleChannel
// Size: 0x30 (Inherited: 0x0)
struct FRumbleChannel
{
	uint8_t bUseLargeChannel : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bUseSmallChannel : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<UCurveFloat> OverrideCurve; // 0x8(0x28)
};

// Object: ScriptStruct GPResource.AICharacterAnimationAssetRow
// Size: 0x28 (Inherited: 0x10)
struct FAICharacterAnimationAssetRow : FResourceBaseRow
{
	struct FName CharacterID; // 0x10(0x8)
	struct TArray<struct UDataTable*> AnimAssetTables; // 0x18(0x10)
};

// Object: ScriptStruct GPResource.ResourceCommercializationRow
// Size: 0x208 (Inherited: 0x10)
struct FResourceCommercializationRow : FResourceBaseRow
{
	struct FName ResourceID; // 0x10(0x8)
	ECommercializationResourceRarity Rarity; // 0x18(0x1)
	ECommercializationResourceType Type; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct FText Name; // 0x20(0x18)
	struct FSoftObjectPath Image; // 0x38(0x18)
	uint8_t bHasFemaleResource : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct TSoftObjectPtr<UAnimationAsset> FPPDef; // 0x58(0x28)
	struct TSoftObjectPtr<UAnimationAsset> TPPDef; // 0x80(0x28)
	struct TSoftObjectPtr<UAnimationAsset> TPPProneDef; // 0xA8(0x28)
	uint8_t bNeedOverrideTPPProneAnimSupine : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct TSoftObjectPtr<UAnimationAsset> TPPSupineDef; // 0xD8(0x28)
	struct TSoftObjectPtr<UAnimationAsset> FPPDefFemale; // 0x100(0x28)
	struct TSoftObjectPtr<UAnimationAsset> TPPDefFemale; // 0x128(0x28)
	struct TSoftObjectPtr<UAnimationAsset> TPPProneDefFemale; // 0x150(0x28)
	ECommercializationAnimationSlot OneHandFppSlot; // 0x178(0x1)
	ECommercializationAnimationSlot OneHandTppSlot; // 0x179(0x1)
	ECommercializationAnimationSlot TwoHandFppSlot; // 0x17A(0x1)
	ECommercializationAnimationSlot TwoHandTppSlot; // 0x17B(0x1)
	ECommercializationAnimationSlot EmoteTppSlot; // 0x17C(0x1)
	uint8_t bEmoteEnableIK : 1; // 0x17D(0x1), Mask(0x1)
	uint8_t BitPad_0x17D_1 : 7; // 0x17D(0x1)
	uint8_t bHideAllWeapons : 1; // 0x17E(0x1), Mask(0x1)
	uint8_t BitPad_0x17E_1 : 7; // 0x17E(0x1)
	uint8_t Pad_0x17F[0x1]; // 0x17F(0x1)
	struct FString AudioTypeString; // 0x180(0x10)
	struct TSoftObjectPtr<UTexture> TextureHD; // 0x190(0x28)
	struct TSoftObjectPtr<UTexture> TextureMobile; // 0x1B8(0x28)
	uint8_t bIsDynamic : 1; // 0x1E0(0x1), Mask(0x1)
	uint8_t BitPad_0x1E0_1 : 7; // 0x1E0(0x1)
	uint8_t Pad_0x1E1[0x3]; // 0x1E1(0x3)
	float SequenceNumber; // 0x1E4(0x4)
	float AnimationSpeed; // 0x1E8(0x4)
	uint8_t Pad_0x1EC[0x4]; // 0x1EC(0x4)
	struct TArray<struct FResourceCommercializationItem> Items; // 0x1F0(0x10)
	EEmoteSpaceCheckBoxType EmoteSpaceCheckBoxType; // 0x200(0x1)
	uint8_t Pad_0x201[0x7]; // 0x201(0x7)
};

// Object: ScriptStruct GPResource.ResourceCommercializationItem
// Size: 0x1D0 (Inherited: 0x0)
struct FResourceCommercializationItem
{
	ECommercializationItemUseOption ItemUseOption; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<USkeletalMesh> ItemFppMesh; // 0x8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> ItemTppMesh; // 0x30(0x28)
	struct TSoftObjectPtr<USkeletalMesh> ItemTppMeshOpt; // 0x58(0x28)
	struct TSoftObjectPtr<UAnimationAsset> ItemFppAnim; // 0x80(0x28)
	struct TSoftObjectPtr<UAnimationAsset> ItemTppAnim; // 0xA8(0x28)
	struct TSoftObjectPtr<UAnimationAsset> ItemTppProneAnim; // 0xD0(0x28)
	ECommercializationAttachableMesh MeshToAttach; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	struct FName SocketName; // 0xFC(0x8)
	struct FName SocketNameTpp; // 0x104(0x8)
	float FPPVisibleTime; // 0x10C(0x4)
	float FPPHiddenTime; // 0x110(0x4)
	float TPPVisibleTime; // 0x114(0x4)
	float TPPHiddenTime; // 0x118(0x4)
	float TPPProneVisibleTime; // 0x11C(0x4)
	float TPPProneHiddenTime; // 0x120(0x4)
	float LifeSpan; // 0x124(0x4)
	uint8_t Pad_0x128[0x8]; // 0x128(0x8)
	struct FTransform RelativeTransform; // 0x130(0x30)
	struct TArray<struct FName> AvatarID; // 0x160(0x10)
	uint8_t bAutoMatchSkillItemFashion : 1; // 0x170(0x1), Mask(0x1)
	uint8_t BitPad_0x170_1 : 7; // 0x170(0x1)
	uint8_t bNeedRefreshSkillItemFashion : 1; // 0x171(0x1), Mask(0x1)
	uint8_t BitPad_0x171_1 : 7; // 0x171(0x1)
	uint8_t Pad_0x172[0x6]; // 0x172(0x6)
	struct TMap<struct FName, struct FName> HeroItemIDMap; // 0x178(0x50)
	uint8_t Pad_0x1C8[0x8]; // 0x1C8(0x8)
};

// Object: ScriptStruct GPResource.LoclizeCultureRow
// Size: 0x40 (Inherited: 0x10)
struct FLoclizeCultureRow : FDescRowBase
{
	struct FName CultureSign; // 0x10(0x8)
	struct FName CultureDisplayName; // 0x18(0x8)
	struct FName CultureWwise; // 0x20(0x8)
	struct FText CultureWwiseDisplayName; // 0x28(0x18)
};

// Object: ScriptStruct GPResource.MediaResRow
// Size: 0xE8 (Inherited: 0x80)
struct FMediaResRow : FAssetPakerPakPolicyRow
{
	struct FString Desc; // 0x80(0x10)
	uint8_t bPlayOnLoad : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t bPlayNativeSound : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t bHasAudioEvent : 1; // 0x92(0x1), Mask(0x1)
	uint8_t BitPad_0x92_1 : 7; // 0x92(0x1)
	uint8_t bLoop : 1; // 0x93(0x1), Mask(0x1)
	uint8_t BitPad_0x93_1 : 7; // 0x93(0x1)
	uint8_t bOnlySkipPlayStop : 1; // 0x94(0x1), Mask(0x1)
	uint8_t BitPad_0x94_1 : 7; // 0x94(0x1)
	uint8_t bIsMobileOnly : 1; // 0x95(0x1), Mask(0x1)
	uint8_t BitPad_0x95_1 : 7; // 0x95(0x1)
	uint8_t Pad_0x96[0x2]; // 0x96(0x2)
	struct TArray<struct FMediaResStruct> MediaResList; // 0x98(0x10)
	uint8_t bPlayFullScreed : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct FText MediaTitle; // 0xB0(0x18)
	struct FText MediaDesc; // 0xC8(0x18)
	EMediaDownloadType MediaDownloadType; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
};

// Object: ScriptStruct GPResource.MediaResStruct
// Size: 0xA0 (Inherited: 0x0)
struct FMediaResStruct
{
	struct FString MediaUrl; // 0x0(0x10)
	struct FString MediaUrl_HD; // 0x10(0x10)
	struct FString MediaUrl_Console; // 0x20(0x10)
	struct TSoftObjectPtr<UBinkMediaSrt> SubtitleAsset; // 0x30(0x28)
	struct TSoftObjectPtr<UTexture2D> MediaTexRes; // 0x58(0x28)
	struct FName MediaTexUrl; // 0x80(0x8)
	struct FName AudioAssetKey; // 0x88(0x8)
	int32_t BinMediaSize; // 0x90(0x4)
	int32_t BinMediaSize_HD; // 0x94(0x4)
	int32_t BinMediaSize_Console; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct GPResource.ResourceLightRow
// Size: 0x68 (Inherited: 0x10)
struct FResourceLightRow : FResourceBaseRow
{
	struct FName ResourceID; // 0x10(0x8)
	float LightRadius; // 0x18(0x4)
	float LightDuration; // 0x1C(0x4)
	struct FVector LightColor; // 0x20(0xC)
	float LightDistanceToWall; // 0x2C(0x4)
	uint8_t UseInverseSquaredFalloff : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float LightFalloffExponent; // 0x34(0x4)
	float Intensity; // 0x38(0x4)
	struct FColor Color; // 0x3C(0x4)
	struct FSoftObjectPath IESTexturePath; // 0x40(0x18)
	float ShadowRadiusScale; // 0x58(0x4)
	float AttenuationRadius; // 0x5C(0x4)
	float SpotlightInnerAngle; // 0x60(0x4)
	float SpotlightOuterAngle; // 0x64(0x4)
};

// Object: ScriptStruct GPResource.ResourceCraterRow
// Size: 0xE8 (Inherited: 0x10)
struct FResourceCraterRow : FResourceBaseRow
{
	struct FName MainWorld; // 0x10(0x8)
	struct TSoftObjectPtr<UStaticMesh> VTDecalMesh; // 0x18(0x28)
	struct TSoftObjectPtr<UMaterialInstance> InnerMI; // 0x40(0x28)
	struct TSoftObjectPtr<UMaterialInstance> MiddleMI; // 0x68(0x28)
	struct TSoftObjectPtr<UMaterialInstance> OutterMI; // 0x90(0x28)
	struct TSoftObjectPtr<UMaterialInstance> EdgeMI; // 0xB8(0x28)
	float CDLODComponentScaleZ; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
};

// Object: ScriptStruct GPResource.ResourceCraterSizeRow
// Size: 0x20 (Inherited: 0x10)
struct FResourceCraterSizeRow : FResourceBaseRow
{
	ECraterSizeType CraterSizeID; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float radius; // 0x14(0x4)
	float Weight; // 0x18(0x4)
	float MaxRadius; // 0x1C(0x4)
};

// Object: ScriptStruct GPResource.ResourceDecalRow
// Size: 0x180 (Inherited: 0x10)
struct FResourceDecalRow : FResourceBaseRow
{
	struct FName ResourceID; // 0x10(0x8)
	struct TSoftObjectPtr<UMaterialInstance> MaterialSP; // 0x18(0x28)
	struct TSoftObjectPtr<UMaterialInstance> DeferredMaterialSP; // 0x40(0x28)
	struct TSoftObjectPtr<UMaterialInstance> DeferredMobileMaterialSP; // 0x68(0x28)
	struct TSoftObjectPtr<UStaticMesh> VTDecalMesh; // 0x90(0x28)
	uint8_t bRemoveFoliage : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t bUseDeferredMaterialOnMobile : 1; // 0xB9(0x1), Mask(0x1)
	uint8_t BitPad_0xB9_1 : 7; // 0xB9(0x1)
	uint8_t bUseDecalIgnoreChannel : 1; // 0xBA(0x1), Mask(0x1)
	uint8_t BitPad_0xBA_1 : 7; // 0xBA(0x1)
	uint8_t Pad_0xBB[0x1]; // 0xBB(0x1)
	struct FVector Location; // 0xBC(0xC)
	struct FRotator Rotator; // 0xC8(0xC)
	struct FVector ScaleSize; // 0xD4(0xC)
	struct FVector DeferredScaleSize; // 0xE0(0xC)
	struct FVector VTScaleSize; // 0xEC(0xC)
	float RemoveFoliageRadius; // 0xF8(0x4)
	float Duration; // 0xFC(0x4)
	uint8_t bEnableFadeOut : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	float FadeOutDuration; // 0x104(0x4)
	struct FName FadeOutMaterialParamName; // 0x108(0x8)
	float FixAngle; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct TMap<struct FName, struct FRuntimeFloatCurve> MaterialParamCurveMaps; // 0x118(0x50)
	float UpdateParamInterval; // 0x168(0x4)
	uint8_t bRandomRotate : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t bRandomScale : 1; // 0x16C(0x1), Mask(0x2)
	uint8_t BitPad_0x16C_2 : 6; // 0x16C(0x1)
	uint8_t Pad_0x16D[0x3]; // 0x16D(0x3)
	struct FVector2D RandomScaleMinMax; // 0x170(0x8)
	uint8_t bEnableDetect : 1; // 0x178(0x1), Mask(0x1)
	uint8_t bDestroyOwnerAfterFade : 1; // 0x178(0x1), Mask(0x2)
	uint8_t BitPad_0x178_2 : 6; // 0x178(0x1)
	uint8_t bForceAttachToHitComponent : 1; // 0x179(0x1), Mask(0x1)
	uint8_t BitPad_0x179_1 : 7; // 0x179(0x1)
	uint8_t bShouldHideWhenParentHidden : 1; // 0x17A(0x1), Mask(0x1)
	uint8_t BitPad_0x17A_1 : 7; // 0x17A(0x1)
	uint8_t Pad_0x17B[0x5]; // 0x17B(0x5)
};

// Object: ScriptStruct GPResource.ResourceAudioRow
// Size: 0x210 (Inherited: 0x80)
struct FResourceAudioRow : FAssetPakerPakPolicyRow
{
	struct FName ResourceID; // 0x80(0x8)
	EGPAudioBlueprintType SoundType; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FString Desc; // 0x90(0x10)
	uint8_t bNeedExplicitStop : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t bNeedFollowActor : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	uint8_t Pad_0xA2[0x6]; // 0xA2(0x6)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioPlaySP; // 0xA8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> CloseAudioEvent; // 0xD0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> MedAudioEvent; // 0xF8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> FarAudioEvent; // 0x120(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> CloseAudioEvent_InDoor; // 0x148(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> MedAudioEvent_InDoor; // 0x170(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> FarAudioEvent_InDoor; // 0x198(0x28)
	float CloseAudioEventDistance; // 0x1C0(0x4)
	float MedAudioEventDistance; // 0x1C4(0x4)
	float FarAudioEventDistance; // 0x1C8(0x4)
	float DistanceScaleFactor_SOL; // 0x1CC(0x4)
	uint8_t bNeedSimplifiedTransDiff : 1; // 0x1D0(0x1), Mask(0x1)
	uint8_t BitPad_0x1D0_1 : 7; // 0x1D0(0x1)
	uint8_t Pad_0x1D1[0x3]; // 0x1D1(0x3)
	float bSimplifiedTransDiffCheckDistance; // 0x1D4(0x4)
	uint8_t bNeedCompleteTransDiff : 1; // 0x1D8(0x1), Mask(0x1)
	uint8_t BitPad_0x1D8_1 : 7; // 0x1D8(0x1)
	uint8_t bNeedSimplifiedTransDiffMP : 1; // 0x1D9(0x1), Mask(0x1)
	uint8_t BitPad_0x1D9_1 : 7; // 0x1D9(0x1)
	uint8_t Pad_0x1DA[0x2]; // 0x1DA(0x2)
	float DistanceScaleFactor_Breakthrough_3P; // 0x1DC(0x4)
	float DistanceScaleFactor_Breakthrough_1P; // 0x1E0(0x4)
	float ImpactAudioCullDistance; // 0x1E4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioStopSP; // 0x1E8(0x28)
};

// Object: ScriptStruct GPResource.MusicAudioRow
// Size: 0xE8 (Inherited: 0x80)
struct FMusicAudioRow : FAssetPakerPakPolicyRow
{
	struct FString Desc; // 0x80(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioPlaySP; // 0x90(0x28)
	uint8_t bIsSkipIsPlaying : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioDependencySP; // 0xC0(0x28)
};

// Object: ScriptStruct GPResource.ResourceUIAudioRow
// Size: 0xF0 (Inherited: 0x80)
struct FResourceUIAudioRow : FAssetPakerPakPolicyRow
{
	struct FName ResourceID; // 0x80(0x8)
	struct FString Desc; // 0x88(0x10)
	uint8_t bNeedExplicitStop : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	uint32_t AudioPreloadState; // 0x9C(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioPlaySP; // 0xA0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioStopSP; // 0xC8(0x28)
};

// Object: ScriptStruct GPResource.FXMaterialCurves
// Size: 0xA0 (Inherited: 0x0)
struct FFXMaterialCurves
{
	struct TMap<struct FName, struct TSoftObjectPtr<UCurveLinearColor>> MaterialCurveLinearColor; // 0x0(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UCurveFloat>> MaterialCurveFloat; // 0x50(0x50)
};

// Object: ScriptStruct GPResource.PhysicsShellDropConfig
// Size: 0xA0 (Inherited: 0x0)
struct FPhysicsShellDropConfig
{
	float InitUpAngle; // 0x0(0x4)
	float InitRightAngle; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform InitOffsetTrans; // 0x10(0x30)
	struct FRotator AngularRotator; // 0x40(0xC)
	float InitSpeed; // 0x4C(0x4)
	float Gravity; // 0x50(0x4)
	float ReboundCount; // 0x54(0x4)
	float ReboundDecaySpeedFactor; // 0x58(0x4)
	float PlayLifeTime; // 0x5C(0x4)
	struct TSoftObjectPtr<UStaticMesh> ShellDropMeshPath; // 0x60(0x28)
	struct FSoftObjectPath Mat_ShellDropPath; // 0x88(0x18)
};

// Object: ScriptStruct GPResource.ResourceFXRow
// Size: 0x2D0 (Inherited: 0x10)
struct FResourceFXRow : FResourceBaseRow
{
	struct FName ResourceID; // 0x10(0x8)
	struct FString Desc; // 0x18(0x10)
	float CommonSpawnDistance; // 0x28(0x4)
	int32_t CommonExistNum; // 0x2C(0x4)
	uint8_t bEnterPhysShellDrop : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0xF]; // 0x31(0xF)
	struct FPhysicsShellDropConfig PhysShellDropConfig; // 0x40(0xA0)
	struct TSoftObjectPtr<UParticleSystem> FxSP; // 0xE0(0x28)
	struct TSoftObjectPtr<UParticleSystem> FxSP_Low; // 0x108(0x28)
	struct TSoftObjectPtr<UParticleSystem> FxSP_High; // 0x130(0x28)
	struct FVector EffectScale; // 0x158(0xC)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct TMap<struct FName, struct TSoftObjectPtr<UCurveFloat>> DistScaleCurves; // 0x168(0x50)
	struct TMap<uint8_t, struct FFXMaterialCurves> MaterialCurves; // 0x1B8(0x50)
	float PlayLifeTime; // 0x208(0x4)
	float FadeInTime; // 0x20C(0x4)
	struct FName FadeInAlphaParamName; // 0x210(0x8)
	float FadeOutTime; // 0x218(0x4)
	struct FName FadeOutAlphaParamName; // 0x21C(0x8)
	uint8_t Pad_0x224[0x4]; // 0x224(0x4)
	struct TArray<struct FFXMaterialFloatParam> FadeOutAlphaMaterialParams; // 0x228(0x10)
	struct FName FadeAlphaParamName; // 0x238(0x8)
	struct TArray<struct FName> OtherFadeOutParamNameList; // 0x240(0x10)
	float DelayPlayTime; // 0x250(0x4)
	struct FRotator RotationRate; // 0x254(0xC)
	struct FVector RotationPivotTranslation; // 0x260(0xC)
	uint8_t Pad_0x26C[0x4]; // 0x26C(0x4)
	struct TArray<struct FParticleSysParam> ParticleParams; // 0x270(0x10)
	struct FName AudioResourceId; // 0x280(0x8)
	uint8_t bSOLAudioAlone : 1; // 0x288(0x1), Mask(0x1)
	uint8_t BitPad_0x288_1 : 7; // 0x288(0x1)
	uint8_t Pad_0x289[0x3]; // 0x289(0x3)
	struct FName AudioResourceId_SOL; // 0x28C(0x8)
	EFXAudioStopType NoneLoopAudioStopType; // 0x294(0x1)
	uint8_t Pad_0x295[0x3]; // 0x295(0x3)
	float ParticleBenchmark; // 0x298(0x4)
	float ParticleBenchmarkLow; // 0x29C(0x4)
	float ParticleBenchmarkHigh; // 0x2A0(0x4)
	float GPUConsume; // 0x2A4(0x4)
	int32_t CPUActiveParticle; // 0x2A8(0x4)
	int32_t GPUActiveParticle; // 0x2AC(0x4)
	float GameAttention; // 0x2B0(0x4)
	uint32_t MaxInstanceNum; // 0x2B4(0x4)
	uint8_t bLimitByMaxInstanceNum : 1; // 0x2B8(0x1), Mask(0x1)
	uint8_t BitPad_0x2B8_1 : 7; // 0x2B8(0x1)
	uint8_t bExceedCullBySignificance : 1; // 0x2B9(0x1), Mask(0x1)
	uint8_t BitPad_0x2B9_1 : 7; // 0x2B9(0x1)
	EResourceFXType FXType; // 0x2BA(0x1)
	uint8_t bLimitByMaxFXTypeNum : 1; // 0x2BB(0x1), Mask(0x1)
	uint8_t BitPad_0x2BB_1 : 7; // 0x2BB(0x1)
	uint8_t bUpdateSignificance : 1; // 0x2BC(0x1), Mask(0x1)
	uint8_t BitPad_0x2BC_1 : 7; // 0x2BC(0x1)
	uint8_t Pad_0x2BD[0x3]; // 0x2BD(0x3)
	float GameImportance; // 0x2C0(0x4)
	float DistanceForTranslucencySort; // 0x2C4(0x4)
	uint8_t Pad_0x2C8[0x8]; // 0x2C8(0x8)
};

// Object: ScriptStruct GPResource.FXMaterialFloatParam
// Size: 0xC (Inherited: 0x0)
struct FFXMaterialFloatParam
{
	int32_t MaterialIndex; // 0x0(0x4)
	struct FName ParamName; // 0x4(0x8)
};

// Object: ScriptStruct GPResource.ResourceAnimRow
// Size: 0x50 (Inherited: 0x10)
struct FResourceAnimRow : FResourceBaseRow
{
	struct FName ResourceID; // 0x10(0x8)
	struct FString Desc; // 0x18(0x10)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSP; // 0x28(0x28)
};

// Object: Class GPResource.FXComponentManager
// Size: 0x1C8 (Inherited: 0x30)
struct UFXComponentManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UFXComponentManager, "FXComponentManager")

	uint8_t Pad_0x30[0x148]; // 0x30(0x148)
	struct TArray<struct UFXResourceContainerComponent*> CacheResourceComponents; // 0x178(0x10)
	uint8_t Pad_0x188[0x18]; // 0x188(0x18)
	struct TArray<struct UFXResourceContainerComponent*> CachePendingManagerRemoveComponents; // 0x1A0(0x10)
	uint8_t Pad_0x1B0[0x18]; // 0x1B0(0x18)

	// Object: Function GPResource.FXComponentManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae2ae28
	// Params: [ Num(2) Size(0x10) ]
	static struct UFXComponentManager* Get(struct UWorld* WorldContext);
};

// Object: Class GPResource.FXResourceContainerComponent
// Size: 0xE60 (Inherited: 0x800)
struct UFXResourceContainerComponent : UParticleSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UFXResourceContainerComponent, "FXResourceContainerComponent")

	uint8_t Pad_0x800[0xA]; // 0x800(0xA)
	uint8_t bAutoActive : 1; // 0x80A(0x1), Mask(0x1)
	uint8_t BitPad_0x80A_1 : 7; // 0x80A(0x1)
	uint8_t Pad_0x80B[0x1]; // 0x80B(0x1)
	struct FName FxResourceId; // 0x80C(0x8)
	uint8_t bAudioAutoPlayOnLoaded : 1; // 0x814(0x1), Mask(0x1)
	uint8_t BitPad_0x814_1 : 7; // 0x814(0x1)
	uint8_t Pad_0x815[0x47]; // 0x815(0x47)
	struct FName EffectResourceId; // 0x85C(0x8)
	uint8_t Pad_0x864[0xC]; // 0x864(0xC)
	struct FResourceFXRow ResourceFX; // 0x870(0x2D0)
	struct FResourceAudioRow ResourceAudioFX; // 0xB40(0x210)
	struct TSet<struct UObject*> CacheObjects; // 0xD50(0x50)
	uint8_t Pad_0xDA0[0x14]; // 0xDA0(0x14)
	int32_t RecordTranslucencySortOrder; // 0xDB4(0x4)
	uint8_t Pad_0xDB8[0x14]; // 0xDB8(0x14)
	uint8_t bIsSetStencilOutside : 1; // 0xDCC(0x1), Mask(0x1)
	uint8_t BitPad_0xDCC_1 : 7; // 0xDCC(0x1)
	uint8_t Pad_0xDCD[0x33]; // 0xDCD(0x33)
	struct TSet<struct UObject*> CacheAudioObjects; // 0xE00(0x50)
	float RTPCValue_Character; // 0xE50(0x4)
	uint8_t Pad_0xE54[0xC]; // 0xE54(0xC)

	// Object: Function GPResource.FXResourceContainerComponent.SetResourceFX
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xae2c050
	// Params: [ Num(3) Size(0xA) ]
	uint8_t SetResourceFX(const struct FName& ResourceFXId, uint8_t bInAutoActive);

	// Object: Function GPResource.FXResourceContainerComponent.SetFXStencilOutside
	// Flags: [Final|Native|Public]
	// Offset: 0xae2bf70
	// Params: [ Num(2) Size(0x5) ]
	void SetFXStencilOutside(int32_t Value, ERendererStencilMask StencilMask);

	// Object: Function GPResource.FXResourceContainerComponent.ProcessTranslucencySortInRecover
	// Flags: [Final|Native|Protected]
	// Offset: 0xae2bf5c
	// Params: [ Num(0) Size(0x0) ]
	void ProcessTranslucencySortInRecover();

	// Object: Function GPResource.FXResourceContainerComponent.ProcessTranslucencySortInPlay
	// Flags: [Final|Native|Protected]
	// Offset: 0xae2bf48
	// Params: [ Num(0) Size(0x0) ]
	void ProcessTranslucencySortInPlay();

	// Object: Function GPResource.FXResourceContainerComponent.PlayResourceSoundOnly
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xae2be3c
	// Params: [ Num(3) Size(0xA) ]
	uint8_t PlayResourceSoundOnly(const struct FName& ResourceFXId, uint8_t bInAutoActive);

	// Object: Function GPResource.FXResourceContainerComponent.PlayEffect
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xf5fdf84
	// Params: [ Num(13) Size(0x80) ]
	static struct UFXResourceContainerComponent* PlayEffect(struct UObject* WorldContext, const struct FName& EffectId, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, uint8_t bUseObjectPool, struct USceneComponent* Socket, struct FName InSocketName, uint8_t bIsHighFrequency, EFXResourceCompPriority Priority, uint8_t bEnableInstanceLimit, struct ACHARACTER* InCharacterToBlame, float RTPCValue);

	// Object: Function GPResource.FXResourceContainerComponent.OnRecycleReset
	// Flags: [Final|Native|Protected]
	// Offset: 0xae2be28
	// Params: [ Num(0) Size(0x0) ]
	void OnRecycleReset();

	// Object: Function GPResource.FXResourceContainerComponent.OnPSLoaded
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xae2bd68
	// Params: [ Num(1) Size(0x18) ]
	void OnPSLoaded(const struct FSoftObjectPath& ResourcePaths);

	// Object: Function GPResource.FXResourceContainerComponent.KillTargetEmitter
	// Flags: [Native|Public]
	// Offset: 0xae2bcbc
	// Params: [ Num(1) Size(0x8) ]
	void KillTargetEmitter(struct FName EmiterName);

	// Object: Function GPResource.FXResourceContainerComponent.IsHandleIndexValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xae2bc0c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsHandleIndexValid(int32_t CheckHandleIndex);

	// Object: Function GPResource.FXResourceContainerComponent.GetHandleIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xfe1e3b0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHandleIndex();

	// Object: Function GPResource.FXResourceContainerComponent.DeactivatePSC
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf922eec
	// Params: [ Num(2) Size(0x8) ]
	void DeactivatePSC(uint8_t bDoFadeOutCheck, int32_t TargetEffectHandle);

	// Object: Function GPResource.FXResourceContainerComponent.DeactivateEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfb72ab4
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t DeactivateEffect(struct UFXResourceContainerComponent* TargetEffect, int32_t TargetEffectHandle);

	// Object: Function GPResource.FXResourceContainerComponent.ClearOutsideSetFXStencil
	// Flags: [Final|Native|Public]
	// Offset: 0xae2bbf8
	// Params: [ Num(0) Size(0x0) ]
	void ClearOutsideSetFXStencil();

	// Object: Function GPResource.FXResourceContainerComponent.BP_Deactivate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae2bbe4
	// Params: [ Num(0) Size(0x0) ]
	void BP_Deactivate();

	// Object: Function GPResource.FXResourceContainerComponent.BP_Activate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae2bb38
	// Params: [ Num(1) Size(0x1) ]
	void BP_Activate(uint8_t bReset);

	// Object: Function GPResource.FXResourceContainerComponent.ActivatePSC
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae2ba48
	// Params: [ Num(2) Size(0x2) ]
	void ActivatePSC(uint8_t bFlagAsJustAttached, uint8_t bEnableDelayPlay);

	// Object: Function GPResource.FXResourceContainerComponent.AcquireFromPool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae2b930
	// Params: [ Num(4) Size(0x20) ]
	static struct UFXResourceContainerComponent* AcquireFromPool(struct UObject* WorldContext, struct FName FXName, uint8_t inFxQualityOverride);
};

// Object: Class GPResource.ResourceAnimManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceAnimManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceAnimManager, "ResourceAnimManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ResourceFXManager
// Size: 0x90 (Inherited: 0x30)
struct UResourceFXManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceFXManager, "ResourceFXManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TMap<struct FName, struct UParticleSystem*> FXSPCache; // 0x40(0x50)
};

// Object: Class GPResource.ResourceAudioManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceAudioManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceAudioManager, "ResourceAudioManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ClassesResourceAudioManager
// Size: 0x40 (Inherited: 0x30)
struct UClassesResourceAudioManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UClassesResourceAudioManager, "ClassesResourceAudioManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ResourceDecalManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceDecalManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceDecalManager, "ResourceDecalManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ResourceLightManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceLightManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceLightManager, "ResourceLightManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ResourceCommercializationManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceCommercializationManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceCommercializationManager, "ResourceCommercializationManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ResourceEmoteCommercializationManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceEmoteCommercializationManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceEmoteCommercializationManager, "ResourceEmoteCommercializationManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ResourceCraterManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceCraterManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceCraterManager, "ResourceCraterManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GPResource.ResourceCraterSizeManager
// Size: 0x40 (Inherited: 0x30)
struct UResourceCraterSizeManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UResourceCraterSizeManager, "ResourceCraterSizeManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

} // namespace SDK
