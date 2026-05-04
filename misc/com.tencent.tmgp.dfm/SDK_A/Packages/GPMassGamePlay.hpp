#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "GameCore.hpp"
#include "MassEntity.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: GPMassGamePlay
// Enums: 1
// Structs: 48
// Classes: 30

struct AActor;
struct AGPCharacter;
struct AGPPlayerController;
struct AGPPlayerState;
struct AGPVehicleBase;
struct AWeaponBase;
enum class EDFMGamePlayMode : uint8_t;
enum class EGPMarkerClassType : uint8_t;
enum class EGPMarkerType : uint16_t;
enum class EGPQuestActionMarkerType : uint8_t;
enum class EMarkerCampType : uint8_t;
enum class EMarkerEdgeTrackType : uint8_t;
enum class EMarkerRefreshFrequencyLevel : uint8_t;
enum class EQuickChatMarkingItemType : uint8_t;
enum class ERevealMarkerReason : uint8_t;
struct FGPMarkerEntityCreateParams;
struct FMassEntityHandle;
struct UGPBlackboardComponent;
struct UGPMarkerConfigDataAsset;
struct UMarkerConfigExtraDataAsset;
struct UMassEntitySubsystem;
struct UWidget;
struct FMassMarkerStringHandlePool;
struct FActorMassMarkerHandlePool;
struct FMarkerMassEntityHandleArr;
struct FGPMarkerWidgetFragment;
struct FGPMarkerCountFragment;
struct FGPMarkerAimFragment;
struct FGPMarkerSupportWeaponFragment;
struct FGPMarkerSectorAnchorFragment;
struct FGPMarkerTransferFragment;
struct FGPMarkerInteractorFragment;
struct FGPMarkerOptimizationFragment;
struct FGPMarkerVisibilityFragment;
struct FMassMarkerItemCreateConfigRow;
struct FMarkerConfigRow;
struct FGPCharacterHealthBarConfigFragment;
struct FGPMarkerAimedConfigFragment;
struct FGPMarkerDistanceConfigFragment;
struct FGPMarkerDistanceTextConfigFragment;
struct FGPMarkerEdgeTrackConfigFragment;
struct FGPMarkerNameTextConfigFragment;
struct FGPMarkerOpacityConfigFragment;
struct FGPMarkerScaleConfigFragment;
struct FMarkerConfigFragments;
struct FMarkerInfoRow;
struct FGPMarkerConfigFragment;
struct FGPMarkerMapFragment;
struct FGPMarkerBubbleFragment;
struct FGPMarkerRevealFragment;
struct FGPMarkerMarkingFragment;
struct FGPMarkerQuestFragment;
struct FGPMarkerTacticalEquipmentFragment;
struct FGPMarkerWeaponFragment;
struct FGPMarkerVehicleFragment;
struct FGPMarkerCharacterEquipmentFragment;
struct FGPMarkerPendingDeathFragment;
struct FGPMarkerAIFragment;
struct FGPMarkerPlayerFragment;
struct FGPPlayerMarkerCampFragment;
struct FGPMarkerCampFragment;
struct FGPMarkerUIFragment;
struct FGPMarkerScreenDataFragment;
struct FGPMarkerBaseFragment;
struct FGPMarkerArchetypeConfigRow;
struct FGPMarkerFragmentConfig;
struct FGPMarkerEntityToDestroy;
struct FObjectWrapperFragment;
struct FAgentRadiusFragment;
struct FTransformFragment;
struct UGPMarkerBaseConfigProcessors;
struct UGPMarkerDebugProcessor;
struct UMarkerArchetypeConfigManager;
struct UMarkerConfigManager;
struct USOLMarkerConfigManager;
struct UBattleFieldMarkerConfigManager;
struct UMassMarkerItemCreateConfigManager;
struct UGPMarkerLocationUpdateProcessor;
struct UGPMarkerScreenProjectionProcessor;
struct UGPMarkerVisibilityCheckProcessor;
struct UGPMarkerUIUpdateProcessor;
struct UGPMarkerCampUpdateProcessor;
struct UGPMarkerValidityCheckProcessor;
struct UGPMarkerAimDetectionProcessor;
struct UGPMarkerUpdateWidgetProcessor;
struct UGPMarkerMassSubsystem;
struct UGPMarkerRevealProcessor;
struct UGPMarkerBubbleProcessor;
struct UGPMarkerVehicleProcessor;
struct UGPMarkerWeaponProcessor;
struct UGPMarkerTacticalEquipmentProcessor;
struct UGPMarkerQuestProcessor;
struct UGPMarkerMapProcessor;
struct UGPMarkerInteractorProcessor;
struct UGPMarkerBattleFieldProcessor;
struct UGPMarkerSOLProcessor;
struct UGPMarkerMPProcessor;
struct UGPMarkerSupportWeaponProcessor;
struct UGPMarkerTacticalMarkingProcessor;
struct UGPMassMarkerBaseWidget;

