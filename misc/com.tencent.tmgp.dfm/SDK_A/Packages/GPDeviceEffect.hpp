#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: GPDeviceEffect
// Enums: 0
// Structs: 0
// Classes: 1

struct UGPDeviceEffectObject;

// Object: Class GPDeviceEffect.GPDeviceEffectObject
// Size: 0x28 (Inherited: 0x28)
struct UGPDeviceEffectObject : UObject
{

	// Object: Function GPDeviceEffect.GPDeviceEffectObject.OnSOLCharacterInEscapeState
	// Flags: [Final|Native|Public]
	// Offset: 0x9068078
	// Params: [ Num(0) Size(0x0) ]
	void OnSOLCharacterInEscapeState();

	// Object: Function GPDeviceEffect.GPDeviceEffectObject.OnClientLocalPlayerSendOutMandel
	// Flags: [Final|Native|Public]
	// Offset: 0x9068064
	// Params: [ Num(0) Size(0x0) ]
	void OnClientLocalPlayerSendOutMandel();
	DEFINE_UE_CLASS_HELPERS(UGPDeviceEffectObject, "GPDeviceEffectObject")

};

} // namespace SDK
