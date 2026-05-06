#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PortalServices
// Enums: 2
// Structs: 2
// Classes: 0

struct FPortalUserIsEntitledToItemResult;
struct FPortalUserDetails;

// Object: Enum PortalServices.EEntitlementCacheLevelRetrieved
enum class EEntitlementCacheLevelRetrieved : uint8_t
{
	None = 0,
	Memory = 1,
	Disk = 2,
	EEntitlementCacheLevelRetrieved_MAX = 3
};

// Object: Enum PortalServices.EEntitlementCacheLevelRequest
enum class EEntitlementCacheLevelRequest : uint8_t
{
	Memory = 1,
	Disk = 2,
	EEntitlementCacheLevelRequest_MAX = 3
};

// Object: ScriptStruct PortalServices.PortalUserIsEntitledToItemResult
// Size: 0x18 (Inherited: 0x0)
struct FPortalUserIsEntitledToItemResult
{
	struct FString itemID; // 0x0(0x10)
	bool IsEntitled; // 0x10(0x1)
	EEntitlementCacheLevelRetrieved RetrievedFromCacheLevel; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct PortalServices.PortalUserDetails
// Size: 0x50 (Inherited: 0x0)
struct FPortalUserDetails
{
	struct FText DisplayName; // 0x0(0x18)
	struct FText email; // 0x18(0x18)
	struct FText RealName; // 0x30(0x18)
	bool IsSignedIn; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

} // namespace SDK