// Object: Enum GPMassGamePlay.EMassProcessorGroupType
enum class EMassProcessorGroupType : uint8_t
{
	UpdateWorldFromMass = 0,
	SyncWorldToMass = 1,
	Behavior = 2,
	Tasks = 3,
	Avoidance = 4,
	Movement = 5,
	EMassProcessorGroupType_MAX = 6
};

// Object: ScriptStruct GPMassGamePlay.MassMarkerStringHandlePool
// Size: 0x50 (Inherited: 0x0)
struct FMassMarkerStringHandlePool
{
	struct TMap<struct FString, struct FMassEntityHandle> MarkerHandleBaseArray; // 0x0(0x50)
};

// Object: ScriptStruct GPMassGamePlay.ActorMassMarkerHandlePool
// Size: 0x50 (Inherited: 0x0)
struct FActorMassMarkerHandlePool
{
	struct TMap<uint32_t, struct FMassEntityHandle> MarkerHandleBaseArray; // 0x0(0x50)
};

// Object: ScriptStruct GPMassGamePlay.MarkerMassEntityHandleArr
// Size: 0x50 (Inherited: 0x0)
struct FMarkerMassEntityHandleArr
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerWidgetFragment
// Size: 0x8 (Inherited: 0x1)
struct FGPMarkerWidgetFragment : FMassFragment
{
	struct TWeakObjectPtr<struct UGPMassMarkerBaseWidget> MarkerWidget; // 0x0(0x8)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerCountFragment
// Size: 0xC (Inherited: 0x1)
struct FGPMarkerCountFragment : FMassFragment
{
	uint8_t Pad_0x1[0xB]; // 0x1(0xB)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerAimFragment
// Size: 0x8 (Inherited: 0x1)
struct FGPMarkerAimFragment : FMassFragment
{
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerSupportWeaponFragment
// Size: 0xC (Inherited: 0x1)
struct FGPMarkerSupportWeaponFragment : FMassFragment
{
	uint8_t Pad_0x1[0xB]; // 0x1(0xB)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerSectorAnchorFragment
// Size: 0x18 (Inherited: 0x1)
struct FGPMarkerSectorAnchorFragment : FMassFragment
{
	struct FString SectorAnchorMarkerType; // 0x0(0x10)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerTransferFragment
// Size: 0x8 (Inherited: 0x1)
struct FGPMarkerTransferFragment : FMassFragment
{
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerInteractorFragment
// Size: 0xC (Inherited: 0x1)
struct FGPMarkerInteractorFragment : FMassFragment
{
	uint8_t Pad_0x1[0xB]; // 0x1(0xB)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerOptimizationFragment
// Size: 0x18 (Inherited: 0x1)
struct FGPMarkerOptimizationFragment : FMassFragment
{
	uint8_t Pad_0x1[0xC]; // 0x1(0xC)
	EMarkerRefreshFrequencyLevel RefreshFrequencyLevel; // 0xD(0x1)
	uint8_t Pad_0xE[0xA]; // 0xE(0xA)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerVisibilityFragment
// Size: 0xC (Inherited: 0x1)
struct FGPMarkerVisibilityFragment : FMassFragment
{
	uint8_t Pad_0x1[0xB]; // 0x1(0xB)
};

// Object: ScriptStruct GPMassGamePlay.MassMarkerItemCreateConfigRow
// Size: 0xC0 (Inherited: 0x8)
struct FMassMarkerItemCreateConfigRow : FTableRowBase
{
	EGPMarkerType MarkerType; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TSoftObjectPtr<UGPMarkerConfigDataAsset> MarkerConfig; // 0x10(0x28)
	struct TSoftObjectPtr<UMarkerConfigExtraDataAsset> MarkerExtraConfig; // 0x38(0x28)
	struct TSoftObjectPtr<UGPMarkerConfigDataAsset> LowLevelMarkerConfig; // 0x60(0x28)
	struct TSoftObjectPtr<UMarkerConfigExtraDataAsset> LowLevelMarkerExtraConfig; // 0x88(0x28)
	struct TArray<EDFMGamePlayMode> AllowCreateGameplayModes; // 0xB0(0x10)
};

// Object: ScriptStruct GPMassGamePlay.MarkerConfigRow
// Size: 0x40 (Inherited: 0x8)
struct FMarkerConfigRow : FTableRowBase
{
	struct FName MarkerTagName; // 0x8(0x8)
	struct FSoftObjectPath MarkerInfoTable; // 0x10(0x18)
	struct FSoftObjectPath MarkingInfoTable; // 0x28(0x18)
};

// Object: ScriptStruct GPMassGamePlay.GPCharacterHealthBarConfigFragment
// Size: 0x18 (Inherited: 0x1)
struct FGPCharacterHealthBarConfigFragment : FMassFragment
{
	uint8_t bAllowShowHealth : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bShowHealthDefault : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_2 : 6; // 0x1(0x1)
	uint8_t bShowHealthWhenAiming : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bShowHealthWhenIsMedic : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bHideHealthWhenCovered : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float MaxDistanceShowHealth; // 0x8(0x4)
	float MedicShowHealthPercent; // 0xC(0x4)
	uint8_t bHideHealthWhenOutScreen : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t bShowHealthWhenHit : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	float ShowHealthTimeWhenHit; // 0x14(0x4)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerAimedConfigFragment
// Size: 0x38 (Inherited: 0x1)
struct FGPMarkerAimedConfigFragment : FMassFragment
{
	float AimCheckDistance; // 0x0(0x4)
	uint8_t bHideWhenNotAimed : 1; // 0x4(0x1), Mask(0x1)
	uint8_t bHideWhenNotInAimedCircle : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_2 : 6; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct TArray<float> AimedCircleRadiusFactorArray; // 0x8(0x10)
	struct TArray<float> AimedCircleRadiusAimingOpacityArray; // 0x18(0x10)
	struct TArray<float> AimedCircleRadiusNotAimingOpacityArray; // 0x28(0x10)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerDistanceConfigFragment
// Size: 0x14 (Inherited: 0x1)
struct FGPMarkerDistanceConfigFragment : FMassFragment
{
	float CreatedDistance; // 0x0(0x4)
	uint8_t bHideWhenOutScreen : 1; // 0x4(0x1), Mask(0x1)
	uint8_t bHideWhenCovered : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_2 : 6; // 0x5(0x1)
	uint8_t bForceShowWithinDistance : 1; // 0x6(0x1), Mask(0x1)
	uint8_t BitPad_0x6_1 : 7; // 0x6(0x1)
	uint8_t Pad_0x7[0x1]; // 0x7(0x1)
	float ForceShowDistance; // 0x8(0x4)
	uint8_t bShowWithinDistance : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float ShowDistance; // 0x10(0x4)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerDistanceTextConfigFragment
// Size: 0xC (Inherited: 0x1)
struct FGPMarkerDistanceTextConfigFragment : FMassFragment
{
	uint8_t bNeedShowDistanceText : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bShowDistanceDefault : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_2 : 6; // 0x1(0x1)
	uint8_t bShowDistanceWhenAiming : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bHideDistanceWhenCovered : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	float MaxDistanceShowDistance; // 0x4(0x4)
	uint8_t bHideDistanceWhenOutScreen : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bShowDistanceWhenMarked : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerEdgeTrackConfigFragment
// Size: 0x2 (Inherited: 0x1)
struct FGPMarkerEdgeTrackConfigFragment : FMassFragment
{
	uint8_t bNeedShowArrow : 1; // 0x0(0x1), Mask(0x1)
	EMarkerEdgeTrackType MarkerEdgeTrackType; // 0x1(0x1)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerNameTextConfigFragment
// Size: 0x10 (Inherited: 0x1)
struct FGPMarkerNameTextConfigFragment : FMassFragment
{
	uint8_t bShowNumIconNotArmedIcon : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bAllowShowName : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_2 : 6; // 0x1(0x1)
	uint8_t bShowNameDefault : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bShowNameWhenAiming : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bHideNameWhenCovered : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float MaxDistanceShowName; // 0x8(0x4)
	uint8_t bHideNameWhenOutScreen : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerOpacityConfigFragment
// Size: 0x40 (Inherited: 0x1)
struct FGPMarkerOpacityConfigFragment : FMassFragment
{
	uint8_t bEnableOpacityChange : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float NormalOpacity; // 0x4(0x4)
	float CoveredOpacity; // 0x8(0x4)
	float AimingOpacity; // 0xC(0x4)
	uint8_t bOutScreenOverrideOpacity : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float OutScreenOverrideOpacity; // 0x14(0x4)
	uint8_t bEnableOpacityDistance : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<float> OpacityDistanceArray; // 0x20(0x10)
	struct TArray<float> OpacityScalarArray; // 0x30(0x10)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerScaleConfigFragment
// Size: 0x30 (Inherited: 0x1)
struct FGPMarkerScaleConfigFragment : FMassFragment
{
	uint8_t bScaleWithDistance : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<float> ScaleDistanceArray; // 0x8(0x10)
	struct TArray<float> ScaleScalarArray; // 0x18(0x10)
	uint8_t bOutScreenOverrideScale : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float OutScreenOverrideScale; // 0x2C(0x4)
};

// Object: ScriptStruct GPMassGamePlay.MarkerConfigFragments
// Size: 0xF8 (Inherited: 0x0)
struct FMarkerConfigFragments
{
	struct FGPMarkerDistanceConfigFragment MarkerDistanceConfig; // 0x0(0x14)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FGPMarkerAimedConfigFragment MarkerAimedConfig; // 0x18(0x38)
	struct FGPMarkerScaleConfigFragment MarkerScaleConfig; // 0x50(0x30)
	struct FGPMarkerOpacityConfigFragment MarkerOpacityConfig; // 0x80(0x40)
	struct FGPMarkerDistanceTextConfigFragment MarkerDistanceTextConfig; // 0xC0(0xC)
	struct FGPMarkerEdgeTrackConfigFragment MarkerEdgeTrackConfig; // 0xCC(0x2)
	uint8_t Pad_0xCE[0x2]; // 0xCE(0x2)
	struct FGPMarkerNameTextConfigFragment MarkerNameTextConfig; // 0xD0(0x10)
	struct FGPCharacterHealthBarConfigFragment CharacterHealthBarConfigFragment; // 0xE0(0x18)
};

// Object: ScriptStruct GPMassGamePlay.MarkerInfoRow
// Size: 0x60 (Inherited: 0x8)
struct FMarkerInfoRow : FTableRowBase
{
	EGPMarkerType MarkerType; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<EMarkerCampType, struct FMarkerConfigFragments> MarkerConfigFragmentMaps; // 0x10(0x50)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerConfigFragment
// Size: 0xF0 (Inherited: 0x1)
struct FGPMarkerConfigFragment : FMassFragment
{
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FMarkerViewCreateConfig ItemCreateConfig; // 0x10(0xE0)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerMapFragment
// Size: 0x1 (Inherited: 0x1)
struct FGPMarkerMapFragment : FMassFragment
{
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerBubbleFragment
// Size: 0xC (Inherited: 0x1)
struct FGPMarkerBubbleFragment : FMassFragment
{
	EQuickChatMarkingItemType BubbleItemType; // 0x0(0x1)
	uint8_t Pad_0x2[0xA]; // 0x2(0xA)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerRevealFragment
// Size: 0x20 (Inherited: 0x1)
struct FGPMarkerRevealFragment : FMassFragment
{
	struct TArray<ERevealMarkerReason> RevealedReason; // 0x0(0x10)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerMarkingFragment
// Size: 0x58 (Inherited: 0x1)
struct FGPMarkerMarkingFragment : FMassFragment
{
	struct FMarkingBaseInfo MarkingBaseInfo; // 0x0(0x48)
	uint8_t Pad_0x49[0xF]; // 0x49(0xF)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerQuestFragment
// Size: 0xC (Inherited: 0x1)
struct FGPMarkerQuestFragment : FMassFragment
{
	EGPQuestActionMarkerType QuestActionMarkerType; // 0x0(0x1)
	uint8_t Pad_0x2[0xA]; // 0x2(0xA)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerTacticalEquipmentFragment
// Size: 0x18 (Inherited: 0x1)
struct FGPMarkerTacticalEquipmentFragment : FMassFragment
{
	struct FString TacticalEquipmentType; // 0x0(0x10)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerWeaponFragment
// Size: 0x4 (Inherited: 0x1)
struct FGPMarkerWeaponFragment : FMassFragment
{
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerVehicleFragment
// Size: 0x4 (Inherited: 0x1)
struct FGPMarkerVehicleFragment : FMassFragment
{
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerCharacterEquipmentFragment
// Size: 0x8 (Inherited: 0x1)
struct FGPMarkerCharacterEquipmentFragment : FMassFragment
{
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerPendingDeathFragment
// Size: 0x4 (Inherited: 0x1)
struct FGPMarkerPendingDeathFragment : FMassFragment
{
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerAIFragment
// Size: 0x2 (Inherited: 0x1)
struct FGPMarkerAIFragment : FMassFragment
{
	uint8_t Pad_0x1[0x1]; // 0x1(0x1)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerPlayerFragment
// Size: 0x34 (Inherited: 0x1)
struct FGPMarkerPlayerFragment : FMassFragment
{
	uint8_t Pad_0x1[0x1F]; // 0x1(0x1F)
	struct TWeakObjectPtr<struct AGPCharacter> MarkedCharacter; // 0x20(0x8)
	struct TWeakObjectPtr<struct AGPPlayerState> MarkedPlayerState; // 0x28(0x8)
	uint8_t Pad_0x30[0x4]; // 0x30(0x4)
};

// Object: ScriptStruct GPMassGamePlay.GPPlayerMarkerCampFragment
// Size: 0x14 (Inherited: 0x1)
struct FGPPlayerMarkerCampFragment : FMassFragment
{
	uint8_t Pad_0x1[0x13]; // 0x1(0x13)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerCampFragment
// Size: 0x1 (Inherited: 0x1)
struct FGPMarkerCampFragment : FMassFragment
{
	EMarkerCampType MarkerCampType; // 0x0(0x1)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerUIFragment
// Size: 0x1C (Inherited: 0x1)
struct FGPMarkerUIFragment : FMassFragment
{
	uint8_t Pad_0x1[0x1B]; // 0x1(0x1B)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerScreenDataFragment
// Size: 0x20 (Inherited: 0x1)
struct FGPMarkerScreenDataFragment : FMassFragment
{
	uint8_t Pad_0x1[0x1F]; // 0x1(0x1F)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerBaseFragment
// Size: 0x40 (Inherited: 0x1)
struct FGPMarkerBaseFragment : FMassFragment
{
	EGPMarkerClassType MarkerClassType; // 0x0(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	EGPMarkerType MarkerType; // 0x4(0x4)
	struct FString MarkerTypeString; // 0x8(0x10)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x18(0x8)
	uint8_t Pad_0x20[0x20]; // 0x20(0x20)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerArchetypeConfigRow
// Size: 0x20 (Inherited: 0x8)
struct FGPMarkerArchetypeConfigRow : FTableRowBase
{
	EGPMarkerType MarkerType; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FName> MassFragments; // 0x10(0x10)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerFragmentConfig
// Size: 0x1 (Inherited: 0x0)
struct FGPMarkerFragmentConfig
{
	struct FMassFragment Fragment; // 0x0(0x1)
};

// Object: ScriptStruct GPMassGamePlay.GPMarkerEntityToDestroy
// Size: 0x14 (Inherited: 0x0)
struct FGPMarkerEntityToDestroy
{
	struct TWeakObjectPtr<struct AActor> MarkerActor; // 0x0(0x8)
	EGPMarkerClassType MarkerClassType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	EGPMarkerType MarkerType; // 0xC(0x4)
	uint32_t MarkerGUID; // 0x10(0x4)
};

// Object: ScriptStruct GPMassGamePlay.ObjectWrapperFragment
// Size: 0x1 (Inherited: 0x1)
struct FObjectWrapperFragment : FMassFragment
{
};

// Object: ScriptStruct GPMassGamePlay.AgentRadiusFragment
// Size: 0x4 (Inherited: 0x1)
struct FAgentRadiusFragment : FMassFragment
{
	float radius; // 0x0(0x4)
};

// Object: ScriptStruct GPMassGamePlay.TransformFragment
// Size: 0x30 (Inherited: 0x1)
struct FTransformFragment : FMassFragment
{
	struct FTransform Transform; // 0x0(0x30)
};

// Object: Class GPMassGamePlay.GPMarkerBaseConfigProcessors
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerBaseConfigProcessors : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerBaseConfigProcessors, "GPMarkerBaseConfigProcessors")

};

// Object: Class GPMassGamePlay.GPMarkerDebugProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerDebugProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerDebugProcessor, "GPMarkerDebugProcessor")

};

// Object: Class GPMassGamePlay.MarkerArchetypeConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UMarkerArchetypeConfigManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UMarkerArchetypeConfigManager, "MarkerArchetypeConfigManager")

};

// Object: Class GPMassGamePlay.MarkerConfigManager
// Size: 0x30 (Inherited: 0x30)
struct UMarkerConfigManager : UDataTableSystemManagerBase
{	DEFINE_UE_CLASS_HELPERS(UMarkerConfigManager, "MarkerConfigManager")

};

// Object: Class GPMassGamePlay.SOLMarkerConfigManager
// Size: 0x40 (Inherited: 0x30)
struct USOLMarkerConfigManager : UMarkerConfigManager
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(USOLMarkerConfigManager, "SOLMarkerConfigManager")

};

// Object: Class GPMassGamePlay.BattleFieldMarkerConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UBattleFieldMarkerConfigManager : UMarkerConfigManager
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UBattleFieldMarkerConfigManager, "BattleFieldMarkerConfigManager")

};

// Object: Class GPMassGamePlay.MassMarkerItemCreateConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UMassMarkerItemCreateConfigManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UMassMarkerItemCreateConfigManager, "MassMarkerItemCreateConfigManager")

};

// Object: Class GPMassGamePlay.GPMarkerLocationUpdateProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerLocationUpdateProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerLocationUpdateProcessor, "GPMarkerLocationUpdateProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerScreenProjectionProcessor
// Size: 0x360 (Inherited: 0x80)
struct UGPMarkerScreenProjectionProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x2E0]; // 0x80(0x2E0)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerScreenProjectionProcessor, "GPMarkerScreenProjectionProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerVisibilityCheckProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerVisibilityCheckProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerVisibilityCheckProcessor, "GPMarkerVisibilityCheckProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerUIUpdateProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerUIUpdateProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerUIUpdateProcessor, "GPMarkerUIUpdateProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerCampUpdateProcessor
// Size: 0x320 (Inherited: 0x80)
struct UGPMarkerCampUpdateProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	struct UGPMarkerMassSubsystem* MarkerMassSubsystem; // 0x310(0x8)
	uint8_t Pad_0x318[0x8]; // 0x318(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerCampUpdateProcessor, "GPMarkerCampUpdateProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerValidityCheckProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerValidityCheckProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerValidityCheckProcessor, "GPMarkerValidityCheckProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerAimDetectionProcessor
// Size: 0x320 (Inherited: 0x80)
struct UGPMarkerAimDetectionProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x2A0]; // 0x80(0x2A0)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerAimDetectionProcessor, "GPMarkerAimDetectionProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerUpdateWidgetProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerUpdateWidgetProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerUpdateWidgetProcessor, "GPMarkerUpdateWidgetProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerMassSubsystem
// Size: 0x6C0 (Inherited: 0x30)
struct UGPMarkerMassSubsystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0x28]; // 0x30(0x28)
	struct AGPCharacter* LocalGPCharacter; // 0x58(0x8)
	struct AGPPlayerController* LocalGPPlayerController; // 0x60(0x8)
	struct UGPBlackboardComponent* Blackboard; // 0x68(0x8)
	struct AWeaponBase* CurrentWeapon; // 0x70(0x8)
	struct AGPVehicleBase* CurrentVehicle; // 0x78(0x8)
	struct AActor* CurrentViewTarget; // 0x80(0x8)
	struct UMassEntitySubsystem* MassEntitySubsystem; // 0x88(0x8)
	uint8_t Pad_0x90[0xA8]; // 0x90(0xA8)
	struct TMap<struct FName, struct UScriptStruct*> FragmentStructMap; // 0x138(0x50)
	uint8_t Pad_0x188[0xA0]; // 0x188(0xA0)
	struct TMap<EGPMarkerType, struct FActorMassMarkerHandlePool> ActorMarkerHandlePoolMap; // 0x228(0x50)
	struct TMap<EGPMarkerType, struct FMassMarkerStringHandlePool> MarkerStringHandlePoolMap; // 0x278(0x50)
	struct TMap<EGPMarkerType, struct FMassEntityHandle> TacticalMarkingHandlePoolMap; // 0x2C8(0x50)
	struct TMap<EGPMarkerType, struct FMarkerMassEntityHandleArr> TypeToAvailableEntitiesMap; // 0x318(0x50)
	struct TMap<struct UGPMassMarkerBaseWidget*, struct FMassEntityHandle> WidgetsToEntitiesMap; // 0x368(0x50)
	uint8_t Pad_0x3B8[0x190]; // 0x3B8(0x190)
	struct TMap<struct FName, struct FMarkerConfigRow> ConfigRowMap; // 0x548(0x50)
	uint8_t Pad_0x598[0xA0]; // 0x598(0xA0)
	struct TMap<EGPMarkerType, struct FMassMarkerItemCreateConfigRow> MarkerItemCreateConfigRowMap; // 0x638(0x50)
	uint8_t Pad_0x688[0x14]; // 0x688(0x14)
	struct FDelegate NotifyToAddMassMarker; // 0x69C(0x10)
	struct FDelegate NotifyToRemoveMassMarker; // 0x6AC(0x10)
	uint8_t Pad_0x6BC[0x4]; // 0x6BC(0x4)


	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.ReloadArchetypeConfigs
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xad81a80
	// Params: [ Num(0) Size(0x0) ]
	void ReloadArchetypeConfigs();

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.RegisterTacticalMarkingEntityToMaps
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xad81900
	// Params: [ Num(2) Size(0x90) ]
	void RegisterTacticalMarkingEntityToMaps(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.RegisterNoActorEntityToMaps
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xad81780
	// Params: [ Num(2) Size(0x90) ]
	void RegisterNoActorEntityToMaps(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.RegisterActorEntityToMaps
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xad81600
	// Params: [ Num(2) Size(0x90) ]
	void RegisterActorEntityToMaps(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.InitializeMarkerFragments
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad81480
	// Params: [ Num(2) Size(0x90) ]
	void InitializeMarkerFragments(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.GetTotalMarkerCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xad8144c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalMarkerCount();

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.GetMarkerCountByType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xad813a0
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetMarkerCountByType(EGPMarkerType MarkerType);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xad812fc
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPMarkerMassSubsystem* Get(struct UObject* WorldContext);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.FindNoActorMarkerEntity
	// Flags: [Final|Native|Public]
	// Offset: 0xad811b4
	// Params: [ Num(3) Size(0x20) ]
	struct FMassEntityHandle FindNoActorMarkerEntity(EGPMarkerType MarkerType, struct FString MarkerString);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.FindActorMarkerEntity
	// Flags: [Final|Native|Public]
	// Offset: 0xad810d0
	// Params: [ Num(3) Size(0x10) ]
	struct FMassEntityHandle FindActorMarkerEntity(EGPMarkerType MarkerType, uint32_t ActorGUID);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.DestroyTacticalMarkingEntity
	// Flags: [Final|Native|Public]
	// Offset: 0xad80ff0
	// Params: [ Num(2) Size(0xC) ]
	void DestroyTacticalMarkingEntity(EGPMarkerType MarkerType, struct FMassEntityHandle Entity);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.DestroyNoActorMarkerEntity
	// Flags: [Final|Native|Public]
	// Offset: 0xad80e70
	// Params: [ Num(3) Size(0x20) ]
	void DestroyNoActorMarkerEntity(EGPMarkerType MarkerType, struct FMassEntityHandle Entity, struct FString MarkerString);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.DestroyActorMarkerEntity
	// Flags: [Final|Native|Public]
	// Offset: 0xad80d54
	// Params: [ Num(3) Size(0x10) ]
	void DestroyActorMarkerEntity(EGPMarkerType MarkerType, struct FMassEntityHandle Entity, uint32_t ActorGUID);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.CreateTacticalMarkingEntity
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad80c0c
	// Params: [ Num(2) Size(0x90) ]
	struct FMassEntityHandle CreateTacticalMarkingEntity(const struct FGPMarkerEntityCreateParams& CreateParams);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.CreateMarkerEntityWithLocation
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad80ac4
	// Params: [ Num(2) Size(0x90) ]
	struct FMassEntityHandle CreateMarkerEntityWithLocation(const struct FGPMarkerEntityCreateParams& CreateParams);

	// Object: Function GPMassGamePlay.GPMarkerMassSubsystem.CreateMarkerEntityWithActor
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xad8097c
	// Params: [ Num(2) Size(0x90) ]
	struct FMassEntityHandle CreateMarkerEntityWithActor(const struct FGPMarkerEntityCreateParams& CreateParams);
	DEFINE_UE_CLASS_HELPERS(UGPMarkerMassSubsystem, "GPMarkerMassSubsystem")

};

// Object: Class GPMassGamePlay.GPMarkerRevealProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerRevealProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerRevealProcessor, "GPMarkerRevealProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerBubbleProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerBubbleProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerBubbleProcessor, "GPMarkerBubbleProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerVehicleProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerVehicleProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerVehicleProcessor, "GPMarkerVehicleProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerWeaponProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerWeaponProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerWeaponProcessor, "GPMarkerWeaponProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerTacticalEquipmentProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerTacticalEquipmentProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerTacticalEquipmentProcessor, "GPMarkerTacticalEquipmentProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerQuestProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerQuestProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerQuestProcessor, "GPMarkerQuestProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerMapProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerMapProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerMapProcessor, "GPMarkerMapProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerInteractorProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerInteractorProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerInteractorProcessor, "GPMarkerInteractorProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerBattleFieldProcessor
// Size: 0x5A0 (Inherited: 0x80)
struct UGPMarkerBattleFieldProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x520]; // 0x80(0x520)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerBattleFieldProcessor, "GPMarkerBattleFieldProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerSOLProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerSOLProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerSOLProcessor, "GPMarkerSOLProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerMPProcessor
// Size: 0x320 (Inherited: 0x80)
struct UGPMarkerMPProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x2A0]; // 0x80(0x2A0)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerMPProcessor, "GPMarkerMPProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerSupportWeaponProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerSupportWeaponProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerSupportWeaponProcessor, "GPMarkerSupportWeaponProcessor")

};

// Object: Class GPMassGamePlay.GPMarkerTacticalMarkingProcessor
// Size: 0x310 (Inherited: 0x80)
struct UGPMarkerTacticalMarkingProcessor : UMassProcessor
{
	uint8_t Pad_0x80[0x290]; // 0x80(0x290)
	DEFINE_UE_CLASS_HELPERS(UGPMarkerTacticalMarkingProcessor, "GPMarkerTacticalMarkingProcessor")

};

// Object: Class GPMassGamePlay.GPMassMarkerBaseWidget
// Size: 0x570 (Inherited: 0x2F8)
struct UGPMassMarkerBaseWidget : UUserWidget
{
	struct UWidget* SceneMassMarkerPanelView; // 0x2F8(0x8)
	uint8_t Pad_0x300[0xD0]; // 0x300(0xD0)
	struct FGPMarkerCampFragment MarkerCampFragment; // 0x3D0(0x1)
	uint8_t Pad_0x3D1[0x3]; // 0x3D1(0x3)
	struct FGPMarkerAimFragment MarkerAimFragment; // 0x3D4(0x8)
	uint8_t Pad_0x3DC[0x194]; // 0x3DC(0x194)
	DEFINE_UE_CLASS_HELPERS(UGPMassMarkerBaseWidget, "GPMassMarkerBaseWidget")

};

} // namespace SDK
