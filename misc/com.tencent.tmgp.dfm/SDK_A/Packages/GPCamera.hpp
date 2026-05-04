#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPCamera
// Enums: 0
// Structs: 2
// Classes: 1

struct FGPCameraPossessData;
struct FGPCameraModifyData;
struct AGPCameraManager;

// Object: ScriptStruct GPCamera.GPCameraPossessData
// Size: 0x48 (Inherited: 0x0)
struct FGPCameraPossessData
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct GPCamera.GPCameraModifyData
// Size: 0x1C (Inherited: 0x0)
struct FGPCameraModifyData
{
	uint8_t Pad_0x0[0x1C]; // 0x0(0x1C)
};

// Object: Class GPCamera.GPCameraManager
// Size: 0x4020 (Inherited: 0x4020)
struct AGPCameraManager : APlayerCameraManager
{	DEFINE_UE_CLASS_HELPERS(AGPCameraManager, "GPCameraManager")

};

} // namespace SDK
