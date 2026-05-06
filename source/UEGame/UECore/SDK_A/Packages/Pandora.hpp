#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: Pandora
// Enums: 2
// Structs: 1
// Classes: 17

enum class EConsumeMouseWheel : uint8_t;
struct USlateWidgetStyleAsset;
struct UUserWidget;
struct FPLuaBPVar;
struct UBulletScreen;
struct UBulletScreenItem;
struct UPLatentDelegate;
struct APLuaActor;
struct APLuaPawn;
struct APLuaCharacter;
struct APLuaController;
struct APLuaPlayerController;
struct UPLuaActorComponent;
struct APLuaGameModeBase;
struct APLuaHUD;
struct IPLuaTableObjectInterface;
struct UPLuaBlueprintLibrary;
struct UPLuaDelegate;
struct UPLuaUserWidget;
struct UScale9Grid;
struct UWaterfallScrollView;

// Object: Enum Pandora.EPropertyClass
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

// Object: Enum Pandora.EPandoraEnv
enum class EPandoraEnv : uint8_t
{
	Test = 0,
	Product = 1,
	Alpha = 2,
	EPandoraEnv_MAX = 3
};

// Object: ScriptStruct Pandora.PLuaBPVar
// Size: 0x20 (Inherited: 0x0)
struct FPLuaBPVar
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: Class Pandora.BulletScreen
// Size: 0x240 (Inherited: 0x158)
struct UBulletScreen : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(UBulletScreen, "BulletScreen")

	struct UBulletScreenItem* TemplateWidget; // 0x158(0x8)
	int32_t MaxBulletLines; // 0x160(0x4)
	float BulletSpeed; // 0x164(0x4)
	float LineHeight; // 0x168(0x4)
	float HorizontalInterval; // 0x16C(0x4)
	int32_t MaxCachedBulletCount; // 0x170(0x4)
	uint8_t Pad_0x174[0xCC]; // 0x174(0xCC)

	// Object: Function Pandora.BulletScreen.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5141c38
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function Pandora.BulletScreen.Start
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5141c74
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function Pandora.BulletScreen.Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5141c4c
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function Pandora.BulletScreen.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5141c60
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function Pandora.BulletScreen.AddBullets
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5141a90
	// Params: [ Num(1) Size(0x10) ]
	void AddBullets(const struct TArray<struct FString>& Content);

	// Object: Function Pandora.BulletScreen.AddBullet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5141b60
	// Params: [ Num(1) Size(0x10) ]
	void AddBullet(struct FString Content);
};

// Object: Class Pandora.BulletScreenItem
// Size: 0x298 (Inherited: 0x290)
struct UBulletScreenItem : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UBulletScreenItem, "BulletScreenItem")

	uint8_t Pad_0x290[0x8]; // 0x290(0x8)
};

// Object: Class Pandora.PLatentDelegate
// Size: 0x30 (Inherited: 0x28)
struct UPLatentDelegate : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPLatentDelegate, "PLatentDelegate")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)

	// Object: Function Pandora.PLatentDelegate.OnLatentCallback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5141ce0
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentCallback(int32_t threadRef);
};

// Object: Class Pandora.PLuaActor
// Size: 0x3B0 (Inherited: 0x300)
struct APLuaActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APLuaActor, "PLuaActor")

	uint8_t Pad_0x300[0x90]; // 0x300(0x90)
	struct FString LuaFilePath; // 0x390(0x10)
	struct FString LuaStateName; // 0x3A0(0x10)

	// Object: Function Pandora.PLuaActor.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5141d90
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaPawn
// Size: 0x420 (Inherited: 0x370)
struct APLuaPawn : APawn
{
	DEFINE_UE_CLASS_HELPERS(APLuaPawn, "PLuaPawn")

	uint8_t Pad_0x370[0x90]; // 0x370(0x90)
	struct FString LuaFilePath; // 0x400(0x10)
	struct FString LuaStateName; // 0x410(0x10)

	// Object: Function Pandora.PLuaPawn.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x514205c
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaCharacter
// Size: 0x670 (Inherited: 0x5C0)
struct APLuaCharacter : ACharacter
{
	DEFINE_UE_CLASS_HELPERS(APLuaCharacter, "PLuaCharacter")

