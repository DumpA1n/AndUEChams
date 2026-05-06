#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AndroidFileServer
// Enums: 1
// Structs: 0
// Classes: 1

struct UAndroidFileServerBPLibrary;

// Object: Enum AndroidFileServer.EAFSActiveType
enum class EAFSActiveType : uint8_t
{
	None = 0,
	USBOnly = 1,
	NetworkOnly = 2,
	Combined = 3,
	EAFSActiveType_MAX = 4
};

// Object: Class AndroidFileServer.AndroidFileServerBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidFileServerBPLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAndroidFileServerBPLibrary, "AndroidFileServerBPLibrary")

	// Object: Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5216230
	// Params: [ Num(3) Size(0x3) ]
	static bool StopFileServer(bool bUSB, bool bNetwork);

	// Object: Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x521632c
	// Params: [ Num(4) Size(0x9) ]
	static bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port);

	// Object: Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x52161fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsFileServerRunning();
};

} // namespace SDK
