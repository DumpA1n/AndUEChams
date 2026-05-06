#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: UnLua
// Enums: 0
// Structs: 1
// Classes: 4

struct AActor;
struct FKey;
struct FLatentActionInfo;
struct FPropertyCollector;
struct IUnLuaInterface;
struct UUnLuaLatentAction;
struct UUnLuaManager;
struct AUnLuaPerformanceTestProxy;

// Object: ScriptStruct UnLua.PropertyCollector
// Size: 0x1 (Inherited: 0x0)
struct FPropertyCollector
{
	struct FString None; // 0x0(0x10)
};

// Object: Class UnLua.UnLuaInterface
// Size: 0x28 (Inherited: 0x28)
struct IUnLuaInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IUnLuaInterface, "UnLuaInterface")

	// Object: Function UnLua.UnLuaInterface.GetModuleName
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x3ab9a88
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();
};

// Object: Class UnLua.UnLuaLatentAction
// Size: 0x48 (Inherited: 0x28)
struct UUnLuaLatentAction : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUnLuaLatentAction, "UnLuaLatentAction")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FDelegate Callback; // 0x30(0x10)
	uint8_t bTickEvenWhenPaused : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)

	// Object: Function UnLua.UnLuaLatentAction.SetTickableWhenPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ab9c90
	// Params: [ Num(1) Size(0x1) ]
	void SetTickableWhenPaused(bool bTickableWhenPaused);

	// Object: Function UnLua.UnLuaLatentAction.OnLegacyCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x3ab9be8
	// Params: [ Num(1) Size(0x4) ]
	void OnLegacyCallback(int32_t InLinkage);

	// Object: Function UnLua.UnLuaLatentAction.OnCompleted
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3ab9ea4
	// Params: [ Num(1) Size(0x4) ]
	void OnCompleted(int32_t InLinkage);

	// Object: Function UnLua.UnLuaLatentAction.GetTickableWhenPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ab9d40
	// Params: [ Num(1) Size(0x1) ]
	bool GetTickableWhenPaused();

	// Object: Function UnLua.UnLuaLatentAction.CreateInfoForLegacy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ab9d78
	// Params: [ Num(1) Size(0x18) ]
	struct FLatentActionInfo CreateInfoForLegacy();

	// Object: Function UnLua.UnLuaLatentAction.CreateInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ab9de4
	// Params: [ Num(2) Size(0x20) ]
	struct FLatentActionInfo CreateInfo(int32_t Linkage);
};

// Object: Class UnLua.UnLuaManager
// Size: 0x480 (Inherited: 0x28)
struct UUnLuaManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUnLuaManager, "UnLuaManager")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TMap<struct UObject*, struct FString> ModuleNames; // 0x30(0x50)
	struct TMap<struct FString, struct UObject*> Classes; // 0x80(0x50)
	uint8_t Pad_0xD0[0x1E0]; // 0xD0(0x1E0)
	struct TMap<struct UObject*, struct UObject*> Derived2BaseClasses; // 0x2B0(0x50)
	uint8_t Pad_0x300[0x100]; // 0x300(0x100)
	struct TSet<struct AActor*> AttachedActors; // 0x400(0x50)
	struct UFunction* InputActionFunc; // 0x450(0x8)
	struct UFunction* InputAxisFunc; // 0x458(0x8)
	struct UFunction* InputTouchFunc; // 0x460(0x8)
	struct UFunction* InputVectorAxisFunc; // 0x468(0x8)
	struct UFunction* InputGestureFunc; // 0x470(0x8)
	struct UFunction* AnimNotifyFunc; // 0x478(0x8)

	// Object: Function UnLua.UnLuaManager.TriggerAnimNotify
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void TriggerAnimNotify();

	// Object: Function UnLua.UnLuaManager.OnLatentActionCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x3ab9f7c
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentActionCompleted(int32_t LinkId);

	// Object: Function UnLua.UnLuaManager.OnActorDestroyed
	// Flags: [Final|Native|Public]
	// Offset: 0x8453ea8
	// Params: [ Num(1) Size(0x8) ]
	void OnActorDestroyed(struct AActor* Actor);

	// Object: Function UnLua.UnLuaManager.InputVectorAxis
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0xC) ]
	void InputVectorAxis(const struct FVector& AxisValue);

	// Object: Function UnLua.UnLuaManager.InputTouch
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void InputTouch(uint8_t FingerIndex, const struct FVector& Location);

	// Object: Function UnLua.UnLuaManager.InputGesture
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void InputGesture(float Value);

	// Object: Function UnLua.UnLuaManager.InputAxis
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void InputAxis(float AxisValue);

	// Object: Function UnLua.UnLuaManager.InputAction
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x18) ]
	void InputAction(struct FKey Key);

	// Object: Function UnLua.UnLuaManager.HasPostEngineInited
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x905d4c8
	// Params: [ Num(1) Size(0x1) ]
	static bool HasPostEngineInited();
};

// Object: Class UnLua.UnLuaPerformanceTestProxy
// Size: 0x360 (Inherited: 0x300)
struct AUnLuaPerformanceTestProxy : AActor
{
	DEFINE_UE_CLASS_HELPERS(AUnLuaPerformanceTestProxy, "UnLuaPerformanceTestProxy")

	uint8_t Pad_0x300[0x8]; // 0x300(0x8)
	int32_t MeshID; // 0x308(0x4)
	uint8_t Pad_0x30C[0x4]; // 0x30C(0x4)
	struct FString MeshName; // 0x310(0x10)
	struct FVector COM; // 0x320(0xC)
	uint8_t Pad_0x32C[0x4]; // 0x32C(0x4)
	struct TArray<int32_t> Indices; // 0x330(0x10)
	struct TArray<struct FVector> Positions; // 0x340(0x10)
	struct TArray<struct FVector> PredictedPositions; // 0x350(0x10)

	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3aba358
	// Params: [ Num(1) Size(0x10) ]
	void UpdatePositions(const struct TArray<struct FVector>& NewPositions);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3aba764
	// Params: [ Num(2) Size(0x20) ]
	struct FString UpdateMeshName(struct FString NewName);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3aba858
	// Params: [ Num(2) Size(0x8) ]
	int32_t UpdateMeshID(int32_t NewID);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3aba4d8
	// Params: [ Num(1) Size(0x10) ]
	void UpdateIndices(const struct TArray<int32_t>& NewIndices);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.Simulate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3abaa00
	// Params: [ Num(1) Size(0x4) ]
	void Simulate(float DeltaTime);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.Raycast
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba658
	// Params: [ Num(3) Size(0x19) ]
	bool Raycast(const struct FVector& Origin, const struct FVector& Direction);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.NOP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3abaaa8
	// Params: [ Num(0) Size(0x0) ]
	void NOP();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba2d0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetPredictedPositions();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetPositions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba418
	// Params: [ Num(1) Size(0x10) ]
	void GetPositions(struct TArray<struct FVector>& OutPositions);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetMeshName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba948
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMeshName();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba038
	// Params: [ Num(7) Size(0x59) ]
	bool GetMeshInfo(int32_t& OutMeshID, struct FString& OutMeshName, struct FVector& OutCOM, struct TArray<int32_t>& OutIndices, struct TArray<struct FVector>& OutPositions, struct TArray<struct FVector>& OutPredictedPositions);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetMeshID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba9cc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMeshID();

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetIndices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba598
	// Params: [ Num(1) Size(0x10) ]
	void GetIndices(struct TArray<int32_t>& OutIndices);

	// Object: Function UnLua.UnLuaPerformanceTestProxy.GetCOM
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3aba908
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCOM();
};

} // namespace SDK
