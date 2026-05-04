#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPResource.hpp"
#include "GameCore.hpp"
#include "InputCore.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: GPUserInterfaceCore
// Enums: 30
// Structs: 20
// Classes: 24

enum class EFocusCause : uint8_t;
enum class EGPInputModeType : uint8_t;
enum class EGPInputType : uint8_t;
enum class ENavigationGenesis : uint8_t;
enum class EUINavigation : uint8_t;
enum class EUMGSequencePlayMode : uint8_t;
struct FKey;
struct FMargin;
struct FNavigationEvent;
struct FPointerEvent;
struct UCurveFloat;
struct UUMGSequencePlayer;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct FGPAnalogCursorInputMappingRow;
struct FGPAnalogCursorAccelerationRow;
struct FGPUINavigationGroupStackLogic;
struct FNavGroupStackData;
struct FGPUINavigationSortedWidgetList;
struct FGPUINavigationWidgetData;
struct FGPUINavHittestFallbackConfig;
struct FGPUINavFocusProxy;
struct FGPUINavSelectorInfo;
struct FGPUINavScrollInfo;
struct FGPUINavGroupTransParameters;
struct FGPUINavigationFocusResult;
struct FGPUINavigationSimulateMouseKeyConfigRowHD;
struct FGPUINavigationSimulateMouseKeyInfo;
struct FGPUINavigationDynamicConfigRowHD;
struct FGPUINavigationKeyMapping;
struct FGPUINavigationConfigRowHD;
struct FScreenDeviceScore;
struct FScreenDetectionWeights;
struct FSimpleScreenParams;
struct ULuaUIBaseView;
struct IDFNavigationSelectorStyleInterface;
struct UDFNavigationSelectorStyle;
struct UDFNavigationSelectorClipping;
struct UDFNavigationSelectorBase;
struct UGPAnalogCursorAccelerationManager;
struct UGPAnalogCursorInputMappingManager;
struct UGPUINavigationDebugger;
struct UGPUINavigationGlobalConfig;
struct UGPUINavigationGroup;
struct UGPUINavigationManager;
struct IGPUINavigationProxyInterface;
struct IGPUINavigationScrollInterface;
struct UGPUINavigationStrategyBase;
struct UGPUINavigationStrategy_Closest;
struct UGPUINavigationStrategy_Grid1D;
struct UGPUINavigationStrategy_Gunsmith;
struct UGPUINavigationStrategy_Hittest;
struct UGPUINavigationStrategy_LuaExtension;
struct UGPUINavigationUtils;
struct IGPUIScreenAdaptInterface;
struct UGPUIScreenAdaptProvider;
struct ULuaDragDropOperation;
struct UUGPUINavigationStrategy_Cursor;

// Object: Enum GPUserInterfaceCore.EUIState
enum class EUIState : uint8_t
{
	Init = 0,
	Open = 1,
	ShowBegin = 2,
	Show = 3,
	HideBegin = 4,
	Hide = 5,
	CloseBegin = 6,
	Close = 7,
	Mute = 8,
	Release = 9,
	EUIState_MAX = 10
};

