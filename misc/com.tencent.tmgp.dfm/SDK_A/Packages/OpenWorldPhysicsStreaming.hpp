#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OpenWorldPhysicsStreaming
// Enums: 0
// Structs: 2
// Classes: 11

enum class ETextureAddress : uint8_t;
struct UMaterial;
struct UPhysicalMaterial;
struct FPhysXSerialActor;
struct FPhysXSerialBodyInstance;
struct UPhysXDrawingSettings;
struct UPhysXDrawingComponent;
struct APhysXDrawingBase;
struct APhysXDrawingNet;
struct APhysXDrawing;
struct UPhysXSerialBlendMask;
struct UPhysXSerialBodySetup;
struct UPhysXSerialComponent;
struct APhysXSceneProxyActor;
struct UPhysXProxyScheduler;
struct UPhysXProxySettings;

// Object: ScriptStruct OpenWorldPhysicsStreaming.PhysXSerialActor
// Size: 0x30 (Inherited: 0x0)
struct FPhysXSerialActor
{
	uint32_t Flag; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
	struct FQuat Rotation; // 0x10(0x10)
	struct TArray<struct FPhysXSerialBodyInstance> Instances; // 0x20(0x10)
};

// Object: ScriptStruct OpenWorldPhysicsStreaming.PhysXSerialBodyInstance
// Size: 0xA0 (Inherited: 0x0)
struct FPhysXSerialBodyInstance
{
	uint32_t Flag; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scaling; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0x30(0x8)
	struct UPhysXSerialBodySetup* BodySetup; // 0x38(0x8)
	struct TArray<struct UPhysXSerialBlendMask*> OverrideBlendMasks; // 0x40(0x10)
	struct TArray<int32_t> DisabledBlendMasks; // 0x50(0x10)
	struct TArray<uint8_t> OverrideFilterDataBytes; // 0x60(0x10)
	struct FName SourceInfo; // 0x70(0x8)
	uint8_t Pad_0x78[0x28]; // 0x78(0x28)
};

