#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: RuntimeHttpRequest
// Enums: 0
// Structs: 0
// Classes: 1

struct URuntimeHttpRequest;

// Object: Class RuntimeHttpRequest.RuntimeHttpRequest
// Size: 0x48 (Inherited: 0x28)
struct URuntimeHttpRequest : UObject
{
	DEFINE_UE_CLASS_HELPERS(URuntimeHttpRequest, "RuntimeHttpRequest")

	struct FMulticastInlineDelegate OnHttpRequestComplete; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)

	// Object: DelegateFunction RuntimeHttpRequest.RuntimeHttpRequest.OnHttpRequestComplete__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x11) ]
	void OnHttpRequestComplete__DelegateSignature(struct FString URL, uint8_t Result);

	// Object: Function RuntimeHttpRequest.RuntimeHttpRequest.HttpRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8c6e1a0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HttpRequest(struct FString URL);

	// Object: Function RuntimeHttpRequest.RuntimeHttpRequest.GetRuntimeHttpRequest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8c6e16c
	// Params: [ Num(1) Size(0x8) ]
	static struct URuntimeHttpRequest* GetRuntimeHttpRequest();
};

} // namespace SDK
