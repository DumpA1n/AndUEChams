#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: GameletJsEnv
// Enums: 0
// Structs: 3
// Classes: 11

struct FGameletPropertyMetaRoot;
struct FGameletArrayBuffer;
struct FGameletJsObject;
struct UGameletDynamicDelegateProxy;
struct UGameletExtensionMethods;
struct UGameletJSGeneratedClass;
struct UGameletJSGeneratedFunction;
struct UGameletJSWidgetGeneratedClass;
struct UGameletTypeScriptBlueprint;
struct UGameletTypeScriptGeneratedClass;
struct IGameletTypeScriptObject;
struct Default__GameletJSGeneratedClass;
struct Default__GameletJSWidgetGeneratedClass;
struct Default__GameletTypeScriptGeneratedClass;

// Object: ScriptStruct GameletJsEnv.GameletPropertyMetaRoot
// Size: 0x1 (Inherited: 0x0)
struct FGameletPropertyMetaRoot
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GameletJsEnv.GameletArrayBuffer
// Size: 0x18 (Inherited: 0x0)
struct FGameletArrayBuffer
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GameletJsEnv.GameletJsObject
// Size: 0x60 (Inherited: 0x0)
struct FGameletJsObject
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: Class GameletJsEnv.GameletDynamicDelegateProxy
// Size: 0x70 (Inherited: 0x28)
struct UGameletDynamicDelegateProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameletDynamicDelegateProxy, "GameletDynamicDelegateProxy")

	uint8_t Pad_0x28[0x48]; // 0x28(0x48)

	// Object: Function GameletJsEnv.GameletDynamicDelegateProxy.Fire
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89a5950
	// Params: [ Num(0) Size(0x0) ]
	void Fire();
};

// Object: Class GameletJsEnv.GameletExtensionMethods
// Size: 0x28 (Inherited: 0x28)
struct UGameletExtensionMethods : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGameletExtensionMethods, "GameletExtensionMethods")
};

// Object: Class GameletJsEnv.GameletJSGeneratedClass
// Size: 0x3E0 (Inherited: 0x380)
struct UGameletJSGeneratedClass : UBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(UGameletJSGeneratedClass, "GameletJSGeneratedClass")

	uint8_t Pad_0x380[0x60]; // 0x380(0x60)
};

// Object: Class GameletJsEnv.GameletJSGeneratedFunction
// Size: 0x140 (Inherited: 0xE0)
struct UGameletJSGeneratedFunction : UFunction
{
	DEFINE_UE_CLASS_HELPERS(UGameletJSGeneratedFunction, "GameletJSGeneratedFunction")

	uint8_t Pad_0xE0[0x48]; // 0xE0(0x48)
	struct UFunction* Original; // 0x128(0x8)
	uint8_t Pad_0x130[0x10]; // 0x130(0x10)
};

// Object: Class GameletJsEnv.GameletJSWidgetGeneratedClass
// Size: 0x438 (Inherited: 0x3D8)
struct UGameletJSWidgetGeneratedClass : UWidgetBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(UGameletJSWidgetGeneratedClass, "GameletJSWidgetGeneratedClass")

	uint8_t Pad_0x3D8[0x60]; // 0x3D8(0x60)
};

// Object: Class GameletJsEnv.GameletTypeScriptBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct UGameletTypeScriptBlueprint : UBlueprint
{
	DEFINE_UE_CLASS_HELPERS(UGameletTypeScriptBlueprint, "GameletTypeScriptBlueprint")
};

// Object: Class GameletJsEnv.GameletTypeScriptGeneratedClass
// Size: 0x420 (Inherited: 0x380)
struct UGameletTypeScriptGeneratedClass : UBlueprintGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(UGameletTypeScriptGeneratedClass, "GameletTypeScriptGeneratedClass")

	uint8_t Pad_0x380[0x99]; // 0x380(0x99)
	uint8_t HasConstructor : 1; // 0x419(0x1), Mask(0x1)
	uint8_t BitPad_0x419_1 : 7; // 0x419(0x1)
	uint8_t Pad_0x41A[0x6]; // 0x41A(0x6)
};

// Object: Class GameletJsEnv.GameletTypeScriptObject
// Size: 0x28 (Inherited: 0x28)
struct IGameletTypeScriptObject : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGameletTypeScriptObject, "GameletTypeScriptObject")
};

// Object: GameletJSGeneratedClass GameletJsEnv.Default__GameletJSGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__GameletJSGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(Default__GameletJSGeneratedClass, "Default__GameletJSGeneratedClass")
};

// Object: GameletJSWidgetGeneratedClass GameletJsEnv.Default__GameletJSWidgetGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__GameletJSWidgetGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(Default__GameletJSWidgetGeneratedClass, "Default__GameletJSWidgetGeneratedClass")
};

// Object: GameletTypeScriptGeneratedClass GameletJsEnv.Default__GameletTypeScriptGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__GameletTypeScriptGeneratedClass
{
	DEFINE_UE_CLASS_HELPERS(Default__GameletTypeScriptGeneratedClass, "Default__GameletTypeScriptGeneratedClass")
};

} // namespace SDK
