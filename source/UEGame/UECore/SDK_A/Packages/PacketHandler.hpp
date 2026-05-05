#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PacketHandler
// Enums: 0
// Structs: 0
// Classes: 2

struct UHandlerComponentFactory;
struct UPacketHandlerProfileConfig;

// Object: Class PacketHandler.HandlerComponentFactory
// Size: 0x28 (Inherited: 0x28)
struct UHandlerComponentFactory : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHandlerComponentFactory, "HandlerComponentFactory")
};

// Object: Class PacketHandler.PacketHandlerProfileConfig
// Size: 0x38 (Inherited: 0x28)
struct UPacketHandlerProfileConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPacketHandlerProfileConfig, "PacketHandlerProfileConfig")

	struct TArray<struct FString> Components; // 0x28(0x10)
};

} // namespace SDK
