#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ReplicationGraph
// Enums: 0
// Structs: 4
// Classes: 15

struct AActor;
struct UNetConnection;
struct UNetDriver;
struct FConnectionAlwaysRelevantNodePair;
struct FLastLocationGatherInfo;
struct FTearOffActorInfo;
struct FAlwaysRelevantActorInfo;
struct UReplicationGraph;
struct UBasicReplicationGraph;
struct UReplicationGraphNode;
struct UReplicationGraphNode_ActorList;
struct UReplicationGraphNode_ActorListFrequencyBuckets;
struct UReplicationGraphNode_DynamicSpatialFrequency;
struct UReplicationGraphNode_ConnectionDormancyNode;
struct UReplicationGraphNode_DormancyNode;
struct UReplicationGraphNode_GridCell;
struct UReplicationGraphNode_GridSpatialization2D;
struct UReplicationGraphNode_AlwaysRelevant;
struct UReplicationGraphNode_AlwaysRelevant_ForConnection;
struct UReplicationGraphNode_TearOff_ForConnection;
struct UNetReplicationGraphConnection;
struct AReplicationGraphDebugActor;

// Object: ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// Size: 0x10 (Inherited: 0x0)
struct FConnectionAlwaysRelevantNodePair
{
	struct UNetConnection* NetConnection; // 0x0(0x8)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8(0x8)
};

// Object: ScriptStruct ReplicationGraph.LastLocationGatherInfo
// Size: 0x18 (Inherited: 0x0)
struct FLastLocationGatherInfo
{
	struct UNetConnection* Connection; // 0x0(0x8)
	struct FVector LastLocation; // 0x8(0xC)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ReplicationGraph.TearOffActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FTearOffActorInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* Actor; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FAlwaysRelevantActorInfo
{
	struct UNetConnection* Connection; // 0x0(0x8)
	struct AActor* LastViewer; // 0x8(0x8)
	struct AActor* LastViewTarget; // 0x10(0x8)
};

// Object: Class ReplicationGraph.ReplicationGraph
// Size: 0x4E0 (Inherited: 0x28)
struct UReplicationGraph : UReplicationDriver
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraph, "ReplicationGraph")

	struct UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28(0x8)
	uint8_t bEnableNetDirtySystem : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bEnableSubobjectDirtyOptimize : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
	struct UNetDriver* NetDriver; // 0x38(0x8)
	struct TArray<struct UNetReplicationGraphConnection*> Connections; // 0x40(0x10)
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections; // 0x50(0x10)
	uint8_t Pad_0x60[0x40]; // 0x60(0x40)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes; // 0xA0(0x10)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes; // 0xB0(0x10)
	uint8_t Pad_0xC0[0x420]; // 0xC0(0x420)
};

// Object: Class ReplicationGraph.BasicReplicationGraph
// Size: 0x510 (Inherited: 0x4E0)
struct UBasicReplicationGraph : UReplicationGraph
{
	DEFINE_UE_CLASS_HELPERS(UBasicReplicationGraph, "BasicReplicationGraph")

	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x4D8(0x8)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4E0(0x8)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x4E8(0x10)
	struct TArray<struct AActor*> ActorsWithoutNetConnection; // 0x4F8(0x10)
};

// Object: Class ReplicationGraph.ReplicationGraphNode
// Size: 0x50 (Inherited: 0x28)
struct UReplicationGraphNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode, "ReplicationGraphNode")

	struct TArray<struct UReplicationGraphNode*> AllChildNodes; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0xF8 (Inherited: 0x50)
struct UReplicationGraphNode_ActorList : UReplicationGraphNode
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_ActorList, "ReplicationGraphNode_ActorList")

	uint8_t Pad_0x50[0xA8]; // 0x50(0xA8)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x138 (Inherited: 0x50)
struct UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_ActorListFrequencyBuckets, "ReplicationGraphNode_ActorListFrequencyBuckets")

	uint8_t Pad_0x50[0xE8]; // 0x50(0xE8)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x128 (Inherited: 0xF8)
struct UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_DynamicSpatialFrequency, "ReplicationGraphNode_DynamicSpatialFrequency")

	uint8_t Pad_0xF8[0x30]; // 0xF8(0x30)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x190 (Inherited: 0xF8)
