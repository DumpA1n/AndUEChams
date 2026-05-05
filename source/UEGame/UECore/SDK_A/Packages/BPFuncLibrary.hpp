#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BPFuncLibrary
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFTextBlock;
struct URetainerBox;
struct UTextBlock;
struct UBPFuncLibrary_C;

// Object: BlueprintGeneratedClass BPFuncLibrary.BPFuncLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFuncLibrary_C : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBPFuncLibrary_C, "BPFuncLibrary_C")

	// Object: Function BPFuncLibrary.BPFuncLibrary_C.SetTextWidthToFontMaterial
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	static void SetTextWidthToFontMaterial(struct UTextBlock* TextBlock, struct UObject* __WorldContext);

	// Object: Function BPFuncLibrary.BPFuncLibrary_C.Set Led Stripe By Font Size
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	static void Set_Led_Stripe_By_Font_Size(struct URetainerBox* TargetRetainerBox, struct UDFTextBlock* TragetTextBlock, struct UObject* __WorldContext);
};

} // namespace SDK
