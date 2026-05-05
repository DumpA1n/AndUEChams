#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: DFMWeaponAssemble
// Enums: 13
// Structs: 27
// Classes: 38

struct AActor;
struct ADirectionalLight;
struct AEmitter;
struct AExponentialHeightFog;
struct AGPPlayerCameraManager;
struct AGPPlayerController;
struct ALevelSequenceActor;
struct ALightShadowVolume;
struct ANZSkyBoxActor;
struct APlayerCameraManager;
struct APostProcessVolume;
struct ASkeletalMeshActor;
struct ASkyLight;
struct AVehicleFrontendActor;
enum class EAdapterItemType : uint8_t;
enum class EAssemblerCamPoint : uint8_t;
enum class EAssemblerCameraType : uint8_t;
enum class EAttachPosition : uint8_t;
enum class EModularPartNodeType : uint8_t;
enum class ERelativeTransformSpace : uint8_t;
enum class EWeaponExtraModelType : uint8_t;
enum class EWeaponPartMeshType : uint8_t;
struct FGPModularWeaponPartNode;
struct FGPWeaponDescInfo;
struct FGunPresetRow;
struct FHeroItemFashionStruct;
struct FItemInfoContext;
struct FModularContext;
struct FModularWeaponInfo;
struct FPartsDataRow;
struct FRTIConfigRow;
struct FRTIParamData;
struct FTimerHandle;
struct FWeaponSkinInfo;
struct FWeaponSkin_TexasPoker_Card;
struct UAnimInstance;
struct UAnimMontage;
struct UAnimSequence;
struct UCurveFloat;
struct UDFMImage;
struct UGPModularWeaponDesc;
struct UImage;
struct ULightComponentBase;
struct UMeshComponent;
struct UMobilePlayerInput;
struct UModularApperanceBaseProvider;
struct UModularWeaponDesc;
struct UModularWeaponDynamicSkeletalMeshComponent;
struct UPaperSprite;
struct URuntimeIconManager;
struct URuntimeTile;
struct USceneCaptureComponent2D;
struct USceneComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct UTexture2D;
struct UTextureRenderTarget2D;
struct UVehicleFrontendContext;
struct UWeaponAdapterItemBase;
struct UWeaponSkinApperanceModiferBase;
struct UWorld;
struct FFastEquipResult;
struct FFastEquipResultDebugInfo;
struct FMobileDOFInfo;
struct FGunCameraParamsRow;
struct FBeginCamParams;
struct FPinchParams;
struct FCameraResetParamsRow;
struct FGunSlideParamsRow;
struct FSlideScreenParamsRow;
struct FSlideConfig;
struct FAssemblerCameraParamsRow;
struct FLoadAnimSeqHandle;
struct FLoadMeshHandle;
struct FStyleRecognitionInfo;
struct FGPAssemblePartNode;
struct FGPAssemblePartSocket;
struct FRTIOriginLightComponentData;
struct FRTILightBPData;
struct FRTIPreLoadRuntimeIconData;
struct FWeaponAllPresetGenerateContext;
struct FWeaponGeneratePresetRow;
struct FWeaponPresetGeneratePartSocket;
struct FWeaponPresetGenerateParam;
struct FWeaponTestWeaponPresetConfig;
struct FWeaponTestCharacterConfig;
struct FTestWeaponParam;
struct FTestCharacterParam;
struct UGunCameraParamsRowManager;
struct UAssemblerCameraParamsRowManager;
struct AAssemblerCameraCtrl;
struct AAssemblerStartPoint;
struct AAssembleWeaponActor;
struct UAssembleWeaponNodeTree;
struct UAssembleWeaponDataLibrary;
struct AAssembleWeaponMgr;
struct AAssemblyPlayerController;
struct ABracketActor;
struct ACaptureExclude;
struct ALightEnvToogle;
struct UDFMModularAppearanceProvider;
struct UDFMWeaponSkinUtil;
struct URTIActorData;
struct URTIActorData_HeroItem;
struct URTIActorData_Item;
struct URTIActorData_Vehicle;
struct URTIActorData_Weapon;
struct UCaptureRTResult;
struct ARTICapture;
struct URTICaptureHelper;
struct URTIResourceManager;
struct URuntimeIconAction;
struct URuntimeIconMaker;
struct UWeaponAdapterBaseSimple;
struct UWeaponAdapterItemAimDownSightsSimple;
struct UWeaponAdapterItemBipodSimple;
struct UWeaponAssemblerUtil;
struct UWeaponAssembleSubsystem;
struct UWeaponDataComponentAdapterSimple;
struct AWeaponDisplayBoard;
struct UWeaponExtraModelBaseSimple;
struct UWeaponPresetGenerateTool;
struct UWeaponPresetGenerateToolCommandlet;
struct AWeaponSkinPreviewSpawner;
struct UWeaponTest;
struct UWeaponTestWorldSystem;

// Object: Enum DFMWeaponAssemble.EWeaponLoadStatus
enum class EWeaponLoadStatus : uint8_t
{
	None = 0,
	LoadingMesh = 1,
	LoadingMaterial = 2,
	LoadingSkinModiferClass = 3,
	LoadingPendantModiferClass = 4,
	Success = 5,
	Faild = 6,
	EWeaponLoadStatus_MAX = 7
};

// Object: Enum DFMWeaponAssemble.EFastEquipOpreationCode
enum class EFastEquipOpreationCode : uint8_t
{
	Deault = 0,
	Add = 1,
	Remove = 2,
	Conflict = 4,
	VirtualPrepare = 8,
	VirtualPost = 16,
	EFastEquipOpreationCode_MAX = 17
};

// Object: Enum DFMWeaponAssemble.EAssemblePartSocketType
enum class EAssemblePartSocketType : uint8_t
{
	None = 0,
	Default = 1,
	RulesSocket = 2,
	EAssemblePartSocketType_MAX = 3
};

// Object: Enum DFMWeaponAssemble.ERTIActorDataLoadMesh
enum class ERTIActorDataLoadMesh : uint8_t
{
	Loading = 0,
	Success = 1,
	Fail = 2,
	ERTIActorDataLoadMesh_MAX = 3
};

// Object: Enum DFMWeaponAssemble.ERTIActorDataType
enum class ERTIActorDataType : uint8_t
{
	StaticIcon = 0,
	Weapon = 1,
	Vehicle = 2,
	HeroItem = 3,
	Item = 4,
	ERTIActorDataType_MAX = 5
};

// Object: Enum DFMWeaponAssemble.ECaptureRTResult
enum class ECaptureRTResult : uint8_t
{
	Waiting = 0,
	Success = 1,
	Fail_ConfigIsError = 2,
	Fail_RTSizeIsZero = 3,
	Fail_RTIsNULL = 4,
	Fail_WeaponIsNULL = 5,
	Fail_WeaponBoundsIsZero = 6,
	Fail_MeshError = 7,
	Fail_ShaderCompileError = 8,
	ECaptureRTResult_MAX = 9
};

// Object: Enum DFMWeaponAssemble.ERTICaptureType
enum class ERTICaptureType : uint8_t
{
	Game = 0,
	Editor = 1,
	ERTICaptureType_MAX = 2
};

// Object: Enum DFMWeaponAssemble.ERTICaptureMeshProcess
enum class ERTICaptureMeshProcess : uint8_t
{
	CaptureNone = 0,
	CaptureLowIcon = 1,
	CaptureHighIcon = 2,
	ERTICaptureMeshProcess_MAX = 3
};

// Object: Enum DFMWeaponAssemble.ERTICaptureState
enum class ERTICaptureState : uint8_t
{
	RTICaptureWaiting = 0,
	RTICaptureFail = 1,
	RTICaptureSuccess = 2,
	ERTICaptureState_MAX = 3
};

// Object: Enum DFMWeaponAssemble.ERTIActionProcess
enum class ERTIActionProcess : uint8_t
{
	Init = 0,
	Loading = 1,
	LoadFail = 2,
	LoadSuccess = 3,
	Capturing = 4,
	CaptureFail = 5,
	CaptureSuccess = 6,
	MergeSuccessOrFallBack = 7,
	Discard = 8,
	ERTIActionProcess_MAX = 9
};

// Object: Enum DFMWeaponAssemble.ERTIMerge
enum class ERTIMerge : uint8_t
{
	Close = 0,
	AllIcon = 1,
	OnlyWeaponIcon = 2,
	OnlyStaticIcon = 3,
	ERTIMerge_MAX = 4
};

// Object: Enum DFMWeaponAssemble.ERTIEnable
enum class ERTIEnable : uint8_t
{
	DisableAll = 0,
	EnableAll = 1,
	EnableWeaponIcon = 2,
	EnableStaticIcon = 3,
	ERTIEnable_MAX = 4
};

// Object: Enum DFMWeaponAssemble.EWeaponPresetGenerateType
enum class EWeaponPresetGenerateType : uint8_t
{
	CompletelyRandom = 0,
	MainAttribute = 1,
	OnlyMainAttribute = 2,
	EWeaponPresetGenerateType_MAX = 3
};

// Object: ScriptStruct DFMWeaponAssemble.FastEquipResult
// Size: 0x78 (Inherited: 0x0)
struct FFastEquipResult
{
	uint8_t bSuccess : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<uint64_t> RecyclePartGids; // 0x8(0x10)
	struct TArray<uint64_t> RecyclePartItemIds; // 0x18(0x10)
	struct TArray<uint32_t> RecyclePartIndexs; // 0x28(0x10)
	struct TArray<uint32_t> RecyclePartSocketIds; // 0x38(0x10)
	struct TArray<uint64_t> RecycleSocketGUIDs; // 0x48(0x10)
	struct TArray<struct FItemInfoContext> RecycleItemInfos; // 0x58(0x10)
	struct TArray<struct FFastEquipResultDebugInfo> DebugInfos; // 0x68(0x10)
};