struct UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_ConnectionDormancyNode, "ReplicationGraphNode_ConnectionDormancyNode")

	uint8_t Pad_0xF8[0x98]; // 0xF8(0x98)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0x148 (Inherited: 0xF8)
struct UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_DormancyNode, "ReplicationGraphNode_DormancyNode")

	uint8_t Pad_0xF8[0x50]; // 0xF8(0x50)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x150 (Inherited: 0xF8)
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_GridCell, "ReplicationGraphNode_GridCell")

	uint8_t Pad_0xF8[0x48]; // 0xF8(0x48)
	struct UReplicationGraphNode* DynamicNode; // 0x140(0x8)
	struct UReplicationGraphNode_DormancyNode* DormancyNode; // 0x148(0x8)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x230 (Inherited: 0x50)
struct UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_GridSpatialization2D, "ReplicationGraphNode_GridSpatialization2D")

	uint8_t Pad_0x50[0x1E0]; // 0x50(0x1E0)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x68 (Inherited: 0x50)
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_AlwaysRelevant, "ReplicationGraphNode_AlwaysRelevant")

	struct UReplicationGraphNode* ChildNode; // 0x50(0x8)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0x130 (Inherited: 0xF8)
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_AlwaysRelevant_ForConnection, "ReplicationGraphNode_AlwaysRelevant_ForConnection")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0x110(0x10)
	struct AActor* LastViewer; // 0x120(0x8)
	struct AActor* LastViewTarget; // 0x128(0x8)
};

// Object: Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x78 (Inherited: 0x50)
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode
{
	DEFINE_UE_CLASS_HELPERS(UReplicationGraphNode_TearOff_ForConnection, "ReplicationGraphNode_TearOff_ForConnection")

	struct TArray<struct FTearOffActorInfo> TearOffActors; // 0x50(0x10)
	uint8_t Pad_0x60[0x18]; // 0x60(0x18)
};

// Object: Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x240 (Inherited: 0x28)
struct UNetReplicationGraphConnection : UReplicationConnectionDriver
{
	DEFINE_UE_CLASS_HELPERS(UNetReplicationGraphConnection, "NetReplicationGraphConnection")

	struct UNetConnection* NetConnection; // 0x28(0x8)
	uint8_t Pad_0x30[0x140]; // 0x30(0x140)
	struct AReplicationGraphDebugActor* DebugActor; // 0x170(0x8)
	uint8_t Pad_0x178[0x18]; // 0x178(0x18)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x190(0x10)
	uint8_t Pad_0x1A0[0x8]; // 0x1A0(0x8)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes; // 0x1A8(0x10)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1B8(0x8)
	uint8_t Pad_0x1C0[0x80]; // 0x1C0(0x80)
};

// Object: Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x380 (Inherited: 0x370)
struct AReplicationGraphDebugActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AReplicationGraphDebugActor, "ReplicationGraphDebugActor")

	struct UReplicationGraph* ReplicationGraph; // 0x370(0x8)
	struct UNetReplicationGraphConnection* ConnectionManager; // 0x378(0x8)

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78de320
	// Params: [ Num(0) Size(0x0) ]
	void ServerStopDebugging();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78de304
	// Params: [ Num(0) Size(0x0) ]
	void ServerStartDebugging();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78de21c
	// Params: [ Num(2) Size(0xC) ]
	void ServerSetPeriodFrameForClass(struct UObject* Class, int32_t PeriodFrame);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78de134
	// Params: [ Num(2) Size(0xC) ]
	void ServerSetCullDistanceForClass(struct UObject* Class, float CullDistance);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78de088
	// Params: [ Num(1) Size(0x8) ]
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78de06c
	// Params: [ Num(0) Size(0x0) ]
	void ServerPrintCullDistances();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78ddfb8
	// Params: [ Num(1) Size(0x10) ]
	void ServerPrintAllActorInfo(struct FString str);

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x78ddf9c
	// Params: [ Num(0) Size(0x0) ]
	void ServerCellInfo();

	// Object: Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x78dde70
	// Params: [ Num(3) Size(0x28) ]
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors);
};

} // namespace SDK
