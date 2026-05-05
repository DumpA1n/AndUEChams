#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GeometryCollectionCore.hpp"

namespace SDK
{

// Package: GeometryCollectionEngine
// Enums: 6
// Structs: 10
// Classes: 10

struct AChaosSolverActor;
struct AFieldSystemActor;
enum class EClusterConnectionTypeEnum : uint8_t;
enum class ECollisionTypeEnum : uint8_t;
enum class EGeometryCollectionCacheType : uint8_t;
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t;
enum class EImplicitTypeEnum : uint8_t;
enum class EInitialVelocityTypeEnum : uint8_t;
enum class EObjectStateTypeEnum : uint8_t;
struct FChaosPhysicsCollisionInfo;
struct FHitResult;
struct UBillboardComponent;
struct UBodySetup;
struct UChaosPhysicalMaterial;
struct UFieldNodeBase;
struct UFieldSystemMetaData;
struct UMaterial;
struct UMaterialInterface;
struct UPhysicsAsset;
struct UPrimitiveComponent;
struct UVolumeTexture;
struct FGeomComponentCacheParameters;
struct FChaosCollisionEventData;
struct FChaosBreakingEventData;
struct FChaosTrailingEventData;
struct FChaosBreakingEventRequestSettings;
struct FChaosCollisionEventRequestSettings;
struct FChaosTrailingEventRequestSettings;
struct FGeometryCollectionDebugDrawActorSelectedRigidBody;
struct FGeometryCollectionDebugDrawWarningMessage;
struct FGeometryCollectionSizeSpecificData;
struct UChaosDestructionListener;
struct AGeometryCollectionActor;
struct UGeometryCollectionCache;
struct UGeometryCollectionComponent;
struct AGeometryCollectionDebugDrawActor;
struct UGeometryCollectionDebugDrawComponent;
struct UGeometryCollection;
struct AGeometryCollectionRenderLevelSetActor;
struct USkeletalMeshSimulationComponent;
struct UStaticMeshSimulationComponent;

// Object: Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5
};

// Object: Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6
};

// Object: Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5
};

// Object: Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

// Object: Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
	Chaos_Traansform = 0,
	Chaos_Max = 1
};

// Object: Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3
};

