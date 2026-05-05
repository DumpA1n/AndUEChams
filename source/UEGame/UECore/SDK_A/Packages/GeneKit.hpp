#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GeneKit
// Enums: 7
// Structs: 5
// Classes: 7

struct FGeneKitAnchorData;
struct FGeneKitPrefabInfo;
struct FGeneKitSocketPluginBind;
struct FGeneKitPluginTag;
struct FGeneKitSocketTag;
struct AGeneKitActor;
struct UGeneKitAnchorDataConfig;
struct UGeneKitAssetCollection;
struct UGeneKitComponent;
struct UGeneKitPluginSettings;
struct UGeneKitRuntimeAssets;
struct USocketPluginAssets;

// Object: Enum GeneKit.EPositionSnapArrangeType
enum class EPositionSnapArrangeType : uint8_t
{
	TopLeft = 0,
	TopCenter = 1,
	TopRight = 2,
	MiddleLeft = 3,
	MiddleCenter = 4,
	MiddleRight = 5,
	BottomLeft = 6,
	BottomCenter = 7,
	BottomRight = 8,
	EPositionSnapArrangeType_MAX = 9
};

// Object: Enum GeneKit.EGeneKitMaterialType
enum class EGeneKitMaterialType : uint8_t
{
	Wood = 0,
	EGeneKitMaterialType_MAX = 1
};

// Object: Enum GeneKit.EGeneKitConnectType
enum class EGeneKitConnectType : uint8_t
{
	Constant = 0,
	Sigle = 1,
	Combined = 2,
	EGeneKitConnectType_MAX = 3
};

// Object: Enum GeneKit.EGeneKitRotateType
enum class EGeneKitRotateType : uint8_t
{
	CannotRotate = 0,
	HorizontalRotate = 1,
	VerticalRotate = 2,
	FreeRotate = 3,
	EGeneKitRotateType_MAX = 4
};

// Object: Enum GeneKit.EGeneKitSnapType
enum class EGeneKitSnapType : uint8_t
{
	Unknow = 0,
	GripSnap = 1,
	AnchorSnap = 2,
	SocketPluginSnap = 3,
	EGeneKitSnapType_MAX = 4
};

// Object: Enum GeneKit.EGeneKitPrefabType
enum class EGeneKitPrefabType : uint8_t
{
	Unknown = 0,
	Atomic = 1,
	Combined = 2,
	EGeneKitPrefabType_MAX = 3
};

// Object: Enum GeneKit.EGeneKitAnchorType
enum class EGeneKitAnchorType : uint8_t
{
	Unknown = 0,
	Socket = 1,
	Plugin = 2,
	EGeneKitAnchorType_MAX = 3
};

// Object: ScriptStruct GeneKit.GeneKitAnchorData
// Size: 0x50 (Inherited: 0x0)
struct FGeneKitAnchorData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint64_t AnchorDataConnectId; // 0x8(0x8)
	struct FName SocketOrPluginTag; // 0x10(0x8)
	struct FVector PivotOffset; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FRotator> Rotations; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: ScriptStruct GeneKit.GeneKitPrefabInfo
// Size: 0x30 (Inherited: 0x0)
struct FGeneKitPrefabInfo
{
	struct FName GeneKitName; // 0x0(0x8)
	struct TSoftObjectPtr<UObject> GeneKitActorPrefabs; // 0x8(0x28)
};

