#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: Icmp
// Enums: 1
// Structs: 0
// Classes: 0

// Object: Enum Icmp.EIcmpEchoManyProgress
enum class EIcmpEchoManyProgress : uint8_t
{
	Invalid = 0,
	ResolveIp = 1,
	SendPingSuccess = 2,
	SendPingFailure = 3,
	RecvReplySuccess = 4,
	RecvReplyFailure = 5,
	TimeOut = 6,
	EIcmpEchoManyProgress_MAX = 7
};

} // namespace SDK
