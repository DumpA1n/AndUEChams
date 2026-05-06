#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: G6Base
// Enums: 0
// Structs: 0
// Classes: 11

struct UG6TickableGameObject;
struct UAssetStreamingMgr;
struct UDebugConsole;
struct UG6CustomScriptStatProfiler;
struct UG6LogicStep;
struct UG6LogicStep_SwitchLevel;
struct UG6LogicStepProcessor;
struct UG6LuaUEUtil;
struct UG6OnlineSession;
struct UG6PlatformGameInstance;
struct UG6PlatformGameInstanceManager;

// Object: Class G6Base.G6TickableGameObject
// Size: 0x30 (Inherited: 0x28)
struct UG6TickableGameObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6TickableGameObject, "G6TickableGameObject")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class G6Base.AssetStreamingMgr
// Size: 0x180 (Inherited: 0x30)
struct UAssetStreamingMgr : UG6TickableGameObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetStreamingMgr, "AssetStreamingMgr")

	uint8_t Pad_0x30[0x150]; // 0x30(0x150)
};

// Object: Class G6Base.DebugConsole
// Size: 0x468 (Inherited: 0x28)
struct UDebugConsole : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDebugConsole, "DebugConsole")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FMulticastInlineDelegate OnCustomConsoleCommandCommit; // 0x38(0x10)
	struct FMulticastInlineDelegate OnErrorMessageReceived; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNewMessageReceived; // 0x58(0x10)
	uint8_t Pad_0x68[0x400]; // 0x68(0x400)

	// Object: Function G6Base.DebugConsole.UnregisterCustomConsoleCommandInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x95408b0
	// Params: [ Num(1) Size(0x10) ]
	void UnregisterCustomConsoleCommandInfo(const struct TArray<struct FString>& InCustomCommandList);

	// Object: Function G6Base.DebugConsole.SetNonFilterMessagesUIDRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de8d58
	// Params: [ Num(2) Size(0x8) ]
	void SetNonFilterMessagesUIDRange(int32_t InStartId, int32_t InEndId);

	// Object: Function G6Base.DebugConsole.SetMaxMessagesCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95d1dbc
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxMessagesCount(int32_t InMaxCount);

	// Object: Function G6Base.DebugConsole.SetLogLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de912c
	// Params: [ Num(1) Size(0x1) ]
	void SetLogLevel(uint8_t LogLevel);

	// Object: Function G6Base.DebugConsole.SetLogFilterText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4de8f0c
	// Params: [ Num(1) Size(0x18) ]
	void SetLogFilterText(const struct FText& InFilterText);

	// Object: Function G6Base.DebugConsole.SetLogDisplayCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4de9078
	// Params: [ Num(1) Size(0x8) ]
	void SetLogDisplayCategory(const struct FName& CategoryName);

	// Object: Function G6Base.DebugConsole.ResetMessageFilter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95a0308
	// Params: [ Num(0) Size(0x0) ]
	void ResetMessageFilter();

	// Object: Function G6Base.DebugConsole.RegisterCustomConsoleCommandInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x969acb4
	// Params: [ Num(1) Size(0x10) ]
	void RegisterCustomConsoleCommandInfo(const struct TArray<struct FString>& InCustomCommandList);

	// Object: DelegateFunction G6Base.DebugConsole.OnNewMessageReceivedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnNewMessageReceivedEvent__DelegateSignature(struct FString MessageMarkupText);

	// Object: DelegateFunction G6Base.DebugConsole.OnErrorMessageReceivedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnErrorMessageReceivedEvent__DelegateSignature();

	// Object: DelegateFunction G6Base.DebugConsole.OnCustomConsoleCommandCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	void OnCustomConsoleCommandCommittedEvent__DelegateSignature(struct FString CommandName, struct FString ExtraArgs);

	// Object: Function G6Base.DebugConsole.IsMessageFiltered
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de8b04
	// Params: [ Num(2) Size(0x5) ]
	bool IsMessageFiltered(int32_t InMessageIndex);

	// Object: Function G6Base.DebugConsole.GetMessageUID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de8bb8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetMessageUID(int32_t InMessageIndex);

	// Object: Function G6Base.DebugConsole.GetMessageText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de8c68
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetMessageText(int32_t InMessageIndex);

	// Object: Function G6Base.DebugConsole.GetCurrentMessagesCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x93a2724
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentMessagesCount();

	// Object: Function G6Base.DebugConsole.GetConsoleInputHistory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4de8e3c
	// Params: [ Num(1) Size(0x10) ]
	void GetConsoleInputHistory(struct TArray<struct FString>& OutHistoryInputList);

	// Object: Function G6Base.DebugConsole.GetCommandAutoCompleteSuggestions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x91d0fe8
	// Params: [ Num(2) Size(0x28) ]
	void GetCommandAutoCompleteSuggestions(const struct FText& InInputText, struct TArray<struct FString>& OutAutoCompleteList);

	// Object: Function G6Base.DebugConsole.GetAvailableLogCategories
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95a3c40
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetAvailableLogCategories();

	// Object: Function G6Base.DebugConsole.CommitConsoleCommand
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x97e6d60
	// Params: [ Num(1) Size(0x18) ]
	void CommitConsoleCommand(const struct FText& InText);

	// Object: Function G6Base.DebugConsole.ClearAllDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de91d4
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllDisplayText();
};