// Object: ScriptStruct DFMWeaponAssemble.FastEquipResultDebugInfo
// Size: 0x20 (Inherited: 0x0)
struct FFastEquipResultDebugInfo
{
	uint8_t OpreationCode; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t OpreationID; // 0x8(0x8)
	uint64_t FromID; // 0x10(0x8)
	uint64_t SocketGUID; // 0x18(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.MobileDOFInfo
// Size: 0x34 (Inherited: 0x0)
struct FMobileDOFInfo
{
	uint8_t bOpen : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DOFFocalRegion; // 0x4(0x4)
	float DOFNearRegion; // 0x8(0x4)
	float DOFFarRegion; // 0xC(0x4)
	float DOFScale; // 0x10(0x4)
	float DOFNearBlurSize; // 0x14(0x4)
	float DOFFarBlurSize; // 0x18(0x4)
	float DepthOfFieldSensorWidth; // 0x1C(0x4)
	float DepthOfFieldSqueezeFactor; // 0x20(0x4)
	float DepthOfFieldFocalDistance; // 0x24(0x4)
	float DepthOfFieldDepthBlurAmount; // 0x28(0x4)
	float DepthOfFieldDepthBlurRadius; // 0x2C(0x4)
	float DepthOfFieldFstop; // 0x30(0x4)
};

// Object: ScriptStruct DFMWeaponAssemble.GunCameraParamsRow
// Size: 0x80 (Inherited: 0x8)
struct FGunCameraParamsRow : FTableRowBase
{
	uint64_t ID; // 0x8(0x8)
	uint8_t bAutoSize : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	EAssemblerCamPoint PointType; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	struct FRotator Rotation; // 0x14(0xC)
	struct FVector offset; // 0x20(0xC)
	float CameraDistance; // 0x2C(0x4)
	float FOV; // 0x30(0x4)
	float LerpSpeed; // 0x34(0x4)
	struct FMobileDOFInfo MobileDOFInfo; // 0x38(0x34)
	struct FVector FocusCenterOffset; // 0x6C(0xC)
	float FocusCenterDistanceRatio; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct DFMWeaponAssemble.BeginCamParams
// Size: 0x108 (Inherited: 0x0)
struct FBeginCamParams
{
	struct FGunCameraParamsRow CamParamsOnBegin; // 0x0(0x80)
	struct FGunCameraParamsRow CamParamsOnDiplay; // 0x80(0x80)
	float CamSpeed; // 0x100(0x4)
	uint8_t bActiveBeginCam : 1; // 0x104(0x1), Mask(0x1)
	uint8_t BitPad_0x104_1 : 7; // 0x104(0x1)
	uint8_t Pad_0x105[0x3]; // 0x105(0x3)
};

// Object: ScriptStruct DFMWeaponAssemble.PinchParams
// Size: 0x18 (Inherited: 0x0)
struct FPinchParams
{
	float PinchSpeed; // 0x0(0x4)
	float FovFactorWhenPinch; // 0x4(0x4)
	float FovFactorForReturn; // 0x8(0x4)
	uint8_t Pad_0xC[0xC]; // 0xC(0xC)
};

// Object: ScriptStruct DFMWeaponAssemble.CameraResetParamsRow
// Size: 0x20 (Inherited: 0x10)
struct FCameraResetParamsRow : FDescRowBase
{
	EAssemblerCamPoint CameraPoint; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float ResetCamLength; // 0x14(0x4)
	uint8_t bResetOffsetYToZero : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMWeaponAssemble.GunSlideParamsRow
// Size: 0x20 (Inherited: 0x10)
struct FGunSlideParamsRow : FDescRowBase
{
	struct TArray<struct FSlideScreenParamsRow> SlideConfigs; // 0x10(0x10)
};

// Object: ScriptStruct DFMWeaponAssemble.SlideScreenParamsRow
// Size: 0x40 (Inherited: 0x10)
struct FSlideScreenParamsRow : FDescRowBase
{
	EAssemblerCamPoint PointType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<struct FSlideConfig> SlideConfigs; // 0x18(0x10)
	struct TArray<EAssemblerCamPoint> AdditionLerpPointList; // 0x28(0x10)
	float AdditionPointLength; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMWeaponAssemble.SlideConfig
// Size: 0x14 (Inherited: 0x0)
struct FSlideConfig
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
	float MinDist; // 0x8(0x4)
	float MaxDuration; // 0xC(0x4)
	EAssemblerCamPoint PointType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct DFMWeaponAssemble.AssemblerCameraParamsRow
// Size: 0x20 (Inherited: 0x8)
struct FAssemblerCameraParamsRow : FTableRowBase
{
	uint64_t RecId; // 0x8(0x8)
	struct TArray<struct FGunCameraParamsRow> Params; // 0x10(0x10)
};

// Object: ScriptStruct DFMWeaponAssemble.LoadAnimSeqHandle
// Size: 0x38 (Inherited: 0x0)
struct FLoadAnimSeqHandle
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct DFMWeaponAssemble.LoadMeshHandle
// Size: 0x50 (Inherited: 0x0)
struct FLoadMeshHandle
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct DFMWeaponAssemble.StyleRecognitionInfo
// Size: 0x18 (Inherited: 0x0)
struct FStyleRecognitionInfo
{
	uint64_t StyleId; // 0x0(0x8)
	uint64_t RecognizeId; // 0x8(0x8)
	uint8_t bValid : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct DFMWeaponAssemble.GPAssemblePartNode
// Size: 0x58 (Inherited: 0x0)
struct FGPAssemblePartNode
{
	int32_t IndexInDesc; // 0x0(0x4)
	int16_t IndexInArray; // 0x4(0x2)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	uint64_t ItemID; // 0x8(0x8)
	EAssemblerCamPoint CamPoint; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	uint64_t Guid; // 0x18(0x8)
	uint64_t SocketGUID; // 0x20(0x8)
	int16_t ParentIndex; // 0x28(0x2)
	int16_t ParentSocketIndex; // 0x2A(0x2)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FGPAssemblePartSocket> AllSocketList; // 0x30(0x10)
	uint64_t AppearanceId; // 0x40(0x8)
	uint64_t Durability; // 0x48(0x8)
	EModularPartNodeType NodeType; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct DFMWeaponAssemble.GPAssemblePartSocket
// Size: 0x58 (Inherited: 0x0)
struct FGPAssemblePartSocket
{
	uint32_t SocketId; // 0x0(0x4)
	int16_t SocketIndex; // 0x4(0x2)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FName SocketName; // 0x8(0x8)
	struct TArray<uint64_t> ValidPartItemList; // 0x10(0x10)
	int16_t ParentPartIndex; // 0x20(0x2)
	uint8_t bOccupy : 1; // 0x22(0x1), Mask(0x1)
	uint8_t BitPad_0x22_1 : 7; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int16_t AttachPartIndex; // 0x24(0x2)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	uint64_t AttachItemId; // 0x28(0x8)
	uint64_t AttachItemGUID; // 0x30(0x8)
	int16_t Depth; // 0x38(0x2)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	uint64_t SocketGUID; // 0x40(0x8)
	EAssemblePartSocketType SocketType; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	uint64_t Flag; // 0x50(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.RTIOriginLightComponentData
// Size: 0x4 (Inherited: 0x0)
struct FRTIOriginLightComponentData
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
};

// Object: ScriptStruct DFMWeaponAssemble.RTILightBPData
// Size: 0x10 (Inherited: 0x0)
struct FRTILightBPData
{
	struct AActor* LightBPActor; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.RTIPreLoadRuntimeIconData
// Size: 0x18 (Inherited: 0x0)
struct FRTIPreLoadRuntimeIconData
{
	struct URTIActorData* Weapon_PreLoad; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct DFMWeaponAssemble.WeaponAllPresetGenerateContext
// Size: 0x98 (Inherited: 0x0)
struct FWeaponAllPresetGenerateContext
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct TMap<uint32_t, int32_t> GunMap; // 0x20(0x50)
	uint8_t Pad_0x70[0x18]; // 0x70(0x18)
	struct UGPModularWeaponDesc* Desc; // 0x88(0x8)
	struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree; // 0x90(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.WeaponGeneratePresetRow
// Size: 0x128 (Inherited: 0x8)
struct FWeaponGeneratePresetRow : FTableRowBase
{
	uint64_t Key; // 0x8(0x8)
	struct FString Name; // 0x10(0x10)
	uint32_t DescHash; // 0x20(0x4)
	float Price; // 0x24(0x4)
	uint64_t RecId; // 0x28(0x8)
	uint64_t Part1; // 0x30(0x8)
	uint64_t Part2; // 0x38(0x8)
	uint64_t Part3; // 0x40(0x8)
	uint64_t Part4; // 0x48(0x8)
	uint64_t Part5; // 0x50(0x8)
	uint64_t Part6; // 0x58(0x8)
	uint64_t Part7; // 0x60(0x8)
	uint64_t Part8; // 0x68(0x8)
	uint64_t Part9; // 0x70(0x8)
	uint64_t Part10; // 0x78(0x8)
	uint64_t Part11; // 0x80(0x8)
	uint64_t Part12; // 0x88(0x8)
	uint64_t Part13; // 0x90(0x8)
	uint64_t Part14; // 0x98(0x8)
	uint64_t Part15; // 0xA0(0x8)
	uint64_t Part16; // 0xA8(0x8)
	uint64_t Part17; // 0xB0(0x8)
	uint64_t Part18; // 0xB8(0x8)
	uint64_t Part19; // 0xC0(0x8)
	uint64_t Part20; // 0xC8(0x8)
	uint64_t Part21; // 0xD0(0x8)
	uint64_t Part22; // 0xD8(0x8)
	uint64_t Part23; // 0xE0(0x8)
	uint64_t Part24; // 0xE8(0x8)
	uint64_t Part25; // 0xF0(0x8)
	uint64_t Part26; // 0xF8(0x8)
	uint64_t Part27; // 0x100(0x8)
	uint64_t Part28; // 0x108(0x8)
	uint64_t Part29; // 0x110(0x8)
	uint64_t Part30; // 0x118(0x8)
	uint64_t Part31; // 0x120(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.WeaponPresetGeneratePartSocket
// Size: 0x18 (Inherited: 0x0)
struct FWeaponPresetGeneratePartSocket
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct DFMWeaponAssemble.WeaponPresetGenerateParam
// Size: 0x10 (Inherited: 0x0)
struct FWeaponPresetGenerateParam
{
	EWeaponPresetGenerateType GenerateType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t MainAttributeId; // 0x4(0x4)
	int32_t MaxPrice; // 0x8(0x4)
	int32_t MaxPartsNum; // 0xC(0x4)
};

// Object: ScriptStruct DFMWeaponAssemble.WeaponTestWeaponPresetConfig
// Size: 0x18 (Inherited: 0x10)
struct FWeaponTestWeaponPresetConfig : FDescRowBase
{
	uint64_t PresetId; // 0x10(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.WeaponTestCharacterConfig
// Size: 0x30 (Inherited: 0x10)
struct FWeaponTestCharacterConfig : FDescRowBase
{
	uint64_t AvatarID; // 0x10(0x8)
	uint64_t BagId; // 0x18(0x8)
	uint64_t ChestId; // 0x20(0x8)
	uint64_t BreastPlateID; // 0x28(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.TestWeaponParam
// Size: 0x18 (Inherited: 0x0)
struct FTestWeaponParam
{
	uint64_t WeaponPresetId; // 0x0(0x8)
	uint64_t SkinId; // 0x8(0x8)
	uint64_t SkinAppId; // 0x10(0x8)
};

// Object: ScriptStruct DFMWeaponAssemble.TestCharacterParam
// Size: 0x40 (Inherited: 0x0)
struct FTestCharacterParam
{
	uint64_t AvatarID; // 0x0(0x8)
	uint64_t BagId; // 0x8(0x8)
	uint64_t ChestId; // 0x10(0x8)
	uint64_t BreastPlateID; // 0x18(0x8)
	struct FVector Location; // 0x20(0xC)
	struct FRotator Rotator; // 0x2C(0xC)
	int32_t Index; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class DFMWeaponAssemble.GunCameraParamsRowManager
// Size: 0x40 (Inherited: 0x30)
struct UGunCameraParamsRowManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UGunCameraParamsRowManager, "GunCameraParamsRowManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMWeaponAssemble.AssemblerCameraParamsRowManager
// Size: 0x40 (Inherited: 0x30)
struct UAssemblerCameraParamsRowManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UAssemblerCameraParamsRowManager, "AssemblerCameraParamsRowManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMWeaponAssemble.AssemblerCameraCtrl
// Size: 0x918 (Inherited: 0x370)
struct AAssemblerCameraCtrl : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAssemblerCameraCtrl, "AssemblerCameraCtrl")

