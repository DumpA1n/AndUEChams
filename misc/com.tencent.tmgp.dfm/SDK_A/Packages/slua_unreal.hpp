#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: slua_unreal
// Enums: 2
// Structs: 1
// Classes: 16

struct FLuaBPVar;
struct ULatentDelegate;
struct ALuaActor;
struct ALuaPawn;
struct ALuaCharacter;
struct ALuaController;
struct ALuaPlayerController;
struct ULuaActorComponent;
struct ALuaGameModeBase;
struct ALuaHUD;
struct ILuaTableObjectInterface;
struct ULuaBlueprintLibrary;
struct ULuaDelegateWrap;
struct ULuaDelegate;
struct ULuaDynamicGCProcessorConfig;
struct ULuaUserWidget;
struct USluaEnvBridge;

// Object: Enum slua_unreal.ELuaDelegateType
enum class ELuaDelegateType : uint8_t
{
	EDefault = 0,
	ELuaDelegate = 1,
	ELuaMultiDelegate = 2,
	ELuaDelegateType_MAX = 3
};

// Object: Enum slua_unreal.EPropertyClass
enum class EPropertyClass : uint8_t
{
	Byte = 0,
	Int8 = 1,
	Int16 = 2,
	Int = 3,
	Int64 = 4,
	UInt16 = 5,
	UInt32 = 6,
	UInt64 = 7,
	UnsizedInt = 8,
	UnsizedUInt = 9,
	Float = 10,
	Double = 11,
	Bool = 12,
	SoftClass = 13,
	WeakObject = 14,
	LazyObject = 15,
	SoftObject = 16,
	Class = 17,
	Object = 18,
	Interface = 19,
	Name = 20,
	Str = 21,
	Array = 22,
	Map = 23,
	Set = 24,
	Struct = 25,
	Delegate = 26,
	MulticastDelegate = 27,
	Text = 28,
	Enum = 29,
	EPropertyClass_MAX = 30
};

// Object: ScriptStruct slua_unreal.LuaBPVar
// Size: 0x20 (Inherited: 0x0)
struct FLuaBPVar
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: Class slua_unreal.LatentDelegate
// Size: 0x30 (Inherited: 0x28)
struct ULatentDelegate : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)


	// Object: Function slua_unreal.LatentDelegate.OnLatentCallback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x774a240
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentCallback(int32_t threadRef);
	DEFINE_UE_CLASS_HELPERS(ULatentDelegate, "LatentDelegate")

};

// Object: Class slua_unreal.LuaActor
// Size: 0x420 (Inherited: 0x370)
struct ALuaActor : AActor
{
	uint8_t Pad_0x370[0x90]; // 0x370(0x90)
	struct FString LuaFilePath; // 0x400(0x10)
	struct FString LuaStateName; // 0x410(0x10)


	// Object: Function slua_unreal.LuaActor.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774a2ec
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ALuaActor, "LuaActor")

};

// Object: Class slua_unreal.LuaPawn
// Size: 0x480 (Inherited: 0x3D0)
struct ALuaPawn : APawn
{
	uint8_t Pad_0x3D0[0x90]; // 0x3D0(0x90)
	struct FString LuaFilePath; // 0x460(0x10)
	struct FString LuaStateName; // 0x470(0x10)


	// Object: Function slua_unreal.LuaPawn.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774a548
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ALuaPawn, "LuaPawn")

};

// Object: Class slua_unreal.LuaCharacter
// Size: 0x840 (Inherited: 0x790)
struct ALuaCharacter : ACHARACTER
{
	uint8_t Pad_0x790[0x88]; // 0x790(0x88)
	struct FString LuaFilePath; // 0x818(0x10)
	struct FString LuaStateName; // 0x828(0x10)
	uint8_t Pad_0x838[0x8]; // 0x838(0x8)


	// Object: Function slua_unreal.LuaCharacter.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774a7a4
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ALuaCharacter, "LuaCharacter")

};

// Object: Class slua_unreal.LuaController
// Size: 0x498 (Inherited: 0x3E8)
struct ALuaController : AController
{
	uint8_t Pad_0x3E8[0x90]; // 0x3E8(0x90)
	struct FString LuaFilePath; // 0x478(0x10)
	struct FString LuaStateName; // 0x488(0x10)


	// Object: Function slua_unreal.LuaController.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774aa8c
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ALuaController, "LuaController")

};

// Object: Class slua_unreal.LuaPlayerController
// Size: 0x770 (Inherited: 0x6C0)
struct ALuaPlayerController : APlayerController
{
	uint8_t Pad_0x6C0[0x90]; // 0x6C0(0x90)
	struct FString LuaFilePath; // 0x750(0x10)
	struct FString LuaStateName; // 0x760(0x10)


