#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: GMTool
// Enums: 2
// Structs: 12
// Classes: 9

struct APlayerController;
struct FCheckBoxStyle;
struct FComboBoxStyle;
struct FEditableTextBoxStyle;
struct UButton;
struct UCanvasPanel;
struct UCanvasPanelSlot;
struct UDataTable;
struct UTexture2D;
struct UUserWidget;
struct FCommandResult;
struct FCategoryIDName;
struct FTabIDName;
struct FGMCommandItemConfig;
struct FOptionsDataTableName;
struct FCommandField;
struct FInputTypeLabelColors;
struct FGMCommandHistoryEntry;
struct FGMCommandCategoryConfig;
struct FGMCommandTabConfig;
struct FTextArrayWrapper;
struct FCommandInfo;
struct UDraggableButton;
struct UGMCommandItemWidget;
struct UGMCommandPanel;
struct UGMToolBlueprintFunctionLibrary;
struct UGMToolConfig;
struct UGMToolGameInstanceSubsystem;
struct UGMToolManager;
struct UGMToolProjectConfig;
struct UMultiTypeInputWidget;

// Object: Enum GMTool.EDateTimeDisplayMode
enum class EDateTimeDisplayMode : uint8_t
{
	DateOnly = 0,
	TimeOnly = 1,
	DateAndTime = 2,
	EDateTimeDisplayMode_MAX = 3
};

// Object: Enum GMTool.EInputFieldType
enum class EInputFieldType : uint8_t
{
	None = 0,
	Text = 1,
	Integer = 2,
	Float = 3,
	DateTime = 4,
	Dropdown = 5,
	Boolean = 6,
	CharDropdown = 7,
	EInputFieldType_MAX = 8
};

// Object: ScriptStruct GMTool.CommandResult
// Size: 0x88 (Inherited: 0x0)
struct FCommandResult
{
	int32_t CommandID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString CommandString; // 0x8(0x10)
	struct TMap<struct FString, struct FString> FieldValues; // 0x18(0x50)
	bool bIsValid; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct TArray<struct FString> InvalidFields; // 0x70(0x10)
	struct UObject* EventContext; // 0x80(0x8)
};

// Object: ScriptStruct GMTool.CategoryIDName
// Size: 0x8 (Inherited: 0x0)
struct FCategoryIDName
{
	struct FName CategoryID; // 0x0(0x8)
};

// Object: ScriptStruct GMTool.TabIDName
// Size: 0x8 (Inherited: 0x0)
struct FTabIDName
{
	struct FName TabID; // 0x0(0x8)
};