// Object: Class OpenWorldPhysicsStreaming.PhysXDrawingSettings
// Size: 0x1B8 (Inherited: 0x38)
struct UPhysXDrawingSettings : UDeveloperSettings
{
	uint8_t bFreeze : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bMessage : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bMainCharacter : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t bSolidTrigger : 1; // 0x3B(0x1), Mask(0x1)
	uint8_t BitPad_0x3B_1 : 7; // 0x3B(0x1)
	uint8_t bDoubleSided : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	float Opacity; // 0x40(0x4)
	float offset; // 0x44(0x4)
	float CullingScreenSize; // 0x48(0x4)
	float FarClippingDistance; // 0x4C(0x4)
	float MaxTranslucentExtent; // 0x50(0x4)
	float MaxTriggerExtent; // 0x54(0x4)
	float StaticInterval; // 0x58(0x4)
	float SceneMessageInterval; // 0x5C(0x4)
	float SelectionInterval; // 0x60(0x4)
	float MessageSize; // 0x64(0x4)
	int32_t MarginX; // 0x68(0x4)
	int32_t MarginY; // 0x6C(0x4)
	int32_t Mode; // 0x70(0x4)
	int32_t PhysicsAsyncMode; // 0x74(0x4)
	int32_t Color; // 0x78(0x4)
	int32_t ElementLimit; // 0x7C(0x4)
	int32_t Inclusion; // 0x80(0x4)
	int32_t Exclusion; // 0x84(0x4)
	int32_t TracingChannel; // 0x88(0x4)
	int32_t HiddenChannel; // 0x8C(0x4)
	int32_t Selection; // 0x90(0x4)
	int32_t SelectionColor; // 0x94(0x4)
	int32_t SelectionSize; // 0x98(0x4)
	uint8_t bResolve : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_1 : 7; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
	float ResolveOpacity; // 0xA0(0x4)
	float ResolveSize; // 0xA4(0x4)
	int32_t Net; // 0xA8(0x4)
	float NetDistance; // 0xAC(0x4)
	int32_t NetPackets; // 0xB0(0x4)
	int32_t NetColor; // 0xB4(0x4)
	int32_t NetMode; // 0xB8(0x4)
	float NetOpacity; // 0xBC(0x4)
	float NetOffset; // 0xC0(0x4)
	uint8_t bOffline : 1; // 0xC4(0x1), Mask(0x1)
	uint8_t BitPad_0xC4_1 : 7; // 0xC4(0x1)
	uint8_t Pad_0xC5[0x3]; // 0xC5(0x3)
	struct TArray<struct FString> IgnoreComponentWildcards; // 0xC8(0x10)
	struct TArray<struct FString> EnableDrawingCommands; // 0xD8(0x10)
	struct TArray<struct FString> DisableDrawingCommands; // 0xE8(0x10)
	struct TArray<struct FString> ShowOthersCommands; // 0xF8(0x10)
	struct TArray<struct FString> HideOthersCommands; // 0x108(0x10)
	struct TArray<struct FString> EnableDiffCommands; // 0x118(0x10)
	struct TArray<struct FString> DisableDiffCommands; // 0x128(0x10)
	struct TSoftObjectPtr<UMaterial> OpaqueMaterialPath; // 0x138(0x28)
	struct TSoftObjectPtr<UMaterial> TranslucentMaterialPath; // 0x160(0x28)
	struct TSoftObjectPtr<UMaterial> UnlitMaterialPath; // 0x188(0x28)
	struct FName DecorationCollisionProfleName; // 0x1B0(0x8)
	DEFINE_UE_CLASS_HELPERS(UPhysXDrawingSettings, "PhysXDrawingSettings")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXDrawingComponent
// Size: 0x5D0 (Inherited: 0x580)
struct UPhysXDrawingComponent : UPrimitiveComponent
{
	uint8_t Pad_0x580[0x50]; // 0x580(0x50)
	DEFINE_UE_CLASS_HELPERS(UPhysXDrawingComponent, "PhysXDrawingComponent")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXDrawingBase
// Size: 0x598 (Inherited: 0x370)
struct APhysXDrawingBase : AActor
{
	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct UPhysXDrawingComponent* StaticDrawingComponent; // 0x378(0x8)
	struct UPhysXDrawingComponent* DynamicDrawingComponent; // 0x380(0x8)
	uint8_t Pad_0x388[0x210]; // 0x388(0x210)
	DEFINE_UE_CLASS_HELPERS(APhysXDrawingBase, "PhysXDrawingBase")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXDrawingNet
// Size: 0x708 (Inherited: 0x598)
struct APhysXDrawingNet : APhysXDrawingBase
{
	struct UPhysXDrawingComponent* NetDrawingComponent; // 0x598(0x8)
	uint8_t Pad_0x5A0[0x168]; // 0x5A0(0x168)


	// Object: Function OpenWorldPhysicsStreaming.PhysXDrawingNet.ServerDestroy
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x7c7b050
	// Params: [ Num(0) Size(0x0) ]
	void ServerDestroy();

	// Object: Function OpenWorldPhysicsStreaming.PhysXDrawingNet.ServerCreatePackets
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|HasDefaults]
	// Offset: 0x7c7af6c
	// Params: [ Num(2) Size(0x10) ]
	void ServerCreatePackets(struct FVector Position, float Distance);

