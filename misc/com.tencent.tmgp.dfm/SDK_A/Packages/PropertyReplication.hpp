#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OnlineSubsystemUtils.hpp"

namespace SDK
{

// Package: PropertyReplication
// Enums: 1
// Structs: 11
// Classes: 9

struct UNetConnection;
struct UStaticMeshComponent;
struct FPropertyReplicationHandler;
struct FScriptStructArray;
struct FPropertyReplicationContainer;
struct FPropertyReplicationPendingNakInfo;
struct FPropertyReplicationAuxItem;
struct FNetGuid;
struct FPropertyReplicationBaseItem;
struct FPropertyReplicationItem;
struct FPropertyReplicationTest;
struct FReplicationFrameNumber;
struct FReplicationFrameNumberRange;
struct UPropertyReplicationSettings;
struct UPropertyReplicationSubsystem;
struct APropertyReplicationActor;
struct UPropertyReplicationComponent;
struct UPropertyReplicationConnection;
struct UPropertyReplicationPackageMapClient;
struct UPropertyReplicationTestObject;
struct APropertyReplicationTestActor;
struct IPropertyReplicationInterface;

// Object: Enum PropertyReplication.EPropertyReplicationCullingMethod
enum class EPropertyReplicationCullingMethod : uint8_t
{
	ECM_AUTO = 0,
	ECM_DISTANCE = 1,
	ECM_NO_CULLING = 2,
	ECM_MAX = 3
};

// Object: ScriptStruct PropertyReplication.PropertyReplicationHandler
// Size: 0x10 (Inherited: 0x0)
struct FPropertyReplicationHandler
{
	struct UPropertyReplicationComponent* PropertyReplicationComponent; // 0x0(0x8)
	int32_t ObjectIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct PropertyReplication.ScriptStructArray
// Size: 0x20 (Inherited: 0x0)
struct FScriptStructArray
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct UScriptStruct* ScriptStruct; // 0x10(0x8)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct PropertyReplication.PropertyReplicationContainer
// Size: 0xE0 (Inherited: 0x0)
struct FPropertyReplicationContainer
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct TArray<struct FPropertyReplicationAuxItem> AuxItems; // 0x20(0x10)
	uint8_t Pad_0x30[0x38]; // 0x30(0x38)
	struct TArray<struct FPropertyReplicationPendingNakInfo> PendingNakInfos; // 0x68(0x10)
	struct TScriptInterface<IPropertyReplicationInterface> DefaultInterface; // 0x78(0x10)
	uint8_t Pad_0x88[0x58]; // 0x88(0x58)
};

// Object: ScriptStruct PropertyReplication.PropertyReplicationPendingNakInfo
// Size: 0x18 (Inherited: 0x0)
struct FPropertyReplicationPendingNakInfo
{
	struct UNetConnection* Connection; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct PropertyReplication.PropertyReplicationAuxItem
// Size: 0x28 (Inherited: 0x0)
struct FPropertyReplicationAuxItem
{
	struct TScriptInterface<IPropertyReplicationInterface> CacheInterface; // 0x0(0x10)
	uint8_t Pad_0x10[0x18]; // 0x10(0x18)
};

// Object: ScriptStruct PropertyReplication.NetGuid
// Size: 0x10 (Inherited: 0x0)
struct FNetGuid
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct PropertyReplication.PropertyReplicationBaseItem
// Size: 0x1 (Inherited: 0x0)
struct FPropertyReplicationBaseItem
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct PropertyReplication.PropertyReplicationItem
// Size: 0x8 (Inherited: 0x1)
struct FPropertyReplicationItem : FPropertyReplicationBaseItem
{
	struct UObject* Object; // 0x0(0x8)
};

// Object: ScriptStruct PropertyReplication.PropertyReplicationTest
// Size: 0x40 (Inherited: 0x8)
struct FPropertyReplicationTest : FPropertyReplicationItem
{
	int32_t I; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct UObject*> Objects; // 0x10(0x10)
	uint8_t bBit0 : 1; // 0x20(0x1), Mask(0x1)
	uint8_t bBit1 : 1; // 0x20(0x1), Mask(0x2)
	uint8_t BitPad_0x20_2 : 6; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t SlowInt; // 0x24(0x4)
	struct TArray<int32_t> SlowInts; // 0x28(0x10)
	int32_t Index; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct PropertyReplication.ReplicationFrameNumber
// Size: 0x4 (Inherited: 0x0)
struct FReplicationFrameNumber
{
	int32_t Number; // 0x0(0x4)
};

// Object: ScriptStruct PropertyReplication.ReplicationFrameNumberRange
// Size: 0x8 (Inherited: 0x0)
struct FReplicationFrameNumberRange
{
	struct FReplicationFrameNumber Begin; // 0x0(0x4)
	struct FReplicationFrameNumber End; // 0x4(0x4)
};

// Object: Class PropertyReplication.PropertyReplicationSettings
// Size: 0x50 (Inherited: 0x38)
struct UPropertyReplicationSettings : UDeveloperSettings
{
	struct TArray<struct TSoftClassPtr<struct APropertyReplicationActor*>> ReplicationActorClasses; // 0x38(0x10)
	float AOICellSize; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	DEFINE_UE_CLASS_HELPERS(UPropertyReplicationSettings, "PropertyReplicationSettings")

};

// Object: Class PropertyReplication.PropertyReplicationSubsystem
// Size: 0x58 (Inherited: 0x30)
struct UPropertyReplicationSubsystem : UWorldSubsystem
{
	struct TArray<struct APropertyReplicationActor*> ReplicationActors; // 0x30(0x10)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	DEFINE_UE_CLASS_HELPERS(UPropertyReplicationSubsystem, "PropertyReplicationSubsystem")

};

// Object: Class PropertyReplication.PropertyReplicationActor
// Size: 0x380 (Inherited: 0x370)
struct APropertyReplicationActor : AActor
{
	uint8_t Pad_0x370[0xC]; // 0x370(0xC)
	uint8_t bEnableFastNetFrame : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t BitPad_0x37C_1 : 7; // 0x37C(0x1)
	uint8_t Pad_0x37D[0x3]; // 0x37D(0x3)
	DEFINE_UE_CLASS_HELPERS(APropertyReplicationActor, "PropertyReplicationActor")

};

// Object: Class PropertyReplication.PropertyReplicationComponent
// Size: 0x2D8 (Inherited: 0xF8)
struct UPropertyReplicationComponent : UActorComponent
{
	struct FPropertyReplicationContainer Container; // 0xF8(0xE0)
	struct FPropertyReplicationContainer ContainerReplay; // 0x1D8(0xE0)
	uint8_t Pad_0x2B8[0x8]; // 0x2B8(0x8)
	struct UObject* InterfaceClass; // 0x2C0(0x8)
	int32_t ReplicationPeriod; // 0x2C8(0x4)
	EPropertyReplicationCullingMethod CullingMethod; // 0x2CC(0x1)
	uint8_t Pad_0x2CD[0x3]; // 0x2CD(0x3)
	float CullingDistance; // 0x2D0(0x4)
	uint8_t Pad_0x2D4[0x4]; // 0x2D4(0x4)