// Object: ScriptStruct GMTool.GMCommandItemConfig
// Size: 0x80 (Inherited: 0x8)
struct FGMCommandItemConfig : FTableRowBase
{
	int32_t CommandID; // 0x8(0x4)
	struct FTabIDName TabID; // 0xC(0x8)
	struct FCategoryIDName CategoryID; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText ButtonText; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	int32_t SortOrder; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString CommandString; // 0x58(0x10)
	struct TArray<struct FCommandField> CommandFields; // 0x68(0x10)
	bool bCloseAfterExecution; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: ScriptStruct GMTool.OptionsDataTableName
// Size: 0x8 (Inherited: 0x0)
struct FOptionsDataTableName
{
	struct FName DataTableKey; // 0x0(0x8)
};

// Object: ScriptStruct GMTool.CommandField
// Size: 0x80 (Inherited: 0x0)
struct FCommandField
{
	struct FString FieldName; // 0x0(0x10)
	EInputFieldType FieldType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString DefaultValue; // 0x18(0x10)
	struct FString PlaceholderText; // 0x28(0x10)
	bool bRequired; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct FOptionsDataTableName OptionsDataTable; // 0x3C(0x8)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct FName> TextColumnNames; // 0x48(0x10)
	struct FName ImageColumnName; // 0x58(0x8)
	EDateTimeDisplayMode DateTimeMode; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct TArray<struct FString> CharOptions; // 0x68(0x10)
	float CustomWidth; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct GMTool.InputTypeLabelColors
// Size: 0x50 (Inherited: 0x0)
struct FInputTypeLabelColors
{
	struct FLinearColor TextInputColor; // 0x0(0x10)
	struct FLinearColor NumberInputColor; // 0x10(0x10)
	struct FLinearColor DropdownInputColor; // 0x20(0x10)
	struct FLinearColor MultiLineInputColor; // 0x30(0x10)
	struct FLinearColor BooleanInputColor; // 0x40(0x10)
};

// Object: ScriptStruct GMTool.GMCommandHistoryEntry
// Size: 0xD0 (Inherited: 0x0)
struct FGMCommandHistoryEntry
{
	int32_t CommandID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FDateTime ExecutionTime; // 0x8(0x8)
	struct FCommandResult Parameters; // 0x10(0x88)
	struct FText CommandName; // 0x98(0x18)
	struct FString ParamSummary; // 0xB0(0x10)
	struct FName TabID; // 0xC0(0x8)
	struct FName CategoryID; // 0xC8(0x8)
};

// Object: ScriptStruct GMTool.GMCommandCategoryConfig
// Size: 0x28 (Inherited: 0x0)
struct FGMCommandCategoryConfig
{
	struct FName CategoryID; // 0x0(0x8)
	bool bExpandByDefault; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FText Description; // 0x10(0x18)
};

// Object: ScriptStruct GMTool.GMCommandTabConfig
// Size: 0x48 (Inherited: 0x8)
struct FGMCommandTabConfig : FTableRowBase
{
	struct FName TabID; // 0x8(0x8)
	struct UTexture2D* ICON; // 0x10(0x8)
	int32_t SortOrder; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText Description; // 0x20(0x18)
	struct TArray<struct FGMCommandCategoryConfig> Categories; // 0x38(0x10)
};

// Object: ScriptStruct GMTool.TextArrayWrapper
// Size: 0x10 (Inherited: 0x0)
struct FTextArrayWrapper
{
	struct TArray<struct FString> TextArray; // 0x0(0x10)
};

// Object: ScriptStruct GMTool.CommandInfo
// Size: 0x30 (Inherited: 0x0)
struct FCommandInfo
{
	struct FString CommandName; // 0x0(0x10)
	struct FString Description; // 0x10(0x10)
	struct FString Category; // 0x20(0x10)
};

// Object: Class GMTool.DraggableButton
// Size: 0x510 (Inherited: 0x498)
struct UDraggableButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UDraggableButton, "DraggableButton")

	struct FMulticastInlineDelegate OnDragStarted; // 0x498(0x10)
	struct FMulticastInlineDelegate OnDragEnded; // 0x4A8(0x10)
	bool bCanDrag; // 0x4B8(0x1)
	uint8_t Pad_0x4B9[0x3]; // 0x4B9(0x3)
	float ClickTimeThreshold; // 0x4BC(0x4)
	float DragSensitivity; // 0x4C0(0x4)
	struct FMargin BoundaryPadding; // 0x4C4(0x10)
	uint8_t Pad_0x4D4[0x34]; // 0x4D4(0x34)
	struct UCanvasPanelSlot* CanvasSlot; // 0x508(0x8)

	// Object: Function GMTool.DraggableButton.SetPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x4022098
	// Params: [ Num(1) Size(0x8) ]
	void SetPosition(const struct FVector2D& NewPosition);

	// Object: Function GMTool.DraggableButton.SetDragSensitivity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4022148
	// Params: [ Num(1) Size(0x4) ]
	void SetDragSensitivity(float InSensitivity);

	// Object: Function GMTool.DraggableButton.SetDraggable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40222b4
	// Params: [ Num(1) Size(0x1) ]
	void SetDraggable(bool bInDraggable);