	uint8_t Pad_0x5C0[0x88]; // 0x5C0(0x88)
	struct FString LuaFilePath; // 0x648(0x10)
	struct FString LuaStateName; // 0x658(0x10)
	uint8_t Pad_0x668[0x8]; // 0x668(0x8)

	// Object: Function Pandora.PLuaCharacter.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x51422d0
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaController
// Size: 0x428 (Inherited: 0x378)
struct APLuaController : AController
{
	DEFINE_UE_CLASS_HELPERS(APLuaController, "PLuaController")

	uint8_t Pad_0x378[0x90]; // 0x378(0x90)
	struct FString LuaFilePath; // 0x408(0x10)
	struct FString LuaStateName; // 0x418(0x10)

	// Object: Function Pandora.PLuaController.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5142544
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaPlayerController
// Size: 0x720 (Inherited: 0x670)
struct APLuaPlayerController : APlayerController
{
	DEFINE_UE_CLASS_HELPERS(APLuaPlayerController, "PLuaPlayerController")

	uint8_t Pad_0x670[0x90]; // 0x670(0x90)
	struct FString LuaFilePath; // 0x700(0x10)
	struct FString LuaStateName; // 0x710(0x10)

	// Object: Function Pandora.PLuaPlayerController.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x51427b8
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaActorComponent
// Size: 0x1A0 (Inherited: 0xE0)
struct UPLuaActorComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPLuaActorComponent, "PLuaActorComponent")

	uint8_t Pad_0xE0[0xA0]; // 0xE0(0xA0)
	struct FString LuaFilePath; // 0x180(0x10)
	struct FString LuaStateName; // 0x190(0x10)

	// Object: Function Pandora.PLuaActorComponent.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5142a2c
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaGameModeBase
// Size: 0x450 (Inherited: 0x3A0)
struct APLuaGameModeBase : AGameModeBase
{
	DEFINE_UE_CLASS_HELPERS(APLuaGameModeBase, "PLuaGameModeBase")

	uint8_t Pad_0x3A0[0x90]; // 0x3A0(0x90)
	struct FString LuaFilePath; // 0x430(0x10)
	struct FString LuaStateName; // 0x440(0x10)

	// Object: Function Pandora.PLuaGameModeBase.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5142ca0
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaHUD
// Size: 0x4A0 (Inherited: 0x3F0)
struct APLuaHUD : AHUD
{
	DEFINE_UE_CLASS_HELPERS(APLuaHUD, "PLuaHUD")

	uint8_t Pad_0x3F0[0x90]; // 0x3F0(0x90)
	struct FString LuaFilePath; // 0x480(0x10)
	struct FString LuaStateName; // 0x490(0x10)

	// Object: Function Pandora.PLuaHUD.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5142f14
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.PLuaTableObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct IPLuaTableObjectInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IPLuaTableObjectInterface, "PLuaTableObjectInterface")
};

// Object: Class Pandora.PLuaBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPLuaBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPLuaBlueprintLibrary, "PLuaBlueprintLibrary")

	// Object: Function Pandora.PLuaBlueprintLibrary.GetStringFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x51433f8
	// Params: [ Num(3) Size(0x38) ]
	static struct FString GetStringFromVar(struct FPLuaBPVar Value, int32_t Index);

	// Object: Function Pandora.PLuaBlueprintLibrary.GetObjectFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5143194
	// Params: [ Num(3) Size(0x30) ]
	static struct UObject* GetObjectFromVar(struct FPLuaBPVar Value, int32_t Index);

	// Object: Function Pandora.PLuaBlueprintLibrary.GetNumberFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5143588
	// Params: [ Num(3) Size(0x28) ]
	static float GetNumberFromVar(struct FPLuaBPVar Value, int32_t Index);

	// Object: Function Pandora.PLuaBlueprintLibrary.GetIntFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x51436b8
	// Params: [ Num(3) Size(0x28) ]
	static int32_t GetIntFromVar(struct FPLuaBPVar Value, int32_t Index);

	// Object: Function Pandora.PLuaBlueprintLibrary.GetBoolFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x51432c4
	// Params: [ Num(3) Size(0x25) ]
	static bool GetBoolFromVar(struct FPLuaBPVar Value, int32_t Index);

	// Object: Function Pandora.PLuaBlueprintLibrary.CreateVarFromString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5143ab4
	// Params: [ Num(2) Size(0x30) ]
	static struct FPLuaBPVar CreateVarFromString(struct FString Value);

