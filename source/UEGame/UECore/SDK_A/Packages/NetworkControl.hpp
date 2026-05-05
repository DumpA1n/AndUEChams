#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: NetworkControl
// Enums: 1
// Structs: 0
// Classes: 1

struct UNetworkControl;

// Object: Enum NetworkControl.ENetworkControlType
enum class ENetworkControlType : uint8_t
{
	Invalid = 0,
	CDN = 1,
	Puffer = 2,
	HLS = 3,
	ENetworkControlType_MAX = 4
};

// Object: Class NetworkControl.NetworkControl
// Size: 0x48 (Inherited: 0x28)
struct UNetworkControl : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNetworkControl, "NetworkControl")

	struct FMulticastInlineDelegate OnNetworkControlEvent; // 0x28(0x10)
	ENetworkControlType NetworkControlType; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FTimerHandle TimerHandle; // 0x40(0x8)

	// Object: Function NetworkControl.NetworkControl.UnInitNetworkControl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x871cb24
	// Params: [ Num(0) Size(0x0) ]
	static void UnInitNetworkControl();

	// Object: Function NetworkControl.NetworkControl.ShouldControlNetworkOrNot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x871caec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldControlNetworkOrNot();

	// Object: Function NetworkControl.NetworkControl.RequestNetworkControl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x871ca0c
	// Params: [ Num(2) Size(0x8) ]
	void RequestNetworkControl(ENetworkControlType InNetworkControlType, float InSeconds);

	// Object: Function NetworkControl.NetworkControl.ReleaseNetworkControl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10755c30
	// Params: [ Num(1) Size(0x1) ]
	void ReleaseNetworkControl(ENetworkControlType InNetworkControlType);

	// Object: DelegateFunction NetworkControl.NetworkControl.OnNetworkControlDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x2) ]
	void OnNetworkControlDelegate__DelegateSignature(const ENetworkControlType& NetworkControlType, uint8_t ControlNetworkOrNot);

	// Object: Function NetworkControl.NetworkControl.InitNetworkControl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x871c978
	// Params: [ Num(1) Size(0x8) ]
	static void InitNetworkControl(struct UObject* Outer);

	// Object: Function NetworkControl.NetworkControl.GetCurrentNetworkControlType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x871c95c
	// Params: [ Num(1) Size(0x1) ]
	ENetworkControlType GetCurrentNetworkControlType();

	// Object: Function NetworkControl.NetworkControl.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf9b8380
	// Params: [ Num(1) Size(0x8) ]
	static struct UNetworkControl* Get();

	// Object: Function NetworkControl.NetworkControl.DealWithTimerHandle
	// Flags: [Final|Native|Public]
	// Offset: 0x871c948
	// Params: [ Num(0) Size(0x0) ]
	void DealWithTimerHandle();
};

} // namespace SDK