// Object: ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// Size: 0x50 (Inherited: 0x0)
struct FGeomComponentCacheParameters
{
	EGeometryCollectionCacheType CacheMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGeometryCollectionCache* TargetCache; // 0x8(0x8)
	float ReverseCacheBeginTime; // 0x10(0x4)
	uint8_t SaveCollisionData : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t DoGenerateCollisionData : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	int32_t CollisionDataSizeMax; // 0x18(0x4)
	uint8_t DoCollisionDataSpatialHash : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float CollisionDataSpatialHashRadius; // 0x20(0x4)
	int32_t MaxCollisionPerCell; // 0x24(0x4)
	uint8_t SaveBreakingData : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t DoGenerateBreakingData : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t BreakingDataSizeMax; // 0x2C(0x4)
	uint8_t DoBreakingDataSpatialHash : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float BreakingDataSpatialHashRadius; // 0x34(0x4)
	int32_t MaxBreakingPerCell; // 0x38(0x4)
	uint8_t SaveTrailingData : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t DoGenerateTrailingData : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	int32_t TrailingDataSizeMax; // 0x40(0x4)
	float TrailingMinSpeedThreshold; // 0x44(0x4)
	float TrailingMinVolumeThreshold; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// Size: 0x58 (Inherited: 0x0)
struct FChaosCollisionEventData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	struct FVector Velocity1; // 0x18(0xC)
	struct FVector Velocity2; // 0x24(0xC)
	float Mass1; // 0x30(0x4)
	float Mass2; // 0x34(0x4)
	struct FVector Impulse; // 0x38(0xC)
	uint8_t Pad_0x44[0x14]; // 0x44(0x14)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// Size: 0x20 (Inherited: 0x0)
struct FChaosBreakingEventData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float Mass; // 0x18(0x4)
	int32_t ParticleIndex; // 0x1C(0x4)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// Size: 0x2C (Inherited: 0x0)
struct FChaosTrailingEventData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Size: 0x18 (Inherited: 0x0)
struct FChaosBreakingEventRequestSettings
{
	int32_t MaxNumberOfResults; // 0x0(0x4)
	float MinRadius; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinMass; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	EChaosBreakingSortMethod SortMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size: 0x18 (Inherited: 0x0)
struct FChaosCollisionEventRequestSettings
{
	int32_t MaxNumberResults; // 0x0(0x4)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	EChaosCollisionSortMethod SortMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size: 0x18 (Inherited: 0x0)
struct FChaosTrailingEventRequestSettings
{
	int32_t MaxNumberOfResults; // 0x0(0x4)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinAngularSpeed; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	EChaosTrailingSortMethod SortMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Size: 0x18 (Inherited: 0x0)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
	int32_t ID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct AChaosSolverActor* Solver; // 0x8(0x8)
	struct AGeometryCollectionActor* GeometryCollection; // 0x10(0x8)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Size: 0x1 (Inherited: 0x0)
struct FGeometryCollectionDebugDrawWarningMessage
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size: 0x24 (Inherited: 0x0)
struct FGeometryCollectionSizeSpecificData
{
	float MaxSize; // 0x0(0x4)
	ECollisionTypeEnum CollisionType; // 0x4(0x1)
	EImplicitTypeEnum ImplicitType; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	int32_t MinLevelSetResolution; // 0x8(0x4)
	int32_t MaxLevelSetResolution; // 0xC(0x4)
	int32_t MinClusterLevelSetResolution; // 0x10(0x4)
	int32_t MaxClusterLevelSetResolution; // 0x14(0x4)
	int32_t CollisionObjectReductionPercentage; // 0x18(0x4)
	float CollisionParticlesFraction; // 0x1C(0x4)
	int32_t MaximumCollisionParticles; // 0x20(0x4)
};

// Object: Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x470 (Inherited: 0x240)
struct UChaosDestructionListener : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UChaosDestructionListener, "ChaosDestructionListener")

	uint8_t bIsCollisionEventListeningEnabled : 1; // 0x240(0x1), Mask(0x1)
	uint8_t bIsBreakingEventListeningEnabled : 1; // 0x240(0x1), Mask(0x2)
	uint8_t bIsTrailingEventListeningEnabled : 1; // 0x240(0x1), Mask(0x4)
	uint8_t BitPad_0x240_3 : 5; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x244(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x25C(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x274(0x18)
	uint8_t Pad_0x28C[0x4]; // 0x28C(0x4)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x290(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x2E0(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x330(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x340(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x350(0x10)
	uint8_t Pad_0x360[0x110]; // 0x360(0x110)

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178f6fdc
	// Params: [ Num(2) Size(0x11) ]
	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178f6ee4
	// Params: [ Num(2) Size(0x11) ]
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178f6dec
	// Params: [ Num(2) Size(0x11) ]
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178f6d2c
	// Params: [ Num(1) Size(0x18) ]
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f6c80
	// Params: [ Num(1) Size(0x1) ]
	void SetTrailingEventEnabled(uint8_t bIsEnabled);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178f6bc0
	// Params: [ Num(1) Size(0x18) ]
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f6b14
	// Params: [ Num(1) Size(0x1) ]
	void SetCollisionEventEnabled(uint8_t bIsEnabled);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178f6a54
	// Params: [ Num(1) Size(0x18) ]
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f69a8
	// Params: [ Num(1) Size(0x1) ]
	void SetBreakingEventEnabled(uint8_t bIsEnabled);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f6904
	// Params: [ Num(1) Size(0x8) ]
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f6860
	// Params: [ Num(1) Size(0x8) ]
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x178f6828
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEventListening();

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f6784
	// Params: [ Num(1) Size(0x8) ]
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor);

	// Object: Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f66e0
	// Params: [ Num(1) Size(0x8) ]
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor);
};

// Object: Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x380 (Inherited: 0x370)
struct AGeometryCollectionActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGeometryCollectionActor, "GeometryCollectionActor")

	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x370(0x8)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x378(0x8)

	// Object: Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x178f7268
	// Params: [ Num(4) Size(0xA1) ]
	uint8_t RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit);
};