// Object: Enum GPUserInterfaceCore.EGPUIFocusEffectType
enum class EGPUIFocusEffectType : uint8_t
{
	None = 0,
	SeparatedFocusEffect = 1,
	ShareHoverEffect = 2,
	EGPUIFocusEffectType_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EViewDragMode
enum class EViewDragMode : uint8_t
{
	Normal = 0,
	ValidateAngle = 1,
	InverseValidateAngle = 2,
	EViewDragMode_MAX = 3
};

// Object: Enum GPUserInterfaceCore.ETriggerDragLogic
enum class ETriggerDragLogic : uint8_t
{
	DistanceCheck = 0,
	DragPointSample = 1,
	ETriggerDragLogic_MAX = 2
};

// Object: Enum GPUserInterfaceCore.ELuaUIBaseViewWantedInputMode
enum class ELuaUIBaseViewWantedInputMode : uint8_t
{
	None = 0,
	GameOnly = 1,
	UIOnly = 2,
	GameAndUI = 3,
	ELuaUIBaseViewWantedInputMode_MAX = 4
};

// Object: Enum GPUserInterfaceCore.EGPNavScrollDestination
enum class EGPNavScrollDestination : uint8_t
{
	None = 0,
	IntoView = 1,
	TopOrLeft = 2,
	Center = 3,
	EGPNavScrollDestination_MAX = 4
};

// Object: Enum GPUserInterfaceCore.EGPUINavigationGroupType
enum class EGPUINavigationGroupType : uint8_t
{
	None = 0,
	Stack = 1,
	DefaultFocus = 2,
	StackAndDefaultFocus = 3,
	EGPUINavigationGroupType_MAX = 4
};

// Object: Enum GPUserInterfaceCore.EGPUIAnalogStick
enum class EGPUIAnalogStick : uint8_t
{
	Left = 0,
	Right = 1,
	Max = 2
};

// Object: Enum GPUserInterfaceCore.EGPUINavScrollingCondition
enum class EGPUINavScrollingCondition : uint8_t
{
	None = 0,
	Default = 1,
	EGPUINavScrollingCondition_MAX = 2
};

// Object: Enum GPUserInterfaceCore.EGPUINavWidgetFocusedAction
enum class EGPUINavWidgetFocusedAction : uint8_t
{
	Default = 0,
	Click = 1,
	OnlyDPadClick = 2,
	EGPUINavWidgetFocusedAction_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPAnalogCursorInputMappingType
enum class EGPAnalogCursorInputMappingType : uint8_t
{
	SlowToFast = 0,
	Linear = 1,
	FastToSlow = 2,
	EGPAnalogCursorInputMappingType_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPAnalogCursorAccelerationType
enum class EGPAnalogCursorAccelerationType : uint8_t
{
	SlowToFast = 0,
	Linear = 1,
	FastToSlow = 2,
	EGPAnalogCursorAccelerationType_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPUINavDirection
enum class EGPUINavDirection : uint8_t
{
	Invalid = 0,
	Next = 1,
	Previous = 2,
	EGPUINavDirection_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EQuadrantType
enum class EQuadrantType : uint8_t
{
	FirstQuadrant = 0,
	SecondQuadrant = 1,
	ThirdQuadrant = 2,
	FourthQuadrant = 3,
	Invalid = 4,
	EQuadrantType_MAX = 5
};

// Object: Enum GPUserInterfaceCore.EClockwiseDirection
enum class EClockwiseDirection : uint8_t
{
	Clockwise = 0,
	Counterclockwise = 1,
	Invalid = 2,
	EClockwiseDirection_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPAnalogCursorBlockOption
enum class EGPAnalogCursorBlockOption : uint8_t
{
	None = 0,
	UnlockCursorPos = 1,
	EGPAnalogCursorBlockOption_MAX = 2
};

// Object: Enum GPUserInterfaceCore.EGPUINavHittestFallbackType
enum class EGPUINavHittestFallbackType : uint8_t
{
	Horizental = 0,
	Vertical = 1,
	Max = 2
};

// Object: Enum GPUserInterfaceCore.EGPUINavGroupBestDefaultType
enum class EGPUINavGroupBestDefaultType : uint8_t
{
	Default = 0,
	TopLeft = 1,
	EGPUINavGroupBestDefaultType_MAX = 2
};

// Object: Enum GPUserInterfaceCore.EGPUINavGroupTransSimpleStrategy
enum class EGPUINavGroupTransSimpleStrategy : uint8_t
{
	Default = 0,
	Hittest = 1,
	Distance = 2,
	LastFocused = 3,
	HittestOrDistance = 4,
	LastFocusedOrHittestOrDistance = 5,
	EGPUINavGroupTransSimpleStrategy_MAX = 6
};

// Object: Enum GPUserInterfaceCore.EGPUINavigationDistanceType
enum class EGPUINavigationDistanceType : uint8_t
{
	None = 0,
	Horizontal = 1,
	Vertical = 2,
	Euclidean = 3,
	EGPUINavigationDistanceType_MAX = 4
};

// Object: Enum GPUserInterfaceCore.EDynamicNavConfigPriority
enum class EDynamicNavConfigPriority : uint8_t
{
	UI_Stack = 0,
	UI_Pop = 1,
	UI_MAX = 2
};

// Object: Enum GPUserInterfaceCore.EGPUINavigationSimulateMouseDragState
enum class EGPUINavigationSimulateMouseDragState : uint8_t
{
	Stop = 0,
	Start = 1,
	OnDraging = 2,
	EGPUINavigationSimulateMouseDragState_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPUINavigationSimulateMouseKeyType
enum class EGPUINavigationSimulateMouseKeyType : uint8_t
{
	LMB = 0,
	CMB = 1,
	RMB = 2,
	EGPUINavigationSimulateMouseKeyType_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPUINavigationEventType
enum class EGPUINavigationEventType : uint8_t
{
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	AnalogVertical = 6,
	AnalogHorizontal = 7,
	Accept = 8,
	Back = 9,
	EGPUINavigationEventType_MAX = 10
};

// Object: Enum GPUserInterfaceCore.EGPFreeAnalogCursorKeyType
enum class EGPFreeAnalogCursorKeyType : uint8_t
{
	Enable = 0,
	Disable = 1,
	Ignore = 2,
	EGPFreeAnalogCursorKeyType_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPUINavigationDynamicConfigType
enum class EGPUINavigationDynamicConfigType : uint8_t
{
	Override = 0,
	Coexist = 1,
	EGPUINavigationDynamicConfigType_MAX = 2
};

// Object: Enum GPUserInterfaceCore.EGPUserOverrideAdaptType
enum class EGPUserOverrideAdaptType : uint8_t
{
	Auto = 0,
	ForceMonitor = 1,
	ForceTV = 2,
	EGPUserOverrideAdaptType_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EGPScreenAdaptType
enum class EGPScreenAdaptType : uint8_t
{
	Monitor = 0,
	TV = 1,
	TVUltra = 2,
	EGPScreenAdaptType_MAX = 3
};

// Object: Enum GPUserInterfaceCore.EBackRootType
enum class EBackRootType : uint8_t
{
	None = 0,
	Image = 1,
	Media = 2,
	CustomBP = 3,
	EBackRootType_MAX = 4
};

// Object: Enum GPUserInterfaceCore.ELuaUILayer
enum class ELuaUILayer : uint8_t
{
	Sub = 0,
	HUD = 10,
	HUD_ScreenEffect = 11,
	HUD_Mark = 12,
	HUD_Common = 13,
	HUD_Hint = 14,
	HUD_Feedback = 15,
	HUD_Touch = 16,
	HUD_Popup = 17,
	HUD_LargePopup = 18,
	BackRoot = 21,
	Scene = 22,
	Root = 23,
	Stack = 24,
	Top = 25,
	Loading = 26,
	Pop = 27,
	Tip = 28,
	Mask = 29,
	Admin = 30,
	Watermark = 31,
	ELuaUILayer_MAX = 32
};

// Object: ScriptStruct GPUserInterfaceCore.GPAnalogCursorInputMappingRow
// Size: 0x40 (Inherited: 0x10)
struct FGPAnalogCursorInputMappingRow : FResourceBaseRow
{
	EGPAnalogCursorInputMappingType CurveType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TSoftObjectPtr<UCurveFloat> Curve; // 0x18(0x28)
};

// Object: ScriptStruct GPUserInterfaceCore.GPAnalogCursorAccelerationRow
// Size: 0x40 (Inherited: 0x10)
struct FGPAnalogCursorAccelerationRow : FResourceBaseRow
{
	EGPAnalogCursorAccelerationType CurveType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TSoftObjectPtr<UCurveFloat> Curve; // 0x18(0x28)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationGroupStackLogic
// Size: 0x10 (Inherited: 0x0)
struct FGPUINavigationGroupStackLogic
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GPUserInterfaceCore.NavGroupStackData
// Size: 0x10 (Inherited: 0x0)
struct FNavGroupStackData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationSortedWidgetList
// Size: 0x10 (Inherited: 0x0)
struct FGPUINavigationSortedWidgetList
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationWidgetData
// Size: 0x18 (Inherited: 0x0)
struct FGPUINavigationWidgetData
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavHittestFallbackConfig
// Size: 0x3 (Inherited: 0x0)
struct FGPUINavHittestFallbackConfig
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bEnableOtherSweptTest : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	EGPUINavigationDistanceType DistanceType; // 0x2(0x1)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavFocusProxy
// Size: 0x38 (Inherited: 0x0)
struct FGPUINavFocusProxy
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavSelectorInfo
// Size: 0x18 (Inherited: 0x0)
struct FGPUINavSelectorInfo
{
	uint8_t bShowNavSelectorWidget : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName NavSelectorStyle; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UWidget* NavSelectorTarget; // 0x10(0x8)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavScrollInfo
// Size: 0xC (Inherited: 0x0)
struct FGPUINavScrollInfo
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavGroupTransParameters
// Size: 0x20 (Inherited: 0x0)
struct FGPUINavGroupTransParameters
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationFocusResult
// Size: 0x18 (Inherited: 0x0)
struct FGPUINavigationFocusResult
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationSimulateMouseKeyConfigRowHD
// Size: 0x20 (Inherited: 0x10)
struct FGPUINavigationSimulateMouseKeyConfigRowHD : FDescRowBase
{
	struct TArray<struct FGPUINavigationSimulateMouseKeyInfo> KeyInfos; // 0x10(0x10)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationSimulateMouseKeyInfo
// Size: 0x20 (Inherited: 0x0)
struct FGPUINavigationSimulateMouseKeyInfo
{
	EGPUINavigationSimulateMouseKeyType SimulatedMouseKey; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FKey Key; // 0x8(0x18)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationDynamicConfigRowHD
// Size: 0x28 (Inherited: 0x10)
struct FGPUINavigationDynamicConfigRowHD : FDescRowBase
{
	EGPUINavigationDynamicConfigType ConfigType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<struct FGPUINavigationKeyMapping> Mappings; // 0x18(0x10)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationKeyMapping
// Size: 0x18 (Inherited: 0x0)
struct FGPUINavigationKeyMapping
{
	EGPUINavigationEventType EventType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FKey> Keys; // 0x8(0x10)
};

// Object: ScriptStruct GPUserInterfaceCore.GPUINavigationConfigRowHD
// Size: 0x28 (Inherited: 0x10)
struct FGPUINavigationConfigRowHD : FDescRowBase
{
	struct FGPUINavigationKeyMapping Mapping; // 0x10(0x18)
};

// Object: ScriptStruct GPUserInterfaceCore.ScreenDeviceScore
// Size: 0x10 (Inherited: 0x0)
struct FScreenDeviceScore
{
	float MonitorScore; // 0x0(0x4)
	float TVScore; // 0x4(0x4)
	float Confidence; // 0x8(0x4)
	uint8_t bInAmbiguousZone : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct GPUserInterfaceCore.ScreenDetectionWeights
// Size: 0x1C (Inherited: 0x0)
struct FScreenDetectionWeights
{
	float SizeWeight; // 0x0(0x4)
	float PPIWeight; // 0x4(0x4)
	float ResolutionFamilyWeight; // 0x8(0x4)
	float SafeAreaWeight; // 0xC(0x4)
	float AmbiguousZoneMinSize; // 0x10(0x4)
	float AmbiguousZoneMaxSize; // 0x14(0x4)
	float MinConfidenceThreshold; // 0x18(0x4)
};

// Object: ScriptStruct GPUserInterfaceCore.SimpleScreenParams
// Size: 0x30 (Inherited: 0x0)
struct FSimpleScreenParams
{
	float PhysicalSize; // 0x0(0x4)
	float PhysicalWidth; // 0x4(0x4)
	float PhysicalHeight; // 0x8(0x4)
	int32_t ResolutionWidth; // 0xC(0x4)
	int32_t ResolutionHeight; // 0x10(0x4)
	struct FMargin SafeAreaMargin; // 0x14(0x10)
	float PixelDensity; // 0x24(0x4)
	float AspectRatio; // 0x28(0x4)
	EGPUserOverrideAdaptType UserOverride; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: Class GPUserInterfaceCore.LuaUIBaseView
// Size: 0x610 (Inherited: 0x2F8)
struct ULuaUIBaseView : UUserWidget
{
	uint8_t Pad_0x2F8[0x2C]; // 0x2F8(0x2C)
	uint8_t bBPAutoPlay : 1; // 0x324(0x1), Mask(0x1)
	uint8_t BitPad_0x324_1 : 7; // 0x324(0x1)
	uint8_t Pad_0x325[0x3]; // 0x325(0x3)
	struct FString LuaPath; // 0x328(0x10)
	uint8_t bBindLuaPath : 1; // 0x338(0x1), Mask(0x1)
	uint8_t BitPad_0x338_1 : 7; // 0x338(0x1)
	uint8_t bUseLuaPaint : 1; // 0x339(0x1), Mask(0x1)
	uint8_t BitPad_0x339_1 : 7; // 0x339(0x1)
	uint8_t bCacheLuaTable : 1; // 0x33A(0x1), Mask(0x1)
	uint8_t BitPad_0x33A_1 : 7; // 0x33A(0x1)
	uint8_t bTransformWorld : 1; // 0x33B(0x1), Mask(0x1)
	uint8_t BitPad_0x33B_1 : 7; // 0x33B(0x1)
	uint8_t bSwallowClick : 1; // 0x33C(0x1), Mask(0x1)
	uint8_t BitPad_0x33C_1 : 7; // 0x33C(0x1)
	uint8_t bInterceptPreviewMouse : 1; // 0x33D(0x1), Mask(0x1)
	uint8_t BitPad_0x33D_1 : 7; // 0x33D(0x1)
	uint8_t bHandleClick : 1; // 0x33E(0x1), Mask(0x1)
	uint8_t BitPad_0x33E_1 : 7; // 0x33E(0x1)
	uint8_t bHandleClickR : 1; // 0x33F(0x1), Mask(0x1)
	uint8_t BitPad_0x33F_1 : 7; // 0x33F(0x1)
	uint8_t bHandleClickMid : 1; // 0x340(0x1), Mask(0x1)
	uint8_t BitPad_0x340_1 : 7; // 0x340(0x1)
	uint8_t bHandleDoubleClick : 1; // 0x341(0x1), Mask(0x1)
	uint8_t BitPad_0x341_1 : 7; // 0x341(0x1)
	uint8_t bHandleHover : 1; // 0x342(0x1), Mask(0x1)
	uint8_t BitPad_0x342_1 : 7; // 0x342(0x1)
	uint8_t Pad_0x343[0x1]; // 0x343(0x1)
	float DoubleClickInterval; // 0x344(0x4)
	float DoubleClickIntervalHD; // 0x348(0x4)
	uint8_t bClickWaitDoubleClick : 1; // 0x34C(0x1), Mask(0x1)
	uint8_t BitPad_0x34C_1 : 7; // 0x34C(0x1)
	uint8_t bHandleLongPress : 1; // 0x34D(0x1), Mask(0x1)
	uint8_t BitPad_0x34D_1 : 7; // 0x34D(0x1)
	uint8_t Pad_0x34E[0x2]; // 0x34E(0x2)
	float LongPressInterval; // 0x350(0x4)
	float LongPressCancelDistance; // 0x354(0x4)
	uint8_t bPreciseClick : 1; // 0x358(0x1), Mask(0x1)
	uint8_t BitPad_0x358_1 : 7; // 0x358(0x1)
	uint8_t bUseNativeTouchEvent : 1; // 0x359(0x1), Mask(0x1)
	uint8_t BitPad_0x359_1 : 7; // 0x359(0x1)
	uint8_t Pad_0x35A[0x2]; // 0x35A(0x2)
	struct FDelegate OnCustomDragLogic; // 0x35C(0x10)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)
	struct FMargin ContentAreaHD; // 0x370(0x10)
	uint8_t bIsOpenConsoleConfig : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t Pad_0x381[0x3]; // 0x381(0x3)
	struct FMargin ContentAreaConsole; // 0x384(0x10)
	ELuaUIBaseViewWantedInputMode WantedInputMode; // 0x394(0x1)
	uint8_t bUseClipzone : 1; // 0x395(0x1), Mask(0x1)
	uint8_t BitPad_0x395_1 : 7; // 0x395(0x1)
	uint8_t Pad_0x396[0xA2]; // 0x396(0xA2)
	struct UObject* PanelOwner; // 0x438(0x8)
	uint8_t bHandleDrag : 1; // 0x440(0x1), Mask(0x1)
	uint8_t BitPad_0x440_1 : 7; // 0x440(0x1)
	uint8_t bHandleDrop : 1; // 0x441(0x1), Mask(0x1)
	uint8_t BitPad_0x441_1 : 7; // 0x441(0x1)
	uint8_t Pad_0x442[0x1]; // 0x442(0x1)
	ETriggerDragLogic TriggerDragLogic; // 0x443(0x1)
	EViewDragMode DragMode; // 0x444(0x1)
	uint8_t Pad_0x445[0x3]; // 0x445(0x3)
	float DragAngle; // 0x448(0x4)
	float DragDropVerticalDeltaThreshold; // 0x44C(0x4)
	float FastDragAngle; // 0x450(0x4)
	uint8_t Pad_0x454[0x4]; // 0x454(0x4)
	struct ULuaDragDropOperation* LuaDragDropOp; // 0x458(0x8)
	uint8_t bCancelDragWhenLongPressTrigger : 1; // 0x460(0x1), Mask(0x1)
	uint8_t BitPad_0x460_1 : 7; // 0x460(0x1)
	uint8_t Pad_0x461[0x3]; // 0x461(0x3)
	float DragTriggerDistance; // 0x464(0x4)
	float DragThreshold; // 0x468(0x4)
	int32_t MaxDragPointSampleNum; // 0x46C(0x4)
	uint8_t bIgnoreFirstSample : 1; // 0x470(0x1), Mask(0x1)
	uint8_t BitPad_0x470_1 : 7; // 0x470(0x1)
	uint8_t Pad_0x471[0x7]; // 0x471(0x7)
	struct FMulticastInlineDelegate OnMouseEnterEvent; // 0x478(0x10)
	struct FMulticastInlineDelegate OnMouseLeaveEvent; // 0x488(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x498(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x4A8(0x10)
	struct FDelegate OnHovered; // 0x4B8(0x10)
	struct FDelegate OnUnhovered; // 0x4C8(0x10)
	struct FMulticastInlineDelegate OnFocusReceivedEvent; // 0x4D8(0x10)
	struct FMulticastInlineDelegate OnFocusLostEvent; // 0x4E8(0x10)
	struct FMulticastInlineDelegate OnAddedToFocusPathEvent; // 0x4F8(0x10)
	struct FMulticastInlineDelegate OnRemovedFromFocusPathEvent; // 0x508(0x10)
	EGPUIFocusEffectType FocusEffectType; // 0x518(0x1)
	uint8_t bDoHittestNavigation : 1; // 0x519(0x1), Mask(0x1)
	uint8_t BitPad_0x519_1 : 7; // 0x519(0x1)
	uint8_t Pad_0x51A[0xD6]; // 0x51A(0xD6)
	struct FString SuffixThemeID; // 0x5F0(0x10)
	uint8_t bAutoApplyThemeID : 1; // 0x600(0x1), Mask(0x1)
	uint8_t BitPad_0x600_1 : 7; // 0x600(0x1)
	uint8_t Pad_0x601[0xF]; // 0x601(0xF)


