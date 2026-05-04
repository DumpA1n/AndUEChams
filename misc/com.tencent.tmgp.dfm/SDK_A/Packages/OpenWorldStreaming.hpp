#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFImGuiFramework.hpp"
#include "Engine.hpp"
#include "OpenWorldRuntime.hpp"

namespace SDK
{

// Package: OpenWorldStreaming
// Enums: 7
// Structs: 66
// Classes: 363

struct AActor;
struct FPhysXSerialBodyInstance;
struct UBillboardComponent;
struct UBoxComponent;
struct UDataTable;
struct UDecalComponent;
struct UFoliageType;
struct UHierarchicalInstancedStaticMeshComponent;
struct ULandscapeLayerInfoObject;
struct ULevel;
struct UMaterialInstanceDynamic;
struct UPhysXSerialComponent;
struct UPhysicalMaterial;
struct UPrimitiveComponent;
struct USceneComponent;
struct USplineComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture2D;
struct UWorld;
struct UWorldComposition;
struct FOpenWorldFoliageTypeRawData;
struct FDSMapAreaSettings;
struct FEditorLevelLoadMethod;
struct FEditorLevelFolderInfo;
struct FEditorLevelInfo;
struct FMapGridKeyInfo;
struct FGamePlayAreaIndexInfo;
struct FGridMeshInstances;
struct FGamePlayAreaInfo;
struct FGamePlayMeshInstanceInfo;
struct FGamePlayAreaBuildConfig;
struct FGamePlayAreaTypeInfo;
struct FCacheHISMGroupDataInfo;
struct FCacheHISMDataInfo;
struct FLandscapeOcclusionMaskData;
struct FLandscapeBlockSimpleCollision;
struct FOnlySimpleCollisionParams;
struct FCompositedCollisionParams;
struct FLandscapeSimpleCollisionSection;
struct FCollisionDataAssetPaths;
struct FOpenWorldStreamingCollection;
struct FOpenWorldStreamingZoom;
struct FOpenWorldStreamingContext;
struct FStagedConsoleVariable;
struct FStagedConsoleCommands;
struct FOpenWorldStreamingLayerDesc;
struct FOpenWorldFoliageTypeScalabilityRowBase;
struct FOpenWorldFoliageScalabilityRowBase;
struct FLocalFallbackConfig;
struct FStreamingSection;
struct FStreamingStreamingLayerConfigItem;
struct FStreamingCommandConfigItem;
struct FStreamingCVarConfigItem;
struct FStreamingGuiCommandConfigRow;
struct FStreamingGuiCVarConfigRow;
struct FStreamingCVarConfigRow;
struct FGameModeProfileMetricSettings;
struct FGameModeProfileMetricRowBase;
struct FOpenWorldProfileCustomSamplePos;
struct FOpenWorldExecCmdInfo;
struct FOpenWorldProfileArea;
struct FStreamingLevelOctData;
struct FOpenWorldStreamingLODDistance;
struct FSourceInstance;
struct FBoundedAssetPath;
struct FStreamingLayerDesc;
struct FLayerParamsGroup;
struct FStreamingLayerSwitch;
struct FStreamingConfigOverride;
struct FStreamingConfigOverrideValues;
struct FCustomDisableLayerSetting;
struct FStreamingLevelInfo;
struct FSpecialStreamingUpdateDistGroup;
struct FMapBroadphaseSettings;
struct FOpenWorldStreamingStageSetting;
struct FOpenWorldStreamingStageLayerSetting;
struct FUnbuiltGroupsForScene;
struct FMapGameplayArea;
struct FCookLayerExpand;
struct FMapRedirection;
struct FMapReference;
struct FMapPreview;
struct FWorldTileFilter;
struct FWorldTileDirectory;
struct FWorldTileFolder;
struct FWorldTileFolderExtra;
struct AAssetsStreamer;
struct UOpenWorldComposition;
struct UCustomWorldComposition;
struct UEditorRuntimeConfig;
struct AFoliageHISMActor;
struct AFoliageMaskActor;
struct AFreezeRebasingVolume;
struct UFreezeRebasingManager;
struct UGamePlayAreaBuildConfigGroup;
struct UGamePlayAreaRuntimeConfig;
struct AGamePlayValidAreaActor;
struct AOpenWorldProfileAreaActor;
struct AOpenWorldProfileMaskAreaActor;
struct AOpenWorldPSOProfileAreaActor;
struct UOpenWorldSceneProfileSplineChildComponent;
struct AOpenWorldProfileAreaHydrantActor;
struct AGeneralLevelVolume;
struct AGrassMapActor;
struct AHISMMergeActor;
struct ULandscapeCollisionAsset;
struct ALandscapeCollisionAssetsStreamer;
struct ULandscapeFoliageHierarchicalInstancedComponent;
struct ALandscapeSimpleCollisionActor;
struct ULandscapeSimpleCollisionComponent;
struct ULandscapeSimpleCollisionData;
struct ULandscapeSimpleCollisionAsset;
struct ULandscapeSimpleCollisionRootComponent;
struct ALandscapeSimpleCollisionManager;
struct ALandscapeSimplePhysicsActor;
struct AOpenWorldBuiltActor;
struct UOpenWorldTreeMeshComponent;
struct UOpenWorldBushMeshComponent;
struct UOpenWorldGrassMeshComponent;
struct UOpenWorldSmallStoneMeshComponent;
struct UOpenWorldMiddleStoneMeshComponent;
struct UOpenWorldDecorationMeshComponent;
struct UOpenWorldFoliageScalabilityConfig;
struct AOpenWorldImGuiPanel;
struct UOpenWorldProfilerCustomSampleConfig;
struct UOpenWorldProfilerConfig;
struct UOpenWorldProfileMetricsSettings;
struct UOpenWorldStreamingBlueprintTools;
struct ULandscapeMeshFuncLib;
struct UOpenWorldStreamingLevel;
struct UOpenWorldStreamingLayer;
struct UOpenWorldStreamingLayerDistance;
struct UOpenWorldStreamingLayerAsset;
struct UOpenWorldStreamingLayerDistance3D;
struct AOpenWorldUnifiedActor;
struct AOpenWorldUnifiedStaticMeshActor;
struct AOpenWorldUnifiedDecalActor;
struct ARoomVolume;
struct ARoomInsideVolume;
struct ARoomOutsideVolume;
struct ARoomPortalVolume;
struct AStreamingLerpSpline;
struct AStreamingLerpVolume;
struct APartitionZVolume;
struct USimpleProfilerBlueprintTools;
struct UStreamingLayer;
struct UStreamingLayerAssets;
struct UStreamingLayerBatchAssets;
struct UStreamingLayerDistance;
struct UStreamingLayerHLOD;
struct UStreamingLayerVolume;
struct ASVTRenderAreaActor;
struct UOpenWorldStreamingSettings;
struct UOpenWorldPIESettings;
struct UCookedTileSettings;
struct UOpenWorldTileSettings;
struct UOpenWorldFilterSettings;
struct UOpenWorldFoliageScalabilityConfig_IceLand;
struct UOpenWorldFoliageScalabilityConfig_Iceland_Breakthrough;
struct UOpenWorldFoliageScalabilityConfig_Iceland_SceneProfile;
struct UOpenWorldFoliageScalabilityConfig_Cracked_SceneProfile;
struct UOpenWorldFoliageScalabilityConfig_Cracked;
struct UOpenWorldFoliageScalabilityConfig_Retrowar;
struct UOpenWorldFoliageScalabilityConfig_Retrowar_Conquest;
struct UOpenWorldFoliageScalabilityConfig_Retrowar_SceneProfile;
struct UOpenWorldFoliageScalabilityConfig_Crest;
struct UOpenWorldFoliageScalabilityConfig_Derail;
struct UOpenWorldFoliageScalabilityConfig_Monument;
struct UOpenWorldFoliageScalabilityConfig_Fault;
struct UOpenWorldFoliageScalabilityConfig_NavalBattle;
struct UOpenWorldFoliageScalabilityConfig_Tide;
struct UOpenWorldFoliageScalabilityConfig_SpaceCenter_Ma1;
struct UOpenWorldStreamingSettings_Cracked;
struct UOpenWorldStreamingSettings_Iceland_Breakthrough;
struct UOpenWorldStreamingSettings_Iceland_Tower;
struct UOpenWorldStreamingSettings_Iceland_BigEvent;
struct UOpenWorldStreamingSettings_Forrest_Long3;
struct UOpenWorldStreamingSettings_Forrest_WithFire;
struct UOpenWorldStreamingSettings_Forrest_WithoutFire;
struct UOpenWorldStreamingSettings_IceLand;
struct UOpenWorldStreamingSettings_Gibraltar;
struct UOpenWorldStreamingSettings_Gibraltar_WareHouse;
struct UOpenWorldStreamingSettings_Gibraltar_BigEvent;
struct UOpenWorldStreamingSettings_Shafted;
struct UOpenWorldStreamingSettings_Derail;
struct UOpenWorldStreamingSettings_Retrowar;
struct UOpenWorldStreamingSettings_SpaceCenter_Ma1;
struct UOpenWorldStreamingSettings_Dam_Iris_Long3;
struct UOpenWorldStreamingSettings_Dam_Iris_Underground;
struct UOpenWorldStreamingSettings_Brakkesh_Long3;
struct UOpenWorldStreamingSettings_OldCity_Long3;
struct UOpenWorldStreamingSettings_Crest;
struct UOpenWorldStreamingSettings_Tide;
struct UOpenWorldStreamingSettings_NavalBattle;
struct UOpenWorldStreamingSettings_Fault;
struct UOpenWorldStreamingSettings_Collapse;
struct UOpenWorldStreamingSettings_Collapse_CBD;
struct UOpenWorldStreamingSettings_Collapse_BigEvent;
struct UOpenWorldStreamingSettings_Collapse_GasStation;
struct UOpenWorldStreamingSettings_Collapse_GasStation_Station;
struct UOpenWorldStreamingSettings_Collapse_GasStation_Foliage;
struct UOpenWorldStreamingSettings_Collapse_SmallEvent;
struct UOpenWorldStreamingSettings_Monument;
struct UOpenWorldStreamingSettings_Suez;
struct UOpenWorldStreamingSettings_Suez_BigEvent;
struct UOpenWorldStreamingSettings_Suez_Warehouse;
struct UOpenWorldStreamingSettings_Suez_Base;
struct UOpenWorldStreamingSettings_Suez_Tower;
struct UCookedTileSettings_Brakkesh_Level1;
struct UCookedTileSettings_Brakkesh_Level2;
struct UCookedTileSettings_Brakkesh_Level21;
struct UCookedTileSettings_Brakkesh_Level22;
struct UCookedTileSettings_Brakkesh_Level23;
struct UCookedTileSettings_Brakkesh_Level3;
struct UCookedTileSettings_Brakkesh_Level51;
struct UCookedTileSettings_Brakkesh_Long3;
struct UCookedTileSettings_Collapse_BigEvent;
struct UCookedTileSettings_Collapse_Breakthrough;
struct UCookedTileSettings_Collapse_CBD;
struct UCookedTileSettings_Collapse_CBD_Back;
struct UCookedTileSettings_Collapse_CBD_Front;
struct UCookedTileSettings_Collapse_Conquest;
struct UCookedTileSettings_Collapse_GasStation;
struct UCookedTileSettings_Collapse_GasStation_Foliage;
struct UCookedTileSettings_Collapse_HardPoint;
struct UCookedTileSettings_Collapse_Siege;
struct UCookedTileSettings_Collapse_SmallEvent;
struct UCookedTileSettings_Collapse_SteelTorrent;
struct UCookedTileSettings_Collapse_TacticalConquest;
struct UCookedTileSettings_Collapse_TacticalConquestB;
struct UCookedTileSettings_CollectionRoom;
struct UCookedTileSettings_Colosseum;
struct UCookedTileSettings_Colosseum_BreakThrough;
struct UCookedTileSettings_OldCity;
struct UCookedTileSettings_OldCity_Level1;
struct UCookedTileSettings_OldCity_Level2;
struct UCookedTileSettings_OldCity_Level3;
struct UCookedTileSettings_Cracked_Breakthrough;
struct UCookedTileSettings_Cracked_CaptureTheFlag;
struct UCookedTileSettings_Cracked_Conquest;
struct UCookedTileSettings_Cracked_FlagWar;
struct UCookedTileSettings_Cracked_HardPoint;
struct UCookedTileSettings_Cracked_Siege;
struct UCookedTileSettings_Cracked_SteelTorrent;
struct UCookedTileSettings_Cracked_TacticalConquest;
struct UCookedTileSettings_Cracked_TacticalConquestB;
struct UCookedTileSettings_Cracked_Warehouse;
struct UCookedTileSettings_Crest_Breakthrough;
struct UCookedTileSettings_Crest_Conquest;
struct UCookedTileSettings_Crest_In;
struct UCookedTileSettings_Crest_TacticalConquest;
struct UCookedTileSettings_Dam_Iris_WithEvent;
struct UCookedTileSettings_Dam_Iris_WithoutEvent;
struct UCookedTileSettings_Dam_Iris_Level1;
struct UCookedTileSettings_Dam_Iris_Level11;
struct UCookedTileSettings_Dam_Iris_Level12;
struct UCookedTileSettings_Dam_Iris_Level2;
struct UCookedTileSettings_Dam_Iris_Level21;
struct UCookedTileSettings_Dam_Iris_Level22;
struct UCookedTileSettings_Dam_Iris_Level23;
struct UCookedTileSettings_Dam_Iris_Level31;
struct UCookedTileSettings_Dam_Iris_Level32;
struct UCookedTileSettings_Dam_Iris_Level33;
struct UCookedTileSettings_Dam_Iris_Level42;
struct UCookedTileSettings_Dam_Iris_Level51;
struct UCookedTileSettings_Dam_Iris_Long3;
struct UCookedTileSettings_Dam_Iris_Underground;
struct UCookedTileSettings_Derail_Breakthrough;
struct UCookedTileSettings_Derail_Conquest;
struct UCookedTileSettings_Derail_ConquestMode2;
struct UCookedTileSettings_Derail_SteelTorrent;
struct UCookedTileSettings_Derail_TacticalConquest;
struct UCookedTileSettings_Derail_TacticalConquestB;
struct UCookedTileSettings_EffectsTestMap;
struct UCookedTileSettings_EffectsTestMap_Destructable;
struct UCookedTileSettings_EffectsTestMap_Empty;
struct UCookedTileSettings_EffectsTestMap_VFX;
struct UCookedTileSettings_Fault;
struct UCookedTileSettings_Fault_Breakthrough;
struct UCookedTileSettings_Fault_Conquest;
struct UCookedTileSettings_Fault_FlagWar;
struct UCookedTileSettings_Fault_HardPoint;
struct UCookedTileSettings_Fault_TacticalConquestB;
struct UCookedTileSettings_Forrest_WithAirCrash;
struct UCookedTileSettings_Forrest_WithFire;
struct UCookedTileSettings_Forrest_WithoutAirCrash;
struct UCookedTileSettings_Forrest_WithoutFire;
struct UCookedTileSettings_Forrest_Level1;
struct UCookedTileSettings_Forrest_Level11;
struct UCookedTileSettings_Forrest_Level12;
struct UCookedTileSettings_Forrest_Level2;
struct UCookedTileSettings_Forrest_Level21;
struct UCookedTileSettings_Forrest_Level22;
struct UCookedTileSettings_Forrest_Level999;
struct UCookedTileSettings_Forrest_Long3;
struct UCookedTileSettings_Forrest_Tutorial;
struct UCookedTileSettings_Gibraltar_BigEvent;
struct UCookedTileSettings_Gibraltar_Breakthrough;
struct UCookedTileSettings_Gibraltar_Conquest;
struct UCookedTileSettings_Gibraltar_FlagWar;
struct UCookedTileSettings_Gibraltar_Siege;
struct UCookedTileSettings_Gibraltar_TacticalConquest;
struct UCookedTileSettings_Gibraltar_TacticalConquestB;
struct UCookedTileSettings_Gibraltar_WareHouse;
struct UCookedTileSettings_Gibraltar_WareHouseInside;
struct UCookedTileSettings_Iceland_BigEvent;
struct UCookedTileSettings_Iceland_Breakthrough;
struct UCookedTileSettings_Iceland_CaptureTheFlag;
struct UCookedTileSettings_Iceland_Conquest;
struct UCookedTileSettings_Iceland_Gym;
struct UCookedTileSettings_Iceland_Siege;
struct UCookedTileSettings_Iceland_SteelTorrent;
struct UCookedTileSettings_Iceland_TacticalConquest;
struct UCookedTileSettings_Iceland_TacticalConquestB;
struct UCookedTileSettings_Iceland_Tower;
struct UCookedTileSettings_Iceland_TowerB;
struct UCookedTileSettings_Intro;
struct UCookedTileSettings_Iris_Entry;
struct UCookedTileSettings_Kharkiv_Breakthrough;
struct UCookedTileSettings_Monument;
struct UCookedTileSettings_Monument_Breakthrough;
struct UCookedTileSettings_Monument_Conquest;
struct UCookedTileSettings_Monument_HardPoint;
struct UCookedTileSettings_Monument_Siege;
struct UCookedTileSettings_Monument_SteelTorrent;
struct UCookedTileSettings_Monument_TacticalConquest;
struct UCookedTileSettings_Monument_TacticalConquestB;
struct UCookedTileSettings_NavalBattle;
struct UCookedTileSettings_NavalBattle_Breakthrough;
struct UCookedTileSettings_NavalBattle_Conquest;
struct UCookedTileSettings_NavalBattle_FlagWar;
struct UCookedTileSettings_NavalBattle_Siege;
struct UCookedTileSettings_NavalBattle_TacticalConquest;
struct UCookedTileSettings_OldCity_Long3;
struct UCookedTileSettings_Retrowar_Breakthrough;
struct UCookedTileSettings_Retrowar_CaptureTheFlag;
struct UCookedTileSettings_Retrowar_Conquest;
struct UCookedTileSettings_Retrowar_HardPoint;
struct UCookedTileSettings_Retrowar_Night_Breakthrough;
struct UCookedTileSettings_Retrowar_Night_CaptureTheFlag;
struct UCookedTileSettings_Retrowar_Night_Conquest;
struct UCookedTileSettings_Retrowar_Night_Siege;
struct UCookedTileSettings_Retrowar_Night_TacticalConquest;
struct UCookedTileSettings_Retrowar_Siege;
struct UCookedTileSettings_Retrowar_TacticalConquest;
struct UCookedTileSettings_Retrowar_TacticalConquestB;
struct UCookedTileSettings_SafeHouse;
struct UCookedTileSettings_Brakkesh_Long3_Automation;
struct UCookedTileSettings_Collapse_Automation;
struct UCookedTileSettings_Cracked_Automation;
struct UCookedTileSettings_Crest_Automation;
struct UCookedTileSettings_Dam_Iris_Long3_Automation;
struct UCookedTileSettings_Dam_Water_Automation;
struct UCookedTileSettings_Derail_Automation;
struct UCookedTileSettings_Fault_Automation;
struct UCookedTileSettings_Forrest_Long3_Automation;
struct UCookedTileSettings_Gibraltar_Automation;
struct UCookedTileSettings_IceLand_Automation;
struct UCookedTileSettings_Monument_Automation;
struct UCookedTileSettings_Naval_Automation;
struct UCookedTileSettings_OldCity_Long3_Automation;
struct UCookedTileSettings_Retrowar_Automation;
struct UCookedTileSettings_Retrowar_Night_Automation;
struct UCookedTileSettings_Shafted_Automation;
struct UCookedTileSettings_SpaceCenter_Ma1_Automation;
struct UCookedTileSettings_Suez_Automation;
struct UCookedTileSettings_Tide_Automation;
struct UCookedTileSettings_Shafted_Breakthrough;
struct UCookedTileSettings_Shafted_Conquest;
struct UCookedTileSettings_Shafted_HardPoint;
struct UCookedTileSettings_Shafted_TacticalConquest;
struct UCookedTileSettings_Skyline;
struct UCookedTileSettings_Skyline_Breakthrough;
struct UCookedTileSettings_SpaceCenter_WithEvent_Ma1;
struct UCookedTileSettings_SpaceCenter_WithoutEvent_Ma1;
struct UCookedTileSettings_SpaceCenter_Level1;
struct UCookedTileSettings_SpaceCenter_Level2;
struct UCookedTileSettings_SpaceCenter_Level21;
struct UCookedTileSettings_SpaceCenter_Level22;
struct UCookedTileSettings_SpaceCenter_Level51;
struct UCookedTileSettings_SpaceCenter_Ma1;
struct UCookedTileSettings_Suez;
struct UCookedTileSettings_Suez_Base;
struct UCookedTileSettings_Suez_BigEvent;
struct UCookedTileSettings_Suez_Breakthrough;
struct UCookedTileSettings_Suez_Conquest;
struct UCookedTileSettings_Suez_FlagWar;
struct UCookedTileSettings_Suez_Siege;
struct UCookedTileSettings_Suez_TacticalConquest;
struct UCookedTileSettings_Suez_TacticalConquestB;
struct UCookedTileSettings_Suez_Tower;
struct UCookedTileSettings_Suez_Tower_C;
struct UCookedTileSettings_Suez_Warehouse;
struct UCookedTileSettings_Tide;
struct UCookedTileSettings_Tide_Level1;
struct UCookedTileSettings_Tide_Level2;
struct UCookedTileSettings_Tide_Level21;
struct UCookedTileSettings_Tide_Level3;
struct UCookedTileSettings_Tide_Level51;
struct UOpenWorldTileSettings_SpaceCenter_Level1;
struct UOpenWorldTileSettings_Brakkesh_Level1;
struct UOpenWorldTileSettings_Gibraltar;
struct UOpenWorldTileSettings_Gibraltar_BigEvent;
struct UOpenWorldTileSettings_Gibraltar_Breakthrough;
struct UOpenWorldTileSettings_Iceland_BigEvent;
struct UOpenWorldTileSettings_Forrest_WithFire;
struct UOpenWorldTileSettings_Crest;
struct UOpenWorldTileSettings_Crest_Breakthrough;
struct UOpenWorldTileSettings_Crest_Conquest;
struct UOpenWorldTileSettings_Crest_TacticalConquest;
struct UOpenWorldTileSettings_Fault_Breakthrough;
struct UOpenWorldTileSettings_Forrest_Long3;
struct UOpenWorldTileSettings_Monument_Breakthrough;
struct UOpenWorldTileSettings_Collapse_Breakthrough;
struct UOpenWorldTileSettings_Collapse_BigEvent;
struct UOpenWorldTileSettings_Suez_BigEvent;
struct UOpenWorldFilterSettings_Forrest_Long3;
struct UOpenWorldFilterSettings_SpaceCenter_Long3;
struct UOpenWorldFilterSettings_SpaceCenter_Ma1;
struct UOpenWorldFilterSettings_Collapse;
struct UOpenWorldFilterSettings_Forrest_Level21;
struct UOpenWorldFilterSettings_Forrest_Level22;
struct UOpenWorldFilterSettings_Forrest_Level23;
struct UOpenWorldFilterSettings_Brakkesh_Level21;
struct UOpenWorldFilterSettings_Brakkesh_Level22;
struct UOpenWorldFilterSettings_Brakkesh_Level23;
struct UOpenWorldFilterSettings_Dam_Iris_Level21;
struct UOpenWorldFilterSettings_Dam_Iris_Level22;
struct UOpenWorldFilterSettings_Dam_Iris_Level23;
struct UOpenWorldFilterSettings_Dam_Iris_Level42;
struct UOpenWorldFilterSettings_SpaceCenter_Level21;
struct UOpenWorldFilterSettings_SpaceCenter_Level22;
struct UOpenWorldFilterSettings_Tide_Level21;
struct UOpenWorldFilterSettings_TOD_StandardScene;
struct UOpenWorldFilterSettings_Iris_Entry;
struct UOpenWorldFilterSettings_SafeHouse;
struct UOpenWorldFilterSettings_Intro;
struct UOpenWorldFilterSettings_BiomeLookdev;
struct UOpenWorldFilterSettings_Iris_UIMaps;
struct UOpenWorldFilterSettings_Shafted_UIMaps;
struct UOpenWorldFilterSettings_Gibraltar_UIMaps;
struct UOpenWorldFilterSettings_Retrowar_UIMaps;
struct UOpenWorldFilterSettings_Iris_Long3;
struct UOpenWorldFilterSettings_Crest;
struct UOpenWorldFilterSettings_CollectionRoom;
struct UOpenWorldFilterSettings_ForestEgg_Test;
struct UOpenWorldFilterSettings_CollectionRoom_Ma3;
struct UOpenWorldFilterSettings_Dam_Iris_Long3;
struct UOpenWorldFilterSettings_Suez;

// Object: Enum OpenWorldStreaming.EInstanceAreaTyep
enum class EInstanceAreaTyep : uint8_t
{
	AABB = 0,
	OBB = 1,
	CYLINDRICAL = 2,
	EInstanceAreaTyep_MAX = 3
};

// Object: Enum OpenWorldStreaming.EOpenWorldProfilerSampleMethod
enum class EOpenWorldProfilerSampleMethod : uint8_t
{
	NavMesh = 0,
	Collision = 1,
	NavMesh_Hydrant = 2,
	EOpenWorldProfilerSampleMethod_MAX = 3
};

// Object: Enum OpenWorldStreaming.EOpenWorldRescanState
enum class EOpenWorldRescanState : uint8_t
{
	None = 0,
	Once = 1,
	Twice = 2,
	Num = 3,
	EOpenWorldRescanState_MAX = 4
};

// Object: Enum OpenWorldStreaming.EOpenWorldStreamingFlushFlags
enum class EOpenWorldStreamingFlushFlags : uint8_t
{
	None = 0,
	Load = 1,
	Unload = 2,
	Block = 4,
	Purge = 8,
	Tradeoff = 15,
	EOpenWorldStreamingFlushFlags_MAX = 16
};

// Object: Enum OpenWorldStreaming.EOpenWorldHeartbeatFlags
enum class EOpenWorldHeartbeatFlags : uint32_t
{
	Freeze = 1,
	Dirty = 2,
	Focus = 4,
	Stages = 8,
	Seamless = 16,
	Subworlds = 32,
	RequestInitialize = 64,
	RequestRescan = 128,
	AsyncRescan = 256,
	Necessary = 512,
	Major = 1024,
	General = 2048,
	Physics = 4096,
	SinglePlayer = 8192,
	LocalPlayer = 16384,
	PlayerController = 32768,
	PlayerPawn = 65536,
	PendingLevels = 131072,
	MarkingLevels = 262144,
	MarkedLevels = 524288,
	PendingVisibility = 1048576,
	PendingInvisibility = 2097152,
	AsyncLoading = 4194304,
	EnergySaving = 8388608,
	EOpenWorldHeartbeatFlags_MAX = 8388609
};

// Object: Enum OpenWorldStreaming.EOpenWorldStreamingImportance
enum class EOpenWorldStreamingImportance : uint8_t
{
	Necessary = 0,
	Major = 1,
	General = 2,
	Num = 3,
	All = 4,
	None = 5,
	EOpenWorldStreamingImportance_MAX = 6
};

// Object: Enum OpenWorldStreaming.EOpenWorldFilterType
enum class EOpenWorldFilterType : uint8_t
{
	Runtime = 0,
	Editor = 1,
	EOpenWorldFilterType_MAX = 2
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldFoliageTypeRawData
// Size: 0x28 (Inherited: 0x0)
struct FOpenWorldFoliageTypeRawData
{
	struct FSoftObjectPath MeshType; // 0x0(0x18)
	struct TArray<struct FSoftObjectPath> OverrideMaterials; // 0x18(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.DSMapAreaSettings
// Size: 0x24 (Inherited: 0x0)
struct FDSMapAreaSettings
{
	struct FName MapName; // 0x0(0x8)
	struct FBox MapBound; // 0x8(0x1C)
};

// Object: ScriptStruct OpenWorldStreaming.EditorLevelLoadMethod
// Size: 0x18 (Inherited: 0x0)
struct FEditorLevelLoadMethod
{
	struct UStreamingLayer* LayerClass; // 0x0(0x8)
	struct FString LayerParameter; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.EditorLevelFolderInfo
// Size: 0x48 (Inherited: 0x0)
struct FEditorLevelFolderInfo
{
	struct FString FolderPath; // 0x0(0x10)
	uint8_t bIsRootFolder : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t bLoadAllLevels : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t bClientDefaultLoad : 1; // 0x12(0x1), Mask(0x1)
	uint8_t BitPad_0x12_1 : 7; // 0x12(0x1)
	uint8_t Pad_0x13[0x5]; // 0x13(0x5)
	struct FEditorLevelLoadMethod LoadMethod; // 0x18(0x18)
	struct TArray<struct FEditorLevelInfo> ChildrenLevels; // 0x30(0x10)
	uint8_t bIsExpand : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: ScriptStruct OpenWorldStreaming.EditorLevelInfo
// Size: 0x28 (Inherited: 0x0)
struct FEditorLevelInfo
{
	struct FString LevelPath; // 0x0(0x10)
	struct FString RealLevelPath; // 0x10(0x10)
	uint8_t bLoadLevel : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct OpenWorldStreaming.MapGridKeyInfo
// Size: 0x10 (Inherited: 0x0)
struct FMapGridKeyInfo
{
	struct TArray<struct FIntPoint> GridKeyInfos; // 0x0(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.GamePlayAreaIndexInfo
// Size: 0x50 (Inherited: 0x0)
struct FGamePlayAreaIndexInfo
{
	struct TMap<struct FString, struct FMapGridKeyInfo> AreaMeshTypes; // 0x0(0x50)
};

// Object: ScriptStruct OpenWorldStreaming.GridMeshInstances
// Size: 0x10 (Inherited: 0x0)
struct FGridMeshInstances
{
	struct TArray<struct FGamePlayMeshInstanceInfo> MeshInstances; // 0x0(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.GamePlayAreaInfo
// Size: 0x58 (Inherited: 0x0)
struct FGamePlayAreaInfo
{
	EInstanceAreaTyep InstanceAreaType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TMap<struct FIntPoint, struct FGridMeshInstances> GridMeshInstances; // 0x8(0x50)
};

// Object: ScriptStruct OpenWorldStreaming.GamePlayMeshInstanceInfo
// Size: 0x34 (Inherited: 0x0)
struct FGamePlayMeshInstanceInfo
{
	struct FVector InstanceCenter; // 0x0(0xC)
	struct FRotator InstanceRotation; // 0xC(0xC)
	struct FVector InstanceScale; // 0x18(0xC)
	float InstanceZOffset; // 0x24(0x4)
	struct FVector InstanceSize; // 0x28(0xC)
};

// Object: ScriptStruct OpenWorldStreaming.GamePlayAreaBuildConfig
// Size: 0x20 (Inherited: 0x0)
struct FGamePlayAreaBuildConfig
{
	struct FString ConfigName; // 0x0(0x10)
	struct TArray<struct FGamePlayAreaTypeInfo> GamePlayAreaTypeInfos; // 0x10(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.GamePlayAreaTypeInfo
// Size: 0x1C (Inherited: 0x0)
struct FGamePlayAreaTypeInfo
{
	EInstanceAreaTyep InstanceAreaType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector CenterOffset; // 0x4(0xC)
	struct FVector DefineSize; // 0x10(0xC)
};

// Object: ScriptStruct OpenWorldStreaming.CacheHISMGroupDataInfo
// Size: 0x18 (Inherited: 0x0)
struct FCacheHISMGroupDataInfo
{
	int32_t TargetHISMID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FCacheHISMDataInfo> Infos; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.CacheHISMDataInfo
// Size: 0xC (Inherited: 0x0)
struct FCacheHISMDataInfo
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	int32_t BeginInstanceID; // 0x4(0x4)
	int32_t EndInstanceID; // 0x8(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.LandscapeOcclusionMaskData
// Size: 0x78 (Inherited: 0x0)
struct FLandscapeOcclusionMaskData
{
	struct FBoxSphereBounds Bounds; // 0x0(0x1C)
	float CellSizeXY; // 0x1C(0x4)
	int32_t SizeX; // 0x20(0x4)
	int32_t SizeY; // 0x24(0x4)
	int32_t MipBlockSize; // 0x28(0x4)
	int32_t MipSizeX; // 0x2C(0x4)
	int32_t MipSizeY; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<uint8_t> SerializedRawData; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)
};

// Object: ScriptStruct OpenWorldStreaming.LandscapeBlockSimpleCollision
// Size: 0x28 (Inherited: 0x0)
struct FLandscapeBlockSimpleCollision
{
	struct FIntPoint BlockIndex; // 0x0(0x8)
	struct FVector LandscapeCenter; // 0x8(0xC)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct ULandscapeSimpleCollisionComponent*> SimpleCollisionComponents; // 0x18(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.OnlySimpleCollisionParams
// Size: 0x28 (Inherited: 0x0)
struct FOnlySimpleCollisionParams
{
	int32_t CurrCollisionMipLevel; // 0x0(0x4)
	int32_t TotalCollisionMipNum; // 0x4(0x4)
	struct TArray<int32_t> SimpleCollisionMipSizeQuads; // 0x8(0x10)
	struct TArray<float> CollisionMipScale; // 0x18(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.CompositedCollisionParams
// Size: 0xC (Inherited: 0x0)
struct FCompositedCollisionParams
{
	int32_t CollisionSizeQuads; // 0x0(0x4)
	int32_t SimpleCollisionSizeQuads; // 0x4(0x4)
	float CollisionScale; // 0x8(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.LandscapeSimpleCollisionSection
// Size: 0x48 (Inherited: 0x0)
struct FLandscapeSimpleCollisionSection
{
	uint8_t bIsClient : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t NumSubsections; // 0x4(0x4)
	int32_t SubsectionSizeQuads; // 0x8(0x4)
	int32_t ComponentSizeQuads; // 0xC(0x4)
	float SectionSize; // 0x10(0x4)
	int32_t EditorVisiableDistance; // 0x14(0x4)
	struct FIntPoint SectionID; // 0x18(0x8)
	struct FVector LandscapeCenter; // 0x20(0xC)
	struct FVector SectionLocation; // 0x2C(0xC)
	struct TArray<struct ULandscapeSimpleCollisionData*> SectionData; // 0x38(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.CollisionDataAssetPaths
// Size: 0x18 (Inherited: 0x0)
struct FCollisionDataAssetPaths
{
	struct FIntPoint SectionID; // 0x0(0x8)
	struct TArray<struct TSoftObjectPtr<ULandscapeSimpleCollisionData>> AssetPaths; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldStreamingCollection
// Size: 0x3F0 (Inherited: 0x0)
struct FOpenWorldStreamingCollection
{
	EOpenWorldStreamingImportance ShowingImportance; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FIntPoint AssetProgress; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TSet<struct UOpenWorldStreamingLevel*> MarkingLevels; // 0x10(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> MarkedLevels; // 0x60(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> DelayMarkedLevels; // 0xB0(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> ShownLevels; // 0x100(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> HiddenLevels; // 0x150(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> ShowingLevels; // 0x1A0(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> HidingLevels; // 0x1F0(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> PendingLevels; // 0x240(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> ProgressLevels; // 0x290(0x50)
	struct TSet<struct UOpenWorldStreamingLevel*> LODLevels; // 0x2E0(0x50)
	struct TMap<struct FName, struct UOpenWorldStreamingLevel*> RegisteredLevels; // 0x330(0x50)
	float PendingStartSeconds; // 0x380(0x4)
	uint8_t Pad_0x384[0x6C]; // 0x384(0x6C)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldStreamingZoom
// Size: 0x90 (Inherited: 0x0)
struct FOpenWorldStreamingZoom
{
	float FOV; // 0x0(0x4)
	float DelaySeconds; // 0x4(0x4)
	float ZoomRate; // 0x8(0x4)
	struct FRotator ViewRotation; // 0xC(0xC)
	struct FIntPoint Viewport; // 0x18(0x8)
	struct FMatrix ViewProjection; // 0x20(0x40)
	struct FBox2D FrustumBounds; // 0x60(0x14)
	struct FBox FrustumBounds3D; // 0x74(0x1C)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldStreamingContext
// Size: 0x140 (Inherited: 0x0)
struct FOpenWorldStreamingContext
{
	uint8_t bFrozen : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bDirty : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float HidingDelaySeconds; // 0x4(0x4)
	float StreamingUpdateDistSquared; // 0x8(0x4)
	uint8_t bShowingImportance : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	int32_t Quality; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString Switch; // 0x18(0x10)
	struct TArray<struct FVector> FocusPositions; // 0x28(0x10)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FOpenWorldStreamingZoom Zoom; // 0x40(0x90)
	float LastUpdateSeconds; // 0xD0(0x4)
	struct FVector ViewLocation; // 0xD4(0xC)
	struct TWeakObjectPtr<struct AActor> ViewTarget; // 0xE0(0x8)
	struct TWeakObjectPtr<struct AActor> OverrideViewTarget; // 0xE8(0x8)
	struct FVector ForcedPosition; // 0xF0(0xC)
	struct FRotator ForcedRotator; // 0xFC(0xC)
	uint8_t bForcedViewTargetTransform : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t bFlushUnloadedLevels : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x6]; // 0x10A(0x6)
	struct TArray<float> RequestedGlobalStreamingScales; // 0x110(0x10)
	struct TArray<float> RequestedStreamingScales; // 0x120(0x10)
	struct TArray<struct FName> RequestedStreamingScaleMaps; // 0x130(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StagedConsoleVariable
// Size: 0x20 (Inherited: 0x0)
struct FStagedConsoleVariable
{
	struct FString ConsoleVariableName; // 0x0(0x10)
	struct TArray<struct FString> Values; // 0x10(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StagedConsoleCommands
// Size: 0x18 (Inherited: 0x0)
struct FStagedConsoleCommands
{
	int32_t QualityLevel; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FString> Commands; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldStreamingLayerDesc
// Size: 0x40 (Inherited: 0x0)
struct FOpenWorldStreamingLayerDesc
{
	struct TSoftClassPtr<struct UOpenWorldStreamingLayer*> Class; // 0x0(0x28)
	struct FName Name; // 0x28(0x8)
	struct TArray<struct FString> Properties; // 0x30(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldFoliageTypeScalabilityRowBase
// Size: 0x148 (Inherited: 0x8)
struct FOpenWorldFoliageTypeScalabilityRowBase : FTableRowBase
{
	struct TSoftObjectPtr<UFoliageType> FoliageMesh; // 0x8(0x28)
	struct TSoftObjectPtr<UFoliageType> Level1; // 0x30(0x28)
	struct TSoftObjectPtr<UFoliageType> Level2; // 0x58(0x28)
	struct TSoftObjectPtr<UFoliageType> Level3; // 0x80(0x28)
	struct TSoftObjectPtr<UFoliageType> Level4; // 0xA8(0x28)
	struct TSoftObjectPtr<UFoliageType> Level5; // 0xD0(0x28)
	struct TSoftObjectPtr<UFoliageType> Level6; // 0xF8(0x28)
	struct FString Help; // 0x120(0x10)
	float Scale1; // 0x130(0x4)
	float Scale2; // 0x134(0x4)
	float Scale3; // 0x138(0x4)
	float Scale4; // 0x13C(0x4)
	float Scale5; // 0x140(0x4)
	float Scale6; // 0x144(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldFoliageScalabilityRowBase
// Size: 0x148 (Inherited: 0x8)
struct FOpenWorldFoliageScalabilityRowBase : FTableRowBase
{
	struct TSoftObjectPtr<UStaticMesh> FoliageMesh; // 0x8(0x28)
	struct TSoftObjectPtr<UStaticMesh> Level1; // 0x30(0x28)
	struct TSoftObjectPtr<UStaticMesh> Level2; // 0x58(0x28)
	struct TSoftObjectPtr<UStaticMesh> Level3; // 0x80(0x28)
	struct TSoftObjectPtr<UStaticMesh> Level4; // 0xA8(0x28)
	struct TSoftObjectPtr<UStaticMesh> Level5; // 0xD0(0x28)
	struct TSoftObjectPtr<UStaticMesh> Level6; // 0xF8(0x28)
	struct FString Help; // 0x120(0x10)
	float Scale1; // 0x130(0x4)
	float Scale2; // 0x134(0x4)
	float Scale3; // 0x138(0x4)
	float Scale4; // 0x13C(0x4)
	float Scale5; // 0x140(0x4)
	float Scale6; // 0x144(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.LocalFallbackConfig
// Size: 0x20 (Inherited: 0x0)
struct FLocalFallbackConfig
{
	int32_t Key; // 0x0(0x4)
	float Scale; // 0x4(0x4)
	struct FSoftObjectPath Path; // 0x8(0x18)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingSection
// Size: 0x58 (Inherited: 0x0)
struct FStreamingSection
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingStreamingLayerConfigItem
// Size: 0x30 (Inherited: 0x0)
struct FStreamingStreamingLayerConfigItem
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingCommandConfigItem
// Size: 0x20 (Inherited: 0x0)
struct FStreamingCommandConfigItem
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingCVarConfigItem
// Size: 0x48 (Inherited: 0x0)
struct FStreamingCVarConfigItem
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingGuiCommandConfigRow
// Size: 0x48 (Inherited: 0x8)
struct FStreamingGuiCommandConfigRow : FTableRowBase
{
	struct FString SectionName; // 0x8(0x10)
	struct FLinearColor SectionColor; // 0x18(0x10)
	struct FString ItemName; // 0x28(0x10)
	struct FString CommandName; // 0x38(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingGuiCVarConfigRow
// Size: 0x60 (Inherited: 0x8)
struct FStreamingGuiCVarConfigRow : FTableRowBase
{
	struct FString SectionName; // 0x8(0x10)
	struct FLinearColor SectionColor; // 0x18(0x10)
	struct FString ItemName; // 0x28(0x10)
	struct FString CVarName; // 0x38(0x10)
	float MinValue; // 0x48(0x4)
	float MaxValue; // 0x4C(0x4)
	struct FString ValueFormat; // 0x50(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingCVarConfigRow
// Size: 0x60 (Inherited: 0x8)
struct FStreamingCVarConfigRow : FTableRowBase
{
	struct FString SectionName; // 0x8(0x10)
	struct FLinearColor SectionColor; // 0x18(0x10)
	struct FString ItemName; // 0x28(0x10)
	struct FString CVarName; // 0x38(0x10)
	float MinValue; // 0x48(0x4)
	float MaxValue; // 0x4C(0x4)
	struct FString ValueFormat; // 0x50(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.GameModeProfileMetricSettings
// Size: 0x68 (Inherited: 0x0)
struct FGameModeProfileMetricSettings
{
	struct TArray<struct FString> maps; // 0x0(0x10)
	struct TSoftObjectPtr<UDataTable> GameModeProfileMetricSettingsDataTable; // 0x10(0x28)
	struct TSoftObjectPtr<UDataTable> GameModeProfileMetricSettingsHDDataTable; // 0x38(0x28)
	uint8_t bIsMP : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: ScriptStruct OpenWorldStreaming.GameModeProfileMetricRowBase
// Size: 0x40 (Inherited: 0x8)
struct FGameModeProfileMetricRowBase : FTableRowBase
{
	struct FString MetricName; // 0x8(0x10)
	struct FString DesName; // 0x18(0x10)
	uint8_t bNeedUpload : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float ReferenceValues_VeryHigh; // 0x2C(0x4)
	float ReferenceValues_High; // 0x30(0x4)
	float ReferenceValues_Medium; // 0x34(0x4)
	float ReferenceValues_Low; // 0x38(0x4)
	float ReferenceValues_VeryLow; // 0x3C(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldProfileCustomSamplePos
// Size: 0x18 (Inherited: 0x0)
struct FOpenWorldProfileCustomSamplePos
{
	struct FVector Position; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldExecCmdInfo
// Size: 0x18 (Inherited: 0x0)
struct FOpenWorldExecCmdInfo
{
	int32_t QualityLevel; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FString> CmdMsgs; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldProfileArea
// Size: 0x80 (Inherited: 0x0)
struct FOpenWorldProfileArea
{
	struct FString ProfileAreaName; // 0x0(0x10)
	struct FBox2D Bounds; // 0x10(0x14)
	int32_t ProfilePointNum; // 0x24(0x4)
	int32_t ProfileHydrantPointNum; // 0x28(0x4)
	uint8_t bOverAllArea : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct TArray<struct FString> SubProfileAreaNames; // 0x30(0x10)
	struct TArray<struct FString> RequestLevels; // 0x40(0x10)
	struct TArray<struct FVector> ProfileLevelPositions; // 0x50(0x10)
	struct TArray<struct FVector> ProfileHydrantPositions; // 0x60(0x10)
	struct TArray<struct FTransform> DumpRenderDetailPositions; // 0x70(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingLevelOctData
// Size: 0x28 (Inherited: 0x0)
struct FStreamingLevelOctData
{
	struct FBoxSphereBounds Bounds; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UOpenWorldStreamingLevel* Level; // 0x20(0x8)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldStreamingLODDistance
// Size: 0xC (Inherited: 0x0)
struct FOpenWorldStreamingLODDistance
{
	int32_t LOD0; // 0x0(0x4)
	int32_t LOD1; // 0x4(0x4)
	int32_t Bias; // 0x8(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.SourceInstance
// Size: 0x30 (Inherited: 0x0)
struct FSourceInstance
{
	struct TSoftObjectPtr<UObject> Source; // 0x0(0x28)
	uint8_t bSkipBuild : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct OpenWorldStreaming.BoundedAssetPath
// Size: 0x28 (Inherited: 0x0)
struct FBoundedAssetPath
{
	struct FBoxSphereBounds Bounds; // 0x0(0x1C)
	struct FIntVector ID; // 0x1C(0xC)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingLayerDesc
// Size: 0x48 (Inherited: 0x0)
struct FStreamingLayerDesc
{
	struct FName GroupName; // 0x0(0x8)
	int32_t LayerPriority; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FLayerParamsGroup> LayerParameters; // 0x10(0x10)
	uint8_t bClient : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bClientDefaultLoad : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t bNotifyServer : 1; // 0x22(0x1), Mask(0x1)
	uint8_t BitPad_0x22_1 : 7; // 0x22(0x1)
	uint8_t bDynamicLoading : 1; // 0x23(0x1), Mask(0x1)
	uint8_t BitPad_0x23_1 : 7; // 0x23(0x1)
	uint8_t bServer : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t bServerDefaultLoad : 1; // 0x25(0x1), Mask(0x1)
	uint8_t BitPad_0x25_1 : 7; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	struct UStreamingLayer* LayerClass; // 0x28(0x8)
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
};

// Object: ScriptStruct OpenWorldStreaming.LayerParamsGroup
// Size: 0x18 (Inherited: 0x0)
struct FLayerParamsGroup
{
	int32_t LevelIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString LayerParameter; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingLayerSwitch
// Size: 0x18 (Inherited: 0x0)
struct FStreamingLayerSwitch
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FString> Layers; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingConfigOverride
// Size: 0x10 (Inherited: 0x0)
struct FStreamingConfigOverride
{
	struct TArray<struct FStreamingConfigOverrideValues> LevelOfConfigs; // 0x0(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingConfigOverrideValues
// Size: 0x18 (Inherited: 0x0)
struct FStreamingConfigOverrideValues
{
	struct FString Parameter; // 0x0(0x10)
	int32_t StreamingPriority; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.CustomDisableLayerSetting
// Size: 0x20 (Inherited: 0x0)
struct FCustomDisableLayerSetting
{
	struct FString CVarInfo; // 0x0(0x10)
	struct TArray<struct FName> DisableLayerNames; // 0x10(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.StreamingLevelInfo
// Size: 0x20 (Inherited: 0x0)
struct FStreamingLevelInfo
{
	int32_t LevelIndex; // 0x0(0x4)
	int32_t LevelStreamingParallelNum; // 0x4(0x4)
	int32_t StreamingUpdateDistance; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FString> DisabledLayers; // 0x10(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.SpecialStreamingUpdateDistGroup
// Size: 0xC (Inherited: 0x0)
struct FSpecialStreamingUpdateDistGroup
{
	struct FName GroupName; // 0x0(0x8)
	float StreamingUpdateDistance; // 0x8(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.MapBroadphaseSettings
// Size: 0x48 (Inherited: 0x0)
struct FMapBroadphaseSettings
{
	struct FName MapName; // 0x0(0x8)
	struct FBroadphaseSettings BroadphaseSettings; // 0x8(0x40)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldStreamingStageSetting
// Size: 0x48 (Inherited: 0x0)
struct FOpenWorldStreamingStageSetting
{
	struct FName Name; // 0x0(0x8)
	struct TArray<float> QualityHidingDelay; // 0x8(0x10)
	struct TArray<float> QualityUpdateDistance; // 0x18(0x10)
	struct TArray<struct FStagedConsoleCommands> ExecCommands; // 0x28(0x10)
	struct TArray<struct FStagedConsoleVariable> ExecConsoleVariables; // 0x38(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.OpenWorldStreamingStageLayerSetting
// Size: 0x48 (Inherited: 0x0)
struct FOpenWorldStreamingStageLayerSetting
{
	struct FName Name; // 0x0(0x8)
	struct FOpenWorldStreamingLayerDesc LayerOverride; // 0x8(0x40)
};

// Object: ScriptStruct OpenWorldStreaming.UnbuiltGroupsForScene
// Size: 0x18 (Inherited: 0x0)
struct FUnbuiltGroupsForScene
{
	struct FName MapName; // 0x0(0x8)
	struct TArray<struct FName> UnbuiltGroups; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.MapGameplayArea
// Size: 0x24 (Inherited: 0x0)
struct FMapGameplayArea
{
	struct FName MapName; // 0x0(0x8)
	struct FIntVector Center; // 0x8(0xC)
	struct FIntVector Extent; // 0x14(0xC)
	float Yaw; // 0x20(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.CookLayerExpand
// Size: 0x18 (Inherited: 0x0)
struct FCookLayerExpand
{
	struct FString LayerWildCard; // 0x0(0x10)
	int32_t Expand; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct OpenWorldStreaming.MapRedirection
// Size: 0x18 (Inherited: 0x0)
struct FMapRedirection
{
	struct FName MapName; // 0x0(0x8)
	struct FString RelativePath; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.MapReference
// Size: 0x18 (Inherited: 0x0)
struct FMapReference
{
	struct FName MapName; // 0x0(0x8)
	struct TArray<struct FName> ReferenceMapNames; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.MapPreview
// Size: 0x40 (Inherited: 0x0)
struct FMapPreview
{
	struct FName MapName; // 0x0(0x8)
	struct TSoftObjectPtr<UTexture2D> PreviewImage; // 0x8(0x28)
	struct FVector2D PreviewImageSize; // 0x30(0x8)
	struct FVector2D PreviewImageCenter; // 0x38(0x8)
};

// Object: ScriptStruct OpenWorldStreaming.WorldTileFilter
// Size: 0x30 (Inherited: 0x0)
struct FWorldTileFilter
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FWorldTileDirectory> Directories; // 0x8(0x10)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct OpenWorldStreaming.WorldTileDirectory
// Size: 0x30 (Inherited: 0x0)
struct FWorldTileDirectory
{
	struct FDirectoryPath Path; // 0x0(0x10)
	struct TArray<struct FName> Groups; // 0x10(0x10)
	struct TArray<struct FWorldTileFolder> Folders; // 0x20(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.WorldTileFolder
// Size: 0x18 (Inherited: 0x0)
struct FWorldTileFolder
{
	struct FName Group; // 0x0(0x8)
	struct FString Folder; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldStreaming.WorldTileFolderExtra
// Size: 0x20 (Inherited: 0x0)
struct FWorldTileFolderExtra
{
	struct FName Folder; // 0x0(0x8)
	struct FName Layer; // 0x8(0x8)
	struct TArray<struct FString> ExclusionWildcards; // 0x10(0x10)
};

// Object: Class OpenWorldStreaming.AssetsStreamer
// Size: 0x7B0 (Inherited: 0x370)
struct AAssetsStreamer : AActor
{
	struct TArray<struct FBoundedAssetPath> Assets; // 0x370(0x10)
	struct FString AssetPathTemplate; // 0x380(0x10)
	int32_t BatchSize; // 0x390(0x4)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	struct TArray<struct FString> SubAssetPathTemplates; // 0x398(0x10)
	struct TSet<struct FIntVector> SubAssetIDs; // 0x3A8(0x50)
	uint8_t Pad_0x3F8[0x20]; // 0x3F8(0x20)
	struct TSet<struct UObject*> LoadedAssets; // 0x418(0x50)
	uint8_t Pad_0x468[0x238]; // 0x468(0x238)
	struct TSet<struct UObject*> LoadedBatchAssets; // 0x6A0(0x50)
	uint8_t Pad_0x6F0[0xC0]; // 0x6F0(0xC0)
	DEFINE_UE_CLASS_HELPERS(AAssetsStreamer, "AssetsStreamer")

};

// Object: Class OpenWorldStreaming.OpenWorldComposition
// Size: 0x910 (Inherited: 0x68)
struct UOpenWorldComposition : UWorldComposition
{
	struct FName MainWorld; // 0x68(0x8)
	struct TSet<struct FName> SecondaryWorlds; // 0x70(0x50)
	struct TArray<struct FName> Stages; // 0xC0(0x10)
	struct TMap<struct FName, struct FString> DisabledLayers; // 0xD0(0x50)
	struct TSet<struct FString> DisabledLevelWildcards; // 0x120(0x50)
	struct FOpenWorldStreamingContext Context; // 0x170(0x140)
	struct FOpenWorldStreamingCollection Collection; // 0x2B0(0x3F0)
	float GlobalStreamingScale; // 0x6A0(0x4)
	uint8_t Pad_0x6A4[0x4]; // 0x6A4(0x4)
	struct TMap<struct FName, float> StreamingScales; // 0x6A8(0x50)
	struct TMap<struct FName, struct UOpenWorldStreamingLayer*> Layers; // 0x6F8(0x50)
	struct TArray<struct FOpenWorldStreamingLayerDesc> StagedLayers; // 0x748(0x10)
	uint8_t Pad_0x758[0x1B8]; // 0x758(0x1B8)