	struct FSoftObjectPath CamParamsTablePath; // 0x370(0x18)
	struct FSoftObjectPath CamResetParamsTablePath; // 0x388(0x18)
	struct FSoftObjectPath DefaultCamParamsTablePath; // 0x3A0(0x18)
	struct FSoftObjectPath SlideScreenTablePath; // 0x3B8(0x18)
	struct FSoftObjectPath DefaultSlideTablePath; // 0x3D0(0x18)
	struct UCurveFloat* SpeedCurve; // 0x3E8(0x8)
	struct FMobileDOFInfo DefaultMobileDOF; // 0x3F0(0x34)
	struct FPinchParams PinchParams; // 0x424(0x18)
	uint8_t Pad_0x43C[0x4]; // 0x43C(0x4)
	struct FBeginCamParams BeginCamParams; // 0x440(0x108)
	float CamSpeedOnBegin; // 0x548(0x4)
	float RotateRootSpeed; // 0x54C(0x4)
	float RotateArroundSpeed; // 0x550(0x4)
	float AutoRotateSpeed; // 0x554(0x4)
	float ResetCamLength; // 0x558(0x4)
	float ZoomOutSpeed; // 0x55C(0x4)
	float MinCameraDist; // 0x560(0x4)
	float CamLengthInterim; // 0x564(0x4)
	float DefaultLerpTime; // 0x568(0x4)
	float LerpSpeedUnit; // 0x56C(0x4)
	float MobileFixedLerpSpeed; // 0x570(0x4)
	float GunLookScale; // 0x574(0x4)
	struct FGunCameraParamsRow GunLookCenterCameraParm; // 0x578(0x80)
	float GunLookMaxRoll; // 0x5F8(0x4)
	float GunLookMaxRollExtra; // 0x5FC(0x4)
	float RotateCameraSpeed; // 0x600(0x4)
	uint8_t bOpenCorrectionAlpha : 1; // 0x604(0x1), Mask(0x1)
	uint8_t BitPad_0x604_1 : 7; // 0x604(0x1)
	uint8_t bLockRotate : 1; // 0x605(0x1), Mask(0x1)
	uint8_t BitPad_0x605_1 : 7; // 0x605(0x1)
	EAssemblerCameraType CameraType; // 0x606(0x1)
	uint8_t Pad_0x607[0x1]; // 0x607(0x1)
	struct FMulticastInlineDelegate OnTouchMoveStart; // 0x608(0x10)
	struct FMulticastInlineDelegate OnTouchMoveEnd; // 0x618(0x10)
	struct FMulticastInlineDelegate OnTouchMove; // 0x628(0x10)
	struct FMulticastInlineDelegate OnTouched; // 0x638(0x10)
	struct FMulticastInlineDelegate OnRotateStart; // 0x648(0x10)
	struct FMulticastInlineDelegate OnRotateEnd; // 0x658(0x10)
	struct FMulticastInlineDelegate OnCameraPointChanged; // 0x668(0x10)
	struct FMulticastInlineDelegate OnCameraChanged; // 0x678(0x10)
	struct FMulticastInlineDelegate OnGesturePinch; // 0x688(0x10)
	struct FMulticastInlineDelegate OnGestureFlick; // 0x698(0x10)
	struct FMulticastInlineDelegate OnCameraLerpStart; // 0x6A8(0x10)
	struct FMulticastInlineDelegate OnCameraLerpEnd; // 0x6B8(0x10)
	struct FMulticastInlineDelegate OnCameraLerp; // 0x6C8(0x10)
	struct TMap<EAssemblerCamPoint, struct FGunCameraParamsRow> CameraParams; // 0x6D8(0x50)
	struct FVector FocusCenterOffset; // 0x728(0xC)
	float FocusCenterDistanceRatio; // 0x734(0x4)
	uint8_t bWeaponAttachPosToBoundBoxOrigin : 1; // 0x738(0x1), Mask(0x1)
	uint8_t BitPad_0x738_1 : 7; // 0x738(0x1)
	uint8_t bOpenOffsetWeapon : 1; // 0x739(0x1), Mask(0x1)
	uint8_t BitPad_0x739_1 : 7; // 0x739(0x1)
	uint8_t Pad_0x73A[0x6]; // 0x73A(0x6)
	struct ABracketActor* Bracket; // 0x740(0x8)
	struct AActor* ViewTargetPoint; // 0x748(0x8)
	EAssemblerCamPoint CurCameraPoint; // 0x750(0x1)
	uint8_t Pad_0x751[0x7]; // 0x751(0x7)
	struct APlayerCameraManager* CameraManager; // 0x758(0x8)
	struct AAssembleWeaponActor* TargetWeapon; // 0x760(0x8)
	struct UMobilePlayerInput* MobileInput; // 0x768(0x8)
	struct FMobileDOFInfo CurMobileDOF; // 0x770(0x34)
	uint8_t Pad_0x7A4[0x174]; // 0x7A4(0x174)

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.UpdateDOFParam
	// Flags: [Final|Native|Public]
	// Offset: 0x141c267c
	// Params: [ Num(1) Size(0x1) ]
	void UpdateDOFParam(EAssemblerCamPoint CameraPoint);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.StartBeginCamera
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2668
	// Params: [ Num(0) Size(0x0) ]
	void StartBeginCamera();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.SetTargetPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2574
	// Params: [ Num(3) Size(0x3) ]
	uint8_t SetTargetPoint(EAssemblerCamPoint PointType, uint8_t bUseCameraID);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.SetPitchEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x141c24c8
	// Params: [ Num(1) Size(0x1) ]
	void SetPitchEnable(uint8_t IsEnable);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.SetCameraType
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2424
	// Params: [ Num(1) Size(0x1) ]
	void SetCameraType(EAssemblerCameraType Type);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.SetCameraToWeaponSocketCenter
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2364
	// Params: [ Num(2) Size(0x88) ]
	struct FGunCameraParamsRow SetCameraToWeaponSocketCenter(EAssemblerCamPoint CamPoint);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.SetCameraToWeaponCenter
	// Flags: [Final|Native|Public]
	// Offset: 0x141c22a4
	// Params: [ Num(2) Size(0x88) ]
	struct FGunCameraParamsRow SetCameraToWeaponCenter(EAssemblerCamPoint CamPoint);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.SetCameraParamLerp
	// Flags: [Final|Native|Public]
	// Offset: 0x141c21ac
	// Params: [ Num(2) Size(0x81) ]
	uint8_t SetCameraParamLerp(struct FGunCameraParamsRow CameraParamsRow);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.SetCameraParam
	// Flags: [Final|Native|Public]
	// Offset: 0x141c207c
	// Params: [ Num(2) Size(0x88) ]
	void SetCameraParam(EAssemblerCamPoint CamPoint, struct FGunCameraParamsRow Row);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.ResetOffset
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2068
	// Params: [ Num(0) Size(0x0) ]
	void ResetOffset();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.ResetCamera
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2054
	// Params: [ Num(0) Size(0x0) ]
	void ResetCamera();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.ProcessEnvionmentOnOpen
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2040
	// Params: [ Num(0) Size(0x0) ]
	void ProcessEnvionmentOnOpen();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.ProcessEnvionmentOnClose
	// Flags: [Final|Native|Public]
	// Offset: 0x141c202c
	// Params: [ Num(0) Size(0x0) ]
	void ProcessEnvionmentOnClose();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.PlayBracketShakeAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2018
	// Params: [ Num(0) Size(0x0) ]
	void PlayBracketShakeAnim();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.PlayBracketDropAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2004
	// Params: [ Num(0) Size(0x0) ]
	void PlayBracketDropAnim();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.IsAutoSizeCameraPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x141c1f54
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsAutoSizeCameraPoint(EAssemblerCamPoint CamPoint);

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.GetGPPlayerCameraManager
	// Flags: [Final|Native|Public]
	// Offset: 0x141c1f20
	// Params: [ Num(1) Size(0x8) ]
	struct AGPPlayerCameraManager* GetGPPlayerCameraManager();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.GetFocusCameraPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x141c1eec
	// Params: [ Num(1) Size(0x1) ]
	EAssemblerCamPoint GetFocusCameraPoint();

	// Object: Function DFMWeaponAssemble.AssemblerCameraCtrl.CheckCameraViewTarget
	// Flags: [Final|Native|Public]
	// Offset: 0x141c1ed8
	// Params: [ Num(0) Size(0x0) ]
	void CheckCameraViewTarget();
};

// Object: Class DFMWeaponAssemble.AssemblerStartPoint
// Size: 0x370 (Inherited: 0x370)
struct AAssemblerStartPoint : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAssemblerStartPoint, "AssemblerStartPoint")
};

// Object: Class DFMWeaponAssemble.AssembleWeaponActor
// Size: 0x590 (Inherited: 0x370)
struct AAssembleWeaponActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAssembleWeaponActor, "AssembleWeaponActor")