	// Object: DelegateFunction GPUserInterfaceCore.LuaUIBaseView.UserWidgetDelegate__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void UserWidgetDelegate__DelegateSignature();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.UpdateThemeIDOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf01ac10
	// Params: [ Num(1) Size(0x10) ]
	void UpdateThemeIDOnly(struct FString InThemeID);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.TryFindNavigationFoucasable
	// Flags: [Final|Native|Public]
	// Offset: 0xb046524
	// Params: [ Num(2) Size(0x9) ]
	uint8_t TryFindNavigationFoucasable(struct UUserWidget* RootWidget);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.SetSkipDragStartDistanceCheck
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb046478
	// Params: [ Num(1) Size(0x1) ]
	void SetSkipDragStartDistanceCheck(uint8_t bIsEnable);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.SetPanelOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0463d8
	// Params: [ Num(1) Size(0x8) ]
	void SetPanelOwner(struct UObject* InOwner);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.RegisterLifeFunction
	// Flags: [Final|Native|Public]
	// Offset: 0xb046334
	// Params: [ Num(1) Size(0x1) ]
	void RegisterLifeFunction(EUIState LifeFunction);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.RecursiveCallLuaLifeFunction
	// Flags: [Final|Native|Public]
	// Offset: 0xb046290
	// Params: [ Num(1) Size(0x1) ]
	void RecursiveCallLuaLifeFunction(EUIState LifeFunction);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.PlayAniLua
	// Flags: [Final|Native|Public]
	// Offset: 0xb0461e4
	// Params: [ Num(1) Size(0x1) ]
	void PlayAniLua(uint8_t bForward);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.PlayAni
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PlayAni(uint8_t bForward);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.OnSetThemeIDChanged
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnSetThemeIDChanged(struct FString InThemeID);

