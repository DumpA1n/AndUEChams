#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: WebBrowserTexture
// Enums: 0
// Structs: 0
// Classes: 1

struct UWebBrowserTexture;

// Object: Class WebBrowserTexture.WebBrowserTexture
// Size: 0x178 (Inherited: 0x130)
struct UWebBrowserTexture : UTexture
{
	DEFINE_UE_CLASS_HELPERS(UWebBrowserTexture, "WebBrowserTexture")

	uint8_t Pad_0x130[0x48]; // 0x130(0x48)
};

} // namespace SDK