	uint8_t Pad_0x370[0x30]; // 0x370(0x30)
	struct UModularApperanceBaseProvider* ModularApperanceBaseProvider; // 0x3A0(0x8)
	struct UAssembleWeaponNodeTree* NodeTree; // 0x3A8(0x8)
	struct UAssembleWeaponNodeTree* SnapshotNodeTree; // 0x3B0(0x8)
	struct TMap<int16_t, struct USkeletalMeshComponent*> MeshComMap; // 0x3B8(0x50)
	struct TMap<struct FSoftObjectPath, struct USkeletalMesh*> ItemIdToMeshMap; // 0x408(0x50)
	struct USkeletalMeshComponent* RootPartMesh; // 0x458(0x8)
	uint8_t Desc[0x8]; // 0x460(0x8)
	struct UAnimSequence* PendantAnimSequence; // 0x468(0x8)
	struct UAnimMontage* PendantAnimMontage; // 0x470(0x8)
	struct FName CurrentDescRowName; // 0x478(0x8)
	struct UObject* FlodingGunAnimClass; // 0x480(0x8)
	uint8_t FlodingGunAnimInstance[0x8]; // 0x488(0x8)
	uint8_t bIdle : 1; // 0x490(0x1), Mask(0x1)
	uint8_t bStreamInFullTex : 1; // 0x490(0x1), Mask(0x2)
	uint8_t BitPad_0x490_2 : 6; // 0x490(0x1)
	uint8_t Pad_0x491[0x17]; // 0x491(0x17)
	struct FDelegate OnDynamicLoadMeshesComplete; // 0x4A8(0x10)
	uint8_t Pad_0x4B8[0x20]; // 0x4B8(0x20)
	uint8_t AdapterComponent[0x8]; // 0x4D8(0x8)
	struct TArray<struct UWeaponSkinApperanceModiferBase*> SkinApperanceModifers; // 0x4E0(0x10)
	uint8_t Pad_0x4F0[0x28]; // 0x4F0(0x28)
	uint64_t PreviewPresetId; // 0x518(0x8)
	uint64_t PreviewSkinApperanceId; // 0x520(0x8)
	EWeaponPartMeshType LoadMeshType; // 0x528(0x1)
	uint8_t bSameTeam : 1; // 0x529(0x1), Mask(0x1)
	uint8_t BitPad_0x529_1 : 7; // 0x529(0x1)
	uint8_t IsDisplayAdapter : 1; // 0x52A(0x1), Mask(0x1)
	uint8_t BitPad_0x52A_1 : 7; // 0x52A(0x1)
	uint8_t Pad_0x52B[0x1]; // 0x52B(0x1)
	float CalBoundMax; // 0x52C(0x4)
	float CalBoundMin; // 0x530(0x4)
	uint8_t bCreateForPreview : 1; // 0x534(0x1), Mask(0x1)
	uint8_t BitPad_0x534_1 : 7; // 0x534(0x1)
	uint8_t Pad_0x535[0x3]; // 0x535(0x3)
	uint8_t MeshProxy[0x8]; // 0x538(0x8)
	uint8_t bEnalbePartOffset : 1; // 0x540(0x1), Mask(0x1)
	uint8_t BitPad_0x540_1 : 7; // 0x540(0x1)
	uint8_t Use3PTemplateMaterial : 1; // 0x541(0x1), Mask(0x1)
	uint8_t BitPad_0x541_1 : 7; // 0x541(0x1)
	uint8_t Pad_0x542[0x2]; // 0x542(0x2)
	int32_t ForceLod; // 0x544(0x4)
	uint8_t MainWeaponMeshSkeletalComponent[0x8]; // 0x548(0x8)
	struct FVector FixedTransformPosition; // 0x550(0xC)
	struct FVector LastFixedTransformPosition; // 0x55C(0xC)
	uint8_t Pad_0x568[0x8]; // 0x568(0x8)
	float TickCounter; // 0x570(0x4)
	uint8_t bUseInEditorView : 1; // 0x574(0x1), Mask(0x1)
	uint8_t BitPad_0x574_1 : 7; // 0x574(0x1)
	uint8_t Pad_0x575[0xB]; // 0x575(0xB)
	struct FString ErrorInfo; // 0x580(0x10)

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.UpdateFoldState
	// Flags: [Final|Native|Public]
	// Offset: 0x141c5560
	// Params: [ Num(0) Size(0x0) ]
	void UpdateFoldState();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.UpdateFixWorldTransformLocation
	// Flags: [Final|Native|Public]
	// Offset: 0x141c554c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateFixWorldTransformLocation();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetWorldTransformLocation
	// Flags: [Final|Native|Public]
	// Offset: 0x141c5538
	// Params: [ Num(0) Size(0x0) ]
	void SetWorldTransformLocation();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetWeaponPartOffsetEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x141c548c
	// Params: [ Num(1) Size(0x1) ]
	void SetWeaponPartOffsetEnable(uint8_t bEnable);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetVisibility
	// Flags: [Final|Native|Public]
	// Offset: 0x141c53e0
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(uint8_t bVisible);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetUseInRTCapture
	// Flags: [Final|Native|Public]
	// Offset: 0x141c52f0
	// Params: [ Num(2) Size(0x2) ]
	void SetUseInRTCapture(uint8_t InbUseInRTCapture, uint8_t InbWhiteIcon);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetupSkelatalMeshComponentTree
	// Flags: [Final|Native|Protected]
	// Offset: 0x141c51d4
	// Params: [ Num(3) Size(0x10) ]
	void SetupSkelatalMeshComponentTree(int32_t PartNodeIndex, int32_t ParentNodeIndex, struct FName SocketName);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetSkeletalOutLine
	// Flags: [Final|Native|Public]
	// Offset: 0x141c50f4
	// Params: [ Num(2) Size(0x8) ]
	void SetSkeletalOutLine(int16_t PartIndex, int32_t DepthValue);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetPreviewDynamicEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x141c5048
	// Params: [ Num(1) Size(0x1) ]
	void SetPreviewDynamicEffect(uint8_t InPreviewDynamicEffect);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetForceLOD
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4fa4
	// Params: [ Num(1) Size(0x4) ]
	void SetForceLOD(int32_t LOD);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.SetAllSkeletalOutLine
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4f00
	// Params: [ Num(1) Size(0x4) ]
	void SetAllSkeletalOutLine(int32_t DepthValue);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.Reset
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4ee4
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.RemovePart
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4e04
	// Params: [ Num(2) Size(0x4) ]
	void RemovePart(int16_t ParentPartNodeIndex, int16_t SlotIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.RemoveNewPart
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4d24
	// Params: [ Num(2) Size(0xC) ]
	void RemoveNewPart(uint64_t ParentGuid, uint32_t SocketId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.PreviewBoundOffset
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4d10
	// Params: [ Num(0) Size(0x0) ]
	void PreviewBoundOffset();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.PrepareSnapshotNodeTreeFromDesc
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4c28
	// Params: [ Num(2) Size(0x9) ]
	void PrepareSnapshotNodeTreeFromDesc(struct UModularWeaponDesc* InDesc, uint8_t bRefreshSocketNodeFlag);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.PrepareNodeTreeFromDesc
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4b40
	// Params: [ Num(2) Size(0x9) ]
	void PrepareNodeTreeFromDesc(struct UModularWeaponDesc* InDesc, uint8_t bRefreshSocketNodeFlag);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.PostBuildCompleteTickOneFrame
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141c4a50
	// Params: [ Num(2) Size(0x10) ]
	void PostBuildCompleteTickOneFrame(float dt, const struct FTimerHandle& TimerHandle);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.PlayPendantAnimation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x141c4990
	// Params: [ Num(1) Size(0x18) ]
	void PlayPendantAnimation(const struct FSoftObjectPath& PendantAnimSequencePath);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.PlayPartDefaultAnimByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x141c48ec
	// Params: [ Num(1) Size(0x2) ]
	void PlayPartDefaultAnimByIndex(int16_t PartIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.OnSkeletalMeshSetup
	// Flags: [Final|Native|Protected]
	// Offset: 0x141c4848
	// Params: [ Num(1) Size(0x8) ]
	void OnSkeletalMeshSetup(struct UModularWeaponDynamicSkeletalMeshComponent* DynamicMeshComponent);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.OnPlayPendantAnimationEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4760
	// Params: [ Num(2) Size(0x9) ]
	void OnPlayPendantAnimationEnd(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.OnLoadAnimInstance
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x141c46a0
	// Params: [ Num(1) Size(0x18) ]
	void OnLoadAnimInstance(const struct FSoftObjectPath& SoftPath);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.OnDescAddPartCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141c45b8
	// Params: [ Num(1) Size(0x128) ]
	void OnDescAddPartCallback(const struct FGPModularWeaponPartNode& Node);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.OnBuildMergeMeshComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x141c45a4
	// Params: [ Num(0) Size(0x0) ]
	void OnBuildMergeMeshComplete();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.NewSkeletalCom
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4570
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* NewSkeletalCom();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.IsMerged
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4538
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMerged();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.IsFullTextureStreamIn
	// Flags: [Final|Native|Public]
	// Offset: 0x141c4500
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFullTextureStreamIn();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.HasCacheSkeletalMesh
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0x141c439c
	// Params: [ Num(3) Size(0x21) ]
	uint8_t HasCacheSkeletalMesh(struct FSoftObjectPath SoftObjectPath, struct USkeletalMesh*& OutMesh);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetSocketOffset
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c42b0
	// Params: [ Num(3) Size(0x10) ]
	struct FVector GetSocketOffset(int16_t ParentPartIndex, int16_t SocketIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetSocketLocationOnViewportBySocketGUID
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c4204
	// Params: [ Num(2) Size(0x10) ]
	struct FVector2D GetSocketLocationOnViewportBySocketGUID(uint64_t SocketGUID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetSocketLocationOnViewport
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c411c
	// Params: [ Num(3) Size(0xC) ]
	struct FVector2D GetSocketLocationOnViewport(int16_t PartIndex, int16_t SocketIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetSocketLocationBySocketName
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c4028
	// Params: [ Num(3) Size(0x18) ]
	struct FVector GetSocketLocationBySocketName(struct FName SocketName, uint8_t bScreenPos);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetSocketLocationBySocketGUID
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c3f78
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetSocketLocationBySocketGUID(uint64_t SocketGUID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetSocketLocationByRelative
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c3e50
	// Params: [ Num(4) Size(0x14) ]
	struct FVector GetSocketLocationByRelative(int16_t PartIndex, int16_t SocketIndex, ERelativeTransformSpace RelativeTransformSpace);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetSocketLocation
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c3d20
	// Params: [ Num(4) Size(0x14) ]
	struct FVector GetSocketLocation(int16_t PartIndex, int16_t SocketIndex, uint8_t bScreenPos);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetPartOffset
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c3c70
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetPartOffset(int16_t PartIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetPartCenterLocationOnViewport
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c3bc4
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D GetPartCenterLocationOnViewport(int16_t PartIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetPartCenterLocation
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c3ad0
	// Params: [ Num(3) Size(0x10) ]
	struct FVector GetPartCenterLocation(int16_t PartIndex, uint8_t bScreenPos);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetOrNewSkeletalCom
	// Flags: [Final|Native|Public]
	// Offset: 0x141c39e8
	// Params: [ Num(3) Size(0x18) ]
	struct USkeletalMeshComponent* GetOrNewSkeletalCom(int16_t Index, uint64_t ItemID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetFixWorldTransformLocationDirty
	// Flags: [Final|Native|Public]
	// Offset: 0x141c39b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetFixWorldTransformLocationDirty();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.GetBoundsCenterOffset
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141c3978
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBoundsCenterOffset();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.FullTextureStreamIn
	// Flags: [Final|Native|Public]
	// Offset: 0x141c3964
	// Params: [ Num(0) Size(0x0) ]
	void FullTextureStreamIn();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.DrawDebugBounds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x141c3950
	// Params: [ Num(0) Size(0x0) ]
	void DrawDebugBounds();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreateWeaponFromRow
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141c3834
	// Params: [ Num(2) Size(0x39) ]
	void CreateWeaponFromRow(const struct FGunPresetRow& GunRow, uint8_t isAsync);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreateWeaponFromNodesV2
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141c35c8
	// Params: [ Num(5) Size(0xE3) ]
	void CreateWeaponFromNodesV2(struct TArray<struct FGPModularWeaponPartNode>& Nodes, struct FWeaponSkinInfo SkinInfo, uint8_t bIsBipodDeploy, uint8_t IsFolding, uint8_t isAsync);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreateWeaponFromNodes
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141c33f4
	// Params: [ Num(3) Size(0xE1) ]
	void CreateWeaponFromNodes(struct TArray<struct FGPModularWeaponPartNode>& Nodes, struct FWeaponSkinInfo SkinInfo, uint8_t isAsync);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreateWeaponFromDescId
	// Flags: [Final|Native|Public]
	// Offset: 0x141c330c
	// Params: [ Num(2) Size(0x9) ]
	void CreateWeaponFromDescId(uint64_t DescId, uint8_t isAsync);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreateWeaponFromDesc
	// Flags: [Final|Native|Public]
	// Offset: 0x141c3224
	// Params: [ Num(2) Size(0x9) ]
	void CreateWeaponFromDesc(struct UModularWeaponDesc* Desc, uint8_t isAsync);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreateRootPart
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141c30cc
	// Params: [ Num(2) Size(0x148) ]
	void CreateRootPart(const struct FPartsDataRow& PartDataRow, uint64_t Guid);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreatePreviewGunOnScene
	// Flags: [Final|Native|Public]
	// Offset: 0x141c30b8
	// Params: [ Num(0) Size(0x0) ]
	void CreatePreviewGunOnScene();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CreateDynamicSkeletalMeshComponent
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2f24
	// Params: [ Num(6) Size(0x30) ]
	struct UModularWeaponDynamicSkeletalMeshComponent* CreateDynamicSkeletalMeshComponent(struct USkeletalMeshComponent* ParentSkeletalMeshComponent, struct FName AttachName, uint64_t ItemGid, uint64_t ItemID, struct USkeletalMesh* SkeletalMesh);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CopyChild
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2e44
	// Params: [ Num(2) Size(0x4) ]
	void CopyChild(int16_t SrcPartIndex, int16_t DesPartIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.ClearSnapshotNodeTree
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2e30
	// Params: [ Num(0) Size(0x0) ]
	void ClearSnapshotNodeTree();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.ClearSkinLoading
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2e1c
	// Params: [ Num(0) Size(0x0) ]
	void ClearSkinLoading();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.ClearDebugBounds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x141c2e08
	// Params: [ Num(0) Size(0x0) ]
	void ClearDebugBounds();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CancelTexturePendingMipChangeRequest
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2df4
	// Params: [ Num(0) Size(0x0) ]
	void CancelTexturePendingMipChangeRequest();

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.CacheSkeletalMeshRef
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x141c2cb4
	// Params: [ Num(2) Size(0x20) ]
	void CacheSkeletalMeshRef(struct FSoftObjectPath SoftObjectPath, struct USkeletalMesh* Mesh);

	// Object: Function DFMWeaponAssemble.AssembleWeaponActor.AddNewPart
	// Flags: [Final|Native|Public]
	// Offset: 0x141c2980
	// Params: [ Num(6) Size(0x7A) ]
	int16_t AddNewPart(uint64_t ItemID, struct FItemInfoContext ItemInfo, int16_t ParentNodeIndex, uint32_t SocketId, uint64_t Guid);
};

// Object: Class DFMWeaponAssemble.AssembleWeaponNodeTree
// Size: 0x38 (Inherited: 0x28)
struct UAssembleWeaponNodeTree : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssembleWeaponNodeTree, "AssembleWeaponNodeTree")

	struct TArray<struct FGPAssemblePartNode> AllNodes; // 0x28(0x10)

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.SetSocketFlag
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141c832c
	// Params: [ Num(2) Size(0x59) ]
	void SetSocketFlag(struct FGPAssemblePartNode& Node, uint8_t bIsSimulateParentNode);

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.ReLinkSocketGUIDs
	// Flags: [Final|Native|Public]
	// Offset: 0x141c8318
	// Params: [ Num(0) Size(0x0) ]
	void ReLinkSocketGUIDs();

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.RefreshSocketNodeFlag
	// Flags: [Final|Native|Public]
	// Offset: 0x141c8304
	// Params: [ Num(0) Size(0x0) ]
	void RefreshSocketNodeFlag();

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.GetSocketFromSocketGUID
	// Flags: [Final|Native|Public]
	// Offset: 0x141c8200
	// Params: [ Num(2) Size(0x60) ]
	struct FGPAssemblePartSocket GetSocketFromSocketGUID(uint64_t Guid);

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.GetRootItemID
	// Flags: [Final|Native|Public]
	// Offset: 0x141c81cc
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetRootItemID();

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.GetNodeBySocketGUID
	// Flags: [Final|Native|Public]
	// Offset: 0x141c80f4
	// Params: [ Num(2) Size(0x60) ]
	struct FGPAssemblePartNode GetNodeBySocketGUID(uint64_t SocketGUID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.GetNodeByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x141c801c
	// Params: [ Num(2) Size(0x60) ]
	struct FGPAssemblePartNode GetNodeByIndex(int32_t Index);

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.GetNodeByGUID
	// Flags: [Final|Native|Public]
	// Offset: 0x141c7f44
	// Params: [ Num(2) Size(0x60) ]
	struct FGPAssemblePartNode GetNodeByGUID(uint64_t Guid);

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.GetNode
	// Flags: [Final|Native|Public]
	// Offset: 0x141c7e60
	// Params: [ Num(2) Size(0x60) ]
	struct FGPAssemblePartNode GetNode(EAdapterItemType PartType);

	// Object: Function DFMWeaponAssemble.AssembleWeaponNodeTree.GetAttachmentNode
	// Flags: [Final|Native|Public]
	// Offset: 0x141c7d7c
	// Params: [ Num(2) Size(0x60) ]
	struct FGPAssemblePartNode GetAttachmentNode(EWeaponExtraModelType PartType);
};

// Object: Class DFMWeaponAssemble.AssembleWeaponDataLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAssembleWeaponDataLibrary : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssembleWeaponDataLibrary, "AssembleWeaponDataLibrary")

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.RemoveNodeFromeDescByIndex
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cc170
	// Params: [ Num(5) Size(0x88) ]
	static struct FFastEquipResult RemoveNodeFromeDescByIndex(struct UModularWeaponDesc* Desc, int32_t PartNodeIndex, uint8_t bOnlyForCheck, uint8_t bFillVirtualParts);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.RefreshVirutalSocketNodeFlagFromWeaponDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cc0a4
	// Params: [ Num(2) Size(0x10) ]
	static void RefreshVirutalSocketNodeFlagFromWeaponDesc(struct UModularWeaponDesc* Desc, uint64_t PartNodeIndex);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.RefreshSocketNodeFlagFromWeaponDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cbf94
	// Params: [ Num(3) Size(0x11) ]
	static void RefreshSocketNodeFlagFromWeaponDesc(struct UModularWeaponDesc* Desc, uint64_t PartNodeIndex, uint8_t bIsSimulateParentNode);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsVirutalPartItem
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cbeec
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsVirutalPartItem(uint64_t PartItemId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsValidWeapon
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cbe44
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsValidWeapon(struct UModularWeaponDesc* Desc);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsUseFoldedIcon
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf99ea68
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsUseFoldedIcon(uint64_t WeaponItemId, EAttachPosition AttachPosition);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsHiddenInGunsmith
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cbd9c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsHiddenInGunsmith(uint64_t PartItemId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsForbidPartByWeaponID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cbcbc
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsForbidPartByWeaponID(uint64_t WeaponItemId, uint64_t ItemID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsForbidInstallPartByWeaponID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cbba0
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t IsForbidInstallPartByWeaponID(uint64_t WeaponItemId, uint64_t ItemID, EAttachPosition AttachPosition);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsForbidInstallPart
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cba84
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t IsForbidInstallPart(struct UModularWeaponDesc* Desc, uint64_t ItemID, EAttachPosition AttachPosition);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsCanInstallOnWeaponOnlyPartsRules
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cb9a4
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsCanInstallOnWeaponOnlyPartsRules(struct UModularWeaponDesc* Desc, uint64_t ItemID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsCanInstallOnWeapon
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cb888
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t IsCanInstallOnWeapon(struct UModularWeaponDesc* Desc, uint64_t ItemID, EAttachPosition AttachPosition);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsCanInstallBySocketGUID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cb730
	// Params: [ Num(5) Size(0x1D) ]
	static uint8_t IsCanInstallBySocketGUID(struct UModularWeaponDesc* Desc, uint64_t SocketGUID, uint64_t ItemID, EAttachPosition SlotType);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.IsBasicSocket
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cb64c
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsBasicSocket(uint64_t RecId, int32_t SocketId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.HasVirtualPart
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141cb51c
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t HasVirtualPart(uint64_t RecId, uint32_t ParentSocketId, uint64_t& OutItemId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.HasNotMatchSlotPart
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xfa3ad40
	// Params: [ Num(5) Size(0x2A) ]
	static uint8_t HasNotMatchSlotPart(const struct TArray<uint64_t>& PartItemIds, EAttachPosition AttachPosition, struct TArray<uint64_t>& NotMatchPartItemIds, uint8_t bIsSOL);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.HasForbidInstallPart
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141cb3e4
	// Params: [ Num(4) Size(0x1D) ]
	static uint8_t HasForbidInstallPart(struct UModularWeaponDesc* Desc, struct TArray<uint64_t>& ForbidItemIDs, EAttachPosition AttachPosition);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetWeaponDescFromWeaponID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf772424
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPModularWeaponDesc* GetWeaponDescFromWeaponID(uint64_t InWeaponId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetWeaponDescFromPresetId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4d1650
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPModularWeaponDesc* GetWeaponDescFromPresetId(uint64_t PresetId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetWeaponDescFromPreset
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xf64fff8
	// Params: [ Num(2) Size(0x40) ]
	static struct UGPModularWeaponDesc* GetWeaponDescFromPreset(const struct FGunPresetRow& GunRow);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetWeaponDescFromModularInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141cb270
	// Params: [ Num(2) Size(0x178) ]
	static struct UGPModularWeaponDesc* GetWeaponDescFromModularInfo(const struct FModularWeaponInfo& ModularWeaponInfo);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetWeaponDescFromModularContext
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141cb158
	// Params: [ Num(2) Size(0x110) ]
	static struct UGPModularWeaponDesc* GetWeaponDescFromModularContext(const struct FModularContext& ModularContext);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetWeaponDescFromAdapterID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cb0b4
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPModularWeaponDesc* GetWeaponDescFromAdapterID(uint64_t InAdapaterItemId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetWeaponDescAndPartIndexsFromPreset
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141caf88
	// Params: [ Num(3) Size(0x50) ]
	static struct UGPModularWeaponDesc* GetWeaponDescAndPartIndexsFromPreset(const struct FGunPresetRow& GunRow, struct TArray<int32_t>& PartIndexs);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetReceiverIDValidInstallList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141caea0
	// Params: [ Num(2) Size(0x18) ]
	static void GetReceiverIDValidInstallList(uint64_t ReceiverID, struct TArray<uint64_t>& OutValidInstallItemIds);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetPossiblePartInstallList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141cad6c
	// Params: [ Num(3) Size(0x19) ]
	static void GetPossiblePartInstallList(uint64_t ReceiverID, struct TArray<uint64_t>& OutValidInstallItemIds, uint8_t bIncludeExtraModel);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetPartSocketValidInstallList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141cac48
	// Params: [ Num(3) Size(0x20) ]
	static void GetPartSocketValidInstallList(uint64_t PartItemId, uint32_t SocketId, struct TArray<uint64_t>& OutValidInstallItemIds);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetPartInstallReceiverList
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141cab70
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<uint64_t> GetPartInstallReceiverList(uint64_t PartItemId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetItemIDAndModelID4ShareCode
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141caa28
	// Params: [ Num(4) Size(0x1D) ]
	static uint8_t GetItemIDAndModelID4ShareCode(struct FString ShareCodeString, uint64_t& ItemID, int32_t& ModelID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.GetAssemblePartNodesFromeDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141ca984
	// Params: [ Num(2) Size(0x10) ]
	static struct UAssembleWeaponNodeTree* GetAssemblePartNodesFromeDesc(struct UModularWeaponDesc* Desc);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.FindValidSocketIdList
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141ca870
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<uint32_t> FindValidSocketIdList(struct UModularWeaponDesc* Desc, uint64_t ItemID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CheckSocketCanAddItem
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141ca69c
	// Params: [ Num(4) Size(0x69) ]
	static uint8_t CheckSocketCanAddItem(struct FGPAssemblePartSocket Socket, uint64_t NodeItemId, uint64_t ItemID);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CheckFastEquip
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141ca368
	// Params: [ Num(5) Size(0xF0) ]
	static struct FFastEquipResult CheckFastEquip(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CheckAndFillVirtualPartV2
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141ca234
	// Params: [ Num(2) Size(0x80) ]
	static void CheckAndFillVirtualPartV2(struct UModularWeaponDesc* Desc, struct FFastEquipResult& InOutEquipResult);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CheckAndFillVirtualPart
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141ca100
	// Params: [ Num(2) Size(0x80) ]
	static void CheckAndFillVirtualPart(struct UModularWeaponDesc* Desc, struct FFastEquipResult& InOutEquipResult);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CheckAndFillSkinAttachModels
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141ca06c
	// Params: [ Num(1) Size(0x8) ]
	static void CheckAndFillSkinAttachModels(struct UModularWeaponDesc* Desc);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CheckAndFillExtraModels
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c9fd8
	// Params: [ Num(1) Size(0x8) ]
	static void CheckAndFillExtraModels(struct UModularWeaponDesc* Desc);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.ChcekOccupySocketFromSocketGUID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141c9df4
	// Params: [ Num(5) Size(0x1B8) ]
	static struct FFastEquipResult ChcekOccupySocketFromSocketGUID(struct UModularWeaponDesc* Desc, const struct FGPModularWeaponPartNode& ParentNode, uint64_t ItemID, uint32_t SocketId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.ChcekOccupySocket
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c9c54
	// Params: [ Num(5) Size(0x98) ]
	static struct FFastEquipResult ChcekOccupySocket(struct UModularWeaponDesc* Desc, int32_t PartIndex, uint64_t ItemID, uint32_t SocketId);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CalculateWeaponWeightByDescInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141c9b08
	// Params: [ Num(2) Size(0x154) ]
	static float CalculateWeaponWeightByDescInfo(const struct FGPWeaponDescInfo& GunDescInfo);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CalculateWeaponWeight
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf8e8990
	// Params: [ Num(2) Size(0xC) ]
	static float CalculateWeaponWeight(struct UModularWeaponDesc* ModularWeaponDesc);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.CalculateWeaponPrice
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c9a64
	// Params: [ Num(2) Size(0xC) ]
	static float CalculateWeaponPrice(struct UModularWeaponDesc* ModularWeaponDesc);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.BaseRefreshSocketNodeFlagFromWeaponDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c9954
	// Params: [ Num(3) Size(0x11) ]
	static void BaseRefreshSocketNodeFlagFromWeaponDesc(struct UModularWeaponDesc* Desc, uint64_t PartNodeIndex, uint8_t bIsSimulateParentNode);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.AutoRemoveNodeFromeDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c97b0
	// Params: [ Num(5) Size(0x98) ]
	static struct FFastEquipResult AutoRemoveNodeFromeDesc(struct UModularWeaponDesc* Desc, uint64_t ItemID, uint64_t Guid, uint8_t bOnlyForCheck);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.AutoRemoveNodeFromDescWithSocketGUID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c9648
	// Params: [ Num(4) Size(0x90) ]
	static struct FFastEquipResult AutoRemoveNodeFromDescWithSocketGUID(struct UModularWeaponDesc* Desc, uint64_t SocketGUID, uint8_t bOnlyForCheck);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.AutoAddNodeToDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c92d0
	// Params: [ Num(6) Size(0xF8) ]
	static struct FFastEquipResult AutoAddNodeToDesc(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid, uint8_t bOnlyForCheck);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.AddNodeToDescFromSocketGUID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c8f14
	// Params: [ Num(7) Size(0x100) ]
	static struct FFastEquipResult AddNodeToDescFromSocketGUID(struct UModularWeaponDesc* Desc, uint64_t ItemID, uint64_t ItemGUID, struct FItemInfoContext ItemInfo, uint64_t SocketGUID, uint8_t bOnlyForCheck);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.AddNodeToDescFromParentNode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c8a58
	// Params: [ Num(9) Size(0x228) ]
	static struct FFastEquipResult AddNodeToDescFromParentNode(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid, uint32_t SocketId, struct FGPModularWeaponPartNode ParentNode, uint8_t bOnlyForCheck, uint8_t bFillVirtualParts);

	// Object: Function DFMWeaponAssemble.AssembleWeaponDataLibrary.AddNodeToDesc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141c866c
	// Params: [ Num(8) Size(0x100) ]
	static struct FFastEquipResult AddNodeToDesc(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid, uint64_t ParentGid, uint32_t SocketId, uint8_t bOnlyForCheck);
};

// Object: Class DFMWeaponAssemble.AssembleWeaponMgr
// Size: 0x398 (Inherited: 0x370)
struct AAssembleWeaponMgr : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAssembleWeaponMgr, "AssembleWeaponMgr")

	struct TArray<struct TWeakObjectPtr<struct AAssembleWeaponActor>> WeaponContainer; // 0x370(0x10)
	struct TArray<struct TWeakObjectPtr<struct AAssembleWeaponActor>> WeaponContainer_RTI; // 0x380(0x10)
	uint8_t Pad_0x390[0x8]; // 0x390(0x8)

	// Object: Function DFMWeaponAssemble.AssembleWeaponMgr.OnPreGarbageCollect
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdb7c
	// Params: [ Num(0) Size(0x0) ]
	void OnPreGarbageCollect();

	// Object: Function DFMWeaponAssemble.AssembleWeaponMgr.GetEmptyWeaponForRTI
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdad0
	// Params: [ Num(2) Size(0x10) ]
	struct AAssembleWeaponActor* GetEmptyWeaponForRTI(struct UWorld* InWorld);

	// Object: Function DFMWeaponAssemble.AssembleWeaponMgr.GetEmptyWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x141cda24
	// Params: [ Num(2) Size(0x10) ]
	struct AAssembleWeaponActor* GetEmptyWeapon(struct UWorld* InWorld);
};

// Object: Class DFMWeaponAssemble.AssemblyPlayerController
// Size: 0xB08 (Inherited: 0xB08)
struct AAssemblyPlayerController : AGPPlayerController
{
	DEFINE_UE_CLASS_HELPERS(AAssemblyPlayerController, "AssemblyPlayerController")
};

// Object: Class DFMWeaponAssemble.BracketActor
// Size: 0x3E0 (Inherited: 0x370)
struct ABracketActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ABracketActor, "BracketActor")

	struct AAssemblerCameraCtrl* BpAssemblerCameraCtrl; // 0x370(0x8)
	struct UAnimMontage* ShakeMontage; // 0x378(0x8)
	struct UAnimMontage* DropMontage; // 0x380(0x8)
	struct FName WeaponRootSocket; // 0x388(0x8)
	struct FName RotateRootSocket; // 0x390(0x8)
	struct FRotator DefaultCameraRotation; // 0x398(0xC)
	struct FRotator DefaultRelativeRotation; // 0x3A4(0xC)
	struct FVector DefaultOffset; // 0x3B0(0xC)
	float DefaultBracketYaw; // 0x3BC(0x4)
	struct USkeletalMeshComponent* SelfSkeletalMeshCom; // 0x3C0(0x8)
	struct UAnimInstance* SelfAnimInstance; // 0x3C8(0x8)
	uint8_t Pad_0x3D0[0x10]; // 0x3D0(0x10)

	// Object: Function DFMWeaponAssemble.BracketActor.SetYaw
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdcc8
	// Params: [ Num(1) Size(0x4) ]
	void SetYaw(float Yaw);

	// Object: Function DFMWeaponAssemble.BracketActor.PlayShakeAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdcb4
	// Params: [ Num(0) Size(0x0) ]
	void PlayShakeAnim();

	// Object: Function DFMWeaponAssemble.BracketActor.PlayDropAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdca0
	// Params: [ Num(0) Size(0x0) ]
	void PlayDropAnim();

	// Object: Function DFMWeaponAssemble.BracketActor.GetYaw
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdc6c
	// Params: [ Num(1) Size(0x4) ]
	float GetYaw();

	// Object: Function DFMWeaponAssemble.BracketActor.CreateAssmblerAndCamera
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdc58
	// Params: [ Num(0) Size(0x0) ]
	void CreateAssmblerAndCamera();
};

// Object: Class DFMWeaponAssemble.CaptureExclude
// Size: 0x380 (Inherited: 0x370)
struct ACaptureExclude : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACaptureExclude, "CaptureExclude")

	struct TArray<struct TWeakObjectPtr<struct AActor>> ExcludeList; // 0x370(0x10)
};

// Object: Class DFMWeaponAssemble.LightEnvToogle
// Size: 0x3A8 (Inherited: 0x370)
struct ALightEnvToogle : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALightEnvToogle, "LightEnvToogle")

	struct TWeakObjectPtr<struct APostProcessVolume> WeakPostProcess; // 0x370(0x8)
	struct TWeakObjectPtr<struct ANZSkyBoxActor> WeakNZSkyBoxActor; // 0x378(0x8)
	struct TWeakObjectPtr<struct AExponentialHeightFog> WeakFogActor; // 0x380(0x8)
	struct TWeakObjectPtr<struct ADirectionalLight> WeakDirLightActor; // 0x388(0x8)
	struct TWeakObjectPtr<struct ASkyLight> WeakSkyLightActor; // 0x390(0x8)
	struct TWeakObjectPtr<struct AActor> DisplayBoardLights; // 0x398(0x8)
	struct TWeakObjectPtr<struct AActor> AssemblyTableLights; // 0x3A0(0x8)

	// Object: Function DFMWeaponAssemble.LightEnvToogle.ToogleEnv
	// Flags: [Final|Native|Public]
	// Offset: 0x141cdf08
	// Params: [ Num(1) Size(0x1) ]
	void ToogleEnv(uint8_t bOpen);

	// Object: Function DFMWeaponAssemble.LightEnvToogle.SyncDisplayBoardLight
	// Flags: [Final|Native|Public]
	// Offset: 0x141cde5c
	// Params: [ Num(1) Size(0x1) ]
	void SyncDisplayBoardLight(uint8_t bIsOpen);

	// Object: Function DFMWeaponAssemble.LightEnvToogle.OpenEnv
	// Flags: [Final|Native|Public]
	// Offset: 0x141cde48
	// Params: [ Num(0) Size(0x0) ]
	void OpenEnv();

	// Object: Function DFMWeaponAssemble.LightEnvToogle.CloseEnv
	// Flags: [Final|Native|Public]
	// Offset: 0x141cde34
	// Params: [ Num(0) Size(0x0) ]
	void CloseEnv();
};

// Object: Class DFMWeaponAssemble.DFMModularAppearanceProvider
// Size: 0x28 (Inherited: 0x28)
struct UDFMModularAppearanceProvider : UModularApperanceBaseProvider
{
	DEFINE_UE_CLASS_HELPERS(UDFMModularAppearanceProvider, "DFMModularAppearanceProvider")
};

// Object: Class DFMWeaponAssemble.DFMWeaponSkinUtil
// Size: 0x28 (Inherited: 0x28)
struct UDFMWeaponSkinUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMWeaponSkinUtil, "DFMWeaponSkinUtil")

	// Object: Function DFMWeaponAssemble.DFMWeaponSkinUtil.TexasPokerPatternEnumToMaterialParameter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x141ce54c
	// Params: [ Num(2) Size(0x8) ]
	static float TexasPokerPatternEnumToMaterialParameter(int32_t InPatternEnum);

	// Object: Function DFMWeaponAssemble.DFMWeaponSkinUtil.TexasPokerPatternEnumToDebugString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x141ce474
	// Params: [ Num(2) Size(0x18) ]
	static struct FString TexasPokerPatternEnumToDebugString(int32_t InPatternEnum);

	// Object: Function DFMWeaponAssemble.DFMWeaponSkinUtil.TexasPokerNumberEnumToMaterialParameter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x141ce3d0
	// Params: [ Num(2) Size(0x8) ]
	static float TexasPokerNumberEnumToMaterialParameter(int32_t InNumberEnum);

	// Object: Function DFMWeaponAssemble.DFMWeaponSkinUtil.TexasPokerNumberEnumToDebugString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x141ce2f8
	// Params: [ Num(2) Size(0x18) ]
	static struct FString TexasPokerNumberEnumToDebugString(int32_t InNumberEnum);

	// Object: Function DFMWeaponAssemble.DFMWeaponSkinUtil.Generate_TexasPokerCards
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141ce1e4
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FWeaponSkin_TexasPoker_Card> Generate_TexasPokerCards(int32_t TexasPokerRuleId, uint64_t RandomSeed);
};

// Object: Class DFMWeaponAssemble.RTIActorData
// Size: 0x30 (Inherited: 0x28)
struct URTIActorData : UObject
{
	DEFINE_UE_CLASS_HELPERS(URTIActorData, "RTIActorData")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class DFMWeaponAssemble.RTIActorData_HeroItem
// Size: 0x60 (Inherited: 0x30)
struct URTIActorData_HeroItem : URTIActorData
{
	DEFINE_UE_CLASS_HELPERS(URTIActorData_HeroItem, "RTIActorData_HeroItem")

	struct ASkeletalMeshActor* HeroItem; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct TArray<struct UObject*> LoadedObject; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)

	// Object: Function DFMWeaponAssemble.RTIActorData_HeroItem.OnLoadHeroItemComplete
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x141ce778
	// Params: [ Num(3) Size(0x28) ]
	void OnLoadHeroItemComplete(const struct FSoftObjectPath& Path, struct FName HeroItemId, struct FName HeroItemFahionId);
};

// Object: Class DFMWeaponAssemble.RTIActorData_Item
// Size: 0x40 (Inherited: 0x30)
struct URTIActorData_Item : URTIActorData
{
	DEFINE_UE_CLASS_HELPERS(URTIActorData_Item, "RTIActorData_Item")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct AActor* ItemActor; // 0x38(0x8)
};

// Object: Class DFMWeaponAssemble.RTIActorData_Vehicle
// Size: 0x48 (Inherited: 0x30)
struct URTIActorData_Vehicle : URTIActorData
{
	DEFINE_UE_CLASS_HELPERS(URTIActorData_Vehicle, "RTIActorData_Vehicle")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct AVehicleFrontendActor* Vehicle; // 0x40(0x8)

	// Object: Function DFMWeaponAssemble.RTIActorData_Vehicle.OnLoadVehicleComplete
	// Flags: [Final|Native|Private]
	// Offset: 0x141ce8c8
	// Params: [ Num(2) Size(0x9) ]
	void OnLoadVehicleComplete(uint64_t ID, uint8_t bSuccess);
};

// Object: Class DFMWeaponAssemble.RTIActorData_Weapon
// Size: 0x40 (Inherited: 0x30)
struct URTIActorData_Weapon : URTIActorData
{
	DEFINE_UE_CLASS_HELPERS(URTIActorData_Weapon, "RTIActorData_Weapon")

	struct AAssembleWeaponActor* Weapon; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class DFMWeaponAssemble.CaptureRTResult
// Size: 0x40 (Inherited: 0x28)
struct UCaptureRTResult : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCaptureRTResult, "CaptureRTResult")

	struct UTextureRenderTarget2D* ColorRT; // 0x28(0x8)
	struct FVector2D SizeUV; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class DFMWeaponAssemble.RTICapture
// Size: 0x488 (Inherited: 0x370)
struct ARTICapture : AActor
{
	DEFINE_UE_CLASS_HELPERS(ARTICapture, "RTICapture")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x378(0x8)
	struct USceneComponent* RTIRootComponent; // 0x380(0x8)
	uint8_t Pad_0x388[0x48]; // 0x388(0x48)
	struct TMap<struct FSoftObjectPath, struct FRTILightBPData> AllRTILightBPDataMap; // 0x3D0(0x50)
	struct TMap<struct ULightComponentBase*, struct FRTIOriginLightComponentData> OriginLightComponentBaseDataMap; // 0x420(0x50)
	struct ALightShadowVolume* LightShadowVolumeActor; // 0x470(0x8)
	uint8_t Pad_0x478[0x10]; // 0x478(0x10)

	// Object: Function DFMWeaponAssemble.RTICapture.HandleCaptureWeapon
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x141cef34
	// Params: [ Num(4) Size(0x58) ]
	void HandleCaptureWeapon(struct URTIActorData* RTIActorData, struct FVector2D RTSize, const struct FRTIConfigRow& RTIConfigRow, struct UCaptureRTResult* CaptureRTResult);

	// Object: Function DFMWeaponAssemble.RTICapture.CaptureWeapon
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x141cedf4
	// Params: [ Num(4) Size(0x28) ]
	struct UCaptureRTResult* CaptureWeapon(struct URTIActorData* RTIActorData, struct FVector2D RTSize, const struct FRTIParamData& InRTIParamData);
};

// Object: Class DFMWeaponAssemble.RTICaptureHelper
// Size: 0x28 (Inherited: 0x28)
struct URTICaptureHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(URTICaptureHelper, "RTICaptureHelper")
};

// Object: Class DFMWeaponAssemble.RTIResourceManager
// Size: 0x90 (Inherited: 0x28)
struct URTIResourceManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(URTIResourceManager, "RTIResourceManager")

	struct TSet<struct UObject*> RTIResourceList_PreLoad; // 0x28(0x50)
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)

	// Object: Function DFMWeaponAssemble.RTIResourceManager.GetDefaultCommon_Transition
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141cf180
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetDefaultCommon_Transition();
};

// Object: Class DFMWeaponAssemble.RuntimeIconAction
// Size: 0x78 (Inherited: 0x28)
struct URuntimeIconAction : UObject
{
	DEFINE_UE_CLASS_HELPERS(URuntimeIconAction, "RuntimeIconAction")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UDFMImage* DFMImage; // 0x38(0x8)
	struct URuntimeTile* Tile; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	struct UTexture2D* StaticIcon_Texture2D; // 0x50(0x8)
	struct UPaperSprite* StaticIcon_PaperSprite; // 0x58(0x8)
	struct URTIActorData* RTIActorData; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct UCaptureRTResult* CaptureRTResult; // 0x70(0x8)
};

// Object: Class DFMWeaponAssemble.RuntimeIconMaker
// Size: 0xC0 (Inherited: 0x28)
struct URuntimeIconMaker : UObject
{
	DEFINE_UE_CLASS_HELPERS(URuntimeIconMaker, "RuntimeIconMaker")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct URuntimeIconAction*> RTIActionList; // 0x30(0x10)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	struct TMap<uint64_t, struct FRTIPreLoadRuntimeIconData> RTIPreLoadRuntimeIconDataList; // 0x58(0x50)
	uint8_t Pad_0xA8[0x18]; // 0xA8(0x18)

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.RequestStaticIcon
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141cfcd0
	// Params: [ Num(3) Size(0x2F) ]
	void RequestStaticIcon(struct FSoftObjectPath IconPath, struct UImage* Image, struct FRTIParamData InRTIParamData);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.RequestRuntimeIcon_Vehicle
	// Flags: [Final|Native|Public]
	// Offset: 0x141cfb90
	// Params: [ Num(3) Size(0x1F) ]
	void RequestRuntimeIcon_Vehicle(struct UVehicleFrontendContext* VehicleFrontendContext, struct UDFMImage* DFMImage, struct FRTIParamData InRTIParamData);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.RequestRuntimeIcon_Item
	// Flags: [Final|Native|Public]
	// Offset: 0x141cfab4
	// Params: [ Num(2) Size(0x10) ]
	void RequestRuntimeIcon_Item(uint64_t InItemID, struct UDFMImage* DFMImage);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.RequestRuntimeIcon_HeroItem
	// Flags: [Final|Native|Public]
	// Offset: 0x141cf9c0
	// Params: [ Num(2) Size(0x20) ]
	void RequestRuntimeIcon_HeroItem(struct FHeroItemFashionStruct HeroItemContext, struct UDFMImage* DFMImage);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.RequestRuntimeIcon
	// Flags: [Final|Native|Public]
	// Offset: 0x141cf880
	// Params: [ Num(3) Size(0x1F) ]
	void RequestRuntimeIcon(struct UModularWeaponDesc* WeaponDesc, struct UImage* Image, struct FRTIParamData InRTIParamData);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.PreLoadStaticIcon
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xf2f5e5c
	// Params: [ Num(1) Size(0x18) ]
	void PreLoadStaticIcon(struct FSoftObjectPath IconPath);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.PreLoadRuntimeIcon
	// Flags: [Final|Native|Public]
	// Offset: 0xfe29168
	// Params: [ Num(1) Size(0x8) ]
	void PreLoadRuntimeIcon(struct UModularWeaponDesc* WeaponDesc);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.IsEnableProcessIcon
	// Flags: [Final|Native|Public]
	// Offset: 0x141cf848
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableProcessIcon();

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.EnableProcessIcon
	// Flags: [Final|Native|Public]
	// Offset: 0x141cf79c
	// Params: [ Num(1) Size(0x1) ]
	void EnableProcessIcon(uint8_t bInEnableProcessIcon);

	// Object: Function DFMWeaponAssemble.RuntimeIconMaker.ClearDFMImage
	// Flags: [Final|Native|Public]
	// Offset: 0xf488588
	// Params: [ Num(1) Size(0x8) ]
	void ClearDFMImage(struct UDFMImage* DFMImage);
};

// Object: Class DFMWeaponAssemble.WeaponAdapterBaseSimple
// Size: 0x160 (Inherited: 0x28)
struct UWeaponAdapterBaseSimple : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWeaponAdapterBaseSimple, "WeaponAdapterBaseSimple")

	uint8_t Pad_0x28[0x138]; // 0x28(0x138)
};

// Object: Class DFMWeaponAssemble.WeaponAdapterItemAimDownSightsSimple
// Size: 0x168 (Inherited: 0x160)
struct UWeaponAdapterItemAimDownSightsSimple : UWeaponAdapterBaseSimple
{
	DEFINE_UE_CLASS_HELPERS(UWeaponAdapterItemAimDownSightsSimple, "WeaponAdapterItemAimDownSightsSimple")

	struct USkeletalMeshComponent* AdapterMeshCom; // 0x160(0x8)

	// Object: Function DFMWeaponAssemble.WeaponAdapterItemAimDownSightsSimple.OnAnimSeqLoadComplete
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x141d00d8
	// Params: [ Num(1) Size(0x18) ]
	void OnAnimSeqLoadComplete(const struct FSoftObjectPath& AssetPath);
};

// Object: Class DFMWeaponAssemble.WeaponAdapterItemBipodSimple
// Size: 0x160 (Inherited: 0x160)
struct UWeaponAdapterItemBipodSimple : UWeaponAdapterBaseSimple
{
	DEFINE_UE_CLASS_HELPERS(UWeaponAdapterItemBipodSimple, "WeaponAdapterItemBipodSimple")

	// Object: Function DFMWeaponAssemble.WeaponAdapterItemBipodSimple.TryModifyBipod
	// Flags: [Final|Native|Private]
	// Offset: 0x141d01a0
	// Params: [ Num(1) Size(0x8) ]
	void TryModifyBipod(struct AAssembleWeaponActor* AssembleWeaponActor);
};

// Object: Class DFMWeaponAssemble.WeaponAssemblerUtil
// Size: 0x28 (Inherited: 0x28)
struct UWeaponAssemblerUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWeaponAssemblerUtil, "WeaponAssemblerUtil")

	// Object: Function DFMWeaponAssemble.WeaponAssemblerUtil.TouchToSwitchPoint
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x141d06a8
	// Params: [ Num(2) Size(0x9) ]
	static EAssemblerCamPoint TouchToSwitchPoint(struct FVector2D ScreenPos);

	// Object: Function DFMWeaponAssemble.WeaponAssemblerUtil.TouchToPartNodeIndex
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x141d0608
	// Params: [ Num(2) Size(0xA) ]
	static int16_t TouchToPartNodeIndex(struct FVector2D ScreenPos);

	// Object: Function DFMWeaponAssemble.WeaponAssemblerUtil.StreamInFullTexture
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d0574
	// Params: [ Num(1) Size(0x8) ]
	static void StreamInFullTexture(struct UMeshComponent* InMeshCom);

	// Object: Function DFMWeaponAssemble.WeaponAssemblerUtil.IsFullTextureStreamedIn
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d04cc
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsFullTextureStreamedIn(struct UMeshComponent* InMeshCom);

	// Object: Function DFMWeaponAssemble.WeaponAssemblerUtil.GetWeaponPartAppreanceMeshPath
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x141d0374
	// Params: [ Num(4) Size(0x30) ]
	static struct FSoftObjectPath GetWeaponPartAppreanceMeshPath(uint64_t ItemID, uint64_t AppearanceId, EWeaponPartMeshType PartMeshType);

	// Object: Function DFMWeaponAssemble.WeaponAssemblerUtil.ForceCancelTextureStreamingThisTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d02e0
	// Params: [ Num(1) Size(0x8) ]
	static void ForceCancelTextureStreamingThisTime(struct UMeshComponent* InMeshCom);

	// Object: Function DFMWeaponAssemble.WeaponAssemblerUtil.CancelTexturePendingMipChangeRequest
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d024c
	// Params: [ Num(1) Size(0x8) ]
	static void CancelTexturePendingMipChangeRequest(struct UMeshComponent* InMeshCom);
};

// Object: Class DFMWeaponAssemble.WeaponAssembleSubsystem
// Size: 0x140 (Inherited: 0x30)
struct UWeaponAssembleSubsystem : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UWeaponAssembleSubsystem, "WeaponAssembleSubsystem")

	uint8_t bOpenAssemblerEditor : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	struct TWeakObjectPtr<struct AAssembleWeaponMgr> WeaponActorMgr; // 0x34(0x8)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TMap<struct FSoftObjectPath, struct TWeakObjectPtr<struct USkeletalMesh>> SkeletalsMap; // 0x40(0x50)
	struct UModularApperanceBaseProvider* ModularAppearanceProvider; // 0x90(0x8)
	struct TWeakObjectPtr<struct AWeaponDisplayBoard> DisplayBoard; // 0x98(0x8)
	struct TWeakObjectPtr<struct AAssembleWeaponActor> GunsmithWeapon; // 0xA0(0x8)
	struct TWeakObjectPtr<struct AActor> WeaponIntermediateActor; // 0xA8(0x8)
	struct AAssemblerCameraCtrl* AssemblerCameraCtrl; // 0xB0(0x8)
	struct TWeakObjectPtr<struct AActor> ViewTargetPoint; // 0xB8(0x8)
	struct TWeakObjectPtr<struct ABracketActor> BracketActor; // 0xC0(0x8)
	struct TWeakObjectPtr<struct ALightEnvToogle> LightEnvActor; // 0xC8(0x8)
	struct FMulticastInlineDelegate OnOpenGunSmithScene; // 0xD0(0x10)
	struct FMulticastInlineDelegate OnCloseGunSmithScene; // 0xE0(0x10)
	struct FMulticastInlineDelegate OnGunSmithLightEnvPrepareFinsh; // 0xF0(0x10)
	uint8_t Pad_0x100[0x20]; // 0x100(0x20)
	struct URTIResourceManager* RTIResourceManager; // 0x120(0x8)
	struct URuntimeIconMaker* RuntimeIconMaker; // 0x128(0x8)
	struct URuntimeIconManager* RuntimeIconManager; // 0x130(0x8)
	struct ARTICapture* RTICapture; // 0x138(0x8)

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.ToggleTextureStreaming
	// Flags: [Final|Native|Public]
	// Offset: 0x141d1308
	// Params: [ Num(1) Size(0x1) ]
	void ToggleTextureStreaming(uint8_t bOpen);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.SetWeaponIntermediateActorTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x141d11e0
	// Params: [ Num(3) Size(0x24) ]
	void SetWeaponIntermediateActorTransform(const struct FRotator& Rotation, struct FVector Location, struct FVector Scale);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.SetWeaponIntermediateActorLocation
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0x141d113c
	// Params: [ Num(1) Size(0xC) ]
	void SetWeaponIntermediateActorLocation(struct FVector Location);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.SetIsInGameAndClearRTI
	// Flags: [Final|Native|Public]
	// Offset: 0xf94a3a8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsInGameAndClearRTI(uint8_t bIsInGame);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.Reset
	// Flags: [Final|Native|Public]
	// Offset: 0x141d1128
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.PostApplyWorldOffset
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d100c
	// Params: [ Num(3) Size(0x20) ]
	void PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.OpenGunSmith
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x141d0fd4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t OpenGunSmith();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.OpenCameraEditor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x141d0fc0
	// Params: [ Num(0) Size(0x0) ]
	void OpenCameraEditor();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.OnGunsmithSceneChangeEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x141d0fac
	// Params: [ Num(0) Size(0x0) ]
	void OnGunsmithSceneChangeEnd();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.OnGunsmithLevelUnloadSuccess
	// Flags: [Final|Native|Protected]
	// Offset: 0x141d0f98
	// Params: [ Num(0) Size(0x0) ]
	void OnGunsmithLevelUnloadSuccess();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.IsInGame
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0f60
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInGame();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.IsGameModeMP
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0f28
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsGameModeMP();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.InitSceneActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x141d0f14
	// Params: [ Num(0) Size(0x0) ]
	void InitSceneActor();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.InitLightSceneActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x141d0f00
	// Params: [ Num(0) Size(0x0) ]
	void InitLightSceneActor();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.HasSkeletalMeshCache
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d0de8
	// Params: [ Num(2) Size(0x19) ]
	uint8_t HasSkeletalMeshCache(struct FSoftObjectPath MeshPath);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetWeaponActorMgr
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0db4
	// Params: [ Num(1) Size(0x8) ]
	struct AAssembleWeaponMgr* GetWeaponActorMgr();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetRuntimeIconManager
	// Flags: [Final|Native|Public]
	// Offset: 0xfa881a4
	// Params: [ Num(1) Size(0x8) ]
	struct URuntimeIconManager* GetRuntimeIconManager();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetRuntimeIconMaker
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0d80
	// Params: [ Num(1) Size(0x8) ]
	struct URuntimeIconMaker* GetRuntimeIconMaker();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetRTIResourceManager
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0d4c
	// Params: [ Num(1) Size(0x8) ]
	struct URTIResourceManager* GetRTIResourceManager();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetRTICapture
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0d18
	// Params: [ Num(1) Size(0x8) ]
	struct ARTICapture* GetRTICapture();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetModularAppearanceProvider
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0ce4
	// Params: [ Num(1) Size(0x8) ]
	struct UModularApperanceBaseProvider* GetModularAppearanceProvider();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetLightEnvToogle
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0cb0
	// Params: [ Num(1) Size(0x8) ]
	struct TWeakObjectPtr<struct ALightEnvToogle> GetLightEnvToogle();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetGunsmithWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0c7c
	// Params: [ Num(1) Size(0x8) ]
	struct AAssembleWeaponActor* GetGunsmithWeapon();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetGunSmithScenePostProcessVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0c48
	// Params: [ Num(1) Size(0x8) ]
	struct TWeakObjectPtr<struct APostProcessVolume> GetGunSmithScenePostProcessVolume();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.GetDisplayBoard
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0c14
	// Params: [ Num(1) Size(0x8) ]
	struct AWeaponDisplayBoard* GetDisplayBoard();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x141d0be0
	// Params: [ Num(1) Size(0x8) ]
	static struct UWeaponAssembleSubsystem* Get();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.DestroyRTICapture
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0bcc
	// Params: [ Num(0) Size(0x0) ]
	void DestroyRTICapture();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.CreateWeaponIntermediateActor
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d0aec
	// Params: [ Num(2) Size(0x18) ]
	void CreateWeaponIntermediateActor(struct FVector Location, struct FRotator Rotation);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.CreateViewTargetPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x141d0ad8
	// Params: [ Num(0) Size(0x0) ]
	void CreateViewTargetPoint();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.CreateGunsmithWeapon
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d09f8
	// Params: [ Num(2) Size(0x18) ]
	void CreateGunsmithWeapon(struct FVector Location, struct FRotator Rotation);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.CreateCameraCtrl
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d08dc
	// Params: [ Num(3) Size(0x20) ]
	void CreateCameraCtrl(struct FVector Location, struct FRotator Rotation, struct UObject* BPClass);

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.CloseGunSmith
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x141d08c8
	// Params: [ Num(0) Size(0x0) ]
	void CloseGunSmith();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.ClearRTI
	// Flags: [Final|Native|Public]
	// Offset: 0x141d08b4
	// Params: [ Num(0) Size(0x0) ]
	void ClearRTI();

	// Object: Function DFMWeaponAssemble.WeaponAssembleSubsystem.CacheSkeletalMesh
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d0774
	// Params: [ Num(2) Size(0x20) ]
	void CacheSkeletalMesh(struct FSoftObjectPath MeshPath, struct USkeletalMesh* Mesh);
};

// Object: Class DFMWeaponAssemble.WeaponDataComponentAdapterSimple
// Size: 0x1E0 (Inherited: 0xF8)
struct UWeaponDataComponentAdapterSimple : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UWeaponDataComponentAdapterSimple, "WeaponDataComponentAdapterSimple")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct TArray<struct UWeaponAdapterBaseSimple*> AdapterItems; // 0x110(0x10)
	uint8_t Pad_0x120[0xB0]; // 0x120(0xB0)
	struct TArray<struct UWeaponAdapterItemBase*> AdapterLists; // 0x1D0(0x10)

	// Object: Function DFMWeaponAssemble.WeaponDataComponentAdapterSimple.GetAnimOverideFunction
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x141d3694
	// Params: [ Num(2) Size(0x11) ]
	uint8_t GetAnimOverideFunction(struct TArray<struct FGPModularWeaponPartNode>& FunctionNode);
};

// Object: Class DFMWeaponAssemble.WeaponDisplayBoard
// Size: 0x518 (Inherited: 0x370)
struct AWeaponDisplayBoard : AActor
{
	DEFINE_UE_CLASS_HELPERS(AWeaponDisplayBoard, "WeaponDisplayBoard")

	struct TArray<struct TWeakObjectPtr<struct AActor>> SpawnPoints; // 0x370(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> SpecialSpawnPoints; // 0x380(0x10)
	struct TWeakObjectPtr<struct AActor> DisplayBoardLights; // 0x390(0x8)
	struct TWeakObjectPtr<struct AActor> AssemblyTableLights; // 0x398(0x8)
	struct TWeakObjectPtr<struct AEmitter> SlideEndParticles; // 0x3A0(0x8)
	struct UCurveFloat* SlideCurve; // 0x3A8(0x8)
	struct UCurveFloat* DropCurve; // 0x3B0(0x8)
	struct FSoftObjectPath GunDropBackSequence; // 0x3B8(0x18)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x3D0(0x8)
	float WeaponScale; // 0x3D8(0x4)
	float WeaponPopSpeed; // 0x3DC(0x4)
	float PopDistance; // 0x3E0(0x4)
	float SlideDistance; // 0x3E4(0x4)
	float SlidePageDuration1; // 0x3E8(0x4)
	float SlidePageDuration2; // 0x3EC(0x4)
	struct TArray<struct AAssembleWeaponActor*> AllWeapoons; // 0x3F0(0x10)
	struct FMulticastInlineDelegate OnWeaponSpawn; // 0x400(0x10)
	struct FMulticastInlineDelegate OnPopWeaponEnd; // 0x410(0x10)
	struct FMulticastInlineDelegate OnSliderPageEnd; // 0x420(0x10)
	float SlidePageSpeed; // 0x430(0x4)
	uint8_t Pad_0x434[0x2C]; // 0x434(0x2C)
	struct TArray<struct TWeakObjectPtr<struct AActor>> WeaponPoint; // 0x460(0x10)
	uint8_t Pad_0x470[0xA8]; // 0x470(0xA8)

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.Touch
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d4048
	// Params: [ Num(2) Size(0xA) ]
	int16_t Touch(struct FVector2D ScreenPos);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.SpawnWeaponFromePresetRow
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x141d3f2c
	// Params: [ Num(2) Size(0x39) ]
	void SpawnWeaponFromePresetRow(const struct FGunPresetRow& GunRow, uint8_t bSpecial);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.SpawnWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3e44
	// Params: [ Num(2) Size(0x9) ]
	void SpawnWeapon(struct UModularWeaponDesc* Desc, uint8_t bSpecial);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.ResetWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3d98
	// Params: [ Num(2) Size(0x4) ]
	int16_t ResetWeapon(uint16_t WeaponIndex);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.RemoveWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3cf4
	// Params: [ Num(1) Size(0x2) ]
	void RemoveWeapon(uint16_t WeaponIndex);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.PopWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3c48
	// Params: [ Num(2) Size(0x4) ]
	int16_t PopWeapon(uint16_t WeaponIndex);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.PlayWeaponDropBackAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3ba4
	// Params: [ Num(1) Size(0x1) ]
	void PlayWeaponDropBackAnim(uint8_t WeaponIndex);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.PlaySlidingAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3af8
	// Params: [ Num(1) Size(0x1) ]
	void PlaySlidingAnim(uint8_t bIsLeft);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.OpenDisplayBoardLight
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3a4c
	// Params: [ Num(1) Size(0x1) ]
	void OpenDisplayBoardLight(uint8_t bVisible);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.OnSlidingAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x141d39a8
	// Params: [ Num(1) Size(0x4) ]
	void OnSlidingAnim(float DeltaTime);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.OnGunSmithLightEnvPrepareFinsh
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3994
	// Params: [ Num(0) Size(0x0) ]
	void OnGunSmithLightEnvPrepareFinsh();

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.GetWeaponTopRightPos
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d38e8
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D GetWeaponTopRightPos(uint16_t WeaponIndex);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.GetWeaponScreenPos
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x141d3838
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetWeaponScreenPos(uint16_t WeaponIndex);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.GetWeaponDesc
	// Flags: [Final|Native|Public]
	// Offset: 0x141d378c
	// Params: [ Num(2) Size(0x10) ]
	struct UModularWeaponDesc* GetWeaponDesc(uint16_t WeaponIndex);

	// Object: Function DFMWeaponAssemble.WeaponDisplayBoard.ClearWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x141d3778
	// Params: [ Num(0) Size(0x0) ]
	void ClearWeapon();
};

// Object: Class DFMWeaponAssemble.WeaponExtraModelBaseSimple
// Size: 0x160 (Inherited: 0x160)
struct UWeaponExtraModelBaseSimple : UWeaponAdapterBaseSimple
{
	DEFINE_UE_CLASS_HELPERS(UWeaponExtraModelBaseSimple, "WeaponExtraModelBaseSimple")
};

// Object: Class DFMWeaponAssemble.WeaponPresetGenerateTool
// Size: 0x28 (Inherited: 0x28)
struct UWeaponPresetGenerateTool : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UWeaponPresetGenerateTool, "WeaponPresetGenerateTool")

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateWepaonPresetInner
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d4eb0
	// Params: [ Num(3) Size(0x20) ]
	static struct UGPModularWeaponDesc* GenerateWepaonPresetInner(struct UGPModularWeaponDesc* InWeaponDesc, struct FWeaponPresetGenerateParam Param);

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateWepaonPresetByRecId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d4dd4
	// Params: [ Num(3) Size(0x20) ]
	static struct UGPModularWeaponDesc* GenerateWepaonPresetByRecId(uint64_t RecId, struct FWeaponPresetGenerateParam Param);

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateWepaonPreset
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d4cf8
	// Params: [ Num(3) Size(0x20) ]
	static struct UGPModularWeaponDesc* GenerateWepaonPreset(uint64_t DefaultPresetID, struct FWeaponPresetGenerateParam Param);

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateAllWepaonPresetsImpl_ForechSockets
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141d4a1c
	// Params: [ Num(7) Size(0xC8) ]
	static void GenerateAllWepaonPresetsImpl_ForechSockets(struct FWeaponAllPresetGenerateContext& Context, int32_t MaxNum, struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree, struct UGPModularWeaponDesc* WeaponDesc, struct TArray<struct FWeaponPresetGeneratePartSocket> PendingSocketList, int32_t CurrentSocketIndex, int32_t Depth);

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateAllWepaonPresetsImpl
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141d4864
	// Params: [ Num(4) Size(0xB0) ]
	static void GenerateAllWepaonPresetsImpl(struct FWeaponAllPresetGenerateContext& Context, int32_t MaxNum, struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree, struct UGPModularWeaponDesc* WeaponDesc);

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateAllWepaonPresetsForTool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x141d461c
	// Params: [ Num(5) Size(0x29) ]
	static void GenerateAllWepaonPresetsForTool(int32_t MaxNum, uint8_t SpecNum, struct FString RecIdsStr, struct FString OutPaths, uint8_t bAsync);

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateAllWepaonPresets
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x141d43d4
	// Params: [ Num(5) Size(0x29) ]
	static void GenerateAllWepaonPresets(int32_t InMaxNum, uint8_t SpecNum, struct TArray<uint64_t> RecId, struct FString OutPaths, uint8_t bAsync);

	// Object: Function DFMWeaponAssemble.WeaponPresetGenerateTool.ExportWeaponDesc
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x141d4250
	// Params: [ Num(3) Size(0xA4) ]
	static void ExportWeaponDesc(struct UModularWeaponDesc* InDesc, struct FWeaponAllPresetGenerateContext& Context, int32_t MaxPart);
};

// Object: Class DFMWeaponAssemble.WeaponPresetGenerateToolCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UWeaponPresetGenerateToolCommandlet : UCommandlet
{
	DEFINE_UE_CLASS_HELPERS(UWeaponPresetGenerateToolCommandlet, "WeaponPresetGenerateToolCommandlet")
};

// Object: Class DFMWeaponAssemble.WeaponSkinPreviewSpawner
// Size: 0x380 (Inherited: 0x370)
struct AWeaponSkinPreviewSpawner : AActor
{
	DEFINE_UE_CLASS_HELPERS(AWeaponSkinPreviewSpawner, "WeaponSkinPreviewSpawner")

