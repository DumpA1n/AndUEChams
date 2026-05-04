#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPTools
// Enums: 2
// Structs: 1
// Classes: 11

struct AActor;
struct APlayerController;
struct UActorComponent;
struct UGameViewportClient;
struct FGPToolInfo;
struct UGPToolBase;
struct UGPTFlowLogger;
struct UGPTFlowTimeline;
struct UGPTFlowTimelineContext;
struct UGPToolBPBase;
struct UGPToolGUI;
struct UGPToolManager;
struct UGPTRPCComponent;
struct UGPToolSettings;
struct UGPTProfilerContext;
struct UGPTProfiler;

// Object: Enum GPTools.EGPTFlowMessageLevel
enum class EGPTFlowMessageLevel : uint8_t
{
	Log = 0,
	Warning = 1,
	Error = 2,
	EGPTFlowMessageLevel_MAX = 3
};

// Object: Enum GPTools.EGPTConsoleCommandScope
enum class EGPTConsoleCommandScope : uint8_t
{
	Client = 0,
	Server = 1,
	All = 2,
	EGPTConsoleCommandScope_MAX = 3
};

// Object: ScriptStruct GPTools.GPToolInfo
// Size: 0x30 (Inherited: 0x0)
struct FGPToolInfo
{
	struct FString Name; // 0x0(0x10)
	struct UGPToolBase* ImplClass; // 0x10(0x8)
	int32_t Permission; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ScriptPath; // 0x20(0x10)
};

// Object: Class GPTools.GPToolBase
// Size: 0x50 (Inherited: 0x28)
struct UGPToolBase : UObject
{
	struct FString Name; // 0x28(0x10)
	int32_t Permission; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString ScriptPath; // 0x40(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPToolBase, "GPToolBase")

};

// Object: Class GPTools.GPTFlowLogger
// Size: 0x28 (Inherited: 0x28)
struct UGPTFlowLogger : UObject
{

	// Object: Function GPTools.GPTFlowLogger.ResetBuffer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836bd60
	// Params: [ Num(0) Size(0x0) ]
	static void ResetBuffer();

	// Object: Function GPTools.GPTFlowLogger.LogFlow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836ba90
	// Params: [ Num(10) Size(0x70) ]
	static void LogFlow(struct UObject* WorldContextObject, EGPTFlowMessageLevel MsgLevel, struct FString Author, struct UObject* ActionInst, struct FString ActionName, struct FString ActionEvent, struct AActor* Target, struct FName TargetTag, struct AActor* Instigator, struct FString MsgText);

	// Object: Function GPTools.GPTFlowLogger.EndFlow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836ba7c
	// Params: [ Num(0) Size(0x0) ]
	static void EndFlow();

	// Object: Function GPTools.GPTFlowLogger.BeginFlow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836b9e0
	// Params: [ Num(1) Size(0x10) ]
	static void BeginFlow(struct FString Name);
	DEFINE_UE_CLASS_HELPERS(UGPTFlowLogger, "GPTFlowLogger")

};

// Object: Class GPTools.GPTFlowTimeline
// Size: 0x28 (Inherited: 0x28)
struct UGPTFlowTimeline : UObject
{	DEFINE_UE_CLASS_HELPERS(UGPTFlowTimeline, "GPTFlowTimeline")

};

// Object: Class GPTools.GPTFlowTimelineContext
// Size: 0x108 (Inherited: 0x28)
struct UGPTFlowTimelineContext : UObject
{
	uint8_t Pad_0x28[0xE0]; // 0x28(0xE0)
	DEFINE_UE_CLASS_HELPERS(UGPTFlowTimelineContext, "GPTFlowTimelineContext")

};

// Object: Class GPTools.GPToolBPBase
// Size: 0x50 (Inherited: 0x50)
struct UGPToolBPBase : UGPToolBase
{

	// Object: Function GPTools.GPToolBPBase.OnImGUI
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnImGUI();
	DEFINE_UE_CLASS_HELPERS(UGPToolBPBase, "GPToolBPBase")

};

// Object: Class GPTools.GPToolGUI
// Size: 0x28 (Inherited: 0x28)
struct UGPToolGUI : UObject
{

	// Object: Function GPTools.GPToolGUI.VSliderIntEx
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8379a6c
	// Params: [ Num(7) Size(0x39) ]
	static uint8_t VSliderIntEx(struct FString Label, struct FVector2D size, int32_t& V, int32_t v_min, int32_t v_max, struct FString Format);

	// Object: Function GPTools.GPToolGUI.VSliderInt
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x83798c4
	// Params: [ Num(6) Size(0x25) ]
	static uint8_t VSliderInt(struct FString Label, struct FVector2D size, int32_t& V, int32_t v_min, int32_t v_max);

	// Object: Function GPTools.GPToolGUI.VSliderFloatEx
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x837969c
	// Params: [ Num(8) Size(0x3D) ]
	static uint8_t VSliderFloatEx(struct FString Label, struct FVector2D size, float& V, float v_min, float v_max, struct FString Format, float Power);

	// Object: Function GPTools.GPToolGUI.VSliderFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x83794f4
	// Params: [ Num(6) Size(0x25) ]
	static uint8_t VSliderFloat(struct FString Label, struct FVector2D size, float& V, float v_min, float v_max);

	// Object: Function GPTools.GPToolGUI.ValueInt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837941c
	// Params: [ Num(2) Size(0x14) ]
	static void ValueInt(struct FString Prefix, int32_t V);

	// Object: Function GPTools.GPToolGUI.ValueFloatEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8379300
	// Params: [ Num(3) Size(0x28) ]
	static void ValueFloatEx(struct FString Prefix, float V, struct FString float_format);

	// Object: Function GPTools.GPToolGUI.ValueFloat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8379228
	// Params: [ Num(2) Size(0x14) ]
	static void ValueFloat(struct FString Prefix, float V);

	// Object: Function GPTools.GPToolGUI.Value
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8379148
	// Params: [ Num(2) Size(0x11) ]
	static void Value(struct FString Prefix, uint8_t B);

	// Object: Function GPTools.GPToolGUI.UnindentEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83790b4
	// Params: [ Num(1) Size(0x4) ]
	static void UnindentEx(float indent_w);

	// Object: Function GPTools.GPToolGUI.Unindent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83790a0
	// Params: [ Num(0) Size(0x0) ]
	static void Unindent();

	// Object: Function GPTools.GPToolGUI.TreePush
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8379004
	// Params: [ Num(1) Size(0x10) ]
	static void TreePush(struct FString str_id);

	// Object: Function GPTools.GPToolGUI.TreePop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378ff0
	// Params: [ Num(0) Size(0x0) ]
	static void TreePop();

