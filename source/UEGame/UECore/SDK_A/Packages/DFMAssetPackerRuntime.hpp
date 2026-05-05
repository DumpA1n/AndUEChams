#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMAssetPackerRuntime
// Enums: 0
// Structs: 1
// Classes: 1

struct FAssetPackerDataUtils;
struct UDFAssetManager;

// Object: ScriptStruct DFMAssetPackerRuntime.AssetPackerDataUtils
// Size: 0x1 (Inherited: 0x0)
struct FAssetPackerDataUtils
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: Class DFMAssetPackerRuntime.DFAssetManager
// Size: 0x4A8 (Inherited: 0x4A8)
struct UDFAssetManager : UAssetManager
{
	DEFINE_UE_CLASS_HELPERS(UDFAssetManager, "DFAssetManager")
};

} // namespace SDK