	// Object: DelegateFunction GPUserInterfaceCore.LuaUIBaseView.OnMouseEnterLeave__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnMouseEnterLeave__DelegateSignature();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.OnLongPressed_Test
	// Flags: [Final|Native|Public]
	// Offset: 0xb0461d0
	// Params: [ Num(0) Size(0x0) ]
	void OnLongPressed_Test();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.OnImmediateClicked_Test
	// Flags: [Final|Native|Public]
	// Offset: 0xb0461bc
	// Params: [ Num(0) Size(0x0) ]
	void OnImmediateClicked_Test();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.OnDoubleClicked_Test
	// Flags: [Final|Native|Public]
	// Offset: 0xb0461a8
	// Params: [ Num(0) Size(0x0) ]
	void OnDoubleClicked_Test();

	// Object: DelegateFunction GPUserInterfaceCore.LuaUIBaseView.OnCustomDragLogic__DelegateSignature
	// Flags: [Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x70) ]
	void OnCustomDragLogic__DelegateSignature(const struct FPointerEvent& InGestureEvent);

	// Object: DelegateFunction GPUserInterfaceCore.LuaUIBaseView.OnClickEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnClickEvent__DelegateSignature();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.OnClicked_Test
	// Flags: [Final|Native|Public]
	// Offset: 0xb046194
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_Test();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.LuaRemoveFromParent
	// Flags: [Final|Native|Public]
	// Offset: 0xb046180
	// Params: [ Num(0) Size(0x0) ]
	void LuaRemoveFromParent();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.LuaInsHasRelease
	// Flags: [Final|Native|Public]
	// Offset: 0xb046164
	// Params: [ Num(0) Size(0x0) ]
	void LuaInsHasRelease();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.IsInSafeZone
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb04612c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInSafeZone();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.IsAnyAnimationPlayingRealtime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb046094
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAnyAnimationPlayingRealtime();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.IsAnimationPlayingExactly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe7a4518
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsAnimationPlayingExactly(struct UWidgetAnimation* InAnimation);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetWidgetByName_CheckLuaBinding
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xb045f9c
	// Params: [ Num(3) Size(0x18) ]
	struct UWidget* GetWidgetByName_CheckLuaBinding(struct FName WidgetName, uint8_t& bRelyLuaBinding);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetWidgetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe8867c0
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetByName(struct FName WidgetName);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetViewParent
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb045ee8
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* GetViewParent(uint8_t bLuaParentOnly);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetSafeZoneSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb045eb0
	// Params: [ Num(1) Size(0x10) ]
	struct FMargin GetSafeZoneSize();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetPanelOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb045e94
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetPanelOwner();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetLastFocusCause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb045e60
	// Params: [ Num(1) Size(0x1) ]
	EFocusCause GetLastFocusCause();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetLastDragCurveDataText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb045dc8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLastDragCurveDataText();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetLastDragCurveData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb045d30
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FVector2D> GetLastDragCurveData();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.GetDesiredFocusWidget
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0xb045cf4
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetDesiredFocusWidget();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.ForceStopLongPressTimer
	// Flags: [Final|Native|Public]
	// Offset: 0xb045ce0
	// Params: [ Num(0) Size(0x0) ]
	void ForceStopLongPressTimer();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.DragDrop_LuaCall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb045bf8
	// Params: [ Num(2) Size(0x18) ]
	void DragDrop_LuaCall(struct FString FuncName, struct ULuaDragDropOperation* Operation);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.CallLuaLifeFunction
	// Flags: [Final|Native|Public]
	// Offset: 0xb045b54
	// Params: [ Num(1) Size(0x1) ]
	void CallLuaLifeFunction(EUIState LifeFunction);

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.Bp_SynchronizePropertiesEditorOnly
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Bp_SynchronizePropertiesEditorOnly();

	// Object: Function GPUserInterfaceCore.LuaUIBaseView.Bp_SynchronizeProperties
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Bp_SynchronizeProperties();
	DEFINE_UE_CLASS_HELPERS(ULuaUIBaseView, "LuaUIBaseView")

};

// Object: Class GPUserInterfaceCore.DFNavigationSelectorStyleInterface
// Size: 0x28 (Inherited: 0x28)
struct IDFNavigationSelectorStyleInterface : IInterface
{

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorStyleInterface.GetNavigationSelectorTarget
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xb03ae30
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetNavigationSelectorTarget();

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorStyleInterface.GetNavigationSelectorStyle
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xb03adf4
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetNavigationSelectorStyle();
	DEFINE_UE_CLASS_HELPERS(IDFNavigationSelectorStyleInterface, "DFNavigationSelectorStyleInterface")

};

// Object: Class GPUserInterfaceCore.DFNavigationSelectorStyle
// Size: 0x620 (Inherited: 0x610)
struct UDFNavigationSelectorStyle : ULuaUIBaseView
{
	uint8_t bAutoNavAnim : 1; // 0x60C(0x1), Mask(0x1)
	float FocusLoopAnimDelay; // 0x610(0x4)
	uint8_t BitPad_0x614_1 : 7; // 0x614(0x1)
	uint8_t Pad_0x615[0xB]; // 0x615(0xB)


	// Object: Function GPUserInterfaceCore.DFNavigationSelectorStyle.StopAutoAnimation
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb03b204
	// Params: [ Num(1) Size(0x8) ]
	void StopAutoAnimation(struct FName AnimationName);

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorStyle.ResetState
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b1f0
	// Params: [ Num(0) Size(0x0) ]
	void ResetState();

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorStyle.PlayStyleEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b1dc
	// Params: [ Num(0) Size(0x0) ]
	void PlayStyleEffect();

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorStyle.PlayAutoAnimation
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xb03b074
	// Params: [ Num(5) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAutoAnimation(struct FName AnimationName, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, uint8_t bJumpToEnd);
	DEFINE_UE_CLASS_HELPERS(UDFNavigationSelectorStyle, "DFNavigationSelectorStyle")

};

// Object: Class GPUserInterfaceCore.DFNavigationSelectorClipping
// Size: 0x180 (Inherited: 0x170)
struct UDFNavigationSelectorClipping : UPanelWidget
{
	uint8_t Pad_0x170[0x10]; // 0x170(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFNavigationSelectorClipping, "DFNavigationSelectorClipping")

};

// Object: Class GPUserInterfaceCore.DFNavigationSelectorBase
// Size: 0x638 (Inherited: 0x610)
struct UDFNavigationSelectorBase : ULuaUIBaseView
{
	struct UWidget* SelectorRoot; // 0x610(0x8)
	struct UDFNavigationSelectorClipping* SelectorClipping; // 0x618(0x8)
	uint8_t Pad_0x620[0x18]; // 0x620(0x18)


	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.Unbind
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b528
	// Params: [ Num(0) Size(0x0) ]
	void Unbind();

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.ShowSelector
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b514
	// Params: [ Num(0) Size(0x0) ]
	void ShowSelector();

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.SetHighlight_DirectlyOrNavigation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb03b478
	// Params: [ Num(1) Size(0x1) ]
	static void SetHighlight_DirectlyOrNavigation(uint8_t bEnable);

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.SetForceHideSelectorRoot
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb03b3dc
	// Params: [ Num(1) Size(0x1) ]
	static void SetForceHideSelectorRoot(uint8_t bEnable);

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.OnStyleChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnStyleChanged(struct FName InNewStyle);

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.OnFocusMenuEvent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnFocusMenuEvent(uint8_t bInMenu);

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.HideSelector
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b3c8
	// Params: [ Num(0) Size(0x0) ]
	void HideSelector();