	// Object: Function GPTools.GPToolGUI.TreeNodeEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378f04
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t TreeNodeEx(struct FString Label, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.TreeNode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378e54
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t TreeNode(struct FString Label);

	// Object: Function GPTools.GPToolGUI.TextWrapped
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378db8
	// Params: [ Num(1) Size(0x10) ]
	static void TextWrapped(struct FString fmt);

	// Object: Function GPTools.GPToolGUI.TextDisabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378d1c
	// Params: [ Num(1) Size(0x10) ]
	static void TextDisabled(struct FString fmt);

	// Object: Function GPTools.GPToolGUI.TextColored
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8378c24
	// Params: [ Num(2) Size(0x20) ]
	static void TextColored(const struct FVector4& col, struct FString fmt);

	// Object: Function GPTools.GPToolGUI.Text
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378b88
	// Params: [ Num(1) Size(0x10) ]
	static void Text(struct FString fmt);

	// Object: Function GPTools.GPToolGUI.Spacing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378b74
	// Params: [ Num(0) Size(0x0) ]
	static void Spacing();

	// Object: Function GPTools.GPToolGUI.SmallButton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8378ac4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t SmallButton(struct FString Label);

	// Object: Function GPTools.GPToolGUI.SliderIntEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8378910
	// Params: [ Num(6) Size(0x31) ]
	static uint8_t SliderIntEx(struct FString Label, int32_t& V, int32_t v_min, int32_t v_max, struct FString Format);

	// Object: Function GPTools.GPToolGUI.SliderInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83787a0
	// Params: [ Num(5) Size(0x1D) ]
	static uint8_t SliderInt(struct FString Label, int32_t& V, int32_t v_min, int32_t v_max);

	// Object: Function GPTools.GPToolGUI.SliderFloatEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83785b0
	// Params: [ Num(7) Size(0x35) ]
	static uint8_t SliderFloatEx(struct FString Label, float& V, float v_min, float v_max, struct FString Format, float Power);

	// Object: Function GPTools.GPToolGUI.SliderFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8378440
	// Params: [ Num(5) Size(0x1D) ]
	static uint8_t SliderFloat(struct FString Label, float& V, float v_min, float v_max);

	// Object: Function GPTools.GPToolGUI.SliderAngleEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x837828c
	// Params: [ Num(6) Size(0x31) ]
	static uint8_t SliderAngleEx(struct FString Label, float& v_rad, float v_degrees_min, float v_degrees_max, struct FString Format);

	// Object: Function GPTools.GPToolGUI.SliderAngle
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8378190
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t SliderAngle(struct FString Label, float& v_rad);

	// Object: Function GPTools.GPToolGUI.SetWindowSizeWithNameEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8378080
	// Params: [ Num(3) Size(0x1C) ]
	static void SetWindowSizeWithNameEx(struct FString Name, struct FVector2D size, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetWindowSizeWithName
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8377fac
	// Params: [ Num(2) Size(0x18) ]
	static void SetWindowSizeWithName(struct FString Name, struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.SetWindowSizeEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8377ee0
	// Params: [ Num(2) Size(0xC) ]
	static void SetWindowSizeEx(struct FVector2D size, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetWindowSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8377e50
	// Params: [ Num(1) Size(0x8) ]
	static void SetWindowSize(struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.SetWindowPosWithNameEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8377d40
	// Params: [ Num(3) Size(0x1C) ]
	static void SetWindowPosWithNameEx(struct FString Name, struct FVector2D pos, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetWindowPosWithName
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8377c6c
	// Params: [ Num(2) Size(0x18) ]
	static void SetWindowPosWithName(struct FString Name, struct FVector2D pos);

	// Object: Function GPTools.GPToolGUI.SetWindowPosEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8377ba0
	// Params: [ Num(2) Size(0xC) ]
	static void SetWindowPosEx(struct FVector2D pos, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetWindowPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8377b10
	// Params: [ Num(1) Size(0x8) ]
	static void SetWindowPos(struct FVector2D pos);

	// Object: Function GPTools.GPToolGUI.SetWindowFontScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8377a7c
	// Params: [ Num(1) Size(0x4) ]
	static void SetWindowFontScale(float Scale);

	// Object: Function GPTools.GPToolGUI.SetWindowFocusWithName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83779e0
	// Params: [ Num(1) Size(0x10) ]
	static void SetWindowFocusWithName(struct FString Name);

	// Object: Function GPTools.GPToolGUI.SetWindowFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83779cc
	// Params: [ Num(0) Size(0x0) ]
	static void SetWindowFocus();

	// Object: Function GPTools.GPToolGUI.SetWindowCollapsedWithNameEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83778a8
	// Params: [ Num(3) Size(0x18) ]
	static void SetWindowCollapsedWithNameEx(struct FString Name, uint8_t Collapsed, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetWindowCollapsedWithName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83777c8
	// Params: [ Num(2) Size(0x11) ]
	static void SetWindowCollapsedWithName(struct FString Name, uint8_t Collapsed);

	// Object: Function GPTools.GPToolGUI.SetWindowCollapsedEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83776e8
	// Params: [ Num(2) Size(0x8) ]
	static void SetWindowCollapsedEx(uint8_t Collapsed, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetWindowCollapsed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837764c
	// Params: [ Num(1) Size(0x1) ]
	static void SetWindowCollapsed(uint8_t Collapsed);

	// Object: Function GPTools.GPToolGUI.SetTabItemClosed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83775b0
	// Params: [ Num(1) Size(0x10) ]
	static void SetTabItemClosed(struct FString tab_or_docked_window_label);

	// Object: Function GPTools.GPToolGUI.SetScrollY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837751c
	// Params: [ Num(1) Size(0x4) ]
	static void SetScrollY(float scroll_y);

	// Object: Function GPTools.GPToolGUI.SetScrollX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8377488
	// Params: [ Num(1) Size(0x4) ]
	static void SetScrollX(float scroll_x);

	// Object: Function GPTools.GPToolGUI.SetScrollHereYEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83773f4
	// Params: [ Num(1) Size(0x4) ]
	static void SetScrollHereYEx(float center_y_ratio);

	// Object: Function GPTools.GPToolGUI.SetScrollHereY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83773e0
	// Params: [ Num(0) Size(0x0) ]
	static void SetScrollHereY();

	// Object: Function GPTools.GPToolGUI.SetScrollHereXEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837734c
	// Params: [ Num(1) Size(0x4) ]
	static void SetScrollHereXEx(float center_x_ratio);

	// Object: Function GPTools.GPToolGUI.SetScrollHereX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8377338
	// Params: [ Num(0) Size(0x0) ]
	static void SetScrollHereX();

	// Object: Function GPTools.GPToolGUI.SetScrollFromPosYEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837726c
	// Params: [ Num(2) Size(0x8) ]
	static void SetScrollFromPosYEx(float local_y, float center_y_ratio);

	// Object: Function GPTools.GPToolGUI.SetScrollFromPosY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83771d8
	// Params: [ Num(1) Size(0x4) ]
	static void SetScrollFromPosY(float local_y);

	// Object: Function GPTools.GPToolGUI.SetScrollFromPosXEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837710c
	// Params: [ Num(2) Size(0x8) ]
	static void SetScrollFromPosXEx(float local_x, float center_x_ratio);

	// Object: Function GPTools.GPToolGUI.SetScrollFromPosX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8377078
	// Params: [ Num(1) Size(0x4) ]
	static void SetScrollFromPosX(float local_x);

	// Object: Function GPTools.GPToolGUI.SetNextWindowSizeEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8376fac
	// Params: [ Num(2) Size(0xC) ]
	static void SetNextWindowSizeEx(struct FVector2D size, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetNextWindowSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8376f1c
	// Params: [ Num(1) Size(0x8) ]
	static void SetNextWindowSize(struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.SetNextWindowPosEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8376e18
	// Params: [ Num(3) Size(0x14) ]
	static void SetNextWindowPosEx(struct FVector2D pos, int32_t Cond, struct FVector2D Pivot);

	// Object: Function GPTools.GPToolGUI.SetNextWindowPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8376d88
	// Params: [ Num(1) Size(0x8) ]
	static void SetNextWindowPos(struct FVector2D pos);

	// Object: Function GPTools.GPToolGUI.SetNextWindowFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376d74
	// Params: [ Num(0) Size(0x0) ]
	static void SetNextWindowFocus();

	// Object: Function GPTools.GPToolGUI.SetNextWindowContentSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8376ce4
	// Params: [ Num(1) Size(0x8) ]
	static void SetNextWindowContentSize(struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.SetNextWindowCollapsedEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376c04
	// Params: [ Num(2) Size(0x8) ]
	static void SetNextWindowCollapsedEx(uint8_t Collapsed, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetNextWindowCollapsed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376b68
	// Params: [ Num(1) Size(0x1) ]
	static void SetNextWindowCollapsed(uint8_t Collapsed);

	// Object: Function GPTools.GPToolGUI.SetNextWindowBgAlpha
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376ad4
	// Params: [ Num(1) Size(0x4) ]
	static void SetNextWindowBgAlpha(float Alpha);

	// Object: Function GPTools.GPToolGUI.SetNextItemWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376a40
	// Params: [ Num(1) Size(0x4) ]
	static void SetNextItemWidth(float item_width);

	// Object: Function GPTools.GPToolGUI.SetNextItemOpenEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376960
	// Params: [ Num(2) Size(0x8) ]
	static void SetNextItemOpenEx(uint8_t is_open, int32_t Cond);

	// Object: Function GPTools.GPToolGUI.SetNextItemOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83768c4
	// Params: [ Num(1) Size(0x1) ]
	static void SetNextItemOpen(uint8_t is_open);

	// Object: Function GPTools.GPToolGUI.SetMouseCursor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376830
	// Params: [ Num(1) Size(0x4) ]
	static void SetMouseCursor(int32_t Type);

	// Object: Function GPTools.GPToolGUI.SetKeyboardFocusHereEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837679c
	// Params: [ Num(1) Size(0x4) ]
	static void SetKeyboardFocusHereEx(int32_t offset);

	// Object: Function GPTools.GPToolGUI.SetKeyboardFocusHere
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376788
	// Params: [ Num(0) Size(0x0) ]
	static void SetKeyboardFocusHere();

	// Object: Function GPTools.GPToolGUI.SetItemDefaultFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376774
	// Params: [ Num(0) Size(0x0) ]
	static void SetItemDefaultFocus();

	// Object: Function GPTools.GPToolGUI.SetItemAllowOverlap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376760
	// Params: [ Num(0) Size(0x0) ]
	static void SetItemAllowOverlap();

	// Object: Function GPTools.GPToolGUI.SetCursorScreenPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83766d0
	// Params: [ Num(1) Size(0x8) ]
	static void SetCursorScreenPos(struct FVector2D pos);

	// Object: Function GPTools.GPToolGUI.SetCursorPosY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837663c
	// Params: [ Num(1) Size(0x4) ]
	static void SetCursorPosY(float local_y);

	// Object: Function GPTools.GPToolGUI.SetCursorPosX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83765a8
	// Params: [ Num(1) Size(0x4) ]
	static void SetCursorPosX(float local_x);

	// Object: Function GPTools.GPToolGUI.SetCursorPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8376518
	// Params: [ Num(1) Size(0x8) ]
	static void SetCursorPos(struct FVector2D local_pos);

	// Object: Function GPTools.GPToolGUI.SetColumnWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376448
	// Params: [ Num(2) Size(0x8) ]
	static void SetColumnWidth(int32_t column_index, float Width);

	// Object: Function GPTools.GPToolGUI.SetColumnOffset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8376378
	// Params: [ Num(2) Size(0x8) ]
	static void SetColumnOffset(int32_t column_index, float offset_x);

	// Object: Function GPTools.GPToolGUI.SetClipboardText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83762dc
	// Params: [ Num(1) Size(0x10) ]
	static void SetClipboardText(struct FString Text);

	// Object: Function GPTools.GPToolGUI.Separator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83762c8
	// Params: [ Num(0) Size(0x0) ]
	static void Separator();

	// Object: Function GPTools.GPToolGUI.SelectableWithPSelectedEx
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8376158
	// Params: [ Num(5) Size(0x21) ]
	static uint8_t SelectableWithPSelectedEx(struct FString Label, uint8_t& p_selected, int32_t Flags, struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.SelectableWithPSelected
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x837605c
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t SelectableWithPSelected(struct FString Label, uint8_t& p_selected);

	// Object: Function GPTools.GPToolGUI.SelectableEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8375ef4
	// Params: [ Num(5) Size(0x21) ]
	static uint8_t SelectableEx(struct FString Label, uint8_t Selected, int32_t Flags, struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.Selectable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375e44
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t Selectable(struct FString Label);

	// Object: Function GPTools.GPToolGUI.SameLineEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375d78
	// Params: [ Num(2) Size(0x8) ]
	static void SameLineEx(float offset_from_start_x, float Spacing);

	// Object: Function GPTools.GPToolGUI.SameLine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375d64
	// Params: [ Num(0) Size(0x0) ]
	static void SameLine();

	// Object: Function GPTools.GPToolGUI.ResetMouseDragDeltaEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375cd0
	// Params: [ Num(1) Size(0x4) ]
	static void ResetMouseDragDeltaEx(int32_t Button);

	// Object: Function GPTools.GPToolGUI.ResetMouseDragDelta
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375cbc
	// Params: [ Num(0) Size(0x0) ]
	static void ResetMouseDragDelta();

	// Object: Function GPTools.GPToolGUI.RadioVButton
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8375b84
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t RadioVButton(struct FString Label, int32_t& V, int32_t v_button);

	// Object: Function GPTools.GPToolGUI.RadioButton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375a90
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t RadioButton(struct FString Label, uint8_t Active);

	// Object: Function GPTools.GPToolGUI.PushTextWrapPosEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83759fc
	// Params: [ Num(1) Size(0x4) ]
	static void PushTextWrapPosEx(float wrap_local_pos_x);

	// Object: Function GPTools.GPToolGUI.PushTextWrapPos
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83759e8
	// Params: [ Num(0) Size(0x0) ]
	static void PushTextWrapPos();

	// Object: Function GPTools.GPToolGUI.PushStyleVarWithFVector2
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x837591c
	// Params: [ Num(2) Size(0xC) ]
	static void PushStyleVarWithFVector2(int32_t Idx, struct FVector2D Val);

	// Object: Function GPTools.GPToolGUI.PushStyleVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837584c
	// Params: [ Num(2) Size(0x8) ]
	static void PushStyleVar(int32_t Idx, float Val);

	// Object: Function GPTools.GPToolGUI.PushStyleColorWithFVector4
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8375764
	// Params: [ Num(2) Size(0x20) ]
	static void PushStyleColorWithFVector4(int32_t Idx, const struct FVector4& col);

	// Object: Function GPTools.GPToolGUI.PushStyleColor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375698
	// Params: [ Num(2) Size(0x8) ]
	static void PushStyleColor(int32_t Idx, int32_t col);

	// Object: Function GPTools.GPToolGUI.PushItemWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375604
	// Params: [ Num(1) Size(0x4) ]
	static void PushItemWidth(float item_width);

	// Object: Function GPTools.GPToolGUI.PushIDWithStrIDBeginEnd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375524
	// Params: [ Num(2) Size(0x20) ]
	static void PushIDWithStrIDBeginEnd(struct FString str_id_begin, struct FString str_id_end);

	// Object: Function GPTools.GPToolGUI.PushIDWithStrID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8375488
	// Params: [ Num(1) Size(0x10) ]
	static void PushIDWithStrID(struct FString str_id);

	// Object: Function GPTools.GPToolGUI.PushIDWithIntID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83753f4
	// Params: [ Num(1) Size(0x4) ]
	static void PushIDWithIntID(int32_t int_id);

	// Object: Function GPTools.GPToolGUI.PushClipRect
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83752e8
	// Params: [ Num(3) Size(0x11) ]
	static void PushClipRect(struct FVector2D clip_rect_min, struct FVector2D clip_rect_max, uint8_t intersect_with_current_clip_rect);

	// Object: Function GPTools.GPToolGUI.PushButtonRepeat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837524c
	// Params: [ Num(1) Size(0x1) ]
	static void PushButtonRepeat(uint8_t repeat);

	// Object: Function GPTools.GPToolGUI.PushAllowKeyboardFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83751b0
	// Params: [ Num(1) Size(0x1) ]
	static void PushAllowKeyboardFocus(uint8_t allow_keyboard_focus);

	// Object: Function GPTools.GPToolGUI.ProgressBarEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83750a0
	// Params: [ Num(3) Size(0x20) ]
	static void ProgressBarEx(float Fraction, struct FVector2D size_arg, struct FString Overlay);

	// Object: Function GPTools.GPToolGUI.ProgressBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837500c
	// Params: [ Num(1) Size(0x4) ]
	static void ProgressBar(float Fraction);

	// Object: Function GPTools.GPToolGUI.PopTextWrapPos
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374ff8
	// Params: [ Num(0) Size(0x0) ]
	static void PopTextWrapPos();

	// Object: Function GPTools.GPToolGUI.PopStyleVarEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374f64
	// Params: [ Num(1) Size(0x4) ]
	static void PopStyleVarEx(int32_t Count);

	// Object: Function GPTools.GPToolGUI.PopStyleVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374f50
	// Params: [ Num(0) Size(0x0) ]
	static void PopStyleVar();

	// Object: Function GPTools.GPToolGUI.PopStyleColorEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374ebc
	// Params: [ Num(1) Size(0x4) ]
	static void PopStyleColorEx(int32_t Count);

	// Object: Function GPTools.GPToolGUI.PopStyleColor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374ea8
	// Params: [ Num(0) Size(0x0) ]
	static void PopStyleColor();

	// Object: Function GPTools.GPToolGUI.PopItemWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374e94
	// Params: [ Num(0) Size(0x0) ]
	static void PopItemWidth();

	// Object: Function GPTools.GPToolGUI.PopID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374e80
	// Params: [ Num(0) Size(0x0) ]
	static void PopID();

	// Object: Function GPTools.GPToolGUI.PopClipRect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374e6c
	// Params: [ Num(0) Size(0x0) ]
	static void PopClipRect();

	// Object: Function GPTools.GPToolGUI.PopButtonRepeat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374e58
	// Params: [ Num(0) Size(0x0) ]
	static void PopButtonRepeat();

	// Object: Function GPTools.GPToolGUI.PopAllowKeyboardFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374e44
	// Params: [ Num(0) Size(0x0) ]
	static void PopAllowKeyboardFocus();

	// Object: Function GPTools.GPToolGUI.PlotLinesEx
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8374bac
	// Params: [ Num(9) Size(0x44) ]
	static void PlotLinesEx(struct FString Label, float& Values, int32_t values_count, float scale_min, float scale_max, int32_t values_offset, struct FString overlay_text, struct FVector2D graph_size, int32_t stride);

	// Object: Function GPTools.GPToolGUI.PlotLines
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8374a80
	// Params: [ Num(3) Size(0x18) ]
	static void PlotLines(struct FString Label, float& Values, int32_t values_count);

	// Object: Function GPTools.GPToolGUI.PlotHistogramEx
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x83747e8
	// Params: [ Num(9) Size(0x44) ]
	static void PlotHistogramEx(struct FString Label, float& Values, int32_t values_count, float scale_min, float scale_max, int32_t values_offset, struct FString overlay_text, struct FVector2D graph_size, int32_t stride);

	// Object: Function GPTools.GPToolGUI.PlotHistogram
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83746bc
	// Params: [ Num(3) Size(0x18) ]
	static void PlotHistogram(struct FString Label, float& Values, int32_t values_count);

	// Object: Function GPTools.GPToolGUI.OpenPopupOnItemClickEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83745d0
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t OpenPopupOnItemClickEx(struct FString str_id, int32_t mouse_button);

	// Object: Function GPTools.GPToolGUI.OpenPopupOnItemClick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374598
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t OpenPopupOnItemClick();

	// Object: Function GPTools.GPToolGUI.OpenPopup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83744fc
	// Params: [ Num(1) Size(0x10) ]
	static void OpenPopup(struct FString str_id);

	// Object: Function GPTools.GPToolGUI.NextColumn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83744e8
	// Params: [ Num(0) Size(0x0) ]
	static void NextColumn();

	// Object: Function GPTools.GPToolGUI.NewLine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83744d4
	// Params: [ Num(0) Size(0x0) ]
	static void NewLine();

	// Object: Function GPTools.GPToolGUI.MenuItemWithPSelectedEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8374350
	// Params: [ Num(5) Size(0x23) ]
	static uint8_t MenuItemWithPSelectedEx(struct FString Label, struct FString shortcut, uint8_t& p_selected, uint8_t Enabled);

	// Object: Function GPTools.GPToolGUI.MenuItemWithPSelected
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8374210
	// Params: [ Num(4) Size(0x22) ]
	static uint8_t MenuItemWithPSelected(struct FString Label, struct FString shortcut, uint8_t& p_selected);

	// Object: Function GPTools.GPToolGUI.MenuItemEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8374094
	// Params: [ Num(5) Size(0x23) ]
	static uint8_t MenuItemEx(struct FString Label, struct FString shortcut, uint8_t Selected, uint8_t Enabled);

	// Object: Function GPTools.GPToolGUI.MenuItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373fe4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t MenuItem(struct FString Label);

	// Object: Function GPTools.GPToolGUI.LabelText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373f04
	// Params: [ Num(2) Size(0x20) ]
	static void LabelText(struct FString Label, struct FString fmt);

	// Object: Function GPTools.GPToolGUI.IsWindowHoveredEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373e5c
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsWindowHoveredEx(int32_t Flags);

	// Object: Function GPTools.GPToolGUI.IsWindowHovered
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373e24
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsWindowHovered();

	// Object: Function GPTools.GPToolGUI.IsWindowFocusedEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373d7c
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsWindowFocusedEx(int32_t Flags);

	// Object: Function GPTools.GPToolGUI.IsWindowFocused
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373d44
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsWindowFocused();

	// Object: Function GPTools.GPToolGUI.IsWindowCollapsed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373d0c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsWindowCollapsed();

	// Object: Function GPTools.GPToolGUI.IsWindowAppearing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373cd4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsWindowAppearing();

	// Object: Function GPTools.GPToolGUI.IsRectVisibleTwoPar
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8373bf8
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsRectVisibleTwoPar(struct FVector2D rect_min, struct FVector2D rect_max);

	// Object: Function GPTools.GPToolGUI.IsRectVisible
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8373b54
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsRectVisible(struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.IsPopupOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373aa4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsPopupOpen(struct FString str_id);

	// Object: Function GPTools.GPToolGUI.IsMouseReleased
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83739fc
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsMouseReleased(int32_t Button);

	// Object: Function GPTools.GPToolGUI.IsMousePosValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83739c4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMousePosValid();

	// Object: Function GPTools.GPToolGUI.IsMouseHoveringRectEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83738a4
	// Params: [ Num(4) Size(0x12) ]
	static uint8_t IsMouseHoveringRectEx(struct FVector2D r_min, struct FVector2D r_max, uint8_t clip);

	// Object: Function GPTools.GPToolGUI.IsMouseHoveringRect
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83737c8
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsMouseHoveringRect(struct FVector2D r_min, struct FVector2D r_max);

	// Object: Function GPTools.GPToolGUI.IsMouseDraggingEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83736e4
	// Params: [ Num(3) Size(0x9) ]
	static uint8_t IsMouseDraggingEx(int32_t Button, float lock_threshold);

	// Object: Function GPTools.GPToolGUI.IsMouseDragging
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83736ac
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMouseDragging();

	// Object: Function GPTools.GPToolGUI.IsMouseDown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373604
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsMouseDown(int32_t Button);

	// Object: Function GPTools.GPToolGUI.IsMouseDoubleClicked
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837355c
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsMouseDoubleClicked(int32_t Button);

	// Object: Function GPTools.GPToolGUI.IsMouseClickedEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373474
	// Params: [ Num(3) Size(0x6) ]
	static uint8_t IsMouseClickedEx(int32_t Button, uint8_t repeat);

	// Object: Function GPTools.GPToolGUI.IsMouseClicked
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83733cc
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsMouseClicked(int32_t Button);

	// Object: Function GPTools.GPToolGUI.IsKeyReleased
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373324
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsKeyReleased(int32_t user_key_index);

	// Object: Function GPTools.GPToolGUI.IsKeyPressedEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837323c
	// Params: [ Num(3) Size(0x6) ]
	static uint8_t IsKeyPressedEx(int32_t user_key_index, uint8_t repeat);

	// Object: Function GPTools.GPToolGUI.IsKeyPressed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8373194
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsKeyPressed(int32_t user_key_index);

	// Object: Function GPTools.GPToolGUI.IsKeyDown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83730ec
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsKeyDown(int32_t user_key_index);

	// Object: Function GPTools.GPToolGUI.IsItemVisible
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83730b4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemVisible();

	// Object: Function GPTools.GPToolGUI.IsItemToggledOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837307c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemToggledOpen();

	// Object: Function GPTools.GPToolGUI.IsItemHoveredEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372fd4
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsItemHoveredEx(int32_t Flags);

	// Object: Function GPTools.GPToolGUI.IsItemHovered
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372f9c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemHovered();

	// Object: Function GPTools.GPToolGUI.IsItemFocused
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372f64
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemFocused();

	// Object: Function GPTools.GPToolGUI.IsItemEdited
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372f2c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemEdited();

	// Object: Function GPTools.GPToolGUI.IsItemDeactivatedAfterEdit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372ef4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemDeactivatedAfterEdit();

	// Object: Function GPTools.GPToolGUI.IsItemDeactivated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372ebc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemDeactivated();

	// Object: Function GPTools.GPToolGUI.IsItemClickedEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372e14
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsItemClickedEx(int32_t mouse_button);

	// Object: Function GPTools.GPToolGUI.IsItemClicked
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372ddc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemClicked();

	// Object: Function GPTools.GPToolGUI.IsItemActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372da4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemActive();

	// Object: Function GPTools.GPToolGUI.IsItemActivated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372d6c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsItemActivated();

	// Object: Function GPTools.GPToolGUI.IsAnyMouseDown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372d34
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsAnyMouseDown();

	// Object: Function GPTools.GPToolGUI.IsAnyItemHovered
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372cfc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsAnyItemHovered();

	// Object: Function GPTools.GPToolGUI.IsAnyItemFocused
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372cc4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsAnyItemFocused();

	// Object: Function GPTools.GPToolGUI.IsAnyItemActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8372c8c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsAnyItemActive();

	// Object: Function GPTools.GPToolGUI.InvisibleButton
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8372ba4
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t InvisibleButton(struct FString str_id, struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.InputVector3
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8372aac
	// Params: [ Num(3) Size(0x1D) ]
	static uint8_t InputVector3(struct FString Label, struct FVector& InOutVector);

	// Object: Function GPTools.GPToolGUI.InputTextWithHint
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8372964
	// Params: [ Num(4) Size(0x31) ]
	static uint8_t InputTextWithHint(struct FString Label, struct FString Hint, struct FString& InOutResult);

	// Object: Function GPTools.GPToolGUI.InputTextMultilineEx
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x83727ec
	// Params: [ Num(5) Size(0x2D) ]
	static uint8_t InputTextMultilineEx(struct FString Label, struct FString& InOutResult, struct FVector2D size, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputTextMultiline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83726e8
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t InputTextMultiline(struct FString Label, struct FString& InOutResult);

	// Object: Function GPTools.GPToolGUI.InputText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83725e4
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t InputText(struct FString Label, struct FString& InOutResult);

	// Object: Function GPTools.GPToolGUI.InputIntEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8372438
	// Params: [ Num(6) Size(0x21) ]
	static uint8_t InputIntEx(struct FString Label, int32_t& V, int32_t Step, int32_t step_fast, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputInt4Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x837220c
	// Params: [ Num(7) Size(0x25) ]
	static uint8_t InputInt4Ex(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3, int32_t& v4, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputInt4
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8372024
	// Params: [ Num(6) Size(0x21) ]
	static uint8_t InputInt4(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3, int32_t& v4);

	// Object: Function GPTools.GPToolGUI.InputInt3Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8371e4c
	// Params: [ Num(6) Size(0x21) ]
	static uint8_t InputInt3Ex(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputInt3
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8371cb0
	// Params: [ Num(5) Size(0x1D) ]
	static uint8_t InputInt3(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3);

	// Object: Function GPTools.GPToolGUI.InputInt2Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8371b24
	// Params: [ Num(5) Size(0x1D) ]
	static uint8_t InputInt2Ex(struct FString Label, int32_t& v1, int32_t& v2, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputInt2
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83719dc
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t InputInt2(struct FString Label, int32_t& v1, int32_t& v2);

	// Object: Function GPTools.GPToolGUI.InputInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83718e0
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t InputInt(struct FString Label, int32_t& V);

	// Object: Function GPTools.GPToolGUI.InputFloatEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x83716f0
	// Params: [ Num(7) Size(0x35) ]
	static uint8_t InputFloatEx(struct FString Label, float& V, float Step, float step_fast, struct FString Format, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputFloat4Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8371480
	// Params: [ Num(8) Size(0x35) ]
	static uint8_t InputFloat4Ex(struct FString Label, float& v1, float& v2, float& v3, float& v4, struct FString Format, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputFloat4
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8371298
	// Params: [ Num(6) Size(0x21) ]
	static uint8_t InputFloat4(struct FString Label, float& v1, float& v2, float& v3, float& v4);

	// Object: Function GPTools.GPToolGUI.InputFloat3Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x837107c
	// Params: [ Num(7) Size(0x35) ]
	static uint8_t InputFloat3Ex(struct FString Label, float& v1, float& v2, float& v3, struct FString Format, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputFloat3
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8370ee0
	// Params: [ Num(5) Size(0x1D) ]
	static uint8_t InputFloat3(struct FString Label, float& v1, float& v2, float& v3);

	// Object: Function GPTools.GPToolGUI.InputFloat2Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8370d10
	// Params: [ Num(6) Size(0x2D) ]
	static uint8_t InputFloat2Ex(struct FString Label, float& v1, float& v2, struct FString Format, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.InputFloat2
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8370bc8
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t InputFloat2(struct FString Label, float& v1, float& v2);

	// Object: Function GPTools.GPToolGUI.InputFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8370acc
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t InputFloat(struct FString Label, float& V);

	// Object: Function GPTools.GPToolGUI.IndentEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370a38
	// Params: [ Num(1) Size(0x4) ]
	static void IndentEx(float indent_w);

	// Object: Function GPTools.GPToolGUI.Indent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370a24
	// Params: [ Num(0) Size(0x0) ]
	static void Indent();

	// Object: Function GPTools.GPToolGUI.GetWindowWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83709f0
	// Params: [ Num(1) Size(0x4) ]
	static float GetWindowWidth();

	// Object: Function GPTools.GPToolGUI.GetWindowSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83709bc
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetWindowSize();

	// Object: Function GPTools.GPToolGUI.GetWindowPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8370988
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetWindowPos();

	// Object: Function GPTools.GPToolGUI.GetWindowHeight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370954
	// Params: [ Num(1) Size(0x4) ]
	static float GetWindowHeight();

	// Object: Function GPTools.GPToolGUI.GetWindowContentRegionWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370920
	// Params: [ Num(1) Size(0x4) ]
	static float GetWindowContentRegionWidth();

	// Object: Function GPTools.GPToolGUI.GetWindowContentRegionMin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83708ec
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetWindowContentRegionMin();

	// Object: Function GPTools.GPToolGUI.GetWindowContentRegionMax
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83708b8
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetWindowContentRegionMax();

	// Object: Function GPTools.GPToolGUI.GetTreeNodeToLabelSpacing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370884
	// Params: [ Num(1) Size(0x4) ]
	static float GetTreeNodeToLabelSpacing();

	// Object: Function GPTools.GPToolGUI.GetTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370850
	// Params: [ Num(1) Size(0x4) ]
	static float GetTime();

	// Object: Function GPTools.GPToolGUI.GetTextLineHeightWithSpacing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837081c
	// Params: [ Num(1) Size(0x4) ]
	static float GetTextLineHeightWithSpacing();

	// Object: Function GPTools.GPToolGUI.GetTextLineHeight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83707e8
	// Params: [ Num(1) Size(0x4) ]
	static float GetTextLineHeight();

	// Object: Function GPTools.GPToolGUI.GetStyleColorVec4
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8370740
	// Params: [ Num(2) Size(0x20) ]
	static struct FVector4 GetStyleColorVec4(int32_t Idx);

	// Object: Function GPTools.GPToolGUI.GetStyleColorName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370668
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetStyleColorName(int32_t Idx);

	// Object: Function GPTools.GPToolGUI.GetScrollY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370634
	// Params: [ Num(1) Size(0x4) ]
	static float GetScrollY();

	// Object: Function GPTools.GPToolGUI.GetScrollX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370600
	// Params: [ Num(1) Size(0x4) ]
	static float GetScrollX();

	// Object: Function GPTools.GPToolGUI.GetScrollMaxY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83705cc
	// Params: [ Num(1) Size(0x4) ]
	static float GetScrollMaxY();

	// Object: Function GPTools.GPToolGUI.GetScrollMaxX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8370598
	// Params: [ Num(1) Size(0x4) ]
	static float GetScrollMaxX();

	// Object: Function GPTools.GPToolGUI.GetMousePosOnOpeningCurrentPopup
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8370564
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetMousePosOnOpeningCurrentPopup();

	// Object: Function GPTools.GPToolGUI.GetMousePos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8370530
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetMousePos();

	// Object: Function GPTools.GPToolGUI.GetMouseDragDeltaEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8370450
	// Params: [ Num(3) Size(0x10) ]
	static struct FVector2D GetMouseDragDeltaEx(int32_t Button, float lock_threshold);

	// Object: Function GPTools.GPToolGUI.GetMouseDragDelta
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x837041c
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetMouseDragDelta();

	// Object: Function GPTools.GPToolGUI.GetMouseCursor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83703e8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMouseCursor();

	// Object: Function GPTools.GPToolGUI.GetKeyPressedAmount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83702d0
	// Params: [ Num(4) Size(0x10) ]
	static int32_t GetKeyPressedAmount(int32_t key_index, float repeat_delay, float Rate);

	// Object: Function GPTools.GPToolGUI.GetKeyIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x837022c
	// Params: [ Num(2) Size(0x8) ]
	static int32_t GetKeyIndex(int32_t imgui_key);

	// Object: Function GPTools.GPToolGUI.GetItemRectSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83701f8
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetItemRectSize();

	// Object: Function GPTools.GPToolGUI.GetItemRectMin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x83701c4
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetItemRectMin();

	// Object: Function GPTools.GPToolGUI.GetItemRectMax
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8370190
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetItemRectMax();

	// Object: Function GPTools.GPToolGUI.GetIDWithStrIDBeginEnd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83700a0
	// Params: [ Num(3) Size(0x24) ]
	static int32_t GetIDWithStrIDBeginEnd(struct FString str_id_begin, struct FString str_id_end);

	// Object: Function GPTools.GPToolGUI.GetIDWithStrID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fff4
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetIDWithStrID(struct FString str_id);

	// Object: Function GPTools.GPToolGUI.GetFrameHeightWithSpacing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836ffc0
	// Params: [ Num(1) Size(0x4) ]
	static float GetFrameHeightWithSpacing();

	// Object: Function GPTools.GPToolGUI.GetFrameHeight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836ff8c
	// Params: [ Num(1) Size(0x4) ]
	static float GetFrameHeight();

	// Object: Function GPTools.GPToolGUI.GetFrameCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836ff58
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetFrameCount();

	// Object: Function GPTools.GPToolGUI.GetFontTexUvWhitePixel
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836ff24
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetFontTexUvWhitePixel();

	// Object: Function GPTools.GPToolGUI.GetFontSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fef0
	// Params: [ Num(1) Size(0x4) ]
	static float GetFontSize();

	// Object: Function GPTools.GPToolGUI.GetCursorStartPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836febc
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetCursorStartPos();

	// Object: Function GPTools.GPToolGUI.GetCursorScreenPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836fe88
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetCursorScreenPos();

	// Object: Function GPTools.GPToolGUI.GetCursorPosY
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fe54
	// Params: [ Num(1) Size(0x4) ]
	static float GetCursorPosY();

	// Object: Function GPTools.GPToolGUI.GetCursorPosX
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fe20
	// Params: [ Num(1) Size(0x4) ]
	static float GetCursorPosX();

	// Object: Function GPTools.GPToolGUI.GetCursorPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836fdec
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetCursorPos();

	// Object: Function GPTools.GPToolGUI.GetContentRegionMax
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836fdb8
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetContentRegionMax();

	// Object: Function GPTools.GPToolGUI.GetContentRegionAvail
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836fd84
	// Params: [ Num(1) Size(0x8) ]
	static struct FVector2D GetContentRegionAvail();

	// Object: Function GPTools.GPToolGUI.GetColumnWidthEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fce0
	// Params: [ Num(2) Size(0x8) ]
	static float GetColumnWidthEx(int32_t column_index);

	// Object: Function GPTools.GPToolGUI.GetColumnWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fcac
	// Params: [ Num(1) Size(0x4) ]
	static float GetColumnWidth();

	// Object: Function GPTools.GPToolGUI.GetColumnsCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fc78
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetColumnsCount();

	// Object: Function GPTools.GPToolGUI.GetColumnOffsetEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fbd4
	// Params: [ Num(2) Size(0x8) ]
	static float GetColumnOffsetEx(int32_t column_index);

	// Object: Function GPTools.GPToolGUI.GetColumnOffset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fba0
	// Params: [ Num(1) Size(0x4) ]
	static float GetColumnOffset();

	// Object: Function GPTools.GPToolGUI.GetColumnIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fb6c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetColumnIndex();

	// Object: Function GPTools.GPToolGUI.GetColorU32WithFVector4
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x836fab0
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetColorU32WithFVector4(const struct FVector4& col);

	// Object: Function GPTools.GPToolGUI.GetColorU32WithCol
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836fa0c
	// Params: [ Num(2) Size(0x8) ]
	static int32_t GetColorU32WithCol(int32_t col);

	// Object: Function GPTools.GPToolGUI.GetColorU32Ex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f92c
	// Params: [ Num(3) Size(0xC) ]
	static int32_t GetColorU32Ex(int32_t Idx, float alpha_mul);

	// Object: Function GPTools.GPToolGUI.GetColorU32
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f888
	// Params: [ Num(2) Size(0x8) ]
	static int32_t GetColorU32(int32_t Idx);

	// Object: Function GPTools.GPToolGUI.GetClipboardText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x836f7f0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetClipboardText();

	// Object: Function GPTools.GPToolGUI.EndTabItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f7dc
	// Params: [ Num(0) Size(0x0) ]
	static void EndTabItem();

	// Object: Function GPTools.GPToolGUI.EndTabBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f7c8
	// Params: [ Num(0) Size(0x0) ]
	static void EndTabBar();

	// Object: Function GPTools.GPToolGUI.EndPopup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f7b4
	// Params: [ Num(0) Size(0x0) ]
	static void EndPopup();

	// Object: Function GPTools.GPToolGUI.EndMenuBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f7a0
	// Params: [ Num(0) Size(0x0) ]
	static void EndMenuBar();

	// Object: Function GPTools.GPToolGUI.EndMenu
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f78c
	// Params: [ Num(0) Size(0x0) ]
	static void EndMenu();

	// Object: Function GPTools.GPToolGUI.EndMainMenuBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f778
	// Params: [ Num(0) Size(0x0) ]
	static void EndMainMenuBar();

	// Object: Function GPTools.GPToolGUI.EndGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f764
	// Params: [ Num(0) Size(0x0) ]
	static void EndGroup();

	// Object: Function GPTools.GPToolGUI.EndCombo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f750
	// Params: [ Num(0) Size(0x0) ]
	static void EndCombo();

	// Object: Function GPTools.GPToolGUI.EndChildFrame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f73c
	// Params: [ Num(0) Size(0x0) ]
	static void EndChildFrame();

	// Object: Function GPTools.GPToolGUI.EndChild
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f728
	// Params: [ Num(0) Size(0x0) ]
	static void EndChild();

	// Object: Function GPTools.GPToolGUI.End
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836f714
	// Params: [ Num(0) Size(0x0) ]
	static void End();

	// Object: Function GPTools.GPToolGUI.Dummy
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836f684
	// Params: [ Num(1) Size(0x8) ]
	static void Dummy(struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.DragIntRange2Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836f3fc
	// Params: [ Num(9) Size(0x49) ]
	static uint8_t DragIntRange2Ex(struct FString Label, int32_t& v_current_min, int32_t& v_current_max, float v_speed, int32_t v_min, int32_t v_max, struct FString Format, struct FString format_max);

	// Object: Function GPTools.GPToolGUI.DragIntRange2
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836f2b4
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t DragIntRange2(struct FString Label, int32_t& v_current_min, int32_t& v_current_max);

	// Object: Function GPTools.GPToolGUI.DragIntEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836f0c4
	// Params: [ Num(7) Size(0x31) ]
	static uint8_t DragIntEx(struct FString Label, int32_t& V, float v_speed, int32_t v_min, int32_t v_max, struct FString Format);

	// Object: Function GPTools.GPToolGUI.DragInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836efc8
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t DragInt(struct FString Label, int32_t& V);

	// Object: Function GPTools.GPToolGUI.DragFloatRange2Ex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836ed04
	// Params: [ Num(10) Size(0x4D) ]
	static uint8_t DragFloatRange2Ex(struct FString Label, float& v_current_min, float& v_current_max, float v_speed, float v_min, float v_max, struct FString Format, struct FString format_max, float Power);

	// Object: Function GPTools.GPToolGUI.DragFloatRange2
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836ebbc
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t DragFloatRange2(struct FString Label, float& v_current_min, float& v_current_max);

	// Object: Function GPTools.GPToolGUI.DragFloatEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836e990
	// Params: [ Num(8) Size(0x35) ]
	static uint8_t DragFloatEx(struct FString Label, float& V, float v_speed, float v_min, float v_max, struct FString Format, float Power);

	// Object: Function GPTools.GPToolGUI.DragFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836e894
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t DragFloat(struct FString Label, float& V);

	// Object: Function GPTools.GPToolGUI.ComboEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836e718
	// Params: [ Num(5) Size(0x2D) ]
	static uint8_t ComboEx(struct FString Label, int32_t& current_item, struct FString items_separated_by_zeros, int32_t popup_max_height_in_items);

	// Object: Function GPTools.GPToolGUI.Combo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836e5d8
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t Combo(struct FString Label, int32_t& current_item, struct FString items_separated_by_zeros);

	// Object: Function GPTools.GPToolGUI.ColumnsEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836e4bc
	// Params: [ Num(3) Size(0x19) ]
	static void ColumnsEx(int32_t Count, struct FString ID, uint8_t Border);

	// Object: Function GPTools.GPToolGUI.Columns
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836e428
	// Params: [ Num(1) Size(0x4) ]
	static void Columns(int32_t Count);

	// Object: Function GPTools.GPToolGUI.ColorConvertU32ToFloat4
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836e380
	// Params: [ Num(2) Size(0x20) ]
	static struct FVector4 ColorConvertU32ToFloat4(int32_t In);

	// Object: Function GPTools.GPToolGUI.ColorConvertRGBtoHSV
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836e18c
	// Params: [ Num(6) Size(0x18) ]
	static void ColorConvertRGBtoHSV(float R, float G, float B, float& out_h, float& out_s, float& out_v);

	// Object: Function GPTools.GPToolGUI.ColorConvertHSVtoRGB
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836df98
	// Params: [ Num(6) Size(0x18) ]
	static void ColorConvertHSVtoRGB(float H, float S, float V, float& out_r, float& out_g, float& out_b);

	// Object: Function GPTools.GPToolGUI.ColorConvertFloat4ToU32
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x836dedc
	// Params: [ Num(2) Size(0x14) ]
	static int32_t ColorConvertFloat4ToU32(const struct FVector4& In);

	// Object: Function GPTools.GPToolGUI.CollapsingHeaderEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836ddf0
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t CollapsingHeaderEx(struct FString Label, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.CollapsingHeader
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836dd40
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t CollapsingHeader(struct FString Label);

	// Object: Function GPTools.GPToolGUI.CloseCurrentPopup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836dd2c
	// Params: [ Num(0) Size(0x0) ]
	static void CloseCurrentPopup();

	// Object: Function GPTools.GPToolGUI.Checkbox
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836dc30
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t Checkbox(struct FString Label, uint8_t& V);

	// Object: Function GPTools.GPToolGUI.CaptureMouseFromAppEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836db94
	// Params: [ Num(1) Size(0x1) ]
	static void CaptureMouseFromAppEx(uint8_t want_capture_mouse_value);

	// Object: Function GPTools.GPToolGUI.CaptureMouseFromApp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836db80
	// Params: [ Num(0) Size(0x0) ]
	static void CaptureMouseFromApp();

	// Object: Function GPTools.GPToolGUI.CaptureKeyboardFromAppEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836dae4
	// Params: [ Num(1) Size(0x1) ]
	static void CaptureKeyboardFromAppEx(uint8_t want_capture_keyboard_value);

	// Object: Function GPTools.GPToolGUI.CaptureKeyboardFromApp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836dad0
	// Params: [ Num(0) Size(0x0) ]
	static void CaptureKeyboardFromApp();

	// Object: Function GPTools.GPToolGUI.CalcTextSizeEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836d960
	// Params: [ Num(5) Size(0x30) ]
	static struct FVector2D CalcTextSizeEx(struct FString Text, struct FString text_end, uint8_t hide_text_after_double_hash, float wrap_width);

	// Object: Function GPTools.GPToolGUI.CalcTextSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836d8b4
	// Params: [ Num(2) Size(0x18) ]
	static struct FVector2D CalcTextSize(struct FString Text);

	// Object: Function GPTools.GPToolGUI.CalcListClipping
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836d744
	// Params: [ Num(4) Size(0x10) ]
	static void CalcListClipping(int32_t items_count, float items_height, int32_t& out_items_display_start, int32_t& out_items_display_end);

	// Object: Function GPTools.GPToolGUI.CalcItemWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836d710
	// Params: [ Num(1) Size(0x4) ]
	static float CalcItemWidth();

	// Object: Function GPTools.GPToolGUI.ButtonEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836d5ec
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t ButtonEx(struct FString Label, int32_t Width, int32_t Height);

	// Object: Function GPTools.GPToolGUI.Button
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836d53c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t Button(struct FString Label);

	// Object: Function GPTools.GPToolGUI.BulletText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836d4a0
	// Params: [ Num(1) Size(0x10) ]
	static void BulletText(struct FString fmt);

	// Object: Function GPTools.GPToolGUI.Bullet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836d48c
	// Params: [ Num(0) Size(0x0) ]
	static void Bullet();

	// Object: Function GPTools.GPToolGUI.BeginTabItemEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836d354
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t BeginTabItemEx(struct FString Label, uint8_t& p_open, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.BeginTabItem
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836d258
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t BeginTabItem(struct FString Label, uint8_t& p_open);

	// Object: Function GPTools.GPToolGUI.BeginTabBarEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836d16c
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t BeginTabBarEx(struct FString str_id, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.BeginTabBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836d0bc
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t BeginTabBar(struct FString str_id);

	// Object: Function GPTools.GPToolGUI.BeginPopupModalEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836cf84
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t BeginPopupModalEx(struct FString Name, uint8_t& p_open, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.BeginPopupModal
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x836ce88
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t BeginPopupModal(struct FString Name, uint8_t& p_open);

	// Object: Function GPTools.GPToolGUI.BeginPopupEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836cd9c
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t BeginPopupEx(struct FString str_id, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.BeginPopupContextWindowEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836cc70
	// Params: [ Num(4) Size(0x16) ]
	static uint8_t BeginPopupContextWindowEx(struct FString str_id, int32_t mouse_button, uint8_t also_over_items);

	// Object: Function GPTools.GPToolGUI.BeginPopupContextWindow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836cc38
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t BeginPopupContextWindow();

	// Object: Function GPTools.GPToolGUI.BeginPopupContextVoidEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836cb4c
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t BeginPopupContextVoidEx(struct FString str_id, int32_t mouse_button);

	// Object: Function GPTools.GPToolGUI.BeginPopupContextVoid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836cb14
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t BeginPopupContextVoid();

	// Object: Function GPTools.GPToolGUI.BeginPopupContextItemEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836ca28
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t BeginPopupContextItemEx(struct FString str_id, int32_t mouse_button);

	// Object: Function GPTools.GPToolGUI.BeginPopupContextItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c9f0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t BeginPopupContextItem();

	// Object: Function GPTools.GPToolGUI.BeginPopup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c940
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t BeginPopup(struct FString str_id);

	// Object: Function GPTools.GPToolGUI.BeginMenuEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c84c
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t BeginMenuEx(struct FString Label, uint8_t Enabled);

	// Object: Function GPTools.GPToolGUI.BeginMenuBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c814
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t BeginMenuBar();

	// Object: Function GPTools.GPToolGUI.BeginMenu
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c764
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t BeginMenu(struct FString Label);

	// Object: Function GPTools.GPToolGUI.BeginMainMenuBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c72c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t BeginMainMenuBar();

	// Object: Function GPTools.GPToolGUI.BeginGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c718
	// Params: [ Num(0) Size(0x0) ]
	static void BeginGroup();

	// Object: Function GPTools.GPToolGUI.BeginComboEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c5e8
	// Params: [ Num(4) Size(0x25) ]
	static uint8_t BeginComboEx(struct FString Label, struct FString preview_value, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.BeginCombo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836c4f4
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t BeginCombo(struct FString Label, struct FString preview_value);

	// Object: Function GPTools.GPToolGUI.BeginChildFrameEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836c3d8
	// Params: [ Num(4) Size(0x11) ]
	static uint8_t BeginChildFrameEx(int32_t ID, struct FVector2D size, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.BeginChildFrame
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836c2f8
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t BeginChildFrame(int32_t ID, struct FVector2D size);

	// Object: Function GPTools.GPToolGUI.BeginChildEx
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836c190
	// Params: [ Num(5) Size(0x21) ]
	static uint8_t BeginChildEx(struct FString Name, struct FVector2D SizeArg, uint8_t Border, int32_t Flags);

	// Object: Function GPTools.GPToolGUI.BeginChild
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x836c0a8
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t BeginChild(struct FString Name, struct FVector2D SizeArg);

	// Object: Function GPTools.GPToolGUI.Begin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836bff8
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t Begin(struct FString Name);

	// Object: Function GPTools.GPToolGUI.ArrowButton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836bf0c
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t ArrowButton(struct FString str_id, int32_t Dir);

	// Object: Function GPTools.GPToolGUI.AlignTextToFramePadding
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x836bef8
	// Params: [ Num(0) Size(0x0) ]
	static void AlignTextToFramePadding();
	DEFINE_UE_CLASS_HELPERS(UGPToolGUI, "GPToolGUI")

};

// Object: Class GPTools.GPToolManager
// Size: 0x360 (Inherited: 0x30)
struct UGPToolManager : UGameInstanceSubsystem
{
	struct TArray<struct UGPToolBase*> Tools; // 0x30(0x10)
	struct UGPToolBase* ScriptToolBaseClass; // 0x40(0x8)
	struct UGameViewportClient* GameViewport; // 0x48(0x8)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	struct UGPToolBase* SelectedTool; // 0x60(0x8)
	uint8_t Pad_0x68[0x2F8]; // 0x68(0x2F8)


	// Object: Function GPTools.GPToolManager.Show
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x837b324
	// Params: [ Num(0) Size(0x0) ]
	void Show();

	// Object: Function GPTools.GPToolManager.RemoveTool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x837b278
	// Params: [ Num(1) Size(0x10) ]
	void RemoveTool(struct FString Name);

	// Object: Function GPTools.GPToolManager.Hide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x837b264
	// Params: [ Num(0) Size(0x0) ]
	void Hide();

	// Object: Function GPTools.GPToolManager.HasTool
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x837b1ac
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasTool(struct FString Name);

	// Object: Function GPTools.GPToolManager.HasLocalPlayer
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x837b104
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasLocalPlayer(struct UObject* WorldContextObject);

	// Object: Function GPTools.GPToolManager.GetLocalPlayerController
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x837b060
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerController* GetLocalPlayerController(struct UObject* WorldContextObject);

	// Object: Function GPTools.GPToolManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf772ee8
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPToolManager* Get(struct UObject* WorldContextObject);

	// Object: Function GPTools.GPToolManager.ExecConsoleCommand
	// Flags: [Final|Native|Public]
	// Offset: 0x837af2c
	// Params: [ Num(2) Size(0x11) ]
	void ExecConsoleCommand(struct FString Cmd, EGPTConsoleCommandScope Scope);

	// Object: Function GPTools.GPToolManager.CSRpc
	// Flags: [Final|Native|Public]
	// Offset: 0x837ae44
	// Params: [ Num(2) Size(0x18) ]
	void CSRpc(struct AActor* TargetActor, struct FString FuncName);

	// Object: Function GPTools.GPToolManager.AddToolNative
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x837ad20
	// Params: [ Num(3) Size(0x1C) ]
	void AddToolNative(struct FString Name, struct UGPToolBase* ToolClass, int32_t Permission);

	// Object: Function GPTools.GPToolManager.AddTool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf773220
	// Params: [ Num(3) Size(0x24) ]
	void AddTool(struct FString Name, struct FString ToolScriptPath, int32_t Permission);
	DEFINE_UE_CLASS_HELPERS(UGPToolManager, "GPToolManager")

};

// Object: Class GPTools.GPTRPCComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UGPTRPCComponent : UActorComponent
{

	// Object: Function GPTools.GPTRPCComponent.ServerExecConsoleCommand
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x837b60c
	// Params: [ Num(1) Size(0x10) ]
	void ServerExecConsoleCommand(struct FString Cmd);

	// Object: Function GPTools.GPTRPCComponent.ServerCall
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x837b4e0
	// Params: [ Num(3) Size(0x20) ]
	void ServerCall(struct AActor* Target, struct FName FuncName, struct FString ArgJson);
	DEFINE_UE_CLASS_HELPERS(UGPTRPCComponent, "GPTRPCComponent")

};

// Object: Class GPTools.GPToolSettings
// Size: 0x60 (Inherited: 0x38)
struct UGPToolSettings : UDeveloperSettings
{
	struct TArray<struct UGPToolBase*> BuiltinToolList; // 0x38(0x10)
	struct UGPToolBase* ScriptToolBaseClass; // 0x48(0x8)
	struct UActorComponent* SignificanceBaseClass; // 0x50(0x8)
	struct UActorComponent* SignificanceDefaultClass; // 0x58(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPToolSettings, "GPToolSettings")

};

// Object: Class GPTools.GPTProfilerContext
// Size: 0x68 (Inherited: 0x28)
struct UGPTProfilerContext : UObject
{
	uint8_t Pad_0x28[0x40]; // 0x28(0x40)
	DEFINE_UE_CLASS_HELPERS(UGPTProfilerContext, "GPTProfilerContext")

};

// Object: Class GPTools.GPTProfiler
// Size: 0x50 (Inherited: 0x50)
struct UGPTProfiler : UGPToolBase
{	DEFINE_UE_CLASS_HELPERS(UGPTProfiler, "GPTProfiler")

};

} // namespace SDK