	// Object: Function PropertyReplication.PropertyReplicationComponent.OnRep_ContainerReplay
	// Flags: [Final|Native|Public]
	// Offset: 0x8b6eaa0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ContainerReplay();

	// Object: Function PropertyReplication.PropertyReplicationComponent.OnRep_Container
	// Flags: [Final|Native|Public]
	// Offset: 0xeaaf110
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Container();

	// Object: Function PropertyReplication.PropertyReplicationComponent.MulticastUnreliable
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x8b6e974
	// Params: [ Num(3) Size(0x1C) ]
	void MulticastUnreliable(struct UObject* Object, struct TArray<uint8_t> Data, int32_t NumBits);

	// Object: Function PropertyReplication.PropertyReplicationComponent.MulticastReliable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x8b6e848
	// Params: [ Num(3) Size(0x1C) ]
	void MulticastReliable(struct UObject* Object, struct TArray<uint8_t> Data, int32_t NumBits);
	DEFINE_UE_CLASS_HELPERS(UPropertyReplicationComponent, "PropertyReplicationComponent")

};

// Object: Class PropertyReplication.PropertyReplicationConnection
// Size: 0x1DE0 (Inherited: 0x1DE0)
struct UPropertyReplicationConnection : UIpConnection
{	DEFINE_UE_CLASS_HELPERS(UPropertyReplicationConnection, "PropertyReplicationConnection")

};

// Object: Class PropertyReplication.PropertyReplicationPackageMapClient
// Size: 0x470 (Inherited: 0x3F8)
struct UPropertyReplicationPackageMapClient : UPackageMapClient
{
	uint8_t Pad_0x3F8[0x78]; // 0x3F8(0x78)
	DEFINE_UE_CLASS_HELPERS(UPropertyReplicationPackageMapClient, "PropertyReplicationPackageMapClient")

};

// Object: Class PropertyReplication.PropertyReplicationTestObject
// Size: 0x88 (Inherited: 0x28)
struct UPropertyReplicationTestObject : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
	int32_t DummyInt; // 0x70(0x4)
	uint8_t Pad_0x74[0x14]; // 0x74(0x14)


	// Object: Function PropertyReplication.PropertyReplicationTestObject.MulticasUnreliable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x8b6ede8
	// Params: [ Num(1) Size(0x4) ]
	void MulticasUnreliable(int32_t I);

	// Object: Function PropertyReplication.PropertyReplicationTestObject.MulticasReliable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x8b6ed3c
	// Params: [ Num(1) Size(0x4) ]
	void MulticasReliable(int32_t I);
	DEFINE_UE_CLASS_HELPERS(UPropertyReplicationTestObject, "PropertyReplicationTestObject")

};

// Object: Class PropertyReplication.PropertyReplicationTestActor
// Size: 0xF90 (Inherited: 0x370)
struct APropertyReplicationTestActor : AActor
{
	struct UPropertyReplicationTestObject* Objects[0x80]; // 0x370(0x400)
	struct UPropertyReplicationComponent* PropertyReplicationComponent; // 0x770(0x8)
	uint8_t Pad_0x778[0x800]; // 0x778(0x800)
	struct UStaticMeshComponent* StaticMesh; // 0xF78(0x8)
	uint8_t Pad_0xF80[0x10]; // 0xF80(0x10)
	DEFINE_UE_CLASS_HELPERS(APropertyReplicationTestActor, "PropertyReplicationTestActor")

};

// Object: Class PropertyReplication.PropertyReplicationInterface
// Size: 0x28 (Inherited: 0x28)
struct IPropertyReplicationInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IPropertyReplicationInterface, "PropertyReplicationInterface")

};

} // namespace SDK