	// Object: Function GPUserInterfaceCore.DFNavigationSelectorBase.Bind
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b3b4
	// Params: [ Num(0) Size(0x0) ]
	void Bind();
	DEFINE_UE_CLASS_HELPERS(UDFNavigationSelectorBase, "DFNavigationSelectorBase")

};

// Object: Class GPUserInterfaceCore.GPAnalogCursorAccelerationManager
// Size: 0x38 (Inherited: 0x30)
struct UGPAnalogCursorAccelerationManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPAnalogCursorAccelerationManager, "GPAnalogCursorAccelerationManager")

};

// Object: Class GPUserInterfaceCore.GPAnalogCursorInputMappingManager
// Size: 0x38 (Inherited: 0x30)
struct UGPAnalogCursorInputMappingManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPAnalogCursorInputMappingManager, "GPAnalogCursorInputMappingManager")

};

// Object: Class GPUserInterfaceCore.GPUINavigationDebugger
// Size: 0x28 (Inherited: 0x28)
struct UGPUINavigationDebugger : UObject
{	DEFINE_UE_CLASS_HELPERS(UGPUINavigationDebugger, "GPUINavigationDebugger")

};

// Object: Class GPUserInterfaceCore.GPUINavigationGlobalConfig
// Size: 0x98 (Inherited: 0x38)
struct UGPUINavigationGlobalConfig : UDeveloperSettings
{
	struct FName UILayerRoot; // 0x38(0x8)
	struct FName UILayerPanelPrefix; // 0x40(0x8)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationGlobalConfig, "GPUINavigationGlobalConfig")

};

// Object: Class GPUserInterfaceCore.GPUINavigationGroup
// Size: 0x190 (Inherited: 0x28)
struct UGPUINavigationGroup : UObject
{
	struct FDelegate FocusProxyMaker; // 0x28(0x10)
	struct FDelegate FocusProxyResolver; // 0x38(0x10)
	uint8_t bUseCustomFocusProxy : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x27]; // 0x49(0x27)
	struct UGPUINavigationStrategyBase* NavStrategy; // 0x70(0x8)
	uint8_t Pad_0x78[0x74]; // 0x78(0x74)
	struct FName CustomSimulateMouseKeyConfigName; // 0xEC(0x8)
	uint8_t Pad_0xF4[0x14]; // 0xF4(0x14)
	struct FMulticastInlineDelegate OnNavGroupFocusReceivedEvent; // 0x108(0x10)
	struct FMulticastInlineDelegate OnNavGroupFocusLostEvent; // 0x118(0x10)
	uint8_t Pad_0x128[0x68]; // 0x128(0x68)


	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetWidgetFocusedAction
	// Flags: [Final|Native|Public]
	// Offset: 0xb03ce4c
	// Params: [ Num(1) Size(0x1) ]
	void SetWidgetFocusedAction(EGPUINavWidgetFocusedAction InNewFoucsedAction);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetUserFocus
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03cd0c
	// Params: [ Num(4) Size(0xB) ]
	uint8_t SetUserFocus(struct UWidget* Widget, uint8_t bUseSelectedEffect, uint8_t bScrollToTarget);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetUpdateFocusOnScrollEnabled
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03cc60
	// Params: [ Num(1) Size(0x1) ]
	void SetUpdateFocusOnScrollEnabled(uint8_t bEnable);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetSimulatedClickIsIgnored
	// Flags: [Final|Native|Public]
	// Offset: 0xb03cbb4
	// Params: [ Num(1) Size(0x1) ]
	void SetSimulatedClickIsIgnored(uint8_t bInIgnore);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetScrollRecipient
	// Flags: [Final|Native|Public]
	// Offset: 0xb03cb10
	// Params: [ Num(1) Size(0x8) ]
	void SetScrollRecipient(struct UWidget* InScrollRecipient);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetScrollInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xb03ca30
	// Params: [ Num(2) Size(0x9) ]
	void SetScrollInfo(struct UWidget* InScrollRecipient, EGPUINavScrollingCondition InScrollingCondition);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetScrollAnalogStick
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c98c
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollAnalogStick(EGPUIAnalogStick InAnalogStick);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetRootWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c8e8
	// Params: [ Num(1) Size(0x8) ]
	void SetRootWidget(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetRestoreOnFocusLostEnabled
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03c83c
	// Params: [ Num(1) Size(0x1) ]
	void SetRestoreOnFocusLostEnabled(uint8_t bEnable);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetParentGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c798
	// Params: [ Num(1) Size(0x8) ]
	void SetParentGroup(struct UGPUINavigationGroup* InGroup);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetOwnerWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c6f4
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerWidget(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetOnlyNavInUINavWidgets
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c64c
	// Params: [ Num(1) Size(0x1) ]
	void SetOnlyNavInUINavWidgets(uint8_t Inbool);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetNavSelectorWidgetVisibility
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c5a0
	// Params: [ Num(1) Size(0x1) ]
	void SetNavSelectorWidgetVisibility(uint8_t bSelectorVisible);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetNavSelectorStyle
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xb03c4ec
	// Params: [ Num(1) Size(0x8) ]
	void SetNavSelectorStyle(const struct FName& InStyle);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetFocusRecoveryEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c440
	// Params: [ Num(1) Size(0x1) ]
	void SetFocusRecoveryEnabled(uint8_t bEnable);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetEnableRightStickScrolling
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03c394
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableRightStickScrolling(uint8_t bEnableScrolling);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetCustomSimulateMouseKeyConfigName
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c2f4
	// Params: [ Num(1) Size(0x8) ]
	void SetCustomSimulateMouseKeyConfigName(struct FName InConfigName);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetAutoUseRootGeometrySize
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c24c
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoUseRootGeometrySize(uint8_t bAutoUse);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetAutoScrollDestination
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03c1a8
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoScrollDestination(EGPNavScrollDestination InDestination);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.SetAnalogCursorStickySlowdownFactor
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c104
	// Params: [ Num(1) Size(0x4) ]
	void SetAnalogCursorStickySlowdownFactor(float InFactor);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.RestoreFocus
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03c0cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t RestoreFocus();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.RemoveParentGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c0b8
	// Params: [ Num(0) Size(0x0) ]
	void RemoveParentGroup();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.RemoveNodeRelations
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c0a4
	// Params: [ Num(0) Size(0x0) ]
	void RemoveNodeRelations();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.RemoveChildGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03c000
	// Params: [ Num(1) Size(0x8) ]
	void RemoveChildGroup(struct UGPUINavigationGroup* InGroup);

	// Object: DelegateFunction GPUserInterfaceCore.GPUINavigationGroup.OnNavGroupFocusReceivedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnNavGroupFocusReceivedEvent__DelegateSignature(struct UGPUINavigationGroup* FocusedNavGroup);

	// Object: DelegateFunction GPUserInterfaceCore.GPUINavigationGroup.OnNavGroupFocusLostEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnNavGroupFocusLostEvent__DelegateSignature(struct UGPUINavigationGroup* FocusedNavGroup);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.MarkIsStackControlGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03bfec
	// Params: [ Num(0) Size(0x0) ]
	void MarkIsStackControlGroup();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.MarkIsGlobalGroup
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03bf40
	// Params: [ Num(1) Size(0x1) ]
	void MarkIsGlobalGroup(uint8_t bIsGlobal);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.MarkIsDefaultFocusGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03bf2c
	// Params: [ Num(0) Size(0x0) ]
	void MarkIsDefaultFocusGroup();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.IsShowNavSelectorWidget
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bf10
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsShowNavSelectorWidget();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.IsGroupType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03be60
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsGroupType(EGPUINavigationGroupType InTestType);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.IsGroupEnabled
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03be28
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsGroupEnabled();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.IsFocusRecoveryEnabled
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03bdf0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFocusRecoveryEnabled();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetUpdateFocusOnScrollEnabled
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bdb8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetUpdateFocusOnScrollEnabled();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetRootWidget
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03bd80
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetRootWidget();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetRestoreOnFocusLostEnabled
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bd48
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetRestoreOnFocusLostEnabled();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetParentGroup
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03bd14
	// Params: [ Num(1) Size(0x8) ]
	struct UGPUINavigationGroup* GetParentGroup();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetOwnerWidget
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03bcdc
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetOwnerWidget();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetOwnerNavStrategy
	// Flags: [Final|Native|Public]
	// Offset: 0xb03bca8
	// Params: [ Num(1) Size(0x8) ]
	struct UGPUINavigationStrategyBase* GetOwnerNavStrategy();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetNavSelectorStyle
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bc8c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetNavSelectorStyle();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetLastNavigationType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03bc58
	// Params: [ Num(1) Size(0x1) ]
	EUINavigation GetLastNavigationType();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetLastFocusUWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xb03bc24
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetLastFocusUWidget();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetLastFocusLostTime
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bbf0
	// Params: [ Num(1) Size(0x4) ]
	float GetLastFocusLostTime();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetLastFocusLostElapsedTime
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bbbc
	// Params: [ Num(1) Size(0x4) ]
	float GetLastFocusLostElapsedTime();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetLastFocusLostCause
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bb88
	// Params: [ Num(1) Size(0x1) ]
	EFocusCause GetLastFocusLostCause();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetCustomSimulateMouseKeyConfigName
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03bb6c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCustomSimulateMouseKeyConfigName();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetAutoScrollDestination
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xb03bb38
	// Params: [ Num(1) Size(0x1) ]
	EGPNavScrollDestination GetAutoScrollDestination();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.GetAnalogCursorStickySlowdownFactor
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03bb04
	// Params: [ Num(1) Size(0x4) ]
	float GetAnalogCursorStickySlowdownFactor();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.FocusWidgetByProxy
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b9c8
	// Params: [ Num(2) Size(0x11) ]
	void FocusWidgetByProxy(struct TArray<int64_t> ProxyHandle, uint8_t bUseSelectedEffect);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.ClearCustomSimulateMouseKeyConfigName
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b9b0
	// Params: [ Num(0) Size(0x0) ]
	void ClearCustomSimulateMouseKeyConfigName();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.CanSimulateClick
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb03b978
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanSimulateClick();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.BuildNavigation
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b964
	// Params: [ Num(0) Size(0x0) ]
	void BuildNavigation();

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.BindDynamicNavConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b8c0
	// Params: [ Num(1) Size(0x8) ]
	void BindDynamicNavConfig(struct FName InConfigName);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.AddNavWidgetToArray
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b81c
	// Params: [ Num(1) Size(0x8) ]
	void AddNavWidgetToArray(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationGroup.AddChildGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03b778
	// Params: [ Num(1) Size(0x8) ]
	void AddChildGroup(struct UGPUINavigationGroup* InGroup);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationGroup, "GPUINavigationGroup")

};

// Object: Class GPUserInterfaceCore.GPUINavigationManager
// Size: 0x238 (Inherited: 0x30)
struct UGPUINavigationManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnNavigationChangedFocusEvent; // 0x30(0x10)
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)
	struct TArray<struct UGPUINavigationGroup*> NavGroups; // 0x80(0x10)
	struct TArray<struct UGPUINavigationGroup*> GlobalNavGroups; // 0x90(0x10)
	uint8_t Pad_0xA0[0x30]; // 0xA0(0x30)
	struct TArray<struct UGPUINavigationGroup*> PendingFocusNavGroups; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x50]; // 0xE0(0x50)
	struct UGPUINavigationDebugger* NavigationDebugger; // 0x130(0x8)
	uint8_t Pad_0x138[0x58]; // 0x138(0x58)
	struct FMulticastInlineDelegate OnSimulateLeftMouseDragChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnUsingFreeAnalogCursorStateChanged; // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnFreeAnalogCursorMove; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x78]; // 0x1C0(0x78)


