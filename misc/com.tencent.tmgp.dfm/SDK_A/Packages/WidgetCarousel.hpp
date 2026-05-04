#pragma once

#include "../CoreUObject_classes.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: WidgetCarousel
// Enums: 0
// Structs: 2
// Classes: 0

struct FWidgetCarouselNavigationBarStyle;
struct FWidgetCarouselNavigationButtonStyle;

// Object: ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0x860 (Inherited: 0x8)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle
{
	struct FSlateBrush HighlightBrush; // 0x8(0x90)
	struct FButtonStyle LeftButtonStyle; // 0x98(0x298)
	struct FButtonStyle CenterButtonStyle; // 0x330(0x298)
	struct FButtonStyle RightButtonStyle; // 0x5C8(0x298)
};

// Object: ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x3C0 (Inherited: 0x8)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle
{
	struct FButtonStyle InnerButtonStyle; // 0x8(0x298)
	struct FSlateBrush NavigationButtonLeftImage; // 0x2A0(0x90)
	struct FSlateBrush NavigationButtonRightImage; // 0x330(0x90)
};

} // namespace SDK