// Object: Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCollectionCache, "GeometryCollectionCache")

	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x8)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Object: Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xAE0 (Inherited: 0x6F0)
struct UGeometryCollectionComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCollectionComponent, "GeometryCollectionComponent")

	struct AChaosSolverActor* ChaosSolverActor; // 0x6F0(0x8)
	uint8_t Pad_0x6F8[0xE0]; // 0x6F8(0xE0)
	struct UGeometryCollection* RestCollection; // 0x7D8(0x8)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x7E0(0x10)
	uint8_t Simulating : 1; // 0x7F0(0x1), Mask(0x1)
	uint8_t BitPad_0x7F0_1 : 7; // 0x7F0(0x1)
	uint8_t Pad_0x7F1[0x7]; // 0x7F1(0x7)
	EObjectStateTypeEnum ObjectType; // 0x7F8(0x1)
	uint8_t EnableClustering : 1; // 0x7F9(0x1), Mask(0x1)
	uint8_t BitPad_0x7F9_1 : 7; // 0x7F9(0x1)
	uint8_t Pad_0x7FA[0x2]; // 0x7FA(0x2)
	int32_t ClusterGroupIndex; // 0x7FC(0x4)
	int32_t MaxClusterLevel; // 0x800(0x4)
	uint8_t Pad_0x804[0x4]; // 0x804(0x4)
	struct TArray<float> DamageThreshold; // 0x808(0x10)
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x818(0x1)
	uint8_t Pad_0x819[0x3]; // 0x819(0x3)
	int32_t CollisionGroup; // 0x81C(0x4)
	float CollisionSampleFraction; // 0x820(0x4)
	uint8_t Pad_0x824[0x4]; // 0x824(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x828(0x8)
	EInitialVelocityTypeEnum InitialVelocityType; // 0x830(0x1)
	uint8_t Pad_0x831[0x3]; // 0x831(0x3)
	struct FVector InitialLinearVelocity; // 0x834(0xC)
	struct FVector InitialAngularVelocity; // 0x840(0xC)
	uint8_t Pad_0x84C[0x4]; // 0x84C(0x4)
	struct FGeomComponentCacheParameters CacheParameters; // 0x850(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x8A0(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8B0(0x10)
	uint8_t Pad_0x8C0[0x18]; // 0x8C0(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x8D8(0x10)
	float DesiredCacheTime; // 0x8E8(0x4)
	uint8_t CachePlayback : 1; // 0x8EC(0x1), Mask(0x1)
	uint8_t BitPad_0x8EC_1 : 7; // 0x8EC(0x1)
	uint8_t Pad_0x8ED[0x3]; // 0x8ED(0x3)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x8F0(0x10)
	uint8_t bNotifyBreaks : 1; // 0x900(0x1), Mask(0x1)
	uint8_t BitPad_0x900_1 : 7; // 0x900(0x1)
	uint8_t bNotifyCollisions : 1; // 0x901(0x1), Mask(0x1)
	uint8_t BitPad_0x901_1 : 7; // 0x901(0x1)
	uint8_t Pad_0x902[0x1BE]; // 0x902(0x1BE)
	struct UBodySetup* DummyBodySetup; // 0xAC0(0x8)
	uint8_t Pad_0xAC8[0x18]; // 0xAC8(0x18)

	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f779c
	// Params: [ Num(1) Size(0x1) ]
	void SetNotifyBreaks(uint8_t bNewNotifyBreaks);

	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x70) ]
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);

	// Object: DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent);

	// Object: DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent);

	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f7640
	// Params: [ Num(4) Size(0x18) ]
	void ApplyPhysicsField(uint8_t Enabled, EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field);

	// Object: Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x178f7560
	// Params: [ Num(2) Size(0x10) ]
	void ApplyKinematicField(float radius, struct FVector Position);
};