	// Object: Function OpenWorldPhysicsStreaming.PhysXDrawingNet.ClientReceivePacket
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x7c7ae7c
	// Params: [ Num(2) Size(0x14) ]
	void ClientReceivePacket(struct TArray<uint8_t> PacketData, int32_t NumPackets);
	DEFINE_UE_CLASS_HELPERS(APhysXDrawingNet, "PhysXDrawingNet")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXDrawing
// Size: 0x708 (Inherited: 0x708)
struct APhysXDrawing : APhysXDrawingNet
{	DEFINE_UE_CLASS_HELPERS(APhysXDrawing, "PhysXDrawing")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXSerialBlendMask
// Size: 0x68 (Inherited: 0x28)
struct UPhysXSerialBlendMask : UObject
{
	uint8_t UVChannel; // 0x28(0x1)
	ETextureAddress AddressX; // 0x29(0x1)
	ETextureAddress AddressY; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x1]; // 0x2B(0x1)
	struct FIntPoint TextureSize; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<uint8_t> TextureData; // 0x38(0x10)
	struct FName SourceInfo; // 0x48(0x8)
	struct FDateTime Timestamp; // 0x50(0x8)
	struct TArray<struct UPhysicalMaterial*> Materials; // 0x58(0x10)
	DEFINE_UE_CLASS_HELPERS(UPhysXSerialBlendMask, "PhysXSerialBlendMask")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXSerialBodySetup
// Size: 0x138 (Inherited: 0x28)
struct UPhysXSerialBodySetup : UObject
{
	struct FName SourceInfo; // 0x28(0x8)
	struct FDateTime Timestamp; // 0x30(0x8)
	struct FKAggregateGeom AggGeom; // 0x38(0x58)
	struct TArray<struct FIntPoint> ConvexMeshToMirrored; // 0x90(0x10)
	struct TArray<struct FIntPoint> GeomToShape; // 0xA0(0x10)
	struct TArray<uint8_t> FilterDataBytes; // 0xB0(0x10)
	struct TArray<struct UPhysicalMaterial*> Materials; // 0xC0(0x10)
	struct TArray<struct UPhysXSerialBlendMask*> BlendMasks; // 0xD0(0x10)
	struct TArray<uint8_t> FaceMaterialIndices; // 0xE0(0x10)
	uint8_t bIsHeightField : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x47]; // 0xF1(0x47)
	DEFINE_UE_CLASS_HELPERS(UPhysXSerialBodySetup, "PhysXSerialBodySetup")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXSerialComponent
// Size: 0x6E0 (Inherited: 0x5F0)
struct UPhysXSerialComponent : UPhysicsAsyncComponent
{
	struct TArray<struct FPhysXSerialActor> SerialActors; // 0x5E8(0x10)
	struct TArray<struct FPhysXSerialBodyInstance> SerialBodyInstances; // 0x5F8(0x10)
	struct FDateTime Timestamp; // 0x608(0x8)
	uint8_t bDestructible : 1; // 0x610(0x1), Mask(0x1)
	uint8_t BitPad_0x618_1 : 7; // 0x618(0x1)
	uint8_t Pad_0x619[0xC7]; // 0x619(0xC7)
	DEFINE_UE_CLASS_HELPERS(UPhysXSerialComponent, "PhysXSerialComponent")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXSceneProxyActor
// Size: 0x370 (Inherited: 0x370)
struct APhysXSceneProxyActor : AActor
{	DEFINE_UE_CLASS_HELPERS(APhysXSceneProxyActor, "PhysXSceneProxyActor")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXProxyScheduler
// Size: 0x70 (Inherited: 0x30)
struct UPhysXProxyScheduler : UWorldSubsystem
{
	uint8_t Pad_0x30[0x40]; // 0x30(0x40)
	DEFINE_UE_CLASS_HELPERS(UPhysXProxyScheduler, "PhysXProxyScheduler")

};

// Object: Class OpenWorldPhysicsStreaming.PhysXProxySettings
// Size: 0x48 (Inherited: 0x38)
struct UPhysXProxySettings : UDeveloperSettings
{
	uint8_t bDisableBlendMask : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bDisableScheduler : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bPruningStructure : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x1]; // 0x3B(0x1)
	int32_t SchedulerStep; // 0x3C(0x4)
	float SchedulerTimeLimit; // 0x40(0x4)
	float SchedulerInterval; // 0x44(0x4)
	DEFINE_UE_CLASS_HELPERS(UPhysXProxySettings, "PhysXProxySettings")

};

} // namespace SDK