// Object: ScriptStruct GeneKit.GeneKitSocketPluginBind
// Size: 0x20 (Inherited: 0x0)
struct FGeneKitSocketPluginBind
{
	struct FName SocketTag; // 0x0(0x8)
	struct TArray<struct FName> CanBindPluginTags; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct GeneKit.GeneKitPluginTag
// Size: 0x14 (Inherited: 0x0)
struct FGeneKitPluginTag
{
	struct FName PluginTag; // 0x0(0x8)
	struct FName PluginTagDes; // 0x8(0x8)
	uint8_t Pad_0x10[0x4]; // 0x10(0x4)
};

// Object: ScriptStruct GeneKit.GeneKitSocketTag
// Size: 0x14 (Inherited: 0x0)
struct FGeneKitSocketTag
{
	struct FName SocketTag; // 0x0(0x8)
	struct FName SocketTagDes; // 0x8(0x8)
	uint8_t Pad_0x10[0x4]; // 0x10(0x4)
};

// Object: Class GeneKit.GeneKitActor
// Size: 0x378 (Inherited: 0x370)
struct AGeneKitActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGeneKitActor, "GeneKitActor")

	struct UGeneKitComponent* GeneKit; // 0x370(0x8)
};

// Object: Class GeneKit.GeneKitAnchorDataConfig
// Size: 0x60 (Inherited: 0x28)
struct UGeneKitAnchorDataConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeneKitAnchorDataConfig, "GeneKitAnchorDataConfig")

	struct TArray<struct FGeneKitAnchorData> GeneKitSocketDatas; // 0x28(0x10)
	struct TArray<struct FGeneKitAnchorData> GeneKitPluginDatas; // 0x38(0x10)
	struct TArray<uint64_t> AnchorDataConnectIds; // 0x48(0x10)
	uint8_t IgnorePick : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
};

// Object: Class GeneKit.GeneKitAssetCollection
// Size: 0x28 (Inherited: 0x28)
struct UGeneKitAssetCollection : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeneKitAssetCollection, "GeneKitAssetCollection")
};

// Object: Class GeneKit.GeneKitComponent
// Size: 0x330 (Inherited: 0x240)
struct UGeneKitComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeneKitComponent, "GeneKitComponent")

	struct TArray<struct UGeneKitComponent*> ChildrenGeneKitComponents; // 0x240(0x10)
	struct UGeneKitComponent* ParentGeneKitComponent; // 0x250(0x8)
	uint8_t Pad_0x258[0x8]; // 0x258(0x8)
	struct UGeneKitAnchorDataConfig* GeneKitAnchorDataConfig; // 0x260(0x8)
	uint8_t Pad_0x268[0x80]; // 0x268(0x80)
	struct TSoftObjectPtr<UGeneKitAnchorDataConfig> GeneKitConfigAsset; // 0x2E8(0x28)
	uint8_t Pad_0x310[0x20]; // 0x310(0x20)
};

// Object: Class GeneKit.GeneKitPluginSettings
// Size: 0x80 (Inherited: 0x28)
struct UGeneKitPluginSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeneKitPluginSettings, "GeneKitPluginSettings")

	struct TSoftObjectPtr<USocketPluginAssets> AnchorTagAssetReference; // 0x28(0x28)
	struct TSoftObjectPtr<UGeneKitRuntimeAssets> GeneKitRuntimeAssetReference; // 0x50(0x28)
	uint8_t OpenDebug : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: Class GeneKit.GeneKitRuntimeAssets
// Size: 0x38 (Inherited: 0x28)
struct UGeneKitRuntimeAssets : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeneKitRuntimeAssets, "GeneKitRuntimeAssets")

	struct TArray<struct FGeneKitPrefabInfo> LstGeneKitAssets; // 0x28(0x10)
};

// Object: Class GeneKit.SocketPluginAssets
// Size: 0x58 (Inherited: 0x28)
struct USocketPluginAssets : UObject
{
	DEFINE_UE_CLASS_HELPERS(USocketPluginAssets, "SocketPluginAssets")

	struct TArray<struct FGeneKitSocketTag> DefineGeneKitSocketTags; // 0x28(0x10)
	struct TArray<struct FGeneKitPluginTag> DefineGeneKitPluginTags; // 0x38(0x10)
	struct TArray<struct FGeneKitSocketPluginBind> SocketPluginBinds; // 0x48(0x10)
};

} // namespace SDK