// Object: Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x458 (Inherited: 0x370)
struct AGeometryCollectionDebugDrawActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGeometryCollectionDebugDrawActor, "GeometryCollectionDebugDrawActor")

	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x370(0x1)
	uint8_t Pad_0x371[0x7]; // 0x371(0x7)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x378(0x18)
	uint8_t bDebugDrawWholeCollection : 1; // 0x390(0x1), Mask(0x1)
	uint8_t BitPad_0x390_1 : 7; // 0x390(0x1)
	uint8_t bDebugDrawHierarchy : 1; // 0x391(0x1), Mask(0x1)
	uint8_t BitPad_0x391_1 : 7; // 0x391(0x1)
	uint8_t bDebugDrawClustering : 1; // 0x392(0x1), Mask(0x1)
	uint8_t BitPad_0x392_1 : 7; // 0x392(0x1)
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x393(0x1)
	uint8_t bShowRigidBodyId : 1; // 0x394(0x1), Mask(0x1)
	uint8_t BitPad_0x394_1 : 7; // 0x394(0x1)
	uint8_t bShowRigidBodyCollision : 1; // 0x395(0x1), Mask(0x1)
	uint8_t BitPad_0x395_1 : 7; // 0x395(0x1)
	uint8_t bCollisionAtOrigin : 1; // 0x396(0x1), Mask(0x1)
	uint8_t BitPad_0x396_1 : 7; // 0x396(0x1)
	uint8_t bShowRigidBodyTransform : 1; // 0x397(0x1), Mask(0x1)
	uint8_t BitPad_0x397_1 : 7; // 0x397(0x1)
	uint8_t bShowRigidBodyInertia : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t bShowRigidBodyVelocity : 1; // 0x399(0x1), Mask(0x1)
	uint8_t BitPad_0x399_1 : 7; // 0x399(0x1)
	uint8_t bShowRigidBodyForce : 1; // 0x39A(0x1), Mask(0x1)
	uint8_t BitPad_0x39A_1 : 7; // 0x39A(0x1)
	uint8_t bShowRigidBodyInfos : 1; // 0x39B(0x1), Mask(0x1)
	uint8_t BitPad_0x39B_1 : 7; // 0x39B(0x1)
	uint8_t bShowTransformIndex : 1; // 0x39C(0x1), Mask(0x1)
	uint8_t BitPad_0x39C_1 : 7; // 0x39C(0x1)
	uint8_t bShowTransform : 1; // 0x39D(0x1), Mask(0x1)
	uint8_t BitPad_0x39D_1 : 7; // 0x39D(0x1)
	uint8_t bShowParent : 1; // 0x39E(0x1), Mask(0x1)
	uint8_t BitPad_0x39E_1 : 7; // 0x39E(0x1)
	uint8_t bShowLevel : 1; // 0x39F(0x1), Mask(0x1)
	uint8_t BitPad_0x39F_1 : 7; // 0x39F(0x1)
	uint8_t bShowConnectivityEdges : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t bShowGeometryIndex : 1; // 0x3A1(0x1), Mask(0x1)
	uint8_t BitPad_0x3A1_1 : 7; // 0x3A1(0x1)
	uint8_t bShowGeometryTransform : 1; // 0x3A2(0x1), Mask(0x1)
	uint8_t BitPad_0x3A2_1 : 7; // 0x3A2(0x1)
	uint8_t bShowBoundingBox : 1; // 0x3A3(0x1), Mask(0x1)
	uint8_t BitPad_0x3A3_1 : 7; // 0x3A3(0x1)
	uint8_t bShowFaces : 1; // 0x3A4(0x1), Mask(0x1)
	uint8_t BitPad_0x3A4_1 : 7; // 0x3A4(0x1)
	uint8_t bShowFaceIndices : 1; // 0x3A5(0x1), Mask(0x1)
	uint8_t BitPad_0x3A5_1 : 7; // 0x3A5(0x1)
	uint8_t bShowFaceNormals : 1; // 0x3A6(0x1), Mask(0x1)
	uint8_t BitPad_0x3A6_1 : 7; // 0x3A6(0x1)
	uint8_t bShowSingleFace : 1; // 0x3A7(0x1), Mask(0x1)
	uint8_t BitPad_0x3A7_1 : 7; // 0x3A7(0x1)
	int32_t SingleFaceIndex; // 0x3A8(0x4)
	uint8_t bShowVertices : 1; // 0x3AC(0x1), Mask(0x1)
	uint8_t BitPad_0x3AC_1 : 7; // 0x3AC(0x1)
	uint8_t bShowVertexIndices : 1; // 0x3AD(0x1), Mask(0x1)
	uint8_t BitPad_0x3AD_1 : 7; // 0x3AD(0x1)
	uint8_t bShowVertexNormals : 1; // 0x3AE(0x1), Mask(0x1)
	uint8_t BitPad_0x3AE_1 : 7; // 0x3AE(0x1)
	uint8_t bUseActiveVisualization : 1; // 0x3AF(0x1), Mask(0x1)
	uint8_t BitPad_0x3AF_1 : 7; // 0x3AF(0x1)
	float PointThickness; // 0x3B0(0x4)
	float LineThickness; // 0x3B4(0x4)
	uint8_t bTextShadow : 1; // 0x3B8(0x1), Mask(0x1)
	uint8_t BitPad_0x3B8_1 : 7; // 0x3B8(0x1)
	uint8_t Pad_0x3B9[0x3]; // 0x3B9(0x3)
	float TextScale; // 0x3BC(0x4)
	float NormalScale; // 0x3C0(0x4)
	float AxisScale; // 0x3C4(0x4)
	float ArrowScale; // 0x3C8(0x4)
	struct FColor RigidBodyIdColor; // 0x3CC(0x4)
	float RigidBodyTransformScale; // 0x3D0(0x4)
	struct FColor RigidBodyCollisionColor; // 0x3D4(0x4)
	struct FColor RigidBodyInertiaColor; // 0x3D8(0x4)
	struct FColor RigidBodyVelocityColor; // 0x3DC(0x4)
	struct FColor RigidBodyForceColor; // 0x3E0(0x4)
	struct FColor RigidBodyInfoColor; // 0x3E4(0x4)
	struct FColor TransformIndexColor; // 0x3E8(0x4)
	float TransformScale; // 0x3EC(0x4)
	struct FColor LevelColor; // 0x3F0(0x4)
	struct FColor ParentColor; // 0x3F4(0x4)
	float ConnectivityEdgeThickness; // 0x3F8(0x4)
	struct FColor GeometryIndexColor; // 0x3FC(0x4)
	float GeometryTransformScale; // 0x400(0x4)
	struct FColor BoundingBoxColor; // 0x404(0x4)
	struct FColor FaceColor; // 0x408(0x4)
	struct FColor FaceIndexColor; // 0x40C(0x4)
	struct FColor FaceNormalColor; // 0x410(0x4)
	struct FColor SingleFaceColor; // 0x414(0x4)
	struct FColor VertexColor; // 0x418(0x4)
	struct FColor VertexIndexColor; // 0x41C(0x4)
	struct FColor VertexNormalColor; // 0x420(0x4)
	uint8_t Pad_0x424[0x4]; // 0x424(0x4)
	struct UBillboardComponent* SpriteComponent; // 0x428(0x8)
	uint8_t Pad_0x430[0x28]; // 0x430(0x28)
};

