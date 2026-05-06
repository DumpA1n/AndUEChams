#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: FalconCore
// Enums: 0
// Structs: 0
// Classes: 1

struct UFalconTXTUtil;

// Object: Class FalconCore.FalconTXTUtil
// Size: 0x28 (Inherited: 0x28)
struct UFalconTXTUtil : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UFalconTXTUtil, "FalconTXTUtil")

	// Object: Function FalconCore.FalconTXTUtil.LoadTXT
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf9a76c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString LoadTXT(struct FString InPath);

	// Object: Function FalconCore.FalconTXTUtil.AppendTXT
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf9a858
	// Params: [ Num(3) Size(0x21) ]
	static bool AppendTXT(struct FString InPath, struct FString InText);
};

} // namespace SDK