	// Object: Function GPUserInterfaceCore.GPUINavigationManager.UsingFreeAnalogCursor
	// Flags: [Final|Native|Public]
	// Offset: 0xb03eef0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t UsingFreeAnalogCursor();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.UnRegisterAnalogCursor
	// Flags: [Final|Native|Public]
	// Offset: 0xb03eedc
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterAnalogCursor();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TrySimulateMouseDrag
	// Flags: [Final|Native|Public]
	// Offset: 0xb03ee2c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t TrySimulateMouseDrag(struct UWidget* TryDragWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TrySimulateMouseClick
	// Flags: [Final|Native|Public]
	// Offset: 0xb03edf4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TrySimulateMouseClick();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TryRestoreProxy
	// Flags: [Final|Native|Public]
	// Offset: 0xb03ed50
	// Params: [ Num(1) Size(0x8) ]
	void TryRestoreProxy(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TryRecordProxy
	// Flags: [Final|Native|Public]
	// Offset: 0xb03ecac
	// Params: [ Num(1) Size(0x8) ]
	void TryRecordProxy(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TryFocusLastGroupByOwner
	// Flags: [Final|Native|Public]
	// Offset: 0xb03ebfc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t TryFocusLastGroupByOwner(struct UWidget* Owner);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TryFocusLastGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03eaf8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t TryFocusLastGroup(struct TArray<struct UGPUINavigationGroup*> InGroups);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TryFocusDefaultWidgetByGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03ea54
	// Params: [ Num(1) Size(0x8) ]
	void TryFocusDefaultWidgetByGroup(struct UGPUINavigationGroup* TargetGroup);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.TryFindTargetGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e934
	// Params: [ Num(4) Size(0x20) ]
	struct UGPUINavigationGroup* TryFindTargetGroup(struct UGPUINavigationGroup* BeginGroup, struct UGPUINavigationGroup* BaseGroup, EUINavigation InNavigationType);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.StopSimulateMouseDrag
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e8fc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t StopSimulateMouseDrag();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.ShowFreeAnalogCursor
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e858
	// Params: [ Num(1) Size(0x8) ]
	void ShowFreeAnalogCursor(struct UWidget* WidgetTocenterize);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.SetUpdateFocusOnScrolling
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e7ac
	// Params: [ Num(1) Size(0x1) ]
	void SetUpdateFocusOnScrolling(uint8_t bEnable);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.SetTrySimulateMouseDrag
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e700
	// Params: [ Num(1) Size(0x1) ]
	void SetTrySimulateMouseDrag(uint8_t bEnableSimulatedDrag);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.SetGlobalRootWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e65c
	// Params: [ Num(1) Size(0x8) ]
	void SetGlobalRootWidget(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.SetFreeAnalogCursorIsBlockedByKey
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e4e0
	// Params: [ Num(4) Size(0x13) ]
	void SetFreeAnalogCursorIsBlockedByKey(struct FString InKey, uint8_t bInBlock, uint8_t bAllowAnalogNavigation, EGPAnalogCursorBlockOption InOption);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.SetFreeAnalogCursorIsBlocked
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e36c
	// Params: [ Num(4) Size(0xB) ]
	void SetFreeAnalogCursorIsBlocked(struct UWidget* InWidget, uint8_t bInBlock, uint8_t bAllowAnalogNavigation, EGPAnalogCursorBlockOption InOption);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.SetFreeAnalogCursorAutoFocusDisabled
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e284
	// Params: [ Num(2) Size(0x9) ]
	void SetFreeAnalogCursorAutoFocusDisabled(struct UWidget* InWidget, uint8_t bInDisabled);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.Resume
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e270
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.RestoreFocus
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e17c
	// Params: [ Num(3) Size(0xA) ]
	uint8_t RestoreFocus(struct UWidget* InTargetUIWidget, uint8_t bSkipCheckCurSelect);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.RemoveOneNavigationGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e0d8
	// Params: [ Num(1) Size(0x8) ]
	void RemoveOneNavigationGroup(struct UGPUINavigationGroup* InGroup);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.RemoveNavigationGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03e034
	// Params: [ Num(1) Size(0x8) ]
	void RemoveNavigationGroup(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.RemoveFocusHistoryFromWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xb03df90
	// Params: [ Num(1) Size(0x8) ]
	void RemoveFocusHistoryFromWidget(struct UWidget* InWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.RegisterNavigationGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03de70
	// Params: [ Num(4) Size(0x20) ]
	struct UGPUINavigationGroup* RegisterNavigationGroup(struct UWidget* RootWidget, struct UWidget* OwnerWidget, struct FName NavStrategyName);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.RegisterAnalogCursor
	// Flags: [Final|Native|Public]
	// Offset: 0xb03de38
	// Params: [ Num(1) Size(0x1) ]
	uint8_t RegisterAnalogCursor();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.Pause
	// Flags: [Final|Native|Public]
	// Offset: 0xb03dd94
	// Params: [ Num(1) Size(0x4) ]
	void Pause(int32_t FramesToResume);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.OnStackUIPreChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03dd80
	// Params: [ Num(0) Size(0x0) ]
	void OnStackUIPreChange();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.OnStackUIChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03dcdc
	// Params: [ Num(1) Size(0x8) ]
	void OnStackUIChange(struct UWidget* StackUI);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.OnScrollingWithOffset
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03dc38
	// Params: [ Num(1) Size(0x4) ]
	void OnScrollingWithOffset(float ScrollOffset);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.OnScrolling
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03dc24
	// Params: [ Num(0) Size(0x0) ]
	void OnScrolling();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.OnScrollEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03dc10
	// Params: [ Num(0) Size(0x0) ]
	void OnScrollEnd();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.OnPopUIPreChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03dbfc
	// Params: [ Num(0) Size(0x0) ]
	void OnPopUIPreChange();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.OnPopUIChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03dadc
	// Params: [ Num(3) Size(0x11) ]
	void OnPopUIChanged(struct UWidget* PopUI, struct UWidget* StackUI, uint8_t bAdd);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.MarkIsGlobalGroup
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d9f4
	// Params: [ Num(2) Size(0x9) ]
	void MarkIsGlobalGroup(struct UGPUINavigationGroup* InGroup, uint8_t bIsGlobal);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.IsStopSimulatedMouseDrag
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d9bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStopSimulatedMouseDrag();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.IsOnSimulatedMouseDraging
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d984
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOnSimulatedMouseDraging();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.IsFreeAnalogCursorMoving
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d94c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFreeAnalogCursorMoving();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.HideFreeAnalogCursor
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d8a0
	// Params: [ Num(1) Size(0x1) ]
	void HideFreeAnalogCursor(uint8_t bRestoreFocus);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.HandleInputModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d7c0
	// Params: [ Num(2) Size(0x2) ]
	void HandleInputModeChanged(EGPInputModeType OldType, EGPInputModeType NewType);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.HandleInputMethodChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d71c
	// Params: [ Num(1) Size(0x1) ]
	void HandleInputMethodChanged(EGPInputType NewInputMethod);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb03d678
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPUINavigationManager* Get(struct UObject* WorldContext);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.FocusWidgetByProxy
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d540
	// Params: [ Num(2) Size(0x18) ]
	void FocusWidgetByProxy(struct UGPUINavigationGroup* TargetGroup, struct TArray<int64_t> ProxyHandle);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.FindNearGroup
	// Flags: [Final|Native|Protected]
	// Offset: 0xb03d3f8
	// Params: [ Num(3) Size(0x20) ]
	struct UGPUINavigationGroup* FindNearGroup(struct UGPUINavigationGroup* InGroup, struct TArray<struct TWeakObjectPtr<struct UGPUINavigationGroup>> TargetGroups);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.DeactivateDynamicConfigsbyWidget
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d354
	// Params: [ Num(1) Size(0x8) ]
	void DeactivateDynamicConfigsbyWidget(struct UObject* InOwnerWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.DeactivateDynamicConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d2b0
	// Params: [ Num(1) Size(0x4) ]
	void DeactivateDynamicConfig(int32_t InHandle);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.DeactivateAllDynamicConfigs
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d29c
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateAllDynamicConfigs();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.CanSimulateClickUnderCursor
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d264
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanSimulateClickUnderCursor();

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.BuildGroupTreeAuto
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d1c0
	// Params: [ Num(1) Size(0x8) ]
	void BuildGroupTreeAuto(struct UWidget* StartWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.BuildGroupTree
	// Flags: [Final|Native|Public]
	// Offset: 0xb03d11c
	// Params: [ Num(1) Size(0x8) ]
	void BuildGroupTree(struct UWidget* MainRootWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationManager.ActivateDynamicConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xb03cffc
	// Params: [ Num(4) Size(0x18) ]
	int32_t ActivateDynamicConfig(struct FName InConfigName, struct UObject* InOwnerWidget, int32_t InPriority);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationManager, "GPUINavigationManager")

};

// Object: Class GPUserInterfaceCore.GPUINavigationProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPUINavigationProxyInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPUINavigationProxyInterface, "GPUINavigationProxyInterface")

};

// Object: Class GPUserInterfaceCore.GPUINavigationScrollInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPUINavigationScrollInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPUINavigationScrollInterface, "GPUINavigationScrollInterface")

};

// Object: Class GPUserInterfaceCore.GPUINavigationStrategyBase
// Size: 0x80 (Inherited: 0x28)
struct UGPUINavigationStrategyBase : UObject
{
	struct FDelegate NavRule_CustomTargeting; // 0x28(0x10)
	struct FDelegate NavRule_CustomBoundary; // 0x38(0x10)
	struct FDelegate NavRule_TargetGroup; // 0x48(0x10)
	struct FDelegate NavRule_EnterGroupFocusWidget; // 0x58(0x10)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)


	// Object: Function GPUserInterfaceCore.GPUINavigationStrategyBase.WrapBoundary
	// Flags: [Final|Native|Public]
	// Offset: 0xb0417e4
	// Params: [ Num(1) Size(0x10) ]
	void WrapBoundary(struct TArray<EUINavigation> InNavDirections);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategyBase.SetSameParentTransStrategy
	// Flags: [Final|Native|Public]
	// Offset: 0xb041740
	// Params: [ Num(1) Size(0x1) ]
	void SetSameParentTransStrategy(EGPUINavGroupTransSimpleStrategy InNewStrategy);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategyBase.SetDifferentParentTransStrategy
	// Flags: [Final|Native|Public]
	// Offset: 0xb04169c
	// Params: [ Num(1) Size(0x1) ]
	void SetDifferentParentTransStrategy(EGPUINavGroupTransSimpleStrategy InNewStrategy);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategyBase.SetBestFocusWidgetDefaultType
	// Flags: [Final|Native|Public]
	// Offset: 0xb0415f8
	// Params: [ Num(1) Size(0x1) ]
	void SetBestFocusWidgetDefaultType(EGPUINavGroupBestDefaultType InNewBestDefaultType);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategyBase.SetBestFocusNoEditableText
	// Flags: [Final|Native|Public]
	// Offset: 0xb04154c
	// Params: [ Num(1) Size(0x1) ]
	void SetBestFocusNoEditableText(uint8_t bInCondition);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategyBase.GetBestFocusNoEditableText
	// Flags: [Final|Native|Public]
	// Offset: 0xb041514
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetBestFocusNoEditableText();
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationStrategyBase, "GPUINavigationStrategyBase")

};

// Object: Class GPUserInterfaceCore.GPUINavigationStrategy_Closest
// Size: 0x88 (Inherited: 0x80)
struct UGPUINavigationStrategy_Closest : UGPUINavigationStrategyBase
{
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)


	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Closest.SetVerticalDistanceType
	// Flags: [Final|Native|Public]
	// Offset: 0xb040a30
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalDistanceType(EGPUINavigationDistanceType InDistanceType);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Closest.SetHorizontalDistanceType
	// Flags: [Final|Native|Public]
	// Offset: 0xb04098c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalDistanceType(EGPUINavigationDistanceType InDistanceType);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationStrategy_Closest, "GPUINavigationStrategy_Closest")

};

// Object: Class GPUserInterfaceCore.GPUINavigationStrategy_Grid1D
// Size: 0x88 (Inherited: 0x80)
struct UGPUINavigationStrategy_Grid1D : UGPUINavigationStrategyBase
{
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)


	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Grid1D.SetUsePrevNextNavigation
	// Flags: [Final|Native|Public]
	// Offset: 0xb040bec
	// Params: [ Num(1) Size(0x1) ]
	void SetUsePrevNextNavigation(uint8_t UsePrevNextNavigation);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Grid1D.SetIsVerticalType
	// Flags: [Final|Native|Public]
	// Offset: 0xb040b44
	// Params: [ Num(1) Size(0x1) ]
	void SetIsVerticalType(uint8_t IsVerticalType);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationStrategy_Grid1D, "GPUINavigationStrategy_Grid1D")

};

// Object: Class GPUserInterfaceCore.GPUINavigationStrategy_Gunsmith
// Size: 0xA8 (Inherited: 0x80)
struct UGPUINavigationStrategy_Gunsmith : UGPUINavigationStrategyBase
{
	uint8_t Pad_0x80[0x28]; // 0x80(0x28)


	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Gunsmith.SetGunCenter
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xb040d84
	// Params: [ Num(1) Size(0x8) ]
	void SetGunCenter(struct FVector2D NewGunCenter);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationStrategy_Gunsmith, "GPUINavigationStrategy_Gunsmith")

};

// Object: Class GPUserInterfaceCore.GPUINavigationStrategy_Hittest
// Size: 0x90 (Inherited: 0x80)
struct UGPUINavigationStrategy_Hittest : UGPUINavigationStrategyBase
{
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)


	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Hittest.SetSweptOffset
	// Flags: [Final|Native|Public]
	// Offset: 0xb0410dc
	// Params: [ Num(1) Size(0x4) ]
	void SetSweptOffset(float InOffset);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Hittest.SetHittestFallbackDistanceType
	// Flags: [Final|Native|Public]
	// Offset: 0xb040ffc
	// Params: [ Num(2) Size(0x2) ]
	void SetHittestFallbackDistanceType(EGPUINavHittestFallbackType HittestFallbackType, EGPUINavigationDistanceType DistanceType);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Hittest.SetHittestFallbackConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xb040ed0
	// Params: [ Num(3) Size(0x3) ]
	void SetHittestFallbackConfig(EGPUINavHittestFallbackType HittestFallbackType, uint8_t bEnable, uint8_t bEnableOtherSweptTest);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_Hittest.SetHitPadding
	// Flags: [Final|Native|Public]
	// Offset: 0xb040e2c
	// Params: [ Num(1) Size(0x4) ]
	void SetHitPadding(float InHitPadding);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationStrategy_Hittest, "GPUINavigationStrategy_Hittest")

};

// Object: Class GPUserInterfaceCore.GPUINavigationStrategy_LuaExtension
// Size: 0x90 (Inherited: 0x80)
struct UGPUINavigationStrategy_LuaExtension : UGPUINavigationStrategyBase
{
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)


	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_LuaExtension.SetSweptOffset
	// Flags: [Final|Native|Public]
	// Offset: 0xb041450
	// Params: [ Num(1) Size(0x4) ]
	void SetSweptOffset(float InOffset);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_LuaExtension.SetHittestFallbackDistanceType
	// Flags: [Final|Native|Public]
	// Offset: 0xb041370
	// Params: [ Num(2) Size(0x2) ]
	void SetHittestFallbackDistanceType(EGPUINavHittestFallbackType HittestFallbackType, EGPUINavigationDistanceType DistanceType);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_LuaExtension.SetHittestFallbackConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xb041244
	// Params: [ Num(3) Size(0x3) ]
	void SetHittestFallbackConfig(EGPUINavHittestFallbackType HittestFallbackType, uint8_t bEnable, uint8_t bEnableOtherSweptTest);

