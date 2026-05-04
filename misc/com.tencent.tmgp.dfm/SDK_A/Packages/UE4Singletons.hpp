#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: UE4Singletons
// Enums: 2
// Structs: 1
// Classes: 4

struct AActor;
struct UActorComponent;
struct FObjectRegistryType;
struct UComponentBookKeeper;
struct UComponentRegistryLib;
struct UObjectRegistrys;
struct UE4Singletons;

// Object: Enum UE4Singletons.ECompAttachedType
enum class ECompAttachedType : uint8_t
{
	Default = 0,
	ServerSide = 1,
	ClientSide = 2,
	Replicated = 3,
	NameStable = 4,
	BothSide = 5,
	ECompAttachedType_MAX = 6
};

// Object: Enum UE4Singletons.ESystemAttachedType
enum class ESystemAttachedType : uint8_t
{
	Default = 0,
	ServerSide = 1,
	ClientSide = 2,
	Replicated = 3,
	Instanced = 4,
	BothSide = 5,
	ESystemAttachedType_MAX = 6
};

// Object: ScriptStruct UE4Singletons.ObjectRegistryType
// Size: 0x10 (Inherited: 0x0)
struct FObjectRegistryType
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: Class UE4Singletons.ComponentBookKeeper
// Size: 0x28 (Inherited: 0x28)
struct UComponentBookKeeper : UBlueprintFunctionLibrary
{

	// Object: Function UE4Singletons.ComponentBookKeeper.RegisterAutoSpawnComponents
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x752540c
	// Params: [ Num(4) Size(0x5A) ]
	static void RegisterAutoSpawnComponents(struct AActor* Class, const struct TSet<struct UActorComponent*>& RegDatas, uint8_t bPersistent, uint8_t Flags);

	// Object: Function UE4Singletons.ComponentBookKeeper.RegisterAutoSpawnComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75252b8
	// Params: [ Num(4) Size(0x12) ]
	static void RegisterAutoSpawnComponent(struct AActor* Class, struct UActorComponent* RegClass, uint8_t bPersistent, uint8_t Flags);

	// Object: Function UE4Singletons.ComponentBookKeeper.EnableAdd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x752521c
	// Params: [ Num(1) Size(0x1) ]
	static void EnableAdd(uint8_t bNewEnabled);
	DEFINE_UE_CLASS_HELPERS(UComponentBookKeeper, "ComponentBookKeeper")

};

// Object: Class UE4Singletons.ComponentRegistryLib
// Size: 0x28 (Inherited: 0x28)
struct UComponentRegistryLib : UBlueprintFunctionLibrary
{

	// Object: Function UE4Singletons.ComponentRegistryLib.AllComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75255d8
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct UActorComponent*> AllComponent(struct UObject* WorldContextObj, struct UActorComponent* Class);
	DEFINE_UE_CLASS_HELPERS(UComponentRegistryLib, "ComponentRegistryLib")

};

// Object: Class UE4Singletons.ObjectRegistrys
// Size: 0xC8 (Inherited: 0x28)
struct UObjectRegistrys : UObject
{
	struct TMap<struct UObject*, struct FObjectRegistryType> Binddings; // 0x28(0x50)
	uint8_t Pad_0x78[0x50]; // 0x78(0x50)


	// Object: Function UE4Singletons.ObjectRegistrys.SetObject
	// Flags: [Final|Native|Static|Protected|BlueprintCallable]
	// Offset: 0x75258e4
	// Params: [ Num(2) Size(0x10) ]
	static void SetObject(struct UObject* Object, struct UObject* StopClass);

	// Object: Function UE4Singletons.ObjectRegistrys.GetObject
	// Flags: [Final|Native|Static|Protected|BlueprintCallable]
	// Offset: 0x7525808
	// Params: [ Num(3) Size(0x18) ]
	static struct UObject* GetObject(struct UObject* WorldContextObj, struct UObject* Class);

	// Object: Function UE4Singletons.ObjectRegistrys.AllObject
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75256f4
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct UObject*> AllObject(struct UObject* WorldContextObj, struct UObject* Class);
	DEFINE_UE_CLASS_HELPERS(UObjectRegistrys, "ObjectRegistrys")

};

// Object: Class UE4Singletons.E4Singletons
// Size: 0x78 (Inherited: 0x28)
struct UE4Singletons : UBlueprintFunctionLibrary
{
	struct TMap<struct UObject*, struct UObject*> Singletons; // 0x28(0x50)


	// Object: Function UE4Singletons.E4Singletons.RegisterAsSingletonImpl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7525b18
	// Params: [ Num(5) Size(0x28) ]
	static struct UObject* RegisterAsSingletonImpl(struct UObject* Object, struct UObject* WorldContextObject, uint8_t bReplaceExist, struct UObject* InNativeClass);

	// Object: Function UE4Singletons.E4Singletons.GetSingletonImpl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75259b8
	// Params: [ Num(5) Size(0x28) ]
	static struct UObject* GetSingletonImpl(struct UObject* Class, struct UObject* WorldContextObject, uint8_t bCreate, struct UObject* RegClass);
	DEFINE_UE_CLASS_HELPERS(UE4Singletons, "E4Singletons")

};

} // namespace SDK
