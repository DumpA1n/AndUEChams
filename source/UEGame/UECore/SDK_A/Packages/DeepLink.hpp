#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: DeepLink
// Enums: 0
// Structs: 0
// Classes: 1

struct UDeepLink;

// Object: Class DeepLink.DeepLink
// Size: 0x88 (Inherited: 0x28)
struct UDeepLink : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDeepLink, "DeepLink")

	struct FMulticastInlineDelegate OnDeepLinkDelegate; // 0x28(0x10)
	struct TMap<struct FString, uint8_t> DeepLinkMap; // 0x38(0x50)

	// Object: DelegateFunction DeepLink.DeepLink.OnDeepLinkDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnDeepLinkDelegate__DelegateSignature(struct FString DeepLinkUrl);

	// Object: Function DeepLink.DeepLink.OnDeepLinkCallback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b33098
	// Params: [ Num(1) Size(0x10) ]
	static void OnDeepLinkCallback(struct FString UrlStr);

	// Object: Function DeepLink.DeepLink.GetLastDeepLinkUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10746120
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLastDeepLinkUrl();

	// Object: Function DeepLink.DeepLink.GetDeepLink
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x101d1ab4
	// Params: [ Num(1) Size(0x8) ]
	static struct UDeepLink* GetDeepLink();
};

} // namespace SDK
