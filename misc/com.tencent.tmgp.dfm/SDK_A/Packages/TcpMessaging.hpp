#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: TcpMessaging
// Enums: 0
// Structs: 0
// Classes: 1

struct UTcpMessagingSettings;

// Object: Class TcpMessaging.TcpMessagingSettings
// Size: 0x58 (Inherited: 0x28)
struct UTcpMessagingSettings : UObject
{
	uint8_t EnableTransport : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString ListenEndpoint; // 0x30(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x40(0x10)
	int32_t ConnectionRetryDelay; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	DEFINE_UE_CLASS_HELPERS(UTcpMessagingSettings, "TcpMessagingSettings")

};

} // namespace SDK
