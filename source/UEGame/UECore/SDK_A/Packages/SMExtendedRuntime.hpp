#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SMSystem.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: SMExtendedRuntime
// Enums: 0
// Structs: 3
// Classes: 1

struct FSMTextNodeWidgetInfo;
struct FSMTextSerializer;
struct FSMTextGraphProperty;
struct USMExtendedGraphPropertyHelpers;

// Object: ScriptStruct SMExtendedRuntime.SMTextNodeWidgetInfo
// Size: 0xB00 (Inherited: 0x1)
struct FSMTextNodeWidgetInfo : FSMTextDisplayWidgetInfo
{
	struct FInlineEditableTextBlockStyle EditableTextStyle; // 0x0(0xAF8)
	float WrapTextAt; // 0xAF8(0x4)
	uint8_t Pad_0xAFD[0x3]; // 0xAFD(0x3)
};

// Object: ScriptStruct SMExtendedRuntime.SMTextSerializer
// Size: 0x10 (Inherited: 0x0)
struct FSMTextSerializer
{
	struct TArray<struct FName> ToTextFunctionNames; // 0x0(0x10)
};

// Object: ScriptStruct SMExtendedRuntime.SMTextGraphProperty
// Size: 0xC38 (Inherited: 0x110)
struct FSMTextGraphProperty : FSMGraphProperty_Base
{
	struct FText Result; // 0x110(0x18)
	struct FSMTextNodeWidgetInfo WidgetInfo; // 0x128(0xB00)
	struct FSMTextSerializer TextSerializer; // 0xC28(0x10)
};

// Object: Class SMExtendedRuntime.SMExtendedGraphPropertyHelpers
// Size: 0x28 (Inherited: 0x28)
struct USMExtendedGraphPropertyHelpers : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USMExtendedGraphPropertyHelpers, "SMExtendedGraphPropertyHelpers")

	// Object: Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x77753f0
	// Params: [ Num(2) Size(0xC50) ]
	static void BreakTextGraphProperty(const struct FSMTextGraphProperty& GraphProperty, struct FText& Result);
};

} // namespace SDK