	// Object: Function GMTool.DraggableButton.SetClickTimeThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40221f0
	// Params: [ Num(1) Size(0x4) ]
	void SetClickTimeThreshold(float InTime);

	// Object: Function GMTool.DraggableButton.SetCanvasPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4021fbc
	// Params: [ Num(1) Size(0x8) ]
	void SetCanvasPanel(struct UCanvasPanel* InCanvasPanel);

	// Object: Function GMTool.DraggableButton.IsDraggable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4022298
	// Params: [ Num(1) Size(0x1) ]
	bool IsDraggable();

	// Object: Function GMTool.DraggableButton.HandleOnReleased
	// Flags: [Final|Native|Protected]
	// Offset: 0x4022378
	// Params: [ Num(0) Size(0x0) ]
	void HandleOnReleased();

	// Object: Function GMTool.DraggableButton.HandleOnPressed
	// Flags: [Final|Native|Protected]
	// Offset: 0x402238c
	// Params: [ Num(0) Size(0x0) ]
	void HandleOnPressed();

	// Object: Function GMTool.DraggableButton.HandleOnClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x4022364
	// Params: [ Num(0) Size(0x0) ]
	void HandleOnClicked();

	// Object: Function GMTool.DraggableButton.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4022064
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPosition();

	// Object: Function GMTool.DraggableButton.GetCanvasSlot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4021f88
	// Params: [ Num(1) Size(0x8) ]
	struct UCanvasPanelSlot* GetCanvasSlot();
};

// Object: Class GMTool.GMCommandItemWidget
// Size: 0x1B30 (Inherited: 0x130)
struct UGMCommandItemWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UGMCommandItemWidget, "GMCommandItemWidget")

	uint8_t Pad_0x130[0x60]; // 0x130(0x60)
	struct FGMCommandItemConfig ItemConfig; // 0x190(0x80)
	struct FSlateFontInfo CustomFont; // 0x210(0x60)
	bool bUseCustomStyles; // 0x270(0x1)
	uint8_t Pad_0x271[0x7]; // 0x271(0x7)
	struct FButtonStyle ExecuteButtonStyle; // 0x278(0x298)
	struct FButtonStyle TipButtonStyle; // 0x510(0x298)
	struct FEditableTextBoxStyle InputBoxStyle; // 0x7A8(0x868)
	struct FComboBoxStyle DropdownStyle; // 0x1010(0x420)
	struct FCheckBoxStyle CheckBoxStyle; // 0x1430(0x5C8)
	struct FSlateBrush BorderBrush; // 0x19F8(0x90)
	struct FLinearColor BorderColor; // 0x1A88(0x10)
	struct FInputTypeLabelColors CustomLabelColors; // 0x1A98(0x50)
	float ExecuteButtonWidth; // 0x1AE8(0x4)
	uint8_t Pad_0x1AEC[0x4]; // 0x1AEC(0x4)
	struct FMulticastInlineDelegate OnCommandSubmitted; // 0x1AF0(0x10)
	struct FMulticastInlineDelegate OnFieldValueChanged; // 0x1B00(0x10)
	struct FMulticastInlineDelegate OnDropdownSelection; // 0x1B10(0x10)
	struct FMulticastInlineDelegate OnDescriptionTipClicked; // 0x1B20(0x10)

	// Object: Function GMTool.GMCommandItemWidget.ValidateAllFields
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40223f4
	// Params: [ Num(2) Size(0x11) ]
	bool ValidateAllFields(struct TArray<struct FString>& OutInvalidFields);

	// Object: Function GMTool.GMCommandItemWidget.SetParameterValues
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4022660
	// Params: [ Num(1) Size(0x88) ]
	void SetParameterValues(const struct FCommandResult& Parameters);

	// Object: Function GMTool.GMCommandItemWidget.SetItemConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40229d0
	// Params: [ Num(1) Size(0x80) ]
	void SetItemConfig(const struct FGMCommandItemConfig& InConfig);

	// Object: Function GMTool.GMCommandItemWidget.SetFieldValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4022770
	// Params: [ Num(2) Size(0x28) ]
	void SetFieldValue(struct FString FieldName, const struct FText& NewValue);

	// Object: Function GMTool.GMCommandItemWidget.SetFieldDropdownOptions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40228c8
	// Params: [ Num(2) Size(0x20) ]
	void SetFieldDropdownOptions(struct FString FieldName, const struct TArray<struct FString>& Options);

	// Object: DelegateFunction GMTool.GMCommandItemWidget.OnFieldValueChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x28) ]
	void OnFieldValueChangedEvent__DelegateSignature(struct FString FieldName, const struct FText& NewValue);

	// Object: DelegateFunction GMTool.GMCommandItemWidget.OnDropdownSelectionEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	void OnDropdownSelectionEvent__DelegateSignature(struct FString FieldName, struct FString Selection);

	// Object: DelegateFunction GMTool.GMCommandItemWidget.OnDescriptionTipClicked__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnDescriptionTipClicked__DelegateSignature();

	// Object: DelegateFunction GMTool.GMCommandItemWidget.OnCommandSubmittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x88) ]
	void OnCommandSubmittedEvent__DelegateSignature(const struct FCommandResult& Result);

	// Object: Function GMTool.GMCommandItemWidget.GetFieldValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x402253c
	// Params: [ Num(2) Size(0x28) ]
	struct FText GetFieldValue(struct FString FieldName);

	// Object: Function GMTool.GMCommandItemWidget.GetAllFieldValues
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40224bc
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<struct FString, struct FString> GetAllFieldValues();

	// Object: Function GMTool.GMCommandItemWidget.ExecuteCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40223cc
	// Params: [ Num(0) Size(0x0) ]
	void ExecuteCommand();

	// Object: Function GMTool.GMCommandItemWidget.ClearAllFields
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40223e0
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllFields();
};

