#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OpenWorldInstancedStaticMeshProxy
// Enums: 0
// Structs: 5
// Classes: 4

struct AActor;
struct AReflectionCapture;
struct UInstancedStaticMeshComponent;
struct UMaterialInterface;
struct UOpenWorldHierarchicalInstancedMeshComponent;
struct UStaticMesh;
struct FInstancedStaticMeshComponentData;
struct FInstancedStaticMeshProxy;
struct FInstancedStaticMeshInstancedData;
struct FComponentProperties;
struct FStreamingCommand;
struct AInstancedStaticMeshProxyCollector;
struct UInstancedStaticMeshProxyComponent;
struct UMergedStaticMeshProxyComponent;
struct AMergedStaticMeshStreamer;

// Object: ScriptStruct OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshComponentData
// Size: 0x40 (Inherited: 0x0)
struct FInstancedStaticMeshComponentData
{
	struct UInstancedStaticMeshComponent* ComponentClass; // 0x0(0x8)
	struct UStaticMesh* StaticMesh; // 0x8(0x8)
	uint8_t bHiddenInGame : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t bCustomPhysicsCreating : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t bOverrideCullScreenSize : 1; // 0x12(0x1), Mask(0x1)
	uint8_t BitPad_0x12_1 : 7; // 0x12(0x1)
	uint8_t bForceSkylightReflection : 1; // 0x13(0x1), Mask(0x1)
	uint8_t BitPad_0x13_1 : 7; // 0x13(0x1)
	uint8_t bCastShadow : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bReceiveShadow : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float CullingScreenSize; // 0x18(0x4)
	struct FName CollisionProfile; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct AReflectionCapture* ManuallySpecifyReflectionCapture; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x30(0x10)
};

// Object: ScriptStruct OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshProxy
// Size: 0x50 (Inherited: 0x0)
struct FInstancedStaticMeshProxy
{
	struct FInstancedStaticMeshComponentData ComponentData; // 0x0(0x40)
	struct TArray<struct FInstancedStaticMeshInstancedData> InstancedData; // 0x40(0x10)
};

// Object: ScriptStruct OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshInstancedData
// Size: 0x30 (Inherited: 0x0)
struct FInstancedStaticMeshInstancedData
{
	struct FTransform Transform; // 0x0(0x30)
};

// Object: ScriptStruct OpenWorldInstancedStaticMeshProxy.ComponentProperties
// Size: 0x28 (Inherited: 0x0)
struct FComponentProperties
{
	struct UStaticMesh* StaticMesh; // 0x0(0x8)
	uint8_t bForceSkylightReflection : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bCastShadow : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t bReceiveShadow : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
	struct AReflectionCapture* ManuallySpecifyReflectionCapture; // 0x10(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x18(0x10)
};

// Object: ScriptStruct OpenWorldInstancedStaticMeshProxy.StreamingCommand
// Size: 0xC (Inherited: 0x0)
struct FStreamingCommand
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: Class OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshProxyCollector
// Size: 0x460 (Inherited: 0x370)
struct AInstancedStaticMeshProxyCollector : AActor
{
	uint8_t Pad_0x370[0xF0]; // 0x370(0xF0)
	DEFINE_UE_CLASS_HELPERS(AInstancedStaticMeshProxyCollector, "InstancedStaticMeshProxyCollector")

};

// Object: Class OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshProxyComponent
// Size: 0x2A0 (Inherited: 0x240)
struct UInstancedStaticMeshProxyComponent : USceneComponent
{
	struct FInstancedStaticMeshProxy Proxy; // 0x240(0x50)
	uint8_t Pad_0x290[0x10]; // 0x290(0x10)
	DEFINE_UE_CLASS_HELPERS(UInstancedStaticMeshProxyComponent, "InstancedStaticMeshProxyComponent")

};

// Object: Class OpenWorldInstancedStaticMeshProxy.MergedStaticMeshProxyComponent
// Size: 0x2B0 (Inherited: 0x240)
struct UMergedStaticMeshProxyComponent : USceneComponent
{
	struct FComponentProperties CompProperties; // 0x240(0x28)
	struct TArray<struct FTransform> InstancesData; // 0x268(0x10)
	struct TArray<uint8_t> InstancesUseAsOccluder; // 0x278(0x10)
	struct FName DebugLayerName; // 0x288(0x8)
	uint8_t Pad_0x290[0x8]; // 0x290(0x8)
	struct TArray<struct AActor*> StaticMeshActors; // 0x298(0x10)
	uint8_t Pad_0x2A8[0x8]; // 0x2A8(0x8)
	DEFINE_UE_CLASS_HELPERS(UMergedStaticMeshProxyComponent, "MergedStaticMeshProxyComponent")

};

// Object: Class OpenWorldInstancedStaticMeshProxy.MergedStaticMeshStreamer
// Size: 0x470 (Inherited: 0x370)
struct AMergedStaticMeshStreamer : AActor
{
	struct TMap<struct FComponentProperties, struct UOpenWorldHierarchicalInstancedMeshComponent*> Components; // 0x370(0x50)
	struct TSet<struct UOpenWorldHierarchicalInstancedMeshComponent*> ComponentsNeedRebuildTree; // 0x3C0(0x50)
	uint8_t Pad_0x410[0x60]; // 0x410(0x60)
	DEFINE_UE_CLASS_HELPERS(AMergedStaticMeshStreamer, "MergedStaticMeshStreamer")

};

} // namespace SDK