	// Object: Function OpenWorldStreaming.OpenWorldComposition.ResetViewTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e26104
	// Params: [ Num(0) Size(0x0) ]
	void ResetViewTarget();

	// Object: Function OpenWorldStreaming.OpenWorldComposition.RecoverViewTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e26058
	// Params: [ Num(1) Size(0x1) ]
	void RecoverViewTarget(uint8_t bFlush);

	// Object: Function OpenWorldStreaming.OpenWorldComposition.ForceSetViewTargetTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7e25f60
	// Params: [ Num(2) Size(0x18) ]
	void ForceSetViewTargetTransform(const struct FVector& Position, const struct FRotator& Rotator);

	// Object: Function OpenWorldStreaming.OpenWorldComposition.FlushViewTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e25f4c
	// Params: [ Num(0) Size(0x0) ]
	void FlushViewTarget();

	// Object: Function OpenWorldStreaming.OpenWorldComposition.FlushStreaming
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e25e18
	// Params: [ Num(3) Size(0x18) ]
	void FlushStreaming(EOpenWorldStreamingFlushFlags Flags, EOpenWorldStreamingImportance Importance, const struct TArray<struct FVector>& AbsolutePositions);

	// Object: Function OpenWorldStreaming.OpenWorldComposition.ExitStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e25d68
	// Params: [ Num(2) Size(0x9) ]
	uint8_t ExitStage(struct FName StageName);

