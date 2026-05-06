#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: UnLuaFrameWork
// Enums: 0
// Structs: 0
// Classes: 2

struct AActor;
struct UWorld;
struct UUnLuaTest;
struct AUnLuaTestActor;

// Object: Class UnLuaFrameWork.UnLuaTest
// Size: 0x28 (Inherited: 0x28)
struct UUnLuaTest : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUnLuaTest, "UnLuaTest")

	// Object: Function UnLuaFrameWork.UnLuaTest.TestHotfix
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3acb3f0
	// Params: [ Num(1) Size(0x1) ]
	static bool TestHotfix();

	// Object: Function UnLuaFrameWork.UnLuaTest.TestFinishedDefferSpawnActor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3acb428
	// Params: [ Num(1) Size(0x1) ]
	static bool TestFinishedDefferSpawnActor();

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDynamicAddProperty2
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acb460
	// Params: [ Num(2) Size(0x14) ]
	static void TestDynamicAddProperty2(struct UWorld* World, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDynamicAddProperty1
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acb538
	// Params: [ Num(2) Size(0x14) ]
	static void TestDynamicAddProperty1(struct UWorld* World, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor9
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acb740
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor9(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor8
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acb998
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor8(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor7
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acbac4
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor7(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor6
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acbbf0
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor6(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor5
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acbd1c
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor5(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor4
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acbe48
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor4(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor3
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acbf74
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor3(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor2
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acc0a0
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor2(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestDefferSpawnActor
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acc1cc
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestDefferSpawnActor(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.TestAsyncGCForScriptStruct9
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x3acb86c
	// Params: [ Num(4) Size(0x1D) ]
	static bool TestAsyncGCForScriptStruct9(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform);

	// Object: Function UnLuaFrameWork.UnLuaTest.SetPackageGCMark
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3acb610
	// Params: [ Num(1) Size(0x8) ]
	static void SetPackageGCMark(struct UObject* Obj);

	// Object: Function UnLuaFrameWork.UnLuaTest.SetObjectGCMark
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3acb6a8
	// Params: [ Num(1) Size(0x8) ]
	static void SetObjectGCMark(struct UObject* Obj);
};

// Object: Class UnLuaFrameWork.UnLuaTestActor
// Size: 0x308 (Inherited: 0x300)
struct AUnLuaTestActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AUnLuaTestActor, "UnLuaTestActor")

	int32_t ItemID2; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)

	// Object: Function UnLuaFrameWork.UnLuaTestActor.TestOverrideFunction
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3acc390
	// Params: [ Num(1) Size(0x8) ]
	void TestOverrideFunction(struct AActor* InActor);
};

} // namespace SDK