	// Object: Function slua_unreal.LuaPlayerController.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774ace8
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ALuaPlayerController, "LuaPlayerController")

};

// Object: Class slua_unreal.LuaActorComponent
// Size: 0x1B8 (Inherited: 0xF8)
struct ULuaActorComponent : UActorComponent
{
	uint8_t Pad_0xF8[0xA0]; // 0xF8(0xA0)
	struct FString LuaFilePath; // 0x198(0x10)
	struct FString LuaStateName; // 0x1A8(0x10)


	// Object: Function slua_unreal.LuaActorComponent.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774af44
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ULuaActorComponent, "LuaActorComponent")

};

// Object: Class slua_unreal.LuaGameModeBase
// Size: 0x4C0 (Inherited: 0x410)
struct ALuaGameModeBase : AGameModeBase
{
	uint8_t Pad_0x410[0x90]; // 0x410(0x90)
	struct FString LuaFilePath; // 0x4A0(0x10)
	struct FString LuaStateName; // 0x4B0(0x10)


	// Object: Function slua_unreal.LuaGameModeBase.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774b0ec
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ALuaGameModeBase, "LuaGameModeBase")

};

// Object: Class slua_unreal.LuaHUD
// Size: 0x510 (Inherited: 0x460)
struct ALuaHUD : AHUD
{
	uint8_t Pad_0x460[0x90]; // 0x460(0x90)
	struct FString LuaFilePath; // 0x4F0(0x10)
	struct FString LuaStateName; // 0x500(0x10)


	// Object: Function slua_unreal.LuaHUD.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774b348
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ALuaHUD, "LuaHUD")

};

// Object: Class slua_unreal.LuaTableObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct ILuaTableObjectInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(ILuaTableObjectInterface, "LuaTableObjectInterface")

};

// Object: Class slua_unreal.LuaBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuaBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function slua_unreal.LuaBlueprintLibrary.GetStringFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774c514
	// Params: [ Num(3) Size(0x38) ]
	static struct FString GetStringFromVar(struct FLuaBPVar Value, int32_t Index);

	// Object: Function slua_unreal.LuaBlueprintLibrary.GetObjectFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774c3cc
	// Params: [ Num(3) Size(0x30) ]
	static struct UObject* GetObjectFromVar(struct FLuaBPVar Value, int32_t Index);

	// Object: Function slua_unreal.LuaBlueprintLibrary.GetNumberFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774c284
	// Params: [ Num(3) Size(0x28) ]
	static float GetNumberFromVar(struct FLuaBPVar Value, int32_t Index);

	// Object: Function slua_unreal.LuaBlueprintLibrary.GetIntFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774c13c
	// Params: [ Num(3) Size(0x28) ]
	static int32_t GetIntFromVar(struct FLuaBPVar Value, int32_t Index);

	// Object: Function slua_unreal.LuaBlueprintLibrary.GetBoolFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774bff0
	// Params: [ Num(3) Size(0x25) ]
	static uint8_t GetBoolFromVar(struct FLuaBPVar Value, int32_t Index);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CreateVarFromString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774bec4
	// Params: [ Num(2) Size(0x30) ]
	static struct FLuaBPVar CreateVarFromString(struct FString Value);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CreateVarFromObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774bda0
	// Params: [ Num(3) Size(0x30) ]
	static struct FLuaBPVar CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* Value);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CreateVarFromNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774bcb4
	// Params: [ Num(2) Size(0x28) ]
	static struct FLuaBPVar CreateVarFromNumber(float Value);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CreateVarFromInt64
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774bbc8
	// Params: [ Num(2) Size(0x28) ]
	static struct FLuaBPVar CreateVarFromInt64(int64_t Value);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CreateVarFromInt
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774badc
	// Params: [ Num(2) Size(0x28) ]
	static struct FLuaBPVar CreateVarFromInt(int32_t Value);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CreateVarFromBool
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x774b9e8
	// Params: [ Num(2) Size(0x28) ]
	static struct FLuaBPVar CreateVarFromBool(uint8_t Value);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CallToLuaWithArgs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774b794
	// Params: [ Num(5) Size(0x58) ]
	static struct FLuaBPVar CallToLuaWithArgs(struct UObject* WorldContextObject, struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName);

	// Object: Function slua_unreal.LuaBlueprintLibrary.CallToLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x774b5b0
	// Params: [ Num(4) Size(0x48) ]
	static struct FLuaBPVar CallToLua(struct UObject* WorldContextObject, struct FString FunctionName, struct FString StateName);
	DEFINE_UE_CLASS_HELPERS(ULuaBlueprintLibrary, "LuaBlueprintLibrary")

};

