#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: WebBrowser
// Enums: 0
// Structs: 3
// Classes: 0

struct FWebJSCallbackBase;
struct FWebJSResponse;
struct FWebJSFunction;

// Object: ScriptStruct WebBrowser.WebJSCallbackBase
// Size: 0x20 (Inherited: 0x0)
struct FWebJSCallbackBase
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct WebBrowser.WebJSResponse
// Size: 0x20 (Inherited: 0x20)
struct FWebJSResponse : FWebJSCallbackBase
{
};

// Object: ScriptStruct WebBrowser.WebJSFunction
// Size: 0x20 (Inherited: 0x20)
struct FWebJSFunction : FWebJSCallbackBase
{
};

} // namespace SDK
