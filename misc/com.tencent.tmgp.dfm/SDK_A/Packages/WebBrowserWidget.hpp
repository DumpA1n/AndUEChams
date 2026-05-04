#pragma once

#include "../CoreUObject_classes.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: WebBrowserWidget
// Enums: 0
// Structs: 0
// Classes: 2

struct UMaterial;
struct UWebBrowser;
struct UWebBrowserAssetManager;

// Object: Class WebBrowserWidget.WebBrowser
// Size: 0x1A0 (Inherited: 0x158)
struct UWebBrowser : UWidget
{
	struct FMulticastInlineDelegate OnUrlChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x168(0x10)
	struct FString InitialURL; // 0x178(0x10)
	uint8_t bSupportsTransparency : 1; // 0x188(0x1), Mask(0x1)
	uint8_t BitPad_0x188_1 : 7; // 0x188(0x1)
	uint8_t Pad_0x189[0x17]; // 0x189(0x17)


	// Object: DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	void OnUrlChanged__DelegateSignature(const struct FText& Text);

	// Object: DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame);

	// Object: Function WebBrowserWidget.WebBrowser.LoadURL
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7983670
	// Params: [ Num(1) Size(0x10) ]
	void LoadURL(struct FString NewURL);

	// Object: Function WebBrowserWidget.WebBrowser.LoadString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79834f0
	// Params: [ Num(2) Size(0x20) ]
	void LoadString(struct FString Contents, struct FString DummyURL);

	// Object: Function WebBrowserWidget.WebBrowser.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7983458
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function WebBrowserWidget.WebBrowser.GetTitleText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7983388
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetTitleText();

	// Object: Function WebBrowserWidget.WebBrowser.ExecuteJavascript
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79832dc
	// Params: [ Num(1) Size(0x10) ]
	void ExecuteJavascript(struct FString ScriptText);
	DEFINE_UE_CLASS_HELPERS(UWebBrowser, "WebBrowser")

};

// Object: Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x78 (Inherited: 0x28)
struct UWebBrowserAssetManager : UObject
{
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x28(0x28)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)
	DEFINE_UE_CLASS_HELPERS(UWebBrowserAssetManager, "WebBrowserAssetManager")

};

} // namespace SDK