// Object: Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0x110 (Inherited: 0xF8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCollectionDebugDrawComponent, "GeometryCollectionDebugDrawComponent")

	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xF8(0x8)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0x100(0x8)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
};

// Object: Class GeometryCollectionEngine.GeometryCollection
// Size: 0xD0 (Inherited: 0x28)
struct UGeometryCollection : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCollection, "GeometryCollection")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	ECollisionTypeEnum CollisionType; // 0x40(0x1)
	EImplicitTypeEnum ImplicitType; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
	int32_t MinLevelSetResolution; // 0x44(0x4)
	int32_t MaxLevelSetResolution; // 0x48(0x4)
	int32_t MinClusterLevelSetResolution; // 0x4C(0x4)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x4)
	float CollisionObjectReductionPercentage; // 0x54(0x4)
	uint8_t bMassAsDensity : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float Mass; // 0x5C(0x4)
	float MinimumMassClamp; // 0x60(0x4)
	float CollisionParticlesFraction; // 0x64(0x4)
	int32_t MaximumCollisionParticles; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	uint8_t EnableRemovePiecesOnFracture : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xA8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x14]; // 0xBC(0x14)
};

// Object: Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x410 (Inherited: 0x370)
struct AGeometryCollectionRenderLevelSetActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGeometryCollectionRenderLevelSetActor, "GeometryCollectionRenderLevelSetActor")

	struct UVolumeTexture* TargetVolumeTexture; // 0x370(0x8)
	struct UMaterial* RayMarchMaterial; // 0x378(0x8)
	float SurfaceTolerance; // 0x380(0x4)
	float Isovalue; // 0x384(0x4)
	uint8_t Enabled : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t RenderVolumeBoundingBox : 1; // 0x389(0x1), Mask(0x1)
	uint8_t BitPad_0x389_1 : 7; // 0x389(0x1)
	uint8_t Pad_0x38A[0x86]; // 0x38A(0x86)
};