	// Object: Function OpenWorldStreaming.OpenWorldComposition.EnterStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e25cb8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t EnterStage(struct FName StageName);

	// Object: Function OpenWorldStreaming.OpenWorldComposition.ClearStages
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e25ca4
	// Params: [ Num(0) Size(0x0) ]
	void ClearStages();

	// Object: Function OpenWorldStreaming.OpenWorldComposition.ChangeViewTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e25c00
	// Params: [ Num(1) Size(0x8) ]
	void ChangeViewTarget(struct AActor* ViewTarget);
	DEFINE_UE_CLASS_HELPERS(UOpenWorldComposition, "OpenWorldComposition")

};

// Object: Class OpenWorldStreaming.CustomWorldComposition
// Size: 0xB20 (Inherited: 0x910)
struct UCustomWorldComposition : UOpenWorldComposition
{
	uint8_t Pad_0x910[0xD8]; // 0x910(0xD8)
	uint8_t bPhysicsLoadingCompleted : 1; // 0x9E8(0x1), Mask(0x1)
	uint8_t BitPad_0x9E8_1 : 7; // 0x9E8(0x1)
	uint8_t Pad_0x9E9[0x3]; // 0x9E9(0x3)
	struct FIntVector PercentageProgresses; // 0x9EC(0xC)
	struct TSoftObjectPtr<UOpenWorldProfilerConfig> ProfilerConfig; // 0x9F8(0x28)
	uint8_t bSkipCookSubLevel : 1; // 0xA20(0x1), Mask(0x1)
	uint8_t BitPad_0xA20_1 : 7; // 0xA20(0x1)
	uint8_t Pad_0xA21[0x7]; // 0xA21(0x7)
	struct TArray<struct FName> LinuxClientWhiteList; // 0xA28(0x10)
	struct TArray<struct FDSMapAreaSettings> DSMapAreaSettings; // 0xA38(0x10)
	uint8_t Pad_0xA48[0xD8]; // 0xA48(0xD8)