// Object: Class GMTool.GMCommandPanel
// Size: 0x560 (Inherited: 0x130)
struct UGMCommandPanel : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UGMCommandPanel, "GMCommandPanel")

	struct TArray<struct FGMCommandTabConfig> TabConfigs; // 0x130(0x10)
	struct TArray<struct FGMCommandCategoryConfig> CategoryConfigs; // 0x140(0x10)
	struct TMap<int32_t, struct FGMCommandItemConfig> CommandConfigsMap; // 0x150(0x50)
	struct TArray<struct FGMCommandItemConfig> CommandConfigs; // 0x1A0(0x10)
	uint8_t Pad_0x1B0[0x50]; // 0x1B0(0x50)
	struct TMap<struct FName, struct FGMCommandCategoryConfig> CategoryConfigMap; // 0x200(0x50)
	uint8_t Pad_0x250[0x20]; // 0x250(0x20)
	struct TMap<struct FName, bool> CategoryExpandStates; // 0x270(0x50)
	uint8_t Pad_0x2C0[0x70]; // 0x2C0(0x70)
	struct TArray<struct FGMCommandHistoryEntry> CommandHistory; // 0x330(0x10)
	struct TMap<int32_t, struct UGMCommandItemWidget*> CommandWidgets; // 0x340(0x50)
	struct TArray<struct UGMCommandItemWidget*> CommandItemWidgets; // 0x390(0x10)
	struct TMap<struct UButton*, struct FName> TabButtonIDMap; // 0x3A0(0x50)
	uint8_t Pad_0x3F0[0x20]; // 0x3F0(0x20)
	struct UGMCommandItemWidget* CommandItemWidgetClass; // 0x410(0x8)
	struct FLinearColor ActiveTabColor; // 0x418(0x10)
	struct FLinearColor InactiveTabColor; // 0x428(0x10)
	struct FLinearColor SearchHighlightColor; // 0x438(0x10)
	struct FLinearColor BackgroundColor; // 0x448(0x10)
	struct FLinearColor SearchButtonColor; // 0x458(0x10)
	struct FLinearColor HistoryButtonColor; // 0x468(0x10)
	struct FLinearColor CloseButtonColor; // 0x478(0x10)
	struct FLinearColor TabActionButtonColor; // 0x488(0x10)
	struct FSlateFontInfo CustomFont; // 0x498(0x60)
	float TabFontSizeMultiplier; // 0x4F8(0x4)
	int32_t MaxHistoryEntries; // 0x4FC(0x4)
	struct FName SearchTabID; // 0x500(0x8)
	struct FText SearchTabText; // 0x508(0x18)
	struct FName HistoryTabID; // 0x520(0x8)
	struct FText HistoryTabText; // 0x528(0x18)
	struct FMulticastInlineDelegate OnCommandExecuted; // 0x540(0x10)
	struct FMulticastInlineDelegate OnClose; // 0x550(0x10)

	// Object: Function GMTool.GMCommandPanel.SwitchToTab
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4022ef4
	// Params: [ Num(1) Size(0x8) ]
	void SwitchToTab(const struct FName& TabID);

	// Object: Function GMTool.GMCommandPanel.SearchCommands
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4022e40
	// Params: [ Num(1) Size(0x10) ]
	void SearchCommands(struct FString SearchText);

	// Object: DelegateFunction GMTool.GMCommandPanel.OnCommandExecutedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x90) ]
	void OnCommandExecutedEvent__DelegateSignature(int32_t CommandID, const struct FCommandResult& Result);

	// Object: DelegateFunction GMTool.GMCommandPanel.OnCloseEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnCloseEvent__DelegateSignature();

	// Object: Function GMTool.GMCommandPanel.InitializePanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4022fa8
	// Params: [ Num(2) Size(0x10) ]
	void InitializePanel(struct UDataTable* TabConfigTable, struct UDataTable* CommandConfigTable);

	// Object: Function GMTool.GMCommandPanel.HandleCommandSubmitted
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x4022ba0
	// Params: [ Num(1) Size(0x88) ]
	void HandleCommandSubmitted(const struct FCommandResult& Result);

	// Object: Function GMTool.GMCommandPanel.HandleCommandExecuted
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x4022cb0
	// Params: [ Num(2) Size(0x90) ]
	void HandleCommandExecuted(int32_t CommandID, const struct FCommandResult& Result);

	// Object: Function GMTool.GMCommandPanel.ExpandAllCategoriesInCurrentTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4022e18
	// Params: [ Num(0) Size(0x0) ]
	void ExpandAllCategoriesInCurrentTab();

	// Object: Function GMTool.GMCommandPanel.CollapseAllCategoriesInCurrentTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4022e04
	// Params: [ Num(0) Size(0x0) ]
	void CollapseAllCategoriesInCurrentTab();

	// Object: Function GMTool.GMCommandPanel.ClearSearch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4022e2c
	// Params: [ Num(0) Size(0x0) ]
	void ClearSearch();
};