// Object: Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x180 (Inherited: 0xF8)
struct USkeletalMeshSimulationComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(USkeletalMeshSimulationComponent, "SkeletalMeshSimulationComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x100(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0x108(0x8)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x110(0x8)
	uint8_t bSimulating : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t bNotifyCollisions : 1; // 0x119(0x1), Mask(0x1)
	uint8_t BitPad_0x119_1 : 7; // 0x119(0x1)
	EObjectStateTypeEnum ObjectType; // 0x11A(0x1)
	uint8_t Pad_0x11B[0x1]; // 0x11B(0x1)
	float Density; // 0x11C(0x4)
	float MinMass; // 0x120(0x4)
	float MaxMass; // 0x124(0x4)
	ECollisionTypeEnum CollisionType; // 0x128(0x1)
	uint8_t Pad_0x129[0x3]; // 0x129(0x3)
	float ImplicitShapeParticlesPerUnitArea; // 0x12C(0x4)
	int32_t ImplicitShapeMinNumParticles; // 0x130(0x4)
	int32_t ImplicitShapeMaxNumParticles; // 0x134(0x4)
	int32_t MinLevelSetResolution; // 0x138(0x4)
	int32_t MaxLevelSetResolution; // 0x13C(0x4)
	int32_t CollisionGroup; // 0x140(0x4)
	EInitialVelocityTypeEnum InitialVelocityType; // 0x144(0x1)
	uint8_t Pad_0x145[0x3]; // 0x145(0x3)
	struct FVector InitialLinearVelocity; // 0x148(0xC)
	struct FVector InitialAngularVelocity; // 0x154(0xC)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x160(0x10)
	uint8_t Pad_0x170[0x10]; // 0x170(0x10)

	// Object: Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x70) ]
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
};

// Object: Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x180 (Inherited: 0xF8)
struct UStaticMeshSimulationComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UStaticMeshSimulationComponent, "StaticMeshSimulationComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	uint8_t Simulating : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t bNotifyCollisions : 1; // 0x101(0x1), Mask(0x1)
	uint8_t BitPad_0x101_1 : 7; // 0x101(0x1)
	EObjectStateTypeEnum ObjectType; // 0x102(0x1)
	uint8_t Pad_0x103[0x1]; // 0x103(0x1)
	float Mass; // 0x104(0x4)
	ECollisionTypeEnum CollisionType; // 0x108(0x1)
	EImplicitTypeEnum ImplicitType; // 0x109(0x1)
	uint8_t Pad_0x10A[0x2]; // 0x10A(0x2)
	int32_t MinLevelSetResolution; // 0x10C(0x4)
	int32_t MaxLevelSetResolution; // 0x110(0x4)
	EInitialVelocityTypeEnum InitialVelocityType; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct FVector InitialLinearVelocity; // 0x118(0xC)
	struct FVector InitialAngularVelocity; // 0x124(0xC)
	float DamageThreshold; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x138(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0x140(0x8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x148(0x10)
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x168(0x10)
	uint8_t Pad_0x178[0x8]; // 0x178(0x8)

	// Object: Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x70) ]
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);

	// Object: Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178f7ca0
	// Params: [ Num(0) Size(0x0) ]
	void ForceRecreatePhysicsState();
};

} // namespace SDK