// Object: Class G6Base.G6CustomScriptStatProfiler
// Size: 0x28 (Inherited: 0x28)
struct UG6CustomScriptStatProfiler : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6CustomScriptStatProfiler, "G6CustomScriptStatProfiler")

	// Object: Function G6Base.G6CustomScriptStatProfiler.UpdateStatProfilerData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de9c0c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateStatProfilerData();

	// Object: Function G6Base.G6CustomScriptStatProfiler.StartScopeByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de9ddc
	// Params: [ Num(1) Size(0x4) ]
	void StartScopeByIndex(int32_t InStatIndex);

	// Object: Function G6Base.G6CustomScriptStatProfiler.StartScope
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de9cf8
	// Params: [ Num(2) Size(0x14) ]
	int32_t StartScope(struct FString InStatName);

	// Object: Function G6Base.G6CustomScriptStatProfiler.IsStatProfileEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de95ac
	// Params: [ Num(1) Size(0x1) ]
	bool IsStatProfileEnabled();

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemUniqueFullName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de91fc
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetStatItemUniqueFullName(int32_t InStatItemIndex);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemParentLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4de98c8
	// Params: [ Num(2) Size(0x18) ]
	void GetStatItemParentLevel(int32_t InStatItemIndex, struct TArray<int32_t>& OutParentLevelItems);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemParentIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de99ec
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetStatItemParentIndex(int32_t InStatItemIndex);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemMaxChildCallDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de95e4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetStatItemMaxChildCallDepth(int32_t InStatItemIndex);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de930c
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetStatItemDisplayName(int32_t InStatItemIndex);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4de9744
	// Params: [ Num(3) Size(0x28) ]
	struct FString GetStatItemData(int32_t InStatItemIndex, struct TArray<float>& OutItemData);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemChildren
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4de9a9c
	// Params: [ Num(3) Size(0x19) ]
	void GetStatItemChildren(int32_t InStatItemIndex, struct TArray<int32_t>& OutChildItems, bool bScriptOnly);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetStatItemCallDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de9694
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetStatItemCallDepth(int32_t InStatItemIndex);

	// Object: Function G6Base.G6CustomScriptStatProfiler.GetItemIndexByNameAndDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de941c
	// Params: [ Num(4) Size(0x2C) ]
	int32_t GetItemIndexByNameAndDepth(struct FString InName, int32_t InCallDepth, struct FString InFullUniqueName);

	// Object: Function G6Base.G6CustomScriptStatProfiler.EndScope
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de9c20
	// Params: [ Num(1) Size(0x10) ]
	void EndScope(struct FString InStatName);

	// Object: Function G6Base.G6CustomScriptStatProfiler.CreateScriptStat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4de9e84
	// Params: [ Num(3) Size(0x24) ]
	int32_t CreateScriptStat(struct FString InStatName, struct FString InStatDesc);
};

// Object: Class G6Base.G6LogicStep
// Size: 0x30 (Inherited: 0x28)
struct UG6LogicStep : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6LogicStep, "G6LogicStep")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)

	// Object: Function G6Base.G6LogicStep.Shutdown
	// Flags: [Native|Public]
	// Offset: 0x4de9ff0
	// Params: [ Num(1) Size(0x1) ]
	bool Shutdown();
};