	// Object: Function OpenWorldStreaming.CustomWorldComposition.UseStreamingSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xfddc520
	// Params: [ Num(3) Size(0x19) ]
	uint8_t UseStreamingSettings(struct FName MapName, const struct TArray<struct FName>& InExtraScanningMaps);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.UnloadLevels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e226d8
	// Params: [ Num(2) Size(0x20) ]
	void UnloadLevels(const struct TArray<struct FString>& InLevelPackageNames, const struct FDelegate& callback);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.UnloadLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e2262c
	// Params: [ Num(1) Size(0x10) ]
	void UnloadLevel(struct FString InLevelPackageName);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.StatsEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x7e22618
	// Params: [ Num(0) Size(0x0) ]
	void StatsEvent();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.SetWorldCompositionStreamingEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xecdfb2c
	// Params: [ Num(1) Size(0x1) ]
	void SetWorldCompositionStreamingEnable(uint8_t bInEnable);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.SetIgnoreStreamgintLayers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e2256c
	// Params: [ Num(1) Size(0x10) ]
	void SetIgnoreStreamgintLayers(struct FString InLayersMsg);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.SetDisableBeginPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e224c0
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableBeginPlay(uint8_t bDisable);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.RestoreLayerParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e22414
	// Params: [ Num(1) Size(0x10) ]
	void RestoreLayerParameter(struct FString LayerName);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.RequestLevelStreaming
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e22250
	// Params: [ Num(5) Size(0x14) ]
	void RequestLevelStreaming(struct FString InLevelPackageName, uint8_t bShouldBeLoaded, uint8_t bShouldBeVisible, uint8_t bShouldBlock, uint8_t bImmediately);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.RemoveStreamingScene
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e22194
	// Params: [ Num(1) Size(0x10) ]
	void RemoveStreamingScene(const struct TArray<struct FName>& InExtraScanningMaps);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.ReleasePlayerLocation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xecde5c0
	// Params: [ Num(0) Size(0x0) ]
	void ReleasePlayerLocation();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.PlayerZoomingOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e2207c
	// Params: [ Num(3) Size(0xC) ]
	void PlayerZoomingOn(float InFOV, float InDelayTime, float InZoomRate);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.PlayerZoomingOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e21fd8
	// Params: [ Num(1) Size(0x4) ]
	void PlayerZoomingOff(float InDelayTime);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.OverrideLayerParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e21ee8
	// Params: [ Num(2) Size(0x20) ]
	void OverrideLayerParameter(struct FString LayerName, struct FString Parameter);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.LoadLevels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e21dcc
	// Params: [ Num(2) Size(0x20) ]
	void LoadLevels(const struct TArray<struct FString>& InLevelPackageNames, const struct FDelegate& callback);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.LoadLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e21d20
	// Params: [ Num(1) Size(0x10) ]
	void LoadLevel(struct FString InLevelPackageName);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.IsWorldCompositionStreamingEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e21ce8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWorldCompositionStreamingEnabled();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.IsPhysicsLoadingCompleted
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e21cb0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPhysicsLoadingCompleted();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.IsLoadingCompleted
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e21c00
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsLoadingCompleted(EOpenWorldStreamingImportance Importance);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.IsLevelExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e21b48
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsLevelExist(struct FString InLevelName);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.GetUnloadLevelMsgs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e21ab0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUnloadLevelMsgs();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.GetLoadedLevelNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e21a7c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLoadedLevelNum();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.GetIngnoreLayerMsgs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e219e4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIngnoreLayerMsgs();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.GetAllRuntimeLevels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e21974
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAllRuntimeLevels();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.GetAllLayerNames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e21860
	// Params: [ Num(3) Size(0x18) ]
	struct TArray<struct FString> GetAllLayerNames(uint8_t bInNeedCheckClient, uint8_t bInNeedCheckServer);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.FreezeStreamingLayers
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e21760
	// Params: [ Num(2) Size(0x11) ]
	void FreezeStreamingLayers(const struct TArray<struct FString>& InLayerWildcards, uint8_t bFreeze);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.ForceReloadLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e216b4
	// Params: [ Num(1) Size(0x10) ]
	void ForceReloadLevel(struct FString InLevelName);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.ForceRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e216a0
	// Params: [ Num(0) Size(0x0) ]
	void ForceRefresh();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.FocusPlayerLocations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e215e4
	// Params: [ Num(1) Size(0x10) ]
	void FocusPlayerLocations(const struct TArray<struct FVector>& InAbsoluteLocations);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.FocusPlayerLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xecde510
	// Params: [ Num(1) Size(0xC) ]
	void FocusPlayerLocation(const struct FVector& InAbsoluteLocation);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.FlushLevelStreaming
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e215d0
	// Params: [ Num(0) Size(0x0) ]
	void FlushLevelStreaming();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.FindLevels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e214d0
	// Params: [ Num(2) Size(0x20) ]
	void FindLevels(struct FString InLevelKeyword, struct TArray<struct FString>& OutFoundLevelPackageNames);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.FindLandscapeTransitionWorld
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7e21438
	// Params: [ Num(1) Size(0x10) ]
	struct FString FindLandscapeTransitionWorld();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.DisableWorldCompositionStreamingAfterComplete
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e21394
	// Params: [ Num(1) Size(0x4) ]
	void DisableWorldCompositionStreamingAfterComplete(int32_t Percentage);

	// Object: Function OpenWorldStreaming.CustomWorldComposition.ClearStreamingScene
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e21380
	// Params: [ Num(0) Size(0x0) ]
	void ClearStreamingScene();

	// Object: Function OpenWorldStreaming.CustomWorldComposition.AddStreamingScene
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e212c4
	// Params: [ Num(1) Size(0x10) ]
	void AddStreamingScene(const struct TArray<struct FName>& InExtraScanningMaps);
	DEFINE_UE_CLASS_HELPERS(UCustomWorldComposition, "CustomWorldComposition")

};

// Object: Class OpenWorldStreaming.EditorRuntimeConfig
// Size: 0xE8 (Inherited: 0x28)
struct UEditorRuntimeConfig : UObject
{
	uint8_t bPlayFromHere : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x57]; // 0x29(0x57)
	struct TMap<struct FString, struct FEditorLevelFolderInfo> AllFolders; // 0x80(0x50)
	uint8_t Pad_0xD0[0x18]; // 0xD0(0x18)
	DEFINE_UE_CLASS_HELPERS(UEditorRuntimeConfig, "EditorRuntimeConfig")

};

// Object: Class OpenWorldStreaming.FoliageHISMActor
// Size: 0x390 (Inherited: 0x370)
struct AFoliageHISMActor : AActor
{
	struct USceneComponent* HISMRootComponent; // 0x370(0x8)
	struct FName GroupName; // 0x378(0x8)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> ChildHISMComps; // 0x380(0x10)
	DEFINE_UE_CLASS_HELPERS(AFoliageHISMActor, "FoliageHISMActor")

};

// Object: Class OpenWorldStreaming.FoliageMaskActor
// Size: 0x380 (Inherited: 0x370)
struct AFoliageMaskActor : AActor
{
	struct UBoxComponent* BoxComponent; // 0x370(0x8)
	uint8_t bMaskGrass : 1; // 0x378(0x1), Mask(0x1)
	uint8_t BitPad_0x378_1 : 7; // 0x378(0x1)
	uint8_t bMaskTree : 1; // 0x379(0x1), Mask(0x1)
	uint8_t BitPad_0x379_1 : 7; // 0x379(0x1)
	uint8_t Pad_0x37A[0x6]; // 0x37A(0x6)
	DEFINE_UE_CLASS_HELPERS(AFoliageMaskActor, "FoliageMaskActor")

};

// Object: Class OpenWorldStreaming.FreezeRebasingVolume
// Size: 0x3A8 (Inherited: 0x3A8)
struct AFreezeRebasingVolume : AVolume
{

	// Object: Function OpenWorldStreaming.FreezeRebasingVolume.EndOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0xf241adc
	// Params: [ Num(2) Size(0x10) ]
	void EndOverlap(struct AActor* ThisActor, struct AActor* OtherActor);

	// Object: Function OpenWorldStreaming.FreezeRebasingVolume.BeginOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0xeda896c
	// Params: [ Num(2) Size(0x10) ]
	void BeginOverlap(struct AActor* ThisActor, struct AActor* OtherActor);
	DEFINE_UE_CLASS_HELPERS(AFreezeRebasingVolume, "FreezeRebasingVolume")

};

// Object: Class OpenWorldStreaming.FreezeRebasingManager
// Size: 0x50 (Inherited: 0x30)
struct UFreezeRebasingManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
	DEFINE_UE_CLASS_HELPERS(UFreezeRebasingManager, "FreezeRebasingManager")

};

// Object: Class OpenWorldStreaming.GamePlayAreaBuildConfigGroup
// Size: 0x38 (Inherited: 0x28)
struct UGamePlayAreaBuildConfigGroup : UObject
{
	struct TArray<struct FGamePlayAreaBuildConfig> GamePlayAreaTypeConfigs; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UGamePlayAreaBuildConfigGroup, "GamePlayAreaBuildConfigGroup")

};

// Object: Class OpenWorldStreaming.GamePlayAreaRuntimeConfig
// Size: 0x38 (Inherited: 0x28)
struct UGamePlayAreaRuntimeConfig : UObject
{
	struct TArray<struct FGamePlayAreaInfo> GamePlayAreaInfos; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UGamePlayAreaRuntimeConfig, "GamePlayAreaRuntimeConfig")

};

// Object: Class OpenWorldStreaming.GamePlayValidAreaActor
// Size: 0x378 (Inherited: 0x370)
struct AGamePlayValidAreaActor : AActor
{
	struct UBoxComponent* BoxComponent; // 0x370(0x8)


	// Object: Function OpenWorldStreaming.GamePlayValidAreaActor.SaveAllToConfig
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x7e22bb0
	// Params: [ Num(0) Size(0x0) ]
	void SaveAllToConfig();
	DEFINE_UE_CLASS_HELPERS(AGamePlayValidAreaActor, "GamePlayValidAreaActor")

};

// Object: Class OpenWorldStreaming.OpenWorldProfileAreaActor
// Size: 0x3C8 (Inherited: 0x370)
struct AOpenWorldProfileAreaActor : AActor
{
	struct FString ProfileAreaName; // 0x370(0x10)
	struct TArray<struct FString> RequestLevels; // 0x380(0x10)
	uint8_t bOverAllArea : 1; // 0x390(0x1), Mask(0x1)
	uint8_t BitPad_0x390_1 : 7; // 0x390(0x1)
	uint8_t Pad_0x391[0x3]; // 0x391(0x3)
	float Space; // 0x394(0x4)
	EOpenWorldProfilerSampleMethod SampleMethod; // 0x398(0x1)
	uint8_t Pad_0x399[0x7]; // 0x399(0x7)
	struct UBoxComponent* BoxComponent; // 0x3A0(0x8)
	struct TArray<struct FString> SubProfileAreaNames; // 0x3A8(0x10)
	struct TArray<struct FBox> SubProfileAreaBounds; // 0x3B8(0x10)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldProfileAreaActor, "OpenWorldProfileAreaActor")

};

// Object: Class OpenWorldStreaming.OpenWorldProfileMaskAreaActor
// Size: 0x378 (Inherited: 0x370)
struct AOpenWorldProfileMaskAreaActor : AActor
{
	struct UBoxComponent* BoxComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldProfileMaskAreaActor, "OpenWorldProfileMaskAreaActor")

};

// Object: Class OpenWorldStreaming.OpenWorldPSOProfileAreaActor
// Size: 0x398 (Inherited: 0x370)
struct AOpenWorldPSOProfileAreaActor : AActor
{
	float Space; // 0x370(0x4)
	float GroupSpace; // 0x374(0x4)
	struct FString ProfileAreaName; // 0x378(0x10)
	EOpenWorldProfilerSampleMethod SampleMethod; // 0x388(0x1)
	uint8_t Pad_0x389[0x7]; // 0x389(0x7)
	struct UBoxComponent* BoxComponent; // 0x390(0x8)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldPSOProfileAreaActor, "OpenWorldPSOProfileAreaActor")

};

// Object: Class OpenWorldStreaming.OpenWorldSceneProfileSplineChildComponent
// Size: 0x250 (Inherited: 0x240)
struct UOpenWorldSceneProfileSplineChildComponent : USceneComponent
{
	float StepRatio; // 0x240(0x4)
	uint8_t Pad_0x244[0xC]; // 0x244(0xC)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldSceneProfileSplineChildComponent, "OpenWorldSceneProfileSplineChildComponent")

};

// Object: Class OpenWorldStreaming.OpenWorldProfileAreaHydrantActor
// Size: 0x378 (Inherited: 0x370)
struct AOpenWorldProfileAreaHydrantActor : AActor
{
	struct UBoxComponent* BoxComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldProfileAreaHydrantActor, "OpenWorldProfileAreaHydrantActor")

};

// Object: Class OpenWorldStreaming.GeneralLevelVolume
// Size: 0x3D8 (Inherited: 0x3A8)
struct AGeneralLevelVolume : AVolume
{
	struct TArray<struct AGeneralLevelVolume*> OutVolumes; // 0x3A8(0x10)
	struct TArray<struct AGeneralLevelVolume*> InVolumes; // 0x3B8(0x10)
	struct FString PackageName; // 0x3C8(0x10)


	// Object: Function OpenWorldStreaming.GeneralLevelVolume.ReCreateDebugLine
	// Flags: [Final|Native|Protected]
	// Offset: 0x7e22c50
	// Params: [ Num(0) Size(0x0) ]
	void ReCreateDebugLine();

	// Object: Function OpenWorldStreaming.GeneralLevelVolume.LinkConnection
	// Flags: [Final|Native|Protected]
	// Offset: 0x7e22c3c
	// Params: [ Num(0) Size(0x0) ]
	void LinkConnection();

	// Object: Function OpenWorldStreaming.GeneralLevelVolume.ClearDebugLine
	// Flags: [Final|Native|Protected]
	// Offset: 0x7e22c28
	// Params: [ Num(0) Size(0x0) ]
	void ClearDebugLine();