	// Object: Function GPUserInterfaceCore.GPUINavigationStrategy_LuaExtension.SetHitPadding
	// Flags: [Final|Native|Public]
	// Offset: 0xb0411a0
	// Params: [ Num(1) Size(0x4) ]
	void SetHitPadding(float InHitPadding);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationStrategy_LuaExtension, "GPUINavigationStrategy_LuaExtension")

};

// Object: Class GPUserInterfaceCore.GPUINavigationUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPUINavigationUtils : UBlueprintFunctionLibrary
{

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.TryAutoFocus
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb042a08
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t TryAutoFocus(uint32_t UserIndex, struct UUserWidget* RootWidget);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.SetUserFocusToWidget
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb0428e4
	// Params: [ Num(4) Size(0x12) ]
	static uint8_t SetUserFocusToWidget(struct UObject* InObject, struct UWidget* InWidget, uint8_t bUseSelectedEffect);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.SetUserFocusToGameViewport
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb04283c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t SetUserFocusToGameViewport(struct UObject* InObject);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.IsWidgetInParent_PathLength
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xb042710
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t IsWidgetInParent_PathLength(struct UWidget* InWidget, struct UWidget* Parent, int32_t& OutPathLength);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.IsWidgetInParent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb042630
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsWidgetInParent(struct UWidget* InWidget, struct UWidget* Parent);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.IsWidgetInFocusPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb04254c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsWidgetInFocusPath(uint32_t UserIndex, struct UWidget* Widget);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.IsNavigationEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb042514
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsNavigationEnabled();

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.IsDirectChildWidgetOf
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb042434
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsDirectChildWidgetOf(struct UWidget* InWidget, struct UWidget* Parent);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.GetTopWidgetBelow
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb042358
	// Params: [ Num(3) Size(0x18) ]
	static struct UWidget* GetTopWidgetBelow(struct UWidget* From, struct UWidget* Below);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.GetParentWidgetByClassName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xb042270
	// Params: [ Num(3) Size(0x20) ]
	static struct UWidget* GetParentWidgetByClassName(struct UWidget* From, struct FString ClassName);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.GetNavigationGenesisFromNavigationEvent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xb04219c
	// Params: [ Num(2) Size(0x21) ]
	static ENavigationGenesis GetNavigationGenesisFromNavigationEvent(const struct FNavigationEvent& Event);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.GetNatigationTypeFromNavigationEvent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xb0420c8
	// Params: [ Num(2) Size(0x21) ]
	static EUINavigation GetNatigationTypeFromNavigationEvent(const struct FNavigationEvent& Event);

	// Object: Function GPUserInterfaceCore.GPUINavigationUtils.GetAllLuaParents
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf811388
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct ULuaUIBaseView*> GetAllLuaParents(struct UWidget* InWidget);
	DEFINE_UE_CLASS_HELPERS(UGPUINavigationUtils, "GPUINavigationUtils")

};

// Object: Class GPUserInterfaceCore.GPUIScreenAdaptInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPUIScreenAdaptInterface : IInterface
{

	// Object: Function GPUserInterfaceCore.GPUIScreenAdaptInterface.OverrideScreenAdaptType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb045330
	// Params: [ Num(1) Size(0x1) ]
	void OverrideScreenAdaptType(EGPScreenAdaptType InType);
	DEFINE_UE_CLASS_HELPERS(IGPUIScreenAdaptInterface, "GPUIScreenAdaptInterface")

};

// Object: Class GPUserInterfaceCore.GPUIScreenAdaptProvider
// Size: 0x50 (Inherited: 0x30)
struct UGPUIScreenAdaptProvider : UEngineSubsystem
{
	struct FScreenDetectionWeights Weights; // 0x30(0x1C)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)