// Object: Class G6Base.G6LogicStep_SwitchLevel
// Size: 0x50 (Inherited: 0x30)
struct UG6LogicStep_SwitchLevel : UG6LogicStep
{
	DEFINE_UE_CLASS_HELPERS(UG6LogicStep_SwitchLevel, "G6LogicStep_SwitchLevel")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
};

// Object: Class G6Base.G6LogicStepProcessor
// Size: 0xA8 (Inherited: 0x28)
struct UG6LogicStepProcessor : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6LogicStepProcessor, "G6LogicStepProcessor")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UG6LogicStep* m_Cur_Running_LogicStep; // 0x38(0x8)
	uint8_t Pad_0x40[0x68]; // 0x40(0x68)
};

// Object: Class G6Base.G6LuaUEUtil
// Size: 0x28 (Inherited: 0x28)
struct UG6LuaUEUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6LuaUEUtil, "G6LuaUEUtil")

	// Object: Function G6Base.G6LuaUEUtil.TestEnsure
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x4dea524
	// Params: [ Num(0) Size(0x0) ]
	static void TestEnsure();

	// Object: Function G6Base.G6LuaUEUtil.TestCrash
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x4dea538
	// Params: [ Num(0) Size(0x0) ]
	static void TestCrash();

	// Object: Function G6Base.G6LuaUEUtil.ParseCommandLineString
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x4dea3d4
	// Params: [ Num(3) Size(0x21) ]
	static bool ParseCommandLineString(struct FString StrKey, struct FString& OutValue);

	// Object: Function G6Base.G6LuaUEUtil.ParseCommandLineInt
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x4dea2ac
	// Params: [ Num(3) Size(0x19) ]
	static bool ParseCommandLineInt(struct FString StrKey, int64_t& OutValue);

	// Object: Function G6Base.G6LuaUEUtil.ParseCommandLineFloat
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x4dea184
	// Params: [ Num(3) Size(0x15) ]
	static bool ParseCommandLineFloat(struct FString StrKey, float& OutValue);

	// Object: Function G6Base.G6LuaUEUtil.ParseCommandLineBool
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x4dea05c
	// Params: [ Num(3) Size(0x12) ]
	static bool ParseCommandLineBool(struct FString StrKey, bool& OutValue);

	// Object: Function G6Base.G6LuaUEUtil.GetUnixTimeMillisecond
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x4dea54c
	// Params: [ Num(1) Size(0x8) ]
	static int64_t GetUnixTimeMillisecond();
};

// Object: Class G6Base.G6OnlineSession
// Size: 0x40 (Inherited: 0x28)
struct UG6OnlineSession : UOnlineSession
{
	DEFINE_UE_CLASS_HELPERS(UG6OnlineSession, "G6OnlineSession")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class G6Base.G6PlatformGameInstance
// Size: 0x80 (Inherited: 0x28)
struct UG6PlatformGameInstance : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6PlatformGameInstance, "G6PlatformGameInstance")

	struct UDebugConsole* DebugConsole; // 0x28(0x8)
	struct UG6CustomScriptStatProfiler* Profiler; // 0x30(0x8)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	bool bUseG6OnlineSession; // 0x50(0x1)
	uint8_t Pad_0x51[0x1F]; // 0x51(0x1F)
	struct UG6LogicStepProcessor* LogicStepProcessor; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)

	// Object: Function G6Base.G6PlatformGameInstance.Lua
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4dea7c0
	// Params: [ Num(1) Size(0x10) ]
	void Lua(struct FString strLua);

	// Object: Function G6Base.G6PlatformGameInstance.DAWLua
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x4dea6b4
	// Params: [ Num(1) Size(0x10) ]
	void DAWLua(struct FString strLua);

	// Object: Function G6Base.G6PlatformGameInstance.ConsoleCMD
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	// Offset: 0x4dea5d0
	// Params: [ Num(1) Size(0x10) ]
	void ConsoleCMD(struct FString& Cmd);
};

// Object: Class G6Base.G6PlatformGameInstanceManager
// Size: 0xE0 (Inherited: 0x28)
struct UG6PlatformGameInstanceManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6PlatformGameInstanceManager, "G6PlatformGameInstanceManager")

	struct TMap<int32_t, struct UG6PlatformGameInstance*> mContainer; // 0x28(0x50)
	uint8_t Pad_0x78[0x68]; // 0x78(0x68)
};

} // namespace SDK
