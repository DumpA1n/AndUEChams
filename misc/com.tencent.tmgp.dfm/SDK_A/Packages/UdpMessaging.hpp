#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: UdpMessaging
// Enums: 1
// Structs: 1
// Classes: 1

struct FUdpMockMessage;
struct UUdpMessagingSettings;

// Object: Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// Object: ScriptStruct UdpMessaging.UdpMockMessage
// Size: 0x10 (Inherited: 0x0)
struct FUdpMockMessage
{
	struct TArray<uint8_t> Data; // 0x0(0x10)
};

// Object: Class UdpMessaging.UdpMessagingSettings
// Size: 0xA0 (Inherited: 0x28)
struct UUdpMessagingSettings : UObject
{
	uint8_t EnableTransport : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bAutoRepair : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FString UnicastEndpoint; // 0x30(0x10)
	struct FString MulticastEndpoint; // 0x40(0x10)
	EUdpMessageFormat MessageFormat; // 0x50(0x1)
	uint8_t MulticastTimeToLive; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct TArray<struct FString> StaticEndpoints; // 0x58(0x10)
	uint8_t EnableTunnel : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString TunnelUnicastEndpoint; // 0x70(0x10)
	struct FString TunnelMulticastEndpoint; // 0x80(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0x90(0x10)
	DEFINE_UE_CLASS_HELPERS(UUdpMessagingSettings, "UdpMessagingSettings")

};

} // namespace SDK
