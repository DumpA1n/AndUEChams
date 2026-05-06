#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PortalRpc
// Enums: 0
// Structs: 2
// Classes: 0

struct FPortalRpcServer;
struct FPortalRpcLocateServer;

// Object: ScriptStruct PortalRpc.PortalRpcServer
// Size: 0x10 (Inherited: 0x0)
struct FPortalRpcServer
{
	struct FString ServerAddress; // 0x0(0x10)
};

// Object: ScriptStruct PortalRpc.PortalRpcLocateServer
// Size: 0x40 (Inherited: 0x0)
struct FPortalRpcLocateServer
{
	struct FGuid ProductId; // 0x0(0x10)
	struct FString ProductVersion; // 0x10(0x10)
	struct FString HostMacAddress; // 0x20(0x10)
	struct FString HostUserId; // 0x30(0x10)
};

} // namespace SDK