// Object: Class GMTool.GMToolBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGMToolBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGMToolBlueprintFunctionLibrary, "GMToolBlueprintFunctionLibrary")

	// Object: Function GMTool.GMToolBlueprintFunctionLibrary.GetGMCommandString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x402318c
	// Params: [ Num(3) Size(0x70) ]
	static struct FString GetGMCommandString(struct FString CommandString, struct TMap<struct FString, struct FString> FieldValues);
};

// Object: Class GMTool.GMToolConfig
// Size: 0x1B0 (Inherited: 0x30)
struct UGMToolConfig : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UGMToolConfig, "GMToolConfig")

	struct TMap<EInputFieldType, float> InputDefaultWidthMap; // 0x30(0x50)
	float FillDefaultWidth; // 0x80(0x4)
	struct FInputTypeLabelColors LabelColors; // 0x84(0x50)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	struct TSoftObjectPtr<UDataTable> TabConfigDataTable; // 0xD8(0x28)
	struct FTabIDName DefaultTabID; // 0x100(0x8)
	struct TSoftObjectPtr<UDataTable> CommandConfigDataTable; // 0x108(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<UDataTable>> OptionsDataTableMap; // 0x130(0x50)
	struct TSoftClassPtr<struct UUserWidget*> GMToolWidgetClass; // 0x180(0x28)
	int32_t ZOrder; // 0x1A8(0x4)
	uint8_t Pad_0x1AC[0x4]; // 0x1AC(0x4)

	// Object: Function GMTool.GMToolConfig.UpdateFieldCustomWidth
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023620
	// Params: [ Num(1) Size(0x80) ]
	void UpdateFieldCustomWidth(struct FCommandField& Field);

	// Object: Function GMTool.GMToolConfig.GetTabConfigDataTable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40235ec
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetTabConfigDataTable();

	// Object: Function GMTool.GMToolConfig.GetOptionsDataTable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023458
	// Params: [ Num(2) Size(0x30) ]
	struct TSoftObjectPtr<UDataTable> GetOptionsDataTable(const struct FName& TableKey);

	// Object: Function GMTool.GMToolConfig.GetGMToolWidgetClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023384
	// Params: [ Num(1) Size(0x28) ]
	struct TSoftClassPtr<struct UUserWidget*> GetGMToolWidgetClass();

	// Object: Function GMTool.GMToolConfig.GetDefaultWidthForFieldType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023738
	// Params: [ Num(2) Size(0x8) ]
	float GetDefaultWidthForFieldType(EInputFieldType FieldType);

	// Object: Function GMTool.GMToolConfig.GetDefaultTabID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023584
	// Params: [ Num(1) Size(0x8) ]
	struct FTabIDName GetDefaultTabID();

	// Object: Function GMTool.GMToolConfig.GetCommandConfigDataTable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40235b8
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetCommandConfigDataTable();
};