	// Object: Function OpenWorldStreaming.GeneralLevelVolume.BreakConnection
	// Flags: [Final|Native|Protected]
	// Offset: 0x7e22c14
	// Params: [ Num(0) Size(0x0) ]
	void BreakConnection();
	DEFINE_UE_CLASS_HELPERS(AGeneralLevelVolume, "GeneralLevelVolume")

};

// Object: Class OpenWorldStreaming.GrassMapActor
// Size: 0x3A8 (Inherited: 0x370)
struct AGrassMapActor : AActor
{
	uint8_t Pad_0x370[0x38]; // 0x370(0x38)
	DEFINE_UE_CLASS_HELPERS(AGrassMapActor, "GrassMapActor")

};

// Object: Class OpenWorldStreaming.HISMMergeActor
// Size: 0x4C0 (Inherited: 0x370)
struct AHISMMergeActor : AActor
{
	struct USceneComponent* HISMMergeRootComponent; // 0x370(0x8)
	int32_t CurrentHISMID; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
	struct TMap<uint32_t, struct TWeakObjectPtr<struct UHierarchicalInstancedStaticMeshComponent>> ChildHISMComps; // 0x380(0x50)
	struct TMap<int32_t, struct FCacheHISMGroupDataInfo> MapCacheDatas; // 0x3D0(0x50)
	struct TMap<struct FName, int32_t> InstanceStartCullDistances; // 0x420(0x50)
	struct TMap<struct FName, int32_t> InstanceEndCullDistances; // 0x470(0x50)
	DEFINE_UE_CLASS_HELPERS(AHISMMergeActor, "HISMMergeActor")

};

// Object: Class OpenWorldStreaming.LandscapeCollisionAsset
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeCollisionAsset : UObject
{
	struct TArray<struct FPhysXSerialBodyInstance> SerialBodyInstances; // 0x28(0x10)
	struct FVector Position; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FDateTime Timestamp; // 0x48(0x8)
	DEFINE_UE_CLASS_HELPERS(ULandscapeCollisionAsset, "LandscapeCollisionAsset")

};

// Object: Class OpenWorldStreaming.LandscapeCollisionAssetsStreamer
// Size: 0x8D0 (Inherited: 0x7B0)
struct ALandscapeCollisionAssetsStreamer : AAssetsStreamer
{
	struct TMap<struct FName, struct UPhysXSerialComponent*> CollisionComponents; // 0x7A8(0x50)
	uint8_t Pad_0x800[0x58]; // 0x800(0x58)
	struct FLandscapeOcclusionMaskData OcclusionMaskData; // 0x858(0x78)
	DEFINE_UE_CLASS_HELPERS(ALandscapeCollisionAssetsStreamer, "LandscapeCollisionAssetsStreamer")

};

// Object: Class OpenWorldStreaming.LandscapeFoliageHierarchicalInstancedComponent
// Size: 0xB30 (Inherited: 0xB30)
struct ULandscapeFoliageHierarchicalInstancedComponent : UHierarchicalInstancedStaticMeshComponent
{
	uint8_t CookQuadTree : 1; // 0xB28(0x1), Mask(0x1)
	uint8_t CookLossyInstanceData : 1; // 0xB29(0x1), Mask(0x1)
	DEFINE_UE_CLASS_HELPERS(ULandscapeFoliageHierarchicalInstancedComponent, "LandscapeFoliageHierarchicalInstancedComponent")

};

// Object: Class OpenWorldStreaming.LandscapeSimpleCollisionActor
// Size: 0x520 (Inherited: 0x370)
struct ALandscapeSimpleCollisionActor : AActor
{
	struct USceneComponent* SimplePhysicsRootComponent; // 0x370(0x8)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x378(0x8)
	struct FBodyInstance BodyInstance; // 0x380(0x120)
	int32_t CollisionMipLevel; // 0x4A0(0x4)
	int32_t SimpleCollisionMipLevel; // 0x4A4(0x4)
	int32_t SimpleCollisionMipNum; // 0x4A8(0x4)
	int32_t CollisionMeregCount; // 0x4AC(0x4)
	int32_t CurrCollisionLOD; // 0x4B0(0x4)
	struct FIntPoint ActorID; // 0x4B4(0x8)
	uint8_t Pad_0x4BC[0x4]; // 0x4BC(0x4)
	struct FLandscapeBlockSimpleCollision BlockSimpleCollision; // 0x4C0(0x28)
	struct FBox LandscapesBounds; // 0x4E8(0x1C)
	uint8_t bUseSimpleCollision : 1; // 0x504(0x1), Mask(0x1)
	uint8_t BitPad_0x504_1 : 7; // 0x504(0x1)
	uint8_t Pad_0x505[0x3]; // 0x505(0x3)
	int32_t EditorVisiableDistance; // 0x508(0x4)
	int32_t NumSubsections; // 0x50C(0x4)
	int32_t SubsectionSizeQuads; // 0x510(0x4)
	int32_t ComponentSizeQuads; // 0x514(0x4)
	float SectionSize; // 0x518(0x4)
	uint8_t Pad_0x51C[0x4]; // 0x51C(0x4)
	DEFINE_UE_CLASS_HELPERS(ALandscapeSimpleCollisionActor, "LandscapeSimpleCollisionActor")

};

// Object: Class OpenWorldStreaming.LandscapeSimpleCollisionComponent
// Size: 0x620 (Inherited: 0x580)
struct ULandscapeSimpleCollisionComponent : UPrimitiveComponent
{
	uint8_t UseSimpleCollisionOnComposited : 1; // 0x578(0x1), Mask(0x1)
	uint8_t UseOnlySimpleCollisionWithLOD : 1; // 0x579(0x1), Mask(0x1)
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x580(0x10)
	int32_t SectionBaseX; // 0x590(0x4)
	int32_t SectionBaseY; // 0x594(0x4)
	int32_t ComponentSizeQuads; // 0x598(0x4)
	struct FGuid HeightfieldGuid; // 0x59C(0x10)
	uint8_t BitPad_0x5AC_2 : 6; // 0x5AC(0x1)
	uint8_t Pad_0x5AD[0x3]; // 0x5AD(0x3)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x5B0(0x10)
	struct FCompositedCollisionParams CompositedParams; // 0x5C0(0xC)
	uint8_t Pad_0x5CC[0x4]; // 0x5CC(0x4)
	struct FOnlySimpleCollisionParams OnlySimpleParams; // 0x5D0(0x28)
	uint8_t NotYetSerialized : 1; // 0x5F8(0x1), Mask(0x1)
	uint8_t BitPad_0x5F8_1 : 7; // 0x5F8(0x1)
	uint8_t Pad_0x5F9[0x27]; // 0x5F9(0x27)
	DEFINE_UE_CLASS_HELPERS(ULandscapeSimpleCollisionComponent, "LandscapeSimpleCollisionComponent")

};

// Object: Class OpenWorldStreaming.LandscapeSimpleCollisionData
// Size: 0x250 (Inherited: 0x28)
struct ULandscapeSimpleCollisionData : UObject
{
	uint8_t bIsClient : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t NotYetSerialized : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t SectionBaseX; // 0x2C(0x4)
	int32_t SectionBaseY; // 0x30(0x4)
	int32_t NumSubsections; // 0x34(0x4)
	int32_t SubsectionSizeQuads; // 0x38(0x4)
	int32_t ComponentSizeQuads; // 0x3C(0x4)
	float SectionSize; // 0x40(0x4)
	struct FIntPoint SectionID; // 0x44(0x8)
	struct FVector SectionLocation; // 0x4C(0xC)
	struct FVector LandscapeScale; // 0x58(0xC)
	struct FVector LandscapeCenter; // 0x64(0xC)
	struct FTransform LandscapeTransform; // 0x70(0x30)
	int32_t CurrLandscapeLOD; // 0xA0(0x4)
	int32_t CurrCollisionLOD; // 0xA4(0x4)
	int32_t NumCollisionLOD; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct TArray<int32_t> MipSizeQuads; // 0xB0(0x10)
	struct TArray<float> MipScale; // 0xC0(0x10)
	struct FGuid HeightfieldGuid; // 0xD0(0x10)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0xE0(0x8)
	struct FBodyInstance BodyInstance; // 0xE8(0x120)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x208(0x10)
	uint8_t Pad_0x218[0x20]; // 0x218(0x20)
	struct UPrimitiveComponent* OwnerComponent; // 0x238(0x8)
	uint8_t Pad_0x240[0x10]; // 0x240(0x10)
	DEFINE_UE_CLASS_HELPERS(ULandscapeSimpleCollisionData, "LandscapeSimpleCollisionData")

};

// Object: Class OpenWorldStreaming.LandscapeSimpleCollisionAsset
// Size: 0x98 (Inherited: 0x28)
struct ULandscapeSimpleCollisionAsset : UObject
{
	struct FBoxSphereBounds Bounds; // 0x28(0x1C)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct ULandscapeSimpleCollisionData* CollisionData; // 0x48(0x8)
	float SectionSize; // 0x50(0x4)
	uint8_t bIsHDWeightmap : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t Pad_0x55[0x43]; // 0x55(0x43)
	DEFINE_UE_CLASS_HELPERS(ULandscapeSimpleCollisionAsset, "LandscapeSimpleCollisionAsset")

};

// Object: Class OpenWorldStreaming.LandscapeSimpleCollisionRootComponent
// Size: 0x580 (Inherited: 0x580)
struct ULandscapeSimpleCollisionRootComponent : UPrimitiveComponent
{
	int32_t EditorVisiableDistance; // 0x578(0x4)
	DEFINE_UE_CLASS_HELPERS(ULandscapeSimpleCollisionRootComponent, "LandscapeSimpleCollisionRootComponent")

};

// Object: Class OpenWorldStreaming.LandscapeSimpleCollisionManager
// Size: 0xAB0 (Inherited: 0x7B0)
struct ALandscapeSimpleCollisionManager : AAssetsStreamer
{
	uint8_t bEnable : 1; // 0x7A1(0x1), Mask(0x1)
	uint8_t bIsClient : 1; // 0x7A2(0x1), Mask(0x1)
	uint8_t bAutoSelectLOD : 1; // 0x7A3(0x1), Mask(0x1)
	uint8_t bLoadAll : 1; // 0x7A4(0x1), Mask(0x1)
	uint8_t bDebugDraw : 1; // 0x7A5(0x1), Mask(0x1)
	struct ULandscapeSimpleCollisionRootComponent* SimplePhysicsRootComponent; // 0x7A8(0x8)
	struct FBodyInstance BodyInstance; // 0x7B0(0x120)
	struct TMap<int32_t, struct UPhysicalMaterial*> MatIDToPhysicalMaterial; // 0x8D0(0x50)
	uint8_t BitPad_0x928_5 : 3; // 0x928(0x1)
	uint8_t Pad_0x929[0x187]; // 0x929(0x187)
	DEFINE_UE_CLASS_HELPERS(ALandscapeSimpleCollisionManager, "LandscapeSimpleCollisionManager")

};

// Object: Class OpenWorldStreaming.LandscapeSimplePhysicsActor
// Size: 0x4E0 (Inherited: 0x370)
struct ALandscapeSimplePhysicsActor : AActor
{
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x370(0x8)
	struct FBodyInstance BodyInstance; // 0x378(0x120)
	struct USceneComponent* SimplePhysicsRootComponent; // 0x498(0x8)
	struct TArray<struct UStaticMeshComponent*> StaticMeshComps; // 0x4A0(0x10)
	struct TArray<struct FIntPoint> StaticMeshCompIDs; // 0x4B0(0x10)
	struct FBox LandscapesBounds; // 0x4C0(0x1C)
	uint8_t Pad_0x4DC[0x4]; // 0x4DC(0x4)
	DEFINE_UE_CLASS_HELPERS(ALandscapeSimplePhysicsActor, "LandscapeSimplePhysicsActor")

};

// Object: Class OpenWorldStreaming.OpenWorldBuiltActor
// Size: 0x370 (Inherited: 0x370)
struct AOpenWorldBuiltActor : AActor
{	DEFINE_UE_CLASS_HELPERS(AOpenWorldBuiltActor, "OpenWorldBuiltActor")

};

// Object: Class OpenWorldStreaming.OpenWorldTreeMeshComponent
// Size: 0xB30 (Inherited: 0xB30)
struct UOpenWorldTreeMeshComponent : UHierarchicalInstancedStaticMeshComponent
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTreeMeshComponent, "OpenWorldTreeMeshComponent")

};

// Object: Class OpenWorldStreaming.OpenWorldBushMeshComponent
// Size: 0xB30 (Inherited: 0xB30)
struct UOpenWorldBushMeshComponent : UHierarchicalInstancedStaticMeshComponent
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldBushMeshComponent, "OpenWorldBushMeshComponent")

};

// Object: Class OpenWorldStreaming.OpenWorldGrassMeshComponent
// Size: 0xB30 (Inherited: 0xB30)
struct UOpenWorldGrassMeshComponent : UHierarchicalInstancedStaticMeshComponent
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldGrassMeshComponent, "OpenWorldGrassMeshComponent")

};

// Object: Class OpenWorldStreaming.OpenWorldSmallStoneMeshComponent
// Size: 0xB30 (Inherited: 0xB30)
struct UOpenWorldSmallStoneMeshComponent : UHierarchicalInstancedStaticMeshComponent
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldSmallStoneMeshComponent, "OpenWorldSmallStoneMeshComponent")

};

// Object: Class OpenWorldStreaming.OpenWorldMiddleStoneMeshComponent
// Size: 0xB30 (Inherited: 0xB30)
struct UOpenWorldMiddleStoneMeshComponent : UHierarchicalInstancedStaticMeshComponent
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldMiddleStoneMeshComponent, "OpenWorldMiddleStoneMeshComponent")

};

// Object: Class OpenWorldStreaming.OpenWorldDecorationMeshComponent
// Size: 0xB30 (Inherited: 0xB30)
struct UOpenWorldDecorationMeshComponent : UHierarchicalInstancedStaticMeshComponent
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldDecorationMeshComponent, "OpenWorldDecorationMeshComponent")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig
// Size: 0x190 (Inherited: 0x88)
struct UOpenWorldFoliageScalabilityConfig : UOpenWorldSettings
{
	struct TMap<struct FName, int32_t> FoliageCutDownConfig; // 0x88(0x50)
	struct TMap<struct FName, struct FLocalFallbackConfig> FoliageFallbackConfig; // 0xD8(0x50)
	uint8_t bIsFoliageTypeDataTable : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
	struct TMap<struct FName, struct FOpenWorldFoliageTypeRawData> FallbackFoliageTypes; // 0x130(0x50)
	struct FString ForceEnableFoliageMatchesWildcard; // 0x180(0x10)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig, "OpenWorldFoliageScalabilityConfig")

};

// Object: Class OpenWorldStreaming.OpenWorldImGuiPanel
// Size: 0x520 (Inherited: 0x3C0)
struct AOpenWorldImGuiPanel : AImGuiPanel
{
	uint8_t Pad_0x3C0[0x18]; // 0x3C0(0x18)
	struct TSoftObjectPtr<UDataTable> CVarConfigDataTable; // 0x3D8(0x28)
	struct TSoftObjectPtr<UDataTable> CommandConfigDataTable; // 0x400(0x28)
	uint8_t Pad_0x428[0xF8]; // 0x428(0xF8)


	// Object: Function OpenWorldStreaming.OpenWorldImGuiPanel.ReloadConfiguration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e294f0
	// Params: [ Num(0) Size(0x0) ]
	void ReloadConfiguration();
	DEFINE_UE_CLASS_HELPERS(AOpenWorldImGuiPanel, "OpenWorldImGuiPanel")

};

// Object: Class OpenWorldStreaming.OpenWorldProfilerCustomSampleConfig
// Size: 0x48 (Inherited: 0x28)
struct UOpenWorldProfilerCustomSampleConfig : UObject
{
	struct FString Name; // 0x28(0x10)
	struct TArray<struct FOpenWorldProfileCustomSamplePos> CustomSamplePositions; // 0x38(0x10)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldProfilerCustomSampleConfig, "OpenWorldProfilerCustomSampleConfig")

};

// Object: Class OpenWorldStreaming.OpenWorldProfilerConfig
// Size: 0xF0 (Inherited: 0x28)
struct UOpenWorldProfilerConfig : UObject
{
	struct TArray<struct FString> IgnoreLayerConfigs; // 0x28(0x10)
	struct TArray<struct FString> ProfileIgnoreLevelPaths; // 0x38(0x10)
	struct TArray<float> CameraPitchSamples; // 0x48(0x10)
	struct TArray<float> CameraYawSamples; // 0x58(0x10)
	struct TArray<struct FOpenWorldProfileArea> ProfileArea; // 0x68(0x10)
	struct TArray<struct FOpenWorldProfileArea> PSOProfileArea; // 0x78(0x10)
	struct TArray<struct FOpenWorldExecCmdInfo> ExecCmdInfos; // 0x88(0x10)
	struct TArray<struct FString> ExecCmdWhenLooadingMsgs; // 0x98(0x10)
	struct TArray<struct FString> ForceUnloadLevels; // 0xA8(0x10)
	int32_t SOCWiatFrameCount; // 0xB8(0x4)
	int32_t GpuTimeWaitFrameCount; // 0xBC(0x4)
	int32_t NearFoliageDistance; // 0xC0(0x4)
	int32_t ProfileFOV; // 0xC4(0x4)
	struct TSoftObjectPtr<UOpenWorldProfilerCustomSampleConfig> CustomSampleConfig; // 0xC8(0x28)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldProfilerConfig, "OpenWorldProfilerConfig")

};

// Object: Class OpenWorldStreaming.OpenWorldProfileMetricsSettings
// Size: 0x188 (Inherited: 0x38)
struct UOpenWorldProfileMetricsSettings : UDeveloperSettings
{
	struct TMap<struct FVector2D, struct FColor> HintColors; // 0x38(0x50)
	struct TMap<struct FVector2D, struct FColor> HintColors_HD; // 0x88(0x50)
	struct TArray<struct FGameModeProfileMetricSettings> GameModeProfileMetricSettings; // 0xD8(0x10)
	struct TMap<struct FString, struct FVector> FinalMetricsGPUWeights_HD; // 0xE8(0x50)
	struct TMap<struct FString, struct FVector> FinalMetricsRTWeights_HD; // 0x138(0x50)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldProfileMetricsSettings, "OpenWorldProfileMetricsSettings")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingBlueprintTools
// Size: 0x28 (Inherited: 0x28)
struct UOpenWorldStreamingBlueprintTools : UBlueprintFunctionLibrary
{

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.UploadMemReportFull
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2a518
	// Params: [ Num(1) Size(0x10) ]
	static void UploadMemReportFull(struct FString InGameVersion);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.SetActorVisiableStatus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e2a420
	// Params: [ Num(2) Size(0x11) ]
	static void SetActorVisiableStatus(struct TArray<struct AActor*>& InActors, uint8_t bInVisbale);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.RegexPattern
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2a32c
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t RegexPattern(struct FString InFilterMsg, struct FString InRegexPatternMsg);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.OpenLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2a174
	// Params: [ Num(4) Size(0x28) ]
	static void OpenLevel(struct UObject* WorldContextObject, struct FName LevelName, uint8_t bAbsolute, struct FString Options);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.MarkPackageDirty
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2a0cc
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t MarkPackageDirty(struct AActor* Actor);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.IsTypeOf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29fec
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsTypeOf(struct AActor* InActor, struct UObject* InType);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.IsSelected
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29f44
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsSelected(struct AActor* Actor);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetWorldComposition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29f10
	// Params: [ Num(1) Size(0x8) ]
	static struct UWorldComposition* GetWorldComposition();

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetStaticMeshComponentsWithChilds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e29dcc
	// Params: [ Num(2) Size(0x20) ]
	static void GetStaticMeshComponentsWithChilds(struct TArray<struct AActor*> InActors, struct TArray<struct UStaticMeshComponent*>& OutMeshComps);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetStaticMeshComponentsWithChild
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e29ce4
	// Params: [ Num(2) Size(0x18) ]
	static void GetStaticMeshComponentsWithChild(struct AActor* InActor, struct TArray<struct UStaticMeshComponent*>& OutMeshComps);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetObjectLevelRef
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29c0c
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetObjectLevelRef(struct UObject* InTargetObject);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetCustomWorldComposition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29bd8
	// Params: [ Num(1) Size(0x8) ]
	static struct UCustomWorldComposition* GetCustomWorldComposition();

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetBuildMapRootPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29b00
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetBuildMapRootPath(struct UWorld* InPersistentLevelWorld);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetAllChildActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7e29a18
	// Params: [ Num(2) Size(0x18) ]
	static void GetAllChildActor(struct AActor* InActor, struct TArray<struct AActor*>& OutChildActors);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetActorLableName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfc0e260
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetActorLableName(struct AActor* InActor);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.GetActorInLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29940
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct AActor*> GetActorInLevel(struct ULevel* InLevel);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.FindAllActosByTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2982c
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct AActor*> FindAllActosByTag(struct UObject* WorldContextObject, struct FName InTag);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.FindAllActorsByTagInLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e296e0
	// Params: [ Num(4) Size(0x28) ]
	static struct TArray<struct AActor*> FindAllActorsByTagInLevel(struct UObject* WorldContextObject, struct FName InTag, struct FName InLevelName);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.EndRecordTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e295f0
	// Params: [ Num(3) Size(0x18) ]
	static float EndRecordTime(struct FString InRecordFunctionName, uint8_t bInPrintLog);

