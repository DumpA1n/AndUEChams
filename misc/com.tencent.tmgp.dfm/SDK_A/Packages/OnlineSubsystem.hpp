#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: OnlineSubsystem
// Enums: 2
// Structs: 5
// Classes: 2

struct FInAppPurchaseProductInfo;
struct FInAppPurchaseRestoreInfo;
struct FNamedInterfaceDef;
struct FNamedInterface;
struct FInAppPurchaseProductRequest;
struct UNamedInterfaces;
struct ITurnBasedMatchInterface;

// Object: Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8
};

// Object: Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10
};

// Object: ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// Size: 0xA8 (Inherited: 0x0)
struct FInAppPurchaseProductInfo
{
	struct FString Identifier; // 0x0(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)
};

// Object: ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseRestoreInfo
{
	struct FString Identifier; // 0x0(0x10)
	struct FString ReceiptData; // 0x10(0x10)
	struct FString TransactionIdentifier; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystem.NamedInterfaceDef
// Size: 0x18 (Inherited: 0x0)
struct FNamedInterfaceDef
{
	struct FName InterfaceName; // 0x0(0x8)
	struct FString InterfaceClassName; // 0x8(0x10)
};

// Object: ScriptStruct OnlineSubsystem.NamedInterface
// Size: 0x10 (Inherited: 0x0)
struct FNamedInterface
{
	struct FName InterfaceName; // 0x0(0x8)
	struct UObject* InterfaceObject; // 0x8(0x8)
};

// Object: ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// Size: 0x18 (Inherited: 0x0)
struct FInAppPurchaseProductRequest
{
	struct FString ProductIdentifier; // 0x0(0x10)
	uint8_t bIsConsumable : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: Class OnlineSubsystem.NamedInterfaces
// Size: 0x60 (Inherited: 0x28)
struct UNamedInterfaces : UObject
{
	struct TArray<struct FNamedInterface> NamedInterfaces; // 0x28(0x10)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)
	DEFINE_UE_CLASS_HELPERS(UNamedInterfaces, "NamedInterfaces")

};

// Object: Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28 (Inherited: 0x28)
struct ITurnBasedMatchInterface : IInterface
{

	// Object: Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x11) ]
	void OnMatchReceivedTurn(struct FString Match, uint8_t bDidBecomeActive);

	// Object: Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnMatchEnded(struct FString Match);
	DEFINE_UE_CLASS_HELPERS(ITurnBasedMatchInterface, "TurnBasedMatchInterface")

};

} // namespace SDK