	// Object: Function GPUserInterfaceCore.GPUIScreenAdaptProvider.UpdateGlobalScreenAdaptType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb0455e8
	// Params: [ Num(1) Size(0x1) ]
	EGPScreenAdaptType UpdateGlobalScreenAdaptType();

	// Object: Function GPUserInterfaceCore.GPUIScreenAdaptProvider.SetUserOverrideType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb045544
	// Params: [ Num(1) Size(0x1) ]
	void SetUserOverrideType(EGPUserOverrideAdaptType InType);

	// Object: Function GPUserInterfaceCore.GPUIScreenAdaptProvider.QueryScreenParams
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb04544c
	// Params: [ Num(2) Size(0x31) ]
	uint8_t QueryScreenParams(struct FSimpleScreenParams& OutParams);

	// Object: Function GPUserInterfaceCore.GPUIScreenAdaptProvider.GetUserOverrideType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb045418
	// Params: [ Num(1) Size(0x1) ]
	EGPUserOverrideAdaptType GetUserOverrideType();

	// Object: Function GPUserInterfaceCore.GPUIScreenAdaptProvider.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb0453e4
	// Params: [ Num(1) Size(0x8) ]
	static struct UGPUIScreenAdaptProvider* Get();
	DEFINE_UE_CLASS_HELPERS(UGPUIScreenAdaptProvider, "GPUIScreenAdaptProvider")

};

// Object: Class GPUserInterfaceCore.LuaDragDropOperation
// Size: 0xC8 (Inherited: 0x88)
struct ULuaDragDropOperation : UDragDropOperation
{
	struct FVector2D DragOffset; // 0x88(0x8)
	struct FVector2D TargetPosition; // 0x90(0x8)
	struct FVector2D MousePosition; // 0x98(0x8)
	uint8_t bCancelByUser : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct UUserWidget* WidgetReference; // 0xA8(0x8)
	uint8_t bBroadcastLuaEvent : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x7]; // 0xB1(0x7)
	struct FString LuaEventName; // 0xB8(0x10)
	DEFINE_UE_CLASS_HELPERS(ULuaDragDropOperation, "LuaDragDropOperation")

};

// Object: Class GPUserInterfaceCore.UGPUINavigationStrategy_Cursor
// Size: 0x80 (Inherited: 0x80)
struct UUGPUINavigationStrategy_Cursor : UGPUINavigationStrategyBase
{	DEFINE_UE_CLASS_HELPERS(UUGPUINavigationStrategy_Cursor, "UGPUINavigationStrategy_Cursor")

};

} // namespace SDK