	// Object: Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.BeginRecordTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e29554
	// Params: [ Num(1) Size(0x10) ]
	static void BeginRecordTime(struct FString InRecordFunctionName);
	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingBlueprintTools, "OpenWorldStreamingBlueprintTools")

};

// Object: Class OpenWorldStreaming.LandscapeMeshFuncLib
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeMeshFuncLib : UBlueprintFunctionLibrary
{

	// Object: Function OpenWorldStreaming.LandscapeMeshFuncLib.LandscapeVTFlush
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xff6c5a0
	// Params: [ Num(0) Size(0x0) ]
	static void LandscapeVTFlush();
	DEFINE_UE_CLASS_HELPERS(ULandscapeMeshFuncLib, "LandscapeMeshFuncLib")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingLevel
// Size: 0x220 (Inherited: 0x150)
struct UOpenWorldStreamingLevel : ULevelStreamingDynamic
{
	uint8_t bImmediate : 1; // 0x149(0x1), Mask(0x1)
	uint8_t bDisabled : 1; // 0x14A(0x1), Mask(0x1)
	float CommitTimeSeconds; // 0x14C(0x4)
	struct UOpenWorldStreamingLayer* StreamingLayer; // 0x150(0x8)
	struct FIntPoint AssetProgress; // 0x158(0x8)
	struct FBox2D AbsoluteBounds; // 0x160(0x14)
	struct FBox AbsoluteBounds3D; // 0x174(0x1C)
	struct FName OwingMap; // 0x190(0x8)
	int32_t LevelHashId; // 0x198(0x4)
	int32_t PhysLevelHashId; // 0x19C(0x4)
	uint8_t BitPad_0x1A4_2 : 6; // 0x1A4(0x1)
	uint8_t Pad_0x1A5[0x7B]; // 0x1A5(0x7B)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingLevel, "OpenWorldStreamingLevel")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingLayer
// Size: 0xB0 (Inherited: 0x28)
struct UOpenWorldStreamingLayer : UObject
{
	EOpenWorldStreamingImportance Importance; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t Priority; // 0x2C(0x4)
	uint8_t bClient : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bClientDefaultLoad : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t bFreeze : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	uint8_t bServer : 1; // 0x33(0x1), Mask(0x1)
	uint8_t BitPad_0x33_1 : 7; // 0x33(0x1)
	uint8_t bServerDefaultLoad : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t bIsolate : 1; // 0x35(0x1), Mask(0x1)
	uint8_t BitPad_0x35_1 : 7; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	int32_t DistanceOverride; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<int32_t> LoadDistances; // 0x40(0x10)
	struct TArray<int32_t> ZLoadDistances; // 0x50(0x10)
	struct TSet<struct UOpenWorldStreamingLevel*> Levels; // 0x60(0x50)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingLayer, "OpenWorldStreamingLayer")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingLayerDistance
// Size: 0x170 (Inherited: 0xB0)
struct UOpenWorldStreamingLayerDistance : UOpenWorldStreamingLayer
{
	struct TArray<int32_t> PreloadDistances; // 0xB0(0x10)
	struct TArray<int32_t> ZoomDistances; // 0xC0(0x10)
	struct TArray<struct FOpenWorldStreamingLODDistance> LODDistances; // 0xD0(0x10)
	struct FString LOD0Layer; // 0xE0(0x10)
	struct FString LOD1Layer; // 0xF0(0x10)
	int32_t LODBiasOverride; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct TArray<struct FOpenWorldStreamingLODDistance> ZLODDistances; // 0x108(0x10)
	uint8_t Pad_0x118[0x58]; // 0x118(0x58)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingLayerDistance, "OpenWorldStreamingLayerDistance")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingLayerAsset
// Size: 0xE8 (Inherited: 0xB0)
struct UOpenWorldStreamingLayerAsset : UOpenWorldStreamingLayer
{
	int32_t AssetPriority; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct TArray<struct FString> Parameters; // 0xB8(0x10)
	uint8_t Pad_0xC8[0x20]; // 0xC8(0x20)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingLayerAsset, "OpenWorldStreamingLayerAsset")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingLayerDistance3D
// Size: 0x178 (Inherited: 0x170)
struct UOpenWorldStreamingLayerDistance3D : UOpenWorldStreamingLayerDistance
{
	uint8_t Pad_0x170[0x8]; // 0x170(0x8)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingLayerDistance3D, "OpenWorldStreamingLayerDistance3D")

};

// Object: Class OpenWorldStreaming.OpenWorldUnifiedActor
// Size: 0x4A8 (Inherited: 0x370)
struct AOpenWorldUnifiedActor : AActor
{
	struct FSourceInstance HDSource; // 0x370(0x30)
	struct FSourceInstance MobileSource; // 0x3A0(0x30)
	struct TArray<int32_t> TODTypes; // 0x3D0(0x10)
	struct UDataTable* EffectTODData; // 0x3E0(0x8)
	struct TArray<struct FString> TODDescs; // 0x3E8(0x10)
	uint8_t Pad_0x3F8[0x58]; // 0x3F8(0x58)
	struct UObject* SourceObject; // 0x450(0x8)
	struct TArray<struct USceneComponent*> SourceComponents; // 0x458(0x10)
	struct UBillboardComponent* SpriteComponent; // 0x468(0x8)
	uint8_t Pad_0x470[0x38]; // 0x470(0x38)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldUnifiedActor, "OpenWorldUnifiedActor")

};

// Object: Class OpenWorldStreaming.OpenWorldUnifiedStaticMeshActor
// Size: 0x4B0 (Inherited: 0x4A8)
struct AOpenWorldUnifiedStaticMeshActor : AOpenWorldUnifiedActor
{
	struct UStaticMeshComponent* SrcSMC; // 0x4A8(0x8)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldUnifiedStaticMeshActor, "OpenWorldUnifiedStaticMeshActor")

};

// Object: Class OpenWorldStreaming.OpenWorldUnifiedDecalActor
// Size: 0x4D0 (Inherited: 0x4A8)
struct AOpenWorldUnifiedDecalActor : AOpenWorldUnifiedActor
{
	struct UDecalComponent* SrcDC; // 0x4A8(0x8)
	int32_t SortOrder; // 0x4B0(0x4)
	float FadeScreenSize; // 0x4B4(0x4)
	float FadeStartDelay; // 0x4B8(0x4)
	float FadeDuration; // 0x4BC(0x4)
	float FadeInDuration; // 0x4C0(0x4)
	float FadeInStartDelay; // 0x4C4(0x4)
	uint8_t bDestroyOwnerAfterFade : 1; // 0x4C8(0x1), Mask(0x1)
	uint8_t bUseDecalIgnoreChannel : 1; // 0x4C8(0x1), Mask(0x2)
	uint8_t BitPad_0x4C8_2 : 6; // 0x4C8(0x1)
	struct FLightingChannels LightingChannels; // 0x4C9(0x1)
	uint8_t Pad_0x4CA[0x6]; // 0x4CA(0x6)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldUnifiedDecalActor, "OpenWorldUnifiedDecalActor")

};

// Object: Class OpenWorldStreaming.RoomVolume
// Size: 0x478 (Inherited: 0x3A8)
struct ARoomVolume : AVolume
{
	struct FString BuiltLevelPackage; // 0x3A8(0x10)
	struct TArray<struct FString> DetailSuffixes; // 0x3B8(0x10)
	struct TArray<struct FString> BatchPrefixes; // 0x3C8(0x10)
	uint8_t Pad_0x3D8[0xA0]; // 0x3D8(0xA0)


	// Object: Function OpenWorldStreaming.RoomVolume.EndOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x7e2e710
	// Params: [ Num(2) Size(0x10) ]
	void EndOverlap(struct AActor* ThisActor, struct AActor* OtherActor);

	// Object: Function OpenWorldStreaming.RoomVolume.BeginOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x7e2e634
	// Params: [ Num(2) Size(0x10) ]
	void BeginOverlap(struct AActor* ThisActor, struct AActor* OtherActor);
	DEFINE_UE_CLASS_HELPERS(ARoomVolume, "RoomVolume")

};

// Object: Class OpenWorldStreaming.RoomInsideVolume
// Size: 0x478 (Inherited: 0x478)
struct ARoomInsideVolume : ARoomVolume
{	DEFINE_UE_CLASS_HELPERS(ARoomInsideVolume, "RoomInsideVolume")

};

// Object: Class OpenWorldStreaming.RoomOutsideVolume
// Size: 0x478 (Inherited: 0x478)
struct ARoomOutsideVolume : ARoomVolume
{	DEFINE_UE_CLASS_HELPERS(ARoomOutsideVolume, "RoomOutsideVolume")

};

// Object: Class OpenWorldStreaming.RoomPortalVolume
// Size: 0x478 (Inherited: 0x478)
struct ARoomPortalVolume : ARoomVolume
{	DEFINE_UE_CLASS_HELPERS(ARoomPortalVolume, "RoomPortalVolume")

};

// Object: Class OpenWorldStreaming.StreamingLerpSpline
// Size: 0x378 (Inherited: 0x370)
struct AStreamingLerpSpline : AActor
{
	struct USplineComponent* SplineComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(AStreamingLerpSpline, "StreamingLerpSpline")

};

// Object: Class OpenWorldStreaming.StreamingLerpVolume
// Size: 0x3D8 (Inherited: 0x3A8)
struct AStreamingLerpVolume : AVolume
{
	struct FName MapName; // 0x3A8(0x8)
	uint8_t bOneWay : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x3]; // 0x3B1(0x3)
	float Peak; // 0x3B4(0x4)
	float Power; // 0x3B8(0x4)
	float Step; // 0x3BC(0x4)
	struct TArray<struct AStreamingLerpSpline*> Splines; // 0x3C0(0x10)
	uint8_t Pad_0x3D0[0x8]; // 0x3D0(0x8)
	DEFINE_UE_CLASS_HELPERS(AStreamingLerpVolume, "StreamingLerpVolume")

};

// Object: Class OpenWorldStreaming.PartitionZVolume
// Size: 0x3B8 (Inherited: 0x3A8)
struct APartitionZVolume : AVolume
{
	struct UMaterialInstanceDynamic* DebugMaterialInstance; // 0x3A8(0x8)
	uint8_t bEnableColoredMesh : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t bEnableMobile : 1; // 0x3B1(0x1), Mask(0x1)
	uint8_t BitPad_0x3B1_1 : 7; // 0x3B1(0x1)
	uint8_t bEnablePC : 1; // 0x3B2(0x1), Mask(0x1)
	uint8_t BitPad_0x3B2_1 : 7; // 0x3B2(0x1)
	uint8_t Pad_0x3B3[0x5]; // 0x3B3(0x5)
	DEFINE_UE_CLASS_HELPERS(APartitionZVolume, "PartitionZVolume")

};

// Object: Class OpenWorldStreaming.SimpleProfilerBlueprintTools
// Size: 0x28 (Inherited: 0x28)
struct USimpleProfilerBlueprintTools : UBlueprintFunctionLibrary
{

	// Object: Function OpenWorldStreaming.SimpleProfilerBlueprintTools.EndSimpleProfiler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2e900
	// Params: [ Num(4) Size(0x1A) ]
	static void EndSimpleProfiler(struct UObject* WorldContext, struct FString MapName, uint8_t bReport, uint8_t bSave);

	// Object: Function OpenWorldStreaming.SimpleProfilerBlueprintTools.BeginSimpleProfiler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2e86c
	// Params: [ Num(1) Size(0x8) ]
	static void BeginSimpleProfiler(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(USimpleProfilerBlueprintTools, "SimpleProfilerBlueprintTools")

};

// Object: Class OpenWorldStreaming.StreamingLayer
// Size: 0x28 (Inherited: 0x28)
struct UStreamingLayer : UObject
{	DEFINE_UE_CLASS_HELPERS(UStreamingLayer, "StreamingLayer")

};

// Object: Class OpenWorldStreaming.StreamingLayerAssets
// Size: 0x28 (Inherited: 0x28)
struct UStreamingLayerAssets : UStreamingLayer
{	DEFINE_UE_CLASS_HELPERS(UStreamingLayerAssets, "StreamingLayerAssets")

};

// Object: Class OpenWorldStreaming.StreamingLayerBatchAssets
// Size: 0x150 (Inherited: 0x28)
struct UStreamingLayerBatchAssets : UStreamingLayer
{
	int32_t BatchSize; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct UObject* AssetClass; // 0x30(0x8)
	uint8_t bIs3D : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x117]; // 0x39(0x117)
	DEFINE_UE_CLASS_HELPERS(UStreamingLayerBatchAssets, "StreamingLayerBatchAssets")

};

// Object: Class OpenWorldStreaming.StreamingLayerDistance
// Size: 0x28 (Inherited: 0x28)
struct UStreamingLayerDistance : UStreamingLayer
{	DEFINE_UE_CLASS_HELPERS(UStreamingLayerDistance, "StreamingLayerDistance")

};

// Object: Class OpenWorldStreaming.StreamingLayerHLOD
// Size: 0x28 (Inherited: 0x28)
struct UStreamingLayerHLOD : UStreamingLayer
{	DEFINE_UE_CLASS_HELPERS(UStreamingLayerHLOD, "StreamingLayerHLOD")

};

// Object: Class OpenWorldStreaming.StreamingLayerVolume
// Size: 0x28 (Inherited: 0x28)
struct UStreamingLayerVolume : UStreamingLayer
{	DEFINE_UE_CLASS_HELPERS(UStreamingLayerVolume, "StreamingLayerVolume")

};

// Object: Class OpenWorldStreaming.SVTRenderAreaActor
// Size: 0x378 (Inherited: 0x370)
struct ASVTRenderAreaActor : AActor
{
	struct UBoxComponent* BoxComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ASVTRenderAreaActor, "SVTRenderAreaActor")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings
// Size: 0x2E8 (Inherited: 0x88)
struct UOpenWorldStreamingSettings : UOpenWorldSettings
{
	int32_t DefaultStreamingLevel; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct TArray<struct FStreamingLevelInfo> DefaultLevelIndexInfo; // 0x90(0x10)
	struct TArray<struct FStreamingLevelInfo> OverrideLevelIndexInfo; // 0xA0(0x10)
	struct TMap<int32_t, struct FString> LevelIndexValidationFolder; // 0xB0(0x50)
	int32_t NecessaryPriority; // 0x100(0x4)
	int32_t MajorPriority; // 0x104(0x4)
	struct FString StreamingSwitches; // 0x108(0x10)
	struct TArray<struct FStreamingLayerSwitch> StreamingLayerSwitches; // 0x118(0x10)
	struct TArray<struct FStreamingLayerDesc> DefaultStreamingGroups; // 0x128(0x10)
	struct TArray<struct FStreamingLayerDesc> OverrideStreamingGroups; // 0x138(0x10)
	struct TArray<struct FName> PhysicsGroups; // 0x148(0x10)
	struct TArray<struct FMapBroadphaseSettings> MapBroadphaseSettings; // 0x158(0x10)
	uint8_t bEnableBroadphaseMBPClient : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t bEnableBroadphaseMBPServer : 1; // 0x169(0x1), Mask(0x1)
	uint8_t BitPad_0x169_1 : 7; // 0x169(0x1)
	uint8_t Pad_0x16A[0x2]; // 0x16A(0x2)
	float MBPOuterMultipler; // 0x16C(0x4)
	int32_t MBPGridSize; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct TArray<float> VisibleZoomRate; // 0x178(0x10)
	float HLODInvisibleFarthestDistance; // 0x188(0x4)
	float LODClampDistance; // 0x18C(0x4)
	struct TArray<struct FOpenWorldStreamingLayerDesc> DefaultStreamingLayers; // 0x190(0x10)
	struct TArray<struct FOpenWorldStreamingLayerDesc> OverrideStreamingLayers; // 0x1A0(0x10)
	struct TArray<struct FName> SecondaryWorlds; // 0x1B0(0x10)
	uint8_t bCanDisableSimulation : 1; // 0x1C0(0x1), Mask(0x1)
	uint8_t BitPad_0x1C0_1 : 7; // 0x1C0(0x1)
	uint8_t bUsesGameplayAreaOrigin : 1; // 0x1C1(0x1), Mask(0x1)
	uint8_t BitPad_0x1C1_1 : 7; // 0x1C1(0x1)
	uint8_t Pad_0x1C2[0x6]; // 0x1C2(0x6)
	struct TArray<struct FString> BatchPrefixes; // 0x1C8(0x10)
	struct TArray<struct FString> LevelPVSEnabledLayers; // 0x1D8(0x10)
	uint8_t bEnableLevelHashId : 1; // 0x1E8(0x1), Mask(0x1)
	uint8_t BitPad_0x1E8_1 : 7; // 0x1E8(0x1)
	uint8_t Pad_0x1E9[0x7]; // 0x1E9(0x7)
	struct TMap<struct FString, struct FString> PhyscsProxyLayerMapping; // 0x1F0(0x50)
	struct TArray<struct FString> Partition3DMaps; // 0x240(0x10)
	uint8_t bZStreaming : 1; // 0x250(0x1), Mask(0x1)
	uint8_t BitPad_0x250_1 : 7; // 0x250(0x1)
	uint8_t Pad_0x251[0x7]; // 0x251(0x7)
	struct TArray<struct FOpenWorldStreamingStageLayerSetting> DefaultStages; // 0x258(0x10)
	struct TArray<struct FOpenWorldStreamingStageLayerSetting> OverrideStages; // 0x268(0x10)
	struct TArray<struct FOpenWorldStreamingStageSetting> DefaultStageSettings; // 0x278(0x10)
	struct TArray<struct FOpenWorldStreamingStageSetting> OverrideStageSettings; // 0x288(0x10)
	struct TArray<struct FString> LandscapeSwitchWildcards; // 0x298(0x10)
	struct TArray<struct FString> OverrideSceneGM; // 0x2A8(0x10)
	struct TArray<struct FString> FlushStreamingCVars; // 0x2B8(0x10)
	struct TArray<struct FCustomDisableLayerSetting> CustomDisableLayers; // 0x2C8(0x10)
	uint8_t Pad_0x2D8[0x10]; // 0x2D8(0x10)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings, "OpenWorldStreamingSettings")

};

// Object: Class OpenWorldStreaming.OpenWorldPIESettings
// Size: 0x88 (Inherited: 0x88)
struct UOpenWorldPIESettings : UOpenWorldSettings
{

	// Object: Function OpenWorldStreaming.OpenWorldPIESettings.Save
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2edf4
	// Params: [ Num(0) Size(0x0) ]
	static void Save();

	// Object: Function OpenWorldStreaming.OpenWorldPIESettings.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7e2eda4
	// Params: [ Num(1) Size(0x8) ]
	static struct UOpenWorldPIESettings* Get();
	DEFINE_UE_CLASS_HELPERS(UOpenWorldPIESettings, "OpenWorldPIESettings")

};

// Object: Class OpenWorldStreaming.CookedTileSettings
// Size: 0x90 (Inherited: 0x88)
struct UCookedTileSettings : UOpenWorldSettings
{
	int32_t NumTiles; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings, "CookedTileSettings")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings
// Size: 0x1B0 (Inherited: 0x88)
struct UOpenWorldTileSettings : UOpenWorldSettings
{
	struct TArray<struct FWorldTileFolder> Folders; // 0x88(0x10)
	struct TArray<struct FWorldTileFolderExtra> FolderExtras; // 0x98(0x10)
	struct TArray<struct FName> DefaultEditorFilterGroups; // 0xA8(0x10)
	struct TArray<struct FName> DefaultRuntimeUnbuiltFilterGroups; // 0xB8(0x10)
	struct TArray<struct FName> DefaultRuntimeBuiltFilterGroups; // 0xC8(0x10)
	struct TArray<struct FName> DefaultRuntimeUnbuiltUniqueFilterGroups; // 0xD8(0x10)
	struct TArray<struct FName> DefaultRuntimeBuiltUniqueFilterGroups; // 0xE8(0x10)
	struct TArray<struct FName> DefaultDynamicFilterGroups; // 0xF8(0x10)
	struct TArray<struct FUnbuiltGroupsForScene> UnbuiltGroupsForScenes; // 0x108(0x10)
	struct TArray<struct FMapReference> MapReferencers; // 0x118(0x10)
	struct TArray<struct FMapReference> MapDependencies; // 0x128(0x10)
	struct TArray<struct FMapRedirection> MapRedirections; // 0x138(0x10)
	struct TArray<struct FMapGameplayArea> MapGameplayAreas; // 0x148(0x10)
	struct TArray<struct FString> MappingWildcards; // 0x158(0x10)
	struct TArray<struct FString> DisabledWildcards_Mobile; // 0x168(0x10)
	struct TArray<struct FString> DisabledWildcards_PC; // 0x178(0x10)
	uint8_t bSkipDisabledWildcards : 1; // 0x188(0x1), Mask(0x1)
	uint8_t BitPad_0x188_1 : 7; // 0x188(0x1)
	uint8_t bConsiderPOISelection : 1; // 0x189(0x1), Mask(0x1)
	uint8_t BitPad_0x189_1 : 7; // 0x189(0x1)
	uint8_t bEnableBackupMaps : 1; // 0x18A(0x1), Mask(0x1)
	uint8_t BitPad_0x18A_1 : 7; // 0x18A(0x1)
	uint8_t bEnableBuildBackupMaps : 1; // 0x18B(0x1), Mask(0x1)
	uint8_t BitPad_0x18B_1 : 7; // 0x18B(0x1)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct TArray<struct FString> BackupEnabledMaps; // 0x190(0x10)
	struct TArray<struct FString> BackupEnabledDirs; // 0x1A0(0x10)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings, "OpenWorldTileSettings")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings
// Size: 0xF0 (Inherited: 0x88)
struct UOpenWorldFilterSettings : UOpenWorldSettings
{
	uint8_t bEnableMapping : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bDisableDefaultFilter : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t Pad_0x8A[0x6]; // 0x8A(0x6)
	struct TArray<struct FName> DisabledParentFilterMaps; // 0x90(0x10)
	struct TArray<struct FWorldTileFilter> EditorTileFilters; // 0xA0(0x10)
	struct TArray<struct FWorldTileFilter> RuntimeTileFilters; // 0xB0(0x10)
	struct TArray<struct FWorldTileFilter> DynamicTileFilters; // 0xC0(0x10)
	struct TArray<struct FString> ExclusionWildcards; // 0xD0(0x10)
	struct TArray<struct FString> LayersDistanceAdjustedScale; // 0xE0(0x10)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings, "OpenWorldFilterSettings")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~IceLand
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_IceLand : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_IceLand, "OpenWorldFoliageScalabilityConfig~IceLand")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Iceland_Breakthrough
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Iceland_Breakthrough : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Iceland_Breakthrough, "OpenWorldFoliageScalabilityConfig~Iceland_Breakthrough")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Iceland_SceneProfile
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Iceland_SceneProfile : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Iceland_SceneProfile, "OpenWorldFoliageScalabilityConfig~Iceland_SceneProfile")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Cracked_SceneProfile
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Cracked_SceneProfile : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Cracked_SceneProfile, "OpenWorldFoliageScalabilityConfig~Cracked_SceneProfile")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Cracked
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Cracked : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Cracked, "OpenWorldFoliageScalabilityConfig~Cracked")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Retrowar
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Retrowar : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Retrowar, "OpenWorldFoliageScalabilityConfig~Retrowar")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Retrowar_Conquest
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Retrowar_Conquest : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Retrowar_Conquest, "OpenWorldFoliageScalabilityConfig~Retrowar_Conquest")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Retrowar_SceneProfile
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Retrowar_SceneProfile : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Retrowar_SceneProfile, "OpenWorldFoliageScalabilityConfig~Retrowar_SceneProfile")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Crest
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Crest : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Crest, "OpenWorldFoliageScalabilityConfig~Crest")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Derail
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Derail : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Derail, "OpenWorldFoliageScalabilityConfig~Derail")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Monument
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Monument : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Monument, "OpenWorldFoliageScalabilityConfig~Monument")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Fault
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Fault : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Fault, "OpenWorldFoliageScalabilityConfig~Fault")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~NavalBattle
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_NavalBattle : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_NavalBattle, "OpenWorldFoliageScalabilityConfig~NavalBattle")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~Tide
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_Tide : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_Tide, "OpenWorldFoliageScalabilityConfig~Tide")

};

// Object: Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig~SpaceCenter_Ma1
// Size: 0x190 (Inherited: 0x190)
struct UOpenWorldFoliageScalabilityConfig_SpaceCenter_Ma1 : UOpenWorldFoliageScalabilityConfig
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageScalabilityConfig_SpaceCenter_Ma1, "OpenWorldFoliageScalabilityConfig~SpaceCenter_Ma1")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Cracked
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Cracked : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Cracked, "OpenWorldStreamingSettings~Cracked")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Iceland_Breakthrough
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Iceland_Breakthrough : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Iceland_Breakthrough, "OpenWorldStreamingSettings~Iceland_Breakthrough")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Iceland_Tower
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Iceland_Tower : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Iceland_Tower, "OpenWorldStreamingSettings~Iceland_Tower")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Iceland_BigEvent
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Iceland_BigEvent : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Iceland_BigEvent, "OpenWorldStreamingSettings~Iceland_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Forrest_Long3
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Forrest_Long3 : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Forrest_Long3, "OpenWorldStreamingSettings~Forrest_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Forrest_WithFire
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Forrest_WithFire : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Forrest_WithFire, "OpenWorldStreamingSettings~Forrest_WithFire")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Forrest_WithoutFire
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Forrest_WithoutFire : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Forrest_WithoutFire, "OpenWorldStreamingSettings~Forrest_WithoutFire")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~IceLand
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_IceLand : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_IceLand, "OpenWorldStreamingSettings~IceLand")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Gibraltar
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Gibraltar : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Gibraltar, "OpenWorldStreamingSettings~Gibraltar")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Gibraltar_WareHouse
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Gibraltar_WareHouse : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Gibraltar_WareHouse, "OpenWorldStreamingSettings~Gibraltar_WareHouse")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Gibraltar_BigEvent
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Gibraltar_BigEvent : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Gibraltar_BigEvent, "OpenWorldStreamingSettings~Gibraltar_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Shafted
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Shafted : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Shafted, "OpenWorldStreamingSettings~Shafted")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Derail
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Derail : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Derail, "OpenWorldStreamingSettings~Derail")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Retrowar
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Retrowar : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Retrowar, "OpenWorldStreamingSettings~Retrowar")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~SpaceCenter_Ma1
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_SpaceCenter_Ma1 : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_SpaceCenter_Ma1, "OpenWorldStreamingSettings~SpaceCenter_Ma1")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Dam_Iris_Long3
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Dam_Iris_Long3 : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Dam_Iris_Long3, "OpenWorldStreamingSettings~Dam_Iris_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Dam_Iris_Underground
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Dam_Iris_Underground : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Dam_Iris_Underground, "OpenWorldStreamingSettings~Dam_Iris_Underground")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Brakkesh_Long3
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Brakkesh_Long3 : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Brakkesh_Long3, "OpenWorldStreamingSettings~Brakkesh_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~OldCity_Long3
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_OldCity_Long3 : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_OldCity_Long3, "OpenWorldStreamingSettings~OldCity_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Crest
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Crest : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Crest, "OpenWorldStreamingSettings~Crest")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Tide
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Tide : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Tide, "OpenWorldStreamingSettings~Tide")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~NavalBattle
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_NavalBattle : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_NavalBattle, "OpenWorldStreamingSettings~NavalBattle")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Fault
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Fault : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Fault, "OpenWorldStreamingSettings~Fault")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Collapse
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Collapse : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Collapse, "OpenWorldStreamingSettings~Collapse")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Collapse_CBD
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Collapse_CBD : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Collapse_CBD, "OpenWorldStreamingSettings~Collapse_CBD")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Collapse_BigEvent
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Collapse_BigEvent : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Collapse_BigEvent, "OpenWorldStreamingSettings~Collapse_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Collapse_GasStation
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Collapse_GasStation : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Collapse_GasStation, "OpenWorldStreamingSettings~Collapse_GasStation")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Collapse_GasStation_Station
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Collapse_GasStation_Station : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Collapse_GasStation_Station, "OpenWorldStreamingSettings~Collapse_GasStation_Station")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Collapse_GasStation_Foliage
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Collapse_GasStation_Foliage : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Collapse_GasStation_Foliage, "OpenWorldStreamingSettings~Collapse_GasStation_Foliage")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Collapse_SmallEvent
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Collapse_SmallEvent : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Collapse_SmallEvent, "OpenWorldStreamingSettings~Collapse_SmallEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Monument
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Monument : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Monument, "OpenWorldStreamingSettings~Monument")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Suez
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Suez : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Suez, "OpenWorldStreamingSettings~Suez")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Suez_BigEvent
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Suez_BigEvent : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Suez_BigEvent, "OpenWorldStreamingSettings~Suez_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Suez_Warehouse
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Suez_Warehouse : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Suez_Warehouse, "OpenWorldStreamingSettings~Suez_Warehouse")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Suez_Base
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Suez_Base : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Suez_Base, "OpenWorldStreamingSettings~Suez_Base")

};