// Object: Class GMTool.GMToolGameInstanceSubsystem
// Size: 0x100 (Inherited: 0x30)
struct UGMToolGameInstanceSubsystem : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGMToolGameInstanceSubsystem, "GMToolGameInstanceSubsystem")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct UGMToolConfig* InputFieldConfig; // 0x40(0x8)
	struct UDataTable* CachedTabConfigDataTable; // 0x48(0x8)
	struct UDataTable* CachedCommandConfigDataTable; // 0x50(0x8)
	struct TMap<struct FName, struct UDataTable*> LoadedOptionsDataTables; // 0x58(0x50)
	struct UUserWidget* GMToolWidgetInstance; // 0xA8(0x8)
	struct TMap<struct APlayerController*, struct UUserWidget*> GMToolWidgetInstances; // 0xB0(0x50)

	// Object: Function GMTool.GMToolGameInstanceSubsystem.OnShowGMToolPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4023898
	// Params: [ Num(1) Size(0x8) ]
	void OnShowGMToolPanel(struct APlayerController* PlayerController);

	// Object: Function GMTool.GMToolGameInstanceSubsystem.OnRemoveGMToolPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40237f0
	// Params: [ Num(1) Size(0x8) ]
	void OnRemoveGMToolPanel(struct APlayerController* PlayerController);

	// Object: Function GMTool.GMToolGameInstanceSubsystem.CreateAndShowGMToolWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4023940
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* CreateAndShowGMToolWidget(struct APlayerController* PlayerController);
};