// Object: Class slua_unreal.LuaDelegateWrap
// Size: 0x40 (Inherited: 0x28)
struct ULuaDelegateWrap : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	DEFINE_UE_CLASS_HELPERS(ULuaDelegateWrap, "LuaDelegateWrap")

};

// Object: Class slua_unreal.LuaDelegate
// Size: 0x88 (Inherited: 0x40)
struct ULuaDelegate : ULuaDelegateWrap
{
	uint8_t Pad_0x40[0x48]; // 0x40(0x48)


	// Object: Function slua_unreal.LuaDelegate.EventTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x774c6b4
	// Params: [ Num(0) Size(0x0) ]
	void EventTrigger();
	DEFINE_UE_CLASS_HELPERS(ULuaDelegate, "LuaDelegate")

};

// Object: Class slua_unreal.LuaDynamicGCProcessorConfig
// Size: 0x28 (Inherited: 0x28)
struct ULuaDynamicGCProcessorConfig : UObject
{

	// Object: Function slua_unreal.LuaDynamicGCProcessorConfig.SetUseDynamicGC
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x101ae030
	// Params: [ Num(1) Size(0x4) ]
	static void SetUseDynamicGC(int32_t InUseDynamicGC);

	// Object: Function slua_unreal.LuaDynamicGCProcessorConfig.SetStepTickTimeLimit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x774c868
	// Params: [ Num(1) Size(0x4) ]
	static void SetStepTickTimeLimit(float InStepTickTimeLimit);

	// Object: Function slua_unreal.LuaDynamicGCProcessorConfig.SetStepGCTimeLimit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x774c7d4
	// Params: [ Num(1) Size(0x4) ]
	static void SetStepGCTimeLimit(float InStepGCTimeLimit);

	// Object: Function slua_unreal.LuaDynamicGCProcessorConfig.SetStepGCCountLimit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x106c3f54
	// Params: [ Num(1) Size(0x4) ]
	static void SetStepGCCountLimit(int32_t InStepGCCountLimit);

	// Object: Function slua_unreal.LuaDynamicGCProcessorConfig.SetSpeedupGCSpropagateRatio
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x774c740
	// Params: [ Num(1) Size(0x4) ]
	static void SetSpeedupGCSpropagateRatio(int32_t InSpeedupGCSpropagateRatio);

	// Object: Function slua_unreal.LuaDynamicGCProcessorConfig.SetIsWorkOnPauseState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x106e531c
	// Params: [ Num(1) Size(0x1) ]
	static void SetIsWorkOnPauseState(uint8_t InIsWorkOnPauseState);
	DEFINE_UE_CLASS_HELPERS(ULuaDynamicGCProcessorConfig, "LuaDynamicGCProcessorConfig")

};

// Object: Class slua_unreal.LuaUserWidget
// Size: 0x3F0 (Inherited: 0x2F8)
struct ULuaUserWidget : UUserWidget
{
	uint8_t Pad_0x2F8[0x90]; // 0x2F8(0x90)
	struct FString LuaFilePath; // 0x388(0x10)
	struct FString LuaStateName; // 0x398(0x10)
	uint8_t Pad_0x3A8[0x48]; // 0x3A8(0x48)


	// Object: Function slua_unreal.LuaUserWidget.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x774c910
	// Params: [ Num(3) Size(0x40) ]
	struct FLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args);
	DEFINE_UE_CLASS_HELPERS(ULuaUserWidget, "LuaUserWidget")

};

// Object: Class slua_unreal.SluaEnvBridge
// Size: 0x28 (Inherited: 0x28)
struct USluaEnvBridge : UObject
{

	// Object: Function slua_unreal.SluaEnvBridge.SnapshotLuaV2
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x774cb74
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t SnapshotLuaV2();

	// Object: Function slua_unreal.SluaEnvBridge.GetIsLuaSnapshotOnEnterGame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x774cb54
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIsLuaSnapshotOnEnterGame();

	// Object: Function slua_unreal.SluaEnvBridge.GetIsIsEnableLuaDynamicUD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfb6f1cc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIsIsEnableLuaDynamicUD();

	// Object: Function slua_unreal.SluaEnvBridge.GetIsEnableLuaProtoPageOut
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x774cb1c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIsEnableLuaProtoPageOut();
	DEFINE_UE_CLASS_HELPERS(USluaEnvBridge, "SluaEnvBridge")

};

} // namespace SDK
