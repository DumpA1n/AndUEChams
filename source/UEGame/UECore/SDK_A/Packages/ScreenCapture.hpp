#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: ScreenCapture
// Enums: 0
// Structs: 0
// Classes: 4

struct UIScreenCapture;
struct UAndroidScreenCapture;
struct UHarmonyScreenCapture;
struct UIOSScreenCapture;

// Object: Class ScreenCapture.IScreenCapture
// Size: 0x38 (Inherited: 0x28)
struct UIScreenCapture : UObject
{
	DEFINE_UE_CLASS_HELPERS(UIScreenCapture, "IScreenCapture")

	struct FMulticastInlineDelegate OnScreenCaptureDelegate; // 0x28(0x10)

	// Object: DelegateFunction ScreenCapture.IScreenCapture.OnScreenCaptureDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnScreenCaptureDelegate__DelegateSignature();

	// Object: Function ScreenCapture.IScreenCapture.GetScreenCapture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf7feda8
	// Params: [ Num(1) Size(0x8) ]
	static struct UIScreenCapture* GetScreenCapture();
};

// Object: Class ScreenCapture.AndroidScreenCapture
// Size: 0x38 (Inherited: 0x38)
struct UAndroidScreenCapture : UIScreenCapture
{
	DEFINE_UE_CLASS_HELPERS(UAndroidScreenCapture, "AndroidScreenCapture")
};

// Object: Class ScreenCapture.HarmonyScreenCapture
// Size: 0x38 (Inherited: 0x38)
struct UHarmonyScreenCapture : UIScreenCapture
{
	DEFINE_UE_CLASS_HELPERS(UHarmonyScreenCapture, "HarmonyScreenCapture")
};

// Object: Class ScreenCapture.IOSScreenCapture
// Size: 0x38 (Inherited: 0x38)
struct UIOSScreenCapture : UIScreenCapture
{
	DEFINE_UE_CLASS_HELPERS(UIOSScreenCapture, "IOSScreenCapture")
};

} // namespace SDK
