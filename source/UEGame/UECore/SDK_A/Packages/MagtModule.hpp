#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"

namespace SDK
{

// Package: MagtModule
// Enums: 0
// Structs: 1
// Classes: 2

struct FPID_Param;
struct UMAGTPidSetting;
struct UMagtActor;

// Object: ScriptStruct MagtModule.PID_Param
// Size: 0xC (Inherited: 0x0)
struct FPID_Param
{
	float KP; // 0x0(0x4)
	float KI; // 0x4(0x4)
	float KD; // 0x8(0x4)
};

// Object: Class MagtModule.MAGTPidSetting
// Size: 0x78 (Inherited: 0x38)
struct UMAGTPidSetting : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMAGTPidSetting, "MAGTPidSetting")

	struct TArray<float> Temp_PID_Params; // 0x38(0x10)
	struct TArray<float> PW_PID_Params; // 0x48(0x10)
	struct TArray<float> CPU_PID_Params; // 0x58(0x10)
	struct TArray<float> GPU_PID_Params; // 0x68(0x10)
};

// Object: Class MagtModule.MagtActor
// Size: 0x140 (Inherited: 0x28)
struct UMagtActor : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMagtActor, "MagtActor")

	uint8_t Pad_0x28[0x118]; // 0x28(0x118)
};

} // namespace SDK