	struct AAssembleWeaponActor* WeaponActor; // 0x370(0x8)
	struct UModularWeaponDesc* Desc; // 0x378(0x8)

	// Object: Function DFMWeaponAssemble.WeaponSkinPreviewSpawner.RefreshWeaponActor
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x141d4fd0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshWeaponActor();
};

// Object: Class DFMWeaponAssemble.WeaponTest
// Size: 0x80 (Inherited: 0x38)
struct UWeaponTest : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UWeaponTest, "WeaponTest")

	struct FSoftObjectPath WeaponTestCharacterConfigTablePath; // 0x38(0x18)
	struct FSoftObjectPath WeaponTestWeaponPresetConfigTablePath; // 0x50(0x18)
	struct FSoftObjectPath NPCTemplateBPPath; // 0x68(0x18)
};

// Object: Class DFMWeaponAssemble.WeaponTestWorldSystem
// Size: 0x70 (Inherited: 0x30)
struct UWeaponTestWorldSystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UWeaponTestWorldSystem, "WeaponTestWorldSystem")

	struct TArray<struct AActor*> Characters; // 0x30(0x10)
	struct TArray<struct AAssembleWeaponActor*> WeaponActors; // 0x40(0x10)
	struct AActor* LastViewTarget; // 0x50(0x8)
	struct AGPPlayerController* CachePlayerController; // 0x58(0x8)
	struct AActor* FocusTarget; // 0x60(0x8)
	struct FName SrcCameraStyle; // 0x68(0x8)

