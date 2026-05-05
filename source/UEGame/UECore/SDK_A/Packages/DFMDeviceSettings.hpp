#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMDeviceSettings
// Enums: 0
// Structs: 0
// Classes: 2

struct UDFMDeviceFrameDataAsset;
struct UDFMDeviceFrameSettings;

// Object: Class DFMDeviceSettings.DFMDeviceFrameDataAsset
// Size: 0xB0 (Inherited: 0x30)
struct UDFMDeviceFrameDataAsset : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UDFMDeviceFrameDataAsset, "DFMDeviceFrameDataAsset")

	struct TArray<struct FString> BlackListFor90fps; // 0x30(0x10)
	struct TArray<struct FString> BlackListFor120fps; // 0x40(0x10)
	struct TArray<struct FString> BlackListFor144fps; // 0x50(0x10)
	struct TArray<struct FString> BlackListFor165fps; // 0x60(0x10)
	struct TArray<struct FString> WhiteListFor90fps; // 0x70(0x10)
	struct TArray<struct FString> WhiteListFor120fps; // 0x80(0x10)
	struct TArray<struct FString> WhiteListFor144fps; // 0x90(0x10)
	struct TArray<struct FString> WhiteListFor165fps; // 0xA0(0x10)
};

// Object: Class DFMDeviceSettings.DFMDeviceFrameSettings
// Size: 0x30 (Inherited: 0x28)
struct UDFMDeviceFrameSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMDeviceFrameSettings, "DFMDeviceFrameSettings")

	struct UDFMDeviceFrameDataAsset* DataAsset; // 0x28(0x8)
};

} // namespace SDK