	// Object: Function Pandora.PLuaBlueprintLibrary.CreateVarFromObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x51437e8
	// Params: [ Num(3) Size(0x30) ]
	static struct FPLuaBPVar CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* Value);

	// Object: Function Pandora.PLuaBlueprintLibrary.CreateVarFromNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x51439dc
	// Params: [ Num(2) Size(0x28) ]
	static struct FPLuaBPVar CreateVarFromNumber(float Value);

	// Object: Function Pandora.PLuaBlueprintLibrary.CreateVarFromInt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5143bec
	// Params: [ Num(2) Size(0x28) ]
	static struct FPLuaBPVar CreateVarFromInt(int32_t Value);

	// Object: Function Pandora.PLuaBlueprintLibrary.CreateVarFromBool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x51438fc
	// Params: [ Num(2) Size(0x28) ]
	static struct FPLuaBPVar CreateVarFromBool(bool Value);

	// Object: Function Pandora.PLuaBlueprintLibrary.CallToLuaWithArgs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5143edc
	// Params: [ Num(5) Size(0x58) ]
	static struct FPLuaBPVar CallToLuaWithArgs(struct UObject* WorldContextObject, struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args, struct FString StateName);

	// Object: Function Pandora.PLuaBlueprintLibrary.CallToLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5143cc4
	// Params: [ Num(4) Size(0x48) ]
	static struct FPLuaBPVar CallToLua(struct UObject* WorldContextObject, struct FString FunctionName, struct FString StateName);
};

// Object: Class Pandora.PLuaDelegate
// Size: 0x38 (Inherited: 0x28)
struct UPLuaDelegate : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPLuaDelegate, "PLuaDelegate")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)

	// Object: Function Pandora.PLuaDelegate.EventTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5144184
	// Params: [ Num(0) Size(0x0) ]
	void EventTrigger();
};

// Object: Class Pandora.PLuaUserWidget
// Size: 0x378 (Inherited: 0x290)
struct UPLuaUserWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UPLuaUserWidget, "PLuaUserWidget")

	uint8_t Pad_0x290[0x90]; // 0x290(0x90)
	struct FString LuaFilePath; // 0x320(0x10)
	struct FString LuaStateName; // 0x330(0x10)
	uint8_t Pad_0x340[0x38]; // 0x340(0x38)

	// Object: Function Pandora.PLuaUserWidget.CallLuaMember
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x51441a0
	// Params: [ Num(3) Size(0x40) ]
	struct FPLuaBPVar CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args);
};

// Object: Class Pandora.Scale9Grid
// Size: 0x2F0 (Inherited: 0x270)
struct UScale9Grid : UImage
{
	DEFINE_UE_CLASS_HELPERS(UScale9Grid, "Scale9Grid")

	uint8_t Pad_0x270[0x80]; // 0x270(0x80)
};

// Object: Class Pandora.WaterfallScrollView
// Size: 0x510 (Inherited: 0x148)
struct UWaterfallScrollView : UPanelWidget
{
	DEFINE_UE_CLASS_HELPERS(UWaterfallScrollView, "WaterfallScrollView")

	struct FScrollBoxStyle WidgetStyle; // 0x148(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x390(0x8)
	struct UUserWidget* TemplateWidget; // 0x398(0x8)
	int32_t ItemCount; // 0x3A0(0x4)
	int32_t ColumnCount; // 0x3A4(0x4)
	struct FMulticastInlineDelegate onReachTop; // 0x3A8(0x10)
	struct FMulticastInlineDelegate onReachBottom; // 0x3B8(0x10)
	EConsumeMouseWheel ConsumeMouseWheel; // 0x3C8(0x1)
	bool AllowOverscroll; // 0x3C9(0x1)
	uint8_t Pad_0x3CA[0x146]; // 0x3CA(0x146)

	// Object: Function Pandora.WaterfallScrollView.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5144590
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToStart();

	// Object: Function Pandora.WaterfallScrollView.RefreshLayout
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x51444e8
	// Params: [ Num(1) Size(0x4) ]
	void RefreshLayout(int32_t Index);

	// Object: Function Pandora.WaterfallScrollView.Fill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x51445b8
	// Params: [ Num(0) Size(0x0) ]
	void Fill();

	// Object: Function Pandora.WaterfallScrollView.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x51445a4
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

} // namespace SDK