	// Object: Function DFMWeaponAssemble.WeaponTestWorldSystem.EnableFocusWeaponMode
	// Flags: [Final|Native|Public]
	// Offset: 0x141d517c
	// Params: [ Num(0) Size(0x0) ]
	void EnableFocusWeaponMode();

	// Object: Function DFMWeaponAssemble.WeaponTestWorldSystem.DisableFocusWeaponMode
	// Flags: [Final|Native|Public]
	// Offset: 0x141d5168
	// Params: [ Num(0) Size(0x0) ]
	void DisableFocusWeaponMode();

	// Object: Function DFMWeaponAssemble.WeaponTestWorldSystem.ClearWeaponTestWeaponMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x141d5154
	// Params: [ Num(0) Size(0x0) ]
	void ClearWeaponTestWeaponMesh();

	// Object: Function DFMWeaponAssemble.WeaponTestWorldSystem.ClearWeaponTestCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x141d5140
	// Params: [ Num(0) Size(0x0) ]
	void ClearWeaponTestCharacter();

	// Object: Function DFMWeaponAssemble.WeaponTestWorldSystem.AddWeaponTestWeaponMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x141d509c
	// Params: [ Num(1) Size(0x8) ]
	void AddWeaponTestWeaponMesh(struct AAssembleWeaponActor* AssembleWeaponActor);

	// Object: Function DFMWeaponAssemble.WeaponTestWorldSystem.AddWeaponTestCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x141d4ff8
	// Params: [ Num(1) Size(0x8) ]
	void AddWeaponTestCharacter(struct AActor* CHARACTER);
};

} // namespace SDK