// Object: Class GMTool.GMToolManager
// Size: 0x90 (Inherited: 0x28)
struct UGMToolManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGMToolManager, "GMToolManager")

	struct UGMToolConfig* InputFieldConfig; // 0x28(0x8)
	struct TMap<struct FName, struct UDataTable*> LoadedOptionsDataTables; // 0x30(0x50)
	struct UDataTable* CachedTabConfigDataTable; // 0x80(0x8)
	struct UDataTable* CachedCommandConfigDataTable; // 0x88(0x8)

	// Object: Function GMTool.GMToolManager.UpdateFieldCustomWidth
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4024078
	// Params: [ Num(1) Size(0x80) ]
	void UpdateFieldCustomWidth(struct FCommandField& Field);

	// Object: Function GMTool.GMToolManager.GetToolConfig
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4024240
	// Params: [ Num(1) Size(0x8) ]
	struct UGMToolConfig* GetToolConfig();

	// Object: Function GMTool.GMToolManager.GetTabConfigDataTable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023d7c
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetTabConfigDataTable();

	// Object: Function GMTool.GMToolManager.GetTabCategoryIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40239f8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> GetTabCategoryIDs(const struct FName& TabID);

	// Object: Function GMTool.GMToolManager.GetOptionsDataTableKeys
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023c24
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetOptionsDataTableKeys();

	// Object: Function GMTool.GMToolManager.GetOptionsDataTable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4023cc0
	// Params: [ Num(2) Size(0x10) ]
	struct UDataTable* GetOptionsDataTable(const struct FName& TableKey);

	// Object: Function GMTool.GMToolManager.GetInputTypeLabelColors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x402403c
	// Params: [ Num(1) Size(0x50) ]
	struct FInputTypeLabelColors GetInputTypeLabelColors();

	// Object: Function GMTool.GMToolManager.GetDropdownItemImageByDataTable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023f00
	// Params: [ Num(4) Size(0x20) ]
	struct UTexture2D* GetDropdownItemImageByDataTable(struct UDataTable* DataTable, int32_t RowIndex, const struct FName& ImageColumnName);

	// Object: Function GMTool.GMToolManager.GetDropdownItemImage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4023db0
	// Params: [ Num(4) Size(0x20) ]
	struct UTexture2D* GetDropdownItemImage(const struct FOptionsDataTableName& DataTableName, int32_t RowIndex, const struct FName& ImageColumnName);

	// Object: Function GMTool.GMToolManager.GetDefaultWidthForFieldType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4024190
	// Params: [ Num(2) Size(0x8) ]
	float GetDefaultWidthForFieldType(EInputFieldType FieldType);

	// Object: Function GMTool.GMToolManager.GetAllTabIDs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023b88
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetAllTabIDs();

	// Object: Function GMTool.GMToolManager.GetAllCategoryIDs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4023aec
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetAllCategoryIDs();
};

// Object: Class GMTool.GMToolProjectConfig
// Size: 0x50 (Inherited: 0x38)
struct UGMToolProjectConfig : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UGMToolProjectConfig, "GMToolProjectConfig")

	struct FSoftObjectPath ToolConfigAssetPath; // 0x38(0x18)

	// Object: Function GMTool.GMToolProjectConfig.SetToolConfigAssetPath
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x402427c
	// Params: [ Num(1) Size(0x18) ]
	void SetToolConfigAssetPath(const struct FSoftObjectPath& NewPath);

	// Object: Function GMTool.GMToolProjectConfig.GetToolConfigAssetPath
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4024340
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetToolConfigAssetPath();

	// Object: Function GMTool.GMToolProjectConfig.GetGMToolProjectConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x40243e4
	// Params: [ Num(1) Size(0x8) ]
	static struct UGMToolProjectConfig* GetGMToolProjectConfig();
};

