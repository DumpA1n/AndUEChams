#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MessagingRpc
// Enums: 0
// Structs: 4
// Classes: 0

struct FMessageRpcUnhandled;
struct FMessageRpcProgress;
struct FMessageRpcCancel;
struct FRpcMessage;

// Object: ScriptStruct MessagingRpc.MessageRpcUnhandled
// Size: 0x10 (Inherited: 0x0)
struct FMessageRpcUnhandled
{
	struct FGuid CallId; // 0x0(0x10)
};

// Object: ScriptStruct MessagingRpc.MessageRpcProgress
// Size: 0x28 (Inherited: 0x0)
struct FMessageRpcProgress
{
	float Completion; // 0x0(0x4)
	struct FGuid CallId; // 0x4(0x10)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString StatusText; // 0x18(0x10)
};

// Object: ScriptStruct MessagingRpc.MessageRpcCancel
// Size: 0x10 (Inherited: 0x0)
struct FMessageRpcCancel
{
	struct FGuid CallId; // 0x0(0x10)
};

// Object: ScriptStruct MessagingRpc.RpcMessage
// Size: 0x10 (Inherited: 0x0)
struct FRpcMessage
{
	struct FGuid CallId; // 0x0(0x10)
};

} // namespace SDK
