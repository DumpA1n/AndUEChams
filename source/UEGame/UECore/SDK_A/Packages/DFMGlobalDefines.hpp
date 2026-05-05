#pragma once

#include "../CoreUObject_classes.hpp"
#include "AssetPackerRuntime.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPUserInterface.hpp"
#include "GPUserInterfaceCore.hpp"
#include "GameCore.hpp"
#include "GameplayTags.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: DFMGlobalDefines
// Enums: 167
// Structs: 827
// Classes: 97

struct AActor;
struct AGPPreviewLineActor;
struct AGameModeBase;
enum class EAttributeAdditionType : uint8_t;
enum class ECharacterPart : uint8_t;
enum class ECharingSlot : uint8_t;
enum class EDFMGamePlayMode : uint8_t;
enum class EDFMGamePlaySubMode : uint8_t;
enum class EDFPermissionShowType : uint8_t;
enum class EDFPermissionType : uint8_t;
enum class EDamageType : uint8_t;
enum class EDeadType : uint8_t;
enum class EEquipmentType : uint8_t;
enum class EGPAudioFootSoundBodyType : uint8_t;
enum class EGPInputType : uint8_t;
enum class EGPMarkerType : uint16_t;
enum class EGPQuestActionMarkerType : uint8_t;
enum class EGPScreenAdaptType : uint8_t;
enum class EGPUIFocusEffectType : uint8_t;
enum class EGameBuildConfiguration : uint8_t;
enum class EGameFlowStageType : uint8_t;
enum class ELastHitPosition : uint8_t;
enum class ENetworkControlType : uint8_t;
enum class EPhysicalSurface : uint8_t;
enum class ESlateVisibility : uint8_t;
enum class EStretch : uint8_t;
enum class EStretchDirection : uint8_t;
enum class ETeamIdentity : uint8_t;
enum class EUMGSequencePlayMode : uint8_t;
enum class EWeaponItemType : uint8_t;
enum class EWeaponSkinRenderMode : uint8_t;
enum class EWorldScale : uint8_t;
struct FFocusEvent;
struct FGPModularWeaponPartNode;
struct FGeometry;
struct FItemID;
struct FMargin;
struct FSOLQAObjectiveData;
struct FSlateColor;
struct FSlateFontInfo;
struct FWidgetTransform;
struct UActorComponent;
struct UAnimBoneCompressionSettings;
struct UAnimInstance;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UBinkMediaPlayer;
struct UBinkMediaSrt;
struct UBlendSpaceBase;
struct UCurveBase;
struct UCurveFloat;
struct UCurveVector;
struct UDataTable;
struct UEditableTextBox;
struct UGPAudioEventAsset;
struct UGPGameRuleSettingConfig;
struct UGameplayEffect;
struct UImage;
struct ULevelSubsystemConfig;
struct ULuaUIBaseView;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMediaPlayer;
struct UMediaTexture;
struct UMeshComponent;
struct UPaperSprite;
struct URuntimeTile;
struct UScrollBox;
struct USizeBox;
struct USkeletalMesh;
struct UStaticMesh;
struct UTextBlock;
struct UTexture;
struct UTexture2D;
struct UTextureRenderTargetCube;
struct UUMGSequencePlayer;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct UWidgetSwitcher;
struct FHighValueBoxInfo;
struct FItemArchiveInfo;
struct FKeyChainSpaceInfo;
struct FItemExtraRecord;
struct FArmorLevelConfig;
struct FArmorPartLevelConfig;
struct FSOLEventProgressDataItem;
struct FHighlightMomentItemInfo;
struct FLootSearchInfo;
struct FItemSearchInfo;
struct FContractReward;
struct FLootingStateParam;
struct FHitAudioConfig;
struct FPlatformScale;
struct FSOLQuestObjectiveTipData;
struct FMeritObtainRow;
struct FAbilityPlayMontageAnimUnit;
struct FAbilityPlayMontageAnimUnitSet;
struct FAbilityPlayMontageAnimUnitSoft;
struct FAbilityPlayMontageAnimUnitSetSoft;
struct FCharacterPlayMontageData;
struct FMapInstancedIconData;
struct FBuffActionConfig;
struct FCharacterHeroResourceAttachMeshPartData;
struct FSkillInspectAttachMesh;
struct FCharacterHeroResourceAttachMeshData;
struct FCharacterHeroResourceAnim;
struct FCharacterHeroResourceAnimData;
struct FCharacterHeroResourceData;
struct FAbilityDataInfo;
struct FLevelExpansion;
struct FGrowthProp;
struct FBeaconfireRewards;
struct FAccountRewards;
struct FAccountLevel;
struct FAccountPunishedData;
struct FAchievement;
struct FAchievementSeries;
struct FStatisticsEscapeGoalConditionRow;
struct FDynamicRequestLevelGroupRow;
struct FStatisticsUseSkillGoalConditionRow;
struct FWeaponSkinRewardRow;
struct FStatisticsInteractGoalConditionRow;
struct FStatisticsTimeLimitGoalConditionRow;
struct FStatisticsDamageGoalConditionRow;
struct FStatisticsSpecialKillGoalConditionRow;
struct FStatisticsDefeatGoalConditionRow;
struct FActivityCommonGoalConditionRow;
struct FActivityGoalRow;
struct FCommanderActivity;
struct FActivitySBCNews;
struct FEventShe1CardShop;
struct FEventShe1CardCards;
struct FModuleTextLocalization;
struct FEventTabOverride;
struct FEventTabConfig;
struct FActivityEventMakeDrinkMix;
struct FActivityQuestion;
struct FActivityTeachingManual;
struct FActivityThemeEventTech;
struct FActivityConstRow;
struct FActivityTaskRow;
struct FActivityRow;
struct FActivityDogTagCollectionSKU;
struct FActivityDogTagCollectionVOResource;
struct FActivityDogTagCollectionDogTagResource;
struct FActivityDogTagCollectionSkuResource;
struct FActivityEveDinnerCondition;
struct FActivityEveDinnerInnerAnimation;
struct FActivityEveDinnerAnimation;
struct FActivityEveDinnerCards;
struct FActivityHomePage;
struct FMorgenTowerSubCondition;
struct FMorgenTowerCondition;
struct FMorgenTowerConstant;
struct FMorgenTowerCutScene;
struct FMorgenTowerDeathLines;
struct FMorgenTowerAttributeChange;
struct FMorgenTowerSpine;
struct FMorgenTowerAsset;
struct FMorgenTowerAnswerBranch;
struct FMorgenTowerDialogueLine;
struct FMorgenTowerDialogueGroup;
struct FMorgenTowerDialogue;
struct FMorgenTowerSmallDialogueLine;
struct FMorgenTowerSmallDialogue;
struct FMorgenTowerTreasureProb;
struct FMorgenTowerTreasureItem;
struct FMorgenTowerTreasure;
struct FMorgenTowerHero;
struct FMorgenTowerNPC;
struct FMorgenTowerEnemy;
struct FMorgenTowerProp;
struct FMorgenTowerLevelSpawnProb;
struct FMorgenTowerLevelTransType;
struct FMorgenTowerLevelSpecialPoint;
struct FMorgenTowerLevelStructure;
struct FMorgenTowerLevel;
struct FActivityCommonStoreStyle;
struct FActivityStoreLocationItem;
struct FAIDirectParams;
struct FAILabBodyStateHitPartProbabilityConf;
struct FAILabHitPartProbabilityConf;
struct FAILabPathDescribe;
struct FAILabBehaviorTreeData;
struct FAILabPathPoint;
struct FDFMAILabLaunchRow;
struct FAILabCreateModel;
struct FAILabDiffcult;
struct FAILabModelOps;
struct FAILabSpawnModel;
struct FDFMAILabConditionRow;
struct FDropCondition;
struct FDFMAILabDropRow;
struct FAILabDropItem;
struct FAnimAssetLQConfigRow;
struct FCompleteEquipmentCheckConfig;
struct FEquipmentAmmoRecommendConfig;
struct FNewEquipmentCheckConfig;
struct FWeaponItemTypeInfoRow;
struct FPresetArmedPropsRow;
struct FArmedForceWeaponListRow;
struct FArmedForceDataInfo;
struct FArmedForceOutfitDataInfo;
struct FArmedForcePresetTable;
struct FArmedForcePropsInfo;
struct FArmedForceMPPropListInfo;
struct FArmedForcePropListInfo;
struct FAssemblyPresetDataInfo;
struct FAuctionPageInfo;
struct FAuctionProp;
struct FAuctionRelatedSearch;
struct FBattleFieldMapItemInfoRow;
struct FBPRewardTips;
struct FBPMainReward;
struct FBattlePassItemTransformData;
struct FBattlePassExprCard;
struct FBattlePassPack;
struct FBattlePassClue;
struct FBattlePassArchive;
struct FBattlePassLevel;
struct FBattlePassBonus;
struct FBattlePassSeason;
struct FMsgRow;
struct FBPconfRow;
struct FBPLvconfRow;
struct FBHDReward;
struct FMatchModeId2CampaignId;
struct FBHDCampaignInfo;
struct FBlindBox;
struct FTrialsConfig;
struct FBlueprintPlunderDangerDistanceConfig;
struct FBlueprintPlunderTipsBoxTextConfig;
struct FProgressBarConfig;
struct FBlueprintPlunderProgressBarHudTextConfig;
struct FBlueprintPlunderMainHudTextConfig;
struct FBlueprintPlunderBannerTextConfig;
struct FBlueprintPlunderUIConfig;
struct FInteract3DAudioConfig;
struct FUI2DAudioConfig;
struct FBlueprintPlunderModeConfig;
struct FVOConfig;
struct FRedBrickRealIDPool;
struct FBlueprintPlunderDropPool;
struct FBlueprintPlunderDropWeight;
struct FBattleFieldSectorAnchorIconConfigRow;
struct FBreakthroughTextTypeConfigRow;
struct FBreakthroughUIIconConfigRow;
struct FBreakthroughUIColorConfigRow;
struct FCarrayItem_HealArmorConfig;
struct FCarrayItemsData;
struct FHallWeaponDataAnim;
struct FCharacterAnimPreviewHD;
struct FCharacterAnimDataRow;
struct FCharacterAppearanceAdaptationDataRow;
struct FCharacterMeshOffsetByShapeRow;
struct FCharacterMeshTransformOffsetRow;
struct FCharacterBFEAvatarWeightRow;
struct FCharacterBattlefieldEffectGroupRow;
struct FCharacterBattlefieldEffectRow;
struct FCharacterExtraPartConflictRow;
struct FCharacterShapeDefaultAvatarRow;
struct FCharacterBodyColorDataRow;
struct FCharacterBodyColorItem;
struct FCharacterBodyColorParams;
struct FHeroItemFashionStruct;
struct FSafeHouseNPCAvatarDataRow;
struct FCharacterAvatarItem;
struct FCharacterVoiceInfo;
struct FCharacterSequenceDataRow;
struct FCharacterMasterPartDataRow;
struct FCharacterHelmetAdaptiveDataRow;
struct FCharacterFashionDataRow;
struct FAICharacterBodyPartMeshRow;
struct FCharacterSkinColorDataRow;
struct FCharacterSkillInfo;
struct FCharacterAvatar;
struct FCharacterFacialAnimation;
struct FCharacterAvatarDataRow;
struct FHeroItemSkillInfo;
struct FCharacterUIMatRenderIngoreInfo;
struct FCharacterShapeShift;
struct FCharacterAvatarCoreItem;
struct FSkillItemMesh;
struct FCharacterSkillItemMeshDataRow;
struct FSkillItemMaterials;
struct FHeroVOData;
struct FSceneActorBPData;
struct FSubLevelConfig;
struct FHeroHighLevelSceneConfigData;
struct FOpSubLevel;
struct FCommercialBaseRow;
struct FHeroItemData;
struct FKillLineData;
struct FBadgeData;
struct FHeroTitleData;
struct FDFWatchDisplayInfo;
struct FDFWatchMeshData;
struct FDFWatchData;
struct FLinesData;
struct FSprayPaintData;
struct FGestureData;
struct FExecutionData;
struct FAnimShowAssetData;
struct FCharacterAnimShowData;
struct FCharacterDefaultNameTable;
struct FCharacterFeatureLODConfigRow;
struct FCharacterHeroResourceTracingLineData;
struct FAbilityPlayMontageResources;
struct FHeroPropsMysticalSkinStorageData;
struct FHeroPropsMysticalSkinLotteryDescData;
struct FHeroPropsMysticalSkinLotteryData;
struct FHeroPropsMysticalSkinLottery;
struct FMysticalSkinSchemeData;
struct FHeroPropsMaterialParamInfo;
struct FMysticalSkinSchemeUnit;
struct FMysticalSkinSchemeForHeroProps;
struct FHeroPropMaterialParamDescBase;
struct FSoftObjectPathParam;
struct FHeroPropMaterialSoftObjectPathParamDesc;
struct FHeroPropMaterialColorKeyParamDesc;
struct FHeroPropMaterialVector4ParamDesc;
struct FHeroPropMaterialVector2DParamDesc;
struct FHeroPropMaterialVectorParamDesc;
struct FHeroPropMaterialFloatParamDesc;
struct FChargeOfferId;
struct FChatMinorLimitRegion;
struct FCollectionRoomWeaponRackConfig;
struct FCollectionRoomLimitedCollectionConfig;
struct FWeaponRackUnlockCondition;
struct FCollectionRoomConstant;
struct FCollectionRoomCollection;
struct FCollection2DDisplay;
struct FCollectionRoomDIY;
struct FCollectionTab;
struct FWeaponShowLightData;
struct FWeaponSkinSceneData;
struct FWeaponNameAreaData;
struct FThemeBackgroundData;
struct FCollectionWeaponDataConfig;
struct FCollectionWeaponData;
struct FCombatRoleAbilityDataInfo;
struct FCommonCompletionRow;
struct FCommonErrorTextRow;
struct FStashPropExpireConfig;
struct FHongBaoConstValueRow;
struct FHongBaoRandomGenerationRow;
struct FHongBaoRow;
struct FRedEnvelopeRow;
struct FDogTagCustomInfoRow;
struct FDFMItemToInventoryRuleRow;
struct FHallWeaponItemDisplayTableRow;
struct FAbilityItemRow;
struct FItemTagFilterMap;
struct FPreloadLevelConfig;
struct FToolConfigRow;
struct FResurrectionCoinRuleRow;
struct FInGameMallConfigRow;
struct FWeaponDescInfo;
struct FHitAudioRow;
struct FBeHitAudioRow;
struct FArmorDurabilityDamageFormula;
struct FSafeBoxTypeRow;
struct FModularWeaponDescInfo;
struct FItemHoldAndUseRow;
struct FItemHealth_Armor;
struct FItemHealthPackageRow;
struct FRepairArmorRatio;
struct FItemHealthPackageRow_SkillCD;
struct FItemHealthSortTable;
struct FItemHealthRecommendRow;
struct FHeadEquipApparenceAdaptationRow;
struct FCharacterModifyBoneInfo;
struct FWatchModifyInfo;
struct FWatchApparenceAdaptationRow;
struct FBoneModifyInfo;
struct FCharacterModifyBoneInfoListForShiftShape;
struct FHelmetApparenceAdaptationForShiftShapeRow;
struct FCharacterModifyBoneInfoForShiftShape;
struct FHelmetApparenceAdaptationRow;
struct FChestHangingApparenceAdaptationRow;
struct FBreastPlateAdaptationRow;
struct FBagApparenceAdaptationRow;
struct FAcquireItemInspectActionRow;
struct FEquipmentPartRow;
struct FDFMEquipmentRandomRuleRow;
struct FItemUseActionLimit;
struct FThreeInspectAnimConfig;
struct FUseItemAnimSet;
struct FDFMCommonItemMeshPathRow;
struct FRandomItemInspectionData;
struct FThreeInspectAnim;
struct FDFMCommonItemStaticIconPathRow;
struct FDFMEquipmentGERow;
struct FDFMBuffGEDurationRow;
struct FDFMBlueprintItemRow;
struct FDFMCommonItemRow;
struct FItemMaterialAssetRow;
struct FInventoryPresetItemRow;
struct FItemPriceRow;
struct FContainerResourceConfig;
struct FConversationConstants;
struct FConversationLines;
struct FConversationProbs;
struct FCurrencyConfig;
struct FDepositConstantRow;
struct FDepositSortClass;
struct FDeviceAdapterConfig;
struct FDFCAPTCHAConfig;
struct FDFCustomerServiceConfig;
struct FDFGameSceneConfig;
struct FDFMAbilityConfig;
struct FSimpleArmorRepairResult;
struct FArmorRepairResultDetail;
struct FSimpleArmorRepairKitInfoForRepair;
struct FSimpleArmorInfoForRepair;
struct FTrialsSeamlessInfo;
struct FTrialsPlayerServerInfo;
struct FExitCutSceneParams;
struct FCharacterAmbientLightParms;
struct FCharacterMaterialParameterCollection;
struct FCharacterAmbientLightGroupDataRow;
struct FCharacterMaterialParameterCollectionName;
struct FDFMColorDefineRow;
struct FDFMImageParam;
struct FRTIParamData;
struct FEstimateNameScore;
struct FSpawnAreaConfig;
struct FBreakthroughRebornConfigByTagRow;
struct FTeamRebornOffset;
struct FBreakthroughSpawnAreaAlterScoreListConfigRow;
struct FBreakthroughRebornConfigRow;
struct FDFPermissionConfig;
struct FDropNumericConfigTable;
struct FSpawnBlockedItemRow;
struct FEquipItemGroupData;
struct FEquipmentAdditionalDataRow;
struct FEquipmentOutfitAmmoData;
struct FEquipmentAmmoData;
struct FEquipmentCheckConfig;
struct FContainerFunctionRowBase;
struct FSafeBoxFunctionBaseRow;
struct FChestHangingFunctionBaseRow;
struct FContainerBuffRow;
struct FContainerReplaceBuffAttributeOp;
struct FBagFunctionBaseRow;
struct FEquipmentPresetPriceDataInfo;
struct FEquipmentPresetDataInfo;
struct FErrcodeMsg;
struct FExpertFootStepConfig;
struct FExpertTalentCommonPassiveData;
struct FExpertData;
struct FExplosionScreenEffectDataRow;
struct FExtensionBoxDesc;
struct FFashionSuitDataRow;
struct FFashionPartDataRow;
struct FFashionMallDataRow;
struct FGameModeConfig;
struct FGameSubMode;
struct FGarenaRegion2UrlInfo;
struct FGarenaCode2RegionInfo;
struct FGarenaLang2UrlInfo;
struct FGarenaPayUrl;
struct FGeneratedEquipmentPresetData;
struct FGlobalConstItemRow;
struct FGMGroupConfigRow;
struct FGMCandidateArgConfig;
struct FGMArgConfig;
struct FGMConfigRow;
struct FGmSolGameStyle;
struct FGuideControlConfig;
struct FGuideStructuredConfig;
struct FGuideWBPConfig;
struct FGuideVedioConfig;
struct FGuideVedioTexts;
struct FGuideVedioTextRow;
struct FGuideDisableOpItemConfig;
struct FGuideMovieTypeConfig;
struct FGuideItemConfig;
struct FGuidePrepare;
struct FGuideCondition;
struct FGuideEventConfig;
struct FGuidePopTipsConfig;
struct FGuideExplainConfig;
struct FGuidePopFuctionDescConfig;
struct FGuideKeyTextRow;
struct FGuideFuctionDescItemRow;
struct FGuidePopWindowConfig;
struct FGuidePopWindowItemRow;
struct FGuideWidgetConfig;
struct FGuideVisibilityConfig;
struct FGuideClickConfig;
struct FGuideDialogConfig;
struct FOverrideStartCondition;
struct FGuideStageClientOnlyConfig;
struct FGuideConditionItem;
struct FGuideStageConfig;
struct FGuideConfig;
struct FGuideConfigForHD;
struct FMasterGunSkinRewardsInfoRow;
struct FGunSkinRewardsInfoRow;
struct FGVoiceMossConfig;
struct FHallLobbyActivityOpenTime;
struct FHallLobbyActivityTime;
struct FHallVehicleCameraData;
struct FVehicleCameraData;
struct FHavvkDesignAudioData;
struct FHavvkDesignChioceNameData;
struct FHavvkDesignIconData;
struct FHavvkDesignPriorityNameData;
struct FHeadIconData;
struct FHeroCardData;
struct FHeroBlock;
struct FHeroConstant;
struct FHeroRecruitmentTask;
struct FHeroUnLock;
struct FHeroDataRow;
struct FHeroProfessionDataRow;
struct FHeroGoalDesc;
struct FHeroLevel2Rank;
struct FHeroLevel;
struct FHeroArchive;
struct FHeroProfile;
struct FHeroVideoData;
struct FHotspotBanner;
struct FHZAchievement;
struct FInGameBattleClassConfig;
struct FInGameEquipmentRentalPresetRow;
struct FInGameEquipmentRentalRow;
struct FItemBindDesc;
struct FSpecifiedDropItemInfo;
struct FPropInfo;
struct FItemLabel;
struct FItemNamePrefix;
struct FItemSpeicalTypeData;
struct FCommercializeData;
struct FWeaponBpSource;
struct FHUDItemTextViewData;
struct FHUDItemViewData;
struct FItemViewData;
struct FCompAnchorData;
struct FTextStyle;
struct FJumpConfig;
struct FJumpRouteConfig;
struct FJumpToConfig;
struct FKeyBoxRow;
struct FKeyBoxUnlockRow;
struct FDFMKeyInfoRow;
struct FLaserConfig;
struct FLaserEmitterConfig;
struct FLaserInterval;
struct FGeneralLevelSequenceData;
struct FDrawLineData;
struct FLitePackPakConfig;
struct FDFResourceTag;
struct FLitePackCategory;
struct FLitePackageDownload;
struct FLitePackageSteamDlc;
struct FLitePackModuleData;
struct FLiveRadioType;
struct FLobbyAdConfig;
struct FLobbyChatParam;
struct FLoginUI;
struct FLootingSearchAudioData;
struct FWeaponDropToGroundAudioData;
struct FLootingAudioData;
struct FMandelBrickConstants;
struct FLotteryBoxConfig;
struct FLotteryBoxPropConfig;
struct FLotteryBoxGroupConfig;
struct FLotteryPool;
struct FLotteryPoolClient;
struct FLotteryMusicData;
struct FLotteryProbDistributionRow;
struct FLotteryProp;
struct FMailAvatar;
struct FMallInfo;
struct FMallGroupArenaInfo;
struct FMandelBrickDataRow;
struct FMandelBrickScanningSystemLibraries;
struct FMandelBrickScanningSystemCases;
struct FMapBoardEasterEgg;
struct FMapConfigGenerateToolRow;
struct FMapGlitchEffectConfigRow;
struct FSOLExitConfig;
struct FMapAreaInfo;
struct FMapConfig;
struct FDFMMapDoorInfoRow;
struct FMapEnemySilencerDistanceConfigRow;
struct FMapInstancedSplineAreaData;
struct FMapIconSizeConfigRow;
struct FMapPlayerIconData;
struct FDFMMapIconData;
struct FDFMMapDetectorData;
struct FDisposalBombRangeInfo;
struct FDetectRangeInfo;
struct FBossLocInfo;
struct FHelicopterDeterrenceInfo;
struct FMapHighValueBoxInfoStruct;
struct FMandelBrickSeamlessMapGeneratorStruct;
struct FMandelBrickSeamlessMapStruct;
struct FMandelBrickSeamlessMapGeneratorStructForSort;
struct FMapFloorStruct;
struct FPOIProductCollectionRow;
struct FPOIProductDataRow;
struct FLegendIconDataRow;
struct FMapLocationStruct;
struct FSafeHouseMapLocationStruct;
struct FCharacterColorRow;
struct FMiniMapWorldRangeInfo;
struct FBigMapWorldRangeInfo;
struct FMapBaseInfoData;
struct FMapBaseInfo;
struct FMapThumbnailData;
struct FMarketTab;
struct FMaskWidgetStyle;
struct FMaskClip;
struct FMatchCommonConfig;
struct FMatchGameMode;
struct FMatchGameRule;
struct FMatchIdcToAreaConfig;
struct FMatchModeKVTable;
struct FMatchTypeKVTable;
struct FMatchModeConfig;
struct FMatchMode;
struct FMatchRule;
struct FMatchSubMode;
struct FMatchTeamMode;
struct FMatchType;
struct FMatchTypeModeKV;
struct FMiniWorldSceneSubLevelsData;
struct FLobbyMiniWorldSceneSubLevelsData;
struct FMissionCheckPoint;
struct FMissionRelativeLevel;
struct FMissionCompleteLevel;
struct FMissionSystemSetting;
struct FUIAreaReportItem;
struct FUIAreaReportInfo;
struct FCustomLayoutRow;
struct FCustomLayoutInfo;
struct FCustomLayoutWidgetInfo;
struct FVehicleCustomLayoutInfo;
struct FModeHallGameConfig;
struct FModeRecommendationData;
struct FModulePlaygoSwitcherConfig;
struct FModuleSwitcherConfig;
struct FModuleSwitcherUIItem;
struct FModuleUnlockConfig;
struct FMossVoiceConfig;
struct FMPDropDataRow;
struct FMPDropLimitDataRow;
struct FMPLobbyCharacterOffset;
struct FMPMandelBrickPool;
struct FMusicPlayerWidgetData;
struct FMysteryMerchantRefresh;
struct FMysticalPendantCombineBaseDataRow;
struct FMysticalPendantSuit;
struct FMysticalSkinCombineBaseDataRow;
struct FMysticalSkinFeatureScreening;
struct FHackGameNarrativeProps;
struct FNarrativePropsConfig;
struct FNewbieChallenge;
struct FNPCRoleInfoTable;
struct FPackagePathPakRow;
struct FPlatformDataRow;
struct FPlatformPadding;
struct FPlatformSize;
struct FPlayerMoments;
struct FPlayerMomentsText;
struct FPlayerMomentsVar;
struct FPresetChatAuto;
struct FPresetChatFunction;
struct FPresetChat;
struct FPropCombinationConfig;
struct FUnCarryProp;
struct FPropIDPriority;
struct FPropSlotConfig;
struct FPropSlotSubConfig;
struct FPSOWhiteList;
struct FPVESetting;
struct FQuestActorConfigRow;
struct FFalloutInventoryItemRow;
struct FEscapePossessionEquipData;
struct FMapBaseRow;
struct FCapacitorRoomExpectationTableRow;
struct FCapacitorRoomRankTableRow;
struct FCapacitorRoomGraphTableRow;
struct FCapacitorRoomEdge;
struct FRandomCapacitorTableRow;
struct FHighValueRoomExpectationTableRow;
struct FRandomHighValueRoomTableRow;
struct FRandomContainerTableRow;
struct FSeasonQuestConfigRow;
struct FFateQuestRow;
struct FCollectorRewardsRow;
struct FCollectorSlotRow;
struct FCollectorGroupRow;
struct FSeasonQuestGroupRow;
struct FSeasonQuestStageRow;
struct FSeasonQuestLineRow;
struct FBattleFieldOnlyInGameQuestRow;
struct FBattleFieldQuestObjectiveRow;
struct FBattleFieldQuestRow;
struct FCharacterCheckingConditionRow;
struct FInteractAnimsRow;
struct FQuestReferenceRow;
struct FSOLContractRewardRow;
struct FSOLQuestDetailObjectivesType;
struct FSOLQuestDetailTargetType;
struct FSOLQuestDetailMapConfigRow;
struct FQuestRestrictionRow;
struct FQuestRandomRow;
struct FContractRandomConfig;
struct FQuestConfigRow;
struct FQuestContractNPCInfoRow;
struct FQuestVolumeInfoRow;
struct FQuestTrackingMapInfoRow;
struct FSOLQuestMapInfo;
struct FWorldTimeLimitQuestRow;
struct FSOLQuestDialogConfigRow;
struct FDeliverQuestPerformanceRow;
struct FQuestLineRow;
struct FQuestRewardsRow;
struct FQuestObjComplexWeaponTermInfo;
struct FComplexPropObjectiveRow;
struct FQuestObjectiveRow;
struct FQuestConditionRow;
struct FQuestRow;
struct FRaidBulletCheckConfig;
struct FRaidSettlementLevelConfig;
struct FRankAreaDataRow;
struct FRankBoardRegion;
struct FRankingSeasonInfo;
struct FRankingRankRewardsSeasonal;
struct FRankingRankConstants;
struct FRankingRankRewards;
struct FRankingMajorRanks;
struct FRankingMinorRanks;
struct FRankScoreLimitConfigInfo;
struct FRankSkillCampConfig;
struct FShowDetectorMapExConfig;
struct FRankSkillConfigRow;
struct FRankSkillTieredConfig;
struct FRankSkillCampTieredConfig;
struct FRankSkillMapConfigNew;
struct FRankSkillDropVehicleConfig;
struct FFreeBuildRankSkillCofigRow;
struct FCommanderRankSkillCofigRow;
struct FAirDropCampTieredConfig;
struct FAirdropVehicleTieredConfig;
struct FBossHomepageBackground;
struct FBossSaeedGuide;
struct FBossUpgradeAudio;
struct FBossArchive;
struct FBossSaeedLevel;
struct FRebornQuestNameTemplateRow;
struct FRebornTextConfig;
struct FRebornPrerequestGroup;
struct FRebornQuestlineRow;
struct FRecoverySystemTipsConfig;
struct FRegionCode;
struct FReportText;
struct FReputationdescription;
struct FReputationChange;
struct FReputationStar;
struct FReputation;
struct FReqErrTable;
struct FRespirationConfigRow;
struct FRightsCardActivatingRow;
struct FRoleQuality;
struct FRoleQualityScene;
struct FRoomParamGroup;
struct FRoomParam;
struct FSafeBoxSkinRow;
struct FSafeAndCardpackActivatingRow;
struct FSafeAndCardpackRow;
struct FSpecialExchangeRow;
struct FSafeHouseOnlyProduct;
struct FSafeHouseDescription;
struct FSafeHouseVistorInfoRow;
struct FSafeHouseVistorRow;
struct FGameSystemInfoRow;
struct FSafeHouseFormula;
struct FSafeHouseUpgrade;
struct FSafeHouseDeviceParam;
struct FSafeHouseDevice;
struct FSandBoxMapArenaConfig;
struct FSeasonDataRow;
struct FSeasonExperience;
struct FSeasonLevel;
struct FSeasonQuestGuide;
struct FSelfBuildRoomArchiveRow;
struct FServerAddr;
struct FServerAddrItem;
struct FMapID2SectorID;
struct FMapName2FocusPoint;
struct FCommanderGameMotto;
struct FRaidComment;
struct FRaidEvaluation;
struct FRaidSettlementLong;
struct FMandelBricksConnections;
struct FSettlementFamousCelebrities;
struct FSettlementPage;
struct FSkillConfig;
struct FSkillSkinResourceAttachMeshData;
struct FSkinPatternInfoDataRow;
struct FSocialAvatarDataTable;
struct FFriendFavorabilityParam;
struct FSocialShareScene;
struct FSocialShareParam;
struct FSOLDecalConfigRow;
struct FSOLMapValueDetailTable;
struct FSOLContractIconRow;
struct FSOLUIIconConfigRow;
struct FSOLUIColorConfigRow;
struct FSHresult;
struct FSquadConfigRow;
struct FSquadCampConfig;
struct FSquadTeamConfig;
struct FSteamAchievement;
struct FStoreCashAreaDiff;
struct FStoreCharge;
struct FStoreItem;
struct FSeasonSpecialConfig;
struct FThemeTabConfig;
struct FFreeMandelBrick;
struct FSpecialBackConfig;
struct FStoreBHDConfig;
struct FLotteryUIBackground;
struct FSpecialItemBuyConf;
struct FStoreMallGiftConfig;
struct FStorePVConfig;
struct FStoreHotRecommendation;
struct FStoreLottery;
struct FStoreLNEventProb;
struct FStoreLNGoodsBack;
struct FStoreLNEventReward;
struct FStorePaymentRestriction;
struct FStoreSubTab;
struct FStoreMainTab;
struct FStoreTab;
struct FStoryDialogRow;
struct FSystemEntryPriorityConfig;
struct FSystemMail;
struct FTalentDataRow;
struct FExpertSkillInfo;
struct FTalentInfo;
struct FMPResultTextConfig;
struct FTDMMapIconConfig;
struct FTDMMapTextConfig;
struct FTDMMapConstantStr;
struct FTDMMapConstant;
struct FTDMMapResourceConfig;
struct FTDMMapConfig;
struct FTeamConstructTemplate;
struct FHeroDataInfo;
struct FTeammateStateInfo;
struct FTeammateUIConfigRow;
struct FTeamMessage;
struct FTeamSize;
struct FTipsConfig;
struct FTLogDefinition;
struct FTODConfig;
struct FCommanderSeason;
struct FCommanderWordParameter;
struct FCommanderParameter;
struct FCommanderRewards;
struct FCommanderTier;
struct FTournamentWordParameter;
struct FTournamentParameter;
struct FTournamentScore;
struct FTournamentSeason;
struct FTournamentTitle;
struct FTournamentRewards;
struct FTournamentTier;
struct FTraderInfo;
struct FTraderGiftInfo;
struct FTraderPageMainInfo;
struct FTraderPageInfo;
struct FTraderSectorTypeInfo;
struct FTraderTypeInfo;
struct FTreasurePackItemList;
struct FTXAchievement;
struct FUserSystemSetting;
struct FVehicleDamageHitContext;
struct FVehicleModificationRulesDataConfigList;
struct FVehicleLevelRow;
struct FVehicleFrontendTransformRow;
struct FVehicleSocketNameRow;
struct FVehicleSkinDataConfig;
struct FVehicleModificationTabDataConfig;
struct FVehicleWeaponAccessoryDataTableRow;
struct FVehicleModificationRulesDataConfig;
struct FVehicleUnlockDataConfig;
struct FVehicleExpDataRow;
struct FVehicleUISkinAppearanceRow;
struct FVehicleUISkinItemInfo;
struct FVehicleSceneConfigData;
struct FVehicleEnumSceneConfigData;
struct FWeaponBulletGroupData;
struct FWeaponStarConstantRow;
struct FMPWeaponLevelParts;
struct FWeaponLevelFormula;
struct FWeaponExpItem;
struct FWeGameLanguageCode;
struct FWorldActorConfig;
struct FWorldEntranceConfig;
struct UDFMLoadingManager;
struct UDFMGameSingletonAttribute;
struct UBreakthroughUIColorDataManager;
struct UBreakthroughUIIconDataManager;
struct UBreakthroughTextTypeManager;
struct UBattleFieldSectorAnchorIconManager;
struct UBreakthroughUIConfig;
struct UCarrayItemsDataMgr;
struct UCarrayItem_HealArmorConfigDataMgr;
struct UCharacterBodyPartMeshStatics;
struct UCharacterCommercialDataLibrary;
struct UCharacterHeroResourceTracingLineManager;
struct UCollectionRoomConstantWrap;
struct UCollectionRoomLimitedCollectionWrap;
struct UCollectionRoomWeaponRackWrap;
struct UGPCollectionWeaponDataConfig;
struct URedPackageConfigWrapper;
struct ACSVChangeUtil;
struct UCustomListView;
struct UDataTableRuntimeUtil;
struct UDFCAPTCHALibrary;
struct UDFCustomerServiceLibrary;
struct UDFMButton;
struct UCharacterAmbientLightGroupDataManager;
struct UDFMColorDefineBlueprintHelper;
struct UDFMCommonButton;
struct UDFMCommonHover;
struct UDFMCommonImage;
struct UDFMCommonMediaImage;
struct UDFMGameSingleton;
struct UDFMImage;
struct UDFMImageLoadingWidget;
struct UDFMSDKWebBrowserWidget;
struct UDFMTextBlock;
struct UDFMWebMediaPlayer;
struct UDFPermissionConfigLibrary;
struct UDFRouletteBaseView;
struct UDFStreamMediaImage;
struct UBagFuncManager;
struct UChestHangingFuncManager;
struct USafeBoxFuncManager;
struct UFashionListView;
struct UGlobalConstWrapper;
struct UGlobalDataTableSystemManager;
struct UCharacterAnimTableManager;
struct UHallWeaponAnimSetTableManager;
struct UBreakthroughSpawnAreaAlterScoreListConfigManager;
struct UBreakthroughRebornConfigManager;
struct UBreakthroughRebornConfigByTagManager;
struct UGPBlueprintUMGHelper;
struct UGuideUtils;
struct UItemCoreUtil;
struct UItemDetailGMManager;
struct ULineCanvasPanel;
struct UMapGlitchEffectManager;
struct UMapEnemySilencerDistanceManager;
struct UMapIconSizeDataManager;
struct UMapInfoConfig;
struct UMapInfoData;
struct ULegendIconManager;
struct UArenaLegendIconManager;
struct UTrialsLegendIconManager;
struct USeamlessEntryLegendIconManager;
struct UTrialsSeamlessEntryLegendIconManager;
struct UPOIProductDataManager;
struct UMaskWidget;
struct UMediaConfigDataManager;
struct UMobileCustomLayoutDataCenter;
struct UOnSizeChangeImage;
struct UPlatformPaddingBox;
struct UPlatformScaleBox;
struct UPlatformSizeBox;
struct UPlatformWidgetSettings;
struct UPropSlotConfigManager;
struct UUnCarryPropWrapper;
struct UBattleFieldCommanderRankSkillTableManager;
struct UBattleFieldFreeBuildRankSkillTableManager;
struct UScrollCanvasPanel;
struct USkillConfigUtils;
struct USkillSkinResourceManager;
struct USOLDecalDataManager;
struct USOLDecalConfig;
struct USOLMapLoadingSettings;
struct USOLMapLoadingHelper;
struct USOLUIColorDataManager;
struct USOLUIIconDataManager;
struct USOLUIConfig;
struct USphericalHarmonicsUtils;
struct USquadConfigManager;
struct UTeammateUIManager;
struct UTeammateConfig;
struct UTreasurePackItemConfigWrapper;
struct UVehicleUnlockDataConfigManager;
struct UVehicleModificationRulesDataConfigManager;
struct UVehicleSocketNameRowManager;
struct UVehicleFrontendTransformRowManager;
struct UVehicleSkinDataConfigManager;

// Object: Enum DFMGlobalDefines.EHoverNodeEffetApplyType
enum class EHoverNodeEffetApplyType : uint8_t
{
	BindableParent = 0,
	DirectParent = 1,
	WidgetPath = 2,
	EHoverNodeEffetApplyType_MAX = 3
};

// Object: Enum DFMGlobalDefines.ECommonHoverStyleMode
enum class ECommonHoverStyleMode : uint8_t
{
	Visibility = 0,
	Animation = 1,
	ECommonHoverStyleMode_MAX = 2
};

// Object: Enum DFMGlobalDefines.ECommonHoverExtMode
enum class ECommonHoverExtMode : uint8_t
{
	HoverOnly = 0,
	HoverAndClick = 1,
	ECommonHoverExtMode_MAX = 2
};

// Object: Enum DFMGlobalDefines.EIconState
enum class EIconState : uint8_t
{
	None = 0,
	Loading = 1,
	Loaded = 2,
	EIconState_MAX = 3
};

// Object: Enum DFMGlobalDefines.ESOLUIColorType
enum class ESOLUIColorType : uint8_t
{
	None = 0,
	OpenEvacuationPoint = 1,
	DiscardedEvacuationPoint = 2,
	UntriggeredEventEvacuationPoint = 3,
	HighValue = 4,
	Boss = 5,
	QuestAndContract = 6,
	SecondaryInfo = 7,
	RandomEvacuationPoint = 8,
	POIProduct = 9,
	DeadBody = 10,
	BossCircle = 11,
	Sign = 12,
	TeammateSign = 13,
	Raid_ArriveOrInteract = 14,
	Raid_KillOrDestroy = 15,
	Raid_Protect = 16,
	Raid_AmmoBox = 17,
	Raid_RPG = 18,
	Raid_ValkyrieVehicle = 19,
	EventEvacuationNotOpen = 20,
	PlayerStart = 21,
	SupportPoint = 22,
	HighValue2 = 23,
	Zipline = 24,
	Helicopter = 25,
	QuestIsSeasonActivity = 26,
	PakMachineActive = 27,
	PakMachineInActive = 28,
	Adjutant = 29,
	CountDownReleaseTriggerActive = 30,
	CountDownReleaseTriggerInActive = 31,
	Commander_SameCamp = 32,
	Commander_Enemy = 33,
	ExitCircle = 34,
	SkillFixedWeaponWhiteModel = 35,
	SOL_DisposalBomb = 36,
	SYDSpecialColor = 37,
	ESOLUIColorType_MAX = 38
};

// Object: Enum DFMGlobalDefines.ESOLUIIconType
enum class ESOLUIIconType : uint8_t
{
	None = 0,
	FixedEvacuationPoint = 1,
	RandomEvacuationPoint = 2,
	EventEvacuationPoint_Train = 3,
	EventEvacuationPoint_Rocket = 4,
	EventEvacuationPoint_Dam = 5,
	EventInteractor = 6,
	WeaponBlueprint = 7,
	HighValueBox = 8,
	Boss = 9,
	Contract = 10,
	ShopStation = 11,
	UnlockPoint = 12,
	ContractObjection = 13,
	KillPoint = 14,
	Sign = 15,
	POIProductMix = 16,
	TeammateSign = 17,
	Raid_ArriveOrInteract = 18,
	Raid_KillOrDestroy = 19,
	Raid_Protect = 20,
	Raid_AmmoBox = 21,
	Raid_RPG = 22,
	Raid_ValkyrieVehicle = 23,
	Quest = 24,
	EventEvacuationPoint_TrainNot = 25,
	EventEvacuationPoint_RocketNot = 26,
	EventEvacuationPoint_DamNot = 27,
	EventEvacuationPoint_OtherNot = 28,
	CountDown = 29,
	EvacuationPoint_Payment_Open = 30,
	EvacuationPoint_Payment_NotOpen = 31,
	EvacuationPoint_Together_Open = 32,
	EvacuationPoint_Together_NotOpen = 33,
	Ability_CQB = 34,
	Ability_Medic = 35,
	Ability_Gunner = 36,
	Ability_Sniper = 37,
	Ability_SuppressionMine = 38,
	Ability_CruiseMissile = 39,
	WeaponBlueprintStation = 40,
	PlayerStart = 41,
	Money = 42,
	SupportPoint = 43,
	WeaponBlueprintSendOut = 44,
	WeaponBlueprintNoCopy = 45,
	AlivePoint = 46,
	PlayerDir = 47,
	Defence = 48,
	Attack = 49,
	ProbeLight = 50,
	HighValueBox2 = 51,
	Zipline = 52,
	AIKillPoint = 53,
	HighValueContract = 54,
	Scouter = 55,
	IronGauze = 56,
	SelectedFrame = 57,
	TeamMateIndex0 = 58,
	TeamMateIndex1 = 59,
	TeamMateIndex2 = 60,
	Ability_Robot = 61,
	Ability_RebornFlag = 62,
	Vehicle_RebornFlag = 63,
	RankSkill_RebornFlag = 64,
	Ability_ADS = 65,
	PlayerDeathBG = 66,
	VehicleSupplyStation = 67,
	Helicopter = 68,
	PakMachine = 69,
	Adjutant = 70,
	CountDownReleaseTrigger = 71,
	FireRocketPC = 72,
	WeaponBlueprint_Arena = 73,
	Commander = 74,
	AttackHere = 75,
	DefendHere = 76,
	GoHere = 77,
	VehicleGoHere = 78,
	BewareEnemyInfantry = 79,
	BewareEnemyVehicle = 80,
	ProbeLight_Commander = 81,
	PipLineExit_Triggered = 82,
	PipLineExit_UnTriggered = 83,
	MiniGamePC = 84,
	PlunderContract = 85,
	BoatExit = 86,
	BoatExitClosed = 87,
	ExitCircle = 88,
	Hook = 89,
	CoastalDefenseArtilleryIcon = 90,
	AntiAircraftGunsIcon = 91,
	BunkerIcon = 92,
	Ability_NetSpider = 93,
	Ability_SentryHive = 94,
	Ability_IntelligentSmoke = 95,
	SOL_DisposalBomb = 96,
	SOL_RebornAsBossIcon = 97,
	Airdrop = 98,
	Airdrop_Spawning = 99,
	Airdrop_Opened = 100,
	BraveGame_Marker = 101,
	BraveGame_DarkStarFuel = 102,
	BraveGame_DarkStarFuel_Small = 103,
	BraveGame_Computer = 104,
	SYDExit = 105,
	SYDConditionExit = 106,
	RavenGuide_Marker = 107,
	WeaponBlueprint_SKU = 108,
	ESOLUIIconType_MAX = 109
};

// Object: Enum DFMGlobalDefines.EHighValueBoxType
enum class EHighValueBoxType : uint8_t
{
	Default = 0,
	BoxWithIntroEvent = 1,
	BoxWithOutIntroEvent = 2,
	EHighValueBoxType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EArchiveAscription
enum class EArchiveAscription : uint8_t
{
	EArchiveAscription_None = 0,
	EArchiveAscription_Player = 1,
	EArchiveAscription_AI = 2,
	EArchiveAscription_Boss = 3,
	EArchiveAscription_MAX = 4
};

// Object: Enum DFMGlobalDefines.EAttachPosition
enum class EAttachPosition : uint8_t
{
	Attach_None = 0,
	Attach_EquipmentStart = 1,
	Attach_Helmet = 2,
	Attach_Headset = 3,
	Attach_ArmedForceBaseProp = 4,
	Attach_Armband = 5,
	Attach_BreastPlate = 6,
	Attach_Glasses = 7,
	Attach_ChestHanging = 8,
	Attach_Bag = 9,
	Attach_SafeBox = 10,
	Attach_Shoe = 11,
	Attach_MainWeaponLeft = 12,
	Attach_MainWeaponRight = 13,
	Attach_MeleeWeapon = 14,
	Attach_PistolWeapon = 15,
	Attach_SecondaryWeapon = 16,
	Attach_ArmedForceProp1 = 17,
	Attach_KeyChain = 18,
	Attach_ArmedForceProp2 = 19,
	Attach_Character = 20,
	Attach_DogTag = 21,
	PVEMainWeaponLeft = 22,
	PVEMainWeaponRight = 23,
	Medical = 24,
	Archive = 25,
	Attach_SceneWeapon = 26,
	Attach_ClassMeleeEquipment = 27,
	Attach_ClassThrowableEquipment = 28,
	Attach_ClassConsumable = 29,
	Attach_PVEWeapon = 30,
	Attach_MissionMeleeEquipment = 31,
	Attach_BulletLeft = 32,
	Attach_BulletRight = 33,
	Attach_SkillWeaponSpecial = 34,
	Attach_SkillWeaponUltimate = 35,
	Attach_SkillWeaponActive = 36,
	Attach_SkillWeaponSupport = 37,
	Attach_SkillWeaponBattleFieldPropSkill = 38,
	Attach_SkillWeaponCustom2 = 39,
	Attach_SkillWeaponCustom3 = 40,
	Attach_MP_Begin = 41,
	Attach_MP_ArmedForceBaseProp = 42,
	Attach_MP_ArmedForceTDMProp = 43,
	Attach_MP_MainWeapon = 44,
	Attach_MP_SecondaryWeapon = 45,
	Attach_MP_MeleeWeapon = 46,
	Attach_MP_ArmedForceProp1 = 47,
	Attach_MP_ArmedForceProp2 = 48,
	Attach_MP_End = 49,
	Attach_EquipmentEnd = 50,
	Attach_Fashion = 51,
	Attach_AllNearby = 52,
	Attach_PickupBox = 53,
	Attach_LootTmp = 54,
	Attach_TmpPerk = 55,
	Attach_DeadbodyLootBox = 56,
	Attach_AbilityVehicle = 57,
	Attach_ContainerStart = 58,
	Attach_ChestHangingContainer = 59,
	Attach_BagContainer = 60,
	Attach_SafeBoxContainer = 61,
	Attach_KeyChainContainer = 62,
	Attach_ArchiveContainer = 63,
	Attach_Pocket = 64,
	Attach_BagSpaceContainer = 65,
	Attach_ContainerEnd = 66,
	Attach_CarrayItem = 67,
	Attach_RangeTempAmmoContainer = 68,
	Attach_Temp = 69,
	Attach_TempContainer = 70,
	Attach_Temp_FortificationHammer = 71,
	Attach_JailBreak_EmptyHand = 72,
	Attach_PVE_RPG = 73,
	EAttachPosition_MAX = 74
};

// Object: Enum DFMGlobalDefines.EItemState
enum class EItemState : uint8_t
{
	ItemState_None = 0,
	ItemState_Active = 1,
	ItemState_PreUsing = 2,
	ItemState_Consume = 3,
	ItemState_Using = 4,
	ItemState_ToDestroy = 5,
	ItemState_MAX = 6
};

// Object: Enum DFMGlobalDefines.EPickupContainerLootAudioType
enum class EPickupContainerLootAudioType : uint8_t
{
	Common = 0,
	Glass = 1,
	Cloth = 2,
	Weapon = 3,
	Metal = 4,
	Device = 5,
	CoinPile = 6,
	Treasure = 7,
	EPickupContainerLootAudioType_MAX = 8
};

// Object: Enum DFMGlobalDefines.EInGameBattleClassType
enum class EInGameBattleClassType : uint8_t
{
	BattleClassBegin = 0,
	CQB = 1,
	Medic = 2,
	Gunner = 3,
	Sniper = 4,
	Reborn_Sayyid = 5,
	BattleClassMax = 99,
	EInGameBattleClassType_MAX = 100
};

// Object: Enum DFMGlobalDefines.EMapSignType
enum class EMapSignType : uint8_t
{
	None = 0,
	Normal = 1,
	Chat_Normal = 2,
	Chat_Item = 3,
	PlayerExit = 4,
	PlayerExitTrigger = 5,
	Door = 6,
	Quest = 7,
	POI = 8,
	ShopStation = 9,
	HighValueBox = 10,
	ContractQuest = 11,
	ContractObjection = 12,
	WeaponBlueprintStation = 13,
	SectorAnchor = 14,
	FlagAnchor = 15,
	BattleFlag = 16,
	Scouter = 17,
	IronGauze = 18,
	PakMachine = 19,
	CountDownReleaseTrigger = 20,
	ExitTriggerMiniGame = 21,
	DisposalBomb = 22,
	AirDrop = 23,
	Count = 24,
	EMapSignType_MAX = 25
};

// Object: Enum DFMGlobalDefines.EArmorPartType
enum class EArmorPartType : uint8_t
{
	None = 0,
	FrontHead = 1,
	FrontHeadDown = 2,
	LeftHead = 3,
	RightHead = 4,
	BackHead = 5,
	TopHead = 6,
	EArmorPartType_MAX = 7
};

// Object: Enum DFMGlobalDefines.EBaseArmorType
enum class EBaseArmorType : uint8_t
{
	None = 0,
	Helmet = 1,
	BreastPlate = 2,
	EBaseArmorType_MAX = 3
};

// Object: Enum DFMGlobalDefines.ESOLIntroEventState
enum class ESOLIntroEventState : uint8_t
{
	None = 0,
	IntroEventOccur = 1,
	IntroEventNotOccur = 2,
	ESOLIntroEventState_MAX = 3
};

// Object: Enum DFMGlobalDefines.ESOLEventState
enum class ESOLEventState : uint8_t
{
	None = 0,
	IntroEventOccur = 1,
	IntroEventNotOccur = 2,
	MandelBrickOccur = 3,
	MandelBrickNotOccur = 4,
	SKUBrickOccur = 5,
	BenchmarkActionOccur = 6,
	BenchmarkActionNotOccur = 7,
	SpecialWeatherOccur = 8,
	SpecialWeatherNotOccur = 9,
	CustomEventOccur = 10,
	CustomEventNotOccur = 11,
	OtherDynamicLevel = 12,
	ESOLEventState_MAX = 13
};

// Object: Enum DFMGlobalDefines.EBlueprintPlunderLogicType
enum class EBlueprintPlunderLogicType : uint8_t
{
	None = 0,
	Default = 1,
	Trials = 2,
	SKU = 3,
	EBlueprintPlunderLogicType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EBlueprintPlunderUIState
enum class EBlueprintPlunderUIState : uint8_t
{
	None = 0,
	WaitingForAppear = 1,
	BeAppeared = 2,
	BeAppeared_Abandoned = 3,
	BeingWanted_Self = 4,
	BeingWanted_Teammate = 5,
	BeingWanted_Enemy = 6,
	BeingWanted_Ob3P = 7,
	Deciphering_Self = 8,
	Deciphering_Teammate = 9,
	Deciphering_Enemy = 10,
	Deciphering_EnemyCapture = 11,
	Deciphering_Ob3P = 12,
	Deciphering_Interrupted = 13,
	WaitingRecycle_Self = 14,
	WaitingRecycle_Teammate = 15,
	WaitingRecycle_TeammateCopied = 16,
	WaitingRecycle_Enemy = 17,
	WaitingRecycle_Ob3P = 18,
	BeTakenOut_Self = 19,
	BeTakenOut_Teammate = 20,
	BeTakenOut_Enemy = 21,
	BeTakenOut_Ob3P = 22,
	IrregularExit = 23,
	EBlueprintPlunderUIState_MAX = 24
};

// Object: Enum DFMGlobalDefines.EDangerLevelType
enum class EDangerLevelType : uint8_t
{
	None = 0,
	DangerLevel0 = 1,
	DangerLevel1 = 2,
	DangerLevel2 = 3,
	DangerLevel3 = 4,
	EDangerLevelType_MAX = 5
};

// Object: Enum DFMGlobalDefines.EBlueprintPlunderState
enum class EBlueprintPlunderState : uint8_t
{
	None = 0,
	WaitingForAppearing = 1,
	BeAppeared = 2,
	BeAppeared_Abandoned = 3,
	BeingWanted = 4,
	Deciphering = 5,
	Deciphering_Interrupted = 6,
	WaitingRecycle = 7,
	BeTakenOut = 8,
	IrregularExit = 9,
	EBlueprintPlunderState_MAX = 10
};

// Object: Enum DFMGlobalDefines.ESOLEventProgressType
enum class ESOLEventProgressType : uint8_t
{
	Normal = 0,
	Urgent = 1,
	ESOLEventProgressType_MAX = 2
};

// Object: Enum DFMGlobalDefines.EFastEquipResult
enum class EFastEquipResult : uint8_t
{
	EFastEquipResult_Success = 0,
	EFastEquipResult_UnknownError = 1,
	EFastEquipResult_NotEngouhSpace = 2,
	EFastEquipResult_NotEngouhSpaceAndDropItem = 3,
	EFastEquipResult_CantFastEquip = 4,
	EFastEquipResult_NotAllowedWhenReloading = 5,
	EFastEquipResult_UnEquipSuccess = 6,
	EFastEquipResult_MAX = 7
};

// Object: Enum DFMGlobalDefines.EItemChangeType
enum class EItemChangeType : uint8_t
{
	Delete = 0,
	Add = 1,
	Modified = 2,
	EItemChangeType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EGuideStage
enum class EGuideStage : uint8_t
{
	LootingItem = 31,
	LootingAI = 32,
	ShootModeTips1 = 43,
	ShootModeTips2 = 44,
	SettingShootMode = 45,
	EGuideStage_MAX = 46
};

// Object: Enum DFMGlobalDefines.EPlayerLootingState
enum class EPlayerLootingState : uint8_t
{
	EPlayerLootingState_None = 0,
	EPlayerLootingState_InSearching = 1,
	EPlayerLootingState_Looting = 2,
	EPlayerLootingState_ViewBag = 3,
	EPlayerLootingState_MAX = 4
};

// Object: Enum DFMGlobalDefines.EAllowOutGameTeammatesOBInventory
enum class EAllowOutGameTeammatesOBInventory : uint8_t
{
	None = 0,
	Allow = 1,
	NotAllow = 2,
	EAllowOutGameTeammatesOBInventory_MAX = 3
};

// Object: Enum DFMGlobalDefines.ECharacterAvatarPart
enum class ECharacterAvatarPart : uint16_t
{
	Hair = 0,
	Head = 1,
	Upper = 2,
	Lower = 3,
	Extra = 4,
	HairAdaptive = 5,
	MasterMesh = 6,
	Equipment = 7,
	Watch = 8,
	FaceAnim = 9,
	FaceAnimMasterMesh = 10,
	None = 255,
	ECharacterAvatarPart_MAX = 256
};

// Object: Enum DFMGlobalDefines.ESOLQuestState
enum class ESOLQuestState : uint8_t
{
	ESOLQuestState_Locked = 0,
	ESOLQuestState_Unread = 1,
	ESOLQuestState_Unaccepted = 2,
	ESOLQuestState_Accepted = 3,
	ESOLQuestState_Failed = 4,
	ESOLQuestState_Paused = 5,
	ESOLQuestState_Completed = 6,
	ESOLQuestState_Rewarded = 7,
	ESOLQuestState_MAX = 8
};

// Object: Enum DFMGlobalDefines.EGoalType
enum class EGoalType : uint8_t
{
	None = 0,
	Submit = 1,
	LootPrice = 2,
	CollectItem = 3,
	Escape = 4,
	DefeatEnemy = 5,
	UpgradeSafehouseDeviceLevel_Lobby = 6,
	UseSafehouseDeviceProduceProp_Lobby = 7,
	GoToLocation = 8,
	Delivery = 9,
	DSRoomChallange_Lobby = 10,
	SubmitWeapon_Lobby = 11,
	Interact = 12,
	MatchEvent = 13,
	WorldQuestObjective_Lobby = 14,
	PlayerCG_Lobby = 15,
	EscapeWithItem = 16,
	UseItem = 17,
	AttributeModify = 18,
	InGameLootAction = 19,
	MallBuy_Lobby = 20,
	ReputationLevel_Lobby = 21,
	MandelBrick = 22,
	LootOpenBox = 23,
	KeepActionTime = 24,
	QA = 25,
	AuctionBuyProps_Lobby = 26,
	AuctionSellProps_Lobby = 27,
	SpecificExpertIntoDS_Lobby = 28,
	ObjectiveRepair_Lobby = 29,
	EquipSpecExtensionBox_Lobby = 30,
	EquipBodyProps_Lobby = 31,
	EscapeWithMates_Lobby = 32,
	UseSkill = 33,
	Contract = 34,
	BehaviorScore = 35,
	CarryBodyDoSomething = 36,
	Damage = 37,
	Assist = 38,
	UseRankSkill = 39,
	Movement = 40,
	BeenAtLocation = 41,
	LootingItem = 42,
	MPOccupySector = 43,
	AmmoSupply = 44,
	TimeLimitGoal = 45,
	UseRebornFlag = 46,
	CharcterChecking = 47,
	Rescue = 48,
	VOFinish = 51,
	VehicleAmmoSupply = 52,
	AmmoSupplyOnMap = 53,
	BeHurt = 54,
	DestroyVehicle_NoLocking = 56,
	EscapePossession = 57,
	TeamLimit = 58,
	BraveGame = 59,
	Specialkill = 60,
	MoundCoverDiggout = 61,
	FootballKick = 62,
	Activity_Lobby_Start = 100,
	MPWinning_Looby = 101,
	TotalSurvivalTime_Looby = 102,
	AddXFriends_Looby = 103,
	PlayWith_Looby = 104,
	PraiseXPlayers_Looby = 105,
	SubmitProp_Looby = 106,
	AuctionSell_Looby = 107,
	SellProp_Looby = 108,
	Login_Looby = 109,
	TotalPlayTime_Looby = 110,
	LoginStreak_Looby = 111,
	MatchStart_Looby = 112,
	MatchEnd_Looby = 113,
	TotalOnlineTime_Looby = 114,
	CompleteContract_Looby = 115,
	Escape_Looby = 116,
	MatchStartWithGroup_Looby = 117,
	EGoalType_MAX = 118
};

// Object: Enum DFMGlobalDefines.ESOLQuestObjectionState
enum class ESOLQuestObjectionState : uint8_t
{
	InActive = 0,
	Active = 1,
	Complete = 2,
	Failed = 3,
	InitialComplete = 4,
	InActive_Condition = 5,
	ESOLQuestObjectionState_MAX = 6
};

// Object: Enum DFMGlobalDefines.EStatisticsSpecialKillEvent
enum class EStatisticsSpecialKillEvent : uint8_t
{
	None = 0,
	EKill_OneLifeChallenge = 1,
	EKill_KillVehicleDriver = 2,
	EKill_KillingWithUnattachedWeapon = 3,
	EKill_LastSurvivor = 4,
	EStatisticsSpecialKillEvent_MAX = 5
};

// Object: Enum DFMGlobalDefines.EAILabBodyState
enum class EAILabBodyState : uint8_t
{
	EBodyState_Stand = 0,
	EBodyState_Crouch = 1,
	EBodyState_Prone = 2,
	EBodyState_StandLeanLeft = 3,
	EBodyState_StandLeanRight = 4,
	EBodyState_CrouchLeanLeft = 5,
	EBodyState_CrouchLeanRight = 6,
	EBodyState_MAX = 7
};

// Object: Enum DFMGlobalDefines.ECreateModelType
enum class ECreateModelType : uint8_t
{
	EMod_MatchSecs = 0,
	EMod_KillBot = 1,
	EMod_KillPlayer = 2,
	EMod_KillAILab = 3,
	EMod_HitRate = 4,
	EMode_ExitDist = 5,
	EMode_TeamNum = 6,
	ECreateModelType_MAX = 7
};

// Object: Enum DFMGlobalDefines.EAILabDiffcultType
enum class EAILabDiffcultType : uint8_t
{
	EDiff_Hp = 1,
	EDiff_KillPlayer = 2,
	EDiff_KillHadson = 3,
	EDiff_Asset = 4,
	EDiff_MAX = 5
};

// Object: Enum DFMGlobalDefines.EDropConditionType
enum class EDropConditionType : uint8_t
{
	ECon_Normal = 0,
	ECon_DeadPlayer = 1,
	ECon_GameTime = 2,
	ECon_KillerLeftHp = 3,
	ECon_DeadPlayerRate = 4,
	ECon_KillerBloody = 5,
	ECon_KillerFracture = 6,
	ECon_MAX = 7
};

// Object: Enum DFMGlobalDefines.EBattlePassItemTransformType
enum class EBattlePassItemTransformType : uint8_t
{
	None = 0,
	TransformSelf = 1,
	Camera = 2,
	EBattlePassItemTransformType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EBlueprintPlunderCustomModeType
enum class EBlueprintPlunderCustomModeType : uint8_t
{
	None = 0,
	EArenaMode = 1,
	ETrialsMode = 2,
	EBlueprintPlunderCustomModeType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EBlueprintPlunderInteractResultType
enum class EBlueprintPlunderInteractResultType : uint8_t
{
	None = 0,
	ESuccess = 1,
	EFailed_BeingWanted_LackProps = 2,
	EFailed_BeingWanted_SpawnerNotMatch = 3,
	EFailed_Deciphering_Teammate_Wait2Copy = 4,
	EFailed_BeTakenOut_Self = 5,
	EBlueprintPlunderInteractResultType_MAX = 6
};

// Object: Enum DFMGlobalDefines.EInteract3DAudioType
enum class EInteract3DAudioType : uint8_t
{
	None = 0,
	Container_Lp_Start = 1,
	Container_Lp_Stop = 2,
	CodeBreak_Lp_Start = 3,
	CodeBreak_Lp_Stop = 4,
	CodeBreak_Mandel_Lp = 5,
	CodeBreak_Mandel_Stop = 6,
	CodeBreak_Tp_Start = 7,
	CodeBreak_Tp_Stop = 8,
	Mandel_CodeBreak_End = 9,
	Mandel_FallDown = 10,
	Mandel_Lp = 11,
	Mandel_Stop = 12,
	CodeBreak_Interact_Start = 13,
	CodeBreak_Interact_Stop = 14,
	CodeBreak_Interact_End = 15,
	CodeBreak_Cloned = 16,
	CodeBreak_Plunder = 17,
	EInteract3DAudioType_MAX = 18
};

// Object: Enum DFMGlobalDefines.EBlueprintPlunderSettlementType
enum class EBlueprintPlunderSettlementType : uint8_t
{
	Settlement_Failed = 0,
	Settlement_Success = 1,
	Settlement_Half = 2,
	Settlement_Success_TeamMate = 3,
	Settlement_MAX = 4
};

// Object: Enum DFMGlobalDefines.EBreakthroughTextType
enum class EBreakthroughTextType : uint8_t
{
	None = 0,
	CustomSameCampTextType = 1,
	CustomEnemyCampTextType = 2,
	CustomNeutralCampTextType = 3,
	EBreakthroughTextType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EBreakthroughUIIconType
enum class EBreakthroughUIIconType : uint8_t
{
	None = 0,
	TransMarker_Helicopter = 1,
	TransMarker_Elevator = 2,
	TransMarker_Zipline = 3,
	TransMarker_SceneWeapon = 4,
	MarkerIcon_Offence = 5,
	MarkerIcon_Defence = 6,
	Icon_Hawk = 7,
	Icon_GTI = 8,
	Icon_Hawk_Topbar = 9,
	Icon_GTI_Topbar = 10,
	Icon_Commander = 11,
	Icon_TeamLeader = 12,
	HighThreatVehicle = 13,
	HighValueAnchor = 14,
	FastDeploy = 15,
	TeamA = 16,
	TeamB = 17,
	TeamC = 18,
	TeamD = 19,
	TeamE = 20,
	TeamF = 21,
	TeamG = 22,
	TeamH = 23,
	TeamI = 24,
	PlayerLocationMarkerSmallIcon = 25,
	PlayerLocationMarkerBigIcon = 26,
	PlayerLocationMarkerSmallIcon_Commander = 27,
	PlayerLocationMarkerBigIcon_Commander = 28,
	TeamA_SameTeam = 29,
	TeamB_SameTeam = 30,
	TeamC_SameTeam = 31,
	TeamD_SameTeam = 32,
	TeamE_SameTeam = 33,
	TeamF_SameTeam = 34,
	TeamG_SameTeam = 35,
	TeamH_SameTeam = 36,
	TeamI_SameTeam = 37,
	TeamA_Vehicle = 38,
	TeamB_Vehicle = 39,
	TeamC_Vehicle = 40,
	TeamD_Vehicle = 41,
	TeamE_Vehicle = 42,
	TeamF_Vehicle = 43,
	TeamG_Vehicle = 44,
	TeamH_Vehicle = 45,
	TeamI_Vehicle = 46,
	Icon_Commander_Vehicle = 47,
	AttackReform = 48,
	EBreakthroughUIIconType_MAX = 49
};

// Object: Enum DFMGlobalDefines.EBreakthroughUIColorType
enum class EBreakthroughUIColorType : uint8_t
{
	None = 0,
	CustomSameCampColor = 1,
	CustomEnemyCampColor = 2,
	CustomNeutralCampColor = 3,
	CustomSameTeamColor = 4,
	RippleSameCampColor = 5,
	RippleEnemyCampColor = 6,
	RippleNeutralCampColor = 7,
	TopBarFriendlyColor = 8,
	TopBarEnemyColor = 9,
	Color_Commander = 10,
	Color_TeamLeader = 11,
	Color_Teammate = 12,
	CustomSelfColor = 13,
	EBreakthroughUIColorType_MAX = 14
};

// Object: Enum DFMGlobalDefines.EBuffAction
enum class EBuffAction : uint8_t
{
	None = 0,
	CureSOLHealthBody = 1,
	AddCoolDownBuff = 2,
	AddBuff = 3,
	EBuffAction_MAX = 4
};

// Object: Enum DFMGlobalDefines.EBuffActionTriggerType
enum class EBuffActionTriggerType : uint8_t
{
	None = 0,
	OnAdd = 1,
	OnRefreshTime = 2,
	OnPeriod = 3,
	OnPause = 4,
	OnResume = 5,
	OnRemove = 6,
	EBuffActionTriggerType_MAX = 7
};

// Object: Enum DFMGlobalDefines.ECarrayItemsType
enum class ECarrayItemsType : uint8_t
{
	None = 0,
	Health = 1,
	Armor = 2,
	Telescope = 3,
	ECarrayItemsType_MAX = 4
};

// Object: Enum DFMGlobalDefines.ECharacterFeatureScene
enum class ECharacterFeatureScene : uint8_t
{
	None = 0,
	Jet = 1,
	ECharacterFeatureScene_MAX = 2
};

// Object: Enum DFMGlobalDefines.EHeroShapeShiftType
enum class EHeroShapeShiftType : uint8_t
{
	Zero = 0,
	One = 1,
	Two = 2,
	MpGTIZero = 20,
	MpGTIOne = 21,
	MpGTITwo = 22,
	MpHavvkZero = 40,
	MpHavvkOne = 41,
	MpHavvkTwo = 42,
	BodyOne = 101,
	BodyTwo = 102,
	BodyEnd = 110,
	Seamless1P = 200,
	Prisoner = 201,
	Seamless3P = 202,
	Pilot = 203,
	EHeroShapeShiftType_MAX = 204
};

// Object: Enum DFMGlobalDefines.EHeroItemFashionQuality
enum class EHeroItemFashionQuality : uint8_t
{
	None = 0,
	S = 1,
	A = 2,
	B = 3,
	C = 4,
	D = 5,
	EHeroItemFashionQuality_MAX = 6
};

// Object: Enum DFMGlobalDefines.ECharacterTag
enum class ECharacterTag : uint8_t
{
	Unknown = 0,
	Hero = 1,
	AI = 2,
	NPC = 3,
	ECharacterTag_MAX = 4
};

// Object: Enum DFMGlobalDefines.ECharacterAvatarSex
enum class ECharacterAvatarSex : uint8_t
{
	Male = 0,
	Female = 1,
	ECharacterAvatarSex_MAX = 2
};

// Object: Enum DFMGlobalDefines.EMergablePart
enum class EMergablePart : uint8_t
{
	Upper = 0,
	Lower = 1,
	Head = 2,
	BreastPlate = 3,
	ChestHang = 4,
	Bag = 5,
	Helmet = 6,
	ExtraPart = 7,
	Watch = 8,
	EMergablePart_MAX = 9
};

// Object: Enum DFMGlobalDefines.ECharacterAvatarExtraTag
enum class ECharacterAvatarExtraTag : uint8_t
{
	ExtraItem = 0,
	SkillItem = 1,
	ExtraItemForLowerBody = 2,
	ECharacterAvatarExtraTag_MAX = 3
};

// Object: Enum DFMGlobalDefines.ECharacterAvatarPartConfig
enum class ECharacterAvatarPartConfig : uint8_t
{
	Upper = 0,
	Hair = 1,
	HairAdaptive = 2,
	Head = 3,
	Lower = 4,
	FaceAnim = 5,
	ECharacterAvatarPartConfig_MAX = 6
};

// Object: Enum DFMGlobalDefines.ELoadLevelOption
enum class ELoadLevelOption : uint8_t
{
	None = 0,
	Single = 1,
	Multiple = 2,
	ELoadLevelOption_MAX = 3
};

// Object: Enum DFMGlobalDefines.EShowLevelConfig
enum class EShowLevelConfig : uint8_t
{
	None = 0,
	DefaultLoad = 1,
	VisibilityAfterLoaded = 2,
	EShowLevelConfig_MAX = 3
};

// Object: Enum DFMGlobalDefines.EMeshType
enum class EMeshType : uint8_t
{
	None = 0,
	FPP = 1,
	TPP = 2,
	UI = 3,
	EMeshType_MAX = 4
};

// Object: Enum DFMGlobalDefines.ECustomTransformRule
enum class ECustomTransformRule : uint8_t
{
	None = 0,
	Absolute = 1,
	Relative = 2,
	ECustomTransformRule_MAX = 3
};

// Object: Enum DFMGlobalDefines.EVoiceType
enum class EVoiceType : uint8_t
{
	None = 0,
	Lines = 1,
	KillaLines = 2,
	EVoiceType_MAX = 3
};

// Object: Enum DFMGlobalDefines.ECharacterFeatureLODAvatarPart
enum class ECharacterFeatureLODAvatarPart : uint8_t
{
	None = 0,
	Trunk = 1,
	Hair = 2,
	Equipment = 3,
	ExtraItem = 4,
	ExtraSkillItem = 5,
	Watch = 6,
	ECharacterFeatureLODAvatarPart_MAX = 7
};

// Object: Enum DFMGlobalDefines.ECharacterSpeakType
enum class ECharacterSpeakType : uint8_t
{
	NONE = 0,
	USUAL_NO_THREAT = 1,
	RocketMouse_Singing = 20,
	ALERT_BEGIN = 32,
	ALERT_HEARD_SMALL_SOUND = 33,
	ALERT_HEARD_SOUND = 34,
	ALERT_Frightened = 35,
	ALERT_HIDING = 36,
	ALERT_SEARCHING = 37,
	ALERT_BACK = 38,
	BATTLE_BEGIN = 96,
	BATTLE_START_FIGHT = 97,
	BATTLE_HIDING = 98,
	BATTLE_COME_CLOSE = 99,
	BATTLE_AIRHIT = 100,
	BATTLE_SEE_ENEMY = 101,
	BATTLE_LOSE_ENEMY_SIGHT = 102,
	BATTLE_IN_COVER = 103,
	BATTLE_HIT_ENEMY = 104,
	BATTLE_KILL_ENEMY = 105,
	COMING_GRENADE = 106,
	BATTLE_THROW_GRENADE = 107,
	BATTLE_ChangeClip = 108,
	BATTLE_END_FIGHT = 109,
	STATE_BEGIN = 160,
	STATE_BLEEDING = 161,
	STATE_GOT_HURTED_HEAVY = 162,
	STATE_HIT_BONE_BROKEN = 163,
	STATE_LEG_BONE_BROKEN = 164,
	STATE_ARM_BONE_BROKEN = 165,
	STATE_DEATH = 166,
	STATE_PAIN = 167,
	STATE_EATFULL = 168,
	STATE_SPICY = 169,
	STATE_DRUNK = 170,
	BEATTACK_BEGIN = 180,
	BEATTACK_HEAD = 181,
	BEATTACK_BODY = 182,
	BEATTACK_BEHIT = 183,
	FPP_ONLY_BEGIN = 192,
	FPP_GOT_HIT = 193,
	C501_Sayyid_AI_Response = 220,
	C501_Sayyid_AI_StartCombat = 221,
	BOSS_ONLY_BEGIN = 224,
	BOSS_Reis_ROAR = 225,
	BOSS_Maurice_Flame = 226,
	BOSS_Maurice_Smoke = 227,
	BOSS_Maurice_Bomb = 228,
	BOSS_Maurice_Pivot = 229,
	BOSS_Maurice_Roll = 230,
	BOSS_Maurice_Slide = 231,
	BOSS_Romytheus_StartWalk = 232,
	BOSS_Romytheus_EndWalk = 233,
	BOSS_Romytheus_PlayerLeave = 234,
	BOSS_Romytheus_Appear = 235,
	BOSS_Romytheus_Guard = 236,
	BOSS_Romytheus_FriendlyFire = 237,
	BOSS_Speak_01 = 238,
	BOSS_Speak_02 = 239,
	BOSS_Speak_03 = 240,
	BOSS_Speak_04 = 241,
	BOSS_Speak_05 = 242,
	BOSS_Speak_06 = 243,
	BOSS_Speak_07 = 244,
	BOSS_Speak_08 = 245,
	BOSS_Speak_09 = 246,
	BOSS_Speak_10 = 247,
	MAX = 248
};

// Object: Enum DFMGlobalDefines.EMeritObtainType
enum class EMeritObtainType : uint8_t
{
	HitTarget = 0,
	HeadShot = 1,
	Assist = 2,
	BasicKill = 3,
	ContinueKillBegin = 100,
	ContinueKillTwo = 101,
	ContinueKillEnd = 200,
	LongDistanceKill = 201,
	ShortDistanceKill = 202,
	EMeritObtainType_MAX = 203
};

// Object: Enum DFMGlobalDefines.EBeHitedType
enum class EBeHitedType : uint8_t
{
	None = 0,
	HitBody = 1,
	HitBodyWithArmor = 2,
	HitBodyWithArmorAndDamageHp = 3,
	HitHeadWithoutHelmet = 4,
	HitHelmet = 5,
	HitHelmetAndDamageHp = 6,
	HitHelmetBroken = 7,
	HitArmorBroken = 8,
	HitLowHealth = 9,
	HitBulletWhoosh = 10,
	HitBulletHitAround = 11,
	HitSuppressByBullet = 12,
	KnockDownByHitBody = 13,
	KnockDownByHitHead = 14,
	KilledByHitBody = 15,
	KilledByHitHead = 16,
	Shocked = 17,
	HitVehicle = 18,
	KillVehicle = 19,
	BreakthroughRankSkillHit = 20,
	HitShield = 21,
	HitHeavyArmor = 22,
	Stagger = 23,
	HitADS = 24,
	HitSkillActor = 25,
	BreakShieldGlass = 26,
	CounterProjectile = 27,
	Invincible = 28,
	EBeHitedType_MAX = 29
};

// Object: Enum DFMGlobalDefines.EItemHealthBuffTriggerType
enum class EItemHealthBuffTriggerType : uint8_t
{
	OnFirstPeriod = 0,
	Period = 1,
	OnFinalPeriod = 2,
	EItemHealthBuffTriggerType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EItemHealthTriggerType
enum class EItemHealthTriggerType : uint8_t
{
	OnFinish = 0,
	Period = 1,
	EItemHealthTriggerType_MAX = 2
};

// Object: Enum DFMGlobalDefines.EItemHealthSubType
enum class EItemHealthSubType : uint8_t
{
	None = 0,
	Painkiller = 1,
	OperationKits = 2,
	HP = 3,
	BodyArmor = 4,
	HelmetArmor = 5,
	Needle = 6,
	FireCracker = 7,
	EItemHealthSubType_MAX = 8
};

// Object: Enum DFMGlobalDefines.EItemHealthRecommendType
enum class EItemHealthRecommendType : uint8_t
{
	None = 0,
	HealthRange01 = 1,
	HealthRange02 = 2,
	HealthRange03 = 3,
	Low_Health = 4,
	HealthInjured = 5,
	Low_Armor = 6,
	Low_HelmetArmor = 7,
	Part_Injured = 8,
	Bleeding = 9,
	Part_Injured_NoAlgesiaBuff = 10,
	EItemHealthRecommendType_MAX = 11
};

// Object: Enum DFMGlobalDefines.EItemUseActionLimit
enum class EItemUseActionLimit : uint8_t
{
	None = 0,
	NoCrouch = 1,
	NoProne = 2,
	EItemUseActionLimit_MAX = 3
};

// Object: Enum DFMGlobalDefines.EItemUseFunction
enum class EItemUseFunction : uint8_t
{
	None = 0,
	Normal = 1,
	HoldAndUse = 2,
	Skill = 3,
	SafeBoxValue = 4,
	EItemUseFunction_MAX = 5
};

// Object: Enum DFMGlobalDefines.EBuffTarget
enum class EBuffTarget : uint8_t
{
	ENone = 0,
	ECharacter = 1,
	EWeapon = 2,
	ECharacterAndWeapon = 3,
	EBuffTarget_MAX = 4
};

// Object: Enum DFMGlobalDefines.EItemSlotType
enum class EItemSlotType : uint8_t
{
	None = 0,
	Minimal = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	EItemSlotType_MAX = 5
};

// Object: Enum DFMGlobalDefines.EPropItemType
enum class EPropItemType : uint8_t
{
	Sub_Prop_Default = 0,
	Sub_Prop_Energy = 1,
	Sub_Prop_Health = 2,
	Sub_Prop_Buff = 3,
	Sub_Prop_Gasoline = 4,
	Sub_Prop_PickupConsume = 5,
	Sub_Prop_MAX = 6
};

// Object: Enum DFMGlobalDefines.EApparelItemType
enum class EApparelItemType : uint8_t
{
	None = 0,
	AS_Apparel = 1,
	AS_Hat = 2,
	AS_Glasses = 3,
	AS_UpShirt = 4,
	AS_Pants = 5,
	AS_Shoes = 6,
	AS_Ghillie = 7,
	AS_Head = 8,
	AS_FullBody = 9,
	MAX = 10
};

// Object: Enum DFMGlobalDefines.EItemUserType
enum class EItemUserType : uint8_t
{
	Item_Default = 0,
	Item_Avatar = 1,
	Item_Weapon = 2,
	Item_Adapter = 3,
	Item_Ammo = 4,
	Item_Equip = 5,
	Item_Props = 6,
	Item_Apparel = 7,
	Item_Ability = 8,
	Item_MAX = 9
};

// Object: Enum DFMGlobalDefines.EEquipmentSubType
enum class EEquipmentSubType : uint8_t
{
	EquipmentSubType_None = 0,
	EquipmentSubType_Helmet = 1,
	EquipmentSubType_HeadSet = 2,
	EquipmentSubType_FaceMask = 3,
	EquipmentSubType_BreastPlate = 5,
	EquipmentSubType_Glasses = 6,
	EquipmentSubType_ChestHanging = 7,
	EquipmentSubType_Bag = 8,
	EquipmentSubType_MAX = 9
};

// Object: Enum DFMGlobalDefines.EAdaptationCharacterType
enum class EAdaptationCharacterType : uint8_t
{
	EMale = 0,
	EFemale = 1,
	EAdaptationCharacterType_MAX = 2
};

// Object: Enum DFMGlobalDefines.EHelmetSubType
enum class EHelmetSubType : uint8_t
{
	EHelmetSubType_Normal = 0,
	EHelmetSubType_MAX = 1
};

// Object: Enum DFMGlobalDefines.EBreastPlateSubType
enum class EBreastPlateSubType : uint8_t
{
	EBreastPlateSubType_Normal = 0,
	EBreastPlateSubType_MAX = 1
};

// Object: Enum DFMGlobalDefines.EChestHangingSubType
enum class EChestHangingSubType : uint8_t
{
	EChestHangingSubType_Normal = 0,
	EChestHangingSubType_MAX = 1
};

// Object: Enum DFMGlobalDefines.EBagSubType
enum class EBagSubType : uint8_t
{
	EBagSubType_BackPack = 0,
	EBagSubType_MessengerBag = 1,
	EBagSubType_MAX = 2
};

// Object: Enum DFMGlobalDefines.ECurrencyBindType
enum class ECurrencyBindType : uint8_t
{
	None = 0,
	Unbind = 1,
	Bind = 2,
	BindAndUnbind = 3,
	ECurrencyBindType_MAX = 4
};

// Object: Enum DFMGlobalDefines.ECurrencyType
enum class ECurrencyType : uint8_t
{
	None = 0,
	Timeless = 1,
	Play = 2,
	Temporary = 3,
	Fake = 4,
	ECurrencyType_MAX = 5
};

// Object: Enum DFMGlobalDefines.ECAPTCHASceneType
enum class ECAPTCHASceneType : uint8_t
{
	InvalidScene = 0,
	MatchScene = 1,
	ECAPTCHASceneType_MAX = 2
};

// Object: Enum DFMGlobalDefines.ECustomerServicesDisplayType
enum class ECustomerServicesDisplayType : uint8_t
{
	Invalid = 0,
	Inside_Webview = 1,
	Outside_Webview = 2,
	ECustomerServicesDisplayType_MAX = 3
};

// Object: Enum DFMGlobalDefines.ECustomerServicesPlatformType
enum class ECustomerServicesPlatformType : uint8_t
{
	Invalid = 0,
	Windows = 1,
	Android = 2,
	iOS = 4,
	OpenHarmony = 5,
	XSX = 6,
	PS5 = 8,
	ECustomerServicesPlatformType_MAX = 9
};

// Object: Enum DFMGlobalDefines.ECustomerServicesEntranceType
enum class ECustomerServicesEntranceType : uint8_t
{
	InvalidPage = 0,
	LoginPage = 1,
	MainPage = 2,
	ActivityPage = 3,
	RechargePage = 4,
	SettingPage = 5,
	ESCPage = 6,
	SafePage_Mobile = 7,
	SafePage_PC = 8,
	SafePage_Global_Mobile = 9,
	SafePage_Global_PC = 10,
	ECustomerServicesEntranceType_MAX = 11
};

// Object: Enum DFMGlobalDefines.EDFLogCategory
enum class EDFLogCategory : uint8_t
{
	DFLogAIEditor = 0,
	EDFLogCategory_MAX = 1
};

// Object: Enum DFMGlobalDefines.EBattleFieldMapFutureTag
enum class EBattleFieldMapFutureTag : uint8_t
{
	None = 0,
	RedEnvelope = 1,
	IroncladLion = 2,
	Overload = 3,
	HardPoint = 4,
	ImmediatelyDeath = 5,
	LateAutoRevive = 6,
	CaptureTheFlag1_1 = 7,
	Zongzi = 8,
	MultiCamps = 9,
	EBattleFieldMapFutureTag_MAX = 10
};

// Object: Enum DFMGlobalDefines.ECoinType
enum class ECoinType : uint8_t
{
	Common = 0,
	Trials = 1,
	ECoinType_MAX = 2
};

// Object: Enum DFMGlobalDefines.EExitCutSceneType
enum class EExitCutSceneType : uint8_t
{
	NonGeneric = 0,
	InDoor = 1,
	OutDoor = 2,
	MediaVideo = 3,
	EExitCutSceneType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EMediaPlayMode
enum class EMediaPlayMode : uint8_t
{
	ONLY_ONE = 0,
	MEDIALIST = 1,
	EMediaPlayMode_MAX = 2
};

// Object: Enum DFMGlobalDefines.ERotate45Type
enum class ERotate45Type : uint8_t
{
	AlwaysDontRotate45 = 0,
	Defalut = 1,
	AlwaysRotate45 = 2,
	ERotate45Type_MAX = 3
};

// Object: Enum DFMGlobalDefines.EDFMImageDebugType
enum class EDFMImageDebugType : uint8_t
{
	ActionProcess = 0,
	ImageSize = 1,
	Tile = 2,
	Merge = 3,
	EDFMImageDebugType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EEstimateName
enum class EEstimateName : uint8_t
{
	EEnemyNone = 0,
	EEnemyDist = 1,
	EEnemySight = 2,
	EEnemyAirHit = 3,
	ETeamMateDist = 4,
	EOtherTeamMateDist = 5,
	EHardPointOtherTeamMateDist = 6,
	EAnchorDist = 7,
	EDeadMateDist = 8,
	AnchorEnemyDis = 9,
	EEnemyMax = 10,
	EEstimateName_MAX = 11
};

// Object: Enum DFMGlobalDefines.EPermissionPlatformType
enum class EPermissionPlatformType : uint8_t
{
	Invalid = 0,
	Android = 1,
	iOS = 2,
	OpenHarmony = 4,
	EPermissionPlatformType_MAX = 5
};

// Object: Enum DFMGlobalDefines.EDropItemType
enum class EDropItemType : uint8_t
{
	DropHelmet = 0,
	DropArmor = 1,
	DropWeapon = 2,
	DropConsume = 3,
	EDropItemType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EDropSource
enum class EDropSource : uint8_t
{
	LootPoint = 0,
	AI_Drop = 1,
	EDropSource_MAX = 2
};

// Object: Enum DFMGlobalDefines.EEquipmentCheckSlotType
enum class EEquipmentCheckSlotType : uint8_t
{
	None = 0,
	EAttrBuffType_Bleeding = 1,
	EAttrBuffType_Fracture = 2,
	EAttrBuffType_Pain = 3,
	Helmet = 101,
	BreastPlate = 105,
	Bag = 108,
	MainWeaponLeft = 111,
	SecondaryWeapon = 113,
	Medicine = 122,
	EEquipmentCheckSlotType_MAX = 123
};

// Object: Enum DFMGlobalDefines.EEquipmentPanelType
enum class EEquipmentPanelType : uint8_t
{
	MainCheckBoxPanel = 0,
	RecommendSwitchPanel = 1,
	ReservedSpaceSwitchPanel = 2,
	RemainItemsSWitchPanel = 3,
	DeBufCheckBoxPanel = 4,
	HelmetSliderPanel = 5,
	BreastPlateSliderPanel = 6,
	BagSliderPanel = 7,
	MedicineSliderPanel = 8,
	EEquipmentPanelType_MAX = 9
};

// Object: Enum DFMGlobalDefines.EFashionWearPosition
enum class EFashionWearPosition : uint8_t
{
	None = 0,
	Head = 1,
	Face = 2,
	Eyes = 3,
	Ears = 4,
	Neck = 5,
	Shoulders = 6,
	Upper = 7,
	Lower = 8,
	Bag = 9,
	BagBadge = 10,
	BagPendant = 11,
	EFashionWearPosition_MAX = 12
};

// Object: Enum DFMGlobalDefines.EDamageShowType
enum class EDamageShowType : uint8_t
{
	ENone = 0,
	EBluntDamge = 1,
	ENormalDamage = 2,
	ECritDamage = 3,
	EDamageShowType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EGamePlayerNumModeType
enum class EGamePlayerNumModeType : uint8_t
{
	Unknown = 0,
	Single = 1,
	Double = 2,
	Triple = 3,
	Quadruple = 4,
	EGamePlayerNumModeType_MAX = 5
};

// Object: Enum DFMGlobalDefines.EGameSubModeType
enum class EGameSubModeType : uint8_t
{
	Unknown = 0,
	SOL_PMC = 1,
	SOL_SCAV = 2,
	SOL_SOL = 3,
	PVE_Easy = 10,
	PVE_Normal = 11,
	PVE_Diffcult = 12,
	PVE_RealWar = 13,
	BW_LEVEL1 = 20,
	BW_LEVEL2 = 21,
	BW_LEVEL3 = 22,
	BW_LEVEL4 = 23,
	TDM_LEVEL1 = 31,
	TDM_LEVEL2 = 32,
	TDM_LEVEL3 = 33,
	TDM_LEVEL4 = 34,
	TDM_LEVEL5 = 35,
	EGameSubModeType_MAX = 36
};

// Object: Enum DFMGlobalDefines.EGameMainModeType
enum class EGameMainModeType : uint8_t
{
	Unknown = 0,
	SOL = 1,
	PVE = 2,
	BigWorld = 3,
	TDM = 4,
	EGameMainModeType_MAX = 5
};

// Object: Enum DFMGlobalDefines.EGuidePopWindowShowType
enum class EGuidePopWindowShowType : uint8_t
{
	ProgressBar = 0,
	EGuidePopWindowShowType_MAX = 1
};

// Object: Enum DFMGlobalDefines.EGuidePopWindowItemExContentType
enum class EGuidePopWindowItemExContentType : uint8_t
{
	Image = 0,
	ImageAndPlayBtn = 1,
	Video = 10,
	SubWBP = 11,
	FullScreenVideo = 12,
	EGuidePopWindowItemExContentType_MAX = 13
};

// Object: Enum DFMGlobalDefines.EGuideClickConfigOption
enum class EGuideClickConfigOption : uint8_t
{
	HDNoFallbackText = 0,
	HDNoDefaultIcon = 1,
	NoMask = 2,
	EGuideClickConfigOption_MAX = 3
};

// Object: Enum DFMGlobalDefines.EGuideStageClientMode
enum class EGuideStageClientMode : uint8_t
{
	None = 0,
	SOL = 1,
	MP = 2,
	Raid = 3,
	StructTutorial = 4,
	Arena = 5,
	EGuideStageClientMode_MAX = 6
};

// Object: Enum DFMGlobalDefines.EGuideConditionId
enum class EGuideConditionId : uint8_t
{
	MinCompleteCount = 101,
	MaxCompleteCount = 102,
	NeedPreGuideModule = 103,
	MaxPlayTimes = 104,
	IsNewPlayerGuideEnd = 105,
	NoMapMarkForRetreat = 106,
	IsBattleState = 107,
	LastSolFailed = 108,
	MinSeasonLevel = 109,
	MaxSeasonLevel = 110,
	NotInMatching = 111,
	PlayCD = 112,
	EGuideConditionId_MAX = 113
};

// Object: Enum DFMGlobalDefines.EVehicleCameraType
enum class EVehicleCameraType : uint8_t
{
	ModifiedType = 0,
	MainType = 1,
	BPType = 2,
	EVehicleCameraType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EItemFlowType
enum class EItemFlowType : uint8_t
{
	Default = 0,
	Other = 1,
	SceneBox = 2,
	SubPickup = 3,
	LabAI = 4,
	BotAI = 5,
	Player = 6,
	Quest = 7,
	HackPC = 8,
	DecipherDevice = 9,
	RaidAmmoBox = 10,
	HongbaoInteract = 11,
	Treasure = 12,
	EItemFlowType_MAX = 13
};

// Object: Enum DFMGlobalDefines.EContainerInteractResult
enum class EContainerInteractResult : uint8_t
{
	None = 0,
	Failed_KeyRoom_NotKeyMan = 1,
	Failed_OtherPlayerIsLooting = 2,
	Success = 3,
	EContainerInteractResult_MAX = 4
};

// Object: Enum DFMGlobalDefines.EUseItemAnimType
enum class EUseItemAnimType : uint8_t
{
	FullAnim = 0,
	PreUseAnim = 1,
	UsingAnim = 2,
	AfterUseAnim = 3,
	Holding = 4,
	EUseItemAnimType_MAX = 5
};

// Object: Enum DFMGlobalDefines.EPropAnimEvent
enum class EPropAnimEvent : uint8_t
{
	EPropAnimEvent_PreUseItem = 0,
	EPropAnimEvent_StopPreUsingItem = 1,
	EPropAnimEvent_PreUseThrowableItem = 2,
	EPropAnimEvent_ThrowItem = 3,
	EPropAnimEvent_MAX = 4
};

// Object: Enum DFMGlobalDefines.ESuitableSpaceChecker
enum class ESuitableSpaceChecker : uint8_t
{
	SuitableSpaceChecker_All = 0,
	SuitableSpaceChecker_Equipment = 1,
	SuitableSpaceChecker_Container = 2,
	AllExceptKeyChainContainer = 3,
	ESuitableSpaceChecker_MAX = 4
};

// Object: Enum DFMGlobalDefines.ELootLimitType
enum class ELootLimitType : uint8_t
{
	ELootLimitType_Both = 0,
	ELootLimitType_OnlySource = 1,
	ELootLimitType_OnlyTarget = 2,
	ELootLimitType_None = 3,
	ELootLimitType_MAX = 4
};

// Object: Enum DFMGlobalDefines.ELootObjType
enum class ELootObjType : uint8_t
{
	ELootObjType_None = 0,
	ELootObjType_InventoryMgr = 1,
	ELootObjType_ScenePickup = 2,
	ELootObjType_SceneContainer = 3,
	ELootObjType_OpenBox = 4,
	ELootObjType_DeadBody = 5,
	ELootObjType_MAX = 6
};

// Object: Enum DFMGlobalDefines.EPreUseAnimType
enum class EPreUseAnimType : uint8_t
{
	PreUseAnimType_None = 0,
	PreUseAnimType_RedBull = 1,
	PreUseAnimType_PainKiller = 2,
	PreUseAnimType_AidKit = 3,
	PreUseAnimType_Bandage = 4,
	PreUseAnimType_MedKit = 5,
	PreUseAnimType_Adrenaline = 6,
	PreUseAnimType_CMS = 7,
	PreUseAnimType_Splint = 8,
	PreUseAnimType_Augmentin = 9,
	PreUseAnimType_BearMedKit = 10,
	PreUseAnimType_MAX = 11
};

// Object: Enum DFMGlobalDefines.EItemUseCondition
enum class EItemUseCondition : uint8_t
{
	ItemUseCondition_None = 0,
	ItemUseCondition_OK = 1,
	ItemUseCondition_Cooldowning = 2,
	ItemUseCondition_AlreadyUsed = 3,
	ItemUseCondition_NotInitiativeUsable = 4,
	ItemUseCondition_OtherReason = 5,
	ItemUseCondition_MaxHeath = 6,
	ItemUseCondition_VehicleSpeed = 7,
	ItemUseCondition_VehicleFuel = 8,
	ItemUseCondition_Move = 9,
	ItemUseCondition_LeanOut = 10,
	ItemUseCondition_Swim = 11,
	ItemUseCondition_OutVehice = 12,
	ItemUseCondition_Vault = 13,
	ItemUseCondition_Climb = 14,
	ItemUseCondition_TransitionAnim = 15,
	ItemUseCondition_NoNeedToUse = 16,
	ItemUseCondition_MaxArmor = 17,
	ItemUseCondition_MaxHelmetArmorValue = 18,
	ItemUseCondition_ArmorLowDurability = 19,
	ItemUseCondition_ArmorRepairDisable = 20,
	ItemUseCondition_UnsupportedArmorType = 21,
	NoArmor = 22,
	NoHelmet = 23,
	HealthStateGood = 24,
	NoBleeding = 25,
	NoFracture = 26,
	NotEnoughDurability = 27,
	NotEnoughDurabilityToCureBody = 28,
	ItemIsBeingUsed = 29,
	CharacterCantUse = 30,
	Burden = 31,
	TargetWeaponNotFound = 32,
	TargetWeaponNotMatch = 33,
	UnequipAmmoSpaceNotEngouht = 34,
	ItemUseCondition_InvalidLocation_UpBlock = 35,
	ItemUseCondition_InvalidLocation_NotFlat = 36,
	ItemUseCondition_ForbiddenInCollectionRoom = 37,
	EItemUseCondition_MAX = 38
};

// Object: Enum DFMGlobalDefines.EUseItemAddBuffFunctionType
enum class EUseItemAddBuffFunctionType : uint8_t
{
	None = 0,
	Bleeding = 1,
	NoPainRelief = 2,
	EUseItemAddBuffFunctionType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EUseItemFunctionType
enum class EUseItemFunctionType : uint8_t
{
	None = 0,
	HP = 1,
	BodyArmor = 2,
	HelmetArmor = 3,
	Health = 4,
	BUFF = 5,
	Bleeding = 10,
	Fracture = 11,
	PartHealth = 12,
	EUseItemFunctionType_MAX = 13
};

// Object: Enum DFMGlobalDefines.ERealItemSource
enum class ERealItemSource : uint8_t
{
	None = 0,
	PlayerSelf = 1,
	PlayerTeammate = 2,
	PlayerEnemy = 3,
	Pickup = 4,
	NormalAI = 5,
	LabAI = 6,
	SceneBox = 7,
	Other = 8,
	ERealItemSource_MAX = 9
};

// Object: Enum DFMGlobalDefines.ERawItemSource
enum class ERawItemSource : uint8_t
{
	None = 0,
	Player = 1,
	Pickup = 2,
	NormalAI = 3,
	LabAI = 4,
	SceneBox = 5,
	Other = 6,
	ERawItemSource_MAX = 7
};

// Object: Enum DFMGlobalDefines.EItemBindTypeForSettlement
enum class EItemBindTypeForSettlement : uint8_t
{
	BindingBinded = 0,
	BindingNotBind = 1,
	BindingTeammateBinded = 2,
	BindingTeammateNotBinded = 3,
	EItemBindTypeForSettlement_MAX = 4
};

// Object: Enum DFMGlobalDefines.EItemBindType
enum class EItemBindType : uint8_t
{
	BindingBinded = 0,
	BindingNotBind = 1,
	BindingTeammate = 2,
	EItemBindType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EItemViewStyleLayoutType
enum class EItemViewStyleLayoutType : uint8_t
{
	ItemViewStyleLayoutType_Default = 0,
	ItemViewStyleLayoutType_VehicleMainWeapon = 1,
	ItemViewStyleLayoutType_VehicleSecondWeapon = 2,
	ItemViewStyleLayoutType_VehicleEquip = 3,
	ItemViewStyleLayoutType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EItemViewStyleType
enum class EItemViewStyleType : uint8_t
{
	ItemViewStyleType_Default = 0,
	ItemViewStyleType_Large = 1,
	ItemViewStyleType_Small = 2,
	ItemViewStyleType_Special = 3,
	ItemViewStyleType_MAX = 4
};

// Object: Enum DFMGlobalDefines.ELineOrientation
enum class ELineOrientation : uint8_t
{
	HORIZONTAL = 0,
	VERTICAL = 1,
	ELineOrientation_MAX = 2
};

// Object: Enum DFMGlobalDefines.EMapInstancedIconLayerType
enum class EMapInstancedIconLayerType : uint8_t
{
	Base = 0,
	TeamMate = 1,
	LocalPlayer = 2,
	UnderBase = 3,
	HighBase = 4,
	EMapInstancedIconLayerType_MAX = 5
};

// Object: Enum DFMGlobalDefines.EMapIconSizeType
enum class EMapIconSizeType : uint8_t
{
	None = 0,
	BigIcon = 1,
	MiniIcon = 2,
	XSIcon = 3,
	BigIcon_Breakthrough = 4,
	BF_Vehicle = 5,
	BF_SceneWeapon = 6,
	BF_SkillDevice = 7,
	BF_AmmoBox = 8,
	TacticalMarker = 9,
	SectorAnchorMarker = 10,
	HardPointAnchorMarker = 11,
	EMapIconSizeType_MAX = 12
};

// Object: Enum DFMGlobalDefines.EMapPlayerIconState
enum class EMapPlayerIconState : uint8_t
{
	Normal = 0,
	ImpendingDeath = 1,
	Dead = 2,
	Offline = 3,
	Escaped = 4,
	Driving = 5,
	InGlitchVolume = 6,
	Count = 7,
	EMapPlayerIconState_MAX = 8
};

// Object: Enum DFMGlobalDefines.EDFMMapIconType
enum class EDFMMapIconType : uint8_t
{
	None = 0,
	Mission = 1,
	SOL_WeaponBlueprint = 2,
	SOL_Player = 3,
	Timeline_Shelling = 4,
	SOL_CommonRange = 5,
	SOL_PlayerDeath = 6,
	SOLEvent_Train_Locomotive = 7,
	SOLEvent_Train_Car = 8,
	SOLEvent_Train_Station = 9,
	SOLEvent_Train_Railway = 10,
	SOLEvacuation_HackPoint = 11,
	SOLEvacuation_PlayerExit = 12,
	AmmoBox = 13,
	SceneWeapon = 14,
	SOL_WeaponBlueprintStation = 15,
	SOL_AirDrop = 16,
	PlayerSignLine = 17,
	POILocationName = 18,
	SOL_PlayerExit = 19,
	SOL_Contract = 20,
	SOL_Door = 21,
	SOL_Quest = 22,
	SOL_QuestRange = 23,
	SOL_DeadBody = 24,
	BattleField_CapturePoint = 25,
	BattleField_Marker = 26,
	BattleField_Camp = 27,
	AblityDetector = 28,
	MotionDetector = 29,
	Vehicle = 30,
	QA_Marker = 31,
	SOL_Enemy = 32,
	SOL_TeammatePlayer = 33,
	Breakthrough_SectorAnchor = 34,
	HardPoint_SectorAnchor = 35,
	CaptureFlag_FlagAnchor = 36,
	CaptureFlag_FlagConvoyRange = 37,
	CaptureFlag_BattleFlag = 38,
	Common_Enemy = 39,
	Raid_MissionTarget = 40,
	Raid_CustomizeTarget = 41,
	Raid_Enemy = 42,
	SOL_EventMaker = 43,
	SOL_WishItemMaker = 44,
	SOL_ShopStation = 45,
	SOL_POIProduct = 46,
	SOL_BossLocation = 47,
	SOL_HighValueBox = 48,
	SOL_ContractObjection = 49,
	AILab_Character = 50,
	Breakthrough_SplineArea = 51,
	AbilityRobot = 52,
	AbilitySuppressionMine = 53,
	AbilityCruiseMissile = 54,
	AbilityNetSpider = 55,
	AbilitySentryHive = 56,
	AbilityIntelligentSmoke = 57,
	AbilitySonarDevice = 58,
	AbilityElectricDevice = 59,
	BattleField_Player = 60,
	BattleField_TeammatePlayer = 61,
	BattleField_PlayerDeath = 62,
	Breakthrough_SectorAnchorSplineArea = 63,
	Breakthrough_MaskSplineArea = 64,
	SOL_TeamMateSignOptimize = 65,
	Breakthrough_SupportIcon = 66,
	Breakthrough_SupportIcon_Commander = 67,
	SOL_PlayerStart = 68,
	SOLEvent_Intro = 69,
	Breakthrough_SupportPoint = 70,
	PlayerMarkingItem = 71,
	PlayerMarkingLocation = 72,
	Player2SignLine = 73,
	SOL_Zipline = 74,
	SOLEvent_Train_HighValueBox = 75,
	SOL_FloorVolume = 76,
	SOL_Interactor_Scouter = 77,
	SOL_Interactor_IronGauze = 78,
	PlayerMarkingUnitActor = 79,
	SOL_BigMapFloorVolume = 80,
	AbilityRebornFlag = 81,
	SOL_OB_Camera = 82,
	SOL_OB_Player = 83,
	AbilityADS = 84,
	SOL_Helicopter = 85,
	PakMachine = 86,
	SOL_AdjutantLocation = 87,
	MiniMapPOILocationName = 88,
	CountDownReleaseTrigger = 89,
	SOL_CommonRange2 = 90,
	BattleField_CommanderSign = 91,
	SOL_ExitTriggerMiniGame = 92,
	VehicleRadar = 93,
	SkillFixedWeaponWhiteModel = 94,
	SOL_DisposalBomb = 95,
	AIReportConflictZone = 96,
	CallAIActivityZone = 97,
	SOL_BraveGameMarker = 98,
	SectorRange = 99,
	Count = 100,
	EDFMMapIconType_MAX = 101
};

// Object: Enum DFMGlobalDefines.EMapFloorType
enum class EMapFloorType : uint8_t
{
	None = 0,
	Layer1 = 1,
	Layer2 = 2,
	Layer3 = 3,
	Layer4 = 4,
	Layer5 = 5,
	Layer6 = 6,
	Layer7 = 7,
	Layer8 = 8,
	Layer9 = 9,
	Layer10 = 10,
	EMapFloorType_MAX = 11
};

// Object: Enum DFMGlobalDefines.ESeamlessEnterOperateType
enum class ESeamlessEnterOperateType : uint8_t
{
	None = 0,
	TutorialHUD = 1,
	NormalHUD = 2,
	TutorialClick = 3,
	QuestPanel = 4,
	PlayerExit = 5,
	BlueprintPlunder = 6,
	BlueprintDevice = 7,
	Contract = 8,
	Quest = 9,
	Other = 10,
	SeamlessEnterStage_GetOn = 11,
	SeamlessEnterStage_PadShow = 12,
	SeamlessEnterStage_InteractionMap = 13,
	SeamlessEnterStage_ConnectDS = 14,
	SeamlessEnterStage_ConnectDSSuccess = 15,
	SeamlessEnterStage_LevelStreaming = 16,
	SeamlessEnterStage_LevelStreamingSuccess = 17,
	SeamlessEnterStage_HUDPreload = 18,
	SeamlessEnterStage_HUDPreloadSuccess = 19,
	SeamlessEnterStage_AllPlayerReady = 20,
	SeamlessEnterStage_Abseil = 21,
	SeamlessEnterStage_AbseilSuccess = 22,
	SeamlessEnterStage_Finish = 23,
	SeamlessEnterStage_Fail = 24,
	Max = 25
};

// Object: Enum DFMGlobalDefines.EBigMapOperateType
enum class EBigMapOperateType : uint8_t
{
	OpenBigMap = 0,
	CloseBigMap = 1,
	MarkEvacuationPoint = 2,
	MarkMapSign = 3,
	MarkBlueprintPlunder = 4,
	MarkContract = 5,
	SwitchInfoBtn_SupplyStation = 6,
	SwitchInfoBtn_UnlockPoint = 7,
	SwitchInfoBtn_Boss = 8,
	SwitchInfoBtn_POI = 9,
	UseQuestList = 10,
	UseWishList = 11,
	UseContractList = 12,
	UseSeasonQuestList = 13,
	EBigMapOperateType_MAX = 14
};

// Object: Enum DFMGlobalDefines.EMapSignExtraSyncType
enum class EMapSignExtraSyncType : uint8_t
{
	None = 0,
	Delete = 1,
	Location = 2,
	Icon = 3,
	MAX = 4
};

// Object: Enum DFMGlobalDefines.ESafeHouseIconGroundType
enum class ESafeHouseIconGroundType : uint8_t
{
	All = 0,
	Underground = 1,
	Overground = 2,
	ESafeHouseIconGroundType_MAX = 3
};

// Object: Enum DFMGlobalDefines.ESafeHouseIconMapType
enum class ESafeHouseIconMapType : uint8_t
{
	All = 0,
	MiniMap = 1,
	BigMap = 2,
	ESafeHouseIconMapType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EMapLocationPOIProductType
enum class EMapLocationPOIProductType : uint8_t
{
	None = 0,
	ElectricalApplication = 1,
	Entertainment = 2,
	Instrument = 3,
	BuildingMaterial = 4,
	Drink = 5,
	ElectronicComponent = 6,
	DailySupply = 7,
	Information = 8,
	Fabrication = 9,
	Fuel = 10,
	Medical = 11,
	Tool = 12,
	Food = 13,
	Gun = 14,
	Communication = 15,
	EMapLocationPOIProductType_MAX = 16
};

// Object: Enum DFMGlobalDefines.EMapLocationPOILevelType
enum class EMapLocationPOILevelType : uint8_t
{
	None = 0,
	POILevel1 = 1,
	POILevel2 = 2,
	EMapLocationPOILevelType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EMapLocationType
enum class EMapLocationType : uint8_t
{
	NormalPOI = 0,
	HighPOI = 1,
	HugePOI = 2,
	ShopStation = 3,
	POIProduct = 4,
	BossLocation = 5,
	HighValueBox = 6,
	Zipline = 7,
	Scouter = 8,
	IronGauze = 9,
	Count = 10,
	EMapLocationType_MAX = 11
};

// Object: Enum DFMGlobalDefines.EMapRotationType
enum class EMapRotationType : uint8_t
{
	None = 0,
	Clockwise = 1,
	CounterClockWise = 2,
	EMapRotationType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EVehicleType
enum class EVehicleType : uint8_t
{
	Car = 0,
	Tank = 1,
	Helicopter = 2,
	EVehicleType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EBattleFieldQuestType
enum class EBattleFieldQuestType : uint8_t
{
	EBattleFieldQuestType_None = 0,
	EBattleFieldQuestType_Armory = 1,
	EBattleFieldQuestType_AgentRecruitment = 2,
	EBattleFieldQuestType_AgentFile = 3,
	EBattleFieldQuestType_Agentbadge = 4,
	EBattleFieldQuestType_FirearmsMasterAppearance = 5,
	EBattleFieldQuestType_FirearmsAppearance = 6,
	EBattleFieldQuestType_OnlyInGame = 7,
	EBattleFieldQuestType_MAX = 8
};

// Object: Enum DFMGlobalDefines.EQuestType
enum class EQuestType : uint8_t
{
	ENone = 0,
	EContract_KillAI = 1,
	EContract_KillBoss = 2,
	EContract_C4 = 3,
	EContract_Interact = 4,
	EContract_DrillingSafe = 5,
	EContract_Benchmark = 6,
	EContract_JailBreak = 7,
	EContract_DisposalBomb = 8,
	EQuestType_MAX = 9
};

// Object: Enum DFMGlobalDefines.EQuestDialogActiveType
enum class EQuestDialogActiveType : uint8_t
{
	None = 0,
	OnQuestCompleted = 1,
	OnObjectiveCompleted = 2,
	OnObjectiveActivated = 3,
	OnObjectiveFailed = 4,
	OnEnterMatch = 5,
	OnReachProgressTarget = 6,
	OnContractCanceled = 7,
	OnObjectiveActivatedByPlunder = 8,
	EQuestDialogActiveType_MAX = 9
};

// Object: Enum DFMGlobalDefines.EQuestBigType
enum class EQuestBigType : uint8_t
{
	EQuestBigType_Quest = 0,
	EQuestBigType_Contract = 1,
	EQuestBigType_Season = 2,
	EQuestBigType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EQuestGoalForbiddenType
enum class EQuestGoalForbiddenType : uint8_t
{
	ECondition = 0,
	EForbidden = 1,
	EQuestGoalForbiddenType_MAX = 2
};

// Object: Enum DFMGlobalDefines.EFreeBuildRankSkillType
enum class EFreeBuildRankSkillType : uint8_t
{
	None = 0,
	CoastalDefenseArtillery = 1,
	AntiAircraftGuns = 2,
	Bunker = 3,
	EFreeBuildRankSkillType_MAX = 4
};

// Object: Enum DFMGlobalDefines.ECommanderRankSkillType
enum class ECommanderRankSkillType : uint8_t
{
	None = 0,
	HighValueAnchor = 1,
	HightThreatVehicle = 2,
	FastRedeploy = 3,
	AttackReform = 4,
	ECommanderRankSkillType_MAX = 5
};

// Object: Enum DFMGlobalDefines.ECommanderRankSkillCDChangeMode
enum class ECommanderRankSkillCDChangeMode : uint8_t
{
	Fixed = 0,
	DynamicBasedOnResult = 1,
	ECommanderRankSkillCDChangeMode_MAX = 2
};

// Object: Enum DFMGlobalDefines.ECommanderRankSkillScoreChangeMode
enum class ECommanderRankSkillScoreChangeMode : uint8_t
{
	Original = 0,
	DynamicBasedOnResult = 1,
	DynamicBasedOnResult_Fallback = 2,
	ECommanderRankSkillScoreChangeMode_MAX = 3
};

// Object: Enum DFMGlobalDefines.ERankSkillState
enum class ERankSkillState : uint8_t
{
	Open = 0,
	UnOpen = 1,
	SectorCantUse = 2,
	ERankSkillState_MAX = 3
};

// Object: Enum DFMGlobalDefines.ERankSkillType
enum class ERankSkillType : uint8_t
{
	None = 0,
	DropVehicle = 1,
	CommanderSkil = 2,
	FreeBuild = 3,
	ERankSkillType_MAX = 4
};

// Object: Enum DFMGlobalDefines.EReportMode
enum class EReportMode : uint8_t
{
	None = 0,
	ReportSol = 1,
	ReportMP = 2,
	Disabled = 3,
	EReportMode_MAX = 4
};

// Object: Enum DFMGlobalDefines.ESafeHouseDeviceType
enum class ESafeHouseDeviceType : uint8_t
{
	Production = 0,
	Functional = 1,
	Gameplay = 2,
	ESafeHouseDeviceType_MAX = 3
};

// Object: Enum DFMGlobalDefines.EServerType
enum class EServerType : uint8_t
{
	Default = 0,
	PreRelease = 1,
	EServerType_MAX = 2
};

// Object: Enum DFMGlobalDefines.EEaseMode
enum class EEaseMode : uint8_t
{
	LinearIn = 0,
	QuadEaseIn = 1,
	QuadEaseOut = 2,
	CubicEaseIn = 3,
	CubicEaseOut = 4,
	EEaseMode_MAX = 5
};

// Object: Enum DFMGlobalDefines.EScientistPhase
enum class EScientistPhase : uint8_t
{
	ENone = 0,
	One_Interrogation = 1,
	One_SOS = 2,
	One_MoveAndPerform = 3,
	One_require = 4,
	Two_PerformAndMove = 5,
	Two_Rappel = 6,
	Two_Move = 7,
	Four_MoveAndPerform = 8,
	Six_Hide = 9,
	EScientistPhase_MAX = 10
};

// Object: Enum DFMGlobalDefines.ESOLMapName
enum class ESOLMapName : uint8_t
{
	Forrest = 1,
	SpaceCenter = 2,
	Dam_Iris = 3,
	MAX = 4
};

// Object: Enum DFMGlobalDefines.EPriceDisplayOrder
enum class EPriceDisplayOrder : uint8_t
{
	None = 0,
	NumAbbr = 1,
	AbbrNum = 2,
	NumSymbol = 3,
	SymbolNum = 4,
	NumSymbolAbbr = 5,
	NumAbbrSymbol = 6,
	SymbolNumAbbr = 7,
	SymbolAbbrNum = 8,
	AbbrNumSymbol = 9,
	AbbrSymbolNum = 10,
	EPriceDisplayOrder_MAX = 11
};

// Object: Enum DFMGlobalDefines.EPlayerStatePC
enum class EPlayerStatePC : uint8_t
{
	Normal = 0,
	Dying = 1,
	BeingRescue = 2,
	DeadWaitingRevive = 3,
	BeingRevive = 4,
	Escaped = 5,
	DeadCompletely = 6,
	QuitGame = 7,
	MaxCount = 8,
	EPlayerStatePC_MAX = 9
};

// Object: Enum DFMGlobalDefines.EPlayerRelationShipType
enum class EPlayerRelationShipType : uint8_t
{
	E_None = 0,
	E_Self = 1,
	E_Teammate = 2,
	E_SameCamp = 3,
	E_Enemy = 4,
	E_MAX = 5
};

// Object: Enum DFMGlobalDefines.ETeammateState
enum class ETeammateState : uint8_t
{
	ETeammateState_Normal = 0,
	ETeammateState_Dying = 1,
	ETeammateState_WaitForResurrection = 2,
	ETeammateState_Dead = 3,
	ETeammateState_Disconnect = 4,
	ETeammateState_Withdrawal = 5,
	ETeammateState_QuitGame = 6,
	ETeammateState_BeingReviveFromDying = 7,
	ETeammateState_BeingReviveFromFirstDeath = 8,
	ETeammateState_Count = 9,
	ETeammateState_MAX = 10
};

// Object: Enum DFMGlobalDefines.EMessagetype
enum class EMessagetype : uint8_t
{
	ETeamInvite = 0,
	ETeamApply = 1,
	EMessagetype_MAX = 2
};

// Object: Enum DFMGlobalDefines.EVehiclePartStateChangeType
enum class EVehiclePartStateChangeType : uint8_t
{
	None = 0,
	Broken = 1,
	Recovered = 2,
	EVehiclePartStateChangeType_MAX = 3
};

// Object: ScriptStruct DFMGlobalDefines.HighValueBoxInfo
// Size: 0x60 (Inherited: 0x0)
struct FHighValueBoxInfo
{
	uint8_t bHighValueBox : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EHighValueBoxType HighValueBoxType; // 0x1(0x1)
	ESOLUIIconType IconType; // 0x2(0x1)
	ESOLUIColorType ColorType; // 0x3(0x1)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FText HighValueBoxName; // 0x8(0x18)
	struct FText Desc; // 0x20(0x18)
	struct TArray<struct FName> HighValueItemList; // 0x38(0x10)
	struct FName IconName; // 0x48(0x8)
	struct FVector DSLoc; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ItemArchiveInfo
// Size: 0x248 (Inherited: 0x0)
struct FItemArchiveInfo
{
	struct FString CharacterName; // 0x0(0x10)
	struct FName CharacterAvatarID; // 0x10(0x8)
	int32_t CharacterAvatarLevel; // 0x18(0x4)
	EArchiveAscription Ascription; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	int32_t MajorRankID; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FKillInfo KillInfo; // 0x28(0x1A8)
	EDeadType BeKilledType; // 0x1D0(0x1)
	uint8_t Pad_0x1D1[0x7]; // 0x1D1(0x7)
	struct FText KillerName; // 0x1D8(0x18)
	uint64_t KillerWeaponID; // 0x1F0(0x8)
	int64_t KillTimestamp; // 0x1F8(0x8)
	uint64_t BeKilledUin; // 0x200(0x8)
	uint64_t KillerAmmoId; // 0x208(0x8)
	int32_t KillerAmmoLevel; // 0x210(0x4)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	uint64_t HolderUin; // 0x218(0x8)
	uint8_t bBornInCurrentRoom : 1; // 0x220(0x1), Mask(0x1)
	uint8_t BitPad_0x220_1 : 7; // 0x220(0x1)
	uint8_t Pad_0x221[0x7]; // 0x221(0x7)
	uint64_t MapID; // 0x228(0x8)
	int32_t CustomID; // 0x230(0x4)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)
	int64_t EquipmentValue; // 0x238(0x8)
	uint8_t CNKillTimestampUseUTC0 : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x7]; // 0x241(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.KeyChainSpaceInfo
// Size: 0x28 (Inherited: 0x0)
struct FKeyChainSpaceInfo
{
	uint8_t Index; // 0x0(0x1)
	uint8_t Length; // 0x1(0x1)
	uint8_t BaseCount; // 0x2(0x1)
	uint8_t Pad_0x3[0x5]; // 0x3(0x5)
	struct TArray<uint8_t> TotalLocked; // 0x8(0x10)
	struct TArray<uint8_t> Unlocked; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ItemExtraRecord
// Size: 0x18 (Inherited: 0x0)
struct FItemExtraRecord
{
	struct FString OwnerName; // 0x0(0x10)
	int64_t Timestamp; // 0x10(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ArmorLevelConfig
// Size: 0x28 (Inherited: 0x0)
struct FArmorLevelConfig
{
	EBaseArmorType BaseArmorType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t GlobalArmorLevel; // 0x4(0x4)
	struct TArray<struct FArmorPartLevelConfig> PartNames; // 0x8(0x10)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ArmorPartLevelConfig
// Size: 0x8 (Inherited: 0x0)
struct FArmorPartLevelConfig
{
	EArmorPartType PartType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t ArmorLevel; // 0x4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SOLEventProgressDataItem
// Size: 0x48 (Inherited: 0x0)
struct FSOLEventProgressDataItem
{
	ESOLEventProgressType ProgressType; // 0x0(0x1)
	uint8_t bShow : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FText Title; // 0x8(0x18)
	struct FSoftObjectPath SoftObjectPath; // 0x20(0x18)
	uint8_t bIsClockWise : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct AActor* BlueprintPlunderActor; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HighlightMomentItemInfo
// Size: 0x20 (Inherited: 0x0)
struct FHighlightMomentItemInfo
{
	uint64_t ItemGid; // 0x0(0x8)
	int32_t SourceType; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString SourceName; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LootSearchInfo
// Size: 0x28 (Inherited: 0x0)
struct FLootSearchInfo
{
	uint8_t bHasPreSearch : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float BaseItemSearchTime; // 0x4(0x4)
	struct AActor* RefInteractor; // 0x8(0x8)
	struct TArray<struct FItemSearchInfo> AllItemSearchInfos; // 0x10(0x10)
	float TotalSearchTime; // 0x20(0x4)
	uint8_t bIsFastLoot : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.ItemSearchInfo
// Size: 0x20 (Inherited: 0x0)
struct FItemSearchInfo
{
	uint64_t ItemID; // 0x0(0x8)
	uint8_t bHasBeenSearched : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x17]; // 0x9(0x17)
};

// Object: ScriptStruct DFMGlobalDefines.ContractReward
// Size: 0x18 (Inherited: 0x0)
struct FContractReward
{
	int32_t ContractID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int64_t> ContractProps; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LootingStateParam
// Size: 0x38 (Inherited: 0x0)
struct FLootingStateParam
{
	int64_t CmdGid; // 0x0(0x8)
	EPlayerLootingState LootingState; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UObject* LootContainer; // 0x10(0x8)
	uint8_t bIsInteractingWithPickups : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	uint64_t HighValueItemGid; // 0x20(0x8)
	uint8_t bIsSpecialInspect : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bIsRedBag : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t bIsFootballInspect : 1; // 0x2A(0x1), Mask(0x1)
	uint8_t BitPad_0x2A_1 : 7; // 0x2A(0x1)
	uint8_t bIsFootballThrow : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t BitPad_0x2B_1 : 7; // 0x2B(0x1)
	uint8_t bIsFootballGate : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	EAllowOutGameTeammatesOBInventory AllowOutGameTeammatesOBInventory; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.HitAudioConfig
// Size: 0xA0 (Inherited: 0x0)
struct FHitAudioConfig
{
	struct TSoftObjectPtr<UGPAudioEventAsset> FPPBeHited_2DAudioPath; // 0x0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> TPPBeHited_2DAudioPath; // 0x28(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BeHitFromFPP_2DAudioPath; // 0x50(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> FPPBeHited_3DAudioPath; // 0x78(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.PlatformScale
// Size: 0xC (Inherited: 0x0)
struct FPlatformScale
{
	EGPScreenAdaptType ScreenAdaptType; // 0x0(0x1)
	EStretch Stretch; // 0x1(0x1)
	EStretchDirection StretchDirection; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float UserSpecifiedScale; // 0x4(0x4)
	uint8_t IgnoreInheritedScale : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.SOLQuestObjectiveTipData
// Size: 0xA8 (Inherited: 0x0)
struct FSOLQuestObjectiveTipData
{
	uint8_t IsUpdateObjective : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString DescText; // 0x8(0x10)
	struct FString BriefDescText; // 0x18(0x10)
	struct FString ProgressText; // 0x28(0x10)
	ESOLQuestObjectionState ObjState; // 0x38(0x1)
	EGoalType ObjType; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	int64_t QuestObjectiveID; // 0x40(0x8)
	uint8_t bTimerStart : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float TimeLimitSec; // 0x4C(0x4)
	float TimeoutSec; // 0x50(0x4)
	uint8_t bQuestIsActivity : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
	int32_t QuestID; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString QuestName; // 0x60(0x10)
	struct FText QuestDesc; // 0x70(0x18)
	ESOLQuestState QuestState; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	float QuestReward; // 0x8C(0x4)
	struct FText ForbbidenQuestConditionDes; // 0x90(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MeritObtainRow
// Size: 0x50 (Inherited: 0x10)
struct FMeritObtainRow : FDescRowBase
{
	EMeritObtainType MeritObtainType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText MeritObtainName; // 0x18(0x18)
	float HitDamage; // 0x30(0x4)
	uint8_t IsAssist : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t IsHitHead : 1; // 0x35(0x1), Mask(0x1)
	uint8_t BitPad_0x35_1 : 7; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	uint32_t ContinueKillNum; // 0x38(0x4)
	float ContinueKillCD; // 0x3C(0x4)
	float LongDistanceKill; // 0x40(0x4)
	float ShortDistanceKill; // 0x44(0x4)
	float Merit; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AbilityPlayMontageAnimUnit
// Size: 0x28 (Inherited: 0x0)
struct FAbilityPlayMontageAnimUnit
{
	struct UAnimSequenceBase* AnimSeqStand; // 0x0(0x8)
	struct UAnimSequenceBase* AnimSeqCrouch; // 0x8(0x8)
	struct UAnimSequenceBase* AnimSeqProne; // 0x10(0x8)
	struct UAnimSequenceBase* AnimSeqSliding; // 0x18(0x8)
	struct UAnimMontage* AnimMontage; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.AbilityPlayMontageAnimUnitSet
// Size: 0xF0 (Inherited: 0x0)
struct FAbilityPlayMontageAnimUnitSet
{
	struct FAbilityPlayMontageAnimUnit FPP_Start; // 0x0(0x28)
	struct FAbilityPlayMontageAnimUnit TPP_Start; // 0x28(0x28)
	struct FAbilityPlayMontageAnimUnit FPP_Loop; // 0x50(0x28)
	struct FAbilityPlayMontageAnimUnit TPP_Loop; // 0x78(0x28)
	struct FAbilityPlayMontageAnimUnit FPP_End; // 0xA0(0x28)
	struct FAbilityPlayMontageAnimUnit TPP_End; // 0xC8(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.AbilityPlayMontageAnimUnitSoft
// Size: 0x118 (Inherited: 0x0)
struct FAbilityPlayMontageAnimUnitSoft
{
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqStand; // 0x0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqCrouch; // 0x28(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqProne; // 0x50(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqSliding; // 0x78(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqSwim; // 0xA0(0x28)
	struct TSoftObjectPtr<UAnimMontage> AnimMontage; // 0xC8(0x28)
	struct TSoftObjectPtr<UAnimMontage> AnimProneMontage; // 0xF0(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.AbilityPlayMontageAnimUnitSetSoft
// Size: 0x690 (Inherited: 0x0)
struct FAbilityPlayMontageAnimUnitSetSoft
{
	struct FAbilityPlayMontageAnimUnitSoft FPP_Start; // 0x0(0x118)
	struct FAbilityPlayMontageAnimUnitSoft TPP_Start; // 0x118(0x118)
	struct FAbilityPlayMontageAnimUnitSoft FPP_Loop; // 0x230(0x118)
	struct FAbilityPlayMontageAnimUnitSoft TPP_Loop; // 0x348(0x118)
	struct FAbilityPlayMontageAnimUnitSoft FPP_End; // 0x460(0x118)
	struct FAbilityPlayMontageAnimUnitSoft TPP_End; // 0x578(0x118)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterPlayMontageData
// Size: 0x780 (Inherited: 0x1)
struct FCharacterPlayMontageData : FAbilityFragment
{
	struct FAbilityPlayMontageAnimUnitSet AnimUnitSet; // 0x0(0xF0)
	struct FAbilityPlayMontageAnimUnitSetSoft AnimUnitSetSoft; // 0xF0(0x690)
};

// Object: ScriptStruct DFMGlobalDefines.MapInstancedIconData
// Size: 0x50 (Inherited: 0x0)
struct FMapInstancedIconData
{
	struct FName InstancedIconName; // 0x0(0x8)
	struct FVector2D InstancedIconLocation; // 0x8(0x8)
	float InstancedIconScale; // 0x10(0x4)
	float InstancedIconRotate; // 0x14(0x4)
	struct FLinearColor InstancedIconColor; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector4 IconSizeUVAndStartUV; // 0x30(0x10)
	EMapInstancedIconLayerType IconLayerType; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
};

// Object: ScriptStruct DFMGlobalDefines.BuffActionConfig
// Size: 0xC (Inherited: 0x0)
struct FBuffActionConfig
{
	EBuffActionTriggerType TriggerType; // 0x0(0x1)
	EBuffAction BuffAction; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float Param01; // 0x4(0x4)
	float Param02; // 0x8(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterHeroResourceAttachMeshPartData
// Size: 0x150 (Inherited: 0x0)
struct FCharacterHeroResourceAttachMeshPartData
{
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath; // 0x0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath3P; // 0x28(0x28)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPathUI; // 0x50(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeq; // 0x78(0x28)
	EWeaponSkinRenderMode SkinRenderMode; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterials; // 0xA8(0x50)
	EWeaponSkinRenderMode SkinRenderMode3P; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterials3P; // 0x100(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.SkillInspectAttachMesh
// Size: 0x30 (Inherited: 0x0)
struct FSkillInspectAttachMesh
{
	struct FName ItemKey; // 0x0(0x8)
	struct FName ItemKeyMobile; // 0x8(0x8)
	struct FName SocketName; // 0x10(0x8)
	struct FVector LocationOffset; // 0x18(0xC)
	struct FRotator RotationOffset; // 0x24(0xC)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterHeroResourceAttachMeshData
// Size: 0x370 (Inherited: 0x10)
struct FCharacterHeroResourceAttachMeshData : FDescRowBase
{
	struct FName ResourceID; // 0x10(0x8)
	uint64_t AvatarID; // 0x18(0x8)
	int32_t SkinId; // 0x20(0x4)
	int32_t PakSkillID; // 0x24(0x4)
	int32_t SkillId; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath; // 0x30(0x28)
	struct FName SocketNameOverride; // 0x58(0x8)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath3P; // 0x60(0x28)
	struct FName SocketNameOverride3P; // 0x88(0x8)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPathUI; // 0x90(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeq; // 0xB8(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeq3P; // 0xE0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeq3P_Prone; // 0x108(0x28)
	EWeaponSkinRenderMode SkinRenderMode; // 0x130(0x1)
	uint8_t Pad_0x131[0x7]; // 0x131(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterials; // 0x138(0x50)
	EWeaponSkinRenderMode SkinRenderMode3P; // 0x188(0x1)
	uint8_t Pad_0x189[0x7]; // 0x189(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterials3P; // 0x190(0x50)
	uint8_t bUseWeaponPart : 1; // 0x1E0(0x1), Mask(0x1)
	uint8_t BitPad_0x1E0_1 : 7; // 0x1E0(0x1)
	uint8_t Pad_0x1E1[0x7]; // 0x1E1(0x7)
	struct TMap<struct FName, struct FCharacterHeroResourceAttachMeshPartData> PartMap; // 0x1E8(0x50)
	uint64_t SkillInspectAnimID; // 0x238(0x8)
	uint64_t SkillInspectWeaponAnimID; // 0x240(0x8)
	struct TSoftClassPtr<struct UAnimInstance*> ABP_AnimInstClass; // 0x248(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> ABP_AnimInstClass_3P; // 0x270(0x28)
	uint8_t bThrowAnim : 1; // 0x298(0x1), Mask(0x1)
	uint8_t BitPad_0x298_1 : 7; // 0x298(0x1)
	uint8_t Pad_0x299[0x7]; // 0x299(0x7)
	struct TMap<int32_t, int32_t> MeleeComboNumberMap; // 0x2A0(0x50)
	struct TMap<int32_t, struct FSkillInspectAttachMesh> InspectAttachMeshMap; // 0x2F0(0x50)
	struct TArray<uint64_t> OverideAnimids; // 0x340(0x10)
	uint8_t bIsDoubleHandWeaponOverride : 1; // 0x350(0x1), Mask(0x1)
	uint8_t BitPad_0x350_1 : 7; // 0x350(0x1)
	uint8_t bIsDoubleHandAnimOverride : 1; // 0x351(0x1), Mask(0x1)
	uint8_t BitPad_0x351_1 : 7; // 0x351(0x1)
	uint8_t bSprintRightHandOverride : 1; // 0x352(0x1), Mask(0x1)
	uint8_t BitPad_0x352_1 : 7; // 0x352(0x1)
	uint8_t Pad_0x353[0x1]; // 0x353(0x1)
	float EquipInspectTime; // 0x354(0x4)
	uint8_t bAutoInspect : 1; // 0x358(0x1), Mask(0x1)
	uint8_t BitPad_0x358_1 : 7; // 0x358(0x1)
	uint8_t Pad_0x359[0x7]; // 0x359(0x7)
	struct TArray<struct TSoftObjectPtr<UObject>> RelativeResource; // 0x360(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterHeroResourceAnim
// Size: 0x788 (Inherited: 0x780)
struct FCharacterHeroResourceAnim : FCharacterPlayMontageData
{
	uint8_t Pad_0x780[0x8]; // 0x780(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterHeroResourceAnimData
// Size: 0x7C0 (Inherited: 0x10)
struct FCharacterHeroResourceAnimData : FDescRowBase
{
	struct FName ResourceID; // 0x10(0x8)
	struct FName AvatarID; // 0x18(0x8)
	int32_t PakSkillID; // 0x20(0x4)
	int32_t WeaponType; // 0x24(0x4)
	struct FName InSpectItemId; // 0x28(0x8)
	EHeroItemFashionQuality Quality; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct FCharacterHeroResourceAnim AnimData; // 0x38(0x788)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterHeroResourceData
// Size: 0x40 (Inherited: 0x10)
struct FCharacterHeroResourceData : FDescRowBase
{
	struct FName ResourceID; // 0x10(0x8)
	struct FName AvatarID; // 0x18(0x8)
	struct FName ResourcePath; // 0x20(0x8)
	struct FName Desc; // 0x28(0x8)
	struct FName InSpectItemId; // 0x30(0x8)
	EHeroItemFashionQuality Quality; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.AbilityDataInfo
// Size: 0xA0 (Inherited: 0x10)
struct FAbilityDataInfo : FDescRowBase
{
	int64_t AbilityID; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	struct FSoftObjectPath ICON; // 0x48(0x18)
	struct TArray<uint32_t> BuffIdArray; // 0x60(0x10)
	struct TArray<uint64_t> SpecialItemIdArray; // 0x70(0x10)
	struct TArray<uint32_t> SpecialItemCountArray; // 0x80(0x10)
	struct TArray<uint32_t> SpecialItemSlotArray; // 0x90(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LevelExpansion
// Size: 0x88 (Inherited: 0x10)
struct FLevelExpansion : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t Mode; // 0x14(0x4)
	int32_t Level; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText Title; // 0x20(0x18)
	struct FText Name; // 0x38(0x18)
	struct FText Desc; // 0x50(0x18)
	int32_t IsIcon; // 0x68(0x4)
	int32_t IsMap; // 0x6C(0x4)
	struct FName Info; // 0x70(0x8)
	int32_t IsReward; // 0x78(0x4)
	int32_t IsBind; // 0x7C(0x4)
	int32_t Num; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GrowthProp
// Size: 0x78 (Inherited: 0x10)
struct FGrowthProp : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText PropType; // 0x18(0x18)
	struct FText PropName; // 0x30(0x18)
	struct FText PropDesc; // 0x48(0x18)
	struct FName Prop; // 0x60(0x8)
	int32_t IsReward; // 0x68(0x4)
	int32_t IsBind; // 0x6C(0x4)
	int32_t Num; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BeaconfireRewards
// Size: 0x28 (Inherited: 0x10)
struct FBeaconfireRewards : FDescRowBase
{
	int32_t ActionLevel; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<int32_t> PropArray; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AccountRewards
// Size: 0x28 (Inherited: 0x10)
struct FAccountRewards : FDescRowBase
{
	int32_t AccountLevel; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<int32_t> PropArray; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AccountLevel
// Size: 0x18 (Inherited: 0x10)
struct FAccountLevel : FDescRowBase
{
	int32_t Level; // 0x10(0x4)
	int32_t Exp; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AccountPunishedData
// Size: 0x30 (Inherited: 0x10)
struct FAccountPunishedData : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FText Message; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.Achievement
// Size: 0xD8 (Inherited: 0x8)
struct FAchievement : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct TArray<int32_t> Model; // 0x40(0x10)
	int32_t Category; // 0x50(0x4)
	int32_t Level; // 0x54(0x4)
	struct TArray<int64_t> MissionID1; // 0x58(0x10)
	struct TArray<int64_t> MissionID2; // 0x68(0x10)
	struct TArray<int64_t> MissionID3; // 0x78(0x10)
	int32_t Order; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FText Tips; // 0x90(0x18)
	struct FSoftObjectPath IconPath; // 0xA8(0x18)
	int32_t AIuse; // 0xC0(0x4)
	int32_t Type; // 0xC4(0x4)
	uint8_t IsHighLight : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x3]; // 0xC9(0x3)
	int32_t IsEnable; // 0xCC(0x4)
	int32_t Season; // 0xD0(0x4)
	int32_t ShowType; // 0xD4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AchievementSeries
// Size: 0x68 (Inherited: 0x10)
struct FAchievementSeries : FDescRowBase
{
	int64_t SeriesId; // 0x10(0x8)
	struct FText SeriesName; // 0x18(0x18)
	int64_t SeriesType; // 0x30(0x8)
	int64_t SeriesOrder; // 0x38(0x8)
	struct TArray<uint64_t> AchievementId; // 0x40(0x10)
	int64_t RewarditemID; // 0x50(0x8)
	struct FString SeriesPic; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StatisticsEscapeGoalConditionRow
// Size: 0x40 (Inherited: 0x10)
struct FStatisticsEscapeGoalConditionRow : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t GainValue; // 0x18(0x8)
	int32_t EscapeEventType; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<uint64_t> PlayerExitIdList; // 0x28(0x10)
	uint8_t bJailBreak : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.DynamicRequestLevelGroupRow
// Size: 0x40 (Inherited: 0x10)
struct FDynamicRequestLevelGroupRow : FDescRowBase
{
	struct FName DRLGroupID; // 0x10(0x8)
	struct TArray<struct FSoftObjectPath> levelPaths_HD; // 0x18(0x10)
	struct TArray<struct FSoftObjectPath> levelPaths; // 0x28(0x10)
	uint8_t bBuildNav : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.StatisticsUseSkillGoalConditionRow
// Size: 0x88 (Inherited: 0x8)
struct FStatisticsUseSkillGoalConditionRow : FTableRowBase
{
	int32_t ConditionID; // 0x8(0x4)
	uint32_t SkillId; // 0xC(0x4)
	struct TArray<uint32_t> SkillIdExArr; // 0x10(0x10)
	uint8_t SkillEvent; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	uint32_t CustomSkillEvent; // 0x24(0x4)
	uint8_t bOnce : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t OnceRequiredCount; // 0x2C(0x4)
	uint8_t TargetType; // 0x30(0x1)
	uint8_t CampType; // 0x31(0x1)
	uint8_t bInArea : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)
	struct TArray<uint32_t> BuffIdArr; // 0x38(0x10)
	struct TArray<uint32_t> TargetBuffIdArr; // 0x48(0x10)
	uint8_t bForbidSelfCoverBuff : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct TArray<uint64_t> AttackerValueIdArr; // 0x60(0x10)
	float ConsequentTimeLimit; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct TArray<float> FloatConditionArr; // 0x78(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponSkinRewardRow
// Size: 0x48 (Inherited: 0x10)
struct FWeaponSkinRewardRow : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	uint64_t GunSkinRewards; // 0x18(0x8)
	uint64_t SkinPatternID; // 0x20(0x8)
	uint64_t BFConnectionID1; // 0x28(0x8)
	uint64_t BFConnectionID2; // 0x30(0x8)
	uint64_t SOLConnectionID1; // 0x38(0x8)
	uint64_t SOLConnectionID2; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.StatisticsInteractGoalConditionRow
// Size: 0x68 (Inherited: 0x10)
struct FStatisticsInteractGoalConditionRow : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	uint8_t InteractorType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TArray<struct FName> InteractorSecondTypeNameArr; // 0x18(0x10)
	struct FString ExParams; // 0x28(0x10)
	uint8_t bSpecifyOne : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bInArea : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bFirstInteract_All : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t bFirstInteract_Self : 1; // 0x3B(0x1), Mask(0x1)
	uint8_t BitPad_0x3B_1 : 7; // 0x3B(0x1)
	uint8_t bNoRepeated : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct TArray<uint64_t> ValidExpertIDList; // 0x40(0x10)
	int32_t ItemMinimumQuality; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	uint64_t ConsumeItemID; // 0x58(0x8)
	uint32_t ConsumeItemCount; // 0x60(0x4)
	uint32_t ConsumeItemTimes; // 0x64(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.StatisticsTimeLimitGoalConditionRow
// Size: 0x28 (Inherited: 0x10)
struct FStatisticsTimeLimitGoalConditionRow : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t TargetGoalID; // 0x18(0x8)
	int32_t TimeLimit; // 0x20(0x4)
	uint8_t bIsOnlyCanCompleteOne : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.StatisticsDamageGoalConditionRow
// Size: 0x158 (Inherited: 0x10)
struct FStatisticsDamageGoalConditionRow : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	uint8_t TargetType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TArray<struct FString> TargetCampArr; // 0x18(0x10)
	struct TArray<struct FString> TargetTagArr; // 0x28(0x10)
	struct TArray<struct FString> AITargetNameClass; // 0x38(0x10)
	struct TArray<EInGameBattleClassType> BedamagerBattleClassTypeList; // 0x48(0x10)
	struct TArray<int64_t> BedamagerExpertIDList; // 0x58(0x10)
	struct TArray<EInGameBattleClassType> DamagerBattleClassTypeList; // 0x68(0x10)
	struct TArray<int64_t> DamagerExpertIDList; // 0x78(0x10)
	struct TArray<uint32_t> DamageBuffArr; // 0x88(0x10)
	uint8_t MustVehicleDamage : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t DriverOrPassenger; // 0x99(0x1)
	uint8_t Pad_0x9A[0x6]; // 0x9A(0x6)
	struct TArray<int32_t> DamageVehicleIDArr; // 0xA0(0x10)
	float Distance; // 0xB0(0x4)
	uint8_t IsInsideDistance : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t bInArea : 1; // 0xB5(0x1), Mask(0x1)
	uint8_t BitPad_0xB5_1 : 7; // 0xB5(0x1)
	uint8_t IsComplexRule_Weapon : 1; // 0xB6(0x1), Mask(0x1)
	uint8_t BitPad_0xB6_1 : 7; // 0xB6(0x1)
	uint8_t Pad_0xB7[0x1]; // 0xB7(0x1)
	struct FString WeaponCondition; // 0xB8(0x10)
	struct FString UnWeaponCondition; // 0xC8(0x10)
	uint8_t IsComplexRule_Equipment : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct FString EquipmentCondition; // 0xE0(0x10)
	struct FString UnEquipmentCondition; // 0xF0(0x10)
	uint8_t IsComplexRule_GameItem : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
	struct FString GameItemCondition; // 0x108(0x10)
	struct FString UnGameItemCondition; // 0x118(0x10)
	struct TArray<uint32_t> BuffIdArr; // 0x128(0x10)
	struct TArray<uint32_t> TargetBuffIdArr; // 0x138(0x10)
	struct TArray<ELastHitPosition> HitPositions; // 0x148(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StatisticsSpecialKillGoalConditionRow
// Size: 0x28 (Inherited: 0x10)
struct FStatisticsSpecialKillGoalConditionRow : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	uint8_t TargetType; // 0x14(0x1)
	EStatisticsSpecialKillEvent SpecialKillEvent; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct TArray<uint32_t> WeaponTypeList; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StatisticsDefeatGoalConditionRow
// Size: 0x1B8 (Inherited: 0x10)
struct FStatisticsDefeatGoalConditionRow : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	uint8_t KillOrKnockdown; // 0x14(0x1)
	uint8_t TargetType; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct TArray<struct FString> TargetCampArr; // 0x18(0x10)
	struct TArray<struct FString> TargetTagArr; // 0x28(0x10)
	struct TArray<struct FString> AITargetNameClass; // 0x38(0x10)
	struct TArray<EInGameBattleClassType> BekillerBattleClassTypeList; // 0x48(0x10)
	struct TArray<int64_t> BekillerExpertIDList; // 0x58(0x10)
	struct TArray<EInGameBattleClassType> KillerBattleClassTypeList; // 0x68(0x10)
	struct TArray<int64_t> KillerExpertIDList; // 0x78(0x10)
	struct TArray<uint32_t> KillBuffArr; // 0x88(0x10)
	uint8_t MustVehicleKill : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t DriverOrPassenger; // 0x99(0x1)
	uint8_t Pad_0x9A[0x6]; // 0x9A(0x6)
	struct TArray<int32_t> KillVehicleIDArr; // 0xA0(0x10)
	uint8_t MustRevengeKill : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	float Distance; // 0xB4(0x4)
	uint8_t IsInsideDistance : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t bInArea : 1; // 0xB9(0x1), Mask(0x1)
	uint8_t BitPad_0xB9_1 : 7; // 0xB9(0x1)
	uint8_t IsWeaponAiming; // 0xBA(0x1)
	uint8_t LimitedMagazineNum; // 0xBB(0x1)
	uint8_t IsComplexRule_Weapon : 1; // 0xBC(0x1), Mask(0x1)
	uint8_t BitPad_0xBC_1 : 7; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	struct FString WeaponCondition; // 0xC0(0x10)
	struct FString UnWeaponCondition; // 0xD0(0x10)
	uint8_t IsComplexRule_Equipment : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
	struct FString EquipmentCondition; // 0xE8(0x10)
	struct FString UnEquipmentCondition; // 0xF8(0x10)
	uint8_t IsComplexRule_GameItem : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct FString GameItemCondition; // 0x110(0x10)
	struct FString UnGameItemCondition; // 0x120(0x10)
	struct TArray<uint32_t> BuffIdArr; // 0x130(0x10)
	struct TArray<uint32_t> TargetBuffIdArr; // 0x140(0x10)
	struct TArray<float> TargetBuffTimeRequireArr; // 0x150(0x10)
	struct TArray<ELastHitPosition> HitPositions; // 0x160(0x10)
	struct TArray<uint8_t> TeamMemberNumArr; // 0x170(0x10)
	int32_t EquipmentPriceTargetType; // 0x180(0x4)
	uint8_t MustMoreThan : 1; // 0x184(0x1), Mask(0x1)
	uint8_t BitPad_0x184_1 : 7; // 0x184(0x1)
	uint8_t Pad_0x185[0x3]; // 0x185(0x3)
	int32_t TotalEquipPrice; // 0x188(0x4)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct TArray<uint64_t> AmmoItemArray; // 0x190(0x10)
	struct TArray<int32_t> EquipmentPriceGap; // 0x1A0(0x10)
	int32_t RankMatchScore; // 0x1B0(0x4)
	uint8_t Pad_0x1B4[0x4]; // 0x1B4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityCommonGoalConditionRow
// Size: 0x28 (Inherited: 0x10)
struct FActivityCommonGoalConditionRow : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	int32_t TimeLimit; // 0x14(0x4)
	struct TArray<struct FName> InAreaTags; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityGoalRow
// Size: 0x140 (Inherited: 0x10)
struct FActivityGoalRow : FDescRowBase
{
	int64_t GoalID; // 0x10(0x8)
	uint8_t GoalType; // 0x18(0x1)
	uint8_t IsComplexProp : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct FString Param1; // 0x20(0x10)
	struct FString Param2; // 0x30(0x10)
	struct FString param3; // 0x40(0x10)
	struct FString Param4; // 0x50(0x10)
	struct FText Remark; // 0x60(0x18)
	struct TArray<int32_t> ConditionIDArray; // 0x78(0x10)
	struct TArray<int64_t> ConditionGoalIDArray; // 0x88(0x10)
	struct TArray<uint64_t> ListParam; // 0x98(0x10)
	int32_t RequiredCount; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct FString IsAccumulativeTotal; // 0xB0(0x10)
	float TimeLimit; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct TArray<EInGameBattleClassType> BattleClassTypeList; // 0xC8(0x10)
	struct TArray<int64_t> ExpertIDList; // 0xD8(0x10)
	struct TArray<uint32_t> BuffIdArr; // 0xE8(0x10)
	struct TArray<uint32_t> MapID; // 0xF8(0x10)
	struct TArray<uint32_t> GameMode; // 0x108(0x10)
	struct TArray<uint32_t> GameRule; // 0x118(0x10)
	struct TArray<uint64_t> MatchModeId; // 0x128(0x10)
	int64_t SpecifyBossID; // 0x138(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderActivity
// Size: 0x50 (Inherited: 0x8)
struct FCommanderActivity : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int32_t Sequence; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Title; // 0x18(0x18)
	struct FText Content; // 0x30(0x18)
	struct FName Picture; // 0x48(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivitySBCNews
// Size: 0x60 (Inherited: 0x8)
struct FActivitySBCNews : FTableRowBase
{
	int64_t NewsID; // 0x8(0x8)
	int64_t ActivityId; // 0x10(0x8)
	struct FString Content; // 0x18(0x10)
	int64_t Sequence; // 0x28(0x8)
	int64_t Channel; // 0x30(0x8)
	int64_t IsIntro; // 0x38(0x8)
	struct FString Audio; // 0x40(0x10)
	struct FString SubtitleDuration; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.EventShe1CardShop
// Size: 0x20 (Inherited: 0x8)
struct FEventShe1CardShop : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t RewardItem; // 0x10(0x8)
	struct FName ImaAsset; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.EventShe1CardCards
// Size: 0x58 (Inherited: 0x8)
struct FEventShe1CardCards : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t Type; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	int64_t Weight; // 0x48(0x8)
	struct FName Asset; // 0x50(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ModuleTextLocalization
// Size: 0x38 (Inherited: 0x8)
struct FModuleTextLocalization : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t Module; // 0x10(0x8)
	struct FText TextLocalization; // 0x18(0x18)
	struct FName IconPath; // 0x30(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.EventTabOverride
// Size: 0x68 (Inherited: 0x8)
struct FEventTabOverride : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t TabID; // 0x10(0x8)
	struct FString StartDate; // 0x18(0x10)
	struct FString EndDate; // 0x28(0x10)
	int32_t Priority; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FText TabName; // 0x40(0x18)
	struct FString TabIcon; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.EventTabConfig
// Size: 0x68 (Inherited: 0x8)
struct FEventTabConfig : FTableRowBase
{
	int64_t TabID; // 0x8(0x8)
	struct FText TabName; // 0x10(0x18)
	struct FString TabIcon; // 0x28(0x10)
	int64_t TabWeight; // 0x38(0x8)
	int64_t TabPattern; // 0x40(0x8)
	int64_t IsAlive; // 0x48(0x8)
	int64_t ThemeID; // 0x50(0x8)
	struct FString TabBackground; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityEventMakeDrinkMix
// Size: 0x38 (Inherited: 0x8)
struct FActivityEventMakeDrinkMix : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t ActivityId; // 0x10(0x8)
	int64_t BaseDrinkId; // 0x18(0x8)
	int64_t Material1Id; // 0x20(0x8)
	int64_t Material2Id; // 0x28(0x8)
	int64_t DrinkId; // 0x30(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityQuestion
// Size: 0x90 (Inherited: 0x8)
struct FActivityQuestion : FTableRowBase
{
	int64_t GoalID; // 0x8(0x8)
	struct FText Question; // 0x10(0x18)
	int32_t Answer; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText Choice1; // 0x30(0x18)
	struct FText Choice2; // 0x48(0x18)
	struct FText Choice3; // 0x60(0x18)
	struct FText Choice4; // 0x78(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityTeachingManual
// Size: 0x38 (Inherited: 0x8)
struct FActivityTeachingManual : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText Text; // 0x10(0x18)
	struct FString Picture; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityThemeEventTech
// Size: 0x30 (Inherited: 0x8)
struct FActivityThemeEventTech : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText Name; // 0x10(0x18)
	int32_t IsCoreTech; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityConstRow
// Size: 0x20 (Inherited: 0x8)
struct FActivityConstRow : FTableRowBase
{
	int32_t ConstID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString Value; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityTaskRow
// Size: 0x80 (Inherited: 0x8)
struct FActivityTaskRow : FTableRowBase
{
	int64_t TaskID; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct TArray<int64_t> ObjectiveList; // 0x40(0x10)
	int64_t Reward1ID; // 0x50(0x8)
	int32_t Reward1Num; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	int64_t Reward2ID; // 0x60(0x8)
	int32_t Reward2Num; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	int64_t JumpId; // 0x70(0x8)
	int64_t ModeTag; // 0x78(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityRow
// Size: 0x78 (Inherited: 0x8)
struct FActivityRow : FTableRowBase
{
	int64_t ActivityId; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct FString Info1; // 0x40(0x10)
	int32_t ModeLeaning; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	int64_t RewardShowed1; // 0x58(0x8)
	int64_t RewardShowed2; // 0x60(0x8)
	int64_t RewardShowed3; // 0x68(0x8)
	int32_t TimeCountWay; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityDogTagCollectionSKU
// Size: 0x20 (Inherited: 0x8)
struct FActivityDogTagCollectionSKU : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FName URL; // 0x10(0x8)
	struct FName Asset; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityDogTagCollectionVOResource
// Size: 0x40 (Inherited: 0x8)
struct FActivityDogTagCollectionVOResource : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int32_t Case; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t Condition; // 0x18(0x8)
	int64_t VoResource; // 0x20(0x8)
	struct FText VoText; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityDogTagCollectionDogTagResource
// Size: 0x30 (Inherited: 0x8)
struct FActivityDogTagCollectionDogTagResource : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int32_t Position; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t Dogtagid; // 0x18(0x8)
	struct FName MainPagePath; // 0x20(0x8)
	struct FName Subpagepath; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityDogTagCollectionSkuResource
// Size: 0x28 (Inherited: 0x8)
struct FActivityDogTagCollectionSkuResource : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int32_t Position; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t Skuid; // 0x18(0x8)
	struct FName Path; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityEveDinnerCondition
// Size: 0x68 (Inherited: 0x8)
struct FActivityEveDinnerCondition : FTableRowBase
{
	int64_t ConditionID; // 0x8(0x8)
	int32_t Type; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString Variable1; // 0x18(0x10)
	struct FString Variable2; // 0x28(0x10)
	struct FString Variable3; // 0x38(0x10)
	struct FString Variable4; // 0x48(0x10)
	struct FString Variable5; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityEveDinnerInnerAnimation
// Size: 0x50 (Inherited: 0x8)
struct FActivityEveDinnerInnerAnimation : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t Group; // 0x10(0x8)
	int64_t Condition; // 0x18(0x8)
	float SelfDenyPossibility; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	int64_t Value; // 0x28(0x8)
	int64_t SpeakingSlot; // 0x30(0x8)
	struct FText Content; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityEveDinnerAnimation
// Size: 0x50 (Inherited: 0x8)
struct FActivityEveDinnerAnimation : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t Group; // 0x10(0x8)
	float Time; // 0x18(0x4)
	int32_t Type; // 0x1C(0x4)
	int64_t MainSlot; // 0x20(0x8)
	int64_t OtherSlot; // 0x28(0x8)
	struct FText Text; // 0x30(0x18)
	int32_t Emotion; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityEveDinnerCards
// Size: 0x80 (Inherited: 0x8)
struct FActivityEveDinnerCards : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int32_t Rarity; // 0x10(0x4)
	int32_t Type; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	struct FText Discription; // 0x30(0x18)
	int64_t Value; // 0x48(0x8)
	int64_t DrawWeight; // 0x50(0x8)
	struct FString DimensionValues; // 0x58(0x10)
	struct FString MilestoneValues; // 0x68(0x10)
	struct FName Asset; // 0x78(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityHomePage
// Size: 0x80 (Inherited: 0x8)
struct FActivityHomePage : FTableRowBase
{
	int64_t ActivityId; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FString Info1; // 0x28(0x10)
	int32_t Homepage; // 0x38(0x4)
	int32_t OrderWeight; // 0x3C(0x4)
	int32_t ScrollTime; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString StartTime; // 0x48(0x10)
	struct FString EndTime; // 0x58(0x10)
	int32_t JumpPageType; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString SpecialLabel; // 0x70(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerSubCondition
// Size: 0x68 (Inherited: 0x8)
struct FMorgenTowerSubCondition : FTableRowBase
{
	int64_t SubConditionID; // 0x8(0x8)
	int32_t SubConditionType; // 0x10(0x4)
	int32_t TargetAttribute; // 0x14(0x4)
	struct FString AttributeRange; // 0x18(0x10)
	int64_t ItemID; // 0x28(0x8)
	struct FString ItemInteractTime; // 0x30(0x10)
	int64_t SpecialPointID; // 0x40(0x8)
	struct FString SpecialPointInteractTime; // 0x48(0x10)
	int64_t LevelID; // 0x58(0x8)
	int64_t AnswerBranchID; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerCondition
// Size: 0x20 (Inherited: 0x8)
struct FMorgenTowerCondition : FTableRowBase
{
	int64_t ConditionID; // 0x8(0x8)
	struct FString SubConditionCombination; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerConstant
// Size: 0x20 (Inherited: 0x8)
struct FMorgenTowerConstant : FTableRowBase
{
	int64_t ConstantID; // 0x8(0x8)
	struct FString ConstantValue; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerCutScene
// Size: 0x40 (Inherited: 0x8)
struct FMorgenTowerCutScene : FTableRowBase
{
	int64_t LineID; // 0x8(0x8)
	int64_t ParagraphID; // 0x10(0x8)
	int64_t SceneID; // 0x18(0x8)
	int32_t Endurance; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText Content; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerDeathLines
// Size: 0x50 (Inherited: 0x8)
struct FMorgenTowerDeathLines : FTableRowBase
{
	int64_t LineID; // 0x8(0x8)
	struct FText LineTitle; // 0x10(0x18)
	struct FText LineDesc; // 0x28(0x18)
	int64_t Killer; // 0x40(0x8)
	int32_t EvacuateCondition; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerAttributeChange
// Size: 0x50 (Inherited: 0x8)
struct FMorgenTowerAttributeChange : FTableRowBase
{
	int64_t AttributeChangeID; // 0x8(0x8)
	int32_t ChangeType; // 0x10(0x4)
	int32_t HealthChangeWay; // 0x14(0x4)
	float HealthChangeValue; // 0x18(0x4)
	int32_t AttackChangeWay; // 0x1C(0x4)
	float AttackChangeValue; // 0x20(0x4)
	int32_t DefenseChangeWay; // 0x24(0x4)
	float DefenseChangeValue; // 0x28(0x4)
	int32_t HitProbChangeWay; // 0x2C(0x4)
	float HitProbChangeValue; // 0x30(0x4)
	int32_t ExpChangeWay; // 0x34(0x4)
	float ExpChangeValue; // 0x38(0x4)
	int32_t KeyChangeWay; // 0x3C(0x4)
	float KeyChangeValue; // 0x40(0x4)
	int32_t MoneyChangeWay; // 0x44(0x4)
	float MoneyChangeValue; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerSpine
// Size: 0x28 (Inherited: 0x8)
struct FMorgenTowerSpine : FTableRowBase
{
	int64_t SpineID; // 0x8(0x8)
	struct FName DirectoryAtalas; // 0x10(0x8)
	struct FName DirectorySkeleton; // 0x18(0x8)
	int32_t IsLoopRelax; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerAsset
// Size: 0x38 (Inherited: 0x8)
struct FMorgenTowerAsset : FTableRowBase
{
	int64_t AssetID; // 0x8(0x8)
	struct FName PCCDN; // 0x10(0x8)
	struct FName MobileCDN; // 0x18(0x8)
	struct FName PCDirectory; // 0x20(0x8)
	struct FName MobileDirectory; // 0x28(0x8)
	int32_t DownloadOrder; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerAnswerBranch
// Size: 0x88 (Inherited: 0x8)
struct FMorgenTowerAnswerBranch : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FText Text; // 0x10(0x18)
	int64_t NextLine; // 0x28(0x8)
	int64_t AttributeChangeCondition; // 0x30(0x8)
	int64_t AttributeChangeResult; // 0x38(0x8)
	int64_t ShowCondition; // 0x40(0x8)
	int64_t AvailableCondition; // 0x48(0x8)
	int32_t CycleType; // 0x50(0x4)
	int32_t ExpDeducted; // 0x54(0x4)
	struct FText Tip; // 0x58(0x18)
	struct FText ConditionNotMetTip; // 0x70(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerDialogueLine
// Size: 0xA8 (Inherited: 0x8)
struct FMorgenTowerDialogueLine : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t NextLine; // 0x10(0x8)
	int32_t CancelAction; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText Text; // 0x20(0x18)
	struct FText TipStart; // 0x38(0x18)
	int64_t Killed; // 0x50(0x8)
	struct FText ForcedSpeaker; // 0x58(0x18)
	int64_t Speaker; // 0x70(0x8)
	int64_t AttributeChange; // 0x78(0x8)
	int64_t AnswerBranch1; // 0x80(0x8)
	int64_t AnswerBranch2; // 0x88(0x8)
	int64_t AnswerBranch3; // 0x90(0x8)
	int64_t AnswerBranch4; // 0x98(0x8)
	int64_t AnswerBranch5; // 0xA0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerDialogueGroup
// Size: 0x28 (Inherited: 0x8)
struct FMorgenTowerDialogueGroup : FTableRowBase
{
	int64_t DialogueGroupID; // 0x8(0x8)
	int64_t BelongingDialogue; // 0x10(0x8)
	int64_t StartLine; // 0x18(0x8)
	int64_t Condition; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerDialogue
// Size: 0x28 (Inherited: 0x8)
struct FMorgenTowerDialogue : FTableRowBase
{
	int64_t DialogueID; // 0x8(0x8)
	int64_t Condition; // 0x10(0x8)
	int64_t ShopNPC; // 0x18(0x8)
	int32_t ShopSLot; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerSmallDialogueLine
// Size: 0x40 (Inherited: 0x8)
struct FMorgenTowerSmallDialogueLine : FTableRowBase
{
	int64_t LineID; // 0x8(0x8)
	int64_t SmallDialogueID; // 0x10(0x8)
	struct FText Content; // 0x18(0x18)
	int32_t Duration; // 0x30(0x4)
	int32_t Weight; // 0x34(0x4)
	int64_t Condition; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerSmallDialogue
// Size: 0x28 (Inherited: 0x8)
struct FMorgenTowerSmallDialogue : FTableRowBase
{
	int64_t SmallDiaogueID; // 0x8(0x8)
	int64_t Condition; // 0x10(0x8)
	int32_t IsIndependent; // 0x18(0x4)
	int32_t SelfCancelRate; // 0x1C(0x4)
	int32_t WeightDefault; // 0x20(0x4)
	int32_t WeightPlayed; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerTreasureProb
// Size: 0x30 (Inherited: 0x8)
struct FMorgenTowerTreasureProb : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t TreasureProbID; // 0x10(0x8)
	int32_t Group; // 0x18(0x4)
	int32_t GroupProb; // 0x1C(0x4)
	int64_t TreasureItemID; // 0x20(0x8)
	int32_t TreasureItemWeight; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerTreasureItem
// Size: 0x68 (Inherited: 0x8)
struct FMorgenTowerTreasureItem : FTableRowBase
{
	int64_t TreasureItemID; // 0x8(0x8)
	int64_t AttributeChange; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	int32_t ShowNumber; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	int64_t ConnectedItem; // 0x38(0x8)
	int32_t ShowRarity; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FText ClaimNote; // 0x48(0x18)
	int32_t DetectTime; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerTreasure
// Size: 0xA0 (Inherited: 0x8)
struct FMorgenTowerTreasure : FTableRowBase
{
	int64_t TreasureID; // 0x8(0x8)
	int64_t TreasureProb; // 0x10(0x8)
	struct FText TreasureDesc; // 0x18(0x18)
	struct FText Name; // 0x30(0x18)
	int32_t DisappearTime; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FText DisappearNote; // 0x50(0x18)
	int64_t Dialogue; // 0x68(0x8)
	int64_t DisappearDialogue; // 0x70(0x8)
	int64_t SmallDialogue; // 0x78(0x8)
	int64_t PortraitAsset; // 0x80(0x8)
	int32_t AssetSide; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	int64_t ItemAsset; // 0x90(0x8)
	int64_t AvatarIsset; // 0x98(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerHero
// Size: 0xA8 (Inherited: 0x8)
struct FMorgenTowerHero : FTableRowBase
{
	int64_t HeroId; // 0x8(0x8)
	int64_t Health; // 0x10(0x8)
	int64_t Attack; // 0x18(0x8)
	int64_t Defense; // 0x20(0x8)
	int32_t HitProb; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t Spine; // 0x30(0x8)
	struct FText Name; // 0x38(0x18)
	int32_t DisappearTime; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FText DisappearNote; // 0x58(0x18)
	int64_t Dialogue; // 0x70(0x8)
	int64_t DisappearDialogue; // 0x78(0x8)
	int64_t SmallDialogue; // 0x80(0x8)
	int64_t PortraitAsset; // 0x88(0x8)
	int32_t AssetSide; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	int64_t ItemAsset; // 0x98(0x8)
	int64_t AvatarIsset; // 0xA0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerNPC
// Size: 0xF8 (Inherited: 0x8)
struct FMorgenTowerNPC : FTableRowBase
{
	int64_t NPCID; // 0x8(0x8)
	int64_t IsVisible; // 0x10(0x8)
	struct FName OutAvatar; // 0x18(0x8)
	struct FText Tag; // 0x20(0x18)
	struct FText ShortDesc; // 0x38(0x18)
	struct FText DescOne; // 0x50(0x18)
	struct FText DescTwo; // 0x68(0x18)
	int64_t Spine; // 0x80(0x8)
	struct FText Name; // 0x88(0x18)
	int32_t DisappearTime; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FText DisappearNote; // 0xA8(0x18)
	int64_t Dialogue; // 0xC0(0x8)
	int64_t DisappearDialogue; // 0xC8(0x8)
	int64_t SmallDialogue; // 0xD0(0x8)
	int64_t PortraitAsset; // 0xD8(0x8)
	int32_t AssetSide; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	int64_t ItemAsset; // 0xE8(0x8)
	int64_t AvatarIsset; // 0xF0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerEnemy
// Size: 0xD8 (Inherited: 0x8)
struct FMorgenTowerEnemy : FTableRowBase
{
	int64_t EnemyId; // 0x8(0x8)
	int32_t IsVisible; // 0x10(0x4)
	int32_t EnemyLevel; // 0x14(0x4)
	int64_t Health; // 0x18(0x8)
	int64_t Attack; // 0x20(0x8)
	int64_t Defense; // 0x28(0x8)
	int32_t HitProb; // 0x30(0x4)
	int32_t IsCompulsoryConfirming; // 0x34(0x4)
	struct FText ConfirmingText; // 0x38(0x18)
	int32_t IsCompulsoryAnimation; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	int64_t Spine; // 0x58(0x8)
	int64_t DefeatReward; // 0x60(0x8)
	struct FText Name; // 0x68(0x18)
	int32_t DisappearTime; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FText DisappearNote; // 0x88(0x18)
	int64_t Dialogue; // 0xA0(0x8)
	int64_t DisappearDialogue; // 0xA8(0x8)
	int64_t SmallDialogue; // 0xB0(0x8)
	int64_t PortraitAsset; // 0xB8(0x8)
	int32_t AssetSide; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	int64_t ItemAsset; // 0xC8(0x8)
	int64_t AvatarIsset; // 0xD0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerProp
// Size: 0x88 (Inherited: 0x8)
struct FMorgenTowerProp : FTableRowBase
{
	int64_t PropId; // 0x8(0x8)
	int64_t AttributeChange; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	int32_t DisappearTime; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText DisappearNote; // 0x38(0x18)
	int64_t Dialogue; // 0x50(0x8)
	int64_t DisappearDialogue; // 0x58(0x8)
	int64_t SmallDialogue; // 0x60(0x8)
	int64_t PortraitAsset; // 0x68(0x8)
	int32_t AssetSide; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	int64_t ItemAsset; // 0x78(0x8)
	int64_t AvatarIsset; // 0x80(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerLevelSpawnProb
// Size: 0x28 (Inherited: 0x8)
struct FMorgenTowerLevelSpawnProb : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t SpawnProbID; // 0x10(0x8)
	int32_t Weight; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t Result; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerLevelTransType
// Size: 0x20 (Inherited: 0x8)
struct FMorgenTowerLevelTransType : FTableRowBase
{
	int64_t TransTypeID; // 0x8(0x8)
	int64_t TargetLevel; // 0x10(0x8)
	int32_t TargetX; // 0x18(0x4)
	int32_t TargetY; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerLevelSpecialPoint
// Size: 0x90 (Inherited: 0x8)
struct FMorgenTowerLevelSpecialPoint : FTableRowBase
{
	int64_t SpecialPointID; // 0x8(0x8)
	int32_t SpecialPointType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t MoneyDeduction; // 0x18(0x8)
	int64_t TriggeredPoint; // 0x20(0x8)
	int64_t TransType; // 0x28(0x8)
	int64_t SpawnProb; // 0x30(0x8)
	int32_t Direction; // 0x38(0x4)
	struct FName DoorAsset; // 0x3C(0x8)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString Info3; // 0x48(0x10)
	int64_t Dialogue; // 0x58(0x8)
	struct FText CompleteTip; // 0x60(0x18)
	struct FText UnableTip; // 0x78(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerLevelStructure
// Size: 0x28 (Inherited: 0x8)
struct FMorgenTowerLevelStructure : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t LevelStructureID; // 0x10(0x8)
	int32_t CoordinateX; // 0x18(0x4)
	int32_t CoordinateY; // 0x1C(0x4)
	int64_t SpecialPoint; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MorgenTowerLevel
// Size: 0x68 (Inherited: 0x8)
struct FMorgenTowerLevel : FTableRowBase
{
	int64_t LevelID; // 0x8(0x8)
	int64_t LeveStructure; // 0x10(0x8)
	struct FText LevelName; // 0x18(0x18)
	struct FText LevelSubName; // 0x30(0x18)
	int32_t LevelType; // 0x48(0x4)
	int32_t LevelCycle; // 0x4C(0x4)
	int32_t LevelSizeHorizontal; // 0x50(0x4)
	int32_t LevelSizeVertical; // 0x54(0x4)
	struct FName BackgroundAsset; // 0x58(0x8)
	struct FName FightAsset; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityCommonStoreStyle
// Size: 0x40 (Inherited: 0x10)
struct FActivityCommonStoreStyle : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	struct FString FxUIName; // 0x20(0x10)
	struct TArray<struct FActivityStoreLocationItem> ItemLocaitons; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ActivityStoreLocationItem
// Size: 0x28 (Inherited: 0x0)
struct FActivityStoreLocationItem
{
	struct FVector2D LineLocation_PC; // 0x0(0x8)
	struct FVector2D LineLocation_Mobile; // 0x8(0x8)
	struct FVector2D BtnLocation_PC; // 0x10(0x8)
	struct FVector2D BtnLocation_Mobile; // 0x18(0x8)
	struct FVector2D LineDirection; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.AIDirectParams
// Size: 0xA8 (Inherited: 0x10)
struct FAIDirectParams : FDescRowBase
{
	int64_t MapID; // 0x10(0x8)
	float GlobalBattleScale; // 0x18(0x4)
	float KillScale; // 0x1C(0x4)
	float KillScaleLimit; // 0x20(0x4)
	float MakeDamageScale_1; // 0x24(0x4)
	float FireScale; // 0x28(0x4)
	float HitScale; // 0x2C(0x4)
	float GlobalDebuffScale; // 0x30(0x4)
	float BloodyScale_1; // 0x34(0x4)
	float BornBreakScale_1; // 0x38(0x4)
	float PainScale_1; // 0x3C(0x4)
	float MakeDamageScale_2; // 0x40(0x4)
	float PainScale_2; // 0x44(0x4)
	float PainScale_3; // 0x48(0x4)
	float LootScale; // 0x4C(0x4)
	float TeamMateScale; // 0x50(0x4)
	float DecayScale; // 0x54(0x4)
	struct TMap<struct FString, float> EnemyScore; // 0x58(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.AILabBodyStateHitPartProbabilityConf
// Size: 0x28 (Inherited: 0x10)
struct FAILabBodyStateHitPartProbabilityConf : FDescRowBase
{
	EAILabBodyState BodyState; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t Difficulty; // 0x14(0x4)
	struct TArray<struct FAILabHitPartProbabilityConf> WeightList; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AILabHitPartProbabilityConf
// Size: 0x8 (Inherited: 0x0)
struct FAILabHitPartProbabilityConf
{
	ECharacterPart bodyPart; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Weight; // 0x4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AILabPathDescribe
// Size: 0x10 (Inherited: 0x0)
struct FAILabPathDescribe
{
	struct TArray<struct FAILabPathPoint> PathPoints; // 0x0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AILabBehaviorTreeData
// Size: 0x50 (Inherited: 0x10)
struct FAILabBehaviorTreeData : FDescRowBase
{
	struct FName SOLMapName; // 0x10(0x8)
	int32_t BirthPointID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString POIName; // 0x20(0x10)
	int32_t TeamStartGroupId; // 0x30(0x4)
	int32_t StartSpotIndex; // 0x34(0x4)
	struct FAILabPathDescribe Paths; // 0x38(0x10)
	int32_t ExitId; // 0x48(0x4)
	int32_t Probability; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AILabPathPoint
// Size: 0x20 (Inherited: 0x0)
struct FAILabPathPoint
{
	struct FString POIName; // 0x0(0x10)
	int32_t MinArriveRandomTime; // 0x10(0x4)
	int32_t MaxArriveRandomTime; // 0x14(0x4)
	int32_t MinLootRandomTime; // 0x18(0x4)
	int32_t MaxLootRandomTime; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFMAILabLaunchRow
// Size: 0x70 (Inherited: 0x10)
struct FDFMAILabLaunchRow : FDescRowBase
{
	struct FName MapID; // 0x10(0x8)
	struct FFloatRange BeginTimeSecs; // 0x18(0x10)
	uint32_t HP; // 0x28(0x4)
	float Assets; // 0x2C(0x4)
	float ReLaunchGap; // 0x30(0x4)
	float LastHurtGap; // 0x34(0x4)
	int32_t RecycleDistance; // 0x38(0x4)
	float LastHitGap; // 0x3C(0x4)
	struct TArray<uint32_t> BanBuffIDs; // 0x40(0x10)
	struct TArray<struct FAILabSpawnModel> Models; // 0x50(0x10)
	struct TArray<struct FAILabCreateModel> CModels; // 0x60(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AILabCreateModel
// Size: 0x40 (Inherited: 0x0)
struct FAILabCreateModel
{
	struct TArray<struct FAILabModelOps> ModelOps; // 0x0(0x10)
	struct TArray<struct FAILabDiffcult> Diffcults; // 0x10(0x10)
	struct FFloatRange Range; // 0x20(0x10)
	int32_t Num; // 0x30(0x4)
	uint8_t Protect : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	int32_t AILabType; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AILabDiffcult
// Size: 0x10 (Inherited: 0x0)
struct FAILabDiffcult
{
	int32_t Diffcult; // 0x0(0x4)
	EAILabDiffcultType DiffType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float MinRange; // 0x8(0x4)
	float MaxRange; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AILabModelOps
// Size: 0x14 (Inherited: 0x0)
struct FAILabModelOps
{
	ECreateModelType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FFloatRange Param; // 0x4(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AILabSpawnModel
// Size: 0x98 (Inherited: 0x0)
struct FAILabSpawnModel
{
	struct FFloatRange MatchSecs; // 0x0(0x10)
	struct FInt32Range KillBot; // 0x10(0x10)
	struct FInt32Range KillPlayer; // 0x20(0x10)
	struct FInt32Range KillAILab; // 0x30(0x10)
	struct FFloatRange HitRate; // 0x40(0x10)
	struct FFloatRange ExitDis; // 0x50(0x10)
	int32_t TeamerNum; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct TArray<struct FAILabDiffcult> Diffcults; // 0x68(0x10)
	struct FFloatRange Range; // 0x78(0x10)
	int32_t Num; // 0x88(0x4)
	uint8_t Protect : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	int32_t AILabType; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFMAILabConditionRow
// Size: 0x28 (Inherited: 0x10)
struct FDFMAILabConditionRow : FDescRowBase
{
	struct FName TrigID; // 0x10(0x8)
	struct TArray<struct FDropCondition> Cons; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.DropCondition
// Size: 0x14 (Inherited: 0x0)
struct FDropCondition
{
	EDropConditionType ConType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Param1; // 0x4(0x4)
	float Param2; // 0x8(0x4)
	float param3; // 0xC(0x4)
	float Param4; // 0x10(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFMAILabDropRow
// Size: 0x30 (Inherited: 0x10)
struct FDFMAILabDropRow : FDescRowBase
{
	struct FName DropID; // 0x10(0x8)
	uint32_t TrigID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FAILabDropItem> DropItems; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AILabDropItem
// Size: 0x10 (Inherited: 0x0)
struct FAILabDropItem
{
	uint64_t ItemPoolID; // 0x0(0x8)
	uint32_t Num; // 0x8(0x4)
	uint32_t Weight; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AnimAssetLQConfigRow
// Size: 0xB0 (Inherited: 0x10)
struct FAnimAssetLQConfigRow : FDescRowBase
{
	struct FName Name; // 0x10(0x8)
	struct TSoftObjectPtr<UAnimSequence> Sequence; // 0x18(0x28)
	struct UAnimBoneCompressionSettings* TargetCompressionSettings; // 0x40(0x8)
	int32_t RawSize; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FString HQTargetBoneSettingHandle; // 0x50(0x10)
	int32_t HQTargetBoneSettingHandleIndex; // 0x60(0x4)
	float HQMaxError; // 0x64(0x4)
	float HQAverageError; // 0x68(0x4)
	float HQMaxErrorTime; // 0x6C(0x4)
	int32_t HQMaxErrorBoneIndex; // 0x70(0x4)
	int32_t HQCompressSize; // 0x74(0x4)
	float HQCompressSizeRatio; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct FString LQTargetBoneSettingHandle; // 0x80(0x10)
	int32_t LQTargetBoneSettingHandleIndex; // 0x90(0x4)
	float LQMaxError; // 0x94(0x4)
	float LQAverageError; // 0x98(0x4)
	float LQMaxErrorTime; // 0x9C(0x4)
	int32_t LQMaxErrorBoneIndex; // 0xA0(0x4)
	int32_t LQCompressSize; // 0xA4(0x4)
	float LQCompressSizeRatio; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CompleteEquipmentCheckConfig
// Size: 0x50 (Inherited: 0x10)
struct FCompleteEquipmentCheckConfig : FDescRowBase
{
	int64_t Key; // 0x10(0x8)
	int32_t CheckMainType; // 0x18(0x4)
	int32_t CheckSubType; // 0x1C(0x4)
	uint8_t Switch : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float CheckValue; // 0x24(0x4)
	struct TArray<int32_t> MatchModeIDList; // 0x28(0x10)
	struct FText AbnormalDesc; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentAmmoRecommendConfig
// Size: 0x20 (Inherited: 0x10)
struct FEquipmentAmmoRecommendConfig : FDescRowBase
{
	int32_t WeaponItemType; // 0x10(0x4)
	int32_t RecommendNum; // 0x14(0x4)
	int32_t AddNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.NewEquipmentCheckConfig
// Size: 0x20 (Inherited: 0x10)
struct FNewEquipmentCheckConfig : FDescRowBase
{
	int64_t CheckID; // 0x10(0x8)
	int32_t CheckType; // 0x18(0x4)
	float CheckValue; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponItemTypeInfoRow
// Size: 0x30 (Inherited: 0x10)
struct FWeaponItemTypeInfoRow : FDescRowBase
{
	EWeaponItemType WeaponItemType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText WeaponItemTypeName; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.PresetArmedPropsRow
// Size: 0x70 (Inherited: 0x10)
struct FPresetArmedPropsRow : FDescRowBase
{
	uint64_t PropId; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct TArray<int32_t> ArmedForceID; // 0x30(0x10)
	int32_t SkillId; // 0x40(0x4)
	uint8_t UnLockType : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct TArray<int32_t> BanExpertList; // 0x48(0x10)
	struct FText Desc; // 0x58(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ArmedForceWeaponListRow
// Size: 0x40 (Inherited: 0x10)
struct FArmedForceWeaponListRow : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	int32_t ArmedForceID; // 0x14(0x4)
	int64_t ExpertId; // 0x18(0x8)
	struct TArray<uint64_t> MPWeaponList; // 0x20(0x10)
	struct TArray<uint64_t> SOLWeaponList; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ArmedForceDataInfo
// Size: 0xB8 (Inherited: 0x10)
struct FArmedForceDataInfo : FDescRowBase
{
	int64_t ArmedForceID; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FSoftObjectPath ICON; // 0x30(0x18)
	struct FString WeaponTypeList; // 0x48(0x10)
	struct FString WeaponList; // 0x58(0x10)
	int32_t AbilityID; // 0x68(0x4)
	struct FName RedeployHeroViewColorType; // 0x6C(0x8)
	struct FLinearColor RedeployHeroViewColor; // 0x74(0x10)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FSoftObjectPath RedeployHeroViewArmBigIcon; // 0x88(0x18)
	struct FSoftObjectPath IconForRedeploy; // 0xA0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ArmedForceOutfitDataInfo
// Size: 0x68 (Inherited: 0x10)
struct FArmedForceOutfitDataInfo : FDescRowBase
{
	int64_t Key; // 0x10(0x8)
	int64_t ID; // 0x18(0x8)
	struct FText PresetTitle; // 0x20(0x18)
	int64_t ArmedForceID; // 0x38(0x8)
	int64_t Position; // 0x40(0x8)
	int64_t MinPrice; // 0x48(0x8)
	int64_t MaxPrice; // 0x50(0x8)
	int64_t ItemNum; // 0x58(0x8)
	int64_t MedicineType; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ArmedForcePresetTable
// Size: 0x48 (Inherited: 0x10)
struct FArmedForcePresetTable : FDescRowBase
{
	int64_t StyleId; // 0x10(0x8)
	struct FText StyleName; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ArmedForcePropsInfo
// Size: 0xA8 (Inherited: 0x10)
struct FArmedForcePropsInfo : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
	struct TArray<int32_t> GameMode; // 0x18(0x10)
	struct FText PropType; // 0x28(0x18)
	struct FText Name; // 0x40(0x18)
	int32_t MPCD; // 0x58(0x4)
	int32_t MPLimit; // 0x5C(0x4)
	int32_t MPUseCount; // 0x60(0x4)
	int32_t MPDefaultNum; // 0x64(0x4)
	struct FText MPDesc; // 0x68(0x18)
	int32_t SOLCD; // 0x80(0x4)
	int32_t SOLLimit; // 0x84(0x4)
	int32_t SOLUseCount; // 0x88(0x4)
	int32_t SOLDefaultNum; // 0x8C(0x4)
	struct FText SOLDesc; // 0x90(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ArmedForceMPPropListInfo
// Size: 0x70 (Inherited: 0x10)
struct FArmedForceMPPropListInfo : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
	int32_t ArmedForceIDs; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText PropType; // 0x20(0x18)
	struct FText Name; // 0x38(0x18)
	int32_t PropCount; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FText Desc; // 0x58(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ArmedForcePropListInfo
// Size: 0x90 (Inherited: 0x10)
struct FArmedForcePropListInfo : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
	int32_t ArmedForceIDs; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText PropType; // 0x20(0x18)
	struct FText Name; // 0x38(0x18)
	int32_t MPCount; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FText MPDesc; // 0x58(0x18)
	int32_t SOLCD; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FText SOLDesc; // 0x78(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.AssemblyPresetDataInfo
// Size: 0x58 (Inherited: 0x10)
struct FAssemblyPresetDataInfo : FDescRowBase
{
	int64_t Key; // 0x10(0x8)
	int64_t ID; // 0x18(0x8)
	struct FText PresetTitle; // 0x20(0x18)
	int64_t Position; // 0x38(0x8)
	int64_t ItemID; // 0x40(0x8)
	int64_t ItemQuality; // 0x48(0x8)
	int64_t ItemNum; // 0x50(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.AuctionPageInfo
// Size: 0x78 (Inherited: 0x10)
struct FAuctionPageInfo : FDescRowBase
{
	int32_t PageID; // 0x10(0x4)
	int32_t LabelNo1; // 0x14(0x4)
	int32_t LabelNo2; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText LabelNo1Name; // 0x20(0x18)
	struct FText LabelNo2Name; // 0x38(0x18)
	struct FString LabelNo2Icon; // 0x50(0x10)
	int32_t SubPageOrder; // 0x60(0x4)
	int32_t MainPageOrder; // 0x64(0x4)
	struct FString PageSubId; // 0x68(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AuctionProp
// Size: 0x48 (Inherited: 0x10)
struct FAuctionProp : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	struct FText PropName; // 0x18(0x18)
	uint8_t EnableRack : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	uint64_t CurrencyId; // 0x38(0x8)
	int32_t GuidePrice; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AuctionRelatedSearch
// Size: 0x40 (Inherited: 0x10)
struct FAuctionRelatedSearch : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
	struct FString RelatedIds; // 0x18(0x10)
	struct FText SimpleDescription; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BattleFieldMapItemInfoRow
// Size: 0x18 (Inherited: 0x8)
struct FBattleFieldMapItemInfoRow : FTableRowBase
{
	struct FVector Location; // 0x8(0xC)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BPRewardTips
// Size: 0x178 (Inherited: 0x10)
struct FBPRewardTips : FDescRowBase
{
	int32_t TypeID; // 0x10(0x4)
	int32_t Gear; // 0x14(0x4)
	struct FText TypeName; // 0x18(0x18)
	int32_t SortIndex; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString Text1; // 0x38(0x10)
	struct FString Text2; // 0x48(0x10)
	struct FString Text3; // 0x58(0x10)
	struct FString Text4; // 0x68(0x10)
	struct FString Text5; // 0x78(0x10)
	struct FString Text6; // 0x88(0x10)
	struct FString Text7; // 0x98(0x10)
	struct FString Text8; // 0xA8(0x10)
	struct FString Text9; // 0xB8(0x10)
	struct FString Text10; // 0xC8(0x10)
	struct FString Text11; // 0xD8(0x10)
	struct FString Text12; // 0xE8(0x10)
	struct FString Text13; // 0xF8(0x10)
	struct FString Text14; // 0x108(0x10)
	struct FString Text15; // 0x118(0x10)
	struct FString Text16; // 0x128(0x10)
	struct FString Text17; // 0x138(0x10)
	struct FString Text18; // 0x148(0x10)
	struct FString Text19; // 0x158(0x10)
	struct FString Text20; // 0x168(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BPMainReward
// Size: 0xD8 (Inherited: 0x10)
struct FBPMainReward : FDescRowBase
{
	int32_t GoodsType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString MajorItem; // 0x18(0x10)
	struct FString CommonItem1; // 0x28(0x10)
	struct FString CommonItem2; // 0x38(0x10)
	struct FString CommonItem3; // 0x48(0x10)
	struct FString CommonItem4; // 0x58(0x10)
	struct FString CommonItem5; // 0x68(0x10)
	struct FString CommonItem6; // 0x78(0x10)
	struct FString CommonItem7; // 0x88(0x10)
	struct FString CommonItem8; // 0x98(0x10)
	struct FString CommonItem9; // 0xA8(0x10)
	struct FString CommonItem10; // 0xB8(0x10)
	struct FString BgResources; // 0xC8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassItemTransformData
// Size: 0x68 (Inherited: 0x10)
struct FBattlePassItemTransformData : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	EBattlePassItemTransformType Type; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FString Param; // 0x20(0x10)
	struct FString DisplayType; // 0x30(0x10)
	struct FVector Location; // 0x40(0xC)
	struct FRotator Rotation; // 0x4C(0xC)
	struct FVector Scale; // 0x58(0xC)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassExprCard
// Size: 0x20 (Inherited: 0x10)
struct FBattlePassExprCard : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t Expr; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassPack
// Size: 0x30 (Inherited: 0x10)
struct FBattlePassPack : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t SeasonID; // 0x18(0x8)
	int32_t Level; // 0x20(0x4)
	int32_t Price; // 0x24(0x4)
	int32_t OriginalPrice; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassClue
// Size: 0xC0 (Inherited: 0x10)
struct FBattlePassClue : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t ArchiveID; // 0x14(0x4)
	int64_t GoalID; // 0x18(0x8)
	int64_t FreeReward1; // 0x20(0x8)
	int32_t FreeRewardNum1; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t FreeReward2; // 0x30(0x8)
	int32_t FreeRewardNum2; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	int64_t PaidReward1; // 0x40(0x8)
	int32_t PaidRewardNum1; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	int64_t PaidReward2; // 0x50(0x8)
	int32_t PaidRewardNum2; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FText ClueTitle; // 0x60(0x18)
	struct FText ClueGoal; // 0x78(0x18)
	struct FText ClueBrief; // 0x90(0x18)
	struct FString ClueCover; // 0xA8(0x10)
	int32_t JumpId; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassArchive
// Size: 0x40 (Inherited: 0x10)
struct FBattlePassArchive : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t SeasonID; // 0x18(0x8)
	int32_t MatchType; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText ArchiveName; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassLevel
// Size: 0xF8 (Inherited: 0x10)
struct FBattlePassLevel : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t SeasonID; // 0x18(0x8)
	int32_t Level; // 0x20(0x4)
	int32_t IsCoreReward; // 0x24(0x4)
	int64_t FreeReward1; // 0x28(0x8)
	int32_t FreeRewardNum1; // 0x30(0x4)
	int32_t FreeSeasonExclusive1; // 0x34(0x4)
	int64_t FreeReward2; // 0x38(0x8)
	int32_t FreeRewardNum2; // 0x40(0x4)
	int32_t FreeSeasonExclusive2; // 0x44(0x4)
	int64_t FreeReward3; // 0x48(0x8)
	int32_t FreeRewardNum3; // 0x50(0x4)
	int32_t FreeSeasonExclusive3; // 0x54(0x4)
	int64_t PaidReward1; // 0x58(0x8)
	int32_t PaidRewardNum1; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	int64_t PaidReward2; // 0x68(0x8)
	int32_t PaidRewardNum2; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	int64_t PaidReward3; // 0x78(0x8)
	int32_t PaidRewardNum3; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	int64_t UniversalReward1; // 0x88(0x8)
	int32_t UniversalRewardNum1; // 0x90(0x4)
	int32_t UniversalSeasonExclusive1; // 0x94(0x4)
	int64_t UniversalReward2; // 0x98(0x8)
	int32_t UniversalRewardNum2; // 0xA0(0x4)
	int32_t UniversalSeasonExclusive2; // 0xA4(0x4)
	int64_t SolReward1; // 0xA8(0x8)
	int32_t SolRewardNum1; // 0xB0(0x4)
	int32_t SolSeasonExclusive1; // 0xB4(0x4)
	int32_t EstimatedPrice1; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	int64_t SolReward2; // 0xC0(0x8)
	int32_t SolRewardNum2; // 0xC8(0x4)
	int32_t SolSeasonExclusive2; // 0xCC(0x4)
	int32_t EstimatedPrice2; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	int64_t MpReward1; // 0xD8(0x8)
	int32_t MpRewardNum1; // 0xE0(0x4)
	int32_t MpSeasonExclusive1; // 0xE4(0x4)
	int64_t MpReward2; // 0xE8(0x8)
	int32_t MpRewardNum2; // 0xF0(0x4)
	int32_t MpSeasonExclusive2; // 0xF4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassBonus
// Size: 0x28 (Inherited: 0x10)
struct FBattlePassBonus : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t SeasonID; // 0x18(0x8)
	float BonusRate; // 0x20(0x4)
	int32_t WeekExprLimit; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BattlePassSeason
// Size: 0x1C0 (Inherited: 0x10)
struct FBattlePassSeason : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FString VideoName; // 0x18(0x10)
	int32_t Number; // 0x28(0x4)
	float SolExprRate; // 0x2C(0x4)
	float MpExprRate; // 0x30(0x4)
	int32_t WeekExprLimit; // 0x34(0x4)
	int32_t MaxExprLimit; // 0x38(0x4)
	int32_t LevelExpr; // 0x3C(0x4)
	int32_t CycleStartLevel; // 0x40(0x4)
	int32_t LevelsPerCycle; // 0x44(0x4)
	int64_t CycleReward; // 0x48(0x8)
	int32_t CycleRewardNum; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	int64_t FreeCycleReward; // 0x58(0x8)
	int32_t FreeCycleRewardNum; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	int64_t UniversalCycleReward; // 0x68(0x8)
	int32_t UniversalCycleRewardNum; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	int64_t SolCycleReward; // 0x78(0x8)
	int32_t SolCycleRewardNum; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	int64_t MpCycleReward; // 0x88(0x8)
	int32_t MpCycleRewardNum; // 0x90(0x4)
	int32_t LevelPrice; // 0x94(0x4)
	int32_t CluePrice; // 0x98(0x4)
	int32_t BasePrice; // 0x9C(0x4)
	int32_t AdvancedPrice; // 0xA0(0x4)
	int32_t SolPrice; // 0xA4(0x4)
	int32_t MpPrice; // 0xA8(0x4)
	int32_t UniversalPrice; // 0xAC(0x4)
	int32_t AdvancedLevel; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	int64_t BaseReward1; // 0xB8(0x8)
	int32_t BaseRewardNum1; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	int64_t BaseReward2; // 0xC8(0x8)
	int32_t BaseRewardNum2; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	int64_t BaseReward3; // 0xD8(0x8)
	int32_t BaseRewardNum3; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	int64_t BaseReward4; // 0xE8(0x8)
	int32_t BaseRewardNum4; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	int64_t BaseReward5; // 0xF8(0x8)
	int32_t BaseRewardNum5; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	int64_t AdvancedReward1; // 0x108(0x8)
	int32_t AdvancedRewardNum1; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	int64_t AdvancedReward2; // 0x118(0x8)
	int32_t AdvancedRewardNum2; // 0x120(0x4)
	uint8_t Pad_0x124[0x4]; // 0x124(0x4)
	int64_t AdvancedReward3; // 0x128(0x8)
	int32_t AdvancedRewardNum3; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	int64_t AdvancedReward4; // 0x138(0x8)
	int32_t AdvancedRewardNum4; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	int64_t AdvancedReward5; // 0x148(0x8)
	int32_t AdvancedRewardNum5; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	int64_t SolShowReward1; // 0x158(0x8)
	int64_t SolShowReward2; // 0x160(0x8)
	int64_t SolShowReward3; // 0x168(0x8)
	int64_t SolShowReward4; // 0x170(0x8)
	int64_t MpShowReward1; // 0x178(0x8)
	int64_t MpShowReward2; // 0x180(0x8)
	int64_t MpShowReward3; // 0x188(0x8)
	int64_t MpShowReward4; // 0x190(0x8)
	int64_t UniversalShowReward1; // 0x198(0x8)
	int64_t UniversalShowReward2; // 0x1A0(0x8)
	int64_t UniversalShowReward3; // 0x1A8(0x8)
	int64_t UniversalShowReward4; // 0x1B0(0x8)
	int64_t UniversalShowReward5; // 0x1B8(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MsgRow
// Size: 0x40 (Inherited: 0x8)
struct FMsgRow : FTableRowBase
{
	int32_t MsgSORTID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText MsgTitle; // 0x10(0x18)
	struct FText MsgContent; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BPconfRow
// Size: 0x50 (Inherited: 0x8)
struct FBPconfRow : FTableRowBase
{
	int32_t BPSORTID; // 0x8(0x4)
	int32_t AreaID; // 0xC(0x4)
	int32_t SeasonID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t Paytype; // 0x18(0x8)
	int32_t BPPrice; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	int64_t BPLvPaytype; // 0x28(0x8)
	int32_t BPLvPrice; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText BPName; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BPLvconfRow
// Size: 0x80 (Inherited: 0x8)
struct FBPLvconfRow : FTableRowBase
{
	int32_t LVSORTID; // 0x8(0x4)
	int32_t AreaID; // 0xC(0x4)
	int32_t SeasonID; // 0x10(0x4)
	int32_t Level; // 0x14(0x4)
	int32_t Exp; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t NoChargeAwardId1; // 0x20(0x8)
	int32_t NoChargeAwardNum1; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t NoChargeAwardId2; // 0x30(0x8)
	int32_t NoChargeAwardNum2; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	int64_t ChargeAwardId1; // 0x40(0x8)
	int32_t ChargeAwardNum1; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	int64_t ChargeAwardId2; // 0x50(0x8)
	int32_t ChargeAwardNum2; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	int64_t ChargeAwardId3; // 0x60(0x8)
	int32_t ChargeAwardNum3; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	int64_t ChargeAwardId4; // 0x70(0x8)
	int32_t ChargeAwardNum4; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BHDReward
// Size: 0x40 (Inherited: 0x10)
struct FBHDReward : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	struct FText ItemGetDesc; // 0x18(0x18)
	int64_t ActivityTaskGoal; // 0x30(0x8)
	uint8_t bIsTeamReward : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.MatchModeId2CampaignId
// Size: 0x20 (Inherited: 0x10)
struct FMatchModeId2CampaignId : FDescRowBase
{
	int32_t MatchModeId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	uint64_t CampaignId; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.BHDCampaignInfo
// Size: 0x120 (Inherited: 0x10)
struct FBHDCampaignInfo : FDescRowBase
{
	uint64_t CampaignId; // 0x10(0x8)
	struct FText CampaignCode; // 0x18(0x18)
	struct FText CampaignDate; // 0x30(0x18)
	struct FText CampaignSerial; // 0x48(0x18)
	struct FText CampaignTitle; // 0x60(0x18)
	struct FText CampaignTime; // 0x78(0x18)
	struct FText CampaignLoc; // 0x90(0x18)
	struct FText CampaignDesc; // 0xA8(0x18)
	struct FText CampaignGoal; // 0xC0(0x18)
	struct FSoftObjectPath CampaignImageUrl; // 0xD8(0x18)
	struct FSoftObjectPath CampaignIconUrl; // 0xF0(0x18)
	struct FSoftObjectPath CampaignEntryUrl; // 0x108(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BlindBox
// Size: 0xE0 (Inherited: 0x10)
struct FBlindBox : FDescRowBase
{
	struct FString ItemID; // 0x10(0x10)
	int32_t ConditionID; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText ItemName; // 0x28(0x18)
	struct FString LotteryPoolId; // 0x40(0x10)
	int32_t ConditionType; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString ConditionArg; // 0x58(0x10)
	int32_t ConditionArg2; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString ConditionArg3; // 0x70(0x10)
	int32_t ConditionArg4; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FString ConditionArg5; // 0x88(0x10)
	int32_t Condition2Type; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FString Condition2Arg; // 0xA0(0x10)
	int32_t Condition2Arg2; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct FString Condition2Arg3; // 0xB8(0x10)
	int32_t Condition2Arg4; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FString Condition2Arg5; // 0xD0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TrialsConfig
// Size: 0x20 (Inherited: 0x0)
struct FTrialsConfig
{
	uint8_t bDelayStart : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bRandomDelayStart : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t DelayStartTimeMin; // 0x4(0x4)
	int32_t DelayStartTimeMax; // 0x8(0x4)
	int32_t DefaultDelayStartTime; // 0xC(0x4)
	int32_t DelayStartTimeAfterReset; // 0x10(0x4)
	uint8_t bRandomSpawnAfterDestroyed : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	int32_t DefaultDestroyDuration; // 0x18(0x4)
	int32_t MinimumDecipherDuration; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderDangerDistanceConfig
// Size: 0xC (Inherited: 0x0)
struct FBlueprintPlunderDangerDistanceConfig
{
	float DangerDistance_Level1; // 0x0(0x4)
	float DangerDistance_Level2; // 0x4(0x4)
	float DangerDistance_Level3; // 0x8(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderTipsBoxTextConfig
// Size: 0xA8 (Inherited: 0x0)
struct FBlueprintPlunderTipsBoxTextConfig
{
	struct FText MandelBrickName; // 0x0(0x18)
	struct FText MandelBrickStationName; // 0x18(0x18)
	struct FText FunctionText; // 0x30(0x18)
	struct FText DescText; // 0x48(0x18)
	struct FText FunctionText_SendOut; // 0x60(0x18)
	struct FText FunctionText_NoCopy; // 0x78(0x18)
	struct FText MandelBrickDescText; // 0x90(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ProgressBarConfig
// Size: 0x50 (Inherited: 0x0)
struct FProgressBarConfig
{
	struct FText SubmitBlueprintWeapon; // 0x0(0x18)
	struct FText CopyBlueprintWeapon; // 0x18(0x18)
	struct FText PlunderBlueprintWeapon; // 0x30(0x18)
	float Duration; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderProgressBarHudTextConfig
// Size: 0x60 (Inherited: 0x0)
struct FBlueprintPlunderProgressBarHudTextConfig
{
	struct FText ProgressText_Destroying; // 0x0(0x18)
	struct FText ProgressText_Deciphering; // 0x18(0x18)
	struct FText ProgressText_CopyMandelBrick; // 0x30(0x18)
	struct FText ProgressText_PlunderSKU; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderMainHudTextConfig
// Size: 0xF0 (Inherited: 0x0)
struct FBlueprintPlunderMainHudTextConfig
{
	struct FText HintText_Go2Station; // 0x0(0x18)
	struct FText HintText_ProtectTeammate; // 0x18(0x18)
	struct FText HintText_ManningStation; // 0x30(0x18)
	struct FText HintText_CopyMandelBrick; // 0x48(0x18)
	struct FText HintText_RetakeMandelBrick; // 0x60(0x18)
	struct FText HintText_GoGetMandelBrick; // 0x78(0x18)
	struct FText RewardsText_CopyMandelBrick; // 0x90(0x18)
	struct FText RewardsText_Waiting2Copy; // 0xA8(0x18)
	struct FText RewardsText_Copy; // 0xC0(0x18)
	struct FText RewardsText_EnemyCapture; // 0xD8(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderBannerTextConfig
// Size: 0x1A8 (Inherited: 0x0)
struct FBlueprintPlunderBannerTextConfig
{
	struct FText BannerText_BeAppeared; // 0x0(0x18)
	struct FText BannerText_BeingWanted; // 0x18(0x18)
	struct FText BannerText_BeingWanted_Enemy; // 0x30(0x18)
	struct FText BannerText_Deciphering; // 0x48(0x18)
	struct FText BannerText_Plunder; // 0x60(0x18)
	struct FText BannerText_EnemyCapture; // 0x78(0x18)
	struct FText BannerText_DecipherInterrupted; // 0x90(0x18)
	struct FText BannerText_DecipherInterruptedFailed; // 0xA8(0x18)
	struct FText BannerText_BeTakenOut; // 0xC0(0x18)
	struct FText BannerText_BeTakenOut_NotCopy; // 0xD8(0x18)
	struct FText BannerText_BeTakenOut_Lost; // 0xF0(0x18)
	struct FText Tournament_BeingWanted; // 0x108(0x18)
	struct FText Tournament_BeingWanted_Enemy; // 0x120(0x18)
	struct FText Tournament_Deciphering; // 0x138(0x18)
	struct FText Tournament_Plunder; // 0x150(0x18)
	struct FText Tournament_EnemyCapture; // 0x168(0x18)
	struct FText Tournament_BeTakenOut; // 0x180(0x18)
	float BannerTime_1in; // 0x198(0x4)
	float BannerTime_0in; // 0x19C(0x4)
	float BannerTime_1inHD; // 0x1A0(0x4)
	float BannerTime_0inHD; // 0x1A4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderUIConfig
// Size: 0x60 (Inherited: 0x0)
struct FBlueprintPlunderUIConfig
{
	struct FText PickUpBlueprint; // 0x0(0x18)
	struct FText DecipherBlueprint; // 0x18(0x18)
	struct FText PlunderBlueprint; // 0x30(0x18)
	struct FText CopyBlueprint; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.Interact3DAudioConfig
// Size: 0x50 (Inherited: 0x0)
struct FInteract3DAudioConfig
{
	struct TMap<EInteract3DAudioType, struct TSoftObjectPtr<UGPAudioEventAsset>> AudioPathMap; // 0x0(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.UI2DAudioConfig
// Size: 0x60 (Inherited: 0x0)
struct FUI2DAudioConfig
{
	struct FName UI_Loot_Appear; // 0x0(0x8)
	struct FName UI_Loot_Pickup_Player; // 0x8(0x8)
	struct FName UI_Loot_Pickup_Teammate; // 0x10(0x8)
	struct FName UI_Loot_Pickup_Enemy; // 0x18(0x8)
	struct FName UI_Loot_CodeBreak; // 0x20(0x8)
	struct FName UI_Mandel_CodeBreak_Success_Friendly; // 0x28(0x8)
	struct FName UI_Mandel_CodeBreak_Success_Enemy; // 0x30(0x8)
	struct FName UI_Loot_Copy_Success; // 0x38(0x8)
	struct FName UI_Loot_TakeOut_Friendly; // 0x40(0x8)
	struct FName UI_Loot_TakeOut_Enemy; // 0x48(0x8)
	struct TArray<struct FSoftObjectPath> AudioAssetPaths; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderModeConfig
// Size: 0x80 (Inherited: 0x0)
struct FBlueprintPlunderModeConfig
{
	EBlueprintPlunderCustomModeType CustomModeType; // 0x0(0x1)
	uint8_t bReplaceMandelBrickName : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FText MandelBrickName; // 0x8(0x18)
	struct TMap<struct FName, struct FText> PlunderTexts; // 0x20(0x50)
	uint8_t bReplaceMandelBrickIcon : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	ESOLUIIconType MandelBrickIconType; // 0x71(0x1)
	uint8_t bReplaceMandelBrickItemID : 1; // 0x72(0x1), Mask(0x1)
	uint8_t BitPad_0x72_1 : 7; // 0x72(0x1)
	uint8_t Pad_0x73[0x1]; // 0x73(0x1)
	struct FName MandelBrickItemID; // 0x74(0x8)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.VOConfig
// Size: 0x98 (Inherited: 0x0)
struct FVOConfig
{
	struct FName Radio_Start; // 0x0(0x8)
	struct FName Radio_Obtain_Player; // 0x8(0x8)
	struct FName Radio_Obtain_Teammate; // 0x10(0x8)
	struct FName Radio_Obtain_Enemy; // 0x18(0x8)
	struct FName Radio_StartDecipher_ObtainedTeam; // 0x20(0x8)
	struct FName Radio_StartDecipher_OtherTeam; // 0x28(0x8)
	struct FName Radio_FinishDecipher_Player; // 0x30(0x8)
	struct FName Radio_FinishDecipher_Teammate; // 0x38(0x8)
	struct FName Radio_FinishDecipher_Enemy; // 0x40(0x8)
	struct FName Radio_Transfer_OriginalTeam; // 0x48(0x8)
	struct FName Radio_Out_SuccessPlayer; // 0x50(0x8)
	struct FName Radio_Out_TeamPlayer; // 0x58(0x8)
	struct FName Radio_Out_OtherTeam; // 0x60(0x8)
	struct FName Radio_InDanger; // 0x68(0x8)
	struct FName Radio_MatchPoint_Obtain_Enemy; // 0x70(0x8)
	struct FName Radio_MatchPoint_StartDecipher_OtherTeam; // 0x78(0x8)
	struct FName Radio_MatchPoint_Transfer_OriginalTeam; // 0x80(0x8)
	struct FName Radio_MatchPoint_FinishDecipher_Enemy; // 0x88(0x8)
	struct FName Radio_Out_Winner_Crowned; // 0x90(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.RedBrickRealIDPool
// Size: 0x28 (Inherited: 0x10)
struct FRedBrickRealIDPool : FDescRowBase
{
	uint32_t MapID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	uint64_t UnDecipheredItemID; // 0x18(0x8)
	uint64_t RealItemID; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderDropPool
// Size: 0x28 (Inherited: 0x10)
struct FBlueprintPlunderDropPool : FDescRowBase
{
	struct FName DropPoolID; // 0x10(0x8)
	struct TArray<struct FBlueprintPlunderDropWeight> BlueprintPlunderDropWeightList; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BlueprintPlunderDropWeight
// Size: 0xC (Inherited: 0x0)
struct FBlueprintPlunderDropWeight
{
	struct FName MandelBrickID; // 0x0(0x8)
	int32_t Weight; // 0x8(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BattleFieldSectorAnchorIconConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FBattleFieldSectorAnchorIconConfigRow : FTableRowBase
{
	struct FName SectorAnchorName; // 0x8(0x8)
	struct TSoftObjectPtr<UObject> SectorAnchorIcon; // 0x10(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.BreakthroughTextTypeConfigRow
// Size: 0x18 (Inherited: 0x8)
struct FBreakthroughTextTypeConfigRow : FTableRowBase
{
	EBreakthroughTextType TextType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FName TextStyleName; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BreakthroughUIIconConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FBreakthroughUIIconConfigRow : FTableRowBase
{
	EBreakthroughUIIconType IconType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TSoftObjectPtr<UObject> IconPath; // 0x10(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.BreakthroughUIColorConfigRow
// Size: 0x20 (Inherited: 0x8)
struct FBreakthroughUIColorConfigRow : FTableRowBase
{
	EBreakthroughUIColorType ColorType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FLinearColor LinearColor; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CarrayItem_HealArmorConfig
// Size: 0x18 (Inherited: 0x10)
struct FCarrayItem_HealArmorConfig : FDescRowBase
{
	int32_t Level; // 0x10(0x4)
	int32_t HealArmor; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CarrayItemsData
// Size: 0x90 (Inherited: 0x10)
struct FCarrayItemsData : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	int32_t SerialNum; // 0x18(0x4)
	ECarrayItemsType CarrayItemType; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	uint64_t ProtoTypeItemId; // 0x20(0x8)
	int32_t MaxNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText ItemName; // 0x30(0x18)
	struct FText EffectDesc; // 0x48(0x18)
	struct FText Desc; // 0x60(0x18)
	struct FSoftObjectPath IconPath; // 0x78(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HallWeaponDataAnim
// Size: 0x28 (Inherited: 0x10)
struct FHallWeaponDataAnim : FDescRowBase
{
	struct FName AnimSetBase; // 0x10(0x8)
	struct FName AnimSetMain; // 0x18(0x8)
	struct FName AnimSetOverride; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAnimPreviewHD
// Size: 0x50 (Inherited: 0x0)
struct FCharacterAnimPreviewHD
{
	struct TMap<ECharacterAvatarPart, struct TSoftObjectPtr<UAnimSequenceBase>> HallPreviewAnims; // 0x0(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAnimDataRow
// Size: 0xC8 (Inherited: 0x10)
struct FCharacterAnimDataRow : FDescRowBase
{
	struct TMap<struct FName, struct TSoftObjectPtr<UAnimSequenceBase>> HallAnimations; // 0x10(0x50)
	struct TMap<struct FName, struct FCharacterAnimPreviewHD> HallCharacterPreviewAnims; // 0x60(0x50)
	struct FName AvatarID; // 0xB0(0x8)
	struct FName WeaponID; // 0xB8(0x8)
	struct FName AnimSetOverride; // 0xC0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAppearanceAdaptationDataRow
// Size: 0x50 (Inherited: 0x10)
struct FCharacterAppearanceAdaptationDataRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	int32_t PriorityWearPosition_Head; // 0x18(0x4)
	int32_t PriorityWearPosition_Face; // 0x1C(0x4)
	int32_t PriorityWearPosition_Eyes; // 0x20(0x4)
	int32_t PriorityWearPosition_Ears; // 0x24(0x4)
	int32_t PriorityWearPosition_Neck; // 0x28(0x4)
	int32_t PriorityWearPosition_Shoulders; // 0x2C(0x4)
	int32_t PriorityWearPosition_UpperInner; // 0x30(0x4)
	int32_t PriorityWearPosition_UpperOuter; // 0x34(0x4)
	int32_t PriorityWearPosition_Lower; // 0x38(0x4)
	int32_t PriorityWearPosition_Bag; // 0x3C(0x4)
	int32_t PriorityAvatar_Hair; // 0x40(0x4)
	int32_t PriorityAvatar_Head; // 0x44(0x4)
	int32_t PriorityAvatar_Upper; // 0x48(0x4)
	int32_t PriorityAvatar_Lower; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterMeshOffsetByShapeRow
// Size: 0xC (Inherited: 0x0)
struct FCharacterMeshOffsetByShapeRow
{
	struct FVector LowerBodySupineOffset; // 0x0(0xC)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterMeshTransformOffsetRow
// Size: 0x108 (Inherited: 0x10)
struct FCharacterMeshTransformOffsetRow : FDescRowBase
{
	struct FName AvatarID; // 0x10(0x8)
	struct TMap<EHeroShapeShiftType, struct FCharacterMeshOffsetByShapeRow> FppMeshOffset; // 0x18(0x50)
	struct TMap<EHeroShapeShiftType, struct FCharacterMeshOffsetByShapeRow> TppMeshOffset; // 0x68(0x50)
	struct TMap<EHeroShapeShiftType, struct FCharacterMeshOffsetByShapeRow> UIMeshOffset; // 0xB8(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterBFEAvatarWeightRow
// Size: 0x18 (Inherited: 0x18)
struct FCharacterBFEAvatarWeightRow : FBFEAvatarWeightRow
{
};

// Object: ScriptStruct DFMGlobalDefines.CharacterBattlefieldEffectGroupRow
// Size: 0x18 (Inherited: 0x18)
struct FCharacterBattlefieldEffectGroupRow : FBattlefieldEffectGroupRow
{
};

// Object: ScriptStruct DFMGlobalDefines.CharacterBattlefieldEffectRow
// Size: 0x68 (Inherited: 0x68)
struct FCharacterBattlefieldEffectRow : FBattlefieldEffectRow
{
};

// Object: ScriptStruct DFMGlobalDefines.CharacterExtraPartConflictRow
// Size: 0x68 (Inherited: 0x10)
struct FCharacterExtraPartConflictRow : FDescRowBase
{
	struct FName AvatarID; // 0x10(0x8)
	struct TMap<struct FName, struct FName> ConflictItemAndTags; // 0x18(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterShapeDefaultAvatarRow
// Size: 0x20 (Inherited: 0x10)
struct FCharacterShapeDefaultAvatarRow : FDescRowBase
{
	struct FName DefaultAvatarId; // 0x10(0x8)
	EHeroShapeShiftType ShapeType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterBodyColorDataRow
// Size: 0x30 (Inherited: 0x10)
struct FCharacterBodyColorDataRow : FDescRowBase
{
	struct TArray<struct FCharacterBodyColorItem> ColorParams; // 0x10(0x10)
	struct TArray<struct FCharacterBodyColorItem> FppColorParams; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterBodyColorItem
// Size: 0x44 (Inherited: 0x0)
struct FCharacterBodyColorItem
{
	EHeroShapeShiftType ShiftType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FLinearColor CampTintColorR; // 0x4(0x10)
	struct FLinearColor CampTintColorG; // 0x14(0x10)
	struct FLinearColor CampTintColorB; // 0x24(0x10)
	struct FLinearColor SaturationControl; // 0x34(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterBodyColorParams
// Size: 0x28 (Inherited: 0x0)
struct FCharacterBodyColorParams
{
	struct FName MatSlot; // 0x0(0x8)
	struct FLinearColor CampTintColorG; // 0x8(0x10)
	struct FLinearColor CampTintColorR; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroItemFashionStruct
// Size: 0x14 (Inherited: 0x0)
struct FHeroItemFashionStruct
{
	struct FName HeroItemId; // 0x0(0x8)
	struct FName ItemFashionId; // 0x8(0x8)
	EHeroItemFashionQuality FashionQuality; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseNPCAvatarDataRow
// Size: 0x98 (Inherited: 0x10)
struct FSafeHouseNPCAvatarDataRow : FDescRowBase
{
	struct TSoftObjectPtr<USkeletalMesh> NPCSkeletalMesh; // 0x10(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> NPCAnimInsClass; // 0x38(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimSequence; // 0x60(0x28)
	struct TArray<struct FCharacterAvatarItem> ExtraParts; // 0x88(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAvatarItem
// Size: 0x78 (Inherited: 0x0)
struct FCharacterAvatarItem
{
	ECharacterAvatarExtraTag ExtraTag; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName AvatarItemName; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FSoftObjectPath MeshPath; // 0x10(0x18)
	struct FName SkillItemMeshId; // 0x28(0x8)
	struct FName AttachSocket; // 0x30(0x8)
	struct FName MaterialSlotName; // 0x38(0x8)
	struct TSoftClassPtr<struct UAnimInstance*> AnimInstance; // 0x40(0x28)
	struct TArray<struct FName> SkillItemMatSlotNames; // 0x68(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterVoiceInfo
// Size: 0x48 (Inherited: 0x10)
struct FCharacterVoiceInfo : FDescRowBase
{
	struct FName CharacterAvatarID; // 0x10(0x8)
	uint8_t IsSpecial : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<struct FSoftObjectPath> CharacterVoices; // 0x20(0x10)
	struct TArray<struct FSoftObjectPath> HallCharacterVoices; // 0x30(0x10)
	struct FName HeroFashionName; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterSequenceDataRow
// Size: 0x118 (Inherited: 0x10)
struct FCharacterSequenceDataRow : FDescRowBase
{
	uint8_t IsValid : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t bUseTransitionCamera : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct FSoftObjectPath LevelSequenceActor; // 0x18(0x18)
	uint8_t bLevelSequenceUseMotionBlur : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float LevelSequenceMotionBlurIntensity; // 0x34(0x4)
	struct TArray<struct FName> MarkNameList; // 0x38(0x10)
	struct FSoftObjectPath MatchLevelSequenceActor; // 0x48(0x18)
	struct FName LightGroupName; // 0x60(0x8)
	struct TMap<struct FName, struct FName> HeroItemInfoMapForSeq; // 0x68(0x50)
	struct TMap<struct FName, struct FName> HeroItemMeshMap; // 0xB8(0x50)
	struct TArray<struct FName> ShowNames; // 0x108(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterMasterPartDataRow
// Size: 0x70 (Inherited: 0x10)
struct FCharacterMasterPartDataRow : FDescRowBase
{
	struct FSoftObjectPath UIMaleMasterPartPath; // 0x10(0x18)
	struct FSoftObjectPath UIFemaleMasterPartPath; // 0x28(0x18)
	struct FSoftObjectPath FPPMaleMasterPartPath; // 0x40(0x18)
	struct FSoftObjectPath FPPFemaleMasterPartPath; // 0x58(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterHelmetAdaptiveDataRow
// Size: 0x20 (Inherited: 0x10)
struct FCharacterHelmetAdaptiveDataRow : FDescRowBase
{
	struct FName HelmetItemId; // 0x10(0x8)
	uint8_t FemaleHairAdaptive : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t MaleHairAdaptive : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterFashionDataRow
// Size: 0xE8 (Inherited: 0x10)
struct FCharacterFashionDataRow : FDescRowBase
{
	struct FName FashionId; // 0x10(0x8)
	int32_t WearPosition; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t BelongedHeroID; // 0x20(0x8)
	uint8_t IsDefUnlock : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t IsDefEquip : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FText Name; // 0x30(0x18)
	struct FSoftObjectPath BrandIcon; // 0x48(0x18)
	struct TArray<struct FString> HeroItemIDs; // 0x60(0x10)
	int32_t Class; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FSoftObjectPath ICON; // 0x78(0x18)
	struct FText Desc; // 0x90(0x18)
	struct TArray<struct FSoftObjectPath> BundleIcons; // 0xA8(0x10)
	int32_t GoodsId; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct FString SocialShareCDN; // 0xC0(0x10)
	struct FString FashionMusicName; // 0xD0(0x10)
	int32_t DisplayType; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.AICharacterBodyPartMeshRow
// Size: 0x48 (Inherited: 0x10)
struct FAICharacterBodyPartMeshRow : FDescRowBase
{
	struct FSoftObjectPath SkeletalMesh; // 0x10(0x18)
	struct FSoftObjectPath StaticMesh; // 0x28(0x18)
	struct FName AIName; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterSkinColorDataRow
// Size: 0x40 (Inherited: 0x28)
struct FCharacterSkinColorDataRow : FPackageDescRow
{
	struct FName SkinName; // 0x24(0x8)
	struct FLinearColor SkinColor; // 0x2C(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterSkillInfo
// Size: 0x50 (Inherited: 0x0)
struct FCharacterSkillInfo
{
	struct TMap<int64_t, int64_t> WeaponID2AppearanceID; // 0x0(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAvatar
// Size: 0xB0 (Inherited: 0x0)
struct FCharacterAvatar
{
	uint8_t IsUseMasterMesh : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FSoftObjectPath MasterMesh; // 0x8(0x18)
	uint8_t IsUseFaceAnimMasterMesh : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct FSoftObjectPath FaceAnimMasterMesh; // 0x28(0x18)
	struct TArray<struct FCharacterAvatarCoreItem> CoreParts; // 0x40(0x10)
	struct TArray<struct FCharacterAvatarItem> ExtraParts; // 0x50(0x10)
	struct FCharacterSkillInfo SkillInfo; // 0x60(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterFacialAnimation
// Size: 0x20 (Inherited: 0x0)
struct FCharacterFacialAnimation
{
	struct FSoftObjectPath HeadMesh; // 0x0(0x18)
	struct UAnimInstance* HeadAnimationBP; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAvatarDataRow
// Size: 0x3A0 (Inherited: 0x10)
struct FCharacterAvatarDataRow : FDescRowBase
{
	ECharacterAvatarSex Sex; // 0x10(0x1)
	ECharacterTag CharacterTag; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	struct FName SkinId; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FCharacterAvatar FPP; // 0x20(0xB0)
	struct FCharacterAvatar TPP; // 0xD0(0xB0)
	struct FCharacterAvatar UI; // 0x180(0xB0)
	struct TArray<struct FCharacterShapeShift> FPPShapeShift; // 0x230(0x10)
	struct TArray<struct FCharacterShapeShift> TPPShapeShift; // 0x240(0x10)
	struct TArray<struct FCharacterShapeShift> UIShapeShift; // 0x250(0x10)
	EHeroShapeShiftType BodyShapeShiftType; // 0x260(0x1)
	uint8_t Pad_0x261[0x3]; // 0x261(0x3)
	struct FName HairAttachSocket; // 0x264(0x8)
	uint8_t Pad_0x26C[0x4]; // 0x26C(0x4)
	struct FCharacterFacialAnimation CutsceneHeadAnim; // 0x270(0x20)
	uint8_t bNeverShowEquip : 1; // 0x290(0x1), Mask(0x1)
	uint8_t BitPad_0x290_1 : 7; // 0x290(0x1)
	uint8_t bNeverShowWatch : 1; // 0x291(0x1), Mask(0x1)
	uint8_t BitPad_0x291_1 : 7; // 0x291(0x1)
	uint8_t IsUISectionAdaptiveIK : 1; // 0x292(0x1), Mask(0x1)
	uint8_t BitPad_0x292_1 : 7; // 0x292(0x1)
	uint8_t Pad_0x293[0x1]; // 0x293(0x1)
	float UISectionAdaptiveIKData; // 0x294(0x4)
	float UISectionLeftArmAdaptiveData; // 0x298(0x4)
	float UISectionRightArmAdaptiveData; // 0x29C(0x4)
	struct TArray<struct FName> UIIngoreRenderSlots; // 0x2A0(0x10)
	struct TArray<struct FCharacterUIMatRenderIngoreInfo> UIMatIngoreRenderInfos; // 0x2B0(0x10)
	struct TSoftClassPtr<struct UAnimInstance*> FaceSimpleAnimInstance; // 0x2C0(0x28)
	uint8_t Pad_0x2E8[0x8]; // 0x2E8(0x8)
	struct FTransform WeaponBackLeftOffset; // 0x2F0(0x30)
	struct FTransform WeaponBackRightOffset; // 0x320(0x30)
	struct FTransform WeaponBackMiddleOffset; // 0x350(0x30)
	struct FName AmbientLightGroup; // 0x380(0x8)
	struct TArray<struct FHeroItemSkillInfo> HeroItemSkillInfos; // 0x388(0x10)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HeroItemSkillInfo
// Size: 0x10 (Inherited: 0x0)
struct FHeroItemSkillInfo
{
	struct FName HeroItemId; // 0x0(0x8)
	struct FName SkillId; // 0x8(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterUIMatRenderIngoreInfo
// Size: 0x20 (Inherited: 0x0)
struct FCharacterUIMatRenderIngoreInfo
{
	struct FName UIMatName; // 0x0(0x8)
	struct FSoftObjectPath UIMatReplacePath; // 0x8(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterShapeShift
// Size: 0xB8 (Inherited: 0x0)
struct FCharacterShapeShift
{
	EHeroShapeShiftType ShapeType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FCharacterAvatar CharacterAvatar; // 0x8(0xB0)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAvatarCoreItem
// Size: 0x68 (Inherited: 0x0)
struct FCharacterAvatarCoreItem
{
	ECharacterAvatarPartConfig AvatarPart; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FSoftObjectPath MeshPath; // 0x8(0x18)
	struct TSoftClassPtr<struct UAnimInstance*> AnimInstance; // 0x20(0x28)
	uint8_t IsExistLowMemoryMeshPath : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FSoftObjectPath LowMemoryMeshPath; // 0x50(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SkillItemMesh
// Size: 0x28 (Inherited: 0x0)
struct FSkillItemMesh
{
	struct FSoftObjectPath MeshPath; // 0x0(0x18)
	struct TArray<struct FSkillItemMaterials> Materials; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterSkillItemMeshDataRow
// Size: 0xB8 (Inherited: 0x10)
struct FCharacterSkillItemMeshDataRow : FDescRowBase
{
	struct FName SkillItemMeshId; // 0x10(0x8)
	struct FSkillItemMesh FPP; // 0x18(0x28)
	struct FSkillItemMesh TPP; // 0x40(0x28)
	struct FSkillItemMesh UI; // 0x68(0x28)
	struct FSkillItemMesh OverrideUI; // 0x90(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.SkillItemMaterials
// Size: 0x20 (Inherited: 0x0)
struct FSkillItemMaterials
{
	struct FName SlotName; // 0x0(0x8)
	struct FSoftObjectPath MetarialPath; // 0x8(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroVOData
// Size: 0x58 (Inherited: 0x10)
struct FHeroVOData : FDescRowBase
{
	struct FText VODataID; // 0x10(0x18)
	struct FText LinesCN; // 0x28(0x18)
	struct FSoftObjectPath AudioPath; // 0x40(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SceneActorBPData
// Size: 0x48 (Inherited: 0x8)
struct FSceneActorBPData : FTableRowBase
{
	struct FSoftClassPath SceneMeshBP; // 0x8(0x18)
	struct FVector SceneMeshBPLocation; // 0x20(0xC)
	struct FRotator SceneMeshBPRotation; // 0x2C(0xC)
	struct FVector SceneMeshBPScale; // 0x38(0xC)
	ECustomTransformRule CustomTransformRule; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.SubLevelConfig
// Size: 0x18 (Inherited: 0x8)
struct FSubLevelConfig : FTableRowBase
{
	struct TArray<struct FOpSubLevel> LevelNames; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroHighLevelSceneConfigData
// Size: 0x2B0 (Inherited: 0x10)
struct FHeroHighLevelSceneConfigData : FDescRowBase
{
	struct FString HeroFashionId; // 0x10(0x10)
	uint8_t bNeedDisplayScene : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TMap<struct FName, struct FName> LightGroupNameMap; // 0x28(0x50)
	uint8_t bNeedExtraLight : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct TMap<struct FName, struct FName> ExtraLightGroupNameMap; // 0x80(0x50)
	ELoadLevelOption LoadLevelOption; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct TMap<struct FName, struct FSubLevelConfig> SubLevelNamesMap; // 0xD8(0x50)
	struct TMap<struct FName, struct FName> BPLevelNameMap; // 0x128(0x50)
	struct TMap<struct FName, struct FName> SceneVideoMeshNames; // 0x178(0x50)
	struct TMap<struct FName, struct FName> HeightFogNameMap; // 0x1C8(0x50)
	struct FSoftObjectPath ScreenMaterialPath; // 0x218(0x18)
	struct FSoftObjectPath MatchScreenMaterialPath; // 0x230(0x18)
	uint8_t bShowMatchConfig : 1; // 0x248(0x1), Mask(0x1)
	uint8_t BitPad_0x248_1 : 7; // 0x248(0x1)
	uint8_t Pad_0x249[0x7]; // 0x249(0x7)
	struct FSceneActorBPData SceneMeshBP; // 0x250(0x48)
	struct FSoftObjectPath ClothMaterialPath; // 0x298(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.OpSubLevel
// Size: 0x28 (Inherited: 0x8)
struct FOpSubLevel : FTableRowBase
{
	struct FSoftObjectPath LevelPath; // 0x8(0x18)
	EShowLevelConfig ShowLevelConfig; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.CommercialBaseRow
// Size: 0x18 (Inherited: 0x10)
struct FCommercialBaseRow : FDescRowBase
{
	int32_t GoodsId; // 0x10(0x4)
	int32_t DisplayType; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.HeroItemData
// Size: 0xC0 (Inherited: 0x18)
struct FHeroItemData : FCommercialBaseRow
{
	struct FString HeroItemId; // 0x18(0x10)
	struct FText HeroItemName; // 0x28(0x18)
	int32_t HeroItemLevel; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FSoftObjectPath HeroItemImage; // 0x48(0x18)
	struct FSoftObjectPath HeroItemModel; // 0x60(0x18)
	struct FName HeroItemVideoName; // 0x78(0x8)
	struct TArray<struct FName> MysticalHeroItemVideoNames; // 0x80(0x10)
	struct FSoftClassPath AnimClassPath; // 0x90(0x18)
	struct FText HeroItemDesc; // 0xA8(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.KillLineData
// Size: 0x78 (Inherited: 0x18)
struct FKillLineData : FCommercialBaseRow
{
	struct FString KillLineId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	int32_t KillLineLevel; // 0x38(0x4)
	uint8_t IsDefUnlock : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t IsDefEquip : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FText KillLineName; // 0x40(0x18)
	struct FName LinesRowName; // 0x58(0x8)
	struct FSoftObjectPath KillLineImage; // 0x60(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BadgeData
// Size: 0x88 (Inherited: 0x18)
struct FBadgeData : FCommercialBaseRow
{
	struct FString BadgeId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	int32_t BadgeLevel; // 0x38(0x4)
	uint8_t IsDefUnlock : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t IsDefEquip : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FText BadgeName; // 0x40(0x18)
	struct FSoftObjectPath BadgeImage; // 0x58(0x18)
	struct FText BadgeDescription; // 0x70(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroTitleData
// Size: 0x88 (Inherited: 0x18)
struct FHeroTitleData : FCommercialBaseRow
{
	struct FString HeroTitleId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	int32_t TitleLevel; // 0x38(0x4)
	uint8_t IsDefUnlock : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t IsDefEquip : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FText HeroTitleName; // 0x40(0x18)
	struct FSoftObjectPath HeroTitleImage; // 0x58(0x18)
	struct FText TitleDescription; // 0x70(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.DFWatchDisplayInfo
// Size: 0x48 (Inherited: 0x8)
struct FDFWatchDisplayInfo : FTableRowBase
{
	struct FSoftObjectPath WatchMesh; // 0x8(0x18)
	struct FVector WatchOffset; // 0x20(0xC)
	struct FRotator WatchRotator; // 0x2C(0xC)
	struct FVector WatchScale; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFWatchMeshData
// Size: 0xF8 (Inherited: 0x10)
struct FDFWatchMeshData : FDescRowBase
{
	struct FDFWatchDisplayInfo WatchMesh1P; // 0x10(0x48)
	struct FDFWatchDisplayInfo WatchMesh3P; // 0x58(0x48)
	struct FDFWatchDisplayInfo WatchMeshUI; // 0xA0(0x48)
	struct FRotator DisplayShowRotator; // 0xE8(0xC)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFWatchData
// Size: 0xB0 (Inherited: 0x18)
struct FDFWatchData : FCommercialBaseRow
{
	struct FString DFWatchId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	int32_t DFWatchLevel; // 0x38(0x4)
	uint8_t IsDefUnlock : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t IsDefEquip : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FText DFWatchName; // 0x40(0x18)
	struct FSoftObjectPath DFWatchImage; // 0x58(0x18)
	struct TArray<struct FString> VOIDs; // 0x70(0x10)
	struct FSoftObjectPath DFWatchBgImage; // 0x80(0x18)
	struct FText DFWatchDesc; // 0x98(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.LinesData
// Size: 0x88 (Inherited: 0x18)
struct FLinesData : FCommercialBaseRow
{
	struct FString LinesId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	struct TArray<struct FName> BelongedFashionIDs; // 0x38(0x10)
	int32_t LinesLevel; // 0x48(0x4)
	uint8_t IsDefUnlock : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t IsDefEquip : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t BitPad_0x4D_1 : 7; // 0x4D(0x1)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)
	struct FText LinesName; // 0x50(0x18)
	struct FName LinesRowName; // 0x68(0x8)
	struct FSoftObjectPath LinesImage; // 0x70(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SprayPaintData
// Size: 0x98 (Inherited: 0x18)
struct FSprayPaintData : FCommercialBaseRow
{
	struct FString SprayPaintId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	int32_t SprayPaintLevel; // 0x38(0x4)
	uint8_t IsDefUnlock : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t IsDefEquip : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FText SprayPaintName; // 0x40(0x18)
	struct FSoftObjectPath SprayPaintImage; // 0x58(0x18)
	struct FSoftObjectPath SprayPaintDisplay; // 0x70(0x18)
	struct TArray<int32_t> SprayPaintOffset; // 0x88(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GestureData
// Size: 0x70 (Inherited: 0x18)
struct FGestureData : FCommercialBaseRow
{
	struct FString GestureId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	int32_t GestureLevel; // 0x38(0x4)
	uint8_t IsDefUnlock : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t IsDefEquip : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FText GestureName; // 0x40(0x18)
	struct FSoftObjectPath GestureImage; // 0x58(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ExecutionData
// Size: 0x80 (Inherited: 0x18)
struct FExecutionData : FCommercialBaseRow
{
	struct FString ExecutionId; // 0x18(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x28(0x10)
	struct TArray<struct FName> BelongedFashionIDs; // 0x38(0x10)
	int32_t ExecutionLevel; // 0x48(0x4)
	uint8_t IsDefUnlock : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t IsDefEquip : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t BitPad_0x4D_1 : 7; // 0x4D(0x1)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)
	struct FText ExecutionName; // 0x50(0x18)
	struct FSoftObjectPath ExecutionImage; // 0x68(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.AnimShowAssetData
// Size: 0x170 (Inherited: 0x10)
struct FAnimShowAssetData : FDescRowBase
{
	struct FName AnimShowID; // 0x10(0x8)
	uint8_t bIsLevelSequence : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName AnimShowName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FSoftObjectPath AnimShowPath; // 0x28(0x18)
	struct FSoftObjectPath FemaleAnimShowPath; // 0x40(0x18)
	struct FSoftObjectPath HighLevelAnimShowPath; // 0x58(0x18)
	struct TMap<struct FName, struct FSoftObjectPath> AnimShowPathByID; // 0x70(0x50)
	struct TMap<struct FName, struct FName> HeroItemInfoMapForSeq; // 0xC0(0x50)
	struct TMap<struct FName, struct FName> HeroItemTagMap; // 0x110(0x50)
	struct TArray<struct FName> HiddenNames; // 0x160(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAnimShowData
// Size: 0x78 (Inherited: 0x18)
struct FCharacterAnimShowData : FCommercialBaseRow
{
	struct FName AnimShowID; // 0x18(0x8)
	struct TArray<struct FName> BelongedHeroIDs; // 0x20(0x10)
	uint8_t IsDefUnlock : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t IsDefEquip : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	struct FName Title; // 0x34(0x8)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FText AnimShowName; // 0x40(0x18)
	int32_t Level; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FSoftObjectPath AnimShowImage; // 0x60(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterDefaultNameTable
// Size: 0xC0 (Inherited: 0x10)
struct FCharacterDefaultNameTable : FDescRowBase
{
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct FName Pool; // 0x40(0x8)
	struct TSoftObjectPtr<UPaperSprite> ICON; // 0x48(0x28)
	struct TSoftObjectPtr<UPaperSprite> RankIcon; // 0x70(0x28)
	struct TSoftObjectPtr<UTexture2D> HalfBodyImage; // 0x98(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterFeatureLODConfigRow
// Size: 0x120 (Inherited: 0x28)
struct FCharacterFeatureLODConfigRow : FPackageDescRow
{
	struct TMap<ECharacterFeatureLODAvatarPart, uint8_t> AvatarPart2VisableMap; // 0x28(0x50)
	struct TMap<ECharacterFeatureLODAvatarPart, uint8_t> AvatarPart2ShadowMap; // 0x78(0x50)
	struct TMap<struct FName, uint8_t> ExtraAvatarItemName2UseAnimMap; // 0xC8(0x50)
	int32_t MeshMinLOD; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterHeroResourceTracingLineData
// Size: 0x48 (Inherited: 0x10)
struct FCharacterHeroResourceTracingLineData : FDescRowBase
{
	uint64_t AvatarID; // 0x10(0x8)
	int32_t PakSkillID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TSoftClassPtr<struct AGPPreviewLineActor*> TracingLineBP; // 0x20(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.AbilityPlayMontageResources
// Size: 0x40 (Inherited: 0x0)
struct FAbilityPlayMontageResources
{
	struct UAnimSequenceBase* montageToPlayStartFPP; // 0x0(0x8)
	struct UAnimSequenceBase* montageToPlayLoopFPP; // 0x8(0x8)
	struct UAnimSequenceBase* montageToPlayEndFPP; // 0x10(0x8)
	struct UAnimSequenceBase* montageToPlayStartTPP; // 0x18(0x8)
	struct UAnimSequenceBase* montageToPlayLoopTPP; // 0x20(0x8)
	struct UAnimSequenceBase* montageToPlayEndTPP; // 0x28(0x8)
	struct UAnimMontage* montageFPP; // 0x30(0x8)
	struct UAnimMontage* montageTPP; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropsMysticalSkinStorageData
// Size: 0x30 (Inherited: 0x10)
struct FHeroPropsMysticalSkinStorageData : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName HeroItemLotteryId; // 0x14(0x8)
	int32_t Slot; // 0x1C(0x4)
	int64_t CurrencyType; // 0x20(0x8)
	int64_t Price; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropsMysticalSkinLotteryDescData
// Size: 0xE8 (Inherited: 0x10)
struct FHeroPropsMysticalSkinLotteryDescData : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName HeroItemLotteryId; // 0x14(0x8)
	struct FName Class; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText ClassName; // 0x28(0x18)
	struct FText RatioDesc; // 0x40(0x18)
	struct FText FeatureDesc1; // 0x58(0x18)
	struct FText FeatureDesc2; // 0x70(0x18)
	struct FText FeatureDesc3; // 0x88(0x18)
	struct FText FeatureDesc4; // 0xA0(0x18)
	struct FText FeatureDesc5; // 0xB8(0x18)
	struct FText FeatureDesc6; // 0xD0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropsMysticalSkinLotteryData
// Size: 0x48 (Inherited: 0x10)
struct FHeroPropsMysticalSkinLotteryData : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName HeroItemLotteryId; // 0x14(0x8)
	struct FName Class; // 0x1C(0x8)
	int32_t LevelWeight; // 0x24(0x4)
	int32_t InsuranceNum; // 0x28(0x4)
	int32_t UpgradeWeight; // 0x2C(0x4)
	int32_t UpgradeFailWeight; // 0x30(0x4)
	int32_t Cost; // 0x34(0x4)
	struct TArray<int64_t> RewardItem; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropsMysticalSkinLottery
// Size: 0x68 (Inherited: 0x10)
struct FHeroPropsMysticalSkinLottery : FDescRowBase
{
	struct FName HeroItemLotteryId; // 0x10(0x8)
	struct FName BeginTime; // 0x18(0x8)
	struct FName EndTime; // 0x20(0x8)
	struct TArray<int64_t> HeroItemId; // 0x28(0x10)
	int64_t LotteryKeyId; // 0x38(0x8)
	struct FName Apperancecsv; // 0x40(0x8)
	struct FName MoviesRowName; // 0x48(0x8)
	struct FName MusicName; // 0x50(0x8)
	struct FName MoviesAuto; // 0x58(0x8)
	struct FName DetailBg; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MysticalSkinSchemeData
// Size: 0x70 (Inherited: 0x10)
struct FMysticalSkinSchemeData : FDescRowBase
{
	struct FName HeroPropsId; // 0x10(0x8)
	struct FName AvatarID; // 0x18(0x8)
	struct FName Name; // 0x20(0x8)
	struct FSoftObjectPath DataTablePath; // 0x28(0x18)
	struct TArray<struct FSoftObjectPath> EditorDataTablePaths; // 0x40(0x10)
	struct TArray<struct FVector2D> EditorDataTable2Hues; // 0x50(0x10)
	struct TArray<struct FName> TextureKeyNames; // 0x60(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropsMaterialParamInfo
// Size: 0x68 (Inherited: 0x0)
struct FHeroPropsMaterialParamInfo
{
	struct FName SlotName; // 0x0(0x8)
	struct TArray<struct FHeroPropMaterialFloatParamDesc> FloatParamInfos; // 0x8(0x10)
	struct TArray<struct FHeroPropMaterialVectorParamDesc> VectorParamInfos; // 0x18(0x10)
	struct TArray<struct FHeroPropMaterialVector2DParamDesc> Vector2DParamInfos; // 0x28(0x10)
	struct TArray<struct FHeroPropMaterialVector4ParamDesc> Vector4ParamInfos; // 0x38(0x10)
	struct TArray<struct FHeroPropMaterialColorKeyParamDesc> ColorKeyParamInfos; // 0x48(0x10)
	struct TArray<struct FHeroPropMaterialSoftObjectPathParamDesc> SoftObjectPathParamInfos; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MysticalSkinSchemeUnit
// Size: 0x78 (Inherited: 0x0)
struct FMysticalSkinSchemeUnit
{
	struct FHeroPropsMaterialParamInfo BaseMaterialParams; // 0x0(0x68)
	struct TArray<struct FHeroPropsMaterialParamInfo> ExtentsMaterialParams; // 0x68(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MysticalSkinSchemeForHeroProps
// Size: 0x90 (Inherited: 0x10)
struct FMysticalSkinSchemeForHeroProps : FDescRowBase
{
	struct FName SchemeID; // 0x10(0x8)
	struct FMysticalSkinSchemeUnit UIScheme; // 0x18(0x78)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropMaterialParamDescBase
// Size: 0xC (Inherited: 0x0)
struct FHeroPropMaterialParamDescBase
{
	struct FName ParamName; // 0x0(0x8)
	uint8_t bCanRandom : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t BelongArea; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct DFMGlobalDefines.SoftObjectPathParam
// Size: 0x30 (Inherited: 0x0)
struct FSoftObjectPathParam
{
	struct FSoftObjectPath PathForMobile; // 0x0(0x18)
	struct FSoftObjectPath PathForPC; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropMaterialSoftObjectPathParamDesc
// Size: 0x60 (Inherited: 0xC)
struct FHeroPropMaterialSoftObjectPathParamDesc : FHeroPropMaterialParamDescBase
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FSoftObjectPathParam ParamValue; // 0x10(0x30)
	struct TArray<struct FSoftObjectPath> RandomSources; // 0x40(0x10)
	struct TArray<struct FSoftObjectPathParam> RandomSourcesNew; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropMaterialColorKeyParamDesc
// Size: 0x30 (Inherited: 0xC)
struct FHeroPropMaterialColorKeyParamDesc : FHeroPropMaterialParamDescBase
{
	struct FLinearColor ParamValue; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FLinearColor> RandomSources; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropMaterialVector4ParamDesc
// Size: 0x30 (Inherited: 0xC)
struct FHeroPropMaterialVector4ParamDesc : FHeroPropMaterialParamDescBase
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FVector4 ParamValue; // 0x10(0x10)
	struct TArray<struct FVector4> RandomSources; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropMaterialVector2DParamDesc
// Size: 0x28 (Inherited: 0xC)
struct FHeroPropMaterialVector2DParamDesc : FHeroPropMaterialParamDescBase
{
	struct FVector2D ParamValue; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FVector2D> RandomSources; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropMaterialVectorParamDesc
// Size: 0x28 (Inherited: 0xC)
struct FHeroPropMaterialVectorParamDesc : FHeroPropMaterialParamDescBase
{
	struct FVector ParamValue; // 0xC(0xC)
	struct TArray<struct FVector> RandomSources; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroPropMaterialFloatParamDesc
// Size: 0x20 (Inherited: 0xC)
struct FHeroPropMaterialFloatParamDesc : FHeroPropMaterialParamDescBase
{
	float ParamValue; // 0xC(0x4)
	struct TArray<float> RandomSources; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ChargeOfferId
// Size: 0x30 (Inherited: 0x10)
struct FChargeOfferId : FDescRowBase
{
	struct FString channelID; // 0x10(0x10)
	struct FString OfferId; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ChatMinorLimitRegion
// Size: 0x20 (Inherited: 0x10)
struct FChatMinorLimitRegion : FDescRowBase
{
	struct FString RegionNumCode; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionRoomWeaponRackConfig
// Size: 0x80 (Inherited: 0x10)
struct FCollectionRoomWeaponRackConfig : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform OnCabinetTransform; // 0x20(0x30)
	struct FTransform OnWallTransform; // 0x50(0x30)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionRoomLimitedCollectionConfig
// Size: 0x40 (Inherited: 0x10)
struct FCollectionRoomLimitedCollectionConfig : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FVector Location; // 0x18(0xC)
	struct FRotator Rotator; // 0x24(0xC)
	struct FVector Scale; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponRackUnlockCondition
// Size: 0x50 (Inherited: 0x10)
struct FWeaponRackUnlockCondition : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t LimitNum; // 0x14(0x4)
	int32_t Sort; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString SlotUnlockCondition; // 0x20(0x10)
	int32_t SlotUnlockMoney; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString SlotUnlockCostList; // 0x38(0x10)
	uint8_t CostListBindIsAllowed : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionRoomConstant
// Size: 0x20 (Inherited: 0x10)
struct FCollectionRoomConstant : FDescRowBase
{
	struct FName Name; // 0x10(0x8)
	struct FName Constant; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionRoomCollection
// Size: 0xB8 (Inherited: 0x10)
struct FCollectionRoomCollection : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t SlotType; // 0x14(0x4)
	int32_t SlotSubType; // 0x18(0x4)
	int32_t SlotId; // 0x1C(0x4)
	struct FName ItemID; // 0x20(0x8)
	struct FString Level1Item; // 0x28(0x10)
	struct FString Level1ItemBind; // 0x38(0x10)
	struct FString Level1ItemQuan; // 0x48(0x10)
	struct FString Level2Item; // 0x58(0x10)
	struct FString Level2ItemBind; // 0x68(0x10)
	struct FString Level2ItemQuan; // 0x78(0x10)
	int32_t Type; // 0x88(0x4)
	uint8_t IsLimited : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	int32_t CameraType; // 0x90(0x4)
	int32_t CameraID; // 0x94(0x4)
	float CameraDistanceRatio; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FString SKUBackground; // 0xA0(0x10)
	struct FName OptionalDisplayModel; // 0xB0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.Collection2DDisplay
// Size: 0x28 (Inherited: 0x10)
struct FCollection2DDisplay : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FString LimitedRevealTime; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionRoomDIY
// Size: 0x48 (Inherited: 0x10)
struct FCollectionRoomDIY : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t RackSlotID; // 0x14(0x4)
	int32_t DIYRackID; // 0x18(0x4)
	int32_t SlotType; // 0x1C(0x4)
	struct FString BannedItemID; // 0x20(0x10)
	int32_t SortID; // 0x30(0x4)
	int32_t CameraID; // 0x34(0x4)
	struct FString DisplayID; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionTab
// Size: 0xA0 (Inherited: 0x10)
struct FCollectionTab : FDescRowBase
{
	int32_t PageID; // 0x10(0x4)
	int32_t MainTabId; // 0x14(0x4)
	int32_t SubTabId; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText MainTabName; // 0x20(0x18)
	struct FText SubTabName; // 0x38(0x18)
	int32_t MainTabOrder; // 0x50(0x4)
	int32_t SubTabOrder; // 0x54(0x4)
	int32_t bHide; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<int32_t> MainTabToMainTypes; // 0x60(0x10)
	struct TArray<int32_t> MainTabToSubTypes; // 0x70(0x10)
	struct TArray<int32_t> SubTabToMainTypes; // 0x80(0x10)
	struct TArray<int32_t> SubTabToSubTypes; // 0x90(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponShowLightData
// Size: 0x70 (Inherited: 0x10)
struct FWeaponShowLightData : FDescRowBase
{
	struct FString LightID; // 0x10(0x10)
	struct FSoftClassPath LightBPPath; // 0x20(0x18)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform LightBPTransform; // 0x40(0x30)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponSkinSceneData
// Size: 0x40 (Inherited: 0x10)
struct FWeaponSkinSceneData : FDescRowBase
{
	struct FString WeaponSkinId; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> SubLevelNameGroup; // 0x20(0x10)
	struct FName LightGroupName; // 0x30(0x8)
	struct FName HeightFogName; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponNameAreaData
// Size: 0x38 (Inherited: 0x10)
struct FWeaponNameAreaData : FDescRowBase
{
	struct FString WeaponID; // 0x10(0x10)
	struct FVector NameAreaLocOffset; // 0x20(0xC)
	struct FRotator NameAreaRotation; // 0x2C(0xC)
};

// Object: ScriptStruct DFMGlobalDefines.ThemeBackgroundData
// Size: 0x48 (Inherited: 0x10)
struct FThemeBackgroundData : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t BundleThemeId; // 0x18(0x8)
	struct TArray<int64_t> CollectionWeaponIds; // 0x20(0x10)
	struct FSoftObjectPath SceneBGPath; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionWeaponDataConfig
// Size: 0x38 (Inherited: 0x10)
struct FCollectionWeaponDataConfig : FDescRowBase
{
	struct FName DisplayCtrlType; // 0x10(0x8)
	struct FSoftObjectPath WeaponDataTablePath; // 0x18(0x18)
	struct FName TableName; // 0x30(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CollectionWeaponData
// Size: 0x58 (Inherited: 0x10)
struct FCollectionWeaponData : FDescRowBase
{
	struct FString WeaponID; // 0x10(0x10)
	struct FVector WeaponLocation; // 0x20(0xC)
	struct FRotator WeaponRotation; // 0x2C(0xC)
	struct FVector WeaponScale; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString CameraType; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CombatRoleAbilityDataInfo
// Size: 0x58 (Inherited: 0x10)
struct FCombatRoleAbilityDataInfo : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t CombatRoleAbilityID; // 0x18(0x8)
	int64_t GameMode; // 0x20(0x8)
	int64_t ThrowWeapon; // 0x28(0x8)
	int32_t ThrowWeaponNum; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString AbilityList; // 0x38(0x10)
	struct FString SpecialItemIcon; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CommonCompletionRow
// Size: 0x58 (Inherited: 0x8)
struct FCommonCompletionRow : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FString Desc; // 0x10(0x10)
	struct FText CommonCompletionSystemTitle; // 0x20(0x18)
	int64_t CategoryType; // 0x38(0x8)
	int64_t CheckBoxType; // 0x40(0x8)
	int64_t ShowOwnerItems; // 0x48(0x8)
	int64_t PriceComparisonAlert; // 0x50(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CommonErrorTextRow
// Size: 0x30 (Inherited: 0x10)
struct FCommonErrorTextRow : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Message; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.StashPropExpireConfig
// Size: 0x40 (Inherited: 0x10)
struct FStashPropExpireConfig : FDescRowBase
{
	struct FName PropId; // 0x10(0x8)
	int32_t ExpireType; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString Duration; // 0x20(0x10)
	struct FString TheDateTime; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HongBaoConstValueRow
// Size: 0x28 (Inherited: 0x10)
struct FHongBaoConstValueRow : FDescRowBase
{
	struct FName ID; // 0x10(0x8)
	struct FString Value; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HongBaoRandomGenerationRow
// Size: 0x28 (Inherited: 0x10)
struct FHongBaoRandomGenerationRow : FDescRowBase
{
	struct FName ConfigId; // 0x10(0x8)
	float CoinsLowerLimit; // 0x18(0x4)
	float CoinsUpperLimit; // 0x1C(0x4)
	float Weight; // 0x20(0x4)
	int32_t RandomTimes; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.HongBaoRow
// Size: 0x30 (Inherited: 0x10)
struct FHongBaoRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	int64_t CoinsLowerLimit; // 0x18(0x8)
	int64_t CoinsUpperLimit; // 0x20(0x8)
	int32_t Generation; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RedEnvelopeRow
// Size: 0x28 (Inherited: 0x10)
struct FRedEnvelopeRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	int32_t CostTimes; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t CointainCoins; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.DogTagCustomInfoRow
// Size: 0x50 (Inherited: 0x10)
struct FDogTagCustomInfoRow : FDescRowBase
{
	int32_t CustomID; // 0x10(0x4)
	struct FName ItemID; // 0x14(0x8)
	int32_t MajorRankID; // 0x1C(0x4)
	struct FText ItemName; // 0x20(0x18)
	struct FText ItemDesc; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.DFMItemToInventoryRuleRow
// Size: 0x50 (Inherited: 0x10)
struct FDFMItemToInventoryRuleRow : FDescRowBase
{
	struct FName IDPrefix; // 0x10(0x8)
	int32_t Inventory; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText InventoryName; // 0x20(0x18)
	struct FText Desc; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HallWeaponItemDisplayTableRow
// Size: 0x50 (Inherited: 0x10)
struct FHallWeaponItemDisplayTableRow : FDescRowBase
{
	struct FTransform TranformOffset; // 0x10(0x30)
	uint16_t DisplayType; // 0x40(0x2)
	uint8_t Pad_0x42[0xE]; // 0x42(0xE)
};

// Object: ScriptStruct DFMGlobalDefines.AbilityItemRow
// Size: 0x20 (Inherited: 0x10)
struct FAbilityItemRow : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	uint8_t SwitchWhenAmmoEmpty : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ItemTagFilterMap
// Size: 0x38 (Inherited: 0x10)
struct FItemTagFilterMap : FDescRowBase
{
	uint16_t TagId; // 0x10(0x2)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct FText Desc; // 0x18(0x18)
	int32_t bIsMainTag; // 0x30(0x4)
	int32_t ParentTagID; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.PreloadLevelConfig
// Size: 0x38 (Inherited: 0x10)
struct FPreloadLevelConfig : FDescRowBase
{
	struct FName MapName; // 0x10(0x8)
	struct FString MapPath; // 0x18(0x10)
	struct TArray<struct FString> NeedLoadedSubLevelsPath; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ToolConfigRow
// Size: 0x20 (Inherited: 0x10)
struct FToolConfigRow : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	int32_t MaxUseCount; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ResurrectionCoinRuleRow
// Size: 0x30 (Inherited: 0x10)
struct FResurrectionCoinRuleRow : FDescRowBase
{
	int64_t DifficultLevel; // 0x10(0x8)
	int32_t DeathCount; // 0x18(0x4)
	int32_t ResurrectionCoinCount; // 0x1C(0x4)
	int32_t ResurrectionTempCoin; // 0x20(0x4)
	int32_t AutoResurrectionTimeStep; // 0x24(0x4)
	float UseResurrectionColdDownTime; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.InGameMallConfigRow
// Size: 0x88 (Inherited: 0x10)
struct FInGameMallConfigRow : FDescRowBase
{
	int64_t ExchangeID; // 0x10(0x8)
	int64_t ItemID; // 0x18(0x8)
	int32_t PageID; // 0x20(0x4)
	int32_t PagePropTypes; // 0x24(0x4)
	int32_t Level; // 0x28(0x4)
	struct FName Name; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TSoftObjectPtr<UObject> ItemIcon; // 0x38(0x28)
	int32_t AttachPosition; // 0x60(0x4)
	float ConsumeMerit; // 0x64(0x4)
	int32_t Quality; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FItemID ItemIDInBP; // 0x70(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponDescInfo
// Size: 0x10 (Inherited: 0x0)
struct FWeaponDescInfo
{
	uint32_t ExtraInfoDataVesion; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UObject* ExtraInfoData; // 0x8(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HitAudioRow
// Size: 0xCE8 (Inherited: 0x10)
struct FHitAudioRow : FDescRowBase
{
	int32_t HitAudioID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FHitAudioConfig HitBody; // 0x18(0xA0)
	struct FHitAudioConfig HitBodyWithArmor; // 0xB8(0xA0)
	struct FHitAudioConfig HitBodyWithArmorMachineGunAI; // 0x158(0xA0)
	struct FHitAudioConfig HitBodyWithArmorStagger; // 0x1F8(0xA0)
	struct FHitAudioConfig HitShield; // 0x298(0xA0)
	struct FHitAudioConfig HitHeadWithoutHelmet; // 0x338(0xA0)
	struct FHitAudioConfig HitHelmet; // 0x3D8(0xA0)
	struct FHitAudioConfig HitHelmetBroken; // 0x478(0xA0)
	struct FHitAudioConfig HitArmorBroken; // 0x518(0xA0)
	struct FHitAudioConfig KnockDownByHitBody; // 0x5B8(0xA0)
	struct FHitAudioConfig KnockDownByHitHead; // 0x658(0xA0)
	struct FHitAudioConfig KilledByHitBody; // 0x6F8(0xA0)
	struct FHitAudioConfig KilledByHitHead; // 0x798(0xA0)
	struct FHitAudioConfig HitVehicleLight; // 0x838(0xA0)
	struct FHitAudioConfig HitVehicleNormal; // 0x8D8(0xA0)
	struct FHitAudioConfig HitVehicleHeavy; // 0x978(0xA0)
	struct FHitAudioConfig KillVehicle; // 0xA18(0xA0)
	struct FHitAudioConfig HitSkillActor; // 0xAB8(0xA0)
	struct TMap<int32_t, struct FHitAudioConfig> HitSkillActorDetailMap; // 0xB58(0x50)
	struct FHitAudioConfig CounterProjectile; // 0xBA8(0xA0)
	struct FHitAudioConfig BreakShieldGlass; // 0xC48(0xA0)
};

// Object: ScriptStruct DFMGlobalDefines.BeHitAudioRow
// Size: 0x30 (Inherited: 0x10)
struct FBeHitAudioRow : FDescRowBase
{
	EBeHitedType BeHitedType; // 0x10(0x1)
	EDamageType DamageType; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct UGPAudioEventAsset* FPPBeHited_2DAudio; // 0x18(0x8)
	struct UGPAudioEventAsset* BeHitFromFPP_2DAudio; // 0x20(0x8)
	struct UGPAudioEventAsset* BeHit_3DAudio; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ArmorDurabilityDamageFormula
// Size: 0x30 (Inherited: 0x10)
struct FArmorDurabilityDamageFormula : FDescRowBase
{
	uint32_t FormualID; // 0x10(0x4)
	float DamageFator; // 0x14(0x4)
	float ArmorDefendFator; // 0x18(0x4)
	float RandomValue; // 0x1C(0x4)
	float PenetrateFatorA; // 0x20(0x4)
	float ArmorFatorB; // 0x24(0x4)
	float ArmorMinusNumber60; // 0x28(0x4)
	float SumDivideNumberN; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SafeBoxTypeRow
// Size: 0x20 (Inherited: 0x10)
struct FSafeBoxTypeRow : FDescRowBase
{
	uint64_t SafeBoxId; // 0x10(0x8)
	uint8_t SafeBoxType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ModularWeaponDescInfo
// Size: 0x10 (Inherited: 0x0)
struct FModularWeaponDescInfo
{
	struct TArray<struct FGPModularWeaponPartNode> WeaponParts; // 0x0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ItemHoldAndUseRow
// Size: 0xB8 (Inherited: 0x10)
struct FItemHoldAndUseRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FName Desc; // 0x18(0x8)
	struct TSoftClassPtr<struct AActor*> HoldAndUseItemClass; // 0x20(0x28)
	struct TSoftObjectPtr<UPaperSprite> FireIcon; // 0x48(0x28)
	uint8_t bEnablePreview : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct TSoftClassPtr<struct AActor*> PreviewClass; // 0x78(0x28)
	float PreviewDistance; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct UGPAudioEventAsset* SuccGPAudioEvent; // 0xA8(0x8)
	struct UGPAudioEventAsset* FailedGPAudioEvent; // 0xB0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ItemHealth_Armor
// Size: 0x8 (Inherited: 0x0)
struct FItemHealth_Armor
{
	uint8_t bCanUseOnArmor : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bCanUseOnHelmet : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float RepairEfficient; // 0x4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ItemHealthPackageRow
// Size: 0x108 (Inherited: 0x10)
struct FItemHealthPackageRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FName Desc; // 0x18(0x8)
	struct TArray<EUseItemFunctionType> FunctionTags; // 0x20(0x10)
	EItemHealthSubType SubType; // 0x30(0x4)
	int32_t HealAmount; // 0x34(0x4)
	int32_t HealArmor; // 0x38(0x4)
	struct FItemHealth_Armor ArmorInfo; // 0x3C(0x8)
	int32_t CureBodyPartNum; // 0x44(0x4)
	float CureBodyConsume; // 0x48(0x4)
	float AddBuffConsume; // 0x4C(0x4)
	struct TArray<struct FItemHealthPackageRow_SkillCD> SkillCDReduces; // 0x50(0x10)
	EItemHealthTriggerType TriggerType; // 0x60(0x1)
	uint8_t bDynamicUseTime : 1; // 0x61(0x1), Mask(0x1)
	uint8_t BitPad_0x61_1 : 7; // 0x61(0x1)
	uint8_t Pad_0x62[0x2]; // 0x62(0x2)
	float TimeToUse; // 0x64(0x4)
	float Period; // 0x68(0x4)
	float PreUseTime; // 0x6C(0x4)
	float AfterUseTime; // 0x70(0x4)
	int32_t MaxUseCnt; // 0x74(0x4)
	int32_t MovementSpeedID; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct TArray<int32_t> AddBuffs; // 0x80(0x10)
	struct TArray<int32_t> AddRandomBuff; // 0x90(0x10)
	struct TArray<EUseItemAddBuffFunctionType> AddBuffConditions; // 0xA0(0x10)
	EItemHealthBuffTriggerType AddBuffTriggerType; // 0xB0(0x1)
	uint8_t isDurabilityItem; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x2]; // 0xB2(0x2)
	int32_t Durability; // 0xB4(0x4)
	struct TArray<struct FRepairArmorRatio> RepairArmorIdList; // 0xB8(0x10)
	struct TArray<int32_t> DisplayAddBuffs; // 0xC8(0x10)
	struct TArray<int32_t> DisplayRemoveBuffs; // 0xD8(0x10)
	struct FText FunctionDes; // 0xE8(0x18)
	int32_t MedicineType; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RepairArmorRatio
// Size: 0x10 (Inherited: 0x0)
struct FRepairArmorRatio
{
	uint64_t ArmorId; // 0x0(0x8)
	float RepairRatio; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ItemHealthPackageRow_SkillCD
// Size: 0x10 (Inherited: 0x0)
struct FItemHealthPackageRow_SkillCD
{
	uint8_t bUseSkillId : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	ECharingSlot AddAbilityCDSkillSlot; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t AddAbilityCDSkillId; // 0x4(0x4)
	float AddAbilityCD; // 0x8(0x4)
	uint8_t AddAbilityCDIsPercent : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.ItemHealthSortTable
// Size: 0x20 (Inherited: 0x10)
struct FItemHealthSortTable : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	int32_t SortIndex; // 0x18(0x4)
	int32_t SortWeight; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ItemHealthRecommendRow
// Size: 0x30 (Inherited: 0x10)
struct FItemHealthRecommendRow : FDescRowBase
{
	EItemHealthRecommendType RecommendType; // 0x10(0x4)
	float Param01; // 0x14(0x4)
	uint8_t bPersistent : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t Priority; // 0x1C(0x4)
	struct TArray<uint64_t> RecommandItemIds; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeadEquipApparenceAdaptationRow
// Size: 0x28 (Inherited: 0x10)
struct FHeadEquipApparenceAdaptationRow : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	uint32_t HeadTopPrioirty; // 0x18(0x4)
	uint32_t EyePrioirty; // 0x1C(0x4)
	uint32_t FacePrioirty; // 0x20(0x4)
	uint32_t EarPrioirty; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterModifyBoneInfo
// Size: 0x10 (Inherited: 0x0)
struct FCharacterModifyBoneInfo
{
	struct TArray<struct FBoneModifyInfo> LevelModifyBoneInfos; // 0x0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.WatchModifyInfo
// Size: 0x68 (Inherited: 0x0)
struct FWatchModifyInfo
{
	struct FCharacterModifyBoneInfo DefaultWatchModifyBoneInfo; // 0x0(0x10)
	struct TMap<struct FName, struct FCharacterModifyBoneInfo> CustomWatchModifyBoneInfos; // 0x10(0x50)
	struct FName AttachToName; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.WatchApparenceAdaptationRow
// Size: 0x148 (Inherited: 0x10)
struct FWatchApparenceAdaptationRow : FDescRowBase
{
	struct FWatchModifyInfo FPPWatchModifyInfo; // 0x10(0x68)
	struct FWatchModifyInfo TPPWatchModifyInfo; // 0x78(0x68)
	struct FWatchModifyInfo UIWatchModifyInfo; // 0xE0(0x68)
};

// Object: ScriptStruct DFMGlobalDefines.BoneModifyInfo
// Size: 0x2C (Inherited: 0x0)
struct FBoneModifyInfo
{
	struct FName BoneName; // 0x0(0x8)
	struct FVector BoneTransformOffset; // 0x8(0xC)
	struct FRotator BoneRotationOffset; // 0x14(0xC)
	struct FVector BoneScaleOffset; // 0x20(0xC)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterModifyBoneInfoListForShiftShape
// Size: 0x10 (Inherited: 0x0)
struct FCharacterModifyBoneInfoListForShiftShape
{
	struct TArray<struct FCharacterModifyBoneInfoForShiftShape> CharacterModifyBoneInfo; // 0x0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HelmetApparenceAdaptationForShiftShapeRow
// Size: 0x60 (Inherited: 0x10)
struct FHelmetApparenceAdaptationForShiftShapeRow : FDescRowBase
{
	struct TMap<struct FName, struct FCharacterModifyBoneInfoListForShiftShape> CustomModifyBoneInfos; // 0x10(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterModifyBoneInfoForShiftShape
// Size: 0x18 (Inherited: 0x0)
struct FCharacterModifyBoneInfoForShiftShape
{
	EHeroShapeShiftType ShapeType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FBoneModifyInfo> LevelModifyBoneInfos; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HelmetApparenceAdaptationRow
// Size: 0x88 (Inherited: 0x10)
struct FHelmetApparenceAdaptationRow : FDescRowBase
{
	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)
	struct TMap<struct FName, struct FCharacterModifyBoneInfo> CustomModifyBoneInfos; // 0x30(0x50)
	uint8_t bCanMerge : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ChestHangingApparenceAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FChestHangingApparenceAdaptationRow : FDescRowBase
{
	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BreastPlateAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FBreastPlateAdaptationRow : FDescRowBase
{
	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BagApparenceAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FBagApparenceAdaptationRow : FDescRowBase
{
	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AcquireItemInspectActionRow
// Size: 0x28 (Inherited: 0x10)
struct FAcquireItemInspectActionRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct TArray<struct UActorComponent*> ItemFunComponents; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentPartRow
// Size: 0x28 (Inherited: 0x10)
struct FEquipmentPartRow : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	int32_t UseCnt; // 0x18(0x4)
	int32_t GainEquipPosLength; // 0x1C(0x4)
	int32_t GainEquipPosWidth; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFMEquipmentRandomRuleRow
// Size: 0x48 (Inherited: 0x10)
struct FDFMEquipmentRandomRuleRow : FDescRowBase
{
	struct FText Name; // 0x10(0x18)
	struct TArray<uint64_t> GuardianItemID; // 0x28(0x10)
	struct TArray<uint64_t> TraitorItemID; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ItemUseActionLimit
// Size: 0x3 (Inherited: 0x0)
struct FItemUseActionLimit
{
	uint8_t CanCrouch : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t CanProne : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t CanLean : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
};

// Object: ScriptStruct DFMGlobalDefines.ThreeInspectAnimConfig
// Size: 0x290 (Inherited: 0x0)
struct FThreeInspectAnimConfig
{
	struct TSoftObjectPtr<UAnimSequenceBase> FPPThreeAnimPath_Start; // 0x0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPThreeAnimPath_Loop; // 0x28(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPThreeAnimPath_Stop; // 0x50(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> TPPThreeAnimPath_Start; // 0x78(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> TPPThreeAnimPath_Loop; // 0xA0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> TPPThreeAnimPath_Stop; // 0xC8(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPThreeAnimPath_StartItem; // 0xF0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPThreeAnimPath_LoopItem; // 0x118(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPThreeAnimPath_StopItem; // 0x140(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> TPPThreeAnimPath_StartItem; // 0x168(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> TPPThreeAnimPath_LoopItem; // 0x190(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> TPPThreeAnimPath_StopItem; // 0x1B8(0x28)
	struct TSoftObjectPtr<UBlendSpaceBase> FPPThreeAnimPath_AOItem; // 0x1E0(0x28)
	struct TSoftObjectPtr<UBlendSpaceBase> TPPThreeAnimPath_AOItem; // 0x208(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> FPPItemBPPath; // 0x230(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> TPPItemBPPath; // 0x258(0x28)
	float ThreeAnimTotalLen; // 0x280(0x4)
	float ThreeAnimStartLen; // 0x284(0x4)
	float ThreeAnimStopLen; // 0x288(0x4)
	uint8_t Pad_0x28C[0x4]; // 0x28C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.UseItemAnimSet
// Size: 0x140 (Inherited: 0x0)
struct FUseItemAnimSet
{
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqStand; // 0x0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqStandFPP; // 0x28(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqCrouch; // 0x50(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqCrouchFPP; // 0x78(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqProne; // 0xA0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqProneFPP; // 0xC8(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqSliding; // 0xF0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqSlidingFPP; // 0x118(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.DFMCommonItemMeshPathRow
// Size: 0xF80 (Inherited: 0x10)
struct FDFMCommonItemMeshPathRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FSoftObjectPath Item1PMeshPath; // 0x30(0x18)
	struct FName Item1PSocketName; // 0x48(0x8)
	struct FName Item1PInspectionSocketName; // 0x50(0x8)
	struct FSoftObjectPath Item3PMeshPath; // 0x58(0x18)
	struct FName Item3PSocketName; // 0x70(0x8)
	struct FName Item3PInspectionSocketName; // 0x78(0x8)
	struct FSoftObjectPath ItemDroppedMeshPath; // 0x80(0x18)
	struct FSoftObjectPath ItemUIMeshPath; // 0x98(0x18)
	struct FVector ItemUIMeshDisplayRotation; // 0xB0(0xC)
	struct FVector ItemUIMeshDisplayScale; // 0xBC(0xC)
	struct FVector ItemUIMeshDisplayLocation; // 0xC8(0xC)
	EItemUseFunction ItemUseFunction; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	int32_t SkillId; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct TSoftClassPtr<struct UActorComponent*> ItemFunComponent; // 0xE0(0x28)
	struct TArray<EUseItemFunctionType> LimitFunctionTags; // 0x108(0x10)
	struct FItemUseActionLimit ItemUseActionLimit; // 0x118(0x3)
	uint8_t bLoopAnimtion : 1; // 0x11B(0x1), Mask(0x1)
	uint8_t BitPad_0x11B_1 : 7; // 0x11B(0x1)
	uint8_t bPlayFinishAnimWhenInterupt : 1; // 0x11C(0x1), Mask(0x1)
	uint8_t BitPad_0x11C_1 : 7; // 0x11C(0x1)
	uint8_t Pad_0x11D[0x3]; // 0x11D(0x3)
	struct FUseItemAnimSet ItemAnimSet; // 0x120(0x140)
	struct FUseItemAnimSet PlayerAnimSet; // 0x260(0x140)
	struct FUseItemAnimSet ItemAnimSetPreUse; // 0x3A0(0x140)
	struct FUseItemAnimSet PlayerAnimSetPreUse; // 0x4E0(0x140)
	struct FUseItemAnimSet ItemAnimSetAfterUse; // 0x620(0x140)
	struct FUseItemAnimSet PlayerAnimSetAfterUse; // 0x760(0x140)
	float PlayerAnimEndTime; // 0x8A0(0x4)
	uint8_t Pad_0x8A4[0x4]; // 0x8A4(0x4)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqItemInspectionFPP; // 0x8A8(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqItemInspectionTPP; // 0x8D0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqCharacterInspectionFPP; // 0x8F8(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqCharacterInspectionTPP; // 0x920(0x28)
	uint8_t bUseRandomItemInspectionData : 1; // 0x948(0x1), Mask(0x1)
	uint8_t BitPad_0x948_1 : 7; // 0x948(0x1)
	uint8_t Pad_0x949[0x7]; // 0x949(0x7)
	struct TArray<struct FRandomItemInspectionData> RandomItemInspectionDataArray; // 0x950(0x10)
	uint8_t bUseBasePoseFPP : 1; // 0x960(0x1), Mask(0x1)
	uint8_t BitPad_0x960_1 : 7; // 0x960(0x1)
	uint8_t bUseBasePoseTPP : 1; // 0x961(0x1), Mask(0x1)
	uint8_t BitPad_0x961_1 : 7; // 0x961(0x1)
	uint8_t Pad_0x962[0x2]; // 0x962(0x2)
	struct FName BasePosAnimRowNameBase; // 0x964(0x8)
	struct FName BasePosAnimRowName; // 0x96C(0x8)
	struct FName BasePosAnimOverrideRowName; // 0x974(0x8)
	uint8_t bUseInspectPro : 1; // 0x97C(0x1), Mask(0x1)
	uint8_t BitPad_0x97C_1 : 7; // 0x97C(0x1)
	uint8_t bIsRedBag : 1; // 0x97D(0x1), Mask(0x1)
	uint8_t BitPad_0x97D_1 : 7; // 0x97D(0x1)
	uint8_t Pad_0x97E[0x2]; // 0x97E(0x2)
	struct FInspectProAnimConfig InspectProAnimConfig; // 0x980(0x280)
	uint8_t bEnableHighValueItemInspectIK : 1; // 0xC00(0x1), Mask(0x1)
	uint8_t BitPad_0xC00_1 : 7; // 0xC00(0x1)
	uint8_t bUseThreeInspect : 1; // 0xC01(0x1), Mask(0x1)
	uint8_t BitPad_0xC01_1 : 7; // 0xC01(0x1)
	uint8_t Pad_0xC02[0x6]; // 0xC02(0x6)
	struct FThreeInspectAnimConfig ThreeInspectAnimConfig; // 0xC08(0x290)
	struct TSoftObjectPtr<UPaperSprite> ItemIcon; // 0xE98(0x28)
	struct TSoftObjectPtr<UPaperSprite> ItemSpriteIcon; // 0xEC0(0x28)
	struct FSoftObjectPath ItemIconPath; // 0xEE8(0x18)
	struct FSoftObjectPath ItemIconPathAfterFold; // 0xF00(0x18)
	struct FSoftObjectPath WhiteItemIconPath; // 0xF18(0x18)
	uint32_t IconConfigId; // 0xF30(0x4)
	struct FVector PickupMeshDisplayRotation; // 0xF34(0xC)
	struct FVector PickupMeshDisplayScale; // 0xF40(0xC)
	struct FVector PickupMeshDisplayLocation; // 0xF4C(0xC)
	struct FVector CollectionRoomPickupLocation; // 0xF58(0xC)
	struct FRotator CollectionRoomPickupRotation; // 0xF64(0xC)
	struct FVector CollectionRoomPickupScale; // 0xF70(0xC)
	uint8_t Pad_0xF7C[0x4]; // 0xF7C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RandomItemInspectionData
// Size: 0xA8 (Inherited: 0x0)
struct FRandomItemInspectionData
{
	int32_t RandomId; // 0x0(0x4)
	int32_t RandomWeight; // 0x4(0x4)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqItemInspectionFPP; // 0x8(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqItemInspectionTPP; // 0x30(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqCharacterInspectionFPP; // 0x58(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqCharacterInspectionTPP; // 0x80(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.ThreeInspectAnim
// Size: 0x40 (Inherited: 0x0)
struct FThreeInspectAnim
{
	struct UAnimSequenceBase* ThreeAnim_Start; // 0x0(0x8)
	struct UAnimSequenceBase* ThreeAnim_Loop; // 0x8(0x8)
	struct UAnimSequenceBase* ThreeAnim_Stop; // 0x10(0x8)
	struct UAnimSequenceBase* ThreeAnim_StartItem; // 0x18(0x8)
	struct UAnimSequenceBase* ThreeAnim_LoopItem; // 0x20(0x8)
	struct UAnimSequenceBase* ThreeAnim_StopItem; // 0x28(0x8)
	struct UBlendSpaceBase* ThreeAnim_AO; // 0x30(0x8)
	struct UObject* ItemAnimInstanceClass; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.DFMCommonItemStaticIconPathRow
// Size: 0x30 (Inherited: 0x10)
struct FDFMCommonItemStaticIconPathRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FSoftObjectPath ItemIconPath; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.DFMEquipmentGERow
// Size: 0x30 (Inherited: 0x10)
struct FDFMEquipmentGERow : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectArray; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.DFMBuffGEDurationRow
// Size: 0x40 (Inherited: 0x10)
struct FDFMBuffGEDurationRow : FDescRowBase
{
	struct FName BuffType; // 0x10(0x8)
	struct FString Name; // 0x18(0x10)
	int32_t BuffPart; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct UGameplayEffect*> GameplayEffectArray; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.DFMBlueprintItemRow
// Size: 0xA8 (Inherited: 0x10)
struct FDFMBlueprintItemRow : FDescRowBase
{
	struct FName ID; // 0x10(0x8)
	struct FText BlueprintName; // 0x18(0x18)
	struct FName BattlePositionID; // 0x30(0x8)
	struct FName BrandID; // 0x38(0x8)
	struct FText SeriesDes; // 0x40(0x18)
	struct FText Blueprintstory; // 0x58(0x18)
	int32_t RecvNum; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FText MaterialList; // 0x78(0x18)
	struct FText MaterialDes; // 0x90(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.DFMCommonItemRow
// Size: 0x228 (Inherited: 0x10)
struct FDFMCommonItemRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FText SubName; // 0x30(0x18)
	int32_t GameItemType; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FText ShortName; // 0x50(0x18)
	int32_t Quality; // 0x68(0x4)
	int32_t Material; // 0x6C(0x4)
	int32_t MaxStackCount; // 0x70(0x4)
	int32_t Length; // 0x74(0x4)
	int32_t Width; // 0x78(0x4)
	uint8_t CanDecomposed : 1; // 0x7C(0x1), Mask(0x1)
	uint8_t BitPad_0x7C_1 : 7; // 0x7C(0x1)
	uint8_t NeedDropped : 1; // 0x7D(0x1), Mask(0x1)
	uint8_t BitPad_0x7D_1 : 7; // 0x7D(0x1)
	uint8_t CanUsed : 1; // 0x7E(0x1), Mask(0x1)
	uint8_t BitPad_0x7E_1 : 7; // 0x7E(0x1)
	uint8_t CanBeGift : 1; // 0x7F(0x1), Mask(0x1)
	uint8_t BitPad_0x7F_1 : 7; // 0x7F(0x1)
	struct FText Description; // 0x80(0x18)
	struct FText ShortDescription; // 0x98(0x18)
	float Capacity; // 0xB0(0x4)
	int32_t GainEquipPos; // 0xB4(0x4)
	int32_t DefaultCarrySlot; // 0xB8(0x4)
	uint8_t CanStoreInSafeBox : 1; // 0xBC(0x1), Mask(0x1)
	uint8_t BitPad_0xBC_1 : 7; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	int32_t Score; // 0xC0(0x4)
	uint8_t IsCurrency : 1; // 0xC4(0x1), Mask(0x1)
	uint8_t BitPad_0xC4_1 : 7; // 0xC4(0x1)
	uint8_t bCanFastEquip : 1; // 0xC5(0x1), Mask(0x1)
	uint8_t BitPad_0xC5_1 : 7; // 0xC5(0x1)
	uint8_t CannotRecycle : 1; // 0xC6(0x1), Mask(0x1)
	uint8_t BitPad_0xC6_1 : 7; // 0xC6(0x1)
	uint8_t IsModelOnly : 1; // 0xC7(0x1), Mask(0x1)
	uint8_t BitPad_0xC7_1 : 7; // 0xC7(0x1)
	uint8_t bIsCheck : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x3]; // 0xC9(0x3)
	float Weight; // 0xCC(0x4)
	struct FName RecycleMoney; // 0xD0(0x8)
	int32_t RecyclePrice; // 0xD8(0x4)
	int32_t InitialGuidePrice; // 0xDC(0x4)
	int32_t SellPriceRates; // 0xE0(0x4)
	int32_t RedemptionRates; // 0xE4(0x4)
	int32_t DailyRecycleMax; // 0xE8(0x4)
	int32_t MallRecyclePrice; // 0xEC(0x4)
	int32_t BitUsage; // 0xF0(0x4)
	int32_t TagFilterMain; // 0xF4(0x4)
	int32_t TagFilterSub; // 0xF8(0x4)
	int32_t SortWeight; // 0xFC(0x4)
	int32_t Inventory; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct TArray<int32_t> SourceMapId; // 0x108(0x10)
	struct TArray<struct FText> SourceMapTitle; // 0x118(0x10)
	struct TArray<struct FText> SourceMapDesc; // 0x128(0x10)
	int32_t cdid; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct TArray<struct FString> Pictures; // 0x140(0x10)
	struct TArray<struct FWidgetTransform> PictureTransforms; // 0x150(0x10)
	struct FString MallItemIcon; // 0x160(0x10)
	struct FText ShortNameSec; // 0x170(0x18)
	float RecyclePricePercent; // 0x188(0x4)
	float ModifyParam; // 0x18C(0x4)
	float ModifyParam2; // 0x190(0x4)
	float ModifyParamArena; // 0x194(0x4)
	float ModifyParam2Arena; // 0x198(0x4)
	int32_t LootingAudioId; // 0x19C(0x4)
	uint8_t bHighValueItemNeedInspection : 1; // 0x1A0(0x1), Mask(0x1)
	uint8_t BitPad_0x1A0_1 : 7; // 0x1A0(0x1)
	uint8_t Pad_0x1A1[0x7]; // 0x1A1(0x7)
	uint64_t ConnectedPool; // 0x1A8(0x8)
	uint8_t bValuableItem : 1; // 0x1B0(0x1), Mask(0x1)
	uint8_t BitPad_0x1B0_1 : 7; // 0x1B0(0x1)
	uint8_t NoRedPoint : 1; // 0x1B1(0x1), Mask(0x1)
	uint8_t BitPad_0x1B1_1 : 7; // 0x1B1(0x1)
	uint8_t Pad_0x1B2[0x2]; // 0x1B2(0x2)
	int32_t CommercializeType; // 0x1B4(0x4)
	uint64_t JumpId; // 0x1B8(0x8)
	struct FText ButtonDes; // 0x1C0(0x18)
	struct FText EndButtonDes; // 0x1D8(0x18)
	struct FText UnlockTip; // 0x1F0(0x18)
	struct FText UsageTip; // 0x208(0x18)
	uint8_t Pad_0x220[0x8]; // 0x220(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ItemMaterialAssetRow
// Size: 0x90 (Inherited: 0x10)
struct FItemMaterialAssetRow : FDescRowBase
{
	uint64_t ItemMaterialType; // 0x10(0x8)
	struct TSoftObjectPtr<UGPAudioEventAsset> IdentifyAudioEvent; // 0x18(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PickupAudioEvent; // 0x40(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DropAudioEvent; // 0x68(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.InventoryPresetItemRow
// Size: 0x38 (Inherited: 0x10)
struct FInventoryPresetItemRow : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	uint64_t ForceGID; // 0x18(0x8)
	uint64_t Num; // 0x20(0x8)
	EAttachPosition pos; // 0x28(0x4)
	uint8_t bEnabled : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float DurabilityPercent; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ItemPriceRow
// Size: 0x38 (Inherited: 0x10)
struct FItemPriceRow : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	uint32_t Price; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText Desription; // 0x20(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ContainerResourceConfig
// Size: 0x68 (Inherited: 0x10)
struct FContainerResourceConfig : FDescRowBase
{
	struct FName InventoryIdName; // 0x10(0x8)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath; // 0x18(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> AnimClassPath; // 0x40(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.ConversationConstants
// Size: 0x18 (Inherited: 0x10)
struct FConversationConstants : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint32_t Value; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ConversationLines
// Size: 0x60 (Inherited: 0x10)
struct FConversationLines : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint32_t Key; // 0x14(0x4)
	struct FText SpeakerCN; // 0x18(0x18)
	struct FText LinesCN; // 0x30(0x18)
	struct FText Audio; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ConversationProbs
// Size: 0x28 (Inherited: 0x10)
struct FConversationProbs : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint32_t Time; // 0x14(0x4)
	uint32_t Subtime; // 0x18(0x4)
	uint32_t LibraryID; // 0x1C(0x4)
	float LibraryProb; // 0x20(0x4)
	uint32_t Priority; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CurrencyConfig
// Size: 0xA0 (Inherited: 0x10)
struct FCurrencyConfig : FDescRowBase
{
	int32_t CurrencyId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText CurrencyName; // 0x18(0x18)
	struct FText CurrencyDesc; // 0x30(0x18)
	ECurrencyType CurrencyType; // 0x48(0x1)
	ECurrencyBindType BindType; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
	uint64_t ItemID; // 0x50(0x8)
	int32_t UnbindCurrencyId; // 0x58(0x4)
	int32_t BindCurrencyId; // 0x5C(0x4)
	struct FText TransactionDesc; // 0x60(0x18)
	struct FString ImgPath; // 0x78(0x10)
	struct FString RichTxtImgId; // 0x88(0x10)
	uint64_t StoreBuyItemId; // 0x98(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.DepositConstantRow
// Size: 0x20 (Inherited: 0x10)
struct FDepositConstantRow : FDescRowBase
{
	struct FName ID; // 0x10(0x8)
	struct FName Value; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.DepositSortClass
// Size: 0x60 (Inherited: 0x10)
struct FDepositSortClass : FDescRowBase
{
	struct FText ClassName; // 0x10(0x18)
	struct TArray<uint64_t> ItemTypeID; // 0x28(0x10)
	struct TArray<uint64_t> TagId; // 0x38(0x10)
	struct FSoftObjectPath ClassIconPath; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.DeviceAdapterConfig
// Size: 0x40 (Inherited: 0x10)
struct FDeviceAdapterConfig : FDescRowBase
{
	struct FString DeviceModel; // 0x10(0x10)
	struct FString Resolution; // 0x20(0x10)
	int32_t LeftOffset; // 0x30(0x4)
	int32_t RightOffset; // 0x34(0x4)
	int32_t TopOffset; // 0x38(0x4)
	int32_t BottomOffset; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFCAPTCHAConfig
// Size: 0x68 (Inherited: 0x10)
struct FDFCAPTCHAConfig : FDescRowBase
{
	ECAPTCHASceneType SceneType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString APPID; // 0x18(0x10)
	struct FText SceneDescribe; // 0x28(0x18)
	int32_t MaxStayDuration; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString SceneHtml; // 0x48(0x10)
	struct FString SceneParam; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.DFCustomerServiceConfig
// Size: 0x48 (Inherited: 0x10)
struct FDFCustomerServiceConfig : FDescRowBase
{
	ECustomerServicesEntranceType EntranceType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString SupportPlatform; // 0x18(0x10)
	ECustomerServicesDisplayType DisplayType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FText WebviewHtml; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.DFGameSceneConfig
// Size: 0x20 (Inherited: 0x10)
struct FDFGameSceneConfig : FDescRowBase
{
	struct FString SceneSupportModel; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.DFMAbilityConfig
// Size: 0x28 (Inherited: 0x10)
struct FDFMAbilityConfig : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	struct UObject* ProxyClass; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SimpleArmorRepairResult
// Size: 0x10 (Inherited: 0x0)
struct FSimpleArmorRepairResult
{
	uint8_t bCanRepair : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float NewArmorDurability; // 0x4(0x4)
	float NewArmorMaxDurability; // 0x8(0x4)
	float NewRepairKitDurability; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ArmorRepairResultDetail
// Size: 0x10 (Inherited: 0x0)
struct FArmorRepairResultDetail
{
	uint8_t bCanRepair : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float NewArmorDurability; // 0x4(0x4)
	float NewArmorMaxDurability; // 0x8(0x4)
	float TotalRepairedDurabilityBeforeRepair; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SimpleArmorRepairKitInfoForRepair
// Size: 0x10 (Inherited: 0x0)
struct FSimpleArmorRepairKitInfoForRepair
{
	uint64_t ItemID; // 0x0(0x8)
	float Durability; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SimpleArmorInfoForRepair
// Size: 0x18 (Inherited: 0x0)
struct FSimpleArmorInfoForRepair
{
	uint64_t ItemID; // 0x0(0x8)
	EEquipmentType EquipmentType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Durability; // 0xC(0x4)
	float MaxDurability; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TrialsSeamlessInfo
// Size: 0x18 (Inherited: 0x0)
struct FTrialsSeamlessInfo
{
	uint8_t bIsTrials : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	uint32_t TrialsMatchSequence; // 0x4(0x4)
	uint32_t CurrentLifelampQuantity; // 0x8(0x4)
	uint32_t MaxLifelampQuantity; // 0xC(0x4)
	uint32_t MandelBrickNums; // 0x10(0x4)
	uint32_t AccumulateActvPoints; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TrialsPlayerServerInfo
// Size: 0x48 (Inherited: 0x0)
struct FTrialsPlayerServerInfo
{
	int64_t DepositValue; // 0x0(0x8)
	int64_t ConsumeValue; // 0x8(0x8)
	uint32_t MandelBrickNums; // 0x10(0x4)
	int32_t Salary; // 0x14(0x4)
	int32_t BrickBonus; // 0x18(0x4)
	int32_t KillBonus; // 0x1C(0x4)
	int32_t FailKillBonus; // 0x20(0x4)
	int32_t FailSupply; // 0x24(0x4)
	int32_t PutBrickBonus; // 0x28(0x4)
	int32_t SnatchBrickBonus; // 0x2C(0x4)
	int32_t SnatchBrickGainLimit; // 0x30(0x4)
	ECoinType CoinType; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	uint32_t CurrentLifelampQuantity; // 0x38(0x4)
	uint32_t MaxLifelampQuantity; // 0x3C(0x4)
	uint32_t AccumulateActvPoints; // 0x40(0x4)
	uint32_t TrialsMatchSequence; // 0x44(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ExitCutSceneParams
// Size: 0x58 (Inherited: 0x0)
struct FExitCutSceneParams
{
	struct TWeakObjectPtr<struct AActor> PlayerExit; // 0x0(0x8)
	uint8_t bCacheExitCutSceneParams : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString ExitNameString; // 0x10(0x10)
	uint8_t bPlayMediaVideo : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	EExitCutSceneType ExitCutSceneType; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	struct FRotator ExitCutSceneRotator; // 0x24(0xC)
	struct FString MediaVideoName; // 0x30(0x10)
	struct FName AudioEventName; // 0x40(0x8)
	float VideoMaxTime; // 0x48(0x4)
	float CutSceneEarlyEndTime; // 0x4C(0x4)
	struct FName ExitSuccess; // 0x50(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAmbientLightParms
// Size: 0x1C (Inherited: 0x0)
struct FCharacterAmbientLightParms
{
	float BaseColorFator; // 0x0(0x4)
	float EmissiveFator; // 0x4(0x4)
	float DistanceOffset; // 0x8(0x4)
	float OtherFator1; // 0xC(0x4)
	float OtherFator2; // 0x10(0x4)
	float OtherFator3; // 0x14(0x4)
	float OtherFator4; // 0x18(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterMaterialParameterCollection
// Size: 0x24 (Inherited: 0x0)
struct FCharacterMaterialParameterCollection
{
	float AddLightInttensity; // 0x0(0x4)
	float CharacterEdgeLightSwitch; // 0x4(0x4)
	float MinAddLightIntensity; // 0x8(0x4)
	float MaxAddLightIntensity; // 0xC(0x4)
	float MinBaseColorWieght; // 0x10(0x4)
	float MaxBaseColorWieght; // 0x14(0x4)
	float BaseColorAddLumi; // 0x18(0x4)
	float CharacterContrastFarDist; // 0x1C(0x4)
	float CharacterContrastNearDist; // 0x20(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterAmbientLightGroupDataRow
// Size: 0x58 (Inherited: 0x10)
struct FCharacterAmbientLightGroupDataRow : FDescRowBase
{
	EAttributeAdditionType GameplayModOp; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FCharacterAmbientLightParms LightParms; // 0x14(0x1C)
	struct FCharacterMaterialParameterCollection MPCParms; // 0x30(0x24)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterMaterialParameterCollectionName
// Size: 0x48 (Inherited: 0x0)
struct FCharacterMaterialParameterCollectionName
{
	struct FName AddLightInttensity; // 0x0(0x8)
	struct FName CharacterEdgeLightSwitch; // 0x8(0x8)
	struct FName MinAddLightIntensity; // 0x10(0x8)
	struct FName MaxAddLightIntensity; // 0x18(0x8)
	struct FName MinBaseColorWieght; // 0x20(0x8)
	struct FName MaxBaseColorWieght; // 0x28(0x8)
	struct FName BaseColorAddLumi; // 0x30(0x8)
	struct FName CharacterContrastFarDist; // 0x38(0x8)
	struct FName CharacterContrastNearDist; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.DFMColorDefineRow
// Size: 0x48 (Inherited: 0x10)
struct FDFMColorDefineRow : FDescRowBase
{
	struct FLinearColor LinearColor; // 0x10(0x10)
	struct FSlateColor SlateColor; // 0x20(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.DFMImageParam
// Size: 0x180 (Inherited: 0x0)
struct FDFMImageParam
{
	uint8_t Pad_0x0[0x158]; // 0x0(0x158)
	struct UObject* VehicleFrontendContext; // 0x158(0x8)
	uint8_t Pad_0x160[0x20]; // 0x160(0x20)
};

// Object: ScriptStruct DFMGlobalDefines.RTIParamData
// Size: 0xF (Inherited: 0x0)
struct FRTIParamData
{
	uint8_t bWhiteIcon : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIsDownload : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bIsShouldMerge : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bIsUseHighQualityIcon : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bShadowIcon : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bIsAllWhite : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t bIsHandleWeaponSkinStaticIcon : 1; // 0x6(0x1), Mask(0x1)
	uint8_t BitPad_0x6_1 : 7; // 0x6(0x1)
	ERotate45Type Rotate45Type; // 0x7(0x1)
	uint8_t Pad_0x8[0x1]; // 0x8(0x1)
	uint8_t bIsFoldWeapon : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t bIsFoldedIcon : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t Pad_0xB[0x1]; // 0xB(0x1)
	uint8_t bIsUseHighMeshIcon : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t bIsUseLowMeshIcon : 1; // 0xD(0x1), Mask(0x1)
	uint8_t BitPad_0xD_1 : 7; // 0xD(0x1)
	uint8_t bIsUseStaticIcon : 1; // 0xE(0x1), Mask(0x1)
	uint8_t BitPad_0xE_1 : 7; // 0xE(0x1)
};

// Object: ScriptStruct DFMGlobalDefines.EstimateNameScore
// Size: 0xC (Inherited: 0x0)
struct FEstimateNameScore
{
	float Configuration; // 0x0(0x4)
	float radius; // 0x4(0x4)
	float Weight; // 0x8(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SpawnAreaConfig
// Size: 0x80 (Inherited: 0x0)
struct FSpawnAreaConfig
{
	struct FName SpawnAreaID; // 0x0(0x8)
	struct TMap<EEstimateName, struct FEstimateNameScore> SectorAnchorEstimateNames; // 0x8(0x50)
	float SectorAnchorEstimateOffest; // 0x58(0x4)
	float SectorAnchorEnterDangerousPlayerAliveTimeLimit; // 0x5C(0x4)
	float SectorAnchorDangerousSpawnAreaAdditionalWeight; // 0x60(0x4)
	float SectorAnchorChooseSafeSpawnAreaWeightThreshold; // 0x64(0x4)
	float DangerousDuration; // 0x68(0x4)
	float PointBaseForLastEnemyReborneTime; // 0x6C(0x4)
	uint8_t bIsUseDeathInfoOfNearWhenCalcRebronEstimate : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	float WeightOfDeathInfoScore; // 0x74(0x4)
	float MaxDistanceOfEffectiveDeathWhenCalcRebronEstimate; // 0x78(0x4)
	float MaxTimeOfEffectiveDeathWhenCalcRebronEstimate; // 0x7C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BreakthroughRebornConfigByTagRow
// Size: 0x330 (Inherited: 0x10)
struct FBreakthroughRebornConfigByTagRow : FDescRowBase
{
	struct FName RebornConfigTag; // 0x10(0x8)
	struct TMap<EEstimateName, struct FEstimateNameScore> SectorAnchorEstimateNames; // 0x18(0x50)
	float SectorAnchorEstimateOffest; // 0x68(0x4)
	float SectorAnchorEnterDangerousPlayerAliveTimeLimit; // 0x6C(0x4)
	float SectorAnchorDangerousSpawnAreaAdditionalWeight; // 0x70(0x4)
	float SectorAnchorChooseSafeSpawnAreaWeightThreshold; // 0x74(0x4)
	float DangerousDuration; // 0x78(0x4)
	float SameTeamLeaderReduce; // 0x7C(0x4)
	float PointBaseForLastEnemyReborneTime; // 0x80(0x4)
	uint8_t bIsUseDeathInfoOfNearWhenCalcRebronEstimate : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	float WeightOfDeathInfoScore; // 0x88(0x4)
	float MaxDistanceOfEffectiveDeathWhenCalcRebronEstimate; // 0x8C(0x4)
	float MaxTimeOfEffectiveDeathWhenCalcRebronEstimate; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TMap<struct FName, struct FSpawnAreaConfig> SectorAnchorDedicateRebornConfig; // 0x98(0x50)
	struct TMap<EEstimateName, struct FEstimateNameScore> SectorCampEstimateNames; // 0xE8(0x50)
	float SectorCampEstimateOffest; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct TArray<struct FTeamRebornOffset> TeamRebornOffsets; // 0x140(0x10)
	float TeamRebornNavMeshCheckRange; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	struct TMap<EEstimateName, struct FEstimateNameScore> TeamEstimateNames; // 0x158(0x50)
	struct TArray<struct FTeamRebornOffset> RebornFlagRebornOffsets; // 0x1A8(0x10)
	struct TMap<EEstimateName, struct FEstimateNameScore> RebornFlagEstimateNames; // 0x1B8(0x50)
	float RebornFlagNavMeshCheckRange; // 0x208(0x4)
	uint8_t Pad_0x20C[0x4]; // 0x20C(0x4)
	struct TArray<int32_t> HightCheck; // 0x210(0x10)
	uint8_t UseDonwTrace : 1; // 0x220(0x1), Mask(0x1)
	uint8_t BitPad_0x220_1 : 7; // 0x220(0x1)
	uint8_t Pad_0x221[0x3]; // 0x221(0x3)
	float InjuredTimeLimit; // 0x224(0x4)
	float AirHitTimeLimit; // 0x228(0x4)
	float FireTimeLimit; // 0x22C(0x4)
	float AimTimeLimit; // 0x230(0x4)
	float NearEnemyDistanceLimit; // 0x234(0x4)
	float MapFootSoldierRedeployTime; // 0x238(0x4)
	uint8_t bIsEnableSightDetectionForAllEnemies : 1; // 0x23C(0x1), Mask(0x1)
	uint8_t BitPad_0x23C_1 : 7; // 0x23C(0x1)
	uint8_t bIsEnableFourMoreXRayChecksForCalc : 1; // 0x23D(0x1), Mask(0x1)
	uint8_t BitPad_0x23D_1 : 7; // 0x23D(0x1)
	uint8_t Pad_0x23E[0x2]; // 0x23E(0x2)
	float ScoreThresholdForOptimizedPerformance; // 0x240(0x4)
	float DangerDistanceOfEnemy; // 0x244(0x4)
	uint8_t bIsUseDeathInfoOfNearWhenCalcTeamRebronEstimate : 1; // 0x248(0x1), Mask(0x1)
	uint8_t BitPad_0x248_1 : 7; // 0x248(0x1)
	uint8_t Pad_0x249[0x3]; // 0x249(0x3)
	float WeightOfDeathInfoScoreWhenCalcTeamRebronEstimate; // 0x24C(0x4)
	float MaxDistanceOfEffectiveDeathWhenCalcTeamRebronEstimate; // 0x250(0x4)
	float MaxTimeOfEffectiveDeathWhenCalcTeamRebronEstimate; // 0x254(0x4)
	struct TSoftObjectPtr<UCurveFloat> RebornCameraLocCurve; // 0x258(0x28)
	struct TSoftObjectPtr<UCurveVector> RebornCameraRotationCurveAxis; // 0x280(0x28)
	struct TSoftObjectPtr<UCurveFloat> RebornCameraFovCurve; // 0x2A8(0x28)
	float RebornCameraSwitchToFPPTime; // 0x2D0(0x4)
	float RebornRisingTime; // 0x2D4(0x4)
	struct TSoftObjectPtr<UCurveFloat> RedeployCameraLocCurve; // 0x2D8(0x28)
	struct TSoftObjectPtr<UCurveFloat> RedeployCameraRotationCurve; // 0x300(0x28)
	float RedeployLandingTime; // 0x328(0x4)
	float RedeployAfterLandProtectTime; // 0x32C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TeamRebornOffset
// Size: 0x8 (Inherited: 0x0)
struct FTeamRebornOffset
{
	float radius; // 0x0(0x4)
	float DeltaYaw; // 0x4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BreakthroughSpawnAreaAlterScoreListConfigRow
// Size: 0x38 (Inherited: 0x10)
struct FBreakthroughSpawnAreaAlterScoreListConfigRow : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	EDFMGamePlaySubMode SubGameMode; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TArray<float> SpawnAreaAlterScoreList; // 0x18(0x10)
	struct TArray<int32_t> BigEventSpecialSectorIdList; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BreakthroughRebornConfigRow
// Size: 0x338 (Inherited: 0x10)
struct FBreakthroughRebornConfigRow : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	struct FName InGameMapID; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TMap<EEstimateName, struct FEstimateNameScore> SectorAnchorEstimateNames; // 0x20(0x50)
	float SectorAnchorEstimateOffest; // 0x70(0x4)
	float SectorAnchorEnterDangerousPlayerAliveTimeLimit; // 0x74(0x4)
	float SectorAnchorDangerousSpawnAreaAdditionalWeight; // 0x78(0x4)
	float SectorAnchorChooseSafeSpawnAreaWeightThreshold; // 0x7C(0x4)
	float DangerousDuration; // 0x80(0x4)
	float SameTeamLeaderReduce; // 0x84(0x4)
	float PointBaseForLastEnemyReborneTime; // 0x88(0x4)
	uint8_t bIsUseDeathInfoOfNearWhenCalcRebronEstimate : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	float WeightOfDeathInfoScore; // 0x90(0x4)
	float MaxDistanceOfEffectiveDeathWhenCalcRebronEstimate; // 0x94(0x4)
	float MaxTimeOfEffectiveDeathWhenCalcRebronEstimate; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct TMap<struct FName, struct FSpawnAreaConfig> SectorAnchorDedicateRebornConfig; // 0xA0(0x50)
	struct TMap<EEstimateName, struct FEstimateNameScore> SectorCampEstimateNames; // 0xF0(0x50)
	float SectorCampEstimateOffest; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct TArray<struct FTeamRebornOffset> TeamRebornOffsets; // 0x148(0x10)
	float TeamRebornNavMeshCheckRange; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
	struct TMap<EEstimateName, struct FEstimateNameScore> TeamEstimateNames; // 0x160(0x50)
	struct TArray<struct FTeamRebornOffset> RebornFlagRebornOffsets; // 0x1B0(0x10)
	struct TMap<EEstimateName, struct FEstimateNameScore> RebornFlagEstimateNames; // 0x1C0(0x50)
	float RebornFlagNavMeshCheckRange; // 0x210(0x4)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	struct TArray<int32_t> HightCheck; // 0x218(0x10)
	uint8_t UseDonwTrace : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	float InjuredTimeLimit; // 0x22C(0x4)
	float AirHitTimeLimit; // 0x230(0x4)
	float FireTimeLimit; // 0x234(0x4)
	float AimTimeLimit; // 0x238(0x4)
	float NearEnemyDistanceLimit; // 0x23C(0x4)
	float MapFootSoldierRedeployTime; // 0x240(0x4)
	uint8_t bIsEnableSightDetectionForAllEnemies : 1; // 0x244(0x1), Mask(0x1)
	uint8_t BitPad_0x244_1 : 7; // 0x244(0x1)
	uint8_t bIsEnableFourMoreXRayChecksForCalc : 1; // 0x245(0x1), Mask(0x1)
	uint8_t BitPad_0x245_1 : 7; // 0x245(0x1)
	uint8_t Pad_0x246[0x2]; // 0x246(0x2)
	float ScoreThresholdForOptimizedPerformance; // 0x248(0x4)
	float DangerDistanceOfEnemy; // 0x24C(0x4)
	uint8_t bIsUseDeathInfoOfNearWhenCalcTeamRebronEstimate : 1; // 0x250(0x1), Mask(0x1)
	uint8_t BitPad_0x250_1 : 7; // 0x250(0x1)
	uint8_t Pad_0x251[0x3]; // 0x251(0x3)
	float WeightOfDeathInfoScoreWhenCalcTeamRebronEstimate; // 0x254(0x4)
	float MaxDistanceOfEffectiveDeathWhenCalcTeamRebronEstimate; // 0x258(0x4)
	float MaxTimeOfEffectiveDeathWhenCalcTeamRebronEstimate; // 0x25C(0x4)
	struct TSoftObjectPtr<UCurveFloat> RebornCameraLocCurve; // 0x260(0x28)
	struct TSoftObjectPtr<UCurveVector> RebornCameraRotationCurveAxis; // 0x288(0x28)
	struct TSoftObjectPtr<UCurveFloat> RebornCameraFovCurve; // 0x2B0(0x28)
	float RebornCameraSwitchToFPPTime; // 0x2D8(0x4)
	float RebornRisingTime; // 0x2DC(0x4)
	struct TSoftObjectPtr<UCurveFloat> RedeployCameraLocCurve; // 0x2E0(0x28)
	struct TSoftObjectPtr<UCurveFloat> RedeployCameraRotationCurve; // 0x308(0x28)
	float RedeployLandingTime; // 0x330(0x4)
	float RedeployAfterLandProtectTime; // 0x334(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFPermissionConfig
// Size: 0x90 (Inherited: 0x10)
struct FDFPermissionConfig : FDescRowBase
{
	EDFPermissionType PermissionType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText TitleText; // 0x18(0x18)
	struct FText DescribeText; // 0x30(0x18)
	struct FText JumpSettingDescribeText; // 0x48(0x18)
	EDFPermissionShowType ShowType; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct FString SupportPlatform; // 0x68(0x10)
	struct FText PermissionDetailText; // 0x78(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.DropNumericConfigTable
// Size: 0x38 (Inherited: 0x10)
struct FDropNumericConfigTable : FDescRowBase
{
	uint32_t Key; // 0x10(0x4)
	EDropItemType ItemType; // 0x14(0x1)
	EDropSource DropSource; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FString Cfg1; // 0x18(0x10)
	struct FString Cfg2; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SpawnBlockedItemRow
// Size: 0x18 (Inherited: 0x10)
struct FSpawnBlockedItemRow : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.EquipItemGroupData
// Size: 0x40 (Inherited: 0x8)
struct FEquipItemGroupData : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t EquipItemGroupID; // 0x10(0x8)
	int64_t ItemID; // 0x18(0x8)
	int64_t Position; // 0x20(0x8)
	int32_t ItemNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t EquipItemGroupPrice; // 0x30(0x8)
	int64_t EquipCouponPrice; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentAdditionalDataRow
// Size: 0x40 (Inherited: 0x10)
struct FEquipmentAdditionalDataRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct TSoftClassPtr<struct UAnimInstance*> AnimationBP; // 0x18(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentOutfitAmmoData
// Size: 0x48 (Inherited: 0x10)
struct FEquipmentOutfitAmmoData : FDescRowBase
{
	int64_t WeaponItemType; // 0x10(0x8)
	struct FString Plan1; // 0x18(0x10)
	struct FString Plan2; // 0x28(0x10)
	struct FString Plan3; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentAmmoData
// Size: 0x28 (Inherited: 0x10)
struct FEquipmentAmmoData : FDescRowBase
{
	int64_t WeaponItemType; // 0x10(0x8)
	int64_t RecommendNum; // 0x18(0x8)
	int64_t CheckNum; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentCheckConfig
// Size: 0x50 (Inherited: 0x10)
struct FEquipmentCheckConfig : FDescRowBase
{
	uint8_t PanelType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText Title; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	uint8_t Slot; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ContainerFunctionRowBase
// Size: 0x38 (Inherited: 0x10)
struct FContainerFunctionRowBase : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	int32_t GainEquipPosLength; // 0x18(0x4)
	int32_t GainEquipPosWidth; // 0x1C(0x4)
	int32_t TotalCapacity; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString ComplexSpaceDescription; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SafeBoxFunctionBaseRow
// Size: 0x38 (Inherited: 0x38)
struct FSafeBoxFunctionBaseRow : FContainerFunctionRowBase
{
};

// Object: ScriptStruct DFMGlobalDefines.ChestHangingFunctionBaseRow
// Size: 0x50 (Inherited: 0x38)
struct FChestHangingFunctionBaseRow : FContainerFunctionRowBase
{
	int32_t BagIncrementY; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FContainerBuffRow> AddBuffs; // 0x40(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ContainerBuffRow
// Size: 0x18 (Inherited: 0x0)
struct FContainerBuffRow
{
	uint32_t BuffId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FContainerReplaceBuffAttributeOp> AttributeOperateIDs; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ContainerReplaceBuffAttributeOp
// Size: 0x10 (Inherited: 0x0)
struct FContainerReplaceBuffAttributeOp
{
	uint64_t AttributeOpId; // 0x0(0x8)
	float Value; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BagFunctionBaseRow
// Size: 0x50 (Inherited: 0x38)
struct FBagFunctionBaseRow : FContainerFunctionRowBase
{
	int32_t BagIncrementY; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FContainerBuffRow> AddBuffs; // 0x40(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentPresetPriceDataInfo
// Size: 0x30 (Inherited: 0x10)
struct FEquipmentPresetPriceDataInfo : FDescRowBase
{
	int64_t Key; // 0x10(0x8)
	int64_t TypeID; // 0x18(0x8)
	int64_t PresetId; // 0x20(0x8)
	int64_t PresetPrice; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.EquipmentPresetDataInfo
// Size: 0x68 (Inherited: 0x10)
struct FEquipmentPresetDataInfo : FDescRowBase
{
	int64_t Key; // 0x10(0x8)
	int64_t TypeID; // 0x18(0x8)
	int64_t PresetId; // 0x20(0x8)
	struct FText PresetTitle; // 0x28(0x18)
	int64_t Position; // 0x40(0x8)
	int64_t ItemID; // 0x48(0x8)
	int64_t ItemNum; // 0x50(0x8)
	int64_t ConsumableID; // 0x58(0x8)
	int64_t RefreshPrice; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ErrcodeMsg
// Size: 0x98 (Inherited: 0x10)
struct FErrcodeMsg : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName Name; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText BaseDesc; // 0x20(0x18)
	struct FText ExtDesc; // 0x38(0x18)
	struct FText DescForConsole; // 0x50(0x18)
	struct FText DescForPS5; // 0x68(0x18)
	struct FText DescForXbox; // 0x80(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ExpertFootStepConfig
// Size: 0x28 (Inherited: 0x10)
struct FExpertFootStepConfig : FDescRowBase
{
	int64_t AudioStyleId; // 0x10(0x8)
	struct FName SwitchName; // 0x18(0x8)
	EGPAudioFootSoundBodyType BodyType; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ExpertTalentCommonPassiveData
// Size: 0x28 (Inherited: 0x10)
struct FExpertTalentCommonPassiveData : FDescRowBase
{
	int64_t ArmedForceID; // 0x10(0x8)
	int64_t MPCommonCommonPassiveID; // 0x18(0x8)
	int64_t SOLCommonCommonPassiveID; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ExpertData
// Size: 0x88 (Inherited: 0x10)
struct FExpertData : FDescRowBase
{
	struct FText HeroExpertID; // 0x10(0x18)
	struct FText ExpertTypeName; // 0x28(0x18)
	struct FText ExpertTalentName; // 0x40(0x18)
	struct FSoftObjectPath ICON; // 0x58(0x18)
	struct FText ExpertTalentDesc; // 0x70(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ExplosionScreenEffectDataRow
// Size: 0x38 (Inherited: 0x10)
struct FExplosionScreenEffectDataRow : FDescRowBase
{
	EPhysicalSurface PhysicalSurface; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FName ScreenEffectName; // 0x14(0x8)
	float TriggerDistance; // 0x1C(0x4)
	float MaxDuration; // 0x20(0x4)
	uint8_t bEnableDistanceFalloff : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FName ScreenEffectParamName; // 0x28(0x8)
	float RateScale_Min; // 0x30(0x4)
	float RateScale_Max; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ExtensionBoxDesc
// Size: 0xF0 (Inherited: 0x10)
struct FExtensionBoxDesc : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	struct FString StorableItemTypeList; // 0x18(0x10)
	struct FString ExcludeTypeList; // 0x28(0x10)
	uint8_t GainPosWidth; // 0x38(0x1)
	uint8_t GainPosLength; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	uint64_t NextLvItemID; // 0x40(0x8)
	uint64_t MaterialItemID1; // 0x48(0x8)
	uint8_t MaterialNum1; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	uint64_t MaterialItemID2; // 0x58(0x8)
	uint8_t MaterialNum2; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	uint64_t MaterialItemID3; // 0x68(0x8)
	uint8_t MaterialNum3; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	uint64_t MaterialItemID4; // 0x78(0x8)
	uint8_t MaterialNum4; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	uint64_t MaterialItemID5; // 0x88(0x8)
	uint8_t MaterialNum5; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct TArray<struct TSoftObjectPtr<UPaperSprite>> TypeIcon; // 0x98(0x10)
	struct TArray<struct FText> TypeTips; // 0xA8(0x10)
	struct TSoftObjectPtr<UPaperSprite> BoxTabIcon; // 0xB8(0x28)
	struct FString ExcludeQualityList; // 0xE0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.FashionSuitDataRow
// Size: 0x128 (Inherited: 0x10)
struct FFashionSuitDataRow : FDescRowBase
{
	struct FName SuitId; // 0x10(0x8)
	struct TSet<struct FName> MajorParts; // 0x18(0x50)
	struct TSet<struct FName> MinorParts; // 0x68(0x50)
	struct TSet<struct FName> BelongedHeroes; // 0xB8(0x50)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0x108(0x10)
	struct TArray<uint32_t> BuffIdArray; // 0x118(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.FashionPartDataRow
// Size: 0x90 (Inherited: 0x10)
struct FFashionPartDataRow : FDescRowBase
{
	struct FName PartId; // 0x10(0x8)
	EFashionWearPosition WearPosition; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TSet<struct FName> BelongedHeroes; // 0x20(0x50)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0x70(0x10)
	struct TArray<uint32_t> BuffIdArray; // 0x80(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.FashionMallDataRow
// Size: 0x60 (Inherited: 0x10)
struct FFashionMallDataRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	int32_t Order; // 0x30(0x4)
	struct FName Money1; // 0x34(0x8)
	int32_t Price1; // 0x3C(0x4)
	struct FName Money2; // 0x40(0x8)
	int32_t Price2; // 0x48(0x4)
	struct FName Money3; // 0x4C(0x8)
	int32_t Price3; // 0x54(0x4)
	uint8_t ForSale : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.GameModeConfig
// Size: 0x58 (Inherited: 0x10)
struct FGameModeConfig : FDescRowBase
{
	EGameMainModeType MainModeType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText MainModeName; // 0x18(0x18)
	struct FText MainModeDesc; // 0x30(0x18)
	struct TArray<struct FGameSubMode> SubModes; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GameSubMode
// Size: 0x38 (Inherited: 0x0)
struct FGameSubMode
{
	EGameSubModeType SubModeType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FText SubModeName; // 0x8(0x18)
	struct FText SubModeDesc; // 0x20(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.GarenaRegion2UrlInfo
// Size: 0x40 (Inherited: 0x10)
struct FGarenaRegion2UrlInfo : FDescRowBase
{
	struct FString Region; // 0x10(0x10)
	struct FString CustomerServiceUrl; // 0x20(0x10)
	struct FString AccountDeletionUrl; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GarenaCode2RegionInfo
// Size: 0x30 (Inherited: 0x10)
struct FGarenaCode2RegionInfo : FDescRowBase
{
	struct FString countryCode; // 0x10(0x10)
	struct FString Region; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GarenaLang2UrlInfo
// Size: 0x40 (Inherited: 0x10)
struct FGarenaLang2UrlInfo : FDescRowBase
{
	struct FString Language; // 0x10(0x10)
	struct FString PrivacyPolicyUrl; // 0x20(0x10)
	struct FString TermsConditionsUrl; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GarenaPayUrl
// Size: 0x40 (Inherited: 0x10)
struct FGarenaPayUrl : FDescRowBase
{
	struct FString RegionCode; // 0x10(0x10)
	struct FString SandboxURL; // 0x20(0x10)
	struct FString ProductionURL; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GeneratedEquipmentPresetData
// Size: 0x30 (Inherited: 0x8)
struct FGeneratedEquipmentPresetData : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t MatchModeId; // 0x10(0x8)
	int64_t ConsumableID; // 0x18(0x8)
	int64_t WeaponBulletGroupID; // 0x20(0x8)
	int64_t EquipItemGroupID; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.GlobalConstItemRow
// Size: 0x28 (Inherited: 0x10)
struct FGlobalConstItemRow : FDescRowBase
{
	struct FName ID; // 0x10(0x8)
	struct FName Value; // 0x18(0x8)
	struct FName Desc; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.GMGroupConfigRow
// Size: 0x38 (Inherited: 0x10)
struct FGMGroupConfigRow : FDescRowBase
{
	struct FName GroupID; // 0x10(0x8)
	struct FText Desc; // 0x18(0x18)
	int32_t Priority; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GMCandidateArgConfig
// Size: 0x18 (Inherited: 0x0)
struct FGMCandidateArgConfig
{
	struct FName DataTable; // 0x0(0x8)
	struct FName ArgDataRow; // 0x8(0x8)
	struct FName DescDataRow; // 0x10(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.GMArgConfig
// Size: 0x48 (Inherited: 0x0)
struct FGMArgConfig
{
	struct FString Arg; // 0x0(0x10)
	struct FText Desc; // 0x10(0x18)
	uint8_t bHasCandidate : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FGMCandidateArgConfig CandidateArgConfig; // 0x2C(0x18)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GMConfigRow
// Size: 0x120 (Inherited: 0x10)
struct FGMConfigRow : FDescRowBase
{
	struct FName GMId; // 0x10(0x8)
	struct FText Desc; // 0x18(0x18)
	struct FName Group; // 0x30(0x8)
	struct FString Code; // 0x38(0x10)
	struct FGMArgConfig ArgConfig_0; // 0x48(0x48)
	struct FGMArgConfig ArgConfig_1; // 0x90(0x48)
	struct FGMArgConfig ArgConfig_2; // 0xD8(0x48)
};

// Object: ScriptStruct DFMGlobalDefines.GmSolGameStyle
// Size: 0x28 (Inherited: 0x10)
struct FGmSolGameStyle : FDescRowBase
{
	struct FString LootStyleName; // 0x10(0x10)
	int32_t LootStyleID; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GuideControlConfig
// Size: 0x18 (Inherited: 0x10)
struct FGuideControlConfig : FDescRowBase
{
	int32_t GuideStageId; // 0x10(0x4)
	int32_t State; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GuideStructuredConfig
// Size: 0x98 (Inherited: 0x10)
struct FGuideStructuredConfig : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName Desc; // 0x14(0x8)
	int32_t GuideType; // 0x1C(0x4)
	int32_t Plat; // 0x20(0x4)
	struct FName GuideDesc; // 0x24(0x8)
	struct FName GuideAppearDesc; // 0x2C(0x8)
	struct FName GuideContent; // 0x34(0x8)
	int32_t GuideStageConfigId; // 0x3C(0x4)
	struct TArray<int32_t> MetricIdLst; // 0x40(0x10)
	int32_t AddVal; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<struct FName> WeightedByUserType; // 0x58(0x10)
	int32_t TriggerThreshold; // 0x68(0x4)
	int32_t TriggerSubVal; // 0x6C(0x4)
	int32_t TriggerUpperVal; // 0x70(0x4)
	int32_t SingleGameRecession; // 0x74(0x4)
	int32_t LimitLevel; // 0x78(0x4)
	int32_t LimitGameCnt; // 0x7C(0x4)
	int32_t MaxTriggerCnt; // 0x80(0x4)
	int32_t TriggerCDType; // 0x84(0x4)
	int32_t TriggerCDVal; // 0x88(0x4)
	int32_t Priority; // 0x8C(0x4)
	int32_t ResetVal; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GuideWBPConfig
// Size: 0x38 (Inherited: 0x10)
struct FGuideWBPConfig : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName WBPName; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FSoftObjectPath WBPPath; // 0x20(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.GuideVedioConfig
// Size: 0x38 (Inherited: 0x10)
struct FGuideVedioConfig : FDescRowBase
{
	uint64_t VedioId; // 0x10(0x8)
	struct FName VedioName; // 0x18(0x8)
	uint8_t CanSkip : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FGuideVedioTexts> Subtitles; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideVedioTexts
// Size: 0x18 (Inherited: 0x0)
struct FGuideVedioTexts
{
	struct FName LaunguageTag; // 0x0(0x8)
	struct TArray<struct FGuideVedioTextRow> Texts; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideVedioTextRow
// Size: 0x38 (Inherited: 0x0)
struct FGuideVedioTextRow
{
	struct FText Text; // 0x0(0x18)
	struct FText npcName; // 0x18(0x18)
	float StartTime; // 0x30(0x4)
	float EndTime; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GuideDisableOpItemConfig
// Size: 0x28 (Inherited: 0x10)
struct FGuideDisableOpItemConfig : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	struct TArray<int64_t> DisableOpStageList; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideMovieTypeConfig
// Size: 0x28 (Inherited: 0x10)
struct FGuideMovieTypeConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct TArray<struct FName> Args; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideItemConfig
// Size: 0x20 (Inherited: 0x10)
struct FGuideItemConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FName ItemInfoList; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.GuidePrepare
// Size: 0x20 (Inherited: 0x10)
struct FGuidePrepare : FDescRowBase
{
	int32_t PrepareID; // 0x10(0x4)
	struct FName PositionPropList; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GuideCondition
// Size: 0x20 (Inherited: 0x10)
struct FGuideCondition : FDescRowBase
{
	int32_t ConditionID; // 0x10(0x4)
	int32_t ConditionType; // 0x14(0x4)
	int32_t MatchModeId; // 0x18(0x4)
	int32_t GameResult; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GuideEventConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuideEventConfig : FDescRowBase
{
	int64_t EventId; // 0x10(0x8)
	struct FText EventType; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.GuidePopTipsConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuidePopTipsConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FText Desc; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.GuideExplainConfig
// Size: 0x28 (Inherited: 0x10)
struct FGuideExplainConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct TArray<int64_t> PopWindowConfigId; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuidePopFuctionDescConfig
// Size: 0xF0 (Inherited: 0x10)
struct FGuidePopFuctionDescConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FText Title; // 0x18(0x18)
	struct TArray<struct FGuideFuctionDescItemRow> DescInfo; // 0x30(0x10)
	struct TArray<struct FGuideFuctionDescItemRow> DescInfoForHDWithGamepad; // 0x40(0x10)
	struct TArray<struct FGuideFuctionDescItemRow> DescInfoForConsole; // 0x50(0x10)
	uint8_t bUseBtnGotoSummary : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t bUseBtnSkipGuide : 1; // 0x61(0x1), Mask(0x1)
	uint8_t BitPad_0x61_1 : 7; // 0x61(0x1)
	uint8_t Pad_0x62[0x2]; // 0x62(0x2)
	int32_t Position; // 0x64(0x4)
	struct TArray<struct FGuideKeyTextRow> CompleteConditionTextAndKey; // 0x68(0x10)
	struct TArray<int32_t> ClickConfigId; // 0x78(0x10)
	uint8_t bNotMask : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t ShowType; // 0x8C(0x4)
	float AutoTime; // 0x90(0x4)
	int32_t AutoTimeEndMethod; // 0x94(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> Audio; // 0x98(0x28)
	uint8_t bOverrideHDAudioWithGamepad : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_1 : 7; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioForHDWithGamepad; // 0xC8(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.GuideKeyTextRow
// Size: 0x28 (Inherited: 0x0)
struct FGuideKeyTextRow
{
	struct FText LeftText; // 0x0(0x18)
	struct FName ActionNameForGamepad; // 0x18(0x8)
	struct FName ActionName; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.GuideFuctionDescItemRow
// Size: 0x30 (Inherited: 0x0)
struct FGuideFuctionDescItemRow
{
	struct FText Title; // 0x0(0x18)
	struct FText DescText; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.GuidePopWindowConfig
// Size: 0x128 (Inherited: 0x10)
struct FGuidePopWindowConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FText Title; // 0x18(0x18)
	struct TArray<struct FGuidePopWindowItemRow> DescInfo; // 0x30(0x10)
	struct TArray<struct FGuidePopWindowItemRow> DescInfoForHD; // 0x40(0x10)
	struct TArray<struct FGuidePopWindowItemRow> DescInfoForHDWithGamepad; // 0x50(0x10)
	struct TArray<struct FGuidePopWindowItemRow> DescInfoForGamePad; // 0x60(0x10)
	uint8_t bHideHudUI : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	int32_t ShowType; // 0x74(0x4)
	float AutoTime; // 0x78(0x4)
	int32_t AutoTimeEndMethod; // 0x7C(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> Audio; // 0x80(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioForHD; // 0xA8(0x28)
	uint8_t bOverrideHDAudioWithGamepad : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioForHDWithGamepad; // 0xD8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioForGamePad; // 0x100(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.GuidePopWindowItemRow
// Size: 0xB8 (Inherited: 0x0)
struct FGuidePopWindowItemRow
{
	struct FText Title; // 0x0(0x18)
	struct FText DescText; // 0x18(0x18)
	struct FText CompleteConditionText; // 0x30(0x18)
	struct FGuideKeyTextRow CompleteConditionTextAndKey; // 0x48(0x28)
	struct FName CompleteEvent; // 0x70(0x8)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x78(0x28)
	EGuidePopWindowItemExContentType ExContentType; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct TArray<struct FName> ExContentParams; // 0xA8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideWidgetConfig
// Size: 0x40 (Inherited: 0x10)
struct FGuideWidgetConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FName BPPath; // 0x18(0x8)
	struct FName WidgetName; // 0x20(0x8)
	struct FName UIName; // 0x28(0x8)
	struct FName HudConfigName; // 0x30(0x8)
	uint8_t IsHudUI : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.GuideVisibilityConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuideVisibilityConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	uint8_t IsVisible : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<int32_t> UIWidgetId; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideClickConfig
// Size: 0x1C8 (Inherited: 0x10)
struct FGuideClickConfig : FDescRowBase
{
	int32_t GuideClickId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText TipsText; // 0x18(0x18)
	struct FText TipsTextForHD; // 0x30(0x18)
	struct TArray<struct FText> TipsTextForGamePad; // 0x48(0x10)
	struct TArray<struct FText> TipsTextForWidget; // 0x58(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> TipsAudio; // 0x68(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> TipsAudioForHD; // 0x90(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> TipsAudioForGamePad; // 0xB8(0x28)
	struct TArray<int32_t> UIWidgetId; // 0xE0(0x10)
	int32_t UIWidgetIdForCalSizeAndPos; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct TArray<int32_t> UIWidgetIdOnlyDisplay; // 0xF8(0x10)
	struct TArray<int32_t> MaskImageType; // 0x108(0x10)
	struct TArray<int32_t> UIType; // 0x118(0x10)
	int32_t TipsPosType; // 0x128(0x4)
	int32_t WeakClickType; // 0x12C(0x4)
	struct TArray<int32_t> UIOffset; // 0x130(0x10)
	struct TArray<int32_t> UIOffsetForDisplay; // 0x140(0x10)
	struct TArray<int32_t> TipsOffset; // 0x150(0x10)
	struct TArray<int32_t> TriangleUIOffset; // 0x160(0x10)
	float TriangleScale; // 0x170(0x4)
	uint8_t IsShowArrowWhenNoTips : 1; // 0x174(0x1), Mask(0x1)
	uint8_t BitPad_0x174_1 : 7; // 0x174(0x1)
	uint8_t IsGoNextOnClickAny : 1; // 0x175(0x1), Mask(0x1)
	uint8_t BitPad_0x175_1 : 7; // 0x175(0x1)
	uint8_t IsNotRealClick : 1; // 0x176(0x1), Mask(0x1)
	uint8_t BitPad_0x176_1 : 7; // 0x176(0x1)
	uint8_t Pad_0x177[0x1]; // 0x177(0x1)
	float AutoHideTextTime; // 0x178(0x4)
	uint8_t Pad_0x17C[0x4]; // 0x17C(0x4)
	struct TSoftObjectPtr<UTexture2D> MaskBgImage; // 0x180(0x28)
	uint8_t IsNotMaskTopBar : 1; // 0x1A8(0x1), Mask(0x1)
	uint8_t BitPad_0x1A8_1 : 7; // 0x1A8(0x1)
	uint8_t Pad_0x1A9[0x3]; // 0x1A9(0x3)
	int32_t ExLoopAnimType; // 0x1AC(0x4)
	int32_t Options; // 0x1B0(0x4)
	uint8_t bAutoHideOnPopUIChange : 1; // 0x1B4(0x1), Mask(0x1)
	uint8_t BitPad_0x1B4_1 : 7; // 0x1B4(0x1)
	uint8_t Pad_0x1B5[0x3]; // 0x1B5(0x3)
	int32_t TipsTextPolicy; // 0x1B8(0x4)
	uint8_t HD_NoDefaultIcon : 1; // 0x1BC(0x1), Mask(0x1)
	uint8_t BitPad_0x1BC_1 : 7; // 0x1BC(0x1)
	uint8_t Pad_0x1BD[0x3]; // 0x1BD(0x3)
	int32_t MaskState; // 0x1C0(0x4)
	uint8_t Pad_0x1C4[0x4]; // 0x1C4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GuideDialogConfig
// Size: 0xA0 (Inherited: 0x10)
struct FGuideDialogConfig : FDescRowBase
{
	int32_t GuideDialogId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText npcName; // 0x18(0x18)
	struct TArray<struct FText> Dialog; // 0x30(0x10)
	struct TArray<struct FText> DialogForConsole; // 0x40(0x10)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> NpcSound; // 0x50(0x10)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> NpcSoundForConsole; // 0x60(0x10)
	struct TArray<int32_t> UIOffset; // 0x70(0x10)
	struct TArray<struct FText> DialogForGamePad; // 0x80(0x10)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> NpcSoundForGamePad; // 0x90(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.OverrideStartCondition
// Size: 0x30 (Inherited: 0x0)
struct FOverrideStartCondition
{
	struct TArray<struct FGuideConditionItem> HD; // 0x0(0x10)
	struct TArray<struct FGuideConditionItem> Mobile; // 0x10(0x10)
	struct TArray<struct FGuideConditionItem> Gamepad; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideStageClientOnlyConfig
// Size: 0x98 (Inherited: 0x10)
struct FGuideStageClientOnlyConfig : FDescRowBase
{
	int32_t GuideStageId; // 0x10(0x4)
	int32_t FirstStepGuideId; // 0x14(0x4)
	uint8_t IsUse : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t IsNewPlayerGuide : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	int32_t Priority; // 0x1C(0x4)
	int32_t GuideBatch; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FGuideConditionItem> StartCondition; // 0x28(0x10)
	struct FOverrideStartCondition OverrideStartCondition; // 0x38(0x30)
	int32_t ModeType; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<int32_t> ForeverEndArgs; // 0x70(0x10)
	int32_t AutoPlayAgainCD; // 0x80(0x4)
	uint8_t IsNeedReplayOnOtherGuideEnd : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct TArray<EGPInputType> DisableInputType; // 0x88(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideConditionItem
// Size: 0x18 (Inherited: 0x0)
struct FGuideConditionItem
{
	EGuideConditionId ConditionID; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<int32_t> Params; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideStageConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuideStageConfig : FDescRowBase
{
	int32_t GuideStageId; // 0x10(0x4)
	uint8_t IsNewPlayerGuideFirstStage : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t IsNotForce : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t IsSetDSStagePassed : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
	int32_t PrepareID; // 0x18(0x4)
	int32_t RealFinishConditionId; // 0x1C(0x4)
	struct TArray<int32_t> NextStageId; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GuideConfig
// Size: 0xE0 (Inherited: 0x10)
struct FGuideConfig : FDescRowBase
{
	int32_t GuideID; // 0x10(0x4)
	int32_t GuideStageId; // 0x14(0x4)
	struct FName GuideType; // 0x18(0x8)
	struct FName Args; // 0x20(0x8)
	struct TArray<struct FName> OptArgs; // 0x28(0x10)
	uint8_t IsSwallowTouch : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float AutoNextGuideTime; // 0x3C(0x4)
	struct TArray<struct FName> EndEvent; // 0x40(0x10)
	struct TArray<int32_t> NextGuideId; // 0x50(0x10)
	uint8_t IsKeyStep : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t RollBackGuideId; // 0x64(0x4)
	int32_t StopGuideEvent; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<int32_t> StopStepEvent; // 0x70(0x10)
	int32_t LogIdOnStepStart; // 0x80(0x4)
	int32_t LogIdOnStepEnd; // 0x84(0x4)
	uint8_t IsLogStep : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct TMap<struct FName, struct FString> MetaData; // 0x90(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.GuideConfigForHD
// Size: 0xE0 (Inherited: 0xE0)
struct FGuideConfigForHD : FGuideConfig
{
};

// Object: ScriptStruct DFMGlobalDefines.MasterGunSkinRewardsInfoRow
// Size: 0x70 (Inherited: 0x10)
struct FMasterGunSkinRewardsInfoRow : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	struct TArray<uint64_t> RewardSkinIDs; // 0x18(0x10)
	uint64_t PatternID; // 0x28(0x8)
	struct TArray<uint64_t> PreCondBF; // 0x30(0x10)
	struct TArray<uint64_t> GoalsBF; // 0x40(0x10)
	struct TArray<uint64_t> PreCondSOL; // 0x50(0x10)
	struct TArray<uint64_t> GoalsSOL; // 0x60(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.GunSkinRewardsInfoRow
// Size: 0x48 (Inherited: 0x10)
struct FGunSkinRewardsInfoRow : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	uint64_t GunSkinRewards; // 0x18(0x8)
	uint64_t SkinPatternID; // 0x20(0x8)
	uint64_t BFConnectionID1; // 0x28(0x8)
	uint64_t BFConnectionID2; // 0x30(0x8)
	uint64_t SOLConnectionID1; // 0x38(0x8)
	uint64_t SOLConnectionID2; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.GVoiceMossConfig
// Size: 0x58 (Inherited: 0x10)
struct FGVoiceMossConfig : FDescRowBase
{
	struct FString DeviceModel; // 0x10(0x10)
	struct FString URL; // 0x20(0x10)
	struct FString Hash; // 0x30(0x10)
	struct FString CPU; // 0x40(0x10)
	uint8_t bEnable : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.HallLobbyActivityOpenTime
// Size: 0x20 (Inherited: 0x10)
struct FHallLobbyActivityOpenTime : FDescRowBase
{
	struct TArray<struct FHallLobbyActivityTime> ActivityTime; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HallLobbyActivityTime
// Size: 0x38 (Inherited: 0x0)
struct FHallLobbyActivityTime
{
	struct FString StartTime; // 0x0(0x10)
	struct FString EndTime; // 0x10(0x10)
	struct FString LevelName; // 0x20(0x10)
	int32_t PlatformType; // 0x30(0x4)
	uint8_t IsUseActivityVedio : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.HallVehicleCameraData
// Size: 0x30 (Inherited: 0x10)
struct FHallVehicleCameraData : FDescRowBase
{
	struct FString VehicleId; // 0x10(0x10)
	struct TArray<struct FVehicleCameraData> VehicleCameraDataArray; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleCameraData
// Size: 0x28 (Inherited: 0x0)
struct FVehicleCameraData
{
	EVehicleCameraType CameraType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString CameraTypeStr; // 0x8(0x10)
	struct FVector CameraLocation; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.HavvkDesignAudioData
// Size: 0x48 (Inherited: 0x8)
struct FHavvkDesignAudioData : FTableRowBase
{
	int64_t ConditionID; // 0x8(0x8)
	int64_t Type; // 0x10(0x8)
	int64_t Value; // 0x18(0x8)
	struct FString Subtitle; // 0x20(0x10)
	struct FString Event; // 0x30(0x10)
	int64_t SelfDenyProb; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HavvkDesignChioceNameData
// Size: 0x48 (Inherited: 0x8)
struct FHavvkDesignChioceNameData : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t Value; // 0x10(0x8)
	struct FText OperationNameAbbr; // 0x18(0x18)
	struct FText OperationDescAbbr; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HavvkDesignIconData
// Size: 0x28 (Inherited: 0x8)
struct FHavvkDesignIconData : FTableRowBase
{
	struct FString IconID; // 0x8(0x10)
	struct FString IconPath; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HavvkDesignPriorityNameData
// Size: 0x58 (Inherited: 0x8)
struct FHavvkDesignPriorityNameData : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t MapID; // 0x10(0x8)
	int64_t factorId; // 0x18(0x8)
	int64_t InfluencedID; // 0x20(0x8)
	struct FText Value; // 0x28(0x18)
	struct FText Desc; // 0x40(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeadIconData
// Size: 0x50 (Inherited: 0x10)
struct FHeadIconData : FDescRowBase
{
	struct FString IconID; // 0x10(0x10)
	struct FText Name; // 0x20(0x18)
	struct FSoftObjectPath ItemSpriteIcon; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroCardData
// Size: 0xB8 (Inherited: 0x18)
struct FHeroCardData : FCommercialBaseRow
{
	struct FName HeroCardId; // 0x18(0x8)
	struct TArray<struct FName> BelongedHeroIDs; // 0x20(0x10)
	uint8_t IsDefUnlock : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t IsDefEquip : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	struct FName Title; // 0x34(0x8)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FText CardName; // 0x40(0x18)
	int32_t CardLevel; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FSoftObjectPath CardPath; // 0x60(0x18)
	struct FSoftObjectPath UIPath; // 0x78(0x18)
	struct FString VideoName; // 0x90(0x10)
	struct FText CardDescription; // 0xA0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroBlock
// Size: 0x38 (Inherited: 0x10)
struct FHeroBlock : FDescRowBase
{
	int64_t MatchModeId; // 0x10(0x8)
	struct TArray<int64_t> HeroId; // 0x18(0x10)
	struct TArray<int32_t> UpperLimit; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroConstant
// Size: 0x40 (Inherited: 0x10)
struct FHeroConstant : FDescRowBase
{
	struct FString Key; // 0x10(0x10)
	struct FString Desc; // 0x20(0x10)
	struct FString Value; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroRecruitmentTask
// Size: 0x38 (Inherited: 0x10)
struct FHeroRecruitmentTask : FDescRowBase
{
	int32_t Sequence; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t HeroId; // 0x18(0x8)
	int32_t RecruitSeletcedNum; // 0x20(0x4)
	int32_t RecruitTotalGoalNum; // 0x24(0x4)
	struct TArray<int64_t> OpMetaGoals; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroUnLock
// Size: 0x48 (Inherited: 0x10)
struct FHeroUnLock : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t HeroId; // 0x18(0x8)
	int32_t GetType; // 0x20(0x4)
	struct FName Parameter; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText Name; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroDataRow
// Size: 0x128 (Inherited: 0x10)
struct FHeroDataRow : FDescRowBase
{
	struct FName HeroId; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	struct FText Desc; // 0x48(0x18)
	struct FSoftObjectPath ICON; // 0x60(0x18)
	struct FSoftObjectPath AvatarIcon_PC; // 0x78(0x18)
	struct FSoftObjectPath AvatarIcon; // 0x90(0x18)
	int64_t ArmedForceID; // 0xA8(0x8)
	int64_t ExpertId; // 0xB0(0x8)
	struct FSoftObjectPath ExpertIcon; // 0xB8(0x18)
	uint8_t bUserSelectable : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t bIsInit : 1; // 0xD1(0x1), Mask(0x1)
	uint8_t BitPad_0xD1_1 : 7; // 0xD1(0x1)
	uint8_t Pad_0xD2[0x2]; // 0xD2(0x2)
	int32_t LoadLevel; // 0xD4(0x4)
	int32_t BossModeType; // 0xD8(0x4)
	uint8_t IsBossModeTypeDef : 1; // 0xDC(0x1), Mask(0x1)
	uint8_t BitPad_0xDC_1 : 7; // 0xDC(0x1)
	uint8_t IsBoss : 1; // 0xDD(0x1), Mask(0x1)
	uint8_t BitPad_0xDD_1 : 7; // 0xDD(0x1)
	uint8_t Pad_0xDE[0x2]; // 0xDE(0x2)
	struct FSoftObjectPath BackgroundIcon; // 0xE0(0x18)
	int64_t FootstepAudioStyleID; // 0xF8(0x8)
	struct FSoftObjectPath CodeNameImage; // 0x100(0x18)
	struct FString SocialShareCDN; // 0x118(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroProfessionDataRow
// Size: 0x78 (Inherited: 0x10)
struct FHeroProfessionDataRow : FDescRowBase
{
	struct FName ProfessionId; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FText ShortName; // 0x30(0x18)
	struct FText Desc; // 0x48(0x18)
	struct FSoftObjectPath ICON; // 0x60(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroGoalDesc
// Size: 0x30 (Inherited: 0x10)
struct FHeroGoalDesc : FDescRowBase
{
	uint64_t GoalID; // 0x10(0x8)
	struct FText Desc; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroLevel2Rank
// Size: 0x30 (Inherited: 0x10)
struct FHeroLevel2Rank : FDescRowBase
{
	int32_t Level; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Rank; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroLevel
// Size: 0x50 (Inherited: 0x10)
struct FHeroLevel : FDescRowBase
{
	uint64_t HeroId; // 0x10(0x8)
	int32_t OpMetaLevel; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	uint64_t OpMetaTaskID; // 0x20(0x8)
	int32_t OpMetaSeletcedNum; // 0x28(0x4)
	int32_t OpMetaTotalGoalNum; // 0x2C(0x4)
	struct TArray<uint64_t> OpMetaGoals; // 0x30(0x10)
	struct TArray<uint64_t> OpMetaRewards; // 0x40(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroArchive
// Size: 0xB0 (Inherited: 0x10)
struct FHeroArchive : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	int32_t ArchiveID; // 0x18(0x4)
	int32_t OpMetaLevel; // 0x1C(0x4)
	int32_t ArchiveType; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText ArchiveName; // 0x28(0x18)
	struct FText ArchiveSubName; // 0x40(0x18)
	struct FSoftObjectPath ArchiveBGImg; // 0x58(0x18)
	struct FSoftObjectPath ArchiveIcon; // 0x70(0x18)
	struct FText ArchiveDesc; // 0x88(0x18)
	struct FString ArchiveBGImgUrl; // 0xA0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HeroProfile
// Size: 0x130 (Inherited: 0x10)
struct FHeroProfile : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	struct FSoftObjectPath TeamIcon; // 0x48(0x18)
	struct FText Birthday; // 0x60(0x18)
	struct FText Height; // 0x78(0x18)
	struct FText Weight; // 0x90(0x18)
	struct FText Organization; // 0xA8(0x18)
	struct FSoftObjectPath OrganizationIcon; // 0xC0(0x18)
	struct FText Evaluation; // 0xD8(0x18)
	struct FSoftObjectPath HeroBGPath; // 0xF0(0x18)
	struct TArray<int32_t> ArchiveIds; // 0x108(0x10)
	struct FSoftObjectPath ArmIcon; // 0x118(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HeroVideoData
// Size: 0x30 (Inherited: 0x10)
struct FHeroVideoData : FDescRowBase
{
	struct FName SceneVideoId; // 0x10(0x8)
	struct FName DefaultSceneVideoId; // 0x18(0x8)
	struct FName MatchSceneVideoInId; // 0x20(0x8)
	struct FName MatchSceneVideoLoopId; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HotspotBanner
// Size: 0x40 (Inherited: 0x8)
struct FHotspotBanner : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FString DIYString1; // 0x10(0x10)
	struct FString DIYString2; // 0x20(0x10)
	struct FString PicResource; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.HZAchievement
// Size: 0x110 (Inherited: 0x8)
struct FHZAchievement : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	int32_t Order; // 0x40(0x4)
	int32_t Model; // 0x44(0x4)
	int64_t HeroId; // 0x48(0x8)
	int32_t Level; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<int64_t> BadgeId; // 0x58(0x10)
	struct FString Mission1; // 0x68(0x10)
	struct FString Mission2; // 0x78(0x10)
	struct FString Mission3; // 0x88(0x10)
	struct FString Mission4; // 0x98(0x10)
	struct TArray<int64_t> MissionSOL; // 0xA8(0x10)
	struct TArray<int64_t> MissionBR; // 0xB8(0x10)
	int32_t Hide; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FText MissionText; // 0xD0(0x18)
	int32_t AchievementType; // 0xE8(0x4)
	int32_t IsEnable; // 0xEC(0x4)
	struct FString StartTime; // 0xF0(0x10)
	struct FString ShowMission; // 0x100(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.InGameBattleClassConfig
// Size: 0x60 (Inherited: 0x10)
struct FInGameBattleClassConfig : FDescRowBase
{
	EInGameBattleClassType ClassType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	uint64_t ExpertId; // 0x18(0x8)
	struct TArray<uint32_t> BuffIdArray; // 0x20(0x10)
	struct TArray<uint64_t> SpecialItemIdArray; // 0x30(0x10)
	struct TArray<uint32_t> SpecialItemCountArray; // 0x40(0x10)
	struct TArray<uint32_t> SpecialItemSlotArray; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.InGameEquipmentRentalPresetRow
// Size: 0x30 (Inherited: 0x10)
struct FInGameEquipmentRentalPresetRow : FDescRowBase
{
	int32_t Key; // 0x10(0x4)
	int32_t TypeID; // 0x14(0x4)
	int32_t PresetId; // 0x18(0x4)
	int32_t Position; // 0x1C(0x4)
	int64_t ItemID; // 0x20(0x8)
	int32_t ItemNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.InGameEquipmentRentalRow
// Size: 0x48 (Inherited: 0x10)
struct FInGameEquipmentRentalRow : FDescRowBase
{
	int32_t Key; // 0x10(0x4)
	int32_t TypeID; // 0x14(0x4)
	int32_t PresetId; // 0x18(0x4)
	int32_t PresetPrice; // 0x1C(0x4)
	int32_t ApplyScore; // 0x20(0x4)
	int32_t RefreshScore; // 0x24(0x4)
	int32_t Weight; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText PresetTitle; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ItemBindDesc
// Size: 0x38 (Inherited: 0x8)
struct FItemBindDesc : FTableRowBase
{
	int32_t BindType; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FText> TypeDesc; // 0x10(0x10)
	struct FText TypeAddDesc; // 0x20(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SpecifiedDropItemInfo
// Size: 0x10 (Inherited: 0x0)
struct FSpecifiedDropItemInfo
{
	int64_t ItemID; // 0x0(0x8)
	int32_t ItemNum; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.PropInfo
// Size: 0x10 (Inherited: 0x0)
struct FPropInfo
{
	uint64_t PropId; // 0x0(0x8)
	uint64_t OwnerID; // 0x8(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ItemLabel
// Size: 0x40 (Inherited: 0x10)
struct FItemLabel : FDescRowBase
{
	int32_t LabelID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString LabelName; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
	uint8_t bIsDebuff : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ItemNamePrefix
// Size: 0x30 (Inherited: 0x10)
struct FItemNamePrefix : FDescRowBase
{
	int32_t MainType; // 0x10(0x4)
	int32_t SubType; // 0x14(0x4)
	struct FText PrefixName; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ItemSpeicalTypeData
// Size: 0x20 (Inherited: 0x10)
struct FItemSpeicalTypeData : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
	uint8_t NightVision : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t ThermalImagine : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Flashlight : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x5]; // 0x1B(0x5)
};

// Object: ScriptStruct DFMGlobalDefines.CommercializeData
// Size: 0x30 (Inherited: 0x10)
struct FCommercializeData : FDescRowBase
{
	int32_t CommercializeType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FSoftObjectPath CommercializeImage; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponBpSource
// Size: 0x58 (Inherited: 0x10)
struct FWeaponBpSource : FDescRowBase
{
	struct FName BattlePositionID; // 0x10(0x8)
	struct FText BattlePositionDes; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> BPImage; // 0x30(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.HUDItemTextViewData
// Size: 0x18 (Inherited: 0x0)
struct FHUDItemTextViewData
{
	struct FName TableRowID; // 0x0(0x8)
	struct FName FontStyleID; // 0x8(0x8)
	struct FVector2D LetterPosition; // 0x10(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HUDItemViewData
// Size: 0x98 (Inherited: 0x10)
struct FHUDItemViewData : FDescRowBase
{
	struct FMargin DefaultContainerPadding; // 0x10(0x10)
	struct FMargin LargeContainerPadding; // 0x20(0x10)
	struct FMargin SmallContainerPadding; // 0x30(0x10)
	struct FMargin SpecialContainerPadding; // 0x40(0x10)
	struct FHUDItemTextViewData TopTextStyle; // 0x50(0x18)
	struct FHUDItemTextViewData LeftTextStyle; // 0x68(0x18)
	struct FHUDItemTextViewData RightTextStyle; // 0x80(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ItemViewData
// Size: 0x70 (Inherited: 0x10)
struct FItemViewData : FDescRowBase
{
	int32_t ItemViewStyle; // 0x10(0x4)
	struct FMargin LargeContainerPadding; // 0x14(0x10)
	struct FMargin SmallContainerPadding; // 0x24(0x10)
	struct FMargin SpecialContainerPadding; // 0x34(0x10)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct FTextStyle> TextStyle; // 0x48(0x10)
	struct TArray<struct FCompAnchorData> CompPositionInfo; // 0x58(0x10)
	struct FVector2D BoxSize; // 0x68(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CompAnchorData
// Size: 0x2C (Inherited: 0x0)
struct FCompAnchorData
{
	int32_t PositionInfo; // 0x0(0x4)
	struct FMargin offset; // 0x4(0x10)
	struct FAnchors Anchors; // 0x14(0x10)
	struct FVector2D Alignment; // 0x24(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.TextStyle
// Size: 0x8 (Inherited: 0x0)
struct FTextStyle
{
	int32_t pos; // 0x0(0x4)
	int32_t Style; // 0x4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.JumpConfig
// Size: 0x78 (Inherited: 0x10)
struct FJumpConfig : FDescRowBase
{
	int32_t JumpId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString Desc; // 0x18(0x10)
	int32_t JumpFirstEnum; // 0x28(0x4)
	int32_t JumpSecendEnum; // 0x2C(0x4)
	int32_t JumpThridEnum; // 0x30(0x4)
	int32_t JumpFourthEnum; // 0x34(0x4)
	struct FString ExParams; // 0x38(0x10)
	struct FString StartTime; // 0x48(0x10)
	struct FString EndTime; // 0x58(0x10)
	struct FString DeepLink; // 0x68(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.JumpRouteConfig
// Size: 0x90 (Inherited: 0x10)
struct FJumpRouteConfig : FDescRowBase
{
	int64_t RewardId; // 0x10(0x8)
	int64_t JumpId; // 0x18(0x8)
	struct FName BelongModule; // 0x20(0x8)
	struct FText JumpPassBtnTxt; // 0x28(0x18)
	struct FText JumpFailedBtnTxt; // 0x40(0x18)
	struct FText JumpPassTips; // 0x58(0x18)
	struct FText JumpFailedTips; // 0x70(0x18)
	struct FName ExParams; // 0x88(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.JumpToConfig
// Size: 0x38 (Inherited: 0x10)
struct FJumpToConfig : FDescRowBase
{
	int32_t JumpTypeId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText ModuleName; // 0x18(0x18)
	struct FName ExParams; // 0x30(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.KeyBoxRow
// Size: 0x38 (Inherited: 0x10)
struct FKeyBoxRow : FDescRowBase
{
	int32_t Index; // 0x10(0x4)
	struct FName ItemID; // 0x14(0x8)
	int32_t MapID; // 0x1C(0x4)
	int32_t DefaultSlotNum; // 0x20(0x4)
	int32_t LevelSlotNums1; // 0x24(0x4)
	int32_t LevelSlotNums2; // 0x28(0x4)
	int32_t LevelSlotNums3; // 0x2C(0x4)
	int32_t LevelSlotNums4; // 0x30(0x4)
	int32_t BoxLength; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.KeyBoxUnlockRow
// Size: 0x30 (Inherited: 0x10)
struct FKeyBoxUnlockRow : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FName KeyBoxID; // 0x18(0x8)
	int32_t MapID; // 0x20(0x4)
	int32_t SlotLevel; // 0x24(0x4)
	int32_t UnlockSlotNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFMKeyInfoRow
// Size: 0xF0 (Inherited: 0x8)
struct FDFMKeyInfoRow : FTableRowBase
{
	uint64_t ID; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FString MapLevelStr; // 0x28(0x10)
	struct FText MapName; // 0x38(0x18)
	uint16_t MapID; // 0x50(0x2)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct FText Area; // 0x58(0x18)
	struct FText LockLocation; // 0x70(0x18)
	struct FVector LockCoord; // 0x88(0xC)
	int32_t Durability; // 0x94(0x4)
	struct FText Description; // 0x98(0x18)
	struct FText BehindTheDoor; // 0xB0(0x18)
	uint8_t Mechanic; // 0xC8(0x1)
	uint8_t Rank; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x6]; // 0xCA(0x6)
	struct TArray<struct FText> KeySpawnLocation; // 0xD0(0x10)
	struct TArray<uint64_t> ConnectionRelation; // 0xE0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LaserConfig
// Size: 0x40 (Inherited: 0x10)
struct FLaserConfig : FDescRowBase
{
	int32_t LaserConfigId; // 0x10(0x4)
	struct FName LaserConfigName; // 0x14(0x8)
	int32_t CycleDuration; // 0x1C(0x4)
	int32_t LaserCardLockDuration; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FLaserEmitterConfig> LaserEmitterConfigArr; // 0x28(0x10)
	int32_t VaporTriggerDuration; // 0x38(0x4)
	int32_t AutoReleaseDoorDuration; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.LaserEmitterConfig
// Size: 0x30 (Inherited: 0x0)
struct FLaserEmitterConfig
{
	int32_t LaserEmitterId; // 0x0(0x4)
	struct FName LaserEmitterName; // 0x4(0x8)
	struct FName AttackerValueId; // 0xC(0x8)
	float LaserDamageInterval; // 0x14(0x4)
	struct TArray<struct FLaserInterval> LaserActivationIntervalArr; // 0x18(0x10)
	uint8_t bIsPermanentLaser : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.LaserInterval
// Size: 0x8 (Inherited: 0x0)
struct FLaserInterval
{
	int32_t Start; // 0x0(0x4)
	int32_t End; // 0x4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.GeneralLevelSequenceData
// Size: 0x30 (Inherited: 0x10)
struct FGeneralLevelSequenceData : FDescRowBase
{
	struct FSoftObjectPath SequencePath; // 0x10(0x18)
	int32_t LoopCount; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DrawLineData
// Size: 0x10 (Inherited: 0x0)
struct FDrawLineData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LitePackPakConfig
// Size: 0x38 (Inherited: 0x10)
struct FLitePackPakConfig : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString PakKey; // 0x18(0x10)
	struct FString PakConfigs; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.DFResourceTag
// Size: 0x40 (Inherited: 0x10)
struct FDFResourceTag : FDescRowBase
{
	struct FString Filename; // 0x10(0x10)
	struct FString Tag; // 0x20(0x10)
	struct FString Info; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LitePackCategory
// Size: 0x38 (Inherited: 0x10)
struct FLitePackCategory : FDescRowBase
{
	int32_t ShowCategoryID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText CategoryTitle; // 0x18(0x18)
	int32_t Priority; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.LitePackageDownload
// Size: 0x128 (Inherited: 0x10)
struct FLitePackageDownload : FDescRowBase
{
	int32_t QuestID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString ModuleKey; // 0x18(0x10)
	struct FText QuestName; // 0x28(0x18)
	struct FText QuestDesc; // 0x40(0x18)
	struct FString PostName; // 0x58(0x10)
	int32_t Category; // 0x68(0x4)
	int32_t ShowCategory; // 0x6C(0x4)
	int32_t TriggerStyle; // 0x70(0x4)
	int32_t Priority; // 0x74(0x4)
	int32_t PriorityInMP; // 0x78(0x4)
	int32_t MapOrModeDownload; // 0x7C(0x4)
	struct FString MapOrModeParams; // 0x80(0x10)
	int32_t IsDeletable; // 0x90(0x4)
	int32_t QuestPlatform; // 0x94(0x4)
	int32_t AutoDownloadSpace; // 0x98(0x4)
	int32_t AutoDownloadTrigger; // 0x9C(0x4)
	int32_t HDStyle; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FString RelatedHDQuest; // 0xA8(0x10)
	int32_t isShow; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct FString WeGameBigPicUrl; // 0xC0(0x10)
	struct FString WeGameSmallPicUrl; // 0xD0(0x10)
	struct FString WeGameName; // 0xE0(0x10)
	struct FString WeGameDesc; // 0xF0(0x10)
	struct FString ChunkID; // 0x100(0x10)
	uint8_t bShowRedDot : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)
	struct FString SteamDlc; // 0x118(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LitePackageSteamDlc
// Size: 0x130 (Inherited: 0x10)
struct FLitePackageSteamDlc : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t ShowCategory; // 0x14(0x4)
	struct FText QuestName; // 0x18(0x18)
	struct FString PostName; // 0x30(0x10)
	int32_t Priority; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString SteamDlc; // 0x48(0x10)
	struct FString DLCName; // 0x58(0x10)
	int32_t IsSteamDlc; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString CNTestAppID; // 0x70(0x10)
	struct FString CNTestDepot; // 0x80(0x10)
	struct FString GlobalTestAppID; // 0x90(0x10)
	struct FString GlobalTestDepot; // 0xA0(0x10)
	struct FString CNPreAppID; // 0xB0(0x10)
	struct FString CNPreDepot; // 0xC0(0x10)
	struct FString GlobalPreAppID; // 0xD0(0x10)
	struct FString GlobalPreDepot; // 0xE0(0x10)
	struct FString CNReleaseAppID; // 0xF0(0x10)
	struct FString CNReleaseDepot; // 0x100(0x10)
	struct FString GlobalReleaseAppID; // 0x110(0x10)
	struct FString GlobalReleaseDepot; // 0x120(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LitePackModuleData
// Size: 0x38 (Inherited: 0x10)
struct FLitePackModuleData : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct FString ModuleName; // 0x18(0x10)
	struct FString MultiModuleName; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LiveRadioType
// Size: 0x40 (Inherited: 0x10)
struct FLiveRadioType : FDescRowBase
{
	int32_t RadioTypeID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	struct FString ICON; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LobbyAdConfig
// Size: 0x50 (Inherited: 0x10)
struct FLobbyAdConfig : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString Asset; // 0x18(0x10)
	int32_t Type; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString StartTime; // 0x30(0x10)
	struct FString EndTime; // 0x40(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LobbyChatParam
// Size: 0x40 (Inherited: 0x10)
struct FLobbyChatParam : FDescRowBase
{
	struct FString ParamKey; // 0x10(0x10)
	float ParamValue; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText Desc; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.LoginUI
// Size: 0x20 (Inherited: 0x10)
struct FLoginUI : FDescRowBase
{
	EGameBuildConfiguration TargetBuildConfiguration; // 0x10(0x1)
	uint8_t bShowDevelopBtn : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t bShowDownloadBtn : 1; // 0x12(0x1), Mask(0x1)
	uint8_t BitPad_0x12_1 : 7; // 0x12(0x1)
	uint8_t bShowLanguageBtn : 1; // 0x13(0x1), Mask(0x1)
	uint8_t BitPad_0x13_1 : 7; // 0x13(0x1)
	uint8_t bShowServiceBtn : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bShowAnnounceBtn : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t bShowFixBtn : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t bShowScanLoginBtn : 1; // 0x17(0x1), Mask(0x1)
	uint8_t BitPad_0x17_1 : 7; // 0x17(0x1)
	uint8_t bShopDevelopPanelBtn : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.LootingSearchAudioData
// Size: 0x68 (Inherited: 0x10)
struct FLootingSearchAudioData : FDescRowBase
{
	EPickupContainerLootAudioType PickupContainerLootAudioType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> GPAudioPlayEventAsset; // 0x18(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> GPAudioStopEventAsset; // 0x40(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponDropToGroundAudioData
// Size: 0x40 (Inherited: 0x10)
struct FWeaponDropToGroundAudioData : FDescRowBase
{
	EPhysicalSurface PhysicalSurface; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> GPAudioEventAsset; // 0x18(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.LootingAudioData
// Size: 0x180 (Inherited: 0x10)
struct FLootingAudioData : FDescRowBase
{
	int32_t LootingAudioId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> DragItemView1PAudio; // 0x18(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DropItemView1PAudio; // 0x40(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> Equip1PAudio; // 0x68(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> UnEquip1PAudio; // 0x90(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DiscardFromGrid1PAudio; // 0xB8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DiscardFromEquipSlot1PAudio; // 0xE0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DiscardFromEquipSlot3PAudio; // 0x108(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> InGamePickup3PAudio; // 0x130(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> InGameEquip3PAudio; // 0x158(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBrickConstants
// Size: 0x20 (Inherited: 0x10)
struct FMandelBrickConstants : FDescRowBase
{
	uint64_t ConstantID; // 0x10(0x8)
	uint64_t ConstantValue; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryBoxConfig
// Size: 0x60 (Inherited: 0x10)
struct FLotteryBoxConfig : FDescRowBase
{
	uint64_t boxId; // 0x10(0x8)
	struct FText BoxName; // 0x18(0x18)
	uint64_t Type; // 0x30(0x8)
	struct FText RuleDescription; // 0x38(0x18)
	uint64_t ShowID1; // 0x50(0x8)
	uint64_t ShowID2; // 0x58(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryBoxPropConfig
// Size: 0x68 (Inherited: 0x10)
struct FLotteryBoxPropConfig : FDescRowBase
{
	uint64_t NumID; // 0x10(0x8)
	uint64_t GroupID; // 0x18(0x8)
	uint64_t PropId; // 0x20(0x8)
	uint64_t Num; // 0x28(0x8)
	uint64_t ActiveFlag; // 0x30(0x8)
	uint64_t RestoreFlag; // 0x38(0x8)
	uint64_t SendByMail; // 0x40(0x8)
	float EstimatedProbability; // 0x48(0x4)
	float ProbShowed; // 0x4C(0x4)
	uint64_t AcquisitionGuaranteed; // 0x50(0x8)
	struct FString SpriteName; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryBoxGroupConfig
// Size: 0x60 (Inherited: 0x10)
struct FLotteryBoxGroupConfig : FDescRowBase
{
	uint64_t boxId; // 0x10(0x8)
	uint64_t GroupID; // 0x18(0x8)
	uint64_t ActiveFlag; // 0x20(0x8)
	uint64_t IndepProb; // 0x28(0x8)
	uint64_t Prob; // 0x30(0x8)
	uint64_t RestoreFlag; // 0x38(0x8)
	uint64_t ChangeStart; // 0x40(0x8)
	uint64_t ChangeRate; // 0x48(0x8)
	uint64_t TimeAssured; // 0x50(0x8)
	uint64_t CoreFlag; // 0x58(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryPool
// Size: 0x68 (Inherited: 0x10)
struct FLotteryPool : FDescRowBase
{
	int64_t PoolId; // 0x10(0x8)
	int64_t PoolRandomCnt; // 0x18(0x8)
	int64_t ItemID; // 0x20(0x8)
	int64_t Num; // 0x28(0x8)
	struct FText Description; // 0x30(0x18)
	uint8_t IsDropDirectly : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	int64_t Weight; // 0x50(0x8)
	uint8_t RestoreFlag : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	int64_t InventoryTypeStr; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryPoolClient
// Size: 0x50 (Inherited: 0x10)
struct FLotteryPoolClient : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t PoolId; // 0x18(0x8)
	int64_t ItemID; // 0x20(0x8)
	struct FText Description; // 0x28(0x18)
	uint8_t IsDropDirectly : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	int64_t Num; // 0x48(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryMusicData
// Size: 0x28 (Inherited: 0x10)
struct FLotteryMusicData : FDescRowBase
{
	int64_t LotteryId; // 0x10(0x8)
	struct FString MusicName; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryProbDistributionRow
// Size: 0x58 (Inherited: 0x10)
struct FLotteryProbDistributionRow : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t LotteryId; // 0x18(0x8)
	int32_t LotteryRound; // 0x20(0x4)
	int32_t Cost; // 0x24(0x4)
	int32_t frequency; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString RewardItem; // 0x30(0x10)
	int64_t SpecialItem; // 0x40(0x8)
	int32_t SortIndex; // 0x48(0x4)
	int32_t IsGreatReward; // 0x4C(0x4)
	int32_t Weight; // 0x50(0x4)
	int32_t IsGreatMP4; // 0x54(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryProp
// Size: 0x38 (Inherited: 0x10)
struct FLotteryProp : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
	struct FString Action; // 0x18(0x10)
	struct FString LotteryPoolId; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MailAvatar
// Size: 0x40 (Inherited: 0x8)
struct FMailAvatar : FTableRowBase
{
	int64_t AvatarID; // 0x8(0x8)
	struct FText Sender; // 0x10(0x18)
	struct FSoftObjectPath AvatarPath; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MallInfo
// Size: 0x100 (Inherited: 0x10)
struct FMallInfo : FDescRowBase
{
	int64_t ExchangeID; // 0x10(0x8)
	int64_t ItemID; // 0x18(0x8)
	struct FName Name; // 0x20(0x8)
	struct FName Merchant; // 0x28(0x8)
	int32_t ExchangeType; // 0x30(0x4)
	int32_t Order; // 0x34(0x4)
	int32_t UnlockLv; // 0x38(0x4)
	int32_t LabelNo1; // 0x3C(0x4)
	int32_t LabelNo2; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	int64_t CostItem1ID; // 0x48(0x8)
	int32_t CostItem1Num; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	int64_t CostItem2ID; // 0x58(0x8)
	int32_t CostItem2Num; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	int64_t CostItem3ID; // 0x68(0x8)
	int32_t CostItem3Num; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	int64_t CostItem4ID; // 0x78(0x8)
	int32_t CostItem4Num; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	int64_t CostItem5ID; // 0x88(0x8)
	int32_t CostItem5Num; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	int64_t CostItem6ID; // 0x98(0x8)
	int32_t CostItem6Num; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	int64_t CostItem7ID; // 0xA8(0x8)
	int32_t CostItem7Num; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	int64_t CostItem8ID; // 0xB8(0x8)
	int32_t CostItem8Num; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	int64_t CostItem9ID; // 0xC8(0x8)
	int32_t CostItem9Num; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	int64_t CostItem10ID; // 0xD8(0x8)
	int32_t CostItem10Num; // 0xE0(0x4)
	int32_t MinHourlySellingNum; // 0xE4(0x4)
	int32_t MaxHourlySellingNum; // 0xE8(0x4)
	int32_t BaseChangeRatio; // 0xEC(0x4)
	int32_t DefaultHourlySellingNum; // 0xF0(0x4)
	uint8_t ForSale : 1; // 0xF4(0x1), Mask(0x1)
	uint8_t BitPad_0xF4_1 : 7; // 0xF4(0x1)
	uint8_t CanBuy : 1; // 0xF5(0x1), Mask(0x1)
	uint8_t BitPad_0xF5_1 : 7; // 0xF5(0x1)
	uint8_t Pad_0xF6[0x2]; // 0xF6(0x2)
	int32_t PurchaseLimit; // 0xF8(0x4)
	uint8_t IsPanicBuying : 1; // 0xFC(0x1), Mask(0x1)
	uint8_t BitPad_0xFC_1 : 7; // 0xFC(0x1)
	uint8_t IsMain : 1; // 0xFD(0x1), Mask(0x1)
	uint8_t BitPad_0xFD_1 : 7; // 0xFD(0x1)
	uint8_t Pad_0xFE[0x2]; // 0xFE(0x2)
};

// Object: ScriptStruct DFMGlobalDefines.MallGroupArenaInfo
// Size: 0x60 (Inherited: 0x10)
struct FMallGroupArenaInfo : FDescRowBase
{
	int64_t LimitGroup; // 0x10(0x8)
	int64_t Merchant; // 0x18(0x8)
	int64_t LabelNo1; // 0x20(0x8)
	int64_t GroupOrder; // 0x28(0x8)
	struct FText GroupName; // 0x30(0x18)
	struct FText GroupDescription; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBrickDataRow
// Size: 0x20 (Inherited: 0x10)
struct FMandelBrickDataRow : FDescRowBase
{
	int64_t MandelBrickID; // 0x10(0x8)
	int32_t SeasonID; // 0x18(0x4)
	uint8_t OpenCollection : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBrickScanningSystemLibraries
// Size: 0x58 (Inherited: 0x10)
struct FMandelBrickScanningSystemLibraries : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t LibraryID; // 0x14(0x4)
	int32_t LineID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText LineString; // 0x20(0x18)
	struct FText LineAudio; // 0x38(0x18)
	int32_t LineWeight; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBrickScanningSystemCases
// Size: 0x28 (Inherited: 0x10)
struct FMandelBrickScanningSystemCases : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t TimeID; // 0x14(0x4)
	int32_t CaseID; // 0x18(0x4)
	int32_t SilenceProbability; // 0x1C(0x4)
	int32_t LibraryID; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MapBoardEasterEgg
// Size: 0x28 (Inherited: 0x10)
struct FMapBoardEasterEgg : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint32_t WithRandomConversation; // 0x14(0x4)
	uint32_t Case; // 0x18(0x4)
	uint32_t Probability; // 0x1C(0x4)
	uint32_t CoolDown; // 0x20(0x4)
	uint32_t boxId; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MapConfigGenerateToolRow
// Size: 0x60 (Inherited: 0x10)
struct FMapConfigGenerateToolRow : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString MapName; // 0x18(0x10)
	uint8_t IsSOLMap : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString MapBaseName; // 0x30(0x10)
	struct AGameModeBase* GameModeClass; // 0x40(0x8)
	struct UGPGameRuleSettingConfig* GPGameRuleSettingConfigClass; // 0x48(0x8)
	struct ULevelSubsystemConfig* LevelSubsystemConfig; // 0x50(0x8)
	int32_t MapType; // 0x58(0x4)
	int32_t TODID; // 0x5C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MapGlitchEffectConfigRow
// Size: 0x10 (Inherited: 0x8)
struct FMapGlitchEffectConfigRow : FTableRowBase
{
	int32_t MapID; // 0x8(0x4)
	uint8_t bEnableMapGlitchEffect : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.SOLExitConfig
// Size: 0x30 (Inherited: 0x10)
struct FSOLExitConfig : FDescRowBase
{
	int32_t PlayerExitID; // 0x10(0x4)
	int32_t MapID; // 0x14(0x4)
	struct FText PlayerExitName; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MapAreaInfo
// Size: 0x28 (Inherited: 0x10)
struct FMapAreaInfo : FDescRowBase
{
	struct FString AreaName; // 0x10(0x10)
	int32_t AreaID; // 0x20(0x4)
	uint8_t Precompile : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	EWorldScale WorldScale; // 0x25(0x1)
	uint8_t AreaNameCheckContain : 1; // 0x26(0x1), Mask(0x1)
	uint8_t BitPad_0x26_1 : 7; // 0x26(0x1)
	uint8_t Pad_0x27[0x1]; // 0x27(0x1)
};

// Object: ScriptStruct DFMGlobalDefines.MapConfig
// Size: 0x90 (Inherited: 0x10)
struct FMapConfig : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText DisplayName; // 0x18(0x18)
	struct FString LevelName; // 0x30(0x10)
	struct FString SubWorldName; // 0x40(0x10)
	struct FString LevelFullPath; // 0x50(0x10)
	int32_t TargetKillCount; // 0x60(0x4)
	int32_t MaxMatchDuration; // 0x64(0x4)
	uint8_t bAddToCook : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t bShowInMapSelection : 1; // 0x69(0x1), Mask(0x1)
	uint8_t BitPad_0x69_1 : 7; // 0x69(0x1)
	uint8_t bUseFastNetFrame : 1; // 0x6A(0x1), Mask(0x1)
	uint8_t BitPad_0x6A_1 : 7; // 0x6A(0x1)
	uint8_t Pad_0x6B[0x5]; // 0x6B(0x5)
	struct FText MapDesc; // 0x70(0x18)
	uint8_t bStreamingLevel : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bUsePSOCache : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t bInGameLevel : 1; // 0x8A(0x1), Mask(0x1)
	uint8_t BitPad_0x8A_1 : 7; // 0x8A(0x1)
	uint8_t bShouldWaitingAllPlayerLoadComplete : 1; // 0x8B(0x1), Mask(0x1)
	uint8_t BitPad_0x8B_1 : 7; // 0x8B(0x1)
	int32_t DoorKeyConsumeMultiple; // 0x8C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFMMapDoorInfoRow
// Size: 0x40 (Inherited: 0x8)
struct FDFMMapDoorInfoRow : FTableRowBase
{
	struct FText ID; // 0x8(0x18)
	struct TArray<struct FName> KeyID; // 0x20(0x10)
	struct FVector Location; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MapEnemySilencerDistanceConfigRow
// Size: 0x18 (Inherited: 0x8)
struct FMapEnemySilencerDistanceConfigRow : FTableRowBase
{
	int64_t SilencerFunId; // 0x8(0x8)
	float Distance; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MapInstancedSplineAreaData
// Size: 0xA0 (Inherited: 0x0)
struct FMapInstancedSplineAreaData
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct DFMGlobalDefines.MapIconSizeConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FMapIconSizeConfigRow : FTableRowBase
{
	EMapIconSizeType MapIconSizeType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector2D BigMapIconSize; // 0xC(0x8)
	struct FVector2D MiniMapIconSize; // 0x14(0x8)
	struct FVector2D EdgeTrackingBigMapScale; // 0x1C(0x8)
	struct FVector2D EdgeTrackingMiniMapSize; // 0x24(0x8)
	float EdgeTrackingScaleInBigMap; // 0x2C(0x4)
	float EdgeTrackingScaleInMiniMap; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MapPlayerIconData
// Size: 0x1 (Inherited: 0x0)
struct FMapPlayerIconData
{
	EMapPlayerIconState PlayerIconState; // 0x0(0x1)
};

// Object: ScriptStruct DFMGlobalDefines.DFMMapIconData
// Size: 0x50 (Inherited: 0x0)
struct FDFMMapIconData
{
	struct FName IconName; // 0x0(0x8)
	EDFMMapIconType MapIconType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector IconLocation; // 0xC(0xC)
	float IconRotateAngle; // 0x18(0x4)
	uint8_t BindRotate : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t bBindScale : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t BitPad_0x1D_1 : 7; // 0x1D(0x1)
	uint8_t bBindWorldRange : 1; // 0x1E(0x1), Mask(0x1)
	uint8_t BitPad_0x1E_1 : 7; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	float RealWorldRange; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct AActor* IconActor; // 0x28(0x8)
	EGPMarkerType MarkerType; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	uint64_t MarkingUniqueId; // 0x38(0x8)
	int32_t CustomIntValue; // 0x40(0x4)
	int32_t CustomIntValue2; // 0x44(0x4)
	float CustomFloatValue; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DFMMapDetectorData
// Size: 0x50 (Inherited: 0x0)
struct FDFMMapDetectorData
{
	struct FDFMMapIconData IconData; // 0x0(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.DisposalBombRangeInfo
// Size: 0x28 (Inherited: 0x0)
struct FDisposalBombRangeInfo
{
	uint64_t UniqueId; // 0x0(0x8)
	struct TArray<uint64_t> InteractCandidateArr; // 0x8(0x10)
	struct FVector Location; // 0x18(0xC)
	uint8_t BombState; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.DetectRangeInfo
// Size: 0x28 (Inherited: 0x0)
struct FDetectRangeInfo
{
	struct FName UniqueName; // 0x0(0x8)
	struct AActor* BindMovingActor; // 0x8(0x8)
	struct TArray<uint64_t> VisibleUinArr; // 0x10(0x10)
	int32_t State; // 0x20(0x4)
	float radius; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.BossLocInfo
// Size: 0x30 (Inherited: 0x0)
struct FBossLocInfo
{
	uint8_t bActive : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName IconName; // 0x4(0x8)
	float SphereRadius; // 0xC(0x4)
	struct FVector Center; // 0x10(0xC)
	int32_t OwnerTeamID; // 0x1C(0x4)
	int32_t NetGuid; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct AActor* BossActor; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.HelicopterDeterrenceInfo
// Size: 0x1C (Inherited: 0x0)
struct FHelicopterDeterrenceInfo
{
	uint8_t bActive : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName IconName; // 0x4(0x8)
	float DeterrenceRange; // 0xC(0x4)
	struct FVector DeterrenceCenter; // 0x10(0xC)
};

// Object: ScriptStruct DFMGlobalDefines.MapHighValueBoxInfoStruct
// Size: 0x38 (Inherited: 0x10)
struct FMapHighValueBoxInfoStruct : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<int64_t> EventIDForSpawnArray; // 0x18(0x10)
	struct TArray<struct FHighValueBoxInfo> HighValueBoxInfoArray; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBrickSeamlessMapGeneratorStruct
// Size: 0x50 (Inherited: 0x10)
struct FMandelBrickSeamlessMapGeneratorStruct : FDescRowBase
{
	int32_t GeneratorId; // 0x10(0x4)
	int32_t SpawnWeight; // 0x14(0x4)
	struct FVector SpawnerLoc; // 0x18(0xC)
	struct FName SpawnerName; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FVector> DecipherLocArr; // 0x30(0x10)
	struct TArray<struct FName> DecipherNameArr; // 0x40(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBrickSeamlessMapStruct
// Size: 0x70 (Inherited: 0x10)
struct FMandelBrickSeamlessMapStruct : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TMap<int32_t, struct FMandelBrickSeamlessMapGeneratorStruct> GeneratorStructMap; // 0x18(0x50)
	uint8_t bDelayStart : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBrickSeamlessMapGeneratorStructForSort
// Size: 0x8 (Inherited: 0x0)
struct FMandelBrickSeamlessMapGeneratorStructForSort
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MapFloorStruct
// Size: 0x28 (Inherited: 0x0)
struct FMapFloorStruct
{
	EMapFloorType FloorType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t FloorWidth; // 0x4(0x4)
	struct TArray<struct FVector> CapturePointLocArr; // 0x8(0x10)
	struct TArray<struct FString> TexNameArr; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.POIProductCollectionRow
// Size: 0x30 (Inherited: 0x8)
struct FPOIProductCollectionRow : FTableRowBase
{
	struct FText MapPOINameText; // 0x8(0x18)
	struct TArray<EMapLocationPOIProductType> POIProductTypeArray; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.POIProductDataRow
// Size: 0x60 (Inherited: 0x8)
struct FPOIProductDataRow : FTableRowBase
{
	int32_t LegendSortIndex; // 0x8(0x4)
	EMapLocationPOIProductType ProductType; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FText ProductName; // 0x10(0x18)
	struct TSoftObjectPtr<UObject> IconPath; // 0x28(0x28)
	struct FLinearColor IconColor; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LegendIconDataRow
// Size: 0x60 (Inherited: 0x8)
struct FLegendIconDataRow : FTableRowBase
{
	int32_t LegendSortIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText LegendText; // 0x10(0x18)
	struct TSoftObjectPtr<UObject> IconPath; // 0x28(0x28)
	struct FLinearColor IconColor; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MapLocationStruct
// Size: 0x110 (Inherited: 0x10)
struct FMapLocationStruct : FDescRowBase
{
	struct FText LocationName; // 0x10(0x18)
	struct FVector Coord; // 0x28(0xC)
	EMapLocationType MapLocationType; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FText DescStr; // 0x38(0x18)
	EMapLocationPOILevelType POILevelType; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct TArray<struct FName> RareItemList; // 0x58(0x10)
	uint8_t bIsEventPOI : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct TArray<struct FVector> EventOffsetArray; // 0x70(0x10)
	uint8_t bSimplePOI1InMiniMap : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	EMapLocationPOIProductType POIProductType; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)
	struct FHighValueBoxInfo HighValueBoxInfo; // 0x88(0x60)
	struct FName BossNameID; // 0xE8(0x8)
	float BigMapBossWorldRange; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x1C]; // 0xF4(0x1C)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseMapLocationStruct
// Size: 0x190 (Inherited: 0x110)
struct FSafeHouseMapLocationStruct : FMapLocationStruct
{
	EDFMMapIconType IconType; // 0x110(0x1)
	ESafeHouseIconMapType MapType; // 0x111(0x1)
	ESafeHouseIconGroundType GroundType; // 0x112(0x1)
	uint8_t Pad_0x113[0x5]; // 0x113(0x5)
	struct FSoftObjectPath IconImgPath; // 0x118(0x18)
	struct FText IconDesc; // 0x130(0x18)
	int32_t DeviceID; // 0x148(0x4)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct FText TransportDesc1; // 0x150(0x18)
	struct FText TransportDesc2; // 0x168(0x18)
	struct FVector TransportPosition; // 0x180(0xC)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterColorRow
// Size: 0x38 (Inherited: 0x10)
struct FCharacterColorRow : FDescRowBase
{
	EDFMGamePlayMode CurrentGameMode; // 0x10(0x1)
	uint8_t bTeammateUseUniqueColor : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct TArray<struct FLinearColor> UniqueTeammateColorArr; // 0x18(0x10)
	struct TArray<struct FLinearColor> SimpleColorArr; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MiniMapWorldRangeInfo
// Size: 0x34 (Inherited: 0x0)
struct FMiniMapWorldRangeInfo
{
	uint8_t Pad_0x0[0x34]; // 0x0(0x34)
};

// Object: ScriptStruct DFMGlobalDefines.BigMapWorldRangeInfo
// Size: 0x1C (Inherited: 0x0)
struct FBigMapWorldRangeInfo
{
	uint8_t Pad_0x0[0x1C]; // 0x0(0x1C)
};

// Object: ScriptStruct DFMGlobalDefines.MapBaseInfoData
// Size: 0x158 (Inherited: 0x0)
struct FMapBaseInfoData
{
	struct FString MapName; // 0x0(0x10)
	uint8_t Pad_0x10[0x120]; // 0x10(0x120)
	struct TSoftObjectPtr<UTexture2D> SplineAreaAtlas; // 0x130(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.MapBaseInfo
// Size: 0x80 (Inherited: 0x10)
struct FMapBaseInfo : FDescRowBase
{
	int32_t MapConfigMapID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<int32_t> InGameMapIDArr; // 0x18(0x10)
	struct FString MapName; // 0x28(0x10)
	struct FText MapNameText; // 0x38(0x18)
	int32_t MapType; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TSoftObjectPtr<UMapInfoConfig> MapInfoConfigPath; // 0x58(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.MapThumbnailData
// Size: 0x78 (Inherited: 0x10)
struct FMapThumbnailData : FDescRowBase
{
	struct FString MapName; // 0x10(0x10)
	int32_t MatchModeId; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FSoftObjectPath MapThumbnail; // 0x28(0x18)
	int32_t MapID; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString BigMapIconPath; // 0x48(0x10)
	struct FString SmallMapIconPath; // 0x58(0x10)
	struct FString VerticalMapIconPath; // 0x68(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MarketTab
// Size: 0xA8 (Inherited: 0x10)
struct FMarketTab : FDescRowBase
{
	int32_t PageID; // 0x10(0x4)
	int32_t MainTabId; // 0x14(0x4)
	int32_t SubTabId; // 0x18(0x4)
	int32_t SubTabContentId; // 0x1C(0x4)
	struct FText MainTabName; // 0x20(0x18)
	struct FText SubTabName; // 0x38(0x18)
	struct FText SubTabContentName; // 0x50(0x18)
	int32_t MainTabOrder; // 0x68(0x4)
	int32_t SubTabOrder; // 0x6C(0x4)
	int32_t SubTabContentOrder; // 0x70(0x4)
	int32_t bHide; // 0x74(0x4)
	struct TArray<int32_t> MainTabTypes; // 0x78(0x10)
	struct TArray<int32_t> SubTabTypes; // 0x88(0x10)
	struct TArray<int32_t> SubTabContentTypes; // 0x98(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MaskWidgetStyle
// Size: 0x138 (Inherited: 0x8)
struct FMaskWidgetStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImage; // 0x8(0x90)
	struct TArray<struct FMaskClip> MaskClips; // 0x98(0x10)
	struct FSlateBrush MaskMatBrush; // 0xA8(0x90)
};

// Object: ScriptStruct DFMGlobalDefines.MaskClip
// Size: 0x28 (Inherited: 0x0)
struct FMaskClip
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UTexture2D* MaskTex; // 0x8(0x8)
	struct FVector2D MaskPosition; // 0x10(0x8)
	struct FVector2D MaskSize; // 0x18(0x8)
	uint8_t ClipEnable : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.MatchCommonConfig
// Size: 0x50 (Inherited: 0x10)
struct FMatchCommonConfig : FDescRowBase
{
	struct FString MatchID; // 0x10(0x10)
	struct FText Desc; // 0x20(0x18)
	int32_t SubTypeId; // 0x38(0x4)
	int32_t ModeId; // 0x3C(0x4)
	int32_t SubModeID; // 0x40(0x4)
	int32_t MapID; // 0x44(0x4)
	int32_t MaxPlayerNum; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MatchGameMode
// Size: 0x60 (Inherited: 0x10)
struct FMatchGameMode : FDescRowBase
{
	int32_t GameMode; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText GameModeName; // 0x18(0x18)
	struct FText GameModeFullName; // 0x30(0x18)
	struct FText GameModeDesc; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MatchGameRule
// Size: 0x60 (Inherited: 0x10)
struct FMatchGameRule : FDescRowBase
{
	int32_t GameRule; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText GameRuleName; // 0x18(0x18)
	struct FText GameRuleFullName; // 0x30(0x18)
	struct FText GameRuleDesc; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MatchIdcToAreaConfig
// Size: 0x60 (Inherited: 0x10)
struct FMatchIdcToAreaConfig : FDescRowBase
{
	int32_t Index; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText IdcName; // 0x18(0x18)
	struct FText AreaName; // 0x30(0x18)
	struct FText LocAreaName; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MatchModeKVTable
// Size: 0x60 (Inherited: 0x10)
struct FMatchModeKVTable : FDescRowBase
{
	struct FString SheetId; // 0x10(0x10)
	struct FString TypeID; // 0x20(0x10)
	struct FString ModeId; // 0x30(0x10)
	struct FString Name; // 0x40(0x10)
	struct FString ModeDesc; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MatchTypeKVTable
// Size: 0x50 (Inherited: 0x10)
struct FMatchTypeKVTable : FDescRowBase
{
	struct FString SheetId; // 0x10(0x10)
	struct FString TypeID; // 0x20(0x10)
	struct FString Name; // 0x30(0x10)
	struct FString TypeDesc; // 0x40(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MatchModeConfig
// Size: 0x78 (Inherited: 0x10)
struct FMatchModeConfig : FDescRowBase
{
	int64_t MatchModeId; // 0x10(0x8)
	struct FText MapName; // 0x18(0x18)
	struct FText ModuleName; // 0x30(0x18)
	struct FText Desc; // 0x48(0x18)
	int32_t GameMode; // 0x60(0x4)
	int32_t GameRule; // 0x64(0x4)
	int32_t MapID; // 0x68(0x4)
	int32_t MatchSubMode; // 0x6C(0x4)
	int32_t TeamMode; // 0x70(0x4)
	int32_t RaidID; // 0x74(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MatchMode
// Size: 0x30 (Inherited: 0x10)
struct FMatchMode : FDescRowBase
{
	int32_t ModeId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MatchRule
// Size: 0x78 (Inherited: 0x10)
struct FMatchRule : FDescRowBase
{
	struct FString MatchID; // 0x10(0x10)
	struct FString MapID; // 0x20(0x10)
	struct FString ModeId; // 0x30(0x10)
	struct FString TypeID; // 0x40(0x10)
	int32_t MinPlayerNum; // 0x50(0x4)
	int32_t NormalPlayerNum; // 0x54(0x4)
	struct FString MatchExpand; // 0x58(0x10)
	struct FString MatchRatio; // 0x68(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MatchSubMode
// Size: 0x60 (Inherited: 0x10)
struct FMatchSubMode : FDescRowBase
{
	int32_t MatchSubMode; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText MatchSubModeName; // 0x18(0x18)
	struct FText MatchSubModeFullName; // 0x30(0x18)
	struct FText MatchSubModeDesc; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MatchTeamMode
// Size: 0x60 (Inherited: 0x10)
struct FMatchTeamMode : FDescRowBase
{
	int32_t TeamMode; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText TeamModeName; // 0x18(0x18)
	struct FText TeamModeFullName; // 0x30(0x18)
	struct FText TeamModeDesc; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MatchType
// Size: 0x48 (Inherited: 0x10)
struct FMatchType : FDescRowBase
{
	int32_t SubTypeId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString SubTypeName; // 0x18(0x10)
	int32_t ModeId; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText ModeName; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MatchTypeModeKV
// Size: 0x68 (Inherited: 0x10)
struct FMatchTypeModeKV : FDescRowBase
{
	struct FString SheetId; // 0x10(0x10)
	struct FString ObjId; // 0x20(0x10)
	struct FText Name; // 0x30(0x18)
	int32_t IsType; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FText ModeDesc; // 0x50(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MiniWorldSceneSubLevelsData
// Size: 0x30 (Inherited: 0x10)
struct FMiniWorldSceneSubLevelsData : FDescRowBase
{
	struct FName SceneName; // 0x10(0x8)
	struct TArray<struct FSoftObjectPath> SubLevels; // 0x18(0x10)
	int32_t PriorityLevel; // 0x28(0x4)
	uint8_t IsPermanent : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.LobbyMiniWorldSceneSubLevelsData
// Size: 0x40 (Inherited: 0x30)
struct FLobbyMiniWorldSceneSubLevelsData : FMiniWorldSceneSubLevelsData
{
	struct FName DisplayType; // 0x30(0x8)
	struct FName ScreenVedio; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MissionCheckPoint
// Size: 0x30 (Inherited: 0x10)
struct FMissionCheckPoint : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MissionRelativeLevel
// Size: 0x60 (Inherited: 0x10)
struct FMissionRelativeLevel : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> BindLoadLevels; // 0x20(0x10)
	struct TArray<struct FSoftObjectPath> BindUnLoadLevels; // 0x30(0x10)
	struct TArray<struct FSoftObjectPath> CompleteLoadLevels; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> CompleteUnLoadLevels; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MissionCompleteLevel
// Size: 0x40 (Inherited: 0x10)
struct FMissionCompleteLevel : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> LoadLevels; // 0x20(0x10)
	struct TArray<struct FSoftObjectPath> UnloadLevels; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MissionSystemSetting
// Size: 0x50 (Inherited: 0x10)
struct FMissionSystemSetting : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FString> Values; // 0x20(0x10)
	struct UObject* ProxyClass; // 0x30(0x8)
	float FloatValue; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FSoftObjectPath> PathObjs; // 0x40(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.UIAreaReportItem
// Size: 0x18 (Inherited: 0x0)
struct FUIAreaReportItem
{
	struct FString ATName; // 0x0(0x10)
	uint8_t Priority; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.UIAreaReportInfo
// Size: 0x60 (Inherited: 0x10)
struct FUIAreaReportInfo : FDescRowBase
{
	struct TMap<struct FString, struct FUIAreaReportItem> UIAreaReportInfoMap; // 0x10(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CustomLayoutRow
// Size: 0x50 (Inherited: 0x10)
struct FCustomLayoutRow : FDescRowBase
{
	struct FString LayoutName; // 0x10(0x10)
	struct FText LayoutText; // 0x20(0x18)
	struct TArray<struct FCustomLayoutWidgetInfo> WidgetLayoutInfos; // 0x38(0x10)
	uint8_t bFirstLevel : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.CustomLayoutInfo
// Size: 0x80 (Inherited: 0x0)
struct FCustomLayoutInfo
{
	struct FVector2D offset; // 0x0(0x8)
	int32_t AnchorIndex; // 0x8(0x4)
	float RenderOpacity; // 0xC(0x4)
	float RenderScale; // 0x10(0x4)
	uint8_t bIsForbidable : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t IsForbiden : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t bOwnSteer : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t IsSteer : 1; // 0x17(0x1), Mask(0x1)
	uint8_t BitPad_0x17_1 : 7; // 0x17(0x1)
	float RunAreaSize; // 0x18(0x4)
	float SprintAreaSize; // 0x1C(0x4)
	uint8_t IsSizeScale : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector2D StandardSize; // 0x24(0x8)
	uint8_t Pad_0x2C[0x54]; // 0x2C(0x54)
};

// Object: ScriptStruct DFMGlobalDefines.CustomLayoutWidgetInfo
// Size: 0x90 (Inherited: 0x0)
struct FCustomLayoutWidgetInfo
{
	struct FString WidgetName; // 0x0(0x10)
	struct FCustomLayoutInfo LayoutInfo; // 0x10(0x80)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleCustomLayoutInfo
// Size: 0x24 (Inherited: 0x0)
struct FVehicleCustomLayoutInfo
{
	struct FVector2D offset; // 0x0(0x8)
	int32_t AnchorIndex; // 0x8(0x4)
	float RenderOpacity; // 0xC(0x4)
	float RenderScale; // 0x10(0x4)
	uint8_t bIsForbidable : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t IsForbiden : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t bOwnSteer : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t IsSteer : 1; // 0x17(0x1), Mask(0x1)
	uint8_t BitPad_0x17_1 : 7; // 0x17(0x1)
	uint8_t IsSizeScale : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FVector2D StandardSize; // 0x1C(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ModeHallGameConfig
// Size: 0x88 (Inherited: 0x10)
struct FModeHallGameConfig : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t MatchModeId; // 0x18(0x8)
	uint8_t IsActivityMode : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t IsActivityOpen : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	int32_t ActivityPriority; // 0x24(0x4)
	int32_t JumpId; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText ModeTitle; // 0x30(0x18)
	struct FText ModeDetail; // 0x48(0x18)
	struct FString ImagePath; // 0x60(0x10)
	struct FString VideoName; // 0x70(0x10)
	uint8_t IsBossMode : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ModeRecommendationData
// Size: 0x48 (Inherited: 0x10)
struct FModeRecommendationData : FDescRowBase
{
	int32_t RegionNo; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString RegionCode; // 0x18(0x10)
	struct FString PriorityModePC; // 0x28(0x10)
	struct FString PriorityModeMobile; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ModulePlaygoSwitcherConfig
// Size: 0x30 (Inherited: 0x10)
struct FModulePlaygoSwitcherConfig : FDescRowBase
{
	int32_t ModuleID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString ModuleNameDec; // 0x18(0x10)
	uint8_t LockState : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.ModuleSwitcherConfig
// Size: 0x40 (Inherited: 0x10)
struct FModuleSwitcherConfig : FDescRowBase
{
	int32_t ModuleID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString ModuleNameDec; // 0x18(0x10)
	struct TArray<struct FModuleSwitcherUIItem> UINameToIDList; // 0x28(0x10)
	uint8_t Review_Close : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t DefaultLockState : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: ScriptStruct DFMGlobalDefines.ModuleSwitcherUIItem
// Size: 0x18 (Inherited: 0x0)
struct FModuleSwitcherUIItem
{
	struct FString UINameToID; // 0x0(0x10)
	int32_t SwitcherState; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ModuleUnlockConfig
// Size: 0x88 (Inherited: 0x10)
struct FModuleUnlockConfig : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Description; // 0x18(0x18)
	uint8_t EnablePopup : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t UnlockParam1Type; // 0x34(0x4)
	int32_t UnlockParam1Condition; // 0x38(0x4)
	int32_t UnlockParam2Type; // 0x3C(0x4)
	int32_t UnlockParam2Condition; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString IconPath; // 0x48(0x10)
	struct FText UnlockBtnTxt; // 0x58(0x18)
	struct FText Unlocktips; // 0x70(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.MossVoiceConfig
// Size: 0x48 (Inherited: 0x10)
struct FMossVoiceConfig : FDescRowBase
{
	struct FString MossVoiceID; // 0x10(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> MossVoiceAsset; // 0x20(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.MPDropDataRow
// Size: 0x28 (Inherited: 0x10)
struct FMPDropDataRow : FDescRowBase
{
	int64_t MandelBrickID; // 0x10(0x8)
	int32_t DayLimit; // 0x18(0x4)
	int32_t WeekLimit; // 0x1C(0x4)
	int32_t MonthLimit; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MPDropLimitDataRow
// Size: 0x28 (Inherited: 0x10)
struct FMPDropLimitDataRow : FDescRowBase
{
	int64_t MandelBrickID; // 0x10(0x8)
	int32_t DayLimit; // 0x18(0x4)
	int32_t WeekLimit; // 0x1C(0x4)
	int32_t MonthLimit; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MPLobbyCharacterOffset
// Size: 0x30 (Inherited: 0x8)
struct FMPLobbyCharacterOffset : FTableRowBase
{
	int64_t HeroId; // 0x8(0x8)
	struct FString HeroName; // 0x10(0x10)
	float XOffset; // 0x20(0x4)
	float YOffset; // 0x24(0x4)
	float ZOffset; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MPMandelBrickPool
// Size: 0x30 (Inherited: 0x10)
struct FMPMandelBrickPool : FDescRowBase
{
	int32_t Index; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	uint64_t SeasonID; // 0x18(0x8)
	uint64_t MPMandelBrickID; // 0x20(0x8)
	int32_t MPDropRate; // 0x28(0x4)
	int32_t RuleId; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MusicPlayerWidgetData
// Size: 0x50 (Inherited: 0x10)
struct FMusicPlayerWidgetData : FDescRowBase
{
	struct FName Name; // 0x10(0x8)
	struct FName Desc; // 0x18(0x8)
	struct FName AudioEventName; // 0x20(0x8)
	struct FSoftObjectPath ICON; // 0x28(0x18)
	int32_t SortOrder; // 0x40(0x4)
	uint8_t bLimited : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct FName LimitedHeroFashionId; // 0x48(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MysteryMerchantRefresh
// Size: 0x40 (Inherited: 0x10)
struct FMysteryMerchantRefresh : FDescRowBase
{
	struct FString FirstRefreshTime; // 0x10(0x10)
	float FirstRefreshPercent; // 0x20(0x4)
	float FirstRefreshNum; // 0x24(0x4)
	struct FString SecondRefreshTime; // 0x28(0x10)
	float SecondRefreshPercent; // 0x38(0x4)
	float SecondRefreshNum; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MysticalPendantCombineBaseDataRow
// Size: 0x20 (Inherited: 0x10)
struct FMysticalPendantCombineBaseDataRow : FDescRowBase
{
	int32_t Class; // 0x10(0x4)
	int32_t CombineConsumeNum; // 0x14(0x4)
	int32_t CombineOutputNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MysticalPendantSuit
// Size: 0xE0 (Inherited: 0x10)
struct FMysticalPendantSuit : FDescRowBase
{
	int32_t SeasonID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t SuitId; // 0x18(0x8)
	int32_t PendantNum; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<int64_t> PendantIdsClient; // 0x28(0x10)
	struct TArray<struct FSoftObjectPath> PendantImg; // 0x38(0x10)
	struct FSoftObjectPath SuitPendantImg; // 0x48(0x18)
	struct FText SuitEffectName; // 0x60(0x18)
	struct FText SuitEffectDes; // 0x78(0x18)
	struct FSoftObjectPath SeasonImg; // 0x90(0x18)
	struct TArray<struct FSoftObjectPath> PendantShadowImg; // 0xA8(0x10)
	struct FSoftObjectPath SeasonSceneImg; // 0xB8(0x18)
	struct FString VideosPath; // 0xD0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MysticalSkinCombineBaseDataRow
// Size: 0x18 (Inherited: 0x10)
struct FMysticalSkinCombineBaseDataRow : FDescRowBase
{
	int32_t Class; // 0x10(0x4)
	int32_t CombineConsumeNum; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MysticalSkinFeatureScreening
// Size: 0x60 (Inherited: 0x10)
struct FMysticalSkinFeatureScreening : FDescRowBase
{
	uint64_t SerialNumber; // 0x10(0x8)
	uint64_t SkinId; // 0x18(0x8)
	int32_t TypeID; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText TypeDesc; // 0x28(0x18)
	int32_t Number; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FText Name; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.HackGameNarrativeProps
// Size: 0x48 (Inherited: 0x10)
struct FHackGameNarrativeProps : FDescRowBase
{
	int64_t NarrativePropId; // 0x10(0x8)
	struct FText Title; // 0x18(0x18)
	struct FText Content; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.NarrativePropsConfig
// Size: 0xE0 (Inherited: 0x10)
struct FNarrativePropsConfig : FDescRowBase
{
	int64_t NarrativePropId; // 0x10(0x8)
	int32_t PagesNum; // 0x18(0x4)
	int32_t PageLinesNum; // 0x1C(0x4)
	int32_t LineWordsNum; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText TitleName; // 0x28(0x18)
	struct FText OneContent; // 0x40(0x18)
	struct FText SecContent; // 0x58(0x18)
	struct FText ThirContent; // 0x70(0x18)
	struct FText FourContent; // 0x88(0x18)
	struct FText FifContent; // 0xA0(0x18)
	struct TSoftObjectPtr<UTexture> NarrativeBgImg; // 0xB8(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.NewbieChallenge
// Size: 0x40 (Inherited: 0x10)
struct FNewbieChallenge : FDescRowBase
{
	int32_t Type; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	struct TArray<uint64_t> IncludeGoal; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.NPCRoleInfoTable
// Size: 0xB8 (Inherited: 0x10)
struct FNPCRoleInfoTable : FDescRowBase
{
	int32_t NPCID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	int32_t Telephone; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FText Location; // 0x50(0x18)
	struct FText Mood; // 0x68(0x18)
	struct FText Resume; // 0x80(0x18)
	struct FString IconPath; // 0x98(0x10)
	struct FString BgImagePath; // 0xA8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.PackagePathPakRow
// Size: 0x88 (Inherited: 0x80)
struct FPackagePathPakRow : FAssetPakerPakPolicyRow
{
	struct FName ResPackagePath; // 0x80(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.PlatformDataRow
// Size: 0x58 (Inherited: 0x10)
struct FPlatformDataRow : FDescRowBase
{
	struct FSoftObjectPath PlatformIcon; // 0x10(0x18)
	struct FSoftObjectPath PlatformIconBlack; // 0x28(0x18)
	struct FSoftObjectPath ViewProfileIcon; // 0x40(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.PlatformPadding
// Size: 0x14 (Inherited: 0x0)
struct FPlatformPadding
{
	EGPScreenAdaptType ScreenAdaptType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FMargin Padding; // 0x4(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.PlatformSize
// Size: 0x28 (Inherited: 0x0)
struct FPlatformSize
{
	EGPScreenAdaptType ScreenAdaptType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float WidthOverride; // 0x4(0x4)
	float HeightOverride; // 0x8(0x4)
	float MinDesiredWidth; // 0xC(0x4)
	float MinDesiredHeight; // 0x10(0x4)
	float MaxDesiredWidth; // 0x14(0x4)
	float MaxDesiredHeight; // 0x18(0x4)
	float MinAspectRatio; // 0x1C(0x4)
	float MaxAspectRatio; // 0x20(0x4)
	uint8_t bOverride_WidthOverride : 1; // 0x24(0x1), Mask(0x1)
	uint8_t bOverride_HeightOverride : 1; // 0x24(0x1), Mask(0x2)
	uint8_t bOverride_MinDesiredWidth : 1; // 0x24(0x1), Mask(0x4)
	uint8_t bOverride_MinDesiredHeight : 1; // 0x24(0x1), Mask(0x8)
	uint8_t bOverride_MaxDesiredWidth : 1; // 0x24(0x1), Mask(0x10)
	uint8_t bOverride_MaxDesiredHeight : 1; // 0x24(0x1), Mask(0x20)
	uint8_t bOverride_MinAspectRatio : 1; // 0x24(0x1), Mask(0x40)
	uint8_t bOverride_MaxAspectRatio : 1; // 0x24(0x1), Mask(0x80)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.PlayerMoments
// Size: 0x68 (Inherited: 0x8)
struct FPlayerMoments : FTableRowBase
{
	int64_t MomentTypeID; // 0x8(0x8)
	int64_t UnLockType; // 0x10(0x8)
	int64_t UnlockParam1; // 0x18(0x8)
	int64_t UnlockParam2; // 0x20(0x8)
	int64_t UnlockParam3; // 0x28(0x8)
	int64_t ValidTime; // 0x30(0x8)
	int64_t CD; // 0x38(0x8)
	struct FSoftObjectPath ICON; // 0x40(0x18)
	struct FString RichText; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.PlayerMomentsText
// Size: 0xC8 (Inherited: 0x8)
struct FPlayerMomentsText : FTableRowBase
{
	int64_t TextID; // 0x8(0x8)
	int64_t MomentTypeID; // 0x10(0x8)
	int64_t TextParam1; // 0x18(0x8)
	int64_t TextParam2; // 0x20(0x8)
	struct FString TextParam3; // 0x28(0x10)
	struct FText BasicText; // 0x38(0x18)
	struct FText SuffixText1; // 0x50(0x18)
	struct FText SuffixText2; // 0x68(0x18)
	struct FText SuffixText3; // 0x80(0x18)
	struct FText SuffixText4; // 0x98(0x18)
	struct FText SuffixText5; // 0xB0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.PlayerMomentsVar
// Size: 0x10 (Inherited: 0x8)
struct FPlayerMomentsVar : FTableRowBase
{
	int64_t VarID; // 0x8(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.PresetChatAuto
// Size: 0x48 (Inherited: 0x10)
struct FPresetChatAuto : FDescRowBase
{
	struct FName PresetChatId; // 0x10(0x8)
	struct FString Desc; // 0x18(0x10)
	struct FText PresetChat; // 0x28(0x18)
	int64_t ChatCD; // 0x40(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.PresetChatFunction
// Size: 0x38 (Inherited: 0x10)
struct FPresetChatFunction : FDescRowBase
{
	struct FString FunctionId; // 0x10(0x10)
	struct FString FunctionName; // 0x20(0x10)
	int64_t FunctionDesc; // 0x30(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.PresetChat
// Size: 0x40 (Inherited: 0x10)
struct FPresetChat : FDescRowBase
{
	struct FString PresetChatId; // 0x10(0x10)
	struct FText PresetChat; // 0x20(0x18)
	int64_t FunctionId; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.PropCombinationConfig
// Size: 0x28 (Inherited: 0x10)
struct FPropCombinationConfig : FDescRowBase
{
	uint64_t CombinationID; // 0x10(0x8)
	struct FString PropArray; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.UnCarryProp
// Size: 0x58 (Inherited: 0x10)
struct FUnCarryProp : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	struct FString UncarryablePropSlot; // 0x18(0x10)
	int32_t CarryableMaxNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString WhiteIDList; // 0x30(0x10)
	int32_t QualityFilter; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	int64_t ValueFilter; // 0x48(0x8)
	uint8_t IsCarryInActive : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.PropIDPriority
// Size: 0x20 (Inherited: 0x10)
struct FPropIDPriority : FDescRowBase
{
	struct FName ItemIdPrefix; // 0x10(0x8)
	int32_t Priority; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.PropSlotConfig
// Size: 0x80 (Inherited: 0x10)
struct FPropSlotConfig : FDescRowBase
{
	struct FString PageID; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FString PagePropTypes; // 0x38(0x10)
	struct FString IgnorePropTypes; // 0x48(0x10)
	int32_t Capacity; // 0x58(0x4)
	int32_t PageLength; // 0x5C(0x4)
	int32_t PageWidth; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct FString ComplexSpaceDescription; // 0x68(0x10)
	uint8_t bIsContainerSelf : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t bIsContainerByItem : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t bHasSubTab : 1; // 0x7A(0x1), Mask(0x1)
	uint8_t BitPad_0x7A_1 : 7; // 0x7A(0x1)
	uint8_t Pad_0x7B[0x5]; // 0x7B(0x5)
};

// Object: ScriptStruct DFMGlobalDefines.PropSlotSubConfig
// Size: 0x58 (Inherited: 0x10)
struct FPropSlotSubConfig : FDescRowBase
{
	struct FString PageSubId; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FString PagePropTypes; // 0x38(0x10)
	struct FString IgnorePropTypes; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.PSOWhiteList
// Size: 0x20 (Inherited: 0x10)
struct FPSOWhiteList : FDescRowBase
{
	struct FString CombineHash; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.PVESetting
// Size: 0x60 (Inherited: 0x10)
struct FPVESetting : FDescRowBase
{
	int32_t ChapterID; // 0x10(0x4)
	int32_t MapID; // 0x14(0x4)
	struct FText ChapterDesc; // 0x18(0x18)
	struct FText ChapterText; // 0x30(0x18)
	struct FText ThumbnailID; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.QuestActorConfigRow
// Size: 0x1A8 (Inherited: 0x10)
struct FQuestActorConfigRow : FDescRowBase
{
	int64_t QuestID; // 0x10(0x8)
	int64_t objectiveId; // 0x18(0x8)
	struct FVector Location; // 0x20(0xC)
	struct FRotator Rotation; // 0x2C(0xC)
	struct FVector Scale; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TSoftClassPtr<struct AActor*> TemplateClass; // 0x48(0x28)
	struct FVector ShapeLocation; // 0x70(0xC)
	struct FRotator ShapeRotation; // 0x7C(0xC)
	struct FVector ShapeScale; // 0x88(0xC)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TArray<struct FName> Tags; // 0x98(0x10)
	int32_t InteractorType; // 0xA8(0x4)
	struct FName SecondTypeName; // 0xAC(0x8)
	uint8_t bCanBeMarkedByPlayerSOL : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	struct FText InteractorName; // 0xB8(0x18)
	struct FName ItemID; // 0xD0(0x8)
	uint8_t BindType; // 0xD8(0x1)
	uint8_t bInteractOnce : 1; // 0xD9(0x1), Mask(0x1)
	uint8_t BitPad_0xD9_1 : 7; // 0xD9(0x1)
	uint8_t Pad_0xDA[0x6]; // 0xDA(0x6)
	struct TSoftObjectPtr<UStaticMesh> StaticMeshPtr; // 0xE0(0x28)
	uint8_t CustombIsNeedFilterCollision_HD : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t CustombIsNeedFilterCollision_Mobile : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x2]; // 0x10A(0x2)
	float radius; // 0x10C(0x4)
	struct FVector BoxExtend; // 0x110(0xC)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	struct TMap<struct FGameplayTag, float> Tag2DelayTime; // 0x120(0x50)
	uint8_t bIsScanable : 1; // 0x170(0x1), Mask(0x1)
	uint8_t BitPad_0x170_1 : 7; // 0x170(0x1)
	uint8_t bUseInstanceScanPerform : 1; // 0x171(0x1), Mask(0x1)
	uint8_t BitPad_0x171_1 : 7; // 0x171(0x1)
	uint8_t Pad_0x172[0x2]; // 0x172(0x2)
	int32_t RelinkPerformConfigId; // 0x174(0x4)
	struct TArray<int32_t> CustemDataIntArray; // 0x178(0x10)
	struct TArray<struct FString> CustemDataStringArray; // 0x188(0x10)
	struct TArray<float> CustemDataFloatArray; // 0x198(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.FalloutInventoryItemRow
// Size: 0x30 (Inherited: 0x8)
struct FFalloutInventoryItemRow : FTableRowBase
{
	int32_t UniqueId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	int64_t ItemID; // 0x10(0x8)
	struct FString ItemName; // 0x18(0x10)
	float FalloutValue; // 0x28(0x4)
	int32_t FalloutBuff; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.EscapePossessionEquipData
// Size: 0x40 (Inherited: 0x0)
struct FEscapePossessionEquipData
{
	uint64_t CharacterUin; // 0x0(0x8)
	uint64_t HelmetGid; // 0x8(0x8)
	uint64_t BreastPlateGid; // 0x10(0x8)
	uint64_t ChestHangingGid; // 0x18(0x8)
	uint64_t BagGid; // 0x20(0x8)
	uint64_t MainWeaponLeftGid; // 0x28(0x8)
	uint64_t MainWeaponRightGid; // 0x30(0x8)
	uint64_t PistolWeaponGid; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MapBaseRow
// Size: 0x30 (Inherited: 0x10)
struct FMapBaseRow : FDescRowBase
{
	struct FString MapName; // 0x10(0x10)
	struct FString MapBaseName; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CapacitorRoomExpectationTableRow
// Size: 0x50 (Inherited: 0x8)
struct FCapacitorRoomExpectationTableRow : FTableRowBase
{
	int32_t UniqueId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<int32_t> MapIds; // 0x10(0x10)
	struct FName RoomId; // 0x20(0x8)
	int32_t RoomRank; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<int32_t> BoxIDs; // 0x30(0x10)
	float SpawnExpectation; // 0x40(0x4)
	struct FVector2D FloatingCoefficient; // 0x44(0x8)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CapacitorRoomRankTableRow
// Size: 0x70 (Inherited: 0x8)
struct FCapacitorRoomRankTableRow : FTableRowBase
{
	struct TArray<int32_t> MapIds; // 0x8(0x10)
	int32_t CurrentStepIndex; // 0x18(0x4)
	int32_t CurrentRank; // 0x1C(0x4)
	struct TMap<int32_t, float> NextStepRanks; // 0x20(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.CapacitorRoomGraphTableRow
// Size: 0x78 (Inherited: 0x8)
struct FCapacitorRoomGraphTableRow : FTableRowBase
{
	struct TArray<int32_t> MapIds; // 0x8(0x10)
	struct FName StartGroupName; // 0x18(0x8)
	struct TArray<struct FCapacitorRoomEdge> StepOneEdges; // 0x20(0x10)
	float StepTwoProbability; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FCapacitorRoomEdge> StepTwoEdges; // 0x38(0x10)
	float StepThreeProbability; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct TArray<struct FCapacitorRoomEdge> StepThreeEdges; // 0x50(0x10)
	float StepFourProbability; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct TArray<struct FCapacitorRoomEdge> StepFourEdges; // 0x68(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CapacitorRoomEdge
// Size: 0x14 (Inherited: 0x0)
struct FCapacitorRoomEdge
{
	struct FName SrcRoomGroup; // 0x0(0x8)
	struct FName DstRoomGroup; // 0x8(0x8)
	float Weight; // 0x10(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RandomCapacitorTableRow
// Size: 0x110 (Inherited: 0x8)
struct FRandomCapacitorTableRow : FTableRowBase
{
	struct TArray<int32_t> MapIds; // 0x8(0x10)
	struct FName GroupName; // 0x18(0x8)
	struct TMap<int32_t, float> CapacitorNumProbability; // 0x20(0x50)
	struct TMap<int32_t, float> CapacitorRankProbability; // 0x70(0x50)
	struct TMap<int32_t, float> ChainNumProbability; // 0xC0(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.HighValueRoomExpectationTableRow
// Size: 0x48 (Inherited: 0x8)
struct FHighValueRoomExpectationTableRow : FTableRowBase
{
	int32_t UniqueId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<int32_t> MapIds; // 0x10(0x10)
	struct FName RoomId; // 0x20(0x8)
	struct TArray<int32_t> BoxIDs; // 0x28(0x10)
	float SpawnExpectation; // 0x38(0x4)
	struct FVector2D FloatingCoefficient; // 0x3C(0x8)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RandomHighValueRoomTableRow
// Size: 0x70 (Inherited: 0x8)
struct FRandomHighValueRoomTableRow : FTableRowBase
{
	struct TArray<int32_t> MapIds; // 0x8(0x10)
	struct FName GroupName; // 0x18(0x8)
	struct TMap<int32_t, float> HighValueNumProbability; // 0x20(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.RandomContainerTableRow
// Size: 0x58 (Inherited: 0x8)
struct FRandomContainerTableRow : FTableRowBase
{
	int32_t UniqueId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<int32_t> MapIds; // 0x10(0x10)
	struct FName BigArea; // 0x20(0x8)
	struct FName SmallArea; // 0x28(0x8)
	struct TArray<int32_t> BoxIDs; // 0x30(0x10)
	float SpawnExpectation; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<float> FloatingCoefficient; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonQuestConfigRow
// Size: 0x20 (Inherited: 0x8)
struct FSeasonQuestConfigRow : FTableRowBase
{
	struct FString ConfigString; // 0x8(0x10)
	int32_t Param1; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.FateQuestRow
// Size: 0x70 (Inherited: 0x8)
struct FFateQuestRow : FTableRowBase
{
	int64_t FateQuestId; // 0x8(0x8)
	int64_t Quest; // 0x10(0x8)
	int64_t SeasonID; // 0x18(0x8)
	int64_t FateQuestSequence; // 0x20(0x8)
	int64_t FateQuestUnlockTime; // 0x28(0x8)
	struct FString FateQuestImg; // 0x30(0x10)
	struct FString FateQuestCover; // 0x40(0x10)
	struct FString FateQuestLockdImg; // 0x50(0x10)
	struct FString FateQuestUnLockImg; // 0x60(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CollectorRewardsRow
// Size: 0x30 (Inherited: 0x8)
struct FCollectorRewardsRow : FTableRowBase
{
	int64_t CollectorRewardId; // 0x8(0x8)
	int64_t SeasonID; // 0x10(0x8)
	int64_t CollectorCount; // 0x18(0x8)
	struct TArray<int64_t> RewardIdArr; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CollectorSlotRow
// Size: 0x28 (Inherited: 0x8)
struct FCollectorSlotRow : FTableRowBase
{
	int64_t CollectorSlotId; // 0x8(0x8)
	int64_t GroupProb1; // 0x10(0x8)
	int64_t GroupProb2; // 0x18(0x8)
	int64_t GroupProb3; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.CollectorGroupRow
// Size: 0x70 (Inherited: 0x8)
struct FCollectorGroupRow : FTableRowBase
{
	int64_t CollectorGroupId; // 0x8(0x8)
	struct FText CollectorGroupName; // 0x10(0x18)
	struct FText CollectorGroupDesc; // 0x28(0x18)
	int64_t CollectorGroupType; // 0x40(0x8)
	int64_t Prob; // 0x48(0x8)
	struct TArray<int64_t> ItemListArr; // 0x50(0x10)
	struct TArray<int64_t> ItemCountArr; // 0x60(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonQuestGroupRow
// Size: 0x70 (Inherited: 0x8)
struct FSeasonQuestGroupRow : FTableRowBase
{
	int64_t GroupID; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText TitleName; // 0x28(0x18)
	int64_t GroupType; // 0x40(0x8)
	int64_t Sequence; // 0x48(0x8)
	struct TArray<int64_t> QuestIdArr; // 0x50(0x10)
	int64_t GropStarCount; // 0x60(0x8)
	int32_t GropUnlockTime; // 0x68(0x4)
	uint8_t IsUnopenShow : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonQuestStageRow
// Size: 0x68 (Inherited: 0x8)
struct FSeasonQuestStageRow : FTableRowBase
{
	int64_t StageId; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	int64_t StageSequence; // 0x40(0x8)
	int64_t StageMainGroup; // 0x48(0x8)
	struct TArray<int64_t> StageSubGroupArr; // 0x50(0x10)
	int64_t StageUnlockStarCount; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonQuestLineRow
// Size: 0x1D0 (Inherited: 0x8)
struct FSeasonQuestLineRow : FTableRowBase
{
	int64_t LineID; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct TArray<int64_t> SeasonIdArr; // 0x40(0x10)
	struct TArray<int64_t> SeasonStageIdArr; // 0x50(0x10)
	int64_t FinalQuestUnlockType1; // 0x60(0x8)
	int64_t FinalQuestUnlockParam1; // 0x68(0x8)
	struct FText FinalQuestUnlockDesc1; // 0x70(0x18)
	int64_t FinalQuestUnlockType2; // 0x88(0x8)
	int64_t FinalQuestUnlockParam2; // 0x90(0x8)
	struct FText FinalQuestUnlockDesc2; // 0x98(0x18)
	int64_t FinalQuestUnlockType3; // 0xB0(0x8)
	int64_t FinalQuestUnlockParam3; // 0xB8(0x8)
	struct FText FinalQuestUnlockDesc3; // 0xC0(0x18)
	int64_t OverTimeType1; // 0xD8(0x8)
	int64_t OverTimeParam1; // 0xE0(0x8)
	struct FText OverTimeDesc1; // 0xE8(0x18)
	int64_t OverTimeType2; // 0x100(0x8)
	int32_t OverTimeParam2; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FText OverTimeDesc2; // 0x110(0x18)
	int64_t OverTimeType3; // 0x128(0x8)
	int64_t OverTimeParam3; // 0x130(0x8)
	struct FText OverTimeDesc3; // 0x138(0x18)
	struct FSoftObjectPath SeasonQuestGuideImg1; // 0x150(0x18)
	struct FSoftObjectPath SeasonQuestGuideImg2; // 0x168(0x18)
	struct FSoftObjectPath SeasonQuestGuideImg3; // 0x180(0x18)
	int64_t OverTimeRewardID; // 0x198(0x8)
	int64_t OverTimeRewardCount; // 0x1A0(0x8)
	struct TArray<int64_t> OpenLimits; // 0x1A8(0x10)
	uint8_t IsUnopenShow : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t BitPad_0x1B8_1 : 7; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x7]; // 0x1B9(0x7)
	int64_t OpenLevel; // 0x1C0(0x8)
	int64_t FinalQuestId; // 0x1C8(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.BattleFieldOnlyInGameQuestRow
// Size: 0xD0 (Inherited: 0x10)
struct FBattleFieldOnlyInGameQuestRow : FDescRowBase
{
	int64_t QuestID; // 0x10(0x8)
	EBattleFieldQuestType QuestType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FText Name; // 0x20(0x18)
	struct TMap<int64_t, uint8_t> ObjectiveList; // 0x38(0x50)
	uint8_t bIsOptionalTask : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t CompletOptionalNumber; // 0x8C(0x4)
	uint8_t bIsBindHolidayEventId : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t HolidayEventId; // 0x94(0x4)
	struct FString QuestAwardIcon; // 0x98(0x10)
	struct FString QuestAwardID; // 0xA8(0x10)
	struct FText FailurePrompt; // 0xB8(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BattleFieldQuestObjectiveRow
// Size: 0x158 (Inherited: 0x8)
struct FBattleFieldQuestObjectiveRow : FTableRowBase
{
	int64_t objectiveId; // 0x8(0x8)
	int32_t Type; // 0x10(0x4)
	uint8_t ShouldMustBeCompleted : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t IsComplexPropObjective : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t IsComplexWeaponObjective : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
	struct FString Param1; // 0x18(0x10)
	struct FString Param1Desc; // 0x28(0x10)
	struct FString Param2; // 0x38(0x10)
	struct FString Param2Desc; // 0x48(0x10)
	struct FString param3; // 0x58(0x10)
	struct FString Param3Desc; // 0x68(0x10)
	struct FString Param4; // 0x78(0x10)
	struct FString Param4Desc; // 0x88(0x10)
	struct TArray<uint64_t> ListParam; // 0x98(0x10)
	int32_t RequiredCount; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct TArray<int32_t> ConditionIDArray; // 0xB0(0x10)
	struct FText ObjectiveDesc; // 0xC0(0x18)
	struct FText BriefObjectiveDesc; // 0xD8(0x18)
	float TimeLimit; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	int64_t PrerequestObjectiveID; // 0xF8(0x8)
	uint8_t bIsHasMapRestrict : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
	struct TArray<uint32_t> MapID; // 0x108(0x10)
	struct FVector Location; // 0x118(0xC)
	uint8_t bShowTracking : 1; // 0x124(0x1), Mask(0x1)
	uint8_t BitPad_0x124_1 : 7; // 0x124(0x1)
	uint8_t Pad_0x125[0x3]; // 0x125(0x3)
	struct FString MapMarker; // 0x128(0x10)
	uint8_t ResetWhenQuestFailed : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
	struct FText HelperTips; // 0x140(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BattleFieldQuestRow
// Size: 0x230 (Inherited: 0x10)
struct FBattleFieldQuestRow : FDescRowBase
{
	int64_t QuestID; // 0x10(0x8)
	EBattleFieldQuestType QuestType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<uint32_t> MapID; // 0x20(0x10)
	uint8_t bIsOptionalTask : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t CompletOptionalNumber; // 0x34(0x4)
	struct TArray<int64_t> PreviousIDList; // 0x38(0x10)
	uint8_t IsConnectPrevious : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t ShouldAutoAccept : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	int32_t AcceptRequiredLevel; // 0x4C(0x4)
	struct FString GiverID; // 0x50(0x10)
	struct FString EnderID; // 0x60(0x10)
	struct FString AcceptDiaIogID; // 0x70(0x10)
	struct FString RewardDialogID; // 0x80(0x10)
	uint8_t ResetAllWhenFailed : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t ResetAllWhenSettlementFailed : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t Pad_0x92[0x6]; // 0x92(0x6)
	struct TArray<EQuestGoalForbiddenType> QuestGoalForbiddenTypeArray; // 0x98(0x10)
	struct TArray<int32_t> QuestConditionIDArray; // 0xA8(0x10)
	struct TArray<int64_t> ObjectiveList; // 0xB8(0x10)
	struct TArray<int64_t> RewardList; // 0xC8(0x10)
	struct FText Name; // 0xD8(0x18)
	struct FString QuestAwardIcon; // 0xF0(0x10)
	struct FString QuestAwardID; // 0x100(0x10)
	struct FText Bulletin; // 0x110(0x18)
	struct FText Desc; // 0x128(0x18)
	struct FString QuestIcon; // 0x140(0x10)
	struct FString QuestImage; // 0x150(0x10)
	float ContractReward; // 0x160(0x4)
	float ContractLimitTime; // 0x164(0x4)
	int64_t ParentId; // 0x168(0x8)
	int32_t YOffset; // 0x170(0x4)
	int32_t IsCG; // 0x174(0x4)
	struct FString CgPath; // 0x178(0x10)
	uint8_t ShowRewardPrview : 1; // 0x188(0x1), Mask(0x1)
	uint8_t BitPad_0x188_1 : 7; // 0x188(0x1)
	uint8_t Pad_0x189[0x7]; // 0x189(0x7)
	struct FString RewardNPCImage; // 0x190(0x10)
	struct FString RewardNPCJob; // 0x1A0(0x10)
	struct FString RewardNPCName; // 0x1B0(0x10)
	struct FString RewardNPCDesc; // 0x1C0(0x10)
	struct TArray<int64_t> ShowCondition; // 0x1D0(0x10)
	int32_t SpecialType; // 0x1E0(0x4)
	uint8_t Pad_0x1E4[0x4]; // 0x1E4(0x4)
	struct FString MapMarker; // 0x1E8(0x10)
	int32_t QuestLifeType; // 0x1F8(0x4)
	uint8_t Pad_0x1FC[0x4]; // 0x1FC(0x4)
	struct FString QuestPath; // 0x200(0x10)
	struct FString AreaGiverID; // 0x210(0x10)
	int32_t WorldType; // 0x220(0x4)
	uint8_t IsStandalone : 1; // 0x224(0x1), Mask(0x1)
	uint8_t BitPad_0x224_1 : 7; // 0x224(0x1)
	uint8_t IsInMapDetail : 1; // 0x225(0x1), Mask(0x1)
	uint8_t BitPad_0x225_1 : 7; // 0x225(0x1)
	uint8_t Pad_0x226[0x2]; // 0x226(0x2)
	int32_t FrozenTimeAfterPreQuestReward; // 0x228(0x4)
	uint8_t Pad_0x22C[0x4]; // 0x22C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.CharacterCheckingConditionRow
// Size: 0x98 (Inherited: 0x8)
struct FCharacterCheckingConditionRow : FTableRowBase
{
	int32_t ConditionID; // 0x8(0x4)
	int32_t IsInitalStatusCheck; // 0xC(0x4)
	float CheckStep; // 0x10(0x4)
	float CheckSingle; // 0x14(0x4)
	uint8_t IsComplexProp : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FString EquipmentCondition; // 0x20(0x10)
	struct FString UnEquipmentCondition; // 0x30(0x10)
	uint8_t IsComplexWeapon : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FString WeaponCondition; // 0x48(0x10)
	struct FString UnWeaponCondition; // 0x58(0x10)
	uint8_t IsComplexItem : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString GameItemCondition; // 0x70(0x10)
	struct FString UnGameItemCondition; // 0x80(0x10)
	uint8_t MustMoreThan : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t TotalEquipPrice; // 0x94(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.InteractAnimsRow
// Size: 0x178 (Inherited: 0x8)
struct FInteractAnimsRow : FTableRowBase
{
	int64_t AnimsID; // 0x8(0x8)
	float AnimTime_Start; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FSoftObjectPath FPPAnimPath_Start; // 0x18(0x18)
	struct FSoftObjectPath TPPAnimPath_Start; // 0x30(0x18)
	float AnimTime_Loop; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FSoftObjectPath FPPAnimPath_Loop; // 0x50(0x18)
	struct FSoftObjectPath TPPAnimPath_Loop; // 0x68(0x18)
	float AnimTime_Stop; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FSoftObjectPath FPPAnimPath_Stop; // 0x88(0x18)
	struct FSoftObjectPath TPPAnimPath_Stop; // 0xA0(0x18)
	struct FSoftObjectPath PropFPPMesh; // 0xB8(0x18)
	struct FSoftObjectPath PropTPPMesh; // 0xD0(0x18)
	struct FSoftObjectPath PropFPPAnimPath_Start; // 0xE8(0x18)
	struct FSoftObjectPath PropTPPAnimPath_Start; // 0x100(0x18)
	struct FSoftObjectPath PropFPPAnimPath_Loop; // 0x118(0x18)
	struct FSoftObjectPath PropTPPAnimPath_Loop; // 0x130(0x18)
	struct FSoftObjectPath PropFPPAnimPath_Stop; // 0x148(0x18)
	struct FSoftObjectPath PropTPPAnimPath_Stop; // 0x160(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.QuestReferenceRow
// Size: 0x28 (Inherited: 0x8)
struct FQuestReferenceRow : FTableRowBase
{
	int64_t QuestID; // 0x8(0x8)
	struct FSoftClassPath QuestPath; // 0x10(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SOLContractRewardRow
// Size: 0xB0 (Inherited: 0x8)
struct FSOLContractRewardRow : FTableRowBase
{
	int64_t QuestID; // 0x8(0x8)
	int32_t MapID; // 0x10(0x4)
	uint8_t IsHighReward : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t IsBenchmark : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	int32_t Reward; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<int64_t> RewardProps1; // 0x20(0x10)
	uint8_t bMask1 : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct TArray<int64_t> RewardProps2; // 0x38(0x10)
	uint8_t bMask2 : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<int64_t> RewardProps3; // 0x50(0x10)
	uint8_t bMask3 : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct TArray<int64_t> RewardProps4; // 0x68(0x10)
	uint8_t bMask4 : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct TArray<int64_t> RewardProps5; // 0x80(0x10)
	uint8_t bMask5 : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct TArray<int64_t> RewardProps6; // 0x98(0x10)
	uint8_t bMask6 : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.SOLQuestDetailObjectivesType
// Size: 0x40 (Inherited: 0x8)
struct FSOLQuestDetailObjectivesType : FTableRowBase
{
	int64_t objectiveId; // 0x8(0x8)
	struct FSoftObjectPath ObjectiveIcon; // 0x10(0x18)
	struct FText ObjectiveDesc; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SOLQuestDetailTargetType
// Size: 0x40 (Inherited: 0x8)
struct FSOLQuestDetailTargetType : FTableRowBase
{
	int64_t TargetID; // 0x8(0x8)
	struct FSoftObjectPath TargetIcon; // 0x10(0x18)
	struct FText TargetDesc; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SOLQuestDetailMapConfigRow
// Size: 0xE8 (Inherited: 0x8)
struct FSOLQuestDetailMapConfigRow : FTableRowBase
{
	int64_t UniqueId; // 0x8(0x8)
	int64_t QuestID; // 0x10(0x8)
	int64_t objectiveId; // 0x18(0x8)
	struct FString MapName; // 0x20(0x10)
	struct FVector MapCenterLocation; // 0x30(0xC)
	struct FVector QuestTargetLocation; // 0x3C(0xC)
	float MapRangeRadius; // 0x48(0x4)
	int32_t MapDetailTarget; // 0x4C(0x4)
	struct FText MapDetailTargetParam1; // 0x50(0x18)
	struct FText MapDetailTargetParam2; // 0x68(0x18)
	float MapDetailTargetScale; // 0x80(0x4)
	int32_t MapDetailObjectives; // 0x84(0x4)
	struct FText MapDetailObjectivesDesc; // 0x88(0x18)
	struct FText MapLocationInfo; // 0xA0(0x18)
	struct FText MapTemperatureInfo; // 0xB8(0x18)
	struct FText MapTimeInfo; // 0xD0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.QuestRestrictionRow
// Size: 0x28 (Inherited: 0x10)
struct FQuestRestrictionRow : FDescRowBase
{
	int64_t ContractID; // 0x10(0x8)
	struct TArray<int32_t> ForbiddenCampIds; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.QuestRandomRow
// Size: 0x40 (Inherited: 0x10)
struct FQuestRandomRow : FDescRowBase
{
	struct FName RandomGroupName; // 0x10(0x8)
	int32_t MapID; // 0x18(0x4)
	struct FName MapName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FContractRandomConfig> RandomConfigArray; // 0x28(0x10)
	float ContractNPCMaxDist; // 0x38(0x4)
	float ContractNPCMinDist; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ContractRandomConfig
// Size: 0x8 (Inherited: 0x0)
struct FContractRandomConfig
{
	int32_t ContractID; // 0x0(0x4)
	float RandomRate; // 0x4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.QuestConfigRow
// Size: 0x30 (Inherited: 0x10)
struct FQuestConfigRow : FDescRowBase
{
	int64_t QuestObjectiveID; // 0x10(0x8)
	EQuestType QuestType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<struct FSOLQAObjectiveData> ObjectiveDataArray; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.QuestContractNPCInfoRow
// Size: 0x40 (Inherited: 0x10)
struct FQuestContractNPCInfoRow : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	float WillEnableTimeStep; // 0x20(0x4)
	int32_t ContractID; // 0x24(0x4)
	struct FVector Loc; // 0x28(0xC)
	struct FRotator Rot; // 0x34(0xC)
};

// Object: ScriptStruct DFMGlobalDefines.QuestVolumeInfoRow
// Size: 0x48 (Inherited: 0x10)
struct FQuestVolumeInfoRow : FDescRowBase
{
	struct FString Name; // 0x10(0x10)
	struct FQuestFullID FullID; // 0x20(0x10)
	struct FName VolumeTag; // 0x30(0x8)
	struct FVector Loc; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.QuestTrackingMapInfoRow
// Size: 0x40 (Inherited: 0x10)
struct FQuestTrackingMapInfoRow : FDescRowBase
{
	int64_t objectiveId; // 0x10(0x8)
	struct FVector Location; // 0x18(0xC)
	uint8_t bEnableRangeRadius : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float RangeRadius; // 0x28(0x4)
	uint8_t bEnableAdvancedTracking : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float ShowTrackingRangeDist; // 0x30(0x4)
	struct FVector2D TrackingRangeOffset; // 0x34(0x8)
	float ShowPreciseHudIconRangeRadius; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SOLQuestMapInfo
// Size: 0x30 (Inherited: 0x0)
struct FSOLQuestMapInfo
{
	int64_t objectiveId; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
	float RangeRadius; // 0x14(0x4)
	uint8_t bEnableAdvancedTracking : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float ShowTrackingRangeDist; // 0x1C(0x4)
	struct FVector2D TrackingRangeOffset; // 0x20(0x8)
	float ShowPreciseHudIconRangeRadius; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.WorldTimeLimitQuestRow
// Size: 0x38 (Inherited: 0x10)
struct FWorldTimeLimitQuestRow : FDescRowBase
{
	uint64_t QuestID; // 0x10(0x8)
	uint32_t EventGroupID; // 0x18(0x4)
	int32_t TimeLimit; // 0x1C(0x4)
	struct FString MapID; // 0x20(0x10)
	uint32_t RefreshWeight; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SOLQuestDialogConfigRow
// Size: 0x40 (Inherited: 0x8)
struct FSOLQuestDialogConfigRow : FTableRowBase
{
	int32_t UniqueId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	int64_t QuestID; // 0x10(0x8)
	int64_t objectiveId; // 0x18(0x8)
	EQuestDialogActiveType DialogActiveType; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FName DialogGroupID; // 0x24(0x8)
	float DialogTriggerTime; // 0x2C(0x4)
	uint32_t BroadcastCount; // 0x30(0x4)
	uint32_t BroadcastStart; // 0x34(0x4)
	int32_t TargetProgress; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.DeliverQuestPerformanceRow
// Size: 0x48 (Inherited: 0x8)
struct FDeliverQuestPerformanceRow : FTableRowBase
{
	int64_t objectiveId; // 0x8(0x8)
	struct FSoftObjectPath AnimPathFPP; // 0x10(0x18)
	struct FSoftObjectPath AnimPathTPP; // 0x28(0x18)
	float TimeOfDuration; // 0x40(0x4)
	uint8_t bLimitOperation : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.QuestLineRow
// Size: 0xC0 (Inherited: 0x10)
struct FQuestLineRow : FDescRowBase
{
	int64_t QuestLineID; // 0x10(0x8)
	int32_t QuestType; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t RootQuestID; // 0x20(0x8)
	struct FText LineName; // 0x28(0x18)
	struct FString LineCover; // 0x40(0x10)
	struct FString LineTab; // 0x50(0x10)
	struct TArray<int64_t> OpenLimits; // 0x60(0x10)
	uint8_t IsUnopenShow : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	int32_t QuestPublishNpcId; // 0x74(0x4)
	int32_t MerchantId; // 0x78(0x4)
	int32_t OpenLevel; // 0x7C(0x4)
	struct TArray<int32_t> SeasonIdArr; // 0x80(0x10)
	int32_t SeasonID; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FString SeasonDefaultIcon; // 0x98(0x10)
	struct FText SeasonDefaultDesc; // 0xA8(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.QuestRewardsRow
// Size: 0x38 (Inherited: 0x10)
struct FQuestRewardsRow : FDescRowBase
{
	int64_t RewardId; // 0x10(0x8)
	int32_t Type; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t ItemID; // 0x20(0x8)
	int32_t Number; // 0x28(0x4)
	int32_t BindType; // 0x2C(0x4)
	uint8_t ImportantReward : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.QuestObjComplexWeaponTermInfo
// Size: 0x180 (Inherited: 0x8)
struct FQuestObjComplexWeaponTermInfo : FTableRowBase
{
	int64_t QuestObjectiveID; // 0x8(0x8)
	int32_t WeaponSubType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<int32_t> WeaponSubTypeExArr; // 0x18(0x10)
	int64_t WeaponID; // 0x28(0x8)
	struct FString BasicalDamage; // 0x30(0x10)
	struct FString AdvantageousRange; // 0x40(0x10)
	struct FString RecoilControl; // 0x50(0x10)
	struct FString ControlSpeed; // 0x60(0x10)
	struct FString WeaponStability; // 0x70(0x10)
	struct FString ShootDispersion; // 0x80(0x10)
	struct TArray<int64_t> SubAttributeIDList1; // 0x90(0x10)
	struct FText SubAttributeDescList1; // 0xA0(0x18)
	struct TArray<int64_t> SubAttributeIDList2; // 0xB8(0x10)
	struct FText SubAttributeDescList2; // 0xC8(0x18)
	struct TArray<int64_t> SubAttributeIDList3; // 0xE0(0x10)
	struct FText SubAttributeDescList3; // 0xF0(0x18)
	struct TArray<int64_t> SubAttributeIDList4; // 0x108(0x10)
	struct FText SubAttributeDescList4; // 0x118(0x18)
	struct TArray<int64_t> SubAttributeIDList5; // 0x130(0x10)
	struct FText SubAttributeDescList5; // 0x140(0x18)
	struct TArray<int64_t> SubAttributeIDList6; // 0x158(0x10)
	struct FText SubAttributeDescList6; // 0x168(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ComplexPropObjectiveRow
// Size: 0x68 (Inherited: 0x8)
struct FComplexPropObjectiveRow : FTableRowBase
{
	int64_t RuleId; // 0x8(0x8)
	int32_t ItemType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<int32_t> ItemTypeExArr; // 0x18(0x10)
	int32_t ItemQuality; // 0x28(0x4)
	uint8_t IsMoreThanQuality : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	int64_t ItemPrice; // 0x30(0x8)
	uint8_t IsMoreThanPrice : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FString ObjectiveIcon; // 0x40(0x10)
	struct FText RuleName; // 0x50(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.QuestObjectiveRow
// Size: 0x180 (Inherited: 0x8)
struct FQuestObjectiveRow : FTableRowBase
{
	int64_t objectiveId; // 0x8(0x8)
	int32_t Type; // 0x10(0x4)
	uint8_t ShouldMustBeCompleted : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t IsComplexPropObjective : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t IsComplexWeaponObjective : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
	struct FString Param1; // 0x18(0x10)
	struct FString Param1Desc; // 0x28(0x10)
	struct FString Param2; // 0x38(0x10)
	struct FString Param2Desc; // 0x48(0x10)
	struct FString param3; // 0x58(0x10)
	struct FString Param3Desc; // 0x68(0x10)
	struct FString Param4; // 0x78(0x10)
	struct FString Param4Desc; // 0x88(0x10)
	struct TArray<uint64_t> ListParam; // 0x98(0x10)
	int32_t RequiredCount; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct TArray<int32_t> ConditionIDArray; // 0xB0(0x10)
	struct FText ObjectiveDesc; // 0xC0(0x18)
	struct FText BriefObjectiveDesc; // 0xD8(0x18)
	float TimeLimit; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct TArray<EInGameBattleClassType> BattleClassTypeList; // 0xF8(0x10)
	struct TArray<int64_t> ExpertIDList; // 0x108(0x10)
	struct TArray<uint32_t> BuffIdArr; // 0x118(0x10)
	int64_t PrerequestObjectiveID; // 0x128(0x8)
	struct TArray<uint32_t> MapID; // 0x130(0x10)
	struct FVector Location; // 0x140(0xC)
	uint8_t bShowTracking : 1; // 0x14C(0x1), Mask(0x1)
	uint8_t BitPad_0x14C_1 : 7; // 0x14C(0x1)
	uint8_t bIgnoreGlitchVolume : 1; // 0x14D(0x1), Mask(0x1)
	uint8_t BitPad_0x14D_1 : 7; // 0x14D(0x1)
	uint8_t Pad_0x14E[0x2]; // 0x14E(0x2)
	struct FString MapMarker; // 0x150(0x10)
	uint8_t ResetWhenQuestFailed : 1; // 0x160(0x1), Mask(0x1)
	uint8_t BitPad_0x160_1 : 7; // 0x160(0x1)
	uint8_t ShareToTeammates : 1; // 0x161(0x1), Mask(0x1)
	uint8_t BitPad_0x161_1 : 7; // 0x161(0x1)
	uint8_t Pad_0x162[0x6]; // 0x162(0x6)
	struct FText HelperTips; // 0x168(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.QuestConditionRow
// Size: 0xB0 (Inherited: 0x10)
struct FQuestConditionRow : FDescRowBase
{
	int32_t QuestConditionID; // 0x10(0x4)
	EGoalType GoalType; // 0x14(0x1)
	uint8_t IsComplexProp : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FString Param1; // 0x18(0x10)
	struct FString Param2; // 0x28(0x10)
	struct FString param3; // 0x38(0x10)
	struct FString Param4; // 0x48(0x10)
	struct FText Desc; // 0x58(0x18)
	struct FText BriefDesc; // 0x70(0x18)
	struct TArray<uint64_t> ListParam; // 0x88(0x10)
	int32_t RequiredCount; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct TArray<int32_t> ConditionIDArray; // 0xA0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.QuestRow
// Size: 0x210 (Inherited: 0x10)
struct FQuestRow : FDescRowBase
{
	int64_t QuestID; // 0x10(0x8)
	int32_t IsContract; // 0x18(0x4)
	int32_t QuestType; // 0x1C(0x4)
	int32_t QuestClass; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<uint32_t> MapID; // 0x28(0x10)
	struct TArray<int64_t> PreviousIDList; // 0x38(0x10)
	uint8_t IsConnectPrevious : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t ShouldAutoAccept : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	int32_t AcceptRequiredLevel; // 0x4C(0x4)
	struct FString GiverID; // 0x50(0x10)
	struct FString EnderID; // 0x60(0x10)
	struct FString AcceptDiaIogID; // 0x70(0x10)
	struct FString RewardDialogID; // 0x80(0x10)
	uint8_t ResetAllWhenFailed : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t ResetAllWhenSettlementFailed : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t Pad_0x92[0x6]; // 0x92(0x6)
	struct TArray<EQuestGoalForbiddenType> QuestGoalForbiddenTypeArray; // 0x98(0x10)
	struct TArray<int32_t> QuestConditionIDArray; // 0xA8(0x10)
	struct TArray<int64_t> ObjectiveList; // 0xB8(0x10)
	struct TArray<int64_t> RewardList; // 0xC8(0x10)
	struct FText Name; // 0xD8(0x18)
	struct FText Bulletin; // 0xF0(0x18)
	struct FText Desc; // 0x108(0x18)
	struct FString QuestIcon; // 0x120(0x10)
	struct FString QuestImage; // 0x130(0x10)
	float ContractReward; // 0x140(0x4)
	float ContractLimitTime; // 0x144(0x4)
	int64_t ParentId; // 0x148(0x8)
	int32_t YOffset; // 0x150(0x4)
	int32_t IsCG; // 0x154(0x4)
	struct FString CgPath; // 0x158(0x10)
	uint8_t ShowRewardPrview : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
	struct FString RewardNPCImage; // 0x170(0x10)
	struct FString RewardNPCJob; // 0x180(0x10)
	struct FString RewardNPCName; // 0x190(0x10)
	struct FString RewardNPCDesc; // 0x1A0(0x10)
	struct TArray<int64_t> ShowCondition; // 0x1B0(0x10)
	int32_t SpecialType; // 0x1C0(0x4)
	uint8_t Pad_0x1C4[0x4]; // 0x1C4(0x4)
	struct FString MapMarker; // 0x1C8(0x10)
	int32_t QuestLifeType; // 0x1D8(0x4)
	uint8_t Pad_0x1DC[0x4]; // 0x1DC(0x4)
	struct FString QuestPath; // 0x1E0(0x10)
	struct FString AreaGiverID; // 0x1F0(0x10)
	int32_t WorldType; // 0x200(0x4)
	uint8_t IsStandalone : 1; // 0x204(0x1), Mask(0x1)
	uint8_t BitPad_0x204_1 : 7; // 0x204(0x1)
	uint8_t IsInMapDetail : 1; // 0x205(0x1), Mask(0x1)
	uint8_t BitPad_0x205_1 : 7; // 0x205(0x1)
	uint8_t Pad_0x206[0x2]; // 0x206(0x2)
	int32_t FrozenTimeAfterPreQuestReward; // 0x208(0x4)
	uint8_t Pad_0x20C[0x4]; // 0x20C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RaidBulletCheckConfig
// Size: 0x30 (Inherited: 0x10)
struct FRaidBulletCheckConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t MatchModeId; // 0x18(0x8)
	int64_t WeaponPrefixID; // 0x20(0x8)
	int64_t BulletNum; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.RaidSettlementLevelConfig
// Size: 0x58 (Inherited: 0x10)
struct FRaidSettlementLevelConfig : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText RaidID; // 0x18(0x18)
	uint32_t EvaluateLevel; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	uint64_t EvaluateScore; // 0x38(0x8)
	uint32_t RaidScore; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString Prize; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.RankAreaDataRow
// Size: 0x80 (Inherited: 0x8)
struct FRankAreaDataRow : FTableRowBase
{
	int32_t Adcode; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString Name; // 0x10(0x10)
	struct FString country; // 0x20(0x10)
	struct FString province; // 0x30(0x10)
	struct FString city; // 0x40(0x10)
	struct FString District; // 0x50(0x10)
	int32_t OpenRankType; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct FSoftObjectPath AreaImagePath; // 0x68(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.RankBoardRegion
// Size: 0x90 (Inherited: 0x8)
struct FRankBoardRegion : FTableRowBase
{
	int32_t RegionID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText RegionName; // 0x10(0x18)
	struct FText RegionTitle; // 0x28(0x18)
	struct FText RegionDes; // 0x40(0x18)
	int32_t Adcode; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	int64_t ProvinceHeroTitleViewID; // 0x60(0x8)
	int64_t CityHeroTitleViewID; // 0x68(0x8)
	int32_t RegionRankType; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FSoftObjectPath AreaImagePath; // 0x78(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.RankingSeasonInfo
// Size: 0x118 (Inherited: 0x10)
struct FRankingSeasonInfo : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t Index; // 0x14(0x4)
	struct FText SeasonName; // 0x18(0x18)
	struct FText SeasonDesc; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
	struct FString StartTime; // 0x60(0x10)
	struct FString EndTime; // 0x70(0x10)
	struct FString UIStartTime; // 0x80(0x10)
	struct FString UIEndTime; // 0x90(0x10)
	struct FString StopMatchTime; // 0xA0(0x10)
	struct FString LobbyBanner; // 0xB0(0x10)
	struct FString CoreID; // 0xC0(0x10)
	struct FString CoreURL; // 0xD0(0x10)
	int32_t CoreRank; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct FText RankShopDescription; // 0xE8(0x18)
	struct FText RankShopTitle; // 0x100(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.RankingRankRewardsSeasonal
// Size: 0x48 (Inherited: 0x10)
struct FRankingRankRewardsSeasonal : FDescRowBase
{
	int32_t RewardId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString RewarditemID; // 0x18(0x10)
	int32_t RewardItemNumber; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FString> Rewards; // 0x30(0x10)
	int32_t ConnectedMajorRank; // 0x40(0x4)
	int32_t SeasonNo; // 0x44(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RankingRankConstants
// Size: 0x28 (Inherited: 0x10)
struct FRankingRankConstants : FDescRowBase
{
	int32_t ConstantID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString Value; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.RankingRankRewards
// Size: 0x50 (Inherited: 0x10)
struct FRankingRankRewards : FDescRowBase
{
	int32_t RewardId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString RewarditemID; // 0x18(0x10)
	int32_t RewardItemNumber; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FString> Rewards; // 0x30(0x10)
	int32_t ConnectedMajorRank; // 0x40(0x4)
	int32_t GamesRequired; // 0x44(0x4)
	int32_t SeasonNo; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RankingMajorRanks
// Size: 0x58 (Inherited: 0x10)
struct FRankingMajorRanks : FDescRowBase
{
	int32_t MajorRankID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText MajorRankName; // 0x18(0x18)
	struct FName ArchiveItemID; // 0x30(0x8)
	struct FString RankIcon; // 0x38(0x10)
	struct FString RankABBRICon; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.RankingMinorRanks
// Size: 0x98 (Inherited: 0x10)
struct FRankingMinorRanks : FDescRowBase
{
	int32_t MinorRankID; // 0x10(0x4)
	int32_t MinScore; // 0x14(0x4)
	int32_t MaxScore; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText RankName; // 0x20(0x18)
	int32_t MajorRankEnlisted; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FSoftObjectPath RankIconBig; // 0x40(0x18)
	struct FString RankIconSmall; // 0x58(0x10)
	struct FString RankIconAbbrNumber; // 0x68(0x10)
	struct FText RankDesciption; // 0x78(0x18)
	int32_t StarsDivided; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RankScoreLimitConfigInfo
// Size: 0x78 (Inherited: 0x10)
struct FRankScoreLimitConfigInfo : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t DefaultUpperLimit; // 0x14(0x4)
	int32_t ScoreLimit1MapID; // 0x18(0x4)
	int32_t ScoreLimit1UpperLimit; // 0x1C(0x4)
	int32_t ScoreLimit2MapID; // 0x20(0x4)
	int32_t ScoreLimit2UpperLimit; // 0x24(0x4)
	int32_t ScoreLimit3MapID; // 0x28(0x4)
	int32_t ScoreLimit3UpperLimit; // 0x2C(0x4)
	int32_t ScoreLimit4MapID; // 0x30(0x4)
	int32_t ScoreLimit4UpperLimit; // 0x34(0x4)
	int32_t ScoreLimit5MapID; // 0x38(0x4)
	int32_t ScoreLimit5UpperLimit; // 0x3C(0x4)
	int32_t ScoreLimit6MapID; // 0x40(0x4)
	int32_t ScoreLimit6UpperLimit; // 0x44(0x4)
	int32_t ScoreLimit7MapID; // 0x48(0x4)
	int32_t ScoreLimit7UpperLimit; // 0x4C(0x4)
	int32_t ScoreLimit8MapID; // 0x50(0x4)
	int32_t ScoreLimit8UpperLimit; // 0x54(0x4)
	int32_t ScoreLimit9MapID; // 0x58(0x4)
	int32_t ScoreLimit9UpperLimit; // 0x5C(0x4)
	int32_t ScoreLimit10MapID; // 0x60(0x4)
	int32_t ScoreLimit10UpperLimit; // 0x64(0x4)
	int32_t ScoreLimit11MapID; // 0x68(0x4)
	int32_t ScoreLimit11UpperLimit; // 0x6C(0x4)
	int32_t ScoreLimit12MapID; // 0x70(0x4)
	int32_t ScoreLimit12UpperLimit; // 0x74(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RankSkillCampConfig
// Size: 0x68 (Inherited: 0x0)
struct FRankSkillCampConfig
{
	uint8_t IsOpen : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	ECommanderRankSkillScoreChangeMode CommanderRankSkillScoreChangeMode; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t ScoreCost; // 0x4(0x4)
	uint8_t HasCampSkillCD : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	ECommanderRankSkillCDChangeMode CommanderRankSkillCDChangeMode; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<int32_t> DynamicScoreCost; // 0x10(0x10)
	float CampSkillCD; // 0x20(0x4)
	float CampSkillCD_LastSuccess; // 0x24(0x4)
	float CampSkillCD_LastFail; // 0x28(0x4)
	float CampSkillInitCD; // 0x2C(0x4)
	struct TArray<struct FRankSkillDropVehicleConfig> RankSkillDropVehicleConfigArr; // 0x30(0x10)
	struct TArray<int32_t> UnOpenSectors; // 0x40(0x10)
	struct TArray<ETeamIdentity> NoOpenIdentity; // 0x50(0x10)
	int32_t IntValue1; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ShowDetectorMapExConfig
// Size: 0x18 (Inherited: 0x0)
struct FShowDetectorMapExConfig
{
	float DetectorMapRadius; // 0x0(0x4)
	float SlideSpeedDelay; // 0x4(0x4)
	float DetectorRadius; // 0x8(0x4)
	float DetectorRadiusScale; // 0xC(0x4)
	float SupportMarkerShowTime; // 0x10(0x4)
	uint8_t bIsShowMarkerInMap : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.RankSkillConfigRow
// Size: 0x1E0 (Inherited: 0x10)
struct FRankSkillConfigRow : FDescRowBase
{
	int32_t SkillId; // 0x10(0x4)
	ERankSkillType RankSkillType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TArray<EDFMGamePlayMode> OpenGameModes; // 0x18(0x10)
	struct TArray<EDFMGamePlaySubMode> OpenGameSubModes; // 0x28(0x10)
	struct TArray<EDFMGamePlaySubMode> CloseGameSubModes; // 0x38(0x10)
	struct FRankSkillCampConfig DefautRankSkillCampConfig_Camp0; // 0x48(0x68)
	struct FRankSkillCampConfig DefautRankSkillCampConfig_Camp1; // 0xB0(0x68)
	struct TArray<struct FRankSkillMapConfigNew> RankSkillMapConfigArr; // 0x118(0x10)
	int32_t MaxCampUseNum; // 0x128(0x4)
	int32_t MaxTeamUseNum; // 0x12C(0x4)
	struct FShowDetectorMapExConfig ShowDetectorMapExConfig; // 0x130(0x18)
	struct TArray<ETeamIdentity> NoOpenIdentity; // 0x148(0x10)
	float ScoreMultiple; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
	struct TSoftClassPtr<struct AActor*> SelectPositionClass; // 0x160(0x28)
	float NotifyTipDelayTime; // 0x188(0x4)
	uint8_t bCanReleaseAdminPanel : 1; // 0x18C(0x1), Mask(0x1)
	uint8_t BitPad_0x18C_1 : 7; // 0x18C(0x1)
	uint8_t Pad_0x18D[0x3]; // 0x18D(0x3)
	struct FText RankSkillName; // 0x190(0x18)
	struct FText RankSkillDescription; // 0x1A8(0x18)
	struct TArray<struct FRankSkillCampTieredConfig> RankSkillCampTieredConfigs; // 0x1C0(0x10)
	struct TArray<struct FRankSkillTieredConfig> TieredConfigs; // 0x1D0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.RankSkillTieredConfig
// Size: 0xC (Inherited: 0x0)
struct FRankSkillTieredConfig
{
	int32_t TieredID; // 0x0(0x4)
	int32_t CampUseNum; // 0x4(0x4)
	int32_t SkillCostAdd; // 0x8(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RankSkillCampTieredConfig
// Size: 0x18 (Inherited: 0x0)
struct FRankSkillCampTieredConfig
{
	int32_t CampId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FRankSkillTieredConfig> RankSkillTieredConfigs; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.RankSkillMapConfigNew
// Size: 0xD8 (Inherited: 0x0)
struct FRankSkillMapConfigNew
{
	int32_t MapID; // 0x0(0x4)
	uint8_t IsCampUseSameConfig : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FRankSkillCampConfig RankSkillCamp0Config; // 0x8(0x68)
	struct FRankSkillCampConfig RankSkillCamp1Config; // 0x70(0x68)
};

// Object: ScriptStruct DFMGlobalDefines.RankSkillDropVehicleConfig
// Size: 0x10 (Inherited: 0x0)
struct FRankSkillDropVehicleConfig
{
	int32_t VehicleId; // 0x0(0x4)
	int32_t MaxCount; // 0x4(0x4)
	float ScoreCost; // 0x8(0x4)
	float AirDropSpawnCD; // 0xC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.FreeBuildRankSkillCofigRow
// Size: 0x180 (Inherited: 0x10)
struct FFreeBuildRankSkillCofigRow : FDescRowBase
{
	int32_t SkillId; // 0x10(0x4)
	EFreeBuildRankSkillType CommanderRankSkillType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRankSkillCampConfig DefautRankSkillCampConfig_Camp0; // 0x18(0x68)
	struct FRankSkillCampConfig DefautRankSkillCampConfig_Camp1; // 0x80(0x68)
	struct TArray<struct FRankSkillMapConfigNew> RankSkillMapConfigArr; // 0xE8(0x10)
	int32_t MaxCampUseNum; // 0xF8(0x4)
	int32_t MaxTeamUseNum; // 0xFC(0x4)
	struct TArray<ETeamIdentity> NoOpenIdentity; // 0x100(0x10)
	float ScoreMultiple; // 0x110(0x4)
	uint8_t bCanReleaseAdminPanel : 1; // 0x114(0x1), Mask(0x1)
	uint8_t BitPad_0x114_1 : 7; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct TArray<struct FRankSkillCampTieredConfig> RankSkillCampTieredConfigs; // 0x118(0x10)
	struct FText RankSkillName; // 0x128(0x18)
	struct FText RankSkillDescription; // 0x140(0x18)
	struct TSoftClassPtr<struct AActor*> SelectPositionClass; // 0x158(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderRankSkillCofigRow
// Size: 0x158 (Inherited: 0x10)
struct FCommanderRankSkillCofigRow : FDescRowBase
{
	int32_t SkillId; // 0x10(0x4)
	ECommanderRankSkillType CommanderRankSkillType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRankSkillCampConfig DefautRankSkillCampConfig_Camp0; // 0x18(0x68)
	struct FRankSkillCampConfig DefautRankSkillCampConfig_Camp1; // 0x80(0x68)
	struct TArray<struct FRankSkillMapConfigNew> RankSkillMapConfigArr; // 0xE8(0x10)
	int32_t MaxCampUseNum; // 0xF8(0x4)
	int32_t MaxTeamUseNum; // 0xFC(0x4)
	struct TArray<ETeamIdentity> NoOpenIdentity; // 0x100(0x10)
	float ScoreMultiple; // 0x110(0x4)
	uint8_t bCanReleaseAdminPanel : 1; // 0x114(0x1), Mask(0x1)
	uint8_t BitPad_0x114_1 : 7; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct TArray<struct FRankSkillCampTieredConfig> RankSkillCampTieredConfigs; // 0x118(0x10)
	struct FText RankSkillName; // 0x128(0x18)
	struct FText RankSkillDescription; // 0x140(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.AirDropCampTieredConfig
// Size: 0x18 (Inherited: 0x0)
struct FAirDropCampTieredConfig
{
	int32_t CampId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FAirdropVehicleTieredConfig> AirdropVehicleTieredConfigs; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.AirdropVehicleTieredConfig
// Size: 0x18 (Inherited: 0x0)
struct FAirdropVehicleTieredConfig
{
	uint64_t VehicleId; // 0x0(0x8)
	struct TArray<struct FRankSkillTieredConfig> TieredConfigs; // 0x8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.BossHomepageBackground
// Size: 0x40 (Inherited: 0x8)
struct FBossHomepageBackground : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FSoftObjectPath PrologueQuestlockedBgPath; // 0x10(0x18)
	struct FSoftObjectPath PrologueQuestUnlockedBgPath; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BossSaeedGuide
// Size: 0x58 (Inherited: 0x8)
struct FBossSaeedGuide : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText GuideTitle; // 0x10(0x18)
	struct FText GuideSmallTitle; // 0x28(0x18)
	struct FText GuideDesc; // 0x40(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BossUpgradeAudio
// Size: 0x70 (Inherited: 0x8)
struct FBossUpgradeAudio : FTableRowBase
{
	int32_t Sequence; // 0x8(0x4)
	int32_t EffectiveLevel; // 0xC(0x4)
	struct FText AudioTitleCN; // 0x10(0x18)
	struct FText SpeakerCN; // 0x28(0x18)
	struct FText LinesCN; // 0x40(0x18)
	struct FText Audio; // 0x58(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BossArchive
// Size: 0xD0 (Inherited: 0x8)
struct FBossArchive : FTableRowBase
{
	int32_t ArchiveID; // 0x8(0x4)
	int32_t UnlockQuestCondition; // 0xC(0x4)
	struct FText ArchiveName; // 0x10(0x18)
	uint8_t IsBossUpgradeAudio : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FText SpeakerCN; // 0x30(0x18)
	struct FText LinesCN; // 0x48(0x18)
	struct FText Audio; // 0x60(0x18)
	struct FSoftObjectPath ArchiveBGImg; // 0x78(0x18)
	struct FString ArchiveBGImgUrl; // 0x90(0x10)
	struct FSoftObjectPath ArchiveIcon; // 0xA0(0x18)
	struct FText ArchiveDesc; // 0xB8(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.BossSaeedLevel
// Size: 0x50 (Inherited: 0x8)
struct FBossSaeedLevel : FTableRowBase
{
	int32_t Level; // 0x8(0x4)
	int32_t Experience; // 0xC(0x4)
	int32_t MajorPhaseID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText MajorPhaseDesc; // 0x18(0x18)
	int32_t MinorPhaseID; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText MinorPhaseDesc; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.RebornQuestNameTemplateRow
// Size: 0x20 (Inherited: 0x10)
struct FRebornQuestNameTemplateRow : FDescRowBase
{
	int32_t QuestID; // 0x10(0x4)
	struct FName TemplateID; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RebornTextConfig
// Size: 0x178 (Inherited: 0x8)
struct FRebornTextConfig : FTableRowBase
{
	int32_t TextRowId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText Name; // 0x10(0x18)
	struct FText BossName; // 0x28(0x18)
	struct FText BossCodeName; // 0x40(0x18)
	struct FText PrologueQuestName; // 0x58(0x18)
	struct FText PrologueQuestDesc; // 0x70(0x18)
	struct FText WeeklyName; // 0x88(0x18)
	struct FText BossWeekly; // 0xA0(0x18)
	struct FText SoldierWeekly; // 0xB8(0x18)
	struct FText ChallengeName; // 0xD0(0x18)
	struct FText BossChallenge; // 0xE8(0x18)
	struct FText SoldierChallenge; // 0x100(0x18)
	struct FText ExperienceName; // 0x118(0x18)
	struct FText TagChallenge; // 0x130(0x18)
	struct FText TagWeekly; // 0x148(0x18)
	struct FText TagPrerequest; // 0x160(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.RebornPrerequestGroup
// Size: 0x90 (Inherited: 0x8)
struct FRebornPrerequestGroup : FTableRowBase
{
	int32_t GroupID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	int32_t Sequence; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FText SequenceStr; // 0x48(0x18)
	struct FSoftObjectPath GroupType; // 0x60(0x18)
	struct TArray<int64_t> QuestIdArr; // 0x78(0x10)
	int32_t GroupStarCount; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RebornQuestlineRow
// Size: 0xE0 (Inherited: 0x8)
struct FRebornQuestlineRow : FTableRowBase
{
	int32_t LineID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct FString StartTime; // 0x40(0x10)
	struct FString EndTime; // 0x50(0x10)
	int32_t BossQuestLineID; // 0x60(0x4)
	int32_t SoldierQuestLineID; // 0x64(0x4)
	struct TArray<int32_t> PrologueQuestGroupID; // 0x68(0x10)
	int32_t FinalQuestUnlockParam1; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	int64_t WeeklyActivityID; // 0x80(0x8)
	int32_t WeeklyQuestExpLimit; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	int64_t TextRowId; // 0x90(0x8)
	struct FSoftObjectPath WeeklyBgPathBoss; // 0x98(0x18)
	struct FSoftObjectPath WeeklyBgPathSoldier; // 0xB0(0x18)
	int64_t BossFinalQuestId; // 0xC8(0x8)
	int64_t SoldierFinalQuestId; // 0xD0(0x8)
	int32_t GrowthLevel; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RecoverySystemTipsConfig
// Size: 0x10 (Inherited: 0x8)
struct FRecoverySystemTipsConfig : FTableRowBase
{
	int32_t Channel; // 0x8(0x4)
	uint8_t TipsEnable : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.RegionCode
// Size: 0xB0 (Inherited: 0x10)
struct FRegionCode : FDescRowBase
{
	struct FString NumericCode; // 0x10(0x10)
	struct FString RegionCode; // 0x20(0x10)
	struct FString RegionCodeAlpha3; // 0x30(0x10)
	struct FString CurrencyCode; // 0x40(0x10)
	struct TMap<struct FString, struct FString> CurrencyCodes; // 0x50(0x50)
	struct FString RegionName; // 0xA0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ReportText
// Size: 0x30 (Inherited: 0x10)
struct FReportText : FDescRowBase
{
	EReportMode ReportMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText ReportName; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.Reputationdescription
// Size: 0x48 (Inherited: 0x10)
struct FReputationdescription : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	struct FText DesTitle; // 0x20(0x18)
	struct TArray<struct FText> DesText; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ReputationChange
// Size: 0x38 (Inherited: 0x10)
struct FReputationChange : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	struct FText ReasonText; // 0x20(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ReputationStar
// Size: 0xC8 (Inherited: 0x10)
struct FReputationStar : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	int64_t StarLevel; // 0x20(0x8)
	struct FText StarName; // 0x28(0x18)
	int64_t LowerBound; // 0x40(0x8)
	int64_t UpperBound; // 0x48(0x8)
	uint64_t RewardPropID; // 0x50(0x8)
	uint64_t RewardPropID2; // 0x58(0x8)
	uint64_t DisplayPropId; // 0x60(0x8)
	uint8_t RewardRank : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString ResourcePath; // 0x70(0x10)
	struct FText DescriptionFirst; // 0x80(0x18)
	struct FText DescriptionSecond; // 0x98(0x18)
	struct FText UpText; // 0xB0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.Reputation
// Size: 0xB0 (Inherited: 0x10)
struct FReputation : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	int64_t Level; // 0x20(0x8)
	struct FText ReputationName; // 0x28(0x18)
	int64_t LowerBound; // 0x40(0x8)
	int64_t UpperBound; // 0x48(0x8)
	uint8_t IsMatchLimit : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t IsTeamLimit : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct FString ResourcePath; // 0x58(0x10)
	struct FText DescriptionFirst; // 0x68(0x18)
	struct FText DescriptionSecond; // 0x80(0x18)
	struct FText UpText; // 0x98(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.ReqErrTable
// Size: 0x88 (Inherited: 0x10)
struct FReqErrTable : FDescRowBase
{
	int32_t ErrID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	struct FText DisplayText; // 0x48(0x18)
	struct FString DisplayNamespace; // 0x60(0x10)
	struct FString DisplayKey; // 0x70(0x10)
	float DisplayDuration; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RespirationConfigRow
// Size: 0x28 (Inherited: 0x10)
struct FRespirationConfigRow : FDescRowBase
{
	struct FName RespirationConfigTagName; // 0x10(0x8)
	uint8_t bEnable : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float RespirationDuration; // 0x1C(0x4)
	struct UCurveFloat* RespirationCurve; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.RightsCardActivatingRow
// Size: 0x30 (Inherited: 0x10)
struct FRightsCardActivatingRow : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName TheActivating; // 0x14(0x8)
	int32_t TheActivated; // 0x1C(0x4)
	uint64_t ActiveTime; // 0x20(0x8)
	uint64_t EndTime; // 0x28(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.RoleQuality
// Size: 0x128 (Inherited: 0x10)
struct FRoleQuality : FDescRowBase
{
	int32_t QualityID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	int32_t QuestID; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText DescriptionQuest; // 0x38(0x18)
	struct FText DescriptionUsage; // 0x50(0x18)
	struct FText UsageList1Desc; // 0x68(0x18)
	struct FText UsageList2Desc; // 0x80(0x18)
	struct FText UsageList3Desc; // 0x98(0x18)
	struct FText UsageList4Desc; // 0xB0(0x18)
	struct FText UsageList5Desc; // 0xC8(0x18)
	struct FText DescriptionAccess; // 0xE0(0x18)
	struct FString ImgPath; // 0xF8(0x10)
	struct FString SpritePath; // 0x108(0x10)
	struct FString CoverImgPath; // 0x118(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.RoleQualityScene
// Size: 0x18 (Inherited: 0x10)
struct FRoleQualityScene : FDescRowBase
{
	int32_t SceneID; // 0x10(0x4)
	uint8_t bInEnable : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.RoomParamGroup
// Size: 0x80 (Inherited: 0x10)
struct FRoomParamGroup : FDescRowBase
{
	int32_t TemplateID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText TemplateName; // 0x18(0x18)
	int32_t ParamID; // 0x30(0x4)
	int32_t SwitchType; // 0x34(0x4)
	struct FString DefaultValue; // 0x38(0x10)
	struct TArray<struct FText> OptionListName; // 0x48(0x10)
	struct TArray<struct FString> ValueList; // 0x58(0x10)
	struct TArray<float> LimitValue; // 0x68(0x10)
	float StepLength; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RoomParam
// Size: 0x88 (Inherited: 0x10)
struct FRoomParam : FDescRowBase
{
	int32_t ParamID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText ParamName; // 0x18(0x18)
	int32_t ParamType; // 0x30(0x4)
	int32_t SwitchType; // 0x34(0x4)
	int32_t ValueType; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString DefaultValue; // 0x40(0x10)
	struct TArray<struct FText> OptionListName; // 0x50(0x10)
	struct TArray<struct FString> ValueList; // 0x60(0x10)
	struct TArray<float> LimitValue; // 0x70(0x10)
	float StepLength; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SafeBoxSkinRow
// Size: 0xA8 (Inherited: 0x10)
struct FSafeBoxSkinRow : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName SkinId; // 0x14(0x8)
	struct FName SafeBoxId; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	uint64_t SeasonID; // 0x28(0x8)
	struct FText SkinDes; // 0x30(0x18)
	int32_t OpenCollection; // 0x48(0x4)
	int32_t ResourceType; // 0x4C(0x4)
	struct FString StartTime; // 0x50(0x10)
	struct FString EndTime; // 0x60(0x10)
	struct FString VideosName; // 0x70(0x10)
	struct FText VideosDes; // 0x80(0x18)
	struct FString VideosPath; // 0x98(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SafeAndCardpackActivatingRow
// Size: 0x38 (Inherited: 0x10)
struct FSafeAndCardpackActivatingRow : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName TheActivating; // 0x14(0x8)
	int32_t TheActivated; // 0x1C(0x4)
	uint64_t ActiveTime; // 0x20(0x8)
	uint64_t EndTime; // 0x28(0x8)
	uint64_t SeasonID; // 0x30(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SafeAndCardpackRow
// Size: 0x78 (Inherited: 0x10)
struct FSafeAndCardpackRow : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	int32_t Type; // 0x30(0x4)
	int32_t Slot; // 0x34(0x4)
	int32_t IsValid; // 0x38(0x4)
	int32_t HorizontalLength; // 0x3C(0x4)
	int32_t VerticalLengt; // 0x40(0x4)
	int32_t TotalLength; // 0x44(0x4)
	int32_t Endurance; // 0x48(0x4)
	int32_t Price; // 0x4C(0x4)
	int32_t ExternalItemNumber; // 0x50(0x4)
	struct FName Currency; // 0x54(0x8)
	int32_t IsFree; // 0x5C(0x4)
	int32_t MaxTime; // 0x60(0x4)
	struct FName VirtualItemID; // 0x64(0x8)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	uint64_t SeasonID; // 0x70(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SpecialExchangeRow
// Size: 0x28 (Inherited: 0x10)
struct FSpecialExchangeRow : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	int32_t Type; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	uint64_t ExchangeID; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseOnlyProduct
// Size: 0x20 (Inherited: 0x10)
struct FSafeHouseOnlyProduct : FDescRowBase
{
	struct FString ProductID; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseDescription
// Size: 0x70 (Inherited: 0x10)
struct FSafeHouseDescription : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Description; // 0x18(0x18)
	struct FText StartValue; // 0x30(0x18)
	struct FText EndValue; // 0x48(0x18)
	struct FString IconPath; // 0x60(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseVistorInfoRow
// Size: 0x80 (Inherited: 0x10)
struct FSafeHouseVistorInfoRow : FDescRowBase
{
	int32_t VistorInfoID; // 0x10(0x4)
	int32_t VistorRoleId; // 0x14(0x4)
	int32_t VisitProb; // 0x18(0x4)
	int32_t VisitWeight; // 0x1C(0x4)
	struct FString VisitTime; // 0x20(0x10)
	struct FString LeaveTime; // 0x30(0x10)
	struct FString RandomItemList; // 0x40(0x10)
	int32_t RandomNum; // 0x50(0x4)
	int32_t IncreaseRate; // 0x54(0x4)
	int32_t InfoVisitorProb; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	int64_t InfoItemID; // 0x60(0x8)
	float InfoInitDown; // 0x68(0x4)
	float InfoInitUp; // 0x6C(0x4)
	int32_t UpProb; // 0x70(0x4)
	float UpRate; // 0x74(0x4)
	float DownRate; // 0x78(0x4)
	int32_t InfoChangeInterval; // 0x7C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseVistorRow
// Size: 0x60 (Inherited: 0x10)
struct FSafeHouseVistorRow : FDescRowBase
{
	int32_t VistorId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FSoftObjectPath VistorImagePath; // 0x18(0x18)
	struct FSoftObjectPath VistorLittleImagePath; // 0x30(0x18)
	struct FText VisitorName; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.GameSystemInfoRow
// Size: 0x48 (Inherited: 0x10)
struct FGameSystemInfoRow : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText SystemName; // 0x18(0x18)
	struct FText UnlockTip; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseFormula
// Size: 0xC8 (Inherited: 0x10)
struct FSafeHouseFormula : FDescRowBase
{
	int32_t MajorKey; // 0x10(0x4)
	int32_t ID; // 0x14(0x4)
	int32_t ReplacedId; // 0x18(0x4)
	int32_t DeviceID; // 0x1C(0x4)
	int32_t Level; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString MaterialList; // 0x28(0x10)
	struct FString ProductList; // 0x38(0x10)
	struct FString UnlockSystemList; // 0x48(0x10)
	struct FString StartTime; // 0x58(0x10)
	struct FString EndTime; // 0x68(0x10)
	struct FString WeightProductList; // 0x78(0x10)
	int32_t Time; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FString BuffItemList; // 0x90(0x10)
	int32_t MaxLoopTimes; // 0xA0(0x4)
	int32_t Type; // 0xA4(0x4)
	int32_t bDisassemble; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	uint64_t PreviewItemId; // 0xB0(0x8)
	uint64_t DefaultSort; // 0xB8(0x8)
	int32_t IsBind; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseUpgrade
// Size: 0xB0 (Inherited: 0x10)
struct FSafeHouseUpgrade : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t DeviceID; // 0x14(0x4)
	int32_t Level; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString TaskList; // 0x20(0x10)
	struct FString ItemList; // 0x30(0x10)
	struct FString DeviceList; // 0x40(0x10)
	struct FString QualityList; // 0x50(0x10)
	int32_t SeasonLevel; // 0x60(0x4)
	float SafeHouseDegree; // 0x64(0x4)
	int32_t Time; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString Description; // 0x70(0x10)
	struct FString IconPath; // 0x80(0x10)
	struct FString UnlockSystemList; // 0x90(0x10)
	struct FString BuildingBP; // 0xA0(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseDeviceParam
// Size: 0x30 (Inherited: 0x10)
struct FSafeHouseDeviceParam : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t DeviceID; // 0x14(0x4)
	struct FName ParamName; // 0x18(0x8)
	struct FString ParamValue; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SafeHouseDevice
// Size: 0xD8 (Inherited: 0x10)
struct FSafeHouseDevice : FDescRowBase
{
	int32_t DeviceID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FText DescForUpgrade; // 0x48(0x18)
	uint8_t Type; // 0x60(0x1)
	uint8_t MaxLevel; // 0x61(0x1)
	uint8_t Pad_0x62[0x6]; // 0x62(0x6)
	struct FSoftObjectPath LitteIconPath; // 0x68(0x18)
	struct FSoftObjectPath BigIconPath; // 0x80(0x18)
	struct FString MainImg1; // 0x98(0x10)
	struct FString MainImg2; // 0xA8(0x10)
	struct FString MainImg3; // 0xB8(0x10)
	int32_t bShowInMain; // 0xC8(0x4)
	int32_t bCanProduction; // 0xCC(0x4)
	int32_t ShowInStrategicSelection; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SandBoxMapArenaConfig
// Size: 0x60 (Inherited: 0x10)
struct FSandBoxMapArenaConfig : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t GameRule; // 0x14(0x4)
	int32_t LimitDescription; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText ModeDescription; // 0x20(0x18)
	struct FText GameRuleDescription; // 0x38(0x18)
	struct FString BannerResource; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonDataRow
// Size: 0x60 (Inherited: 0x10)
struct FSeasonDataRow : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	int32_t Index; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText SeasonName; // 0x28(0x18)
	struct FString StartTime; // 0x40(0x10)
	struct FString EndTime; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonExperience
// Size: 0x40 (Inherited: 0x10)
struct FSeasonExperience : FDescRowBase
{
	struct FString Variable; // 0x10(0x10)
	int32_t Value; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString Desc; // 0x28(0x10)
	int32_t TipWidgetType; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonLevel
// Size: 0x58 (Inherited: 0x10)
struct FSeasonLevel : FDescRowBase
{
	int32_t Level; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString Experience; // 0x18(0x10)
	struct FString LevelPrize; // 0x28(0x10)
	struct FString Unlock1; // 0x38(0x10)
	struct FString Unlock2; // 0x48(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonQuestGuide
// Size: 0x60 (Inherited: 0x8)
struct FSeasonQuestGuide : FTableRowBase
{
	int32_t GuideID; // 0x8(0x4)
	int32_t GuideType; // 0xC(0x4)
	int32_t GuideOrder; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FSoftObjectPath GuideImg; // 0x18(0x18)
	struct FText GuideTitle; // 0x30(0x18)
	struct FText GuideDesc; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SelfBuildRoomArchiveRow
// Size: 0x20 (Inherited: 0x10)
struct FSelfBuildRoomArchiveRow : FDescRowBase
{
	uint32_t SerialNum; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	uint64_t ItemID; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ServerAddr
// Size: 0xA0 (Inherited: 0x10)
struct FServerAddr : FDescRowBase
{
	struct FText DisplayName; // 0x10(0x18)
	struct FText GroupName; // 0x28(0x18)
	EGameBuildConfiguration TargetBuildConfiguration; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FString Ip; // 0x48(0x10)
	int32_t Port; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString BranchID; // 0x60(0x10)
	uint8_t bEditorOnly : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct TArray<struct FServerAddrItem> Urls; // 0x78(0x10)
	struct TArray<struct FServerAddrItem> ConsoleUrls; // 0x88(0x10)
	struct FName KeyName; // 0x98(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.ServerAddrItem
// Size: 0x28 (Inherited: 0x0)
struct FServerAddrItem
{
	struct FString Desc; // 0x0(0x10)
	EServerType Type; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString URL; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.MapID2SectorID
// Size: 0x18 (Inherited: 0x10)
struct FMapID2SectorID : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	int32_t SectorID; // 0x14(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MapName2FocusPoint
// Size: 0x38 (Inherited: 0x10)
struct FMapName2FocusPoint : FDescRowBase
{
	struct FName MapName; // 0x10(0x8)
	struct TArray<struct FVector> FocusPointArray; // 0x18(0x10)
	struct TArray<struct FSoftObjectPath> LevelSequenceArray; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderGameMotto
// Size: 0x48 (Inherited: 0x10)
struct FCommanderGameMotto : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText WinText; // 0x18(0x18)
	struct FText LoseText; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.RaidComment
// Size: 0x38 (Inherited: 0x10)
struct FRaidComment : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText EvaluateName; // 0x18(0x18)
	int32_t EvaluateWeight; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RaidEvaluation
// Size: 0x40 (Inherited: 0x10)
struct FRaidEvaluation : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText EvaluateName; // 0x18(0x18)
	int32_t ParamID; // 0x30(0x4)
	int32_t MinValue; // 0x34(0x4)
	int32_t EvaluateWeight; // 0x38(0x4)
	int32_t EvaluateType; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.RaidSettlementLong
// Size: 0xA0 (Inherited: 0x10)
struct FRaidSettlementLong : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t MapID; // 0x14(0x4)
	int32_t Difficulty; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText Description; // 0x20(0x18)
	int32_t EvaluateLevel; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString RaidPrizeSucc; // 0x40(0x10)
	struct FString RaidPrizeFailed; // 0x50(0x10)
	struct TArray<int64_t> HidePrize; // 0x60(0x10)
	int32_t PrizeNum; // 0x70(0x4)
	int32_t EvaluateDeaths; // 0x74(0x4)
	int32_t EvaluateBringIn; // 0x78(0x4)
	int32_t EvaluateTime; // 0x7C(0x4)
	struct FText DifficultyDesc; // 0x80(0x18)
	int32_t LevelID; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MandelBricksConnections
// Size: 0x28 (Inherited: 0x10)
struct FMandelBricksConnections : FDescRowBase
{
	int64_t ProtoBrickID; // 0x10(0x8)
	int64_t WastedBrickID; // 0x18(0x8)
	int64_t RealBrickID; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SettlementFamousCelebrities
// Size: 0x28 (Inherited: 0x10)
struct FSettlementFamousCelebrities : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName Desc; // 0x14(0x8)
	struct FName Author; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SettlementPage
// Size: 0x50 (Inherited: 0x10)
struct FSettlementPage : FDescRowBase
{
	int32_t ModeId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString PageOrder; // 0x18(0x10)
	struct FString MediaName; // 0x28(0x10)
	struct FString BitShowOrder; // 0x38(0x10)
	int32_t WaitTime; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SkillConfig
// Size: 0xA0 (Inherited: 0x10)
struct FSkillConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t SkillId; // 0x18(0x8)
	int64_t GameMode; // 0x20(0x8)
	struct FString ICON; // 0x28(0x10)
	struct FText Name; // 0x38(0x18)
	struct FText Desc; // 0x50(0x18)
	int64_t SkillType; // 0x68(0x8)
	struct FString SillBPSource; // 0x70(0x10)
	int64_t BuffId; // 0x80(0x8)
	struct FText BuffName; // 0x88(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SkillSkinResourceAttachMeshData
// Size: 0x228 (Inherited: 0x10)
struct FSkillSkinResourceAttachMeshData : FDescRowBase
{
	struct FName ResourceID; // 0x10(0x8)
	int32_t SkinId; // 0x18(0x4)
	int32_t PakSkillID; // 0x1C(0x4)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath; // 0x20(0x28)
	struct FName SocketNameOverride; // 0x48(0x8)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath3P; // 0x50(0x28)
	struct FName SocketNameOverride3P; // 0x78(0x8)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPathUI; // 0x80(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeq; // 0xA8(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeq3P; // 0xD0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeq3P_Prone; // 0xF8(0x28)
	EWeaponSkinRenderMode SkinRenderMode; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterials; // 0x128(0x50)
	EWeaponSkinRenderMode SkinRenderMode3P; // 0x178(0x1)
	uint8_t Pad_0x179[0x7]; // 0x179(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterials3P; // 0x180(0x50)
	uint8_t bUseWeaponPart : 1; // 0x1D0(0x1), Mask(0x1)
	uint8_t BitPad_0x1D0_1 : 7; // 0x1D0(0x1)
	uint8_t Pad_0x1D1[0x7]; // 0x1D1(0x7)
	struct TMap<struct FName, struct FCharacterHeroResourceAttachMeshPartData> PartMap; // 0x1D8(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.SkinPatternInfoDataRow
// Size: 0x70 (Inherited: 0x10)
struct FSkinPatternInfoDataRow : FDescRowBase
{
	uint64_t SkinPatternID; // 0x10(0x8)
	uint32_t SkinQuality; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText SkinName; // 0x20(0x18)
	struct FText SkinDesc; // 0x38(0x18)
	struct FSoftObjectPath SkinIconPath; // 0x50(0x18)
	uint32_t SeasonID; // 0x68(0x4)
	uint8_t bHasMore : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.SocialAvatarDataTable
// Size: 0xC8 (Inherited: 0x8)
struct FSocialAvatarDataTable : FTableRowBase
{
	int32_t AvatarType; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	int64_t AvatarID; // 0x10(0x8)
	struct FText AvatarName; // 0x18(0x18)
	int32_t UnLockType; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText AvatarDescription; // 0x38(0x18)
	struct FSoftObjectPath ResourceName; // 0x50(0x18)
	int32_t OpenCollection; // 0x68(0x4)
	int32_t DisplayResource; // 0x6C(0x4)
	struct TArray<struct FSoftObjectPath> OptionalResourceNames; // 0x70(0x10)
	int32_t JumpId; // 0x80(0x4)
	int32_t JumpIDMP; // 0x84(0x4)
	struct FText ButtonDesc; // 0x88(0x18)
	struct FText ButtonDescMP; // 0xA0(0x18)
	int32_t ShopId; // 0xB8(0x4)
	int32_t OrderWeight; // 0xBC(0x4)
	int32_t UnlockPopType; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.FriendFavorabilityParam
// Size: 0x48 (Inherited: 0x10)
struct FFriendFavorabilityParam : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	struct FString ParamKey; // 0x20(0x10)
	int64_t ParamValue; // 0x30(0x8)
	struct FString Desc; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SocialShareScene
// Size: 0x48 (Inherited: 0x10)
struct FSocialShareScene : FDescRowBase
{
	struct FString ShareSceneID; // 0x10(0x10)
	struct FString ShareSceneName; // 0x20(0x10)
	struct FText Param1; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.SocialShareParam
// Size: 0x40 (Inherited: 0x10)
struct FSocialShareParam : FDescRowBase
{
	struct FString ID; // 0x10(0x10)
	struct FString ParamKey; // 0x20(0x10)
	struct TArray<uint64_t> ParamValue; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SOLDecalConfigRow
// Size: 0x20 (Inherited: 0x8)
struct FSOLDecalConfigRow : FTableRowBase
{
	struct FName DecalID; // 0x8(0x8)
	struct TArray<struct TSoftObjectPtr<UObject>> IconPaths; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SOLMapValueDetailTable
// Size: 0xC8 (Inherited: 0x10)
struct FSOLMapValueDetailTable : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t MapID; // 0x14(0x4)
	struct FText MapTitle; // 0x18(0x18)
	struct FText MapSubTitle; // 0x30(0x18)
	struct FText MapDetail; // 0x48(0x18)
	struct FText MapDiffculty; // 0x60(0x18)
	struct FText ActionLevel; // 0x78(0x18)
	struct FString ItemList; // 0x90(0x10)
	struct FText DropRate; // 0xA0(0x18)
	struct FString MapResource; // 0xB8(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SOLContractIconRow
// Size: 0x10 (Inherited: 0x8)
struct FSOLContractIconRow : FTableRowBase
{
	int32_t ContractID; // 0x8(0x4)
	ESOLUIIconType IconType; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.SOLUIIconConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FSOLUIIconConfigRow : FTableRowBase
{
	ESOLUIIconType IconType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TSoftObjectPtr<UObject> IconPath; // 0x10(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.SOLUIColorConfigRow
// Size: 0x20 (Inherited: 0x8)
struct FSOLUIColorConfigRow : FTableRowBase
{
	ESOLUIColorType ColorType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FLinearColor LinearColor; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SHresult
// Size: 0x70 (Inherited: 0x0)
struct FSHresult
{
	struct FLinearColor SH01_r; // 0x0(0x10)
	struct FLinearColor SH01_g; // 0x10(0x10)
	struct FLinearColor SH01_b; // 0x20(0x10)
	struct FLinearColor SH2a_r; // 0x30(0x10)
	struct FLinearColor SH2a_g; // 0x40(0x10)
	struct FLinearColor SH2a_b; // 0x50(0x10)
	struct FLinearColor SH2b_rgb; // 0x60(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SquadConfigRow
// Size: 0x20 (Inherited: 0x8)
struct FSquadConfigRow : FTableRowBase
{
	struct FName SquadConfigTagName; // 0x8(0x8)
	struct TArray<struct FSquadCampConfig> Camps; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SquadCampConfig
// Size: 0x28 (Inherited: 0x0)
struct FSquadCampConfig
{
	int32_t CampId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString CampName; // 0x8(0x10)
	struct TArray<struct FSquadTeamConfig> Teams; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SquadTeamConfig
// Size: 0x28 (Inherited: 0x0)
struct FSquadTeamConfig
{
	int32_t TeamID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString TeamName; // 0x8(0x10)
	struct FName InGameGeneratorTagName; // 0x18(0x8)
	struct FName GlobalBuffTagName; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SteamAchievement
// Size: 0x68 (Inherited: 0x10)
struct FSteamAchievement : FDescRowBase
{
	int64_t AchievementId; // 0x10(0x8)
	struct FText AchievementName; // 0x18(0x18)
	struct FText AchievementDesc; // 0x30(0x18)
	struct FString Statapiname; // 0x48(0x10)
	int32_t MaxValue; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	int64_t GoalID; // 0x60(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.StoreCashAreaDiff
// Size: 0x40 (Inherited: 0x10)
struct FStoreCashAreaDiff : FDescRowBase
{
	uint64_t CountryID; // 0x10(0x8)
	struct FString CurrencySign; // 0x18(0x10)
	struct FString CurrencyShort; // 0x28(0x10)
	EPriceDisplayOrder ShowType; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t Precision; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.StoreCharge
// Size: 0x20 (Inherited: 0x10)
struct FStoreCharge : FDescRowBase
{
	struct FString ImgPath; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StoreItem
// Size: 0x108 (Inherited: 0x10)
struct FStoreItem : FDescRowBase
{
	uint64_t ShopId; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	int32_t NameSort; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText TitleName; // 0x38(0x18)
	int32_t MainTabId; // 0x50(0x4)
	int32_t SubTabId; // 0x54(0x4)
	struct FString ImgPath; // 0x58(0x10)
	struct FString AvatarID; // 0x68(0x10)
	uint8_t bAvatarWithSuit : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	uint64_t BaseItemId; // 0x80(0x8)
	struct FText Desc; // 0x88(0x18)
	struct FText BpTechTips; // 0xA0(0x18)
	struct FText DyeTips; // 0xB8(0x18)
	struct FText DesignerStory; // 0xD0(0x18)
	struct FText BoxDescText; // 0xE8(0x18)
	int32_t OnceLimitNum; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SeasonSpecialConfig
// Size: 0x90 (Inherited: 0x10)
struct FSeasonSpecialConfig : FDescRowBase
{
	uint64_t TabID; // 0x10(0x8)
	struct FText BannerName; // 0x18(0x18)
	struct FString IamgeSourceSmall; // 0x30(0x10)
	struct FString IamgeSourceBig; // 0x40(0x10)
	struct FText TextROI; // 0x50(0x18)
	struct FText TextComposition; // 0x68(0x18)
	struct FString ItemsSortIndex; // 0x80(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.ThemeTabConfig
// Size: 0x80 (Inherited: 0x10)
struct FThemeTabConfig : FDescRowBase
{
	uint64_t ThemeID; // 0x10(0x8)
	struct FText ThemeTabName; // 0x18(0x18)
	struct FString ThemeTabOn; // 0x30(0x10)
	struct FString ThemeTabOff; // 0x40(0x10)
	struct FString ThemeTabMedia; // 0x50(0x10)
	struct FString MainTabIcon; // 0x60(0x10)
	struct FString SubTabIcon; // 0x70(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.FreeMandelBrick
// Size: 0x68 (Inherited: 0x10)
struct FFreeMandelBrick : FDescRowBase
{
	uint64_t FreeMandelBrickID; // 0x10(0x8)
	uint64_t SeasonID; // 0x18(0x8)
	struct FText PoolTitle; // 0x20(0x18)
	struct FString CoverImage; // 0x38(0x10)
	struct FString BannerImage; // 0x48(0x10)
	struct FString MediaRes; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SpecialBackConfig
// Size: 0x90 (Inherited: 0x10)
struct FSpecialBackConfig : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	uint64_t SpecialBackId; // 0x18(0x8)
	uint64_t RewardItem; // 0x20(0x8)
	struct FString ItemBg; // 0x28(0x10)
	struct FString ImageSourceLogo; // 0x38(0x10)
	struct FString SceneBGPath; // 0x48(0x10)
	uint64_t WeightDefault; // 0x58(0x8)
	uint64_t WeightDown; // 0x60(0x8)
	uint64_t SortIndex; // 0x68(0x8)
	int32_t IsDiscountIntensity; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	uint64_t CurrencyType; // 0x78(0x8)
	uint64_t Price; // 0x80(0x8)
	uint64_t PricePreDis; // 0x88(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.StoreBHDConfig
// Size: 0x98 (Inherited: 0x10)
struct FStoreBHDConfig : FDescRowBase
{
	uint64_t GoodsId; // 0x10(0x8)
	int32_t IsBHD; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText GiftName; // 0x20(0x18)
	struct FString OnlineTime; // 0x38(0x10)
	struct FString OfflineTime; // 0x48(0x10)
	int32_t IsDiscountIntensity; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	uint64_t BundleCurrencyType; // 0x60(0x8)
	uint64_t DisBundlePrice; // 0x68(0x8)
	uint64_t BundlePrice; // 0x70(0x8)
	struct FString Items; // 0x78(0x10)
	struct FString ItemsSortIndex; // 0x88(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.LotteryUIBackground
// Size: 0x68 (Inherited: 0x10)
struct FLotteryUIBackground : FDescRowBase
{
	uint64_t LotteryId; // 0x10(0x8)
	struct FString LotteryUIName; // 0x18(0x10)
	struct FSoftObjectPath LotteryImagePath; // 0x28(0x18)
	struct FSoftObjectPath ImageSourceLogo; // 0x40(0x18)
	struct FString BGVideoName; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.SpecialItemBuyConf
// Size: 0x38 (Inherited: 0x10)
struct FSpecialItemBuyConf : FDescRowBase
{
	uint64_t PresentItemID; // 0x10(0x8)
	uint64_t CurrencyType; // 0x18(0x8)
	uint64_t Price; // 0x20(0x8)
	uint64_t BuyItemID; // 0x28(0x8)
	int32_t PresentNum; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.StoreMallGiftConfig
// Size: 0x118 (Inherited: 0x10)
struct FStoreMallGiftConfig : FDescRowBase
{
	uint64_t GoodsId; // 0x10(0x8)
	uint64_t SortIndex; // 0x18(0x8)
	int32_t IsBlocked; // 0x20(0x4)
	int32_t GoodsType; // 0x24(0x4)
	int32_t LimitType; // 0x28(0x4)
	int32_t LimitAmount; // 0x2C(0x4)
	struct FString OnlineTime; // 0x30(0x10)
	struct FString OfflineTime; // 0x40(0x10)
	int32_t IsDisplayCountdown; // 0x50(0x4)
	int32_t IsDiscountIntensity; // 0x54(0x4)
	struct FText GiftName; // 0x58(0x18)
	struct FString Items; // 0x70(0x10)
	struct FString ItemsSortIndex; // 0x80(0x10)
	uint64_t CurrencyType; // 0x90(0x8)
	uint64_t Price; // 0x98(0x8)
	uint64_t PricePreDis; // 0xA0(0x8)
	float Discount; // 0xA8(0x4)
	int32_t IsCash; // 0xAC(0x4)
	struct FString ExternalItemNumber; // 0xB0(0x10)
	struct FString ExternalItemNumberSteam; // 0xC0(0x10)
	struct FString AppleItemID; // 0xD0(0x10)
	struct FString GoogleItemID; // 0xE0(0x10)
	struct FString PcItemID; // 0xF0(0x10)
	struct FString IamgeSource; // 0x100(0x10)
	int32_t UpType; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.StorePVConfig
// Size: 0x30 (Inherited: 0x10)
struct FStorePVConfig : FDescRowBase
{
	struct FString MediaName; // 0x10(0x10)
	struct TArray<struct FString> ItemIdList; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StoreHotRecommendation
// Size: 0x188 (Inherited: 0x10)
struct FStoreHotRecommendation : FDescRowBase
{
	uint64_t TabID; // 0x10(0x8)
	uint64_t BannerType; // 0x18(0x8)
	uint64_t SortIndex; // 0x20(0x8)
	struct FText BannerName; // 0x28(0x18)
	struct FString OnlineTime; // 0x40(0x10)
	struct FString OfflineTime; // 0x50(0x10)
	int32_t IsDisplayCountdown; // 0x60(0x4)
	int32_t IsDiscountIntensity; // 0x64(0x4)
	uint64_t BundleCurrencyType; // 0x68(0x8)
	uint64_t DisBundlePrice; // 0x70(0x8)
	uint64_t BundlePrice; // 0x78(0x8)
	struct FString BundleItem; // 0x80(0x10)
	struct FString ItemsSortIndex; // 0x90(0x10)
	struct FString IamgeSourceSmall; // 0xA0(0x10)
	struct FString IamgeSourceBig; // 0xB0(0x10)
	struct FString ImageSourceLogo; // 0xC0(0x10)
	struct FString JumpTo; // 0xD0(0x10)
	struct FString MoviesRowName; // 0xE0(0x10)
	int32_t MoviesAuto; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct FString BGVideoName; // 0xF8(0x10)
	struct FString GainThemeBundle; // 0x108(0x10)
	float GainBundleDelayTime; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	struct FSoftObjectPath WBPPath; // 0x120(0x18)
	struct FString IamgeSourceSmall_CDN_Mobile; // 0x138(0x10)
	struct FString IamgeSourceBig_CDN_Mobile; // 0x148(0x10)
	struct FString ImageSourceLogo_CDN_CN_Mobile; // 0x158(0x10)
	struct FString ImageSourceLogo_CDN_EN_Mobile; // 0x168(0x10)
	struct FString WbpImagePath_CDN; // 0x178(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StoreLottery
// Size: 0x158 (Inherited: 0x10)
struct FStoreLottery : FDescRowBase
{
	uint64_t LotteryId; // 0x10(0x8)
	struct FText LotteryName; // 0x18(0x18)
	uint64_t LotteryType; // 0x30(0x8)
	struct FString BeginTime; // 0x38(0x10)
	struct FString EndTime; // 0x48(0x10)
	struct FString MusicName; // 0x58(0x10)
	int32_t IsDisplayCountdown; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	uint64_t MandelItemId; // 0x70(0x8)
	uint64_t LotteryKeyId; // 0x78(0x8)
	struct FString MoviesRowName; // 0x80(0x10)
	int32_t MoviesAuto; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FText LotteryText1; // 0x98(0x18)
	struct FText LotteryText2; // 0xB0(0x18)
	struct FString VedioGreat; // 0xC8(0x10)
	struct FString VedioNormal; // 0xD8(0x10)
	uint8_t PassVideoNormal : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct FString LotteryIcon; // 0xF0(0x10)
	struct FSoftObjectPath ImageSourceLogo; // 0x100(0x18)
	struct FString DetailBg; // 0x118(0x10)
	struct FSoftObjectPath LotteryUIName; // 0x128(0x18)
	struct FSoftObjectPath LotteryImagePath; // 0x140(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.StoreLNEventProb
// Size: 0x30 (Inherited: 0x10)
struct FStoreLNEventProb : FDescRowBase
{
	uint64_t IndexID; // 0x10(0x8)
	struct FSoftObjectPath ItemBuyBg; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.StoreLNGoodsBack
// Size: 0x50 (Inherited: 0x10)
struct FStoreLNGoodsBack : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	uint64_t IsGreat; // 0x18(0x8)
	uint64_t IsNew; // 0x20(0x8)
	struct FString ItemBg; // 0x28(0x10)
	struct FSoftObjectPath ImageSourceLogo; // 0x38(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.StoreLNEventReward
// Size: 0x80 (Inherited: 0x10)
struct FStoreLNEventReward : FDescRowBase
{
	uint64_t IndexID; // 0x10(0x8)
	struct FText RewardName; // 0x18(0x18)
	uint64_t IsGreat; // 0x30(0x8)
	uint64_t IsNew; // 0x38(0x8)
	struct FString ItemCardBg; // 0x40(0x10)
	struct FSoftObjectPath ItemBuyBg; // 0x50(0x18)
	struct FSoftObjectPath ImageSourceLogo; // 0x68(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.StorePaymentRestriction
// Size: 0x48 (Inherited: 0x10)
struct FStorePaymentRestriction : FDescRowBase
{
	uint64_t ID; // 0x10(0x8)
	uint64_t Level; // 0x18(0x8)
	uint64_t SOLNum; // 0x20(0x8)
	uint64_t MPNum; // 0x28(0x8)
	uint64_t CoordinatingRelationship; // 0x30(0x8)
	struct FString LimitType; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StoreSubTab
// Size: 0x48 (Inherited: 0x10)
struct FStoreSubTab : FDescRowBase
{
	uint64_t Index; // 0x10(0x8)
	struct FString SubTabId; // 0x18(0x10)
	int32_t SortIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString CurrencyColumn; // 0x30(0x10)
	uint8_t IsExpanded : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t ShowTimeLimitCoin : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
};

// Object: ScriptStruct DFMGlobalDefines.StoreMainTab
// Size: 0x90 (Inherited: 0x10)
struct FStoreMainTab : FDescRowBase
{
	uint64_t Index; // 0x10(0x8)
	struct FString TabID; // 0x18(0x10)
	int32_t SortIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText TabName; // 0x30(0x18)
	struct FString TabIcon; // 0x48(0x10)
	struct FString SubTabList; // 0x58(0x10)
	uint8_t UseCollabData : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString TabMedia; // 0x70(0x10)
	struct FString TransBp; // 0x80(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.StoreTab
// Size: 0x58 (Inherited: 0x10)
struct FStoreTab : FDescRowBase
{
	int32_t TabID; // 0x10(0x4)
	int32_t MainTabId; // 0x14(0x4)
	int32_t SubTabId; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText MainTabName; // 0x20(0x18)
	struct FText SubTabName; // 0x38(0x18)
	int32_t SubTabOrder; // 0x50(0x4)
	uint8_t bHide : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
};

// Object: ScriptStruct DFMGlobalDefines.StoryDialogRow
// Size: 0x40 (Inherited: 0x8)
struct FStoryDialogRow : FTableRowBase
{
	int64_t DialogID; // 0x8(0x8)
	int64_t TraderID; // 0x10(0x8)
	int64_t SpeakerID; // 0x18(0x8)
	struct FText Content; // 0x20(0x18)
	int64_t NextID; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.SystemEntryPriorityConfig
// Size: 0x30 (Inherited: 0x10)
struct FSystemEntryPriorityConfig : FDescRowBase
{
	struct FString SystemEntryID; // 0x10(0x10)
	int32_t CNPriority; // 0x20(0x4)
	int32_t WWPriority; // 0x24(0x4)
	int32_t GAPriority; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.SystemMail
// Size: 0x120 (Inherited: 0x8)
struct FSystemMail : FTableRowBase
{
	int64_t MailID; // 0x8(0x8)
	struct FText Sender; // 0x10(0x18)
	struct FText Title; // 0x28(0x18)
	int64_t AvatarID; // 0x40(0x8)
	struct FText Content; // 0x48(0x18)
	int32_t MailType; // 0x60(0x4)
	int32_t AutoDelete; // 0x64(0x4)
	struct FString HyperLink; // 0x68(0x10)
	struct FString HyperLinkTitle; // 0x78(0x10)
	struct FString HyperLinkURL; // 0x88(0x10)
	int32_t ExpirationTime; // 0x98(0x4)
	int32_t AttachmentExpirationTime; // 0x9C(0x4)
	int64_t Attachment1ItemID; // 0xA0(0x8)
	int32_t Attachment1Num; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	int64_t Attachment2ItemID; // 0xB0(0x8)
	int32_t Attachment2Num; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	int64_t Attachment3ItemID; // 0xC0(0x8)
	int32_t Attachment3Num; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	int64_t Attachment4ItemID; // 0xD0(0x8)
	int32_t Attachment4Num; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	int64_t Attachment5ItemID; // 0xE0(0x8)
	int32_t Attachment5Num; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	int64_t Attachment6ItemID; // 0xF0(0x8)
	int32_t Attachment6Num; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
	int64_t Attachment7ItemID; // 0x100(0x8)
	int32_t Attachment7Num; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	int64_t Attachment8ItemID; // 0x110(0x8)
	int32_t Attachment8Num; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TalentDataRow
// Size: 0xF0 (Inherited: 0x10)
struct FTalentDataRow : FDescRowBase
{
	struct FName TalentId; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	struct TSet<struct FName> Professions; // 0x48(0x50)
	struct TSoftObjectPtr<UPaperSprite> ICON; // 0x98(0x28)
	int32_t TimeType; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0xC8(0x10)
	struct TArray<uint32_t> BuffIdArray; // 0xD8(0x10)
	int32_t SkillId; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.ExpertSkillInfo
// Size: 0x98 (Inherited: 0x10)
struct FExpertSkillInfo : FDescRowBase
{
	int64_t ExpertId; // 0x10(0x8)
	int64_t ArmedForceID; // 0x18(0x8)
	int64_t MPUltimateSkillID; // 0x20(0x8)
	int64_t MPSupportSkillID; // 0x28(0x8)
	int64_t MPPassiveSkillID; // 0x30(0x8)
	int64_t MPActiveSkillID; // 0x38(0x8)
	int64_t MPCommonPassiveSkillID; // 0x40(0x8)
	int64_t MPCustomSkillID; // 0x48(0x8)
	struct TArray<int32_t> MPCommonSkillID; // 0x50(0x10)
	int64_t SOLUltimateSkillID; // 0x60(0x8)
	int64_t SOLSupportSkillID; // 0x68(0x8)
	int64_t SOLPassiveSkillID; // 0x70(0x8)
	int64_t SOLActiveSkillID; // 0x78(0x8)
	int64_t SOLCommonPassiveSkillID; // 0x80(0x8)
	struct TArray<int32_t> SOLCommonSkillID; // 0x88(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TalentInfo
// Size: 0x80 (Inherited: 0x10)
struct FTalentInfo : FDescRowBase
{
	int64_t TalentId; // 0x10(0x8)
	int64_t ArmedForceID; // 0x18(0x8)
	struct FText Name; // 0x20(0x18)
	struct FText Desc; // 0x38(0x18)
	struct FString ICON; // 0x50(0x10)
	int64_t MPActiveSkillID; // 0x60(0x8)
	int64_t MPPassiveSkillID; // 0x68(0x8)
	int64_t SOLActiveSkillID; // 0x70(0x8)
	int64_t SOLPassiveSkillID; // 0x78(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.MPResultTextConfig
// Size: 0xA0 (Inherited: 0x8)
struct FMPResultTextConfig : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	int32_t MatchModeId; // 0xC(0x4)
	struct FText AttWinResultText; // 0x10(0x18)
	struct FText AttLoseResultText; // 0x28(0x18)
	struct FText AttDrawResultText; // 0x40(0x18)
	struct FText DefWinResultText; // 0x58(0x18)
	struct FText DefLoseResultText; // 0x70(0x18)
	struct FText DefDrawResultText; // 0x88(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TDMMapIconConfig
// Size: 0x40 (Inherited: 0x8)
struct FTDMMapIconConfig : FTableRowBase
{
	struct FName ID; // 0x8(0x8)
	struct FSoftObjectPath Value; // 0x10(0x18)
	struct FSoftObjectPath value2; // 0x28(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TDMMapTextConfig
// Size: 0x30 (Inherited: 0x8)
struct FTDMMapTextConfig : FTableRowBase
{
	struct FName ID; // 0x8(0x8)
	struct FText Value; // 0x10(0x18)
	uint8_t IfRemind : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.TDMMapConstantStr
// Size: 0x20 (Inherited: 0x8)
struct FTDMMapConstantStr : FTableRowBase
{
	struct FName Key; // 0x8(0x8)
	struct FString Value; // 0x10(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TDMMapConstant
// Size: 0x28 (Inherited: 0x8)
struct FTDMMapConstant : FTableRowBase
{
	struct FName Wariable; // 0x8(0x8)
	struct FText Value; // 0x10(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TDMMapResourceConfig
// Size: 0x88 (Inherited: 0x8)
struct FTDMMapResourceConfig : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	int32_t GameRule; // 0xC(0x4)
	struct FString Desc; // 0x10(0x10)
	int32_t MatchSubMode; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FSoftObjectPath ButtonThumbnailHD; // 0x28(0x18)
	struct FSoftObjectPath ButtonThumbnail; // 0x40(0x18)
	struct TArray<struct FString> HeroBan; // 0x58(0x10)
	struct TArray<struct FString> HeroOnly; // 0x68(0x10)
	struct TArray<int64_t> MatchModeId; // 0x78(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TDMMapConfig
// Size: 0x180 (Inherited: 0x8)
struct FTDMMapConfig : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	int32_t DefaultMode; // 0xC(0x4)
	int32_t GroupID; // 0x10(0x4)
	int32_t MatchModeId; // 0x14(0x4)
	int32_t GroupMapSelectType; // 0x18(0x4)
	int32_t Priority; // 0x1C(0x4)
	struct FText ModeName; // 0x20(0x18)
	struct FText ModeDesc; // 0x38(0x18)
	struct FSoftObjectPath ModeThumbnail; // 0x50(0x18)
	struct FText MapName; // 0x68(0x18)
	struct FText MapDesc; // 0x80(0x18)
	struct FSoftObjectPath MapThumbnail; // 0x98(0x18)
	struct FText ModeRuleDesc; // 0xB0(0x18)
	uint8_t AddMemberType : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t Available : 1; // 0xC8(0x1), Mask(0x2)
	uint8_t Open : 1; // 0xC8(0x1), Mask(0x4)
	uint8_t BitPad_0xC8_3 : 5; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct FString OpenTime; // 0xD0(0x10)
	struct FString CloseTime; // 0xE0(0x10)
	struct FString WeeklyTime; // 0xF0(0x10)
	struct FString DayTime; // 0x100(0x10)
	int32_t ModePlayerLevel; // 0x110(0x4)
	uint8_t IsTournement : 1; // 0x114(0x1), Mask(0x1)
	uint8_t BitPad_0x114_1 : 7; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	int32_t GroupType; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	struct FText ModeLabel; // 0x120(0x18)
	struct FText MapLabel; // 0x138(0x18)
	struct TArray<struct FText> ModeNameLabel; // 0x150(0x10)
	struct FText CategoryName; // 0x160(0x18)
	uint8_t IfRemind : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x178_1 : 7; // 0x178(0x1)
	uint8_t Pad_0x179[0x7]; // 0x179(0x7)
};

// Object: ScriptStruct DFMGlobalDefines.TeamConstructTemplate
// Size: 0x40 (Inherited: 0x8)
struct FTeamConstructTemplate : FTableRowBase
{
	int32_t Index; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	int64_t Priority; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	int32_t CQBNum; // 0x30(0x4)
	int32_t MedicNum; // 0x34(0x4)
	int32_t VehicleNum; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.HeroDataInfo
// Size: 0x30 (Inherited: 0x0)
struct FHeroDataInfo
{
	struct FSoftObjectPath AvatarIcon; // 0x0(0x18)
	struct FSoftObjectPath ExpertIcon; // 0x18(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TeammateStateInfo
// Size: 0x48 (Inherited: 0x0)
struct FTeammateStateInfo
{
	struct TSoftObjectPtr<UObject> TeammateStateIconPath; // 0x0(0x28)
	struct FLinearColor MaskColor; // 0x28(0x10)
	struct FLinearColor ProgressBarColor; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TeammateUIConfigRow
// Size: 0x200 (Inherited: 0x8)
struct FTeammateUIConfigRow : FTableRowBase
{
	EDFMGamePlayMode DFMGamePlayMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TMap<ETeammateState, struct FTeammateStateInfo> TeammateStateInfoMap; // 0x10(0x50)
	struct TMap<int32_t, struct TSoftObjectPtr<UObject>> PlayerGamePlayStateIconMap; // 0x60(0x50)
	struct TMap<EInGameBattleClassType, struct TSoftObjectPtr<UObject>> InGameBattleClassType; // 0xB0(0x50)
	struct TMap<uint64_t, struct TSoftObjectPtr<UObject>> HeroAvatarMobile; // 0x100(0x50)
	struct TMap<uint64_t, struct TSoftObjectPtr<UObject>> HeroAvatarHD; // 0x150(0x50)
	struct TArray<struct TSoftObjectPtr<UObject>> PlayerIndexIcon; // 0x1A0(0x10)
	struct TMap<EPlayerRelationShipType, struct FLinearColor> PlayerRelationShipColorMap; // 0x1B0(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.TeamMessage
// Size: 0x38 (Inherited: 0x10)
struct FTeamMessage : FDescRowBase
{
	struct FName RowName; // 0x10(0x8)
	EMessagetype Type; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FText Message; // 0x20(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TeamSize
// Size: 0x28 (Inherited: 0x10)
struct FTeamSize : FDescRowBase
{
	int32_t TeamSizeId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString TeamSizeName; // 0x18(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TipsConfig
// Size: 0x68 (Inherited: 0x10)
struct FTipsConfig : FDescRowBase
{
	int32_t TipsId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UPaperSprite> TitleIconPath; // 0x18(0x28)
	struct FText Title; // 0x40(0x18)
	struct TArray<struct FText> Texts; // 0x58(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TLogDefinition
// Size: 0x28 (Inherited: 0x10)
struct FTLogDefinition : FDescRowBase
{
	struct FName TLogName; // 0x10(0x8)
	int32_t MaxSendNum; // 0x18(0x4)
	int32_t MaxWaitSendNum; // 0x1C(0x4)
	int32_t ClientMaxSendNum; // 0x20(0x4)
	int32_t ClientMaxWaitSendNum; // 0x24(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TODConfig
// Size: 0xA0 (Inherited: 0x10)
struct FTODConfig : FDescRowBase
{
	int32_t TODID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	int32_t DuringTime; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText Desc; // 0x38(0x18)
	int32_t WeatherID; // 0x50(0x4)
	int32_t EventId; // 0x54(0x4)
	struct FText DescSidebar; // 0x58(0x18)
	int32_t IfHerotod; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FString WeatherIconPath; // 0x78(0x10)
	struct FText Temperature; // 0x88(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderSeason
// Size: 0x130 (Inherited: 0x10)
struct FCommanderSeason : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString StartTime; // 0x18(0x10)
	struct FString EndTime; // 0x28(0x10)
	struct FString UIStartTime; // 0x38(0x10)
	struct FString UIEndTime; // 0x48(0x10)
	int32_t TimeDisplayDigit; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString StopMatchTime; // 0x60(0x10)
	struct FText Name; // 0x70(0x18)
	struct FText SeasonDescription; // 0x88(0x18)
	struct FText Description; // 0xA0(0x18)
	struct FSoftObjectPath BackgroundPic; // 0xB8(0x18)
	struct FSoftObjectPath SeasonBeginAnimation; // 0xD0(0x18)
	struct FSoftObjectPath InterfaceAnimation; // 0xE8(0x18)
	struct FText RankPopupExplainTips; // 0x100(0x18)
	struct FText TitleExplainTips; // 0x118(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderWordParameter
// Size: 0x48 (Inherited: 0x10)
struct FCommanderWordParameter : FDescRowBase
{
	struct FString Variable; // 0x10(0x10)
	struct FString Desc; // 0x20(0x10)
	struct FText Value; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderParameter
// Size: 0x40 (Inherited: 0x10)
struct FCommanderParameter : FDescRowBase
{
	struct FString Variable; // 0x10(0x10)
	struct FString Desc; // 0x20(0x10)
	struct FString Value; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderRewards
// Size: 0x60 (Inherited: 0x10)
struct FCommanderRewards : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t SeasonID; // 0x14(0x4)
	int32_t TierID; // 0x18(0x4)
	int32_t RewardConditionType; // 0x1C(0x4)
	int32_t RewardConditionPar; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText RewardConditionDes; // 0x28(0x18)
	struct TArray<struct FString> Rewards; // 0x40(0x10)
	struct TArray<struct FString> SeasonRewards; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.CommanderTier
// Size: 0x108 (Inherited: 0x10)
struct FCommanderTier : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	int32_t TierTypeID; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText Type; // 0x38(0x18)
	int32_t SubID; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<int32_t> SeasonID; // 0x58(0x10)
	int32_t MinPoint; // 0x68(0x4)
	int32_t StarsDivided; // 0x6C(0x4)
	int32_t BadgeBlueprint; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FSoftObjectPath BadgeModel; // 0x78(0x18)
	struct FSoftObjectPath BadgeIcon; // 0x90(0x18)
	struct FSoftObjectPath BadgeIconThumbnail; // 0xA8(0x18)
	struct FSoftObjectPath BadgeMinIcon; // 0xC0(0x18)
	struct FSoftObjectPath BadgeMinIconThumbnail; // 0xD8(0x18)
	struct FSoftObjectPath BadgeTransitionAnimation; // 0xF0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TournamentWordParameter
// Size: 0x48 (Inherited: 0x10)
struct FTournamentWordParameter : FDescRowBase
{
	struct FString Variable; // 0x10(0x10)
	struct FString Desc; // 0x20(0x10)
	struct FText Value; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TournamentParameter
// Size: 0x48 (Inherited: 0x10)
struct FTournamentParameter : FDescRowBase
{
	struct FString Variable; // 0x10(0x10)
	struct FString Desc; // 0x20(0x10)
	struct FText Value; // 0x30(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TournamentScore
// Size: 0x58 (Inherited: 0x10)
struct FTournamentScore : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t TeriaryID; // 0x14(0x4)
	struct FText Desc; // 0x18(0x18)
	int32_t MinimumAbility; // 0x30(0x4)
	int32_t ProductPara; // 0x34(0x4)
	int32_t OffsetPara; // 0x38(0x4)
	int32_t AveragePara; // 0x3C(0x4)
	float StandardPara; // 0x40(0x4)
	float VerticalOffsetPara; // 0x44(0x4)
	int32_t MapID; // 0x48(0x4)
	int32_t UpperLimit; // 0x4C(0x4)
	int32_t LowerLimit; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TournamentSeason
// Size: 0x158 (Inherited: 0x10)
struct FTournamentSeason : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString StartTime; // 0x18(0x10)
	struct FString EndTime; // 0x28(0x10)
	struct FString UIStartTime; // 0x38(0x10)
	struct FString UIEndTime; // 0x48(0x10)
	int32_t TimeDisplayDigit; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString StopMatchTime; // 0x60(0x10)
	struct FText Name; // 0x70(0x18)
	struct FText SeasonDescription; // 0x88(0x18)
	struct FText Description; // 0xA0(0x18)
	struct FSoftObjectPath BackgroundPic; // 0xB8(0x18)
	struct FSoftObjectPath SeasonBeginAnimation; // 0xD0(0x18)
	struct FSoftObjectPath InterfaceAnimation; // 0xE8(0x18)
	struct FText RankPopupExplainTips; // 0x100(0x18)
	struct FText TitleExplainTips; // 0x118(0x18)
	struct FString CoreAward; // 0x130(0x10)
	int32_t CoreTier; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct FString CoreAwardPicture; // 0x148(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TournamentTitle
// Size: 0x70 (Inherited: 0x10)
struct FTournamentTitle : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText TitleName; // 0x18(0x18)
	int32_t Weapon; // 0x30(0x4)
	int32_t Tactical; // 0x34(0x4)
	int32_t Vehicle; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FSoftObjectPath ICON; // 0x40(0x18)
	struct FSoftObjectPath Border; // 0x58(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TournamentRewards
// Size: 0x60 (Inherited: 0x10)
struct FTournamentRewards : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	int32_t SeasonID; // 0x14(0x4)
	int32_t TierID; // 0x18(0x4)
	int32_t RewardConditionType; // 0x1C(0x4)
	int32_t RewardConditionPar; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText RewardConditionDes; // 0x28(0x18)
	struct TArray<struct FString> Rewards; // 0x40(0x10)
	struct TArray<struct FString> SeasonRewards; // 0x50(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TournamentTier
// Size: 0x108 (Inherited: 0x10)
struct FTournamentTier : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	int32_t TierTypeID; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText Type; // 0x38(0x18)
	int32_t SubID; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<int32_t> SeasonID; // 0x58(0x10)
	int32_t MinPoint; // 0x68(0x4)
	int32_t StarsDivided; // 0x6C(0x4)
	int32_t BadgeBlueprint; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FSoftObjectPath BadgeModel; // 0x78(0x18)
	struct FSoftObjectPath BadgeIcon; // 0x90(0x18)
	struct FSoftObjectPath BadgeIconThumbnail; // 0xA8(0x18)
	struct FSoftObjectPath BadgeMinIcon; // 0xC0(0x18)
	struct FSoftObjectPath BadgeMinIconThumbnail; // 0xD8(0x18)
	struct FSoftObjectPath BadgeTransitionAnimation; // 0xF0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.TraderInfo
// Size: 0x188 (Inherited: 0x10)
struct FTraderInfo : FDescRowBase
{
	int64_t TraderID; // 0x10(0x8)
	struct FText TraderName; // 0x18(0x18)
	struct FText TraderTitle; // 0x30(0x18)
	struct FText TraderCenterType; // 0x48(0x18)
	struct FText TraderTypeNameList; // 0x60(0x18)
	struct FString TraderTypeIDList; // 0x78(0x10)
	struct FString TraderIconPath; // 0x88(0x10)
	struct FText TraderDesc; // 0x98(0x18)
	struct FString DefaultSlot; // 0xB0(0x10)
	struct FString AllMatchSlots; // 0xC0(0x10)
	struct FString UnlockRepLv; // 0xD0(0x10)
	int32_t PlayerLv1Lv; // 0xE0(0x4)
	int32_t PlayerLv2Lv; // 0xE4(0x4)
	int32_t PlayerLv3Lv; // 0xE8(0x4)
	int32_t PlayerLv4Lv; // 0xEC(0x4)
	int32_t PlayerLv1Credit; // 0xF0(0x4)
	int32_t PlayerLv2Credit; // 0xF4(0x4)
	int32_t PlayerLv3Credit; // 0xF8(0x4)
	int32_t PlayerLv4Credit; // 0xFC(0x4)
	int32_t LvN1Favorability; // 0x100(0x4)
	int32_t LvN2Favorability; // 0x104(0x4)
	int32_t LvN3Favorability; // 0x108(0x4)
	int32_t LvN4Favorability; // 0x10C(0x4)
	int32_t LvN5Favorability; // 0x110(0x4)
	int32_t Lv0Favorability; // 0x114(0x4)
	int32_t Lv1Favorability; // 0x118(0x4)
	int32_t Lv2Favorability; // 0x11C(0x4)
	int32_t Lv3Favorability; // 0x120(0x4)
	int32_t Lv4Favorability; // 0x124(0x4)
	int32_t Lv5Favorability; // 0x128(0x4)
	float LvN1FavDiscount; // 0x12C(0x4)
	float LvN2FavDiscount; // 0x130(0x4)
	float LvN3FavDiscount; // 0x134(0x4)
	float LvN4FavDiscount; // 0x138(0x4)
	float LvN5FavDiscount; // 0x13C(0x4)
	float Lv0FavDiscount; // 0x140(0x4)
	float Lv1FavDiscount; // 0x144(0x4)
	float Lv2FavDiscount; // 0x148(0x4)
	float Lv3FavDiscount; // 0x14C(0x4)
	float Lv4FavDiscount; // 0x150(0x4)
	float Lv5FavDiscount; // 0x154(0x4)
	int32_t Lv2FavDropPoolID; // 0x158(0x4)
	float Lv2FavGiftProb; // 0x15C(0x4)
	int32_t Lv2FavGiftTimes; // 0x160(0x4)
	int32_t Lv3FavDropPoolID; // 0x164(0x4)
	float Lv3FavGiftProb; // 0x168(0x4)
	int32_t Lv3FavGiftTimes; // 0x16C(0x4)
	int32_t Lv4FavDropPoolID; // 0x170(0x4)
	float Lv4FavGiftProb; // 0x174(0x4)
	int32_t Lv4FavGiftTimes; // 0x178(0x4)
	int32_t Lv5FavDropPoolID; // 0x17C(0x4)
	float Lv5FavGiftProb; // 0x180(0x4)
	int32_t Lv5FavGiftTimes; // 0x184(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TraderGiftInfo
// Size: 0xA8 (Inherited: 0x10)
struct FTraderGiftInfo : FDescRowBase
{
	int64_t ItemID; // 0x10(0x8)
	struct FText Name; // 0x18(0x18)
	uint8_t CanBeGift : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct FString Trader1; // 0x38(0x10)
	struct FString Trader2; // 0x48(0x10)
	struct FString Trader3; // 0x58(0x10)
	struct FString Trader4; // 0x68(0x10)
	struct FString Trader5; // 0x78(0x10)
	struct FString Trader6; // 0x88(0x10)
	struct FString Trader7; // 0x98(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TraderPageMainInfo
// Size: 0x40 (Inherited: 0x10)
struct FTraderPageMainInfo : FDescRowBase
{
	int32_t LabelNo1; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText LabelNo1Name; // 0x18(0x18)
	struct FString LabelNo1Icon; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TraderPageInfo
// Size: 0x70 (Inherited: 0x10)
struct FTraderPageInfo : FDescRowBase
{
	int32_t PageID; // 0x10(0x4)
	int32_t TraderID; // 0x14(0x4)
	int32_t ExchangeType; // 0x18(0x4)
	int32_t LabelNo1; // 0x1C(0x4)
	int32_t LabelNo2; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText LabelNo1Name; // 0x28(0x18)
	struct FText LabelNo2Name; // 0x40(0x18)
	struct FString LabelNo2Icon; // 0x58(0x10)
	int32_t PageOrder; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.TraderSectorTypeInfo
// Size: 0x48 (Inherited: 0x10)
struct FTraderSectorTypeInfo : FDescRowBase
{
	int64_t TraderSectorID; // 0x10(0x8)
	int64_t QualityID; // 0x18(0x8)
	struct FText TraderSectorTypeName; // 0x20(0x18)
	struct FString TraderSectorTypeKey; // 0x38(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TraderTypeInfo
// Size: 0x40 (Inherited: 0x10)
struct FTraderTypeInfo : FDescRowBase
{
	int64_t TraderTypeID; // 0x10(0x8)
	struct FText TraderTypeName; // 0x18(0x18)
	struct FString TraderTypeIconPath; // 0x30(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.TreasurePackItemList
// Size: 0x18 (Inherited: 0x10)
struct FTreasurePackItemList : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.TXAchievement
// Size: 0xA0 (Inherited: 0x8)
struct FTXAchievement : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	int32_t Order; // 0x40(0x4)
	int32_t Model; // 0x44(0x4)
	int64_t HeroId; // 0x48(0x8)
	struct TArray<int64_t> Titleid; // 0x50(0x10)
	struct TArray<int64_t> MissionSOL; // 0x60(0x10)
	struct TArray<int64_t> MissionBR; // 0x70(0x10)
	int32_t Hide; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FText MissionText; // 0x88(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.UserSystemSetting
// Size: 0x60 (Inherited: 0x10)
struct FUserSystemSetting : FDescRowBase
{
	struct FName SystemSettingName; // 0x10(0x8)
	struct FText Title; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	struct FSoftObjectPath DescImgPath; // 0x48(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleDamageHitContext
// Size: 0xC (Inherited: 0x0)
struct FVehicleDamageHitContext
{
	uint8_t bPartAlreadyBroken : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t PartType; // 0x4(0x4)
	EVehiclePartStateChangeType PartStateChange; // 0x8(0x1)
	uint8_t bPredictedVehicleKill : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleModificationRulesDataConfigList
// Size: 0x18 (Inherited: 0x0)
struct FVehicleModificationRulesDataConfigList
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleLevelRow
// Size: 0x20 (Inherited: 0x10)
struct FVehicleLevelRow : FDescRowBase
{
	int64_t Level; // 0x10(0x8)
	int64_t Exp; // 0x18(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleFrontendTransformRow
// Size: 0x68 (Inherited: 0x10)
struct FVehicleFrontendTransformRow : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	struct TMap<int64_t, struct FTransform> VehicleItemID2ListMap; // 0x18(0x50)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleSocketNameRow
// Size: 0x28 (Inherited: 0x10)
struct FVehicleSocketNameRow : FDescRowBase
{
	int64_t SocketNum; // 0x10(0x8)
	struct FName SocketName; // 0x18(0x8)
	struct FName SocketIndex; // 0x20(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleSkinDataConfig
// Size: 0x80 (Inherited: 0x10)
struct FVehicleSkinDataConfig : FDescRowBase
{
	int64_t SkinId; // 0x10(0x8)
	struct FText SkinName; // 0x18(0x18)
	struct FText SkinDescription; // 0x30(0x18)
	int64_t DefaultSkinAppearanceID; // 0x48(0x8)
	int64_t VehicleItemID; // 0x50(0x8)
	int64_t VehicleId; // 0x58(0x8)
	uint8_t OpenCollection : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct FText UnLock; // 0x68(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleModificationTabDataConfig
// Size: 0x58 (Inherited: 0x10)
struct FVehicleModificationTabDataConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int32_t TabID; // 0x18(0x4)
	int32_t SlotId; // 0x1C(0x4)
	uint8_t bHide : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t SortID; // 0x24(0x4)
	struct FText Name; // 0x28(0x18)
	struct FSoftObjectPath ImgPath; // 0x40(0x18)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleWeaponAccessoryDataTableRow
// Size: 0x48 (Inherited: 0x10)
struct FVehicleWeaponAccessoryDataTableRow : FDescRowBase
{
	uint64_t AccessoryId; // 0x10(0x8)
	uint8_t bEnableThremalImaging : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TSoftObjectPtr<UMaterialInterface> ThermalImagingMaterial; // 0x20(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleModificationRulesDataConfig
// Size: 0x118 (Inherited: 0x10)
struct FVehicleModificationRulesDataConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t VehicleItemID; // 0x18(0x8)
	int64_t VehicleId; // 0x20(0x8)
	struct FText VehicleName; // 0x28(0x18)
	int64_t SocketNum; // 0x40(0x8)
	struct FText SeatID; // 0x48(0x18)
	int32_t SocketType; // 0x60(0x4)
	int32_t SocketId; // 0x64(0x4)
	struct FText SocketName; // 0x68(0x18)
	int64_t PartItemId; // 0x80(0x8)
	int64_t PartId; // 0x88(0x8)
	struct FText PartName; // 0x90(0x18)
	int64_t AccessoryId; // 0xA8(0x8)
	struct FText PartDescription; // 0xB0(0x18)
	struct FText ModelPath; // 0xC8(0x18)
	int32_t DefaultPart; // 0xE0(0x4)
	int32_t UnLockType; // 0xE4(0x4)
	int32_t UnlockPara; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	int64_t UnlockTask; // 0xF0(0x8)
	struct FText UnlockDescription; // 0xF8(0x18)
	int32_t SlotId; // 0x110(0x4)
	int32_t SortID; // 0x114(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleUnlockDataConfig
// Size: 0x78 (Inherited: 0x10)
struct FVehicleUnlockDataConfig : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	int64_t VehicleId; // 0x18(0x8)
	struct FText VehicleName; // 0x20(0x18)
	struct FText VehicleDescription; // 0x38(0x18)
	int32_t UnlockMethod; // 0x50(0x4)
	int32_t UnlockPara; // 0x54(0x4)
	struct FText UnlockDescription; // 0x58(0x18)
	int32_t SortID; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleExpDataRow
// Size: 0x20 (Inherited: 0x10)
struct FVehicleExpDataRow : FDescRowBase
{
	int64_t ExpType; // 0x10(0x8)
	float ExpRatio; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleUISkinAppearanceRow
// Size: 0x30 (Inherited: 0x10)
struct FVehicleUISkinAppearanceRow : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	uint8_t IsReplaceAllTextures : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<struct FVehicleUISkinItemInfo> UISkinItemInfos; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleUISkinItemInfo
// Size: 0x38 (Inherited: 0x0)
struct FVehicleUISkinItemInfo
{
	uint64_t VehiclePartItemID; // 0x0(0x8)
	int32_t MaterialIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TSoftObjectPtr<UMaterialInterface> SkinMaterial; // 0x10(0x28)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleSceneConfigData
// Size: 0x60 (Inherited: 0x10)
struct FVehicleSceneConfigData : FDescRowBase
{
	struct FString VechileSceneType; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> SubLevelNameGroup; // 0x20(0x10)
	struct FName LightGroupName; // 0x30(0x8)
	struct FName HeightFogName; // 0x38(0x8)
	struct FSoftObjectPath SequencePath; // 0x40(0x18)
	int32_t LoopCount; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.VehicleEnumSceneConfigData
// Size: 0x38 (Inherited: 0x10)
struct FVehicleEnumSceneConfigData : FDescRowBase
{
	struct FString VehicleId; // 0x10(0x10)
	int64_t ID; // 0x20(0x8)
	struct FString SceneType; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponBulletGroupData
// Size: 0x40 (Inherited: 0x8)
struct FWeaponBulletGroupData : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	int64_t WeaponBulletGroupID; // 0x10(0x8)
	int64_t ItemID; // 0x18(0x8)
	int64_t Position; // 0x20(0x8)
	int32_t ItemNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t WeaponBulletGroupPrice; // 0x30(0x8)
	int64_t WeaponCouponPrice; // 0x38(0x8)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponStarConstantRow
// Size: 0x20 (Inherited: 0x10)
struct FWeaponStarConstantRow : FDescRowBase
{
	struct FName ID; // 0x10(0x8)
	int32_t Value; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.MPWeaponLevelParts
// Size: 0x38 (Inherited: 0x10)
struct FMPWeaponLevelParts : FDescRowBase
{
	int32_t ID; // 0x10(0x4)
	struct FName RecFunctionId; // 0x14(0x8)
	int32_t Level; // 0x1C(0x4)
	int32_t Exp; // 0x20(0x4)
	int32_t ExpSum; // 0x24(0x4)
	struct TArray<struct FName> UnlockParts; // 0x28(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponLevelFormula
// Size: 0x38 (Inherited: 0x10)
struct FWeaponLevelFormula : FDescRowBase
{
	int32_t factorType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText FactorDesc; // 0x18(0x18)
	int32_t FactorPara; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.WeaponExpItem
// Size: 0x20 (Inherited: 0x10)
struct FWeaponExpItem : FDescRowBase
{
	struct FName ItemID; // 0x10(0x8)
	int32_t AddWeaponExp; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.WeGameLanguageCode
// Size: 0x30 (Inherited: 0x10)
struct FWeGameLanguageCode : FDescRowBase
{
	struct FString LNGCode; // 0x10(0x10)
	struct FString LNGCodeWithRegionCode; // 0x20(0x10)
};

// Object: ScriptStruct DFMGlobalDefines.WorldActorConfig
// Size: 0x50 (Inherited: 0x10)
struct FWorldActorConfig : FDescRowBase
{
	int64_t ActorID; // 0x10(0x8)
	int32_t DefaultState; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t Content1PropID; // 0x20(0x8)
	int32_t Content1Num; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t Content2PropID; // 0x30(0x8)
	int32_t Content2Num; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	int64_t Content3PropID; // 0x40(0x8)
	int32_t Content3Num; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGlobalDefines.WorldEntranceConfig
// Size: 0xC8 (Inherited: 0x10)
struct FWorldEntranceConfig : FDescRowBase
{
	uint32_t EntranceIdx; // 0x10(0x4)
	uint32_t GameMode; // 0x14(0x4)
	uint32_t GameRuleType; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString MapID; // 0x20(0x10)
	uint32_t RaidID; // 0x30(0x4)
	uint32_t StartSpotGroup; // 0x34(0x4)
	struct FText EntranceMainName; // 0x38(0x18)
	struct FText EntranceSubName; // 0x50(0x18)
	struct FText EntranceOrientation; // 0x68(0x18)
	struct FText EntranceDesc; // 0x80(0x18)
	struct FSoftObjectPath EntranceThumbnail; // 0x98(0x18)
	uint32_t Difficulty; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct FString BossName; // 0xB8(0x10)
};

// Object: Class DFMGlobalDefines.DFMLoadingManager
// Size: 0x40 (Inherited: 0x28)
struct UDFMLoadingManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMLoadingManager, "DFMLoadingManager")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FMulticastInlineDelegate OnStopLoading; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.DFMGameSingletonAttribute
// Size: 0x28 (Inherited: 0x28)
struct UDFMGameSingletonAttribute : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameSingletonAttribute, "DFMGameSingletonAttribute")
};

// Object: Class DFMGlobalDefines.BreakthroughUIColorDataManager
// Size: 0x40 (Inherited: 0x30)
struct UBreakthroughUIColorDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBreakthroughUIColorDataManager, "BreakthroughUIColorDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.BreakthroughUIIconDataManager
// Size: 0x40 (Inherited: 0x30)
struct UBreakthroughUIIconDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBreakthroughUIIconDataManager, "BreakthroughUIIconDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.BreakthroughTextTypeManager
// Size: 0x40 (Inherited: 0x30)
struct UBreakthroughTextTypeManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBreakthroughTextTypeManager, "BreakthroughTextTypeManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.BattleFieldSectorAnchorIconManager
// Size: 0x40 (Inherited: 0x30)
struct UBattleFieldSectorAnchorIconManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldSectorAnchorIconManager, "BattleFieldSectorAnchorIconManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.BreakthroughUIConfig
// Size: 0x28 (Inherited: 0x28)
struct UBreakthroughUIConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBreakthroughUIConfig, "BreakthroughUIConfig")

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetTextStyleByType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137936b8
	// Params: [ Num(2) Size(0xC) ]
	static struct FName GetTextStyleByType(EBreakthroughTextType InTextType);

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetTeamIconByTeamIDSelfRoom
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x137935fc
	// Params: [ Num(2) Size(0x20) ]
	static struct FSoftObjectPath GetTeamIconByTeamIDSelfRoom(int32_t InTeamId);

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetTeamIconByTeamID
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13793540
	// Params: [ Num(2) Size(0x20) ]
	static struct FSoftObjectPath GetTeamIconByTeamID(int32_t InTeamId);

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetSectorAnchorIconByName
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x13793474
	// Params: [ Num(2) Size(0x20) ]
	static struct FSoftObjectPath GetSectorAnchorIconByName(const struct FName& InSectorAnchorString);

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetSameTeamIconByTeamIDSelfRoom
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13793378
	// Params: [ Num(3) Size(0x20) ]
	static struct FSoftObjectPath GetSameTeamIconByTeamIDSelfRoom(int32_t InTeamId, uint8_t bVehicle);

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetSameTeamIconByTeamID
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1379327c
	// Params: [ Num(3) Size(0x20) ]
	static struct FSoftObjectPath GetSameTeamIconByTeamID(int32_t InTeamId, uint8_t bVehicle);

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetIconPathByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x137931c0
	// Params: [ Num(2) Size(0x20) ]
	static struct FSoftObjectPath GetIconPathByType(EBreakthroughUIIconType InIconType);

	// Object: Function DFMGlobalDefines.BreakthroughUIConfig.GetColorByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf9c88c4
	// Params: [ Num(2) Size(0x14) ]
	static struct FLinearColor GetColorByType(EBreakthroughUIColorType InColorType);
};

// Object: Class DFMGlobalDefines.CarrayItemsDataMgr
// Size: 0x40 (Inherited: 0x30)
struct UCarrayItemsDataMgr : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCarrayItemsDataMgr, "CarrayItemsDataMgr")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.CarrayItem_HealArmorConfigDataMgr
// Size: 0x40 (Inherited: 0x30)
struct UCarrayItem_HealArmorConfigDataMgr : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCarrayItem_HealArmorConfigDataMgr, "CarrayItem_HealArmorConfigDataMgr")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.CharacterBodyPartMeshStatics
// Size: 0x28 (Inherited: 0x28)
struct UCharacterBodyPartMeshStatics : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCharacterBodyPartMeshStatics, "CharacterBodyPartMeshStatics")

	// Object: Function DFMGlobalDefines.CharacterBodyPartMeshStatics.SetMeshByConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10b3fb18
	// Params: [ Num(2) Size(0x10) ]
	static void SetMeshByConfig(struct UMeshComponent* Mesh, struct FName Name);
};

// Object: Class DFMGlobalDefines.CharacterCommercialDataLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCharacterCommercialDataLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UCharacterCommercialDataLibrary, "CharacterCommercialDataLibrary")

	// Object: Function DFMGlobalDefines.CharacterCommercialDataLibrary.IsCrossLinkageLines
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1379cd6c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsCrossLinkageLines(struct FName LinesId);

	// Object: Function DFMGlobalDefines.CharacterCommercialDataLibrary.IsAllowPlayCrossLinkageLines
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1379cc8c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsAllowPlayCrossLinkageLines(struct FName LinesId, struct FName CurrentFashionId);
};

// Object: Class DFMGlobalDefines.CharacterHeroResourceTracingLineManager
// Size: 0x40 (Inherited: 0x30)
struct UCharacterHeroResourceTracingLineManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCharacterHeroResourceTracingLineManager, "CharacterHeroResourceTracingLineManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.CollectionRoomConstantWrap
// Size: 0x28 (Inherited: 0x28)
struct UCollectionRoomConstantWrap : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCollectionRoomConstantWrap, "CollectionRoomConstantWrap")

	// Object: Function DFMGlobalDefines.CollectionRoomConstantWrap.GetConstantByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137a5fe8
	// Params: [ Num(2) Size(0x10) ]
	static struct FName GetConstantByName(struct FName ConstantName);
};

// Object: Class DFMGlobalDefines.CollectionRoomLimitedCollectionWrap
// Size: 0x28 (Inherited: 0x28)
struct UCollectionRoomLimitedCollectionWrap : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCollectionRoomLimitedCollectionWrap, "CollectionRoomLimitedCollectionWrap")

	// Object: Function DFMGlobalDefines.CollectionRoomLimitedCollectionWrap.GetScaleByItemID
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x137a61e4
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetScaleByItemID(struct FName ItemID);

	// Object: Function DFMGlobalDefines.CollectionRoomLimitedCollectionWrap.GetRotatorByItemID
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x137a613c
	// Params: [ Num(2) Size(0x14) ]
	static struct FRotator GetRotatorByItemID(struct FName ItemID);

	// Object: Function DFMGlobalDefines.CollectionRoomLimitedCollectionWrap.GetLocationByItemID
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x137a6094
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetLocationByItemID(struct FName ItemID);
};

// Object: Class DFMGlobalDefines.CollectionRoomWeaponRackWrap
// Size: 0x28 (Inherited: 0x28)
struct UCollectionRoomWeaponRackWrap : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCollectionRoomWeaponRackWrap, "CollectionRoomWeaponRackWrap")

	// Object: Function DFMGlobalDefines.CollectionRoomWeaponRackWrap.GetTransformByItemID
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x137a6294
	// Params: [ Num(3) Size(0x40) ]
	static struct FTransform GetTransformByItemID(struct FName ItemID, uint8_t bOnCabinet);
};

// Object: Class DFMGlobalDefines.GPCollectionWeaponDataConfig
// Size: 0x88 (Inherited: 0x30)
struct UGPCollectionWeaponDataConfig : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPCollectionWeaponDataConfig, "GPCollectionWeaponDataConfig")

	struct TMap<struct FName, struct UDataTable*> CollectionWeaponDataTable; // 0x30(0x50)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)

	// Object: Function DFMGlobalDefines.GPCollectionWeaponDataConfig.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137a63a0
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPCollectionWeaponDataConfig* Get(struct UObject* WorldContextObject);
};

// Object: Class DFMGlobalDefines.RedPackageConfigWrapper
// Size: 0xC8 (Inherited: 0x28)
struct URedPackageConfigWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(URedPackageConfigWrapper, "RedPackageConfigWrapper")

	uint8_t Pad_0x28[0xA0]; // 0x28(0xA0)

	// Object: Function DFMGlobalDefines.RedPackageConfigWrapper.IsUnLuckyNumber
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137ac284
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsUnLuckyNumber(int64_t Coins);

	// Object: Function DFMGlobalDefines.RedPackageConfigWrapper.GetRedEnvelopeTotalTimesAndCoins
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x137ac150
	// Params: [ Num(3) Size(0x18) ]
	static void GetRedEnvelopeTotalTimesAndCoins(uint64_t ItemID, int32_t& Times, int64_t& Coins);

	// Object: Function DFMGlobalDefines.RedPackageConfigWrapper.GetRandomHongBaoItemIdAndCoins
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x137abfb8
	// Params: [ Num(4) Size(0x20) ]
	static void GetRandomHongBaoItemIdAndCoins(const int64_t& RemainCoins, const int32_t& RemainTimes, uint64_t& ItemID, int64_t& Coin);

	// Object: Function DFMGlobalDefines.RedPackageConfigWrapper.GetRandomCoinsByHongBaoItemId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137abf14
	// Params: [ Num(2) Size(0x10) ]
	static int64_t GetRandomCoinsByHongBaoItemId(uint64_t ItemID);

	// Object: Function DFMGlobalDefines.RedPackageConfigWrapper.GetHongBaoItemIdByCoins
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137abe70
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t GetHongBaoItemIdByCoins(int64_t Coins);

	// Object: Function DFMGlobalDefines.RedPackageConfigWrapper.GetHongBaoConstValueById
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137abd98
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetHongBaoConstValueById(struct FName ID);

	// Object: Function DFMGlobalDefines.RedPackageConfigWrapper.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137abd64
	// Params: [ Num(1) Size(0x8) ]
	static struct URedPackageConfigWrapper* Get();
};

// Object: Class DFMGlobalDefines.CSVChangeUtil
// Size: 0x370 (Inherited: 0x370)
struct ACSVChangeUtil : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACSVChangeUtil, "CSVChangeUtil")

	// Object: Function DFMGlobalDefines.CSVChangeUtil.SaveTableToCSV
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137b5798
	// Params: [ Num(2) Size(0x18) ]
	static void SaveTableToCSV(struct UDataTable* DataTable, struct FString CSVFileName);

	// Object: Function DFMGlobalDefines.CSVChangeUtil.SaveStringToCSV
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137b5644
	// Params: [ Num(3) Size(0x21) ]
	static void SaveStringToCSV(struct TArray<struct FString> str, struct FString CSVFileName, uint8_t Append);

	// Object: Function DFMGlobalDefines.CSVChangeUtil.RefreshTableFromCSV
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137b556c
	// Params: [ Num(2) Size(0x18) ]
	static void RefreshTableFromCSV(struct UDataTable* DataTable, struct FString CSVFileName);
};

// Object: Class DFMGlobalDefines.CustomListView
// Size: 0x3C0 (Inherited: 0x3C0)
struct UCustomListView : UDFCustomListView
{
	DEFINE_UE_CLASS_HELPERS(UCustomListView, "CustomListView")
};

// Object: Class DFMGlobalDefines.DataTableRuntimeUtil
// Size: 0x38 (Inherited: 0x28)
struct UDataTableRuntimeUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDataTableRuntimeUtil, "DataTableRuntimeUtil")

	struct TArray<struct FString> AllowSplitTables; // 0x28(0x10)

	// Object: Function DFMGlobalDefines.DataTableRuntimeUtil.SaveDataTableToCSV
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137b5b68
	// Params: [ Num(2) Size(0x18) ]
	static void SaveDataTableToCSV(struct UDataTable* DataTable, struct FString CSVFileName);

	// Object: Function DFMGlobalDefines.DataTableRuntimeUtil.RefeshDataTableFromCSV
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137b5a90
	// Params: [ Num(2) Size(0x18) ]
	static void RefeshDataTableFromCSV(struct UDataTable* DataTable, struct FString CSVFileName);

	// Object: Function DFMGlobalDefines.DataTableRuntimeUtil.DataTableDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137b59f8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString DataTableDir();

	// Object: Function DFMGlobalDefines.DataTableRuntimeUtil.CSVDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137b5960
	// Params: [ Num(1) Size(0x10) ]
	static struct FString CSVDir();
};

// Object: Class DFMGlobalDefines.DFCAPTCHALibrary
// Size: 0x28 (Inherited: 0x28)
struct UDFCAPTCHALibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UDFCAPTCHALibrary, "DFCAPTCHALibrary")

	// Object: Function DFMGlobalDefines.DFCAPTCHALibrary.GetSceneName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137b5cb0
	// Params: [ Num(2) Size(0xC) ]
	static struct FName GetSceneName(ECAPTCHASceneType SceneType);
};

// Object: Class DFMGlobalDefines.DFCustomerServiceLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDFCustomerServiceLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UDFCustomerServiceLibrary, "DFCustomerServiceLibrary")

	// Object: Function DFMGlobalDefines.DFCustomerServiceLibrary.GetSupportPlatforms
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xebc20e0
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetSupportPlatforms(struct FString SupportPlatformStr);

	// Object: Function DFMGlobalDefines.DFCustomerServiceLibrary.GetEntranceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfa44b88
	// Params: [ Num(2) Size(0xC) ]
	static struct FName GetEntranceName(ECustomerServicesEntranceType EntranceType);
};

// Object: Class DFMGlobalDefines.DFMButton
// Size: 0x4A0 (Inherited: 0x4A0)
struct UDFMButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UDFMButton, "DFMButton")
};

// Object: Class DFMGlobalDefines.CharacterAmbientLightGroupDataManager
// Size: 0x38 (Inherited: 0x30)
struct UCharacterAmbientLightGroupDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCharacterAmbientLightGroupDataManager, "CharacterAmbientLightGroupDataManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class DFMGlobalDefines.DFMColorDefineBlueprintHelper
// Size: 0x28 (Inherited: 0x28)
struct UDFMColorDefineBlueprintHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UDFMColorDefineBlueprintHelper, "DFMColorDefineBlueprintHelper")

	// Object: Function DFMGlobalDefines.DFMColorDefineBlueprintHelper.GetColorByQualityId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ba178
	// Params: [ Num(2) Size(0x50) ]
	static struct FDFMColorDefineRow GetColorByQualityId(int32_t ID);
};

// Object: Class DFMGlobalDefines.DFMCommonButton
// Size: 0x4A8 (Inherited: 0x4A0)
struct UDFMCommonButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UDFMCommonButton, "DFMCommonButton")

	struct FName DefaultClickSound; // 0x4A0(0x8)

	// Object: Function DFMGlobalDefines.DFMCommonButton.SetOpenDefaultSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ba3fc
	// Params: [ Num(1) Size(0x1) ]
	void SetOpenDefaultSound(uint8_t bIsOpen);

	// Object: Function DFMGlobalDefines.DFMCommonButton.OverLoadSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ba350
	// Params: [ Num(1) Size(0x10) ]
	void OverLoadSound(struct FString InSoundName);

	// Object: Function DFMGlobalDefines.DFMCommonButton.OnPlayDefaultSound
	// Flags: [Final|Native|Private]
	// Offset: 0x137ba33c
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayDefaultSound();

	// Object: Function DFMGlobalDefines.DFMCommonButton.CloseDefaultSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ba328
	// Params: [ Num(0) Size(0x0) ]
	void CloseDefaultSound();
};

// Object: Class DFMGlobalDefines.DFMCommonHover
// Size: 0x3B0 (Inherited: 0x2F8)
struct UDFMCommonHover : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFMCommonHover, "DFMCommonHover")

	ECommonHoverExtMode ExtensionMode; // 0x2F8(0x1)
	ECommonHoverStyleMode StyleMode; // 0x2F9(0x1)
	uint8_t bHideFreeAnalogCursorHideFocusContentRoot : 1; // 0x2FA(0x1), Mask(0x1)
	uint8_t BitPad_0x2FA_1 : 7; // 0x2FA(0x1)
	uint8_t bHoverEnabled : 1; // 0x2FB(0x1), Mask(0x1)
	uint8_t BitPad_0x2FB_1 : 7; // 0x2FB(0x1)
	uint8_t bUseUserWidgetEvent : 1; // 0x2FC(0x1), Mask(0x1)
	uint8_t BitPad_0x2FC_1 : 7; // 0x2FC(0x1)
	uint8_t bHoverSoundEnabled : 1; // 0x2FD(0x1), Mask(0x1)
	uint8_t BitPad_0x2FD_1 : 7; // 0x2FD(0x1)
	uint8_t bResponseClick : 1; // 0x2FE(0x1), Mask(0x1)
	uint8_t BitPad_0x2FE_1 : 7; // 0x2FE(0x1)
	EHoverNodeEffetApplyType NodeEffectApplyType; // 0x2FF(0x1)
	struct FString WidgetPath; // 0x300(0x10)
	struct UCurveFloat* HoverdScaleCurve; // 0x310(0x8)
	uint8_t bSeparatedUnhoverCurve : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t Pad_0x319[0x7]; // 0x319(0x7)
	struct UCurveFloat* UnhoverdScaleCurve; // 0x320(0x8)
	float FocusLoopAnimDelay; // 0x328(0x4)
	EGPUIFocusEffectType FocusEffectType; // 0x32C(0x1)
	uint8_t Pad_0x32D[0x3]; // 0x32D(0x3)
	struct FMulticastInlineDelegate OnBPHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnBPUnhovered; // 0x340(0x10)
	uint8_t Pad_0x350[0x8]; // 0x350(0x8)
	struct UWidget* Bindable; // 0x358(0x8)
	struct ULuaUIBaseView* BindView; // 0x360(0x8)
	struct UWidget* EffectApplyNode; // 0x368(0x8)
	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct UWidget* HoverContentRoot; // 0x380(0x8)
	struct UWidget* FocusContentRoot; // 0x388(0x8)
	struct UWidget* ClickContentRoot; // 0x390(0x8)
	uint8_t Pad_0x398[0x18]; // 0x398(0x18)

	// Object: Function DFMGlobalDefines.DFMCommonHover.StopAutoAnimation
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x137babc0
	// Params: [ Num(1) Size(0x8) ]
	void StopAutoAnimation(struct FName AnimationName);

	// Object: Function DFMGlobalDefines.DFMCommonHover.SetHideFreeAnalogCursorHideFocusContentRoot
	// Flags: [Final|Native|Public]
	// Offset: 0x137bab14
	// Params: [ Num(1) Size(0x1) ]
	void SetHideFreeAnalogCursorHideFocusContentRoot(uint8_t InHideFreeAnalogCursorHideFocusContentRoot);

	// Object: Function DFMGlobalDefines.DFMCommonHover.PlayAutoAnimation
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x137ba9ac
	// Params: [ Num(5) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAutoAnimation(struct FName AnimationName, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, uint8_t bJumpToEnd);

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnUnhovered
	// Flags: [Final|Native|Protected]
	// Offset: 0x137ba998
	// Params: [ Num(0) Size(0x0) ]
	void OnUnhovered();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnReleased
	// Flags: [Final|Native|Protected]
	// Offset: 0xf438d8c
	// Params: [ Num(0) Size(0x0) ]
	void OnReleased();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnProcessEnableStyleChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x137ba8ec
	// Params: [ Num(1) Size(0x1) ]
	void OnProcessEnableStyleChanged(uint8_t bInActivated);

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnPressed
	// Flags: [Final|Native|Protected]
	// Offset: 0xf438c70
	// Params: [ Num(0) Size(0x0) ]
	void OnPressed();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnParentUnhoverd
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x137ba8d0
	// Params: [ Num(0) Size(0x0) ]
	void OnParentUnhoverd();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnParentReleased
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x137ba8b4
	// Params: [ Num(0) Size(0x0) ]
	void OnParentReleased();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnParentPressed
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x137ba898
	// Params: [ Num(0) Size(0x0) ]
	void OnParentPressed();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnParentHoverd
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x137ba87c
	// Params: [ Num(0) Size(0x0) ]
	void OnParentHoverd();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnHovered
	// Flags: [Final|Native|Protected]
	// Offset: 0x137ba868
	// Params: [ Num(0) Size(0x0) ]
	void OnHovered();

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnHandleFocusReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x137ba75c
	// Params: [ Num(2) Size(0x50) ]
	void OnHandleFocusReceived(const struct FGeometry& InGeometry, const struct FFocusEvent& InFocusEvent);

	// Object: Function DFMGlobalDefines.DFMCommonHover.OnHandleFocusLost
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x137ba6a0
	// Params: [ Num(1) Size(0x8) ]
	void OnHandleFocusLost(const struct FFocusEvent& InFocusEvent);

	// Object: DelegateFunction DFMGlobalDefines.DFMCommonHover.OnCommonHoverEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnCommonHoverEvent__DelegateSignature();

	// Object: Function DFMGlobalDefines.DFMCommonHover.HandleInputTypeChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x137ba5fc
	// Params: [ Num(1) Size(0x1) ]
	void HandleInputTypeChanged(EGPInputType InInputType);

	// Object: Function DFMGlobalDefines.DFMCommonHover.BindHoverEvents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ba5e8
	// Params: [ Num(0) Size(0x0) ]
	void BindHoverEvents();
};

// Object: Class DFMGlobalDefines.DFMCommonImage
// Size: 0x340 (Inherited: 0x340)
struct UDFMCommonImage : UDFImage
{
	DEFINE_UE_CLASS_HELPERS(UDFMCommonImage, "DFMCommonImage")
};

// Object: Class DFMGlobalDefines.DFMCommonMediaImage
// Size: 0x388 (Inherited: 0x2D0)
struct UDFMCommonMediaImage : UImage
{
	DEFINE_UE_CLASS_HELPERS(UDFMCommonMediaImage, "DFMCommonMediaImage")

	struct FName MediaName; // 0x2D0(0x8)
	struct UBinkMediaPlayer* MediaPlayer; // 0x2D8(0x8)
	struct UMaterialInterface* MaterialBase; // 0x2E0(0x8)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x2E8(0x8)
	uint8_t bCreateMaterialInstanceDynamic : 1; // 0x2F0(0x1), Mask(0x1)
	uint8_t BitPad_0x2F0_1 : 7; // 0x2F0(0x1)
	uint8_t bAutoMatchMediaSize : 1; // 0x2F1(0x1), Mask(0x1)
	uint8_t BitPad_0x2F1_1 : 7; // 0x2F1(0x1)
	uint8_t bPlayNativeSound : 1; // 0x2F2(0x1), Mask(0x1)
	uint8_t BitPad_0x2F2_1 : 7; // 0x2F2(0x1)
	uint8_t bLoop : 1; // 0x2F3(0x1), Mask(0x1)
	uint8_t BitPad_0x2F3_1 : 7; // 0x2F3(0x1)
	uint8_t bPlayOnLoad : 1; // 0x2F4(0x1), Mask(0x1)
	uint8_t BitPad_0x2F4_1 : 7; // 0x2F4(0x1)
	uint8_t Pad_0x2F5[0x3]; // 0x2F5(0x3)
	float TextureShowTime; // 0x2F8(0x4)
	EMediaPlayMode PlayMode; // 0x2FC(0x1)
	uint8_t Pad_0x2FD[0x3]; // 0x2FD(0x3)
	float CurVolume; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
	struct FMulticastInlineDelegate OnMediaOpening; // 0x308(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x318(0x10)
	struct FMulticastInlineDelegate OnMediaPlayBegin; // 0x328(0x10)
	struct FMulticastInlineDelegate OnMediaPlayEnd; // 0x338(0x10)
	uint8_t Pad_0x348[0x40]; // 0x348(0x40)

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.StopMedia
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa4b4ec
	// Params: [ Num(0) Size(0x0) ]
	void StopMedia();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.SetVolumeFromConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bb1f8
	// Params: [ Num(0) Size(0x0) ]
	void SetVolumeFromConfig();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.SetVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bb154
	// Params: [ Num(1) Size(0x4) ]
	void SetVolume(float InVolume);

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.SeekTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bb0b0
	// Params: [ Num(1) Size(0x4) ]
	void SeekTo(int32_t TargetTime);

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.SafeCloseMedia
	// Flags: [Final|Native|Public]
	// Offset: 0x137bb09c
	// Params: [ Num(0) Size(0x0) ]
	void SafeCloseMedia();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a63c68
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeed39f4
	// Params: [ Num(1) Size(0x10) ]
	void Play(struct FString MediaConfigRowName);

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bb088
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.OnLegacyTextureShowEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x137bb074
	// Params: [ Num(0) Size(0x0) ]
	void OnLegacyTextureShowEnd();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.MediaPlayEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x137bb060
	// Params: [ Num(0) Size(0x0) ]
	void MediaPlayEnd();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.MediaOpened
	// Flags: [Final|Native|Private]
	// Offset: 0x10950a64
	// Params: [ Num(1) Size(0x10) ]
	void MediaOpened(struct FString OpenedUrl);

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bb028
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.InitDataByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137baf74
	// Params: [ Num(1) Size(0x8) ]
	void InitDataByName(const struct FName& MediaConfigRowName);

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.GetTotalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10901a28
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalTime();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.GetCurrentUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137baedc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentUrl();

	// Object: Function DFMGlobalDefines.DFMCommonMediaImage.GetCurMediaTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137baea8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurMediaTime();
};

// Object: Class DFMGlobalDefines.DFMGameSingleton
// Size: 0x48 (Inherited: 0x28)
struct UDFMGameSingleton : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameSingleton, "DFMGameSingleton")

	struct TArray<struct UDFMGameSingletonAttribute*> SingletonAttributes; // 0x28(0x10)
	struct TArray<struct UDFMGameSingletonAttribute*> SingletonAttributeClassArray; // 0x38(0x10)
};

// Object: Class DFMGlobalDefines.DFMImage
// Size: 0x580 (Inherited: 0x340)
struct UDFMImage : UDFMCommonImage
{
	DEFINE_UE_CLASS_HELPERS(UDFMImage, "DFMImage")

	struct FMulticastInlineDelegate OnIconStateChange; // 0x340(0x10)
	struct FMulticastInlineDelegate OnIconLoaded; // 0x350(0x10)
	struct FMulticastInlineDelegate OnIconSizeChange; // 0x360(0x10)
	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct FMulticastInlineDelegate OnIconRotate45; // 0x380(0x10)
	struct FDFMImageParam DFMImageParam; // 0x390(0x180)
	struct UTexture* RTIDefaultTexture; // 0x510(0x8)
	uint8_t Pad_0x518[0x18]; // 0x518(0x18)
	struct URuntimeTile* Tile; // 0x530(0x8)
	struct UMaterialInstanceDynamic* IconDynamicMaterial; // 0x538(0x8)
	uint8_t Pad_0x540[0x8]; // 0x540(0x8)
	struct UDFMImageLoadingWidget* SlotCompIconFX_Loading_Widget; // 0x548(0x8)
	struct UUserWidget* DebugTextWidget; // 0x550(0x8)
	struct UWidgetSwitcher* WidgetSwitcher_Debug; // 0x558(0x8)
	struct UTextBlock* Text_Debug; // 0x560(0x8)
	struct UImage* Image_DontMerge; // 0x568(0x8)
	struct UImage* Image_Merge; // 0x570(0x8)
	struct UTextBlock* Text_Merge; // 0x578(0x8)

	// Object: Function DFMGlobalDefines.DFMImage.SetRotated
	// Flags: [Final|Native|Public]
	// Offset: 0x137bb5cc
	// Params: [ Num(1) Size(0x1) ]
	void SetRotated(uint8_t InRotated);

	// Object: Function DFMGlobalDefines.DFMImage.IsRotated
	// Flags: [Final|Native|Public]
	// Offset: 0x137bb594
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRotated();

	// Object: Function DFMGlobalDefines.DFMImage.IsRotate45
	// Flags: [Final|Native|Public]
	// Offset: 0xeefccd8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRotate45();
};

// Object: Class DFMGlobalDefines.DFMImageLoadingWidget
// Size: 0x308 (Inherited: 0x2F8)
struct UDFMImageLoadingWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFMImageLoadingWidget, "DFMImageLoadingWidget")

	uint8_t Pad_0x2F8[0x10]; // 0x2F8(0x10)

	// Object: Function DFMGlobalDefines.DFMImageLoadingWidget.StopLoadingAnim_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void StopLoadingAnim_BP();

	// Object: Function DFMGlobalDefines.DFMImageLoadingWidget.StopLoadingAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bb768
	// Params: [ Num(0) Size(0x0) ]
	void StopLoadingAnim();

	// Object: Function DFMGlobalDefines.DFMImageLoadingWidget.PlayLoadingAnim_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void PlayLoadingAnim_BP();

	// Object: Function DFMGlobalDefines.DFMImageLoadingWidget.PlayLoadingAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bb754
	// Params: [ Num(0) Size(0x0) ]
	void PlayLoadingAnim();

	// Object: Function DFMGlobalDefines.DFMImageLoadingWidget.OnIconSizeChange_AbsoluteSizeAndLocalSize
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xf8b79c4
	// Params: [ Num(2) Size(0x10) ]
	void OnIconSizeChange_AbsoluteSizeAndLocalSize(struct FVector2D AbsoluteSize, struct FVector2D LocalSize);

	// Object: Function DFMGlobalDefines.DFMImageLoadingWidget.OnIconSizeChange
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnIconSizeChange(struct FVector2D LocalSize);
};

// Object: Class DFMGlobalDefines.DFMSDKWebBrowserWidget
// Size: 0x1C8 (Inherited: 0x158)
struct UDFMSDKWebBrowserWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFMSDKWebBrowserWidget, "DFMSDKWebBrowserWidget")

	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
	uint8_t bShowControls : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t bSupportsTransparency : 1; // 0x169(0x1), Mask(0x1)
	uint8_t BitPad_0x169_1 : 7; // 0x169(0x1)
	uint8_t bMouseTransparency : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t BitPad_0x16A_1 : 7; // 0x16A(0x1)
	uint8_t Pad_0x16B[0x1]; // 0x16B(0x1)
	float TransparencyThreadshold; // 0x16C(0x4)
	uint8_t bShowInitialThrobber : 1; // 0x170(0x1), Mask(0x1)
	uint8_t BitPad_0x170_1 : 7; // 0x170(0x1)
	uint8_t Pad_0x171[0x7]; // 0x171(0x7)
	struct FMulticastInlineDelegate OnUrlChanged; // 0x178(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x188(0x10)
	struct FMulticastInlineDelegate OnCallback; // 0x198(0x10)
	struct FMulticastInlineDelegate OnLoadError; // 0x1A8(0x10)
	struct FMulticastInlineDelegate OnLoadCompleted; // 0x1B8(0x10)

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.StopLoad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be1d8
	// Params: [ Num(0) Size(0x0) ]
	void StopLoad();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.Reload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be1c4
	// Params: [ Num(0) Size(0x0) ]
	void Reload();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.OnWebBrowserCallback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be0cc
	// Params: [ Num(1) Size(0x10) ]
	void OnWebBrowserCallback(struct FString Param);

	// Object: DelegateFunction DFMGlobalDefines.DFMSDKWebBrowserWidget.OnSDFMSDKWebBrowserUrlChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	void OnSDFMSDKWebBrowserUrlChanged__DelegateSignature(const struct FText& Text);

	// Object: DelegateFunction DFMGlobalDefines.DFMSDKWebBrowserWidget.OnSDFMSDKWebBrowserLoadError__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSDFMSDKWebBrowserLoadError__DelegateSignature();

	// Object: DelegateFunction DFMGlobalDefines.DFMSDKWebBrowserWidget.OnSDFMSDKWebBrowserLoadCompleted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSDFMSDKWebBrowserLoadCompleted__DelegateSignature();

	// Object: DelegateFunction DFMGlobalDefines.DFMSDKWebBrowserWidget.OnSDFMSDKWebBrowserCallback__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnSDFMSDKWebBrowserCallback__DelegateSignature(struct FString Param);

	// Object: DelegateFunction DFMGlobalDefines.DFMSDKWebBrowserWidget.OnSDFMSDKWebBrowserBeforePopup__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void OnSDFMSDKWebBrowserBeforePopup__DelegateSignature(struct FString URL, struct FString Frame);

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.LoadURL
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bdfd4
	// Params: [ Num(1) Size(0x10) ]
	void LoadURL(struct FString URL);

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.LoadString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bde54
	// Params: [ Num(2) Size(0x20) ]
	void LoadString(struct FString Contents, struct FString DummyURL);

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x137bde1c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.IsLoaded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x137bdde4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoaded();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.GoForward
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bddd0
	// Params: [ Num(0) Size(0x0) ]
	void GoForward();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.GoBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bddbc
	// Params: [ Num(0) Size(0x0) ]
	void GoBack();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x137bdd24
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.GetTitleText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bdc8c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetTitleText();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.GetSystemDPIScaleFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bdc58
	// Params: [ Num(1) Size(0x4) ]
	float GetSystemDPIScaleFactor();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.GetAddressBarUrlText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x137bdb88
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetAddressBarUrlText();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.ExecuteJavascript
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bdadc
	// Params: [ Num(1) Size(0x10) ]
	void ExecuteJavascript(struct FString ScriptText);

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.CanGoForward
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bdaa4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanGoForward();

	// Object: Function DFMGlobalDefines.DFMSDKWebBrowserWidget.CanGoBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bda6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanGoBack();
};

// Object: Class DFMGlobalDefines.DFMTextBlock
// Size: 0x408 (Inherited: 0x408)
struct UDFMTextBlock : UDFTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDFMTextBlock, "DFMTextBlock")
};

// Object: Class DFMGlobalDefines.DFMWebMediaPlayer
// Size: 0x200 (Inherited: 0x158)
struct UDFMWebMediaPlayer : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UDFMWebMediaPlayer, "DFMWebMediaPlayer")

	struct FName MediaName; // 0x158(0x8)
	uint8_t bPlayNativeSound : 1; // 0x160(0x1), Mask(0x1)
	uint8_t BitPad_0x160_1 : 7; // 0x160(0x1)
	uint8_t bLoop : 1; // 0x161(0x1), Mask(0x1)
	uint8_t BitPad_0x161_1 : 7; // 0x161(0x1)
	uint8_t bPlayOnLoad : 1; // 0x162(0x1), Mask(0x1)
	uint8_t BitPad_0x162_1 : 7; // 0x162(0x1)
	EMediaPlayMode PlayMode; // 0x163(0x1)
	uint8_t Pad_0x164[0x4C]; // 0x164(0x4C)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x1B0(0x10)
	struct FMulticastInlineDelegate OnMediaPlayBegin; // 0x1C0(0x10)
	struct FMulticastInlineDelegate OnMediaPlayEnd; // 0x1D0(0x10)
	uint8_t Pad_0x1E0[0x20]; // 0x1E0(0x20)

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.StopMedia
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be808
	// Params: [ Num(0) Size(0x0) ]
	void StopMedia();

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.StopCurMedia
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be7f4
	// Params: [ Num(0) Size(0x0) ]
	void StopCurMedia();

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.SeekTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be750
	// Params: [ Num(1) Size(0x4) ]
	void SeekTo(int32_t TargetTime);

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be73c
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be690
	// Params: [ Num(1) Size(0x10) ]
	void Play(struct FString MediaConfigRowName);

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be67c
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.OnWebMediaFunctionCall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be4fc
	// Params: [ Num(2) Size(0x20) ]
	void OnWebMediaFunctionCall(struct FString Function, struct FString Params);

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be4c4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.InitDataByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137be410
	// Params: [ Num(1) Size(0x8) ]
	void InitDataByName(const struct FName& MediaConfigRowName);

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.GetTotalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be3dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalTime();

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.GetCurrentUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be344
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentUrl();

	// Object: Function DFMGlobalDefines.DFMWebMediaPlayer.GetCurMediaTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137be310
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurMediaTime();
};

// Object: Class DFMGlobalDefines.DFPermissionConfigLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDFPermissionConfigLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UDFPermissionConfigLibrary, "DFPermissionConfigLibrary")

	// Object: Function DFMGlobalDefines.DFPermissionConfigLibrary.GetSupportPlatforms
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137be8bc
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetSupportPlatforms(struct FString SupportPlatformStr);
};

// Object: Class DFMGlobalDefines.DFRouletteBaseView
// Size: 0x640 (Inherited: 0x610)
struct UDFRouletteBaseView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UDFRouletteBaseView, "DFRouletteBaseView")

	float RadiusFactor; // 0x60C(0x4)
	uint8_t EnableDynamicCenter : 1; // 0x610(0x1), Mask(0x1)
	uint8_t UseHoverAnim : 1; // 0x611(0x1), Mask(0x1)
	struct FVector2D DynamicCenter; // 0x614(0x8)
	struct FVector2D CurPressedPosition; // 0x61C(0x8)
	uint8_t BitPad_0x624_2 : 6; // 0x624(0x1)
	uint8_t bEnableHoverEffect : 1; // 0x625(0x1), Mask(0x1)
	uint8_t BitPad_0x625_1 : 7; // 0x625(0x1)
	uint8_t Pad_0x626[0x2]; // 0x626(0x2)
	struct UImage* HoverEffect; // 0x628(0x8)
	struct UWidgetAnimation* Hover; // 0x630(0x8)
	struct UWidgetAnimation* UnHover; // 0x638(0x8)

	// Object: Function DFMGlobalDefines.DFRouletteBaseView.UpdateDragOffset
	// Flags: [Final|Native|Public]
	// Offset: 0x137bec20
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDragOffset();

	// Object: Function DFMGlobalDefines.DFRouletteBaseView.SetRouletteHoverAndSliderAngle
	// Flags: [Final|Native|Public]
	// Offset: 0x137beb44
	// Params: [ Num(2) Size(0x8) ]
	void SetRouletteHoverAndSliderAngle(float InSelectAngle, float InSliderAngle);

	// Object: Function DFMGlobalDefines.DFRouletteBaseView.OnUnhovered
	// Flags: [Final|Native|Public]
	// Offset: 0x137beb30
	// Params: [ Num(0) Size(0x0) ]
	void OnUnhovered();

	// Object: Function DFMGlobalDefines.DFRouletteBaseView.OnHovered
	// Flags: [Final|Native|Public]
	// Offset: 0x137beb1c
	// Params: [ Num(0) Size(0x0) ]
	void OnHovered();

	// Object: Function DFMGlobalDefines.DFRouletteBaseView.GetPressedStartLocation
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x137beae8
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPressedStartLocation();

	// Object: Function DFMGlobalDefines.DFRouletteBaseView.GetCurPressedLocation
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x137beab4
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetCurPressedLocation();

	// Object: Function DFMGlobalDefines.DFRouletteBaseView.CalculateAngle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x137be9bc
	// Params: [ Num(3) Size(0x14) ]
	static float CalculateAngle(const struct FVector2D& InVecA, const struct FVector2D& InVecB);
};

// Object: Class DFMGlobalDefines.DFStreamMediaImage
// Size: 0x3E0 (Inherited: 0x2D0)
struct UDFStreamMediaImage : UImage
{
	DEFINE_UE_CLASS_HELPERS(UDFStreamMediaImage, "DFStreamMediaImage")

	struct FName MediaName; // 0x2D0(0x8)
	uint8_t bPlayNativeSound : 1; // 0x2D8(0x1), Mask(0x1)
	uint8_t BitPad_0x2D8_1 : 7; // 0x2D8(0x1)
	uint8_t bLoop : 1; // 0x2D9(0x1), Mask(0x1)
	uint8_t BitPad_0x2D9_1 : 7; // 0x2D9(0x1)
	uint8_t bPlayOnLoad : 1; // 0x2DA(0x1), Mask(0x1)
	uint8_t BitPad_0x2DA_1 : 7; // 0x2DA(0x1)
	EMediaPlayMode PlayMode; // 0x2DB(0x1)
	uint8_t Pad_0x2DC[0x4]; // 0x2DC(0x4)
	struct UMediaPlayer* MediaPlayer; // 0x2E0(0x8)
	struct UMediaTexture* MediaTexture; // 0x2E8(0x8)
	float CurVolume; // 0x2F0(0x4)
	uint8_t Pad_0x2F4[0x4]; // 0x2F4(0x4)
	struct FMulticastInlineDelegate OnMediaOpening; // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x308(0x10)
	struct FMulticastInlineDelegate OnMediaPlayBegin; // 0x318(0x10)
	struct FMulticastInlineDelegate OnMediaPlayEnd; // 0x328(0x10)
	struct FMulticastInlineDelegate OnSubtitlesSync; // 0x338(0x10)
	uint8_t Pad_0x348[0x58]; // 0x348(0x58)
	struct UMaterialInterface* Material; // 0x3A0(0x8)
	struct UBinkMediaSrt* CurSubtitle; // 0x3A8(0x8)
	uint8_t Pad_0x3B0[0x30]; // 0x3B0(0x30)

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.StopMedia
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbdac40
	// Params: [ Num(0) Size(0x0) ]
	void StopMedia();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.SetVolumeFromConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bf370
	// Params: [ Num(0) Size(0x0) ]
	void SetVolumeFromConfig();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.SetVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bf2cc
	// Params: [ Num(1) Size(0x4) ]
	void SetVolume(float InVolume);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.SeekTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bf228
	// Params: [ Num(1) Size(0x4) ]
	void SeekTo(int32_t TargetTime);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bf214
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bf168
	// Params: [ Num(1) Size(0x10) ]
	void Play(struct FString MediaConfigRowName);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bf154
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.OnSubTitleAssetLoaded
	// Flags: [Final|Native|Private]
	// Offset: 0x137bf140
	// Params: [ Num(0) Size(0x0) ]
	void OnSubTitleAssetLoaded();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.OnProcessEnterGameFlowStage
	// Flags: [Final|Native|Public]
	// Offset: 0xf7c617c
	// Params: [ Num(1) Size(0x1) ]
	void OnProcessEnterGameFlowStage(EGameFlowStageType InGameFlowStage);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.OnMediaAudioPlayBegin
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x137bf08c
	// Params: [ Num(1) Size(0x8) ]
	void OnMediaAudioPlayBegin(const struct FName& AudioName);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.OnApplicationDeactivated
	// Flags: [Final|Native|Public]
	// Offset: 0x137bf078
	// Params: [ Num(0) Size(0x0) ]
	void OnApplicationDeactivated();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.OnApplicationActivated
	// Flags: [Final|Native|Public]
	// Offset: 0x137bf064
	// Params: [ Num(0) Size(0x0) ]
	void OnApplicationActivated();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.MediaPlayEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x137bf050
	// Params: [ Num(0) Size(0x0) ]
	void MediaPlayEnd();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.MediaOpened
	// Flags: [Final|Native|Public]
	// Offset: 0x137bef58
	// Params: [ Num(1) Size(0x10) ]
	void MediaOpened(struct FString OpenedUrl);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10afc6f4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bef20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPaused();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.InitDataByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137bee6c
	// Params: [ Num(1) Size(0x8) ]
	void InitDataByName(const struct FName& MediaConfigRowName);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.GetTotalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bee38
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalTime();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.GetCurrentUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137beda0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentUrl();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.GetCurMediaTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137bed6c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurMediaTime();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.DealWithNetworkControl
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x137bec74
	// Params: [ Num(2) Size(0x2) ]
	void DealWithNetworkControl(const ENetworkControlType& NetworkControlType, uint8_t ControlNetworkOrNot);

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.ClearMemory
	// Flags: [Final|Native|Public]
	// Offset: 0x106b62e0
	// Params: [ Num(0) Size(0x0) ]
	void ClearMemory();

	// Object: Function DFMGlobalDefines.DFStreamMediaImage.CheckAudioSync
	// Flags: [Final|Native|Public]
	// Offset: 0x137bec60
	// Params: [ Num(0) Size(0x0) ]
	void CheckAudioSync();
};

// Object: Class DFMGlobalDefines.BagFuncManager
// Size: 0x40 (Inherited: 0x30)
struct UBagFuncManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBagFuncManager, "BagFuncManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.ChestHangingFuncManager
// Size: 0x40 (Inherited: 0x30)
struct UChestHangingFuncManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UChestHangingFuncManager, "ChestHangingFuncManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.SafeBoxFuncManager
// Size: 0x40 (Inherited: 0x30)
struct USafeBoxFuncManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(USafeBoxFuncManager, "SafeBoxFuncManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.FashionListView
// Size: 0x650 (Inherited: 0x610)
struct UFashionListView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UFashionListView, "FashionListView")

	struct UScrollBox* ContentScrollBox; // 0x610(0x8)
	float DragDistance; // 0x618(0x4)
	float ScrollDir; // 0x61C(0x4)
	float CurrentOffset; // 0x620(0x4)
	int32_t Index; // 0x624(0x4)
	uint8_t bSnapping : 1; // 0x628(0x1), Mask(0x1)
	uint8_t BitPad_0x628_1 : 7; // 0x628(0x1)
	uint8_t Pad_0x629[0x3]; // 0x629(0x3)
	int32_t NextIndex; // 0x62C(0x4)
	float offset; // 0x630(0x4)
	float MinScale; // 0x634(0x4)
	float MaxScale; // 0x638(0x4)
	float ScaleRate; // 0x63C(0x4)
	uint8_t bInstantStopScroll : 1; // 0x640(0x1), Mask(0x1)
	uint8_t BitPad_0x640_1 : 7; // 0x640(0x1)
	uint8_t Pad_0x641[0x3]; // 0x641(0x3)
	float ScrollBackSpeed; // 0x644(0x4)
	float ScaleSpeed; // 0x648(0x4)
	uint8_t Pad_0x64C[0x4]; // 0x64C(0x4)

	// Object: Function DFMGlobalDefines.FashionListView.ScrollFashionItemIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137c2be4
	// Params: [ Num(1) Size(0x8) ]
	void ScrollFashionItemIntoView(struct UWidget* WidgetToFind);

	// Object: Function DFMGlobalDefines.FashionListView.OnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x137c2b40
	// Params: [ Num(1) Size(0x4) ]
	void OnInit(int32_t InIndex);

	// Object: Function DFMGlobalDefines.FashionListView.GetOffset
	// Flags: [Final|Native|Public]
	// Offset: 0x137c2b0c
	// Params: [ Num(1) Size(0x4) ]
	float GetOffset();

	// Object: Function DFMGlobalDefines.FashionListView.GetDragDistance
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x137c2af0
	// Params: [ Num(1) Size(0x4) ]
	float GetDragDistance();

	// Object: Function DFMGlobalDefines.FashionListView.DragToSnap
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x137c2a44
	// Params: [ Num(1) Size(0x4) ]
	void DragToSnap(float DeltaTime);

	// Object: Function DFMGlobalDefines.FashionListView.CreateSubSizeBox
	// Flags: [Final|Native|Public]
	// Offset: 0x137c2998
	// Params: [ Num(2) Size(0x10) ]
	struct USizeBox* CreateSubSizeBox(int32_t InWidthOverride);
};

// Object: Class DFMGlobalDefines.GlobalConstWrapper
// Size: 0x1B8 (Inherited: 0x28)
struct UGlobalConstWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGlobalConstWrapper, "GlobalConstWrapper")

	uint8_t Pad_0x28[0x190]; // 0x28(0x190)

	// Object: Function DFMGlobalDefines.GlobalConstWrapper.IsItemOnlyOwnerCanCarryOut
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137c30c0
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsItemOnlyOwnerCanCarryOut(uint64_t ItemID, int32_t ForceType);

	// Object: Function DFMGlobalDefines.GlobalConstWrapper.IsItemIDForbiddenToCarryOut
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137c2fdc
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsItemIDForbiddenToCarryOut(uint64_t ItemID, int32_t ForceType);

	// Object: Function DFMGlobalDefines.GlobalConstWrapper.GetSpecifiedSearchTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137c2f38
	// Params: [ Num(2) Size(0xC) ]
	static float GetSpecifiedSearchTime(uint64_t ItemID);

	// Object: Function DFMGlobalDefines.GlobalConstWrapper.GetArchiveItemIdByExpertId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137c2e94
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t GetArchiveItemIdByExpertId(int64_t ExpertId);

	// Object: Function DFMGlobalDefines.GlobalConstWrapper.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137c2e60
	// Params: [ Num(1) Size(0x8) ]
	static struct UGlobalConstWrapper* Get();
};

// Object: Class DFMGlobalDefines.GlobalDataTableSystemManager
// Size: 0x30 (Inherited: 0x30)
struct UGlobalDataTableSystemManager : UGPSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UGlobalDataTableSystemManager, "GlobalDataTableSystemManager")

	// Object: Function DFMGlobalDefines.GlobalDataTableSystemManager.OnLiteDataTableReset
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xedff4b0
	// Params: [ Num(1) Size(0x8) ]
	void OnLiteDataTableReset(const struct FName& TableName);

	// Object: Function DFMGlobalDefines.GlobalDataTableSystemManager.OnLiteDataTableReady
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xe7a681c
	// Params: [ Num(2) Size(0xC) ]
	void OnLiteDataTableReady(const struct FName& TableName, float Progress);
};

// Object: Class DFMGlobalDefines.CharacterAnimTableManager
// Size: 0x38 (Inherited: 0x30)
struct UCharacterAnimTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCharacterAnimTableManager, "CharacterAnimTableManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class DFMGlobalDefines.HallWeaponAnimSetTableManager
// Size: 0x38 (Inherited: 0x30)
struct UHallWeaponAnimSetTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UHallWeaponAnimSetTableManager, "HallWeaponAnimSetTableManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class DFMGlobalDefines.BreakthroughSpawnAreaAlterScoreListConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UBreakthroughSpawnAreaAlterScoreListConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBreakthroughSpawnAreaAlterScoreListConfigManager, "BreakthroughSpawnAreaAlterScoreListConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.BreakthroughRebornConfigManager
// Size: 0x50 (Inherited: 0x30)
struct UBreakthroughRebornConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBreakthroughRebornConfigManager, "BreakthroughRebornConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TArray<struct UCurveBase*> CurveAssets; // 0x40(0x10)

	// Object: Function DFMGlobalDefines.BreakthroughRebornConfigManager.PreloadCurveData
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x137c32c0
	// Params: [ Num(1) Size(0x338) ]
	void PreloadCurveData(const struct FBreakthroughRebornConfigRow& InRebornConfigRow);

	// Object: Function DFMGlobalDefines.BreakthroughRebornConfigManager.OnCurveDataLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x137c31f0
	// Params: [ Num(1) Size(0x10) ]
	void OnCurveDataLoadComplete(struct TArray<struct FSoftObjectPath> Assets);
};

// Object: Class DFMGlobalDefines.BreakthroughRebornConfigByTagManager
// Size: 0x50 (Inherited: 0x30)
struct UBreakthroughRebornConfigByTagManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBreakthroughRebornConfigByTagManager, "BreakthroughRebornConfigByTagManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TArray<struct UCurveBase*> CurveAssets; // 0x40(0x10)

	// Object: Function DFMGlobalDefines.BreakthroughRebornConfigByTagManager.PreloadCurveData
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x137c3458
	// Params: [ Num(1) Size(0x338) ]
	void PreloadCurveData(const struct FBreakthroughRebornConfigRow& InRebornConfigRow);

	// Object: Function DFMGlobalDefines.BreakthroughRebornConfigByTagManager.OnCurveDataLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x137c3388
	// Params: [ Num(1) Size(0x10) ]
	void OnCurveDataLoadComplete(struct TArray<struct FSoftObjectPath> Assets);
};

// Object: Class DFMGlobalDefines.GPBlueprintUMGHelper
// Size: 0x28 (Inherited: 0x28)
struct UGPBlueprintUMGHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPBlueprintUMGHelper, "GPBlueprintUMGHelper")

	// Object: Function DFMGlobalDefines.GPBlueprintUMGHelper.TruncateText_Font
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137c8c88
	// Params: [ Num(4) Size(0x90) ]
	static struct FText TruncateText_Font(struct FSlateFontInfo Font, struct FText InText, float Width);

	// Object: Function DFMGlobalDefines.GPBlueprintUMGHelper.TruncateText_EditableTextBox
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137c8a24
	// Params: [ Num(4) Size(0x40) ]
	static struct FText TruncateText_EditableTextBox(struct UEditableTextBox* TextBlock, struct FText InText, float Width);
};

// Object: Class DFMGlobalDefines.GuideUtils
// Size: 0x28 (Inherited: 0x28)
struct UGuideUtils : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGuideUtils, "GuideUtils")

	// Object: Function DFMGlobalDefines.GuideUtils.StopGuide
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ceca8
	// Params: [ Num(2) Size(0xC) ]
	static int32_t StopGuide(struct UObject* WorldContextObj);

	// Object: Function DFMGlobalDefines.GuideUtils.StartGuide
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137cebc8
	// Params: [ Num(3) Size(0x10) ]
	static int32_t StartGuide(struct UObject* WorldContextObj, int32_t GuideStageId);

	// Object: Function DFMGlobalDefines.GuideUtils.SetNumberMpGuideIsFinished
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ceaf8
	// Params: [ Num(2) Size(0xC) ]
	static void SetNumberMpGuideIsFinished(struct UObject* WorldContextObj, int32_t bMpFinished);

	// Object: Function DFMGlobalDefines.GuideUtils.SetLootingAiIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137cea28
	// Params: [ Num(2) Size(0xC) ]
	static void SetLootingAiIndex(struct UObject* WorldContextObj, int32_t aiIndex);

	// Object: Function DFMGlobalDefines.GuideUtils.SetGuideStateInGame
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce940
	// Params: [ Num(3) Size(0x10) ]
	static int32_t SetGuideStateInGame(struct UObject* WorldContextObj, uint8_t bGudingInGame);

	// Object: Function DFMGlobalDefines.GuideUtils.SetFinished3CGuideState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce868
	// Params: [ Num(2) Size(0x9) ]
	static void SetFinished3CGuideState(struct UObject* WorldContextObj, uint8_t State);

	// Object: Function DFMGlobalDefines.GuideUtils.SetBoolMpGuideIsFinished
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce790
	// Params: [ Num(2) Size(0x9) ]
	static void SetBoolMpGuideIsFinished(struct UObject* WorldContextObj, uint8_t bMpFinished);

	// Object: Function DFMGlobalDefines.GuideUtils.SendClientCommonEventLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce6c0
	// Params: [ Num(2) Size(0xC) ]
	static void SendClientCommonEventLog(struct UObject* WorldContextObj, int32_t EventId);

	// Object: Function DFMGlobalDefines.GuideUtils.ResetNewPlayerMatchLootGuide
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce62c
	// Params: [ Num(1) Size(0x8) ]
	static void ResetNewPlayerMatchLootGuide(struct UObject* WorldContextObj);

	// Object: Function DFMGlobalDefines.GuideUtils.NtfGuideEnd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce55c
	// Params: [ Num(2) Size(0x9) ]
	static void NtfGuideEnd(struct UObject* WorldContextObj, EGuideStage GuideStageId);

	// Object: Function DFMGlobalDefines.GuideUtils.InitFinished3CGuideState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce4c0
	// Params: [ Num(1) Size(0x1) ]
	static void InitFinished3CGuideState(uint8_t State);

	// Object: Function DFMGlobalDefines.GuideUtils.GetNumberMpGuideIsFinished
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce41c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetNumberMpGuideIsFinished(struct UObject* WorldContextObj);

	// Object: Function DFMGlobalDefines.GuideUtils.GetMpMatchCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce334
	// Params: [ Num(3) Size(0x10) ]
	static int32_t GetMpMatchCount(struct UObject* WorldContextObj, uint8_t bIgnoreQuit);

	// Object: Function DFMGlobalDefines.GuideUtils.GetHasFinished3CGuide
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce290
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetHasFinished3CGuide(struct UObject* WorldContextObj);

	// Object: Function DFMGlobalDefines.GuideUtils.GetBoolMpGuideIsFinished
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce1e8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetBoolMpGuideIsFinished(struct UObject* WorldContextObj);

	// Object: Function DFMGlobalDefines.GuideUtils.ClientSetNotFinishGuideCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10807dc0
	// Params: [ Num(2) Size(0xC) ]
	static void ClientSetNotFinishGuideCount(struct UObject* WorldContextObj, int32_t GuideCount);

	// Object: Function DFMGlobalDefines.GuideUtils.BoardcastOnPopFunctionClosed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce118
	// Params: [ Num(2) Size(0xC) ]
	static void BoardcastOnPopFunctionClosed(struct UObject* WorldContextObj, int32_t GuidePopFunctionDescId);

	// Object: Function DFMGlobalDefines.GuideUtils.BoardcastOnGuideClickUIClosed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x137ce048
	// Params: [ Num(2) Size(0xC) ]
	static void BoardcastOnGuideClickUIClosed(struct UObject* WorldContextObj, int32_t GuideClickId);
};

// Object: Class DFMGlobalDefines.ItemCoreUtil
// Size: 0x28 (Inherited: 0x28)
struct UItemCoreUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UItemCoreUtil, "ItemCoreUtil")

	// Object: Function DFMGlobalDefines.ItemCoreUtil.IsHongBao
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x137d4910
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t IsHongBao(const struct FItemID& ItemID);

	// Object: Function DFMGlobalDefines.ItemCoreUtil.IsGoldNest
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x137d4858
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsGoldNest(const uint64_t& ItemID);
};

// Object: Class DFMGlobalDefines.ItemDetailGMManager
// Size: 0x30 (Inherited: 0x30)
struct UItemDetailGMManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UItemDetailGMManager, "ItemDetailGMManager")
};

// Object: Class DFMGlobalDefines.LineCanvasPanel
// Size: 0x2A0 (Inherited: 0x1D0)
struct ULineCanvasPanel : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(ULineCanvasPanel, "LineCanvasPanel")

	struct TArray<struct FDrawLineData> LinesArray; // 0x1D0(0x10)
	struct FSlateBrush LineBrush; // 0x1E0(0x90)
	ELineOrientation LineOrientation; // 0x270(0x1)
	uint8_t Pad_0x271[0x3]; // 0x271(0x3)
	float LineThickness; // 0x274(0x4)
	uint8_t BUseULine : 1; // 0x278(0x1), Mask(0x1)
	uint8_t BitPad_0x278_1 : 7; // 0x278(0x1)
	uint8_t Pad_0x279[0x3]; // 0x279(0x3)
	struct FLinearColor LineColorAndOpacity; // 0x27C(0x10)
	uint8_t Pad_0x28C[0x4]; // 0x28C(0x4)
	struct TArray<struct UWidget*> ChildrenLines; // 0x290(0x10)

	// Object: Function DFMGlobalDefines.LineCanvasPanel.SetLinesVisibility
	// Flags: [Final|Native|Public]
	// Offset: 0x137d886c
	// Params: [ Num(1) Size(0x1) ]
	void SetLinesVisibility(ESlateVisibility InVisibility);

	// Object: Function DFMGlobalDefines.LineCanvasPanel.DrawLines
	// Flags: [Final|Native|Public]
	// Offset: 0x137d8858
	// Params: [ Num(0) Size(0x0) ]
	void DrawLines();

	// Object: Function DFMGlobalDefines.LineCanvasPanel.ClearLineImage
	// Flags: [Final|Native|Public]
	// Offset: 0x137d8844
	// Params: [ Num(0) Size(0x0) ]
	void ClearLineImage();

	// Object: Function DFMGlobalDefines.LineCanvasPanel.ClearLine
	// Flags: [Final|Native|Public]
	// Offset: 0x137d8830
	// Params: [ Num(0) Size(0x0) ]
	void ClearLine();

	// Object: Function DFMGlobalDefines.LineCanvasPanel.AddLine
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x137d8758
	// Params: [ Num(2) Size(0x10) ]
	void AddLine(struct FVector2D Start, struct FVector2D End);
};

// Object: Class DFMGlobalDefines.MapGlitchEffectManager
// Size: 0x40 (Inherited: 0x30)
struct UMapGlitchEffectManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UMapGlitchEffectManager, "MapGlitchEffectManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.MapEnemySilencerDistanceManager
// Size: 0x40 (Inherited: 0x30)
struct UMapEnemySilencerDistanceManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UMapEnemySilencerDistanceManager, "MapEnemySilencerDistanceManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.MapIconSizeDataManager
// Size: 0x40 (Inherited: 0x30)
struct UMapIconSizeDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UMapIconSizeDataManager, "MapIconSizeDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.MapInfoConfig
// Size: 0x220 (Inherited: 0x28)
struct UMapInfoConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMapInfoConfig, "MapInfoConfig")

	struct FVector WorldCenter; // 0x28(0xC)
	struct FVector WorldExtent; // 0x34(0xC)
	struct TSoftObjectPtr<UTexture> ClipMapBaseMap; // 0x40(0x28)
	struct TSoftObjectPtr<UTexture> ClipMapBaseMap_HD; // 0x68(0x28)
	struct TSoftObjectPtr<UTexture> ClipMapBaseMap_Event; // 0x90(0x28)
	struct TSoftObjectPtr<UTexture> ClipMapBaseMap_Event_HD; // 0xB8(0x28)
	struct TMap<int32_t, struct TSoftObjectPtr<UTexture>> NewbieGameClipMap; // 0xE0(0x50)
	struct TSoftObjectPtr<UTexture> BaseMap; // 0x130(0x28)
	struct TSoftObjectPtr<UTexture> BaseMap_HD; // 0x158(0x28)
	uint8_t bEnableEdgeMask : 1; // 0x180(0x1), Mask(0x1)
	uint8_t BitPad_0x180_1 : 7; // 0x180(0x1)
	uint8_t Pad_0x181[0x7]; // 0x181(0x7)
	struct TSoftObjectPtr<UTexture2D> EdgeMaskMap; // 0x188(0x28)
	float MiniMapScale; // 0x1B0(0x4)
	float MiniMapSceneRotation; // 0x1B4(0x4)
	EMapRotationType RotationType; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x3]; // 0x1B9(0x3)
	struct FVector2D BigMapFocusCenter; // 0x1BC(0x8)
	struct FFloatRange BigMapClipRangeY; // 0x1C4(0x10)
	struct FFloatRange BigMapClipRangeX; // 0x1D4(0x10)
	struct FFloatRange BigMapClipRangeScale; // 0x1E4(0x10)
	uint8_t bNeedSplineArea : 1; // 0x1F4(0x1), Mask(0x1)
	uint8_t BitPad_0x1F4_1 : 7; // 0x1F4(0x1)
	uint8_t Pad_0x1F5[0x3]; // 0x1F5(0x3)
	struct TSoftObjectPtr<UTexture2D> SplineAreaAtlas; // 0x1F8(0x28)

	// Object: Function DFMGlobalDefines.MapInfoConfig.GetMapPath
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x137ddf5c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMapPath();
};

// Object: Class DFMGlobalDefines.MapInfoData
// Size: 0xE8 (Inherited: 0x30)
struct UMapInfoData : UGameInstanceSingletonHelper
{
	DEFINE_UE_CLASS_HELPERS(UMapInfoData, "MapInfoData")

	struct TMap<int32_t, struct FMapBaseInfoData> MapInfoMap; // 0x30(0x50)
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
	struct TArray<struct UMapInfoConfig*> MapInfoConfigArr; // 0x88(0x10)
	struct TMap<struct FString, struct UMapInfoConfig*> MapInfoConfigMap; // 0x98(0x50)

	// Object: Function DFMGlobalDefines.MapInfoData.OnMapInfoConfigLoadedComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x137de264
	// Params: [ Num(1) Size(0x10) ]
	void OnMapInfoConfigLoadedComplete(struct TArray<struct FSoftObjectPath> MapInfoConfigArrToLoad);
};

// Object: Class DFMGlobalDefines.LegendIconManager
// Size: 0x40 (Inherited: 0x30)
struct ULegendIconManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(ULegendIconManager, "LegendIconManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.ArenaLegendIconManager
// Size: 0x40 (Inherited: 0x30)
struct UArenaLegendIconManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UArenaLegendIconManager, "ArenaLegendIconManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.TrialsLegendIconManager
// Size: 0x40 (Inherited: 0x30)
struct UTrialsLegendIconManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UTrialsLegendIconManager, "TrialsLegendIconManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.SeamlessEntryLegendIconManager
// Size: 0x40 (Inherited: 0x30)
struct USeamlessEntryLegendIconManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(USeamlessEntryLegendIconManager, "SeamlessEntryLegendIconManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.TrialsSeamlessEntryLegendIconManager
// Size: 0x40 (Inherited: 0x30)
struct UTrialsSeamlessEntryLegendIconManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UTrialsSeamlessEntryLegendIconManager, "TrialsSeamlessEntryLegendIconManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.POIProductDataManager
// Size: 0x40 (Inherited: 0x30)
struct UPOIProductDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UPOIProductDataManager, "POIProductDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.MaskWidget
// Size: 0x2C8 (Inherited: 0x158)
struct UMaskWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UMaskWidget, "MaskWidget")

	struct FMaskWidgetStyle WidgetStyle; // 0x158(0x138)
	struct FLinearColor BgColorAndOpacity; // 0x290(0x10)
	struct FDelegate BgColorAndOpacityDelegate; // 0x2A0(0x10)
	uint8_t bCanBeInCluster : 1; // 0x2B0(0x1), Mask(0x1)
	uint8_t BitPad_0x2B0_1 : 7; // 0x2B0(0x1)
	uint8_t Pad_0x2B1[0x17]; // 0x2B1(0x17)

	// Object: Function DFMGlobalDefines.MaskWidget.SetMaskSizeXY
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e6860
	// Params: [ Num(3) Size(0xC) ]
	void SetMaskSizeXY(const int32_t& ClipIndex, const float& X, const float& Y);

	// Object: Function DFMGlobalDefines.MaskWidget.SetMaskSize
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x137e6764
	// Params: [ Num(2) Size(0xC) ]
	void SetMaskSize(const int32_t& ClipIndex, const struct FVector2D& size);

	// Object: Function DFMGlobalDefines.MaskWidget.SetMaskPosXY
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e6610
	// Params: [ Num(3) Size(0xC) ]
	void SetMaskPosXY(const int32_t& ClipIndex, const float& X, const float& Y);

	// Object: Function DFMGlobalDefines.MaskWidget.SetMaskPosSizeXYZW
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e641c
	// Params: [ Num(5) Size(0x14) ]
	void SetMaskPosSizeXYZW(const int32_t& ClipIndex, const float& X, const float& Y, const float& Z, const float& W);

	// Object: Function DFMGlobalDefines.MaskWidget.SetMaskPosSize
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x137e6314
	// Params: [ Num(2) Size(0x20) ]
	void SetMaskPosSize(const int32_t& ClipIndex, const struct FVector4& PosSize);

	// Object: Function DFMGlobalDefines.MaskWidget.SetMaskPos
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x137e6218
	// Params: [ Num(2) Size(0xC) ]
	void SetMaskPos(const int32_t& ClipIndex, const struct FVector2D& pos);

	// Object: Function DFMGlobalDefines.MaskWidget.SetMaskImage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e6128
	// Params: [ Num(2) Size(0x10) ]
	void SetMaskImage(const int32_t& ClipIndex, struct UTexture2D* Tex);

	// Object: Function DFMGlobalDefines.MaskWidget.SetBrushTintColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e5f94
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushTintColor(struct FSlateColor TintColor);

	// Object: Function DFMGlobalDefines.MaskWidget.SetBgOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e5ef0
	// Params: [ Num(1) Size(0x4) ]
	void SetBgOpacity(float InOpacity);

	// Object: Function DFMGlobalDefines.MaskWidget.SetBgImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e5e08
	// Params: [ Num(2) Size(0x9) ]
	void SetBgImage(struct UTexture2D* Tex, uint8_t bMatchSize);

	// Object: Function DFMGlobalDefines.MaskWidget.SetBgColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x137e5d64
	// Params: [ Num(1) Size(0x10) ]
	void SetBgColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function DFMGlobalDefines.MaskWidget.RemoveMaskClickClip
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e5ca4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t RemoveMaskClickClip(const int32_t& ClipIndex);

	// Object: Function DFMGlobalDefines.MaskWidget.EnableMaskClickClip
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e5bac
	// Params: [ Num(2) Size(0x5) ]
	void EnableMaskClickClip(const int32_t& ClipIndex, uint8_t Enable);

	// Object: Function DFMGlobalDefines.MaskWidget.AddMaskClickClip
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x137e5a68
	// Params: [ Num(4) Size(0x1C) ]
	int32_t AddMaskClickClip(const struct FVector2D& Position, const struct FVector2D& size, struct UTexture2D* Mask);
};

// Object: Class DFMGlobalDefines.MediaConfigDataManager
// Size: 0x38 (Inherited: 0x30)
struct UMediaConfigDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UMediaConfigDataManager, "MediaConfigDataManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class DFMGlobalDefines.MobileCustomLayoutDataCenter
// Size: 0xE0 (Inherited: 0x28)
struct UMobileCustomLayoutDataCenter : UDFMGameSingletonAttribute
{
	DEFINE_UE_CLASS_HELPERS(UMobileCustomLayoutDataCenter, "MobileCustomLayoutDataCenter")

	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
	struct FString BaseLayout; // 0x78(0x10)
	struct FString VehicleLayout; // 0x88(0x10)
	EVehicleType VehicleType; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FString LayoutNameIncustom; // 0xA0(0x10)
	struct FSoftObjectPath CustomLayoutTablePath; // 0xB0(0x18)
	uint8_t Pad_0xC8[0x18]; // 0xC8(0x18)

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.UpdateVehicleType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e823c
	// Params: [ Num(1) Size(0x1) ]
	void UpdateVehicleType(EVehicleType InType);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.UpdateLayoutNameIncustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e8144
	// Params: [ Num(1) Size(0x10) ]
	void UpdateLayoutNameIncustom(struct FString InName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.SetVehicleLayoutInfoArray
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e7ed0
	// Params: [ Num(5) Size(0x4D) ]
	void SetVehicleLayoutInfoArray(struct FString CustomLayoutName, struct FVehicleCustomLayoutInfo Info, struct FString LayoutName, int32_t InVehicleID, uint8_t bTriggerPreciseMatch);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.SetPrecisePosMatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e7e28
	// Params: [ Num(1) Size(0x1) ]
	void SetPrecisePosMatch(uint8_t bin);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.SetCustomLayoutInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e7b58
	// Params: [ Num(4) Size(0xA1) ]
	void SetCustomLayoutInfo(struct FString CustomLayoutName, struct FCustomLayoutInfo Info, struct FString LayoutName, uint8_t bTriggerPreciseMatch);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.SetCurrentLayoutToDefault
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e7b44
	// Params: [ Num(0) Size(0x0) ]
	void SetCurrentLayoutToDefault();

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.SetCurrentBaseLayout
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfb40450
	// Params: [ Num(1) Size(0x10) ]
	void SetCurrentBaseLayout(struct FString LayoutName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.SerializeLayoutInfoToString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e7984
	// Params: [ Num(3) Size(0x70) ]
	struct FString SerializeLayoutInfoToString(struct FString LayoutName, const struct TMap<struct FString, struct FString>& ExtraData);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.ResetAllLayoutToDefault
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x107e8f14
	// Params: [ Num(0) Size(0x0) ]
	void ResetAllLayoutToDefault();

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.RemoveCustomKeyByName
	// Flags: [Final|Native|Public]
	// Offset: 0x137e7804
	// Params: [ Num(2) Size(0x20) ]
	void RemoveCustomKeyByName(struct FString LayoutName, struct FString BtnName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.OnHudCustomLayoutChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x137e7760
	// Params: [ Num(1) Size(0x8) ]
	void OnHudCustomLayoutChanged(struct FName CustomLayoutName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.OnCustomLayoutTableLoadComplete
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x137e76a0
	// Params: [ Num(1) Size(0x18) ]
	void OnCustomLayoutTableLoadComplete(const struct FSoftObjectPath& TablePath);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.IsPrecisePosMatch
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x137e7684
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPrecisePosMatch();

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.IsCurrentLayoutDiffWithDefault
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e7580
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsCurrentLayoutDiffWithDefault(struct FString CustomLayoutName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.GetVehicleLayoutInfoByNameType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e735c
	// Params: [ Num(5) Size(0x50) ]
	struct FVehicleCustomLayoutInfo GetVehicleLayoutInfoByNameType(struct FString CustomLayoutName, uint8_t bInCustomPanel, struct FString TargetLayoutName, int32_t CustomVehicleId);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.GetDefaultLayoutInfoByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e71b8
	// Params: [ Num(3) Size(0xA0) ]
	struct FCustomLayoutInfo GetDefaultLayoutInfoByName(struct FString LayoutName, struct FString CustomLayoutName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.GetCustomLayoutInfoByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e6fc8
	// Params: [ Num(4) Size(0xA8) ]
	struct FCustomLayoutInfo GetCustomLayoutInfoByName(struct FString CustomLayoutName, uint8_t bInCustomPanel, struct FString TargetLayoutName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.GetCurrentLayoutDefaultLayoutInfoByBane
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e6e24
	// Params: [ Num(3) Size(0xA0) ]
	struct FCustomLayoutInfo GetCurrentLayoutDefaultLayoutInfoByBane(struct FString CustomLayoutName, struct FString LayoutName);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x106f41bc
	// Params: [ Num(1) Size(0x8) ]
	static struct UMobileCustomLayoutDataCenter* Get();

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.DeserializeString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf80f104
	// Params: [ Num(2) Size(0x20) ]
	void DeserializeString(struct FString Key, struct FString Info);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.DeserializeLayoutString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137e6ca4
	// Params: [ Num(2) Size(0x20) ]
	void DeserializeLayoutString(struct FString LayoutName, struct FString LayoutInfoString);

	// Object: Function DFMGlobalDefines.MobileCustomLayoutDataCenter.DeserializeLayoutInfoString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x137e6af4
	// Params: [ Num(3) Size(0xB0) ]
	struct TMap<struct FString, struct FCustomLayoutInfo> DeserializeLayoutInfoString(struct FString LayoutInfoString, struct TMap<struct FString, struct FString>& ExtraData);
};

// Object: Class DFMGlobalDefines.OnSizeChangeImage
// Size: 0x358 (Inherited: 0x340)
struct UOnSizeChangeImage : UDFMCommonImage
{
	DEFINE_UE_CLASS_HELPERS(UOnSizeChangeImage, "OnSizeChangeImage")

	struct FMulticastInlineDelegate OnImageSizeChange; // 0x340(0x10)
	uint8_t Pad_0x350[0x8]; // 0x350(0x8)
};

// Object: Class DFMGlobalDefines.PlatformPaddingBox
// Size: 0x1D0 (Inherited: 0x170)
struct UPlatformPaddingBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UPlatformPaddingBox, "PlatformPaddingBox")

	uint8_t Pad_0x170[0x8]; // 0x170(0x8)
	struct FName PresetHD; // 0x178(0x8)
	struct FName PresetMobile; // 0x180(0x8)
	struct FMargin PaddingHD; // 0x188(0x10)
	struct FMargin PaddingMobile; // 0x198(0x10)
	struct TArray<struct FPlatformPadding> ExtendedPlatformData; // 0x1A8(0x10)
	uint8_t Pad_0x1B8[0x18]; // 0x1B8(0x18)

	// Object: Function DFMGlobalDefines.PlatformPaddingBox.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf91ce34
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function DFMGlobalDefines.PlatformPaddingBox.GetPadding
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x137ed5d8
	// Params: [ Num(1) Size(0x10) ]
	struct FMargin GetPadding();
};

// Object: Class DFMGlobalDefines.PlatformScaleBox
// Size: 0x1B8 (Inherited: 0x170)
struct UPlatformScaleBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UPlatformScaleBox, "PlatformScaleBox")

	uint8_t Pad_0x170[0x8]; // 0x170(0x8)
	EStretch StretchMobile; // 0x178(0x1)
	EStretchDirection StretchDirectionMobile; // 0x179(0x1)
	uint8_t Pad_0x17A[0x2]; // 0x17A(0x2)
	float UserSpecifiedScaleMobile; // 0x17C(0x4)
	uint8_t IgnoreInheritedScaleMobile : 1; // 0x180(0x1), Mask(0x1)
	uint8_t BitPad_0x180_1 : 7; // 0x180(0x1)
	EStretch StretchHD; // 0x181(0x1)
	EStretchDirection StretchDirectionHD; // 0x182(0x1)
	uint8_t Pad_0x183[0x1]; // 0x183(0x1)
	float UserSpecifiedScaleHD; // 0x184(0x4)
	uint8_t IgnoreInheritedScaleHD : 1; // 0x188(0x1), Mask(0x1)
	uint8_t BitPad_0x188_1 : 7; // 0x188(0x1)
	uint8_t Pad_0x189[0x7]; // 0x189(0x7)
	struct TArray<struct FPlatformScale> ExtendedPlatformData; // 0x190(0x10)
	uint8_t Pad_0x1A0[0x18]; // 0x1A0(0x18)

	// Object: Function DFMGlobalDefines.PlatformScaleBox.SetUserSpecifiedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ed900
	// Params: [ Num(1) Size(0x4) ]
	void SetUserSpecifiedScale(float InUserSpecifiedScale);

	// Object: Function DFMGlobalDefines.PlatformScaleBox.SetStretchDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ed85c
	// Params: [ Num(1) Size(0x1) ]
	void SetStretchDirection(EStretchDirection InStretchDirection);

	// Object: Function DFMGlobalDefines.PlatformScaleBox.SetStretch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ed7b8
	// Params: [ Num(1) Size(0x1) ]
	void SetStretch(EStretch InStretch);

	// Object: Function DFMGlobalDefines.PlatformScaleBox.SetIgnoreInheritedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137ed70c
	// Params: [ Num(1) Size(0x1) ]
	void SetIgnoreInheritedScale(uint8_t bInIgnoreInheritedScale);

	// Object: Function DFMGlobalDefines.PlatformScaleBox.GetActiveConfig
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x137ed6d4
	// Params: [ Num(1) Size(0xC) ]
	struct FPlatformScale GetActiveConfig();
};

// Object: Class DFMGlobalDefines.PlatformSizeBox
// Size: 0x1E8 (Inherited: 0x170)
struct UPlatformSizeBox : UContentWidget
{
	DEFINE_UE_CLASS_HELPERS(UPlatformSizeBox, "PlatformSizeBox")

	uint8_t Pad_0x170[0x18]; // 0x170(0x18)
	float WidthOverrideHD; // 0x188(0x4)
	float HeightOverrideHD; // 0x18C(0x4)
	float MinDesiredWidthHD; // 0x190(0x4)
	float MinDesiredHeightHD; // 0x194(0x4)
	float MaxDesiredWidthHD; // 0x198(0x4)
	float MaxDesiredHeightHD; // 0x19C(0x4)
	float MinAspectRatioHD; // 0x1A0(0x4)
	float MaxAspectRatioHD; // 0x1A4(0x4)
	float WidthOverrideMobile; // 0x1A8(0x4)
	float HeightOverrideMobile; // 0x1AC(0x4)
	float MinDesiredWidthMobile; // 0x1B0(0x4)
	float MinDesiredHeightMobile; // 0x1B4(0x4)
	float MaxDesiredWidthMobile; // 0x1B8(0x4)
	float MaxDesiredHeightMobile; // 0x1BC(0x4)
	float MinAspectRatioMobile; // 0x1C0(0x4)
	float MaxAspectRatioMobile; // 0x1C4(0x4)
	uint8_t bOverride_WidthOverrideHD : 1; // 0x1C8(0x1), Mask(0x1)
	uint8_t bOverride_HeightOverrideHD : 1; // 0x1C8(0x1), Mask(0x2)
	uint8_t bOverride_MinDesiredWidthHD : 1; // 0x1C8(0x1), Mask(0x4)
	uint8_t bOverride_MinDesiredHeightHD : 1; // 0x1C8(0x1), Mask(0x8)
	uint8_t bOverride_MaxDesiredWidthHD : 1; // 0x1C8(0x1), Mask(0x10)
	uint8_t bOverride_MaxDesiredHeightHD : 1; // 0x1C8(0x1), Mask(0x20)
	uint8_t bOverride_MinAspectRatioHD : 1; // 0x1C8(0x1), Mask(0x40)
	uint8_t bOverride_MaxAspectRatioHD : 1; // 0x1C8(0x1), Mask(0x80)
	uint8_t bOverride_WidthOverrideMobile : 1; // 0x1C9(0x1), Mask(0x1)
	uint8_t bOverride_HeightOverrideMobile : 1; // 0x1C9(0x1), Mask(0x2)
	uint8_t bOverride_MinDesiredWidthMobile : 1; // 0x1C9(0x1), Mask(0x4)
	uint8_t bOverride_MinDesiredHeightMobile : 1; // 0x1C9(0x1), Mask(0x8)
	uint8_t bOverride_MaxDesiredWidthMobile : 1; // 0x1C9(0x1), Mask(0x10)
	uint8_t bOverride_MaxDesiredHeightMobile : 1; // 0x1C9(0x1), Mask(0x20)
	uint8_t bOverride_MinAspectRatioMobile : 1; // 0x1C9(0x1), Mask(0x40)
	uint8_t bOverride_MaxAspectRatioMobile : 1; // 0x1C9(0x1), Mask(0x80)
	uint8_t Pad_0x1CA[0x6]; // 0x1CA(0x6)
	struct TArray<struct FPlatformSize> ExtendedPlatformData; // 0x1D0(0x10)
	uint8_t Pad_0x1E0[0x8]; // 0x1E0(0x8)

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf756204
	// Params: [ Num(1) Size(0x4) ]
	void SetWidthOverride(float InWidthOverride);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbd5ec8
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbd5bc0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredHeight(float InMinDesiredHeight);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edcbc
	// Params: [ Num(1) Size(0x4) ]
	void SetMinAspectRatio(float InMinAspectRatio);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbd58b8
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredWidth(float InMaxDesiredWidth);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbd55b0
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredHeight(float InMaxDesiredHeight);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edc18
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxAspectRatio(float InMaxAspectRatio);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.SetHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf755efc
	// Params: [ Num(1) Size(0x4) ]
	void SetHeightOverride(float InHeightOverride);

	// Object: Function DFMGlobalDefines.PlatformSizeBox.GetActiveConfig
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x137edbac
	// Params: [ Num(1) Size(0x28) ]
	struct FPlatformSize GetActiveConfig();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb98
	// Params: [ Num(0) Size(0x0) ]
	void ClearWidthOverride();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb84
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredWidth();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb70
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredHeight();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb5c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinAspectRatio();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb48
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredWidth();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb34
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredHeight();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb20
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxAspectRatio();

	// Object: Function DFMGlobalDefines.PlatformSizeBox.ClearHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x137edb0c
	// Params: [ Num(0) Size(0x0) ]
	void ClearHeightOverride();
};

// Object: Class DFMGlobalDefines.PlatformWidgetSettings
// Size: 0x78 (Inherited: 0x28)
struct UPlatformWidgetSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPlatformWidgetSettings, "PlatformWidgetSettings")

	struct TMap<struct FName, struct FMargin> PaddingBoxPresets; // 0x28(0x50)

	// Object: Function DFMGlobalDefines.PlatformWidgetSettings.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x137f27d8
	// Params: [ Num(1) Size(0x8) ]
	static struct UPlatformWidgetSettings* Get();
};

// Object: Class DFMGlobalDefines.PropSlotConfigManager
// Size: 0x90 (Inherited: 0x30)
struct UPropSlotConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UPropSlotConfigManager, "PropSlotConfigManager")

	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: Class DFMGlobalDefines.UnCarryPropWrapper
// Size: 0x40 (Inherited: 0x28)
struct UUnCarryPropWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUnCarryPropWrapper, "UnCarryPropWrapper")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class DFMGlobalDefines.BattleFieldCommanderRankSkillTableManager
// Size: 0x50 (Inherited: 0x30)
struct UBattleFieldCommanderRankSkillTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldCommanderRankSkillTableManager, "BattleFieldCommanderRankSkillTableManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TArray<struct UCurveFloat*> CurveAssets; // 0x40(0x10)
};

// Object: Class DFMGlobalDefines.BattleFieldFreeBuildRankSkillTableManager
// Size: 0x50 (Inherited: 0x30)
struct UBattleFieldFreeBuildRankSkillTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldFreeBuildRankSkillTableManager, "BattleFieldFreeBuildRankSkillTableManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TArray<struct UCurveFloat*> CurveAssets; // 0x40(0x10)
};

// Object: Class DFMGlobalDefines.ScrollCanvasPanel
// Size: 0x208 (Inherited: 0x1D0)
struct UScrollCanvasPanel : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(UScrollCanvasPanel, "ScrollCanvasPanel")

	struct FMulticastInlineDelegate OnCanvasScolled; // 0x1D0(0x10)
	struct FMulticastInlineDelegate OnCanvasScollEnded; // 0x1E0(0x10)
	uint8_t bAllowDragScrolling : 1; // 0x1F0(0x1), Mask(0x1)
	uint8_t BitPad_0x1F0_1 : 7; // 0x1F0(0x1)
	uint8_t bAllowOverscroll : 1; // 0x1F1(0x1), Mask(0x1)
	uint8_t BitPad_0x1F1_1 : 7; // 0x1F1(0x1)
	uint8_t Pad_0x1F2[0x2]; // 0x1F2(0x2)
	float OverrideDragTriggerDistance; // 0x1F4(0x4)
	uint8_t Pad_0x1F8[0x10]; // 0x1F8(0x10)
};

// Object: Class DFMGlobalDefines.SkillConfigUtils
// Size: 0x28 (Inherited: 0x28)
struct USkillConfigUtils : UObject
{
	DEFINE_UE_CLASS_HELPERS(USkillConfigUtils, "SkillConfigUtils")

	// Object: Function DFMGlobalDefines.SkillConfigUtils.GetSkillConfigDataRowBySkillID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13808d60
	// Params: [ Num(2) Size(0xA8) ]
	static struct FSkillConfig GetSkillConfigDataRowBySkillID(int32_t Support_Skill_ID);
};

// Object: Class DFMGlobalDefines.SkillSkinResourceManager
// Size: 0x40 (Inherited: 0x30)
struct USkillSkinResourceManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(USkillSkinResourceManager, "SkillSkinResourceManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.SOLDecalDataManager
// Size: 0x40 (Inherited: 0x30)
struct USOLDecalDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(USOLDecalDataManager, "SOLDecalDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.SOLDecalConfig
// Size: 0x28 (Inherited: 0x28)
struct USOLDecalConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(USOLDecalConfig, "SOLDecalConfig")

	// Object: Function DFMGlobalDefines.SOLDecalConfig.GetIconPathByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13808fe0
	// Params: [ Num(2) Size(0x20) ]
	static struct FSoftObjectPath GetIconPathByType(struct FName DecalID);
};

// Object: Class DFMGlobalDefines.SOLMapLoadingSettings
// Size: 0x28 (Inherited: 0x28)
struct USOLMapLoadingSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(USOLMapLoadingSettings, "SOLMapLoadingSettings")
};

// Object: Class DFMGlobalDefines.SOLMapLoadingHelper
// Size: 0x28 (Inherited: 0x28)
struct USOLMapLoadingHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USOLMapLoadingHelper, "SOLMapLoadingHelper")

	// Object: Function DFMGlobalDefines.SOLMapLoadingHelper.GetEnableSOLMapEntryLoading
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138092f8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetEnableSOLMapEntryLoading(struct UObject* WorldContextObject);
};

// Object: Class DFMGlobalDefines.SOLUIColorDataManager
// Size: 0x40 (Inherited: 0x30)
struct USOLUIColorDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(USOLUIColorDataManager, "SOLUIColorDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.SOLUIIconDataManager
// Size: 0x40 (Inherited: 0x30)
struct USOLUIIconDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(USOLUIIconDataManager, "SOLUIIconDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.SOLUIConfig
// Size: 0x28 (Inherited: 0x28)
struct USOLUIConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(USOLUIConfig, "SOLUIConfig")

	// Object: Function DFMGlobalDefines.SOLUIConfig.GetIconTypeByContractID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1380f0e0
	// Params: [ Num(2) Size(0x5) ]
	static ESOLUIIconType GetIconTypeByContractID(int32_t InContractID);

	// Object: Function DFMGlobalDefines.SOLUIConfig.GetIconPathByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1380f024
	// Params: [ Num(2) Size(0x20) ]
	static struct FSoftObjectPath GetIconPathByType(ESOLUIIconType InIconType);

	// Object: Function DFMGlobalDefines.SOLUIConfig.GetColorByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1380ef7c
	// Params: [ Num(2) Size(0x14) ]
	static struct FLinearColor GetColorByType(ESOLUIColorType InColorType);

	// Object: Function DFMGlobalDefines.SOLUIConfig.ConvertQuestMarkerTypeToIcon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1380eed8
	// Params: [ Num(2) Size(0x2) ]
	static ESOLUIIconType ConvertQuestMarkerTypeToIcon(EGPQuestActionMarkerType InMarkerType);
};

// Object: Class DFMGlobalDefines.SphericalHarmonicsUtils
// Size: 0x28 (Inherited: 0x28)
struct USphericalHarmonicsUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USphericalHarmonicsUtils, "SphericalHarmonicsUtils")

	// Object: Function DFMGlobalDefines.SphericalHarmonicsUtils.GetShFromIblCubemap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1380f18c
	// Params: [ Num(2) Size(0x78) ]
	static struct FSHresult GetShFromIblCubemap(struct UTextureRenderTargetCube* UCubemap);
};

// Object: Class DFMGlobalDefines.SquadConfigManager
// Size: 0x40 (Inherited: 0x30)
struct USquadConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(USquadConfigManager, "SquadConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)

	// Object: Function DFMGlobalDefines.SquadConfigManager.HasTeamConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x1380f598
	// Params: [ Num(4) Size(0x11) ]
	uint8_t HasTeamConfig(struct FName InSquadConfigTagName, int32_t InCampId, int32_t InTeamId);

	// Object: Function DFMGlobalDefines.SquadConfigManager.HasSquadConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x1380f4e8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasSquadConfig(struct FName InSquadConfigTagName);

	// Object: Function DFMGlobalDefines.SquadConfigManager.GetSquadTeamConfig
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1380f358
	// Params: [ Num(5) Size(0x39) ]
	uint8_t GetSquadTeamConfig(struct FName InSquadConfigTagName, int32_t InCampId, int32_t InTeamId, struct FSquadTeamConfig& OutTeamConfig);

	// Object: Function DFMGlobalDefines.SquadConfigManager.GetSquadConfigRow
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1380f248
	// Params: [ Num(2) Size(0x28) ]
	void GetSquadConfigRow(struct FName InSquadConfigTagName, struct FSquadConfigRow& OutConfig);
};

// Object: Class DFMGlobalDefines.TeammateUIManager
// Size: 0x40 (Inherited: 0x30)
struct UTeammateUIManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UTeammateUIManager, "TeammateUIManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMGlobalDefines.TeammateConfig
// Size: 0x28 (Inherited: 0x28)
struct UTeammateConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTeammateConfig, "TeammateConfig")

	// Object: Function DFMGlobalDefines.TeammateConfig.GetTeammateUIConfigRow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1381429c
	// Params: [ Num(2) Size(0x208) ]
	static struct FTeammateUIConfigRow GetTeammateUIConfigRow(EDFMGamePlayMode InDFMGamePlayMode);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetTeammateStateIconByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1381417c
	// Params: [ Num(3) Size(0x20) ]
	static struct FSoftObjectPath GetTeammateStateIconByType(EDFMGamePlayMode InDFMGamePlayMode, ETeammateState InTeammateState);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetTeammateProgressBarColorByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13814098
	// Params: [ Num(3) Size(0x14) ]
	static struct FLinearColor GetTeammateProgressBarColorByType(EDFMGamePlayMode InDFMGamePlayMode, ETeammateState InTeammateState);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetTeammateMaskColorByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13813fb4
	// Params: [ Num(3) Size(0x14) ]
	static struct FLinearColor GetTeammateMaskColorByType(EDFMGamePlayMode InDFMGamePlayMode, ETeammateState InTeammateState);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetPlayerRelationShipColorByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13813ed0
	// Params: [ Num(3) Size(0x14) ]
	static struct FLinearColor GetPlayerRelationShipColorByType(EDFMGamePlayMode InDFMGamePlayMode, EPlayerRelationShipType InPlayerRelationShipType);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetPlayerIndexIconByIndex
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13813db0
	// Params: [ Num(3) Size(0x20) ]
	static struct FSoftObjectPath GetPlayerIndexIconByIndex(EDFMGamePlayMode InDFMGamePlayMode, int32_t InPlayerIndex);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetPlayerGamePlayStateIconByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13813c90
	// Params: [ Num(3) Size(0x20) ]
	static struct FSoftObjectPath GetPlayerGamePlayStateIconByType(EDFMGamePlayMode InDFMGamePlayMode, int32_t InPlayerGamePlayState);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetHeroAvatarIconByHeroId
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x13813b2c
	// Params: [ Num(4) Size(0x30) ]
	static struct FSoftObjectPath GetHeroAvatarIconByHeroId(EDFMGamePlayMode InDFMGamePlayMode, uint64_t InHeroId, uint8_t InIsMobile);

	// Object: Function DFMGlobalDefines.TeammateConfig.GetArmedForceIconByType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13813a0c
	// Params: [ Num(3) Size(0x20) ]
	static struct FSoftObjectPath GetArmedForceIconByType(EDFMGamePlayMode InDFMGamePlayMode, EInGameBattleClassType InGameBattleClassType);
};

// Object: Class DFMGlobalDefines.TreasurePackItemConfigWrapper
// Size: 0x80 (Inherited: 0x28)
struct UTreasurePackItemConfigWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTreasurePackItemConfigWrapper, "TreasurePackItemConfigWrapper")

	uint8_t Pad_0x28[0x58]; // 0x28(0x58)

	// Object: Function DFMGlobalDefines.TreasurePackItemConfigWrapper.IsTreasurePackItem
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13819b94
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsTreasurePackItem(uint64_t ItemID);
};

// Object: Class DFMGlobalDefines.VehicleUnlockDataConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleUnlockDataConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UVehicleUnlockDataConfigManager, "VehicleUnlockDataConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)

	// Object: Function DFMGlobalDefines.VehicleUnlockDataConfigManager.GetVehicleIDByVehicleItemID
	// Flags: [Final|Native|Public]
	// Offset: 0x1381f1f0
	// Params: [ Num(2) Size(0x10) ]
	uint64_t GetVehicleIDByVehicleItemID(uint64_t VehicleItemID);
};

// Object: Class DFMGlobalDefines.VehicleModificationRulesDataConfigManager
// Size: 0x90 (Inherited: 0x30)
struct UVehicleModificationRulesDataConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UVehicleModificationRulesDataConfigManager, "VehicleModificationRulesDataConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TMap<uint64_t, struct FVehicleModificationRulesDataConfigList> ID2ListMap; // 0x40(0x50)

	// Object: Function DFMGlobalDefines.VehicleModificationRulesDataConfigManager.GetList
	// Flags: [Final|Native|Public]
	// Offset: 0x1381f2a4
	// Params: [ Num(2) Size(0x20) ]
	struct FVehicleModificationRulesDataConfigList GetList(uint64_t BaseID);
};

// Object: Class DFMGlobalDefines.VehicleSocketNameRowManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleSocketNameRowManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UVehicleSocketNameRowManager, "VehicleSocketNameRowManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)

	// Object: Function DFMGlobalDefines.VehicleSocketNameRowManager.GetSocketGUIDBySocketName
	// Flags: [Final|Native|Public]
	// Offset: 0x1381f3ac
	// Params: [ Num(2) Size(0x10) ]
	uint64_t GetSocketGUIDBySocketName(struct FName SocketName);
};

// Object: Class DFMGlobalDefines.VehicleFrontendTransformRowManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleFrontendTransformRowManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendTransformRowManager, "VehicleFrontendTransformRowManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)

	// Object: Function DFMGlobalDefines.VehicleFrontendTransformRowManager.GetVehicleFrontendTransform
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x1381f460
	// Params: [ Num(3) Size(0x40) ]
	struct FTransform GetVehicleFrontendTransform(uint64_t ID, uint64_t VehicleItemID);
};

// Object: Class DFMGlobalDefines.VehicleSkinDataConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleSkinDataConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UVehicleSkinDataConfigManager, "VehicleSkinDataConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)

	// Object: Function DFMGlobalDefines.VehicleSkinDataConfigManager.GetVehicleDefaultSkinAppearanceIDByVehicleSkinID
	// Flags: [Final|Native|Public]
	// Offset: 0x1381f55c
	// Params: [ Num(2) Size(0x10) ]
	uint64_t GetVehicleDefaultSkinAppearanceIDByVehicleSkinID(uint64_t VehicleSkinID);
};

} // namespace SDK
