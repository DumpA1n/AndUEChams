#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "InputCore.hpp"

namespace SDK
{

// Package: ImGui
// Enums: 2
// Structs: 3
// Classes: 3

enum class ECheckBoxState : uint8_t;
struct FImGuiDPIScaleInfo;
struct FImGuiCanvasSizeInfo;
struct FImGuiKeyInfo;
struct UImGuiInputHandler;
struct UImGuiSettings;
struct UImGuiWidgetProxy;

// Object: Enum ImGui.EImGuiDPIScaleMethod
enum class EImGuiDPIScaleMethod : uint8_t
{
	ImGui = 0,
	Slate = 1,
	EImGuiDPIScaleMethod_MAX = 2
};

// Object: Enum ImGui.EImGuiCanvasSizeType
enum class EImGuiCanvasSizeType : uint8_t
{
	Custom = 0,
	Desktop = 1,
	Viewport = 2,
	EImGuiCanvasSizeType_MAX = 3
};

// Object: ScriptStruct ImGui.ImGuiDPIScaleInfo
// Size: 0xB0 (Inherited: 0x0)
struct FImGuiDPIScaleInfo
{
	EImGuiDPIScaleMethod ScalingMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	struct FRuntimeFloatCurve DPICurve; // 0x8(0xA0)
	uint8_t bScaleWithCurve : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
};

// Object: ScriptStruct ImGui.ImGuiCanvasSizeInfo
// Size: 0x10 (Inherited: 0x0)
struct FImGuiCanvasSizeInfo
{
	EImGuiCanvasSizeType SizeType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Width; // 0x4(0x4)
	int32_t Height; // 0x8(0x4)
	uint8_t bExtendToViewport : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct ImGui.ImGuiKeyInfo
// Size: 0x20 (Inherited: 0x0)
struct FImGuiKeyInfo
{
	struct FKey Key; // 0x0(0x18)
	ECheckBoxState Shift; // 0x18(0x1)
	ECheckBoxState Ctrl; // 0x19(0x1)
	ECheckBoxState Alt; // 0x1A(0x1)
	ECheckBoxState Cmd; // 0x1B(0x1)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: Class ImGui.ImGuiInputHandler
// Size: 0x50 (Inherited: 0x28)
struct UImGuiInputHandler : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
	DEFINE_UE_CLASS_HELPERS(UImGuiInputHandler, "ImGuiInputHandler")

};

// Object: Class ImGui.ImGuiSettings
// Size: 0x128 (Inherited: 0x28)
struct UImGuiSettings : UObject
{
	struct FSoftClassPath ImGuiInputHandlerClass; // 0x28(0x18)
	uint8_t bShareKeyboardInput : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bShareGamepadInput : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bShareMouseInput : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t bUseSoftwareCursor : 1; // 0x43(0x1), Mask(0x1)
	uint8_t BitPad_0x43_1 : 7; // 0x43(0x1)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FImGuiKeyInfo ToggleInput; // 0x48(0x20)
	struct FImGuiCanvasSizeInfo CanvasSize; // 0x68(0x10)
	struct FImGuiDPIScaleInfo DpiScale; // 0x78(0xB0)
	DEFINE_UE_CLASS_HELPERS(UImGuiSettings, "ImGuiSettings")

};

// Object: Class ImGui.ImGuiWidgetProxy
// Size: 0x40 (Inherited: 0x30)
struct UImGuiWidgetProxy : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)


	// Object: Function ImGui.ImGuiWidgetProxy.SetWantShareMouseInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783efdc
	// Params: [ Num(1) Size(0x1) ]
	void SetWantShareMouseInput(uint8_t bShare);

	// Object: Function ImGui.ImGuiWidgetProxy.SetWantShareKeyboardInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783ef30
	// Params: [ Num(1) Size(0x1) ]
	void SetWantShareKeyboardInput(uint8_t bShare);

	// Object: Function ImGui.ImGuiWidgetProxy.SetWantShareGamepadInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783ee84
	// Params: [ Num(1) Size(0x1) ]
	void SetWantShareGamepadInput(uint8_t bShare);

	// Object: Function ImGui.ImGuiWidgetProxy.SetWantEnableInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783edd8
	// Params: [ Num(1) Size(0x1) ]
	void SetWantEnableInput(uint8_t bEnable);

	// Object: Function ImGui.ImGuiWidgetProxy.IsWantShareMouseInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783eda0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWantShareMouseInput();

	// Object: Function ImGui.ImGuiWidgetProxy.IsWantShareKeyboardInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783ed68
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWantShareKeyboardInput();

	// Object: Function ImGui.ImGuiWidgetProxy.IsWantShareGamepadInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783ed30
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWantShareGamepadInput();

	// Object: Function ImGui.ImGuiWidgetProxy.IsWantEnableInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1783ecf8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWantEnableInput();

	// Object: Function ImGui.ImGuiWidgetProxy.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1783ec54
	// Params: [ Num(2) Size(0x10) ]
	static struct UImGuiWidgetProxy* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UImGuiWidgetProxy, "ImGuiWidgetProxy")

};

} // namespace SDK