// Object: Class OpenWorldStreaming.OpenWorldStreamingSettings~Suez_Tower
// Size: 0x2E8 (Inherited: 0x2E8)
struct UOpenWorldStreamingSettings_Suez_Tower : UOpenWorldStreamingSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldStreamingSettings_Suez_Tower, "OpenWorldStreamingSettings~Suez_Tower")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Level1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Level1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Level1, "CookedTileSettings~Brakkesh_Level1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Level2
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Level2 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Level2, "CookedTileSettings~Brakkesh_Level2")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Level21
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Level21 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Level21, "CookedTileSettings~Brakkesh_Level21")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Level22
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Level22 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Level22, "CookedTileSettings~Brakkesh_Level22")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Level23
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Level23 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Level23, "CookedTileSettings~Brakkesh_Level23")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Level3
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Level3 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Level3, "CookedTileSettings~Brakkesh_Level3")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Level51
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Level51 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Level51, "CookedTileSettings~Brakkesh_Level51")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Long3
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Long3 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Long3, "CookedTileSettings~Brakkesh_Long3")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_BigEvent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_BigEvent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_BigEvent, "CookedTileSettings~Collapse_BigEvent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_Breakthrough, "CookedTileSettings~Collapse_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_CBD
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_CBD : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_CBD, "CookedTileSettings~Collapse_CBD")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_CBD_Back
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_CBD_Back : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_CBD_Back, "CookedTileSettings~Collapse_CBD_Back")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_CBD_Front
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_CBD_Front : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_CBD_Front, "CookedTileSettings~Collapse_CBD_Front")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_Conquest, "CookedTileSettings~Collapse_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_GasStation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_GasStation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_GasStation, "CookedTileSettings~Collapse_GasStation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_GasStation_Foliage
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_GasStation_Foliage : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_GasStation_Foliage, "CookedTileSettings~Collapse_GasStation_Foliage")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_HardPoint
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_HardPoint : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_HardPoint, "CookedTileSettings~Collapse_HardPoint")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_Siege, "CookedTileSettings~Collapse_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_SmallEvent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_SmallEvent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_SmallEvent, "CookedTileSettings~Collapse_SmallEvent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_SteelTorrent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_SteelTorrent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_SteelTorrent, "CookedTileSettings~Collapse_SteelTorrent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_TacticalConquest, "CookedTileSettings~Collapse_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_TacticalConquestB, "CookedTileSettings~Collapse_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~CollectionRoom
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_CollectionRoom : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_CollectionRoom, "CookedTileSettings~CollectionRoom")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Colosseum
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Colosseum : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Colosseum, "CookedTileSettings~Colosseum")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Colosseum_BreakThrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Colosseum_BreakThrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Colosseum_BreakThrough, "CookedTileSettings~Colosseum_BreakThrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~OldCity
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_OldCity : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_OldCity, "CookedTileSettings~OldCity")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~OldCity_Level1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_OldCity_Level1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_OldCity_Level1, "CookedTileSettings~OldCity_Level1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~OldCity_Level2
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_OldCity_Level2 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_OldCity_Level2, "CookedTileSettings~OldCity_Level2")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~OldCity_Level3
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_OldCity_Level3 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_OldCity_Level3, "CookedTileSettings~OldCity_Level3")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_Breakthrough, "CookedTileSettings~Cracked_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_CaptureTheFlag
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_CaptureTheFlag : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_CaptureTheFlag, "CookedTileSettings~Cracked_CaptureTheFlag")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_Conquest, "CookedTileSettings~Cracked_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_FlagWar
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_FlagWar : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_FlagWar, "CookedTileSettings~Cracked_FlagWar")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_HardPoint
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_HardPoint : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_HardPoint, "CookedTileSettings~Cracked_HardPoint")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_Siege, "CookedTileSettings~Cracked_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_SteelTorrent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_SteelTorrent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_SteelTorrent, "CookedTileSettings~Cracked_SteelTorrent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_TacticalConquest, "CookedTileSettings~Cracked_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_TacticalConquestB, "CookedTileSettings~Cracked_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_Warehouse
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_Warehouse : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_Warehouse, "CookedTileSettings~Cracked_Warehouse")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Crest_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Crest_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Crest_Breakthrough, "CookedTileSettings~Crest_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Crest_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Crest_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Crest_Conquest, "CookedTileSettings~Crest_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Crest_In
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Crest_In : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Crest_In, "CookedTileSettings~Crest_In")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Crest_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Crest_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Crest_TacticalConquest, "CookedTileSettings~Crest_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_WithEvent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_WithEvent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_WithEvent, "CookedTileSettings~Dam_Iris_WithEvent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_WithoutEvent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_WithoutEvent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_WithoutEvent, "CookedTileSettings~Dam_Iris_WithoutEvent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level1, "CookedTileSettings~Dam_Iris_Level1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level11
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level11 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level11, "CookedTileSettings~Dam_Iris_Level11")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level12
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level12 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level12, "CookedTileSettings~Dam_Iris_Level12")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level2
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level2 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level2, "CookedTileSettings~Dam_Iris_Level2")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level21
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level21 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level21, "CookedTileSettings~Dam_Iris_Level21")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level22
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level22 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level22, "CookedTileSettings~Dam_Iris_Level22")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level23
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level23 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level23, "CookedTileSettings~Dam_Iris_Level23")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level31
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level31 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level31, "CookedTileSettings~Dam_Iris_Level31")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level32
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level32 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level32, "CookedTileSettings~Dam_Iris_Level32")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level33
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level33 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level33, "CookedTileSettings~Dam_Iris_Level33")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level42
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level42 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level42, "CookedTileSettings~Dam_Iris_Level42")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Level51
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Level51 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Level51, "CookedTileSettings~Dam_Iris_Level51")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Long3
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Long3 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Long3, "CookedTileSettings~Dam_Iris_Long3")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Underground
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Underground : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Underground, "CookedTileSettings~Dam_Iris_Underground")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Derail_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Derail_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Derail_Breakthrough, "CookedTileSettings~Derail_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Derail_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Derail_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Derail_Conquest, "CookedTileSettings~Derail_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Derail_ConquestMode2
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Derail_ConquestMode2 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Derail_ConquestMode2, "CookedTileSettings~Derail_ConquestMode2")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Derail_SteelTorrent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Derail_SteelTorrent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Derail_SteelTorrent, "CookedTileSettings~Derail_SteelTorrent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Derail_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Derail_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Derail_TacticalConquest, "CookedTileSettings~Derail_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Derail_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Derail_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Derail_TacticalConquestB, "CookedTileSettings~Derail_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~EffectsTestMap
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_EffectsTestMap : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_EffectsTestMap, "CookedTileSettings~EffectsTestMap")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~EffectsTestMap_Destructable
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_EffectsTestMap_Destructable : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_EffectsTestMap_Destructable, "CookedTileSettings~EffectsTestMap_Destructable")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~EffectsTestMap_Empty
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_EffectsTestMap_Empty : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_EffectsTestMap_Empty, "CookedTileSettings~EffectsTestMap_Empty")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~EffectsTestMap_VFX
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_EffectsTestMap_VFX : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_EffectsTestMap_VFX, "CookedTileSettings~EffectsTestMap_VFX")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Fault
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Fault : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Fault, "CookedTileSettings~Fault")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Fault_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Fault_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Fault_Breakthrough, "CookedTileSettings~Fault_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Fault_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Fault_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Fault_Conquest, "CookedTileSettings~Fault_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Fault_FlagWar
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Fault_FlagWar : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Fault_FlagWar, "CookedTileSettings~Fault_FlagWar")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Fault_HardPoint
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Fault_HardPoint : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Fault_HardPoint, "CookedTileSettings~Fault_HardPoint")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Fault_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Fault_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Fault_TacticalConquestB, "CookedTileSettings~Fault_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_WithAirCrash
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_WithAirCrash : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_WithAirCrash, "CookedTileSettings~Forrest_WithAirCrash")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_WithFire
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_WithFire : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_WithFire, "CookedTileSettings~Forrest_WithFire")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_WithoutAirCrash
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_WithoutAirCrash : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_WithoutAirCrash, "CookedTileSettings~Forrest_WithoutAirCrash")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_WithoutFire
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_WithoutFire : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_WithoutFire, "CookedTileSettings~Forrest_WithoutFire")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Level1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Level1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Level1, "CookedTileSettings~Forrest_Level1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Level11
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Level11 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Level11, "CookedTileSettings~Forrest_Level11")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Level12
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Level12 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Level12, "CookedTileSettings~Forrest_Level12")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Level2
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Level2 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Level2, "CookedTileSettings~Forrest_Level2")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Level21
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Level21 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Level21, "CookedTileSettings~Forrest_Level21")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Level22
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Level22 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Level22, "CookedTileSettings~Forrest_Level22")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Level999
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Level999 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Level999, "CookedTileSettings~Forrest_Level999")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Long3
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Long3 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Long3, "CookedTileSettings~Forrest_Long3")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Tutorial
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Tutorial : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Tutorial, "CookedTileSettings~Forrest_Tutorial")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_BigEvent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_BigEvent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_BigEvent, "CookedTileSettings~Gibraltar_BigEvent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_Breakthrough, "CookedTileSettings~Gibraltar_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_Conquest, "CookedTileSettings~Gibraltar_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_FlagWar
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_FlagWar : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_FlagWar, "CookedTileSettings~Gibraltar_FlagWar")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_Siege, "CookedTileSettings~Gibraltar_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_TacticalConquest, "CookedTileSettings~Gibraltar_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_TacticalConquestB, "CookedTileSettings~Gibraltar_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_WareHouse
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_WareHouse : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_WareHouse, "CookedTileSettings~Gibraltar_WareHouse")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_WareHouseInside
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_WareHouseInside : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_WareHouseInside, "CookedTileSettings~Gibraltar_WareHouseInside")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_BigEvent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_BigEvent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_BigEvent, "CookedTileSettings~Iceland_BigEvent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_Breakthrough, "CookedTileSettings~Iceland_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_CaptureTheFlag
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_CaptureTheFlag : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_CaptureTheFlag, "CookedTileSettings~Iceland_CaptureTheFlag")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_Conquest, "CookedTileSettings~Iceland_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_Gym
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_Gym : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_Gym, "CookedTileSettings~Iceland_Gym")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_Siege, "CookedTileSettings~Iceland_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_SteelTorrent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_SteelTorrent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_SteelTorrent, "CookedTileSettings~Iceland_SteelTorrent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_TacticalConquest, "CookedTileSettings~Iceland_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_TacticalConquestB, "CookedTileSettings~Iceland_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_Tower
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_Tower : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_Tower, "CookedTileSettings~Iceland_Tower")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iceland_TowerB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iceland_TowerB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iceland_TowerB, "CookedTileSettings~Iceland_TowerB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Intro
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Intro : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Intro, "CookedTileSettings~Intro")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Iris_Entry
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Iris_Entry : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Iris_Entry, "CookedTileSettings~Iris_Entry")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Kharkiv_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Kharkiv_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Kharkiv_Breakthrough, "CookedTileSettings~Kharkiv_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument, "CookedTileSettings~Monument")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_Breakthrough, "CookedTileSettings~Monument_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_Conquest, "CookedTileSettings~Monument_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_HardPoint
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_HardPoint : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_HardPoint, "CookedTileSettings~Monument_HardPoint")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_Siege, "CookedTileSettings~Monument_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_SteelTorrent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_SteelTorrent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_SteelTorrent, "CookedTileSettings~Monument_SteelTorrent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_TacticalConquest, "CookedTileSettings~Monument_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_TacticalConquestB, "CookedTileSettings~Monument_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~NavalBattle
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_NavalBattle : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_NavalBattle, "CookedTileSettings~NavalBattle")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~NavalBattle_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_NavalBattle_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_NavalBattle_Breakthrough, "CookedTileSettings~NavalBattle_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~NavalBattle_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_NavalBattle_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_NavalBattle_Conquest, "CookedTileSettings~NavalBattle_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~NavalBattle_FlagWar
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_NavalBattle_FlagWar : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_NavalBattle_FlagWar, "CookedTileSettings~NavalBattle_FlagWar")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~NavalBattle_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_NavalBattle_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_NavalBattle_Siege, "CookedTileSettings~NavalBattle_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~NavalBattle_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_NavalBattle_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_NavalBattle_TacticalConquest, "CookedTileSettings~NavalBattle_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~OldCity_Long3
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_OldCity_Long3 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_OldCity_Long3, "CookedTileSettings~OldCity_Long3")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Breakthrough, "CookedTileSettings~Retrowar_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_CaptureTheFlag
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_CaptureTheFlag : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_CaptureTheFlag, "CookedTileSettings~Retrowar_CaptureTheFlag")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Conquest, "CookedTileSettings~Retrowar_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_HardPoint
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_HardPoint : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_HardPoint, "CookedTileSettings~Retrowar_HardPoint")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Night_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Night_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Night_Breakthrough, "CookedTileSettings~Retrowar_Night_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Night_CaptureTheFlag
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Night_CaptureTheFlag : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Night_CaptureTheFlag, "CookedTileSettings~Retrowar_Night_CaptureTheFlag")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Night_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Night_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Night_Conquest, "CookedTileSettings~Retrowar_Night_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Night_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Night_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Night_Siege, "CookedTileSettings~Retrowar_Night_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Night_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Night_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Night_TacticalConquest, "CookedTileSettings~Retrowar_Night_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Siege, "CookedTileSettings~Retrowar_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_TacticalConquest, "CookedTileSettings~Retrowar_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_TacticalConquestB, "CookedTileSettings~Retrowar_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SafeHouse
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SafeHouse : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SafeHouse, "CookedTileSettings~SafeHouse")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Brakkesh_Long3_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Brakkesh_Long3_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Brakkesh_Long3_Automation, "CookedTileSettings~Brakkesh_Long3_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Collapse_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Collapse_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Collapse_Automation, "CookedTileSettings~Collapse_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Cracked_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Cracked_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Cracked_Automation, "CookedTileSettings~Cracked_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Crest_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Crest_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Crest_Automation, "CookedTileSettings~Crest_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Iris_Long3_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Iris_Long3_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Iris_Long3_Automation, "CookedTileSettings~Dam_Iris_Long3_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Dam_Water_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Dam_Water_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Dam_Water_Automation, "CookedTileSettings~Dam_Water_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Derail_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Derail_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Derail_Automation, "CookedTileSettings~Derail_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Fault_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Fault_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Fault_Automation, "CookedTileSettings~Fault_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Forrest_Long3_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Forrest_Long3_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Forrest_Long3_Automation, "CookedTileSettings~Forrest_Long3_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Gibraltar_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Gibraltar_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Gibraltar_Automation, "CookedTileSettings~Gibraltar_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~IceLand_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_IceLand_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_IceLand_Automation, "CookedTileSettings~IceLand_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Monument_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Monument_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Monument_Automation, "CookedTileSettings~Monument_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Naval_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Naval_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Naval_Automation, "CookedTileSettings~Naval_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~OldCity_Long3_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_OldCity_Long3_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_OldCity_Long3_Automation, "CookedTileSettings~OldCity_Long3_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Automation, "CookedTileSettings~Retrowar_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Retrowar_Night_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Retrowar_Night_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Retrowar_Night_Automation, "CookedTileSettings~Retrowar_Night_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Shafted_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Shafted_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Shafted_Automation, "CookedTileSettings~Shafted_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_Ma1_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_Ma1_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_Ma1_Automation, "CookedTileSettings~SpaceCenter_Ma1_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Automation, "CookedTileSettings~Suez_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Tide_Automation
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Tide_Automation : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Tide_Automation, "CookedTileSettings~Tide_Automation")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Shafted_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Shafted_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Shafted_Breakthrough, "CookedTileSettings~Shafted_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Shafted_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Shafted_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Shafted_Conquest, "CookedTileSettings~Shafted_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Shafted_HardPoint
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Shafted_HardPoint : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Shafted_HardPoint, "CookedTileSettings~Shafted_HardPoint")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Shafted_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Shafted_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Shafted_TacticalConquest, "CookedTileSettings~Shafted_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Skyline
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Skyline : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Skyline, "CookedTileSettings~Skyline")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Skyline_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Skyline_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Skyline_Breakthrough, "CookedTileSettings~Skyline_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_WithEvent_Ma1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_WithEvent_Ma1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_WithEvent_Ma1, "CookedTileSettings~SpaceCenter_WithEvent_Ma1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_WithoutEvent_Ma1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_WithoutEvent_Ma1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_WithoutEvent_Ma1, "CookedTileSettings~SpaceCenter_WithoutEvent_Ma1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_Level1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_Level1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_Level1, "CookedTileSettings~SpaceCenter_Level1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_Level2
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_Level2 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_Level2, "CookedTileSettings~SpaceCenter_Level2")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_Level21
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_Level21 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_Level21, "CookedTileSettings~SpaceCenter_Level21")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_Level22
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_Level22 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_Level22, "CookedTileSettings~SpaceCenter_Level22")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_Level51
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_Level51 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_Level51, "CookedTileSettings~SpaceCenter_Level51")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~SpaceCenter_Ma1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_SpaceCenter_Ma1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_SpaceCenter_Ma1, "CookedTileSettings~SpaceCenter_Ma1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez, "CookedTileSettings~Suez")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Base
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Base : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Base, "CookedTileSettings~Suez_Base")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_BigEvent
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_BigEvent : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_BigEvent, "CookedTileSettings~Suez_BigEvent")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Breakthrough
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Breakthrough : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Breakthrough, "CookedTileSettings~Suez_Breakthrough")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Conquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Conquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Conquest, "CookedTileSettings~Suez_Conquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_FlagWar
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_FlagWar : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_FlagWar, "CookedTileSettings~Suez_FlagWar")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Siege
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Siege : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Siege, "CookedTileSettings~Suez_Siege")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_TacticalConquest
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_TacticalConquest : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_TacticalConquest, "CookedTileSettings~Suez_TacticalConquest")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_TacticalConquestB
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_TacticalConquestB : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_TacticalConquestB, "CookedTileSettings~Suez_TacticalConquestB")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Tower
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Tower : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Tower, "CookedTileSettings~Suez_Tower")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Tower_C
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Tower_C : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Tower_C, "CookedTileSettings~Suez_Tower_C")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Suez_Warehouse
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Suez_Warehouse : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Suez_Warehouse, "CookedTileSettings~Suez_Warehouse")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Tide
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Tide : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Tide, "CookedTileSettings~Tide")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Tide_Level1
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Tide_Level1 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Tide_Level1, "CookedTileSettings~Tide_Level1")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Tide_Level2
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Tide_Level2 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Tide_Level2, "CookedTileSettings~Tide_Level2")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Tide_Level21
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Tide_Level21 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Tide_Level21, "CookedTileSettings~Tide_Level21")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Tide_Level3
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Tide_Level3 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Tide_Level3, "CookedTileSettings~Tide_Level3")

};