// Object: Class GMTool.MultiTypeInputWidget
// Size: 0x14E8 (Inherited: 0x130)
struct UMultiTypeInputWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UMultiTypeInputWidget, "MultiTypeInputWidget")

	struct FCommandField FieldConfig; // 0x130(0x80)
	int32_t MinValue; // 0x1B0(0x4)
	int32_t MaxValue; // 0x1B4(0x4)
	float MinFloatValue; // 0x1B8(0x4)
	float MaxFloatValue; // 0x1BC(0x4)
	float MaxDropdownHeight; // 0x1C0(0x4)
	uint8_t Pad_0x1C4[0x4]; // 0x1C4(0x4)
	struct FSlateFontInfo CustomFont; // 0x1C8(0x60)
	struct FEditableTextBoxStyle TextBoxStyle; // 0x228(0x868)
	struct FComboBoxStyle ComboBoxStyle; // 0xA90(0x420)
	struct FCheckBoxStyle CheckBoxStyle; // 0xEB0(0x5C8)
	uint8_t Pad_0x1478[0x10]; // 0x1478(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x1488(0x10)
	struct FMulticastInlineDelegate OnDropdownSelection; // 0x1498(0x10)
	uint8_t Pad_0x14A8[0x40]; // 0x14A8(0x40)

	// Object: Function GMTool.MultiTypeInputWidget.ValidateInput
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4024678
	// Params: [ Num(1) Size(0x1) ]
	bool ValidateInput();

	// Object: Function GMTool.MultiTypeInputWidget.SetValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40248b0
	// Params: [ Num(1) Size(0x18) ]
	void SetValue(const struct FText& InValue);

	// Object: Function GMTool.MultiTypeInputWidget.SetTextBoxStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40245b8
	// Params: [ Num(1) Size(0x868) ]
	void SetTextBoxStyle(const struct FEditableTextBoxStyle& InStyle);

	// Object: Function GMTool.MultiTypeInputWidget.SetIntValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4024808
	// Params: [ Num(1) Size(0x4) ]
	void SetIntValue(int32_t InValue);

	// Object: Function GMTool.MultiTypeInputWidget.SetFloatValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4024760
	// Params: [ Num(1) Size(0x4) ]
	void SetFloatValue(float InValue);

	// Object: Function GMTool.MultiTypeInputWidget.SetDropdownOptionsWithTexts
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4024b38
	// Params: [ Num(1) Size(0x10) ]
	void SetDropdownOptionsWithTexts(const struct TArray<struct FTextArrayWrapper>& TextArrayWrappers);

	// Object: Function GMTool.MultiTypeInputWidget.SetDropdownOptions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4024c1c
	// Params: [ Num(1) Size(0x10) ]
	void SetDropdownOptions(const struct TArray<struct FString>& Options);

	// Object: Function GMTool.MultiTypeInputWidget.SetDateTimeValue
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x40246b0
	// Params: [ Num(1) Size(0x8) ]
	void SetDateTimeValue(const struct FDateTime& InValue);

	// Object: Function GMTool.MultiTypeInputWidget.SetComboBoxStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40244e0
	// Params: [ Num(1) Size(0x420) ]
	void SetComboBoxStyle(const struct FComboBoxStyle& InStyle);

	// Object: Function GMTool.MultiTypeInputWidget.SetCheckBoxStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4024420
	// Params: [ Num(1) Size(0x5C8) ]
	void SetCheckBoxStyle(const struct FCheckBoxStyle& InStyle);

	// Object: DelegateFunction GMTool.MultiTypeInputWidget.OnTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x18) ]
	void OnTextChangedEvent__DelegateSignature(const struct FText& NewValue);

	// Object: DelegateFunction GMTool.MultiTypeInputWidget.OnStringSelectionEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnStringSelectionEvent__DelegateSignature(struct FString Selection);

	// Object: Function GMTool.MultiTypeInputWidget.LoadOptionsFromDataTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4024b24
	// Params: [ Num(0) Size(0x0) ]
	void LoadOptionsFromDataTable();

	// Object: Function GMTool.MultiTypeInputWidget.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4024a58
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetValue();

	// Object: Function GMTool.MultiTypeInputWidget.GetIntValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x4024a24
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetIntValue();

	// Object: Function GMTool.MultiTypeInputWidget.GetFloatValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40249f0
	// Params: [ Num(1) Size(0x4) ]
	float GetFloatValue();

	// Object: Function GMTool.MultiTypeInputWidget.GetDateTimeValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40249bc
	// Params: [ Num(1) Size(0x8) ]
	struct FDateTime GetDateTimeValue();
};

} // namespace SDK