// Object: Class OpenWorldStreaming.CookedTileSettings~Tide_Level51
// Size: 0x90 (Inherited: 0x90)
struct UCookedTileSettings_Tide_Level51 : UCookedTileSettings
{	DEFINE_UE_CLASS_HELPERS(UCookedTileSettings_Tide_Level51, "CookedTileSettings~Tide_Level51")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~SpaceCenter_Level1
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_SpaceCenter_Level1 : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_SpaceCenter_Level1, "OpenWorldTileSettings~SpaceCenter_Level1")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Brakkesh_Level1
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Brakkesh_Level1 : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Brakkesh_Level1, "OpenWorldTileSettings~Brakkesh_Level1")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Gibraltar
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Gibraltar : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Gibraltar, "OpenWorldTileSettings~Gibraltar")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Gibraltar_BigEvent
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Gibraltar_BigEvent : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Gibraltar_BigEvent, "OpenWorldTileSettings~Gibraltar_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Gibraltar_Breakthrough
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Gibraltar_Breakthrough : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Gibraltar_Breakthrough, "OpenWorldTileSettings~Gibraltar_Breakthrough")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Iceland_BigEvent
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Iceland_BigEvent : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Iceland_BigEvent, "OpenWorldTileSettings~Iceland_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Forrest_WithFire
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Forrest_WithFire : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Forrest_WithFire, "OpenWorldTileSettings~Forrest_WithFire")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Crest
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Crest : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Crest, "OpenWorldTileSettings~Crest")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Crest_Breakthrough
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Crest_Breakthrough : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Crest_Breakthrough, "OpenWorldTileSettings~Crest_Breakthrough")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Crest_Conquest
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Crest_Conquest : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Crest_Conquest, "OpenWorldTileSettings~Crest_Conquest")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Crest_TacticalConquest
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Crest_TacticalConquest : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Crest_TacticalConquest, "OpenWorldTileSettings~Crest_TacticalConquest")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Fault_Breakthrough
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Fault_Breakthrough : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Fault_Breakthrough, "OpenWorldTileSettings~Fault_Breakthrough")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Forrest_Long3
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Forrest_Long3 : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Forrest_Long3, "OpenWorldTileSettings~Forrest_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Monument_Breakthrough
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Monument_Breakthrough : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Monument_Breakthrough, "OpenWorldTileSettings~Monument_Breakthrough")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Collapse_Breakthrough
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Collapse_Breakthrough : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Collapse_Breakthrough, "OpenWorldTileSettings~Collapse_Breakthrough")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Collapse_BigEvent
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Collapse_BigEvent : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Collapse_BigEvent, "OpenWorldTileSettings~Collapse_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldTileSettings~Suez_BigEvent
// Size: 0x1B0 (Inherited: 0x1B0)
struct UOpenWorldTileSettings_Suez_BigEvent : UOpenWorldTileSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldTileSettings_Suez_BigEvent, "OpenWorldTileSettings~Suez_BigEvent")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Forrest_Long3
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Forrest_Long3 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Forrest_Long3, "OpenWorldFilterSettings~Forrest_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~SpaceCenter_Long3
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_SpaceCenter_Long3 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_SpaceCenter_Long3, "OpenWorldFilterSettings~SpaceCenter_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~SpaceCenter_Ma1
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_SpaceCenter_Ma1 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_SpaceCenter_Ma1, "OpenWorldFilterSettings~SpaceCenter_Ma1")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Collapse
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Collapse : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Collapse, "OpenWorldFilterSettings~Collapse")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Forrest_Level21
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Forrest_Level21 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Forrest_Level21, "OpenWorldFilterSettings~Forrest_Level21")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Forrest_Level22
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Forrest_Level22 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Forrest_Level22, "OpenWorldFilterSettings~Forrest_Level22")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Forrest_Level23
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Forrest_Level23 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Forrest_Level23, "OpenWorldFilterSettings~Forrest_Level23")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Brakkesh_Level21
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Brakkesh_Level21 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Brakkesh_Level21, "OpenWorldFilterSettings~Brakkesh_Level21")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Brakkesh_Level22
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Brakkesh_Level22 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Brakkesh_Level22, "OpenWorldFilterSettings~Brakkesh_Level22")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Brakkesh_Level23
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Brakkesh_Level23 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Brakkesh_Level23, "OpenWorldFilterSettings~Brakkesh_Level23")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Dam_Iris_Level21
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Dam_Iris_Level21 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Dam_Iris_Level21, "OpenWorldFilterSettings~Dam_Iris_Level21")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Dam_Iris_Level22
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Dam_Iris_Level22 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Dam_Iris_Level22, "OpenWorldFilterSettings~Dam_Iris_Level22")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Dam_Iris_Level23
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Dam_Iris_Level23 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Dam_Iris_Level23, "OpenWorldFilterSettings~Dam_Iris_Level23")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Dam_Iris_Level42
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Dam_Iris_Level42 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Dam_Iris_Level42, "OpenWorldFilterSettings~Dam_Iris_Level42")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~SpaceCenter_Level21
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_SpaceCenter_Level21 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_SpaceCenter_Level21, "OpenWorldFilterSettings~SpaceCenter_Level21")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~SpaceCenter_Level22
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_SpaceCenter_Level22 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_SpaceCenter_Level22, "OpenWorldFilterSettings~SpaceCenter_Level22")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Tide_Level21
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Tide_Level21 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Tide_Level21, "OpenWorldFilterSettings~Tide_Level21")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~TOD_StandardScene
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_TOD_StandardScene : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_TOD_StandardScene, "OpenWorldFilterSettings~TOD_StandardScene")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Iris_Entry
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Iris_Entry : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Iris_Entry, "OpenWorldFilterSettings~Iris_Entry")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~SafeHouse
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_SafeHouse : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_SafeHouse, "OpenWorldFilterSettings~SafeHouse")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Intro
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Intro : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Intro, "OpenWorldFilterSettings~Intro")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~BiomeLookdev
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_BiomeLookdev : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_BiomeLookdev, "OpenWorldFilterSettings~BiomeLookdev")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Iris_UIMaps
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Iris_UIMaps : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Iris_UIMaps, "OpenWorldFilterSettings~Iris_UIMaps")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Shafted_UIMaps
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Shafted_UIMaps : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Shafted_UIMaps, "OpenWorldFilterSettings~Shafted_UIMaps")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Gibraltar_UIMaps
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Gibraltar_UIMaps : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Gibraltar_UIMaps, "OpenWorldFilterSettings~Gibraltar_UIMaps")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Retrowar_UIMaps
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Retrowar_UIMaps : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Retrowar_UIMaps, "OpenWorldFilterSettings~Retrowar_UIMaps")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Iris_Long3
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Iris_Long3 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Iris_Long3, "OpenWorldFilterSettings~Iris_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Crest
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Crest : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Crest, "OpenWorldFilterSettings~Crest")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~CollectionRoom
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_CollectionRoom : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_CollectionRoom, "OpenWorldFilterSettings~CollectionRoom")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~ForestEgg_Test
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_ForestEgg_Test : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_ForestEgg_Test, "OpenWorldFilterSettings~ForestEgg_Test")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~CollectionRoom_Ma3
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_CollectionRoom_Ma3 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_CollectionRoom_Ma3, "OpenWorldFilterSettings~CollectionRoom_Ma3")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Dam_Iris_Long3
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Dam_Iris_Long3 : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Dam_Iris_Long3, "OpenWorldFilterSettings~Dam_Iris_Long3")

};

// Object: Class OpenWorldStreaming.OpenWorldFilterSettings~Suez
// Size: 0xF0 (Inherited: 0xF0)
struct UOpenWorldFilterSettings_Suez : UOpenWorldFilterSettings
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldFilterSettings_Suez, "OpenWorldFilterSettings~Suez")

};

} // namespace SDK
