#include "GMTool.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDraggableButton
void UDraggableButton::SetPosition(const struct FVector2D& NewPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "SetPosition");
    struct
    {
        struct FVector2D NewPosition;
    } Parms{};
    Parms.NewPosition = (struct FVector2D)NewPosition;
    this->ProcessEvent(Func, &Parms);
}

void UDraggableButton::SetDragSensitivity(float InSensitivity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "SetDragSensitivity");
    struct
    {
        float InSensitivity;
    } Parms{};
    Parms.InSensitivity = (float)InSensitivity;
    this->ProcessEvent(Func, &Parms);
}

void UDraggableButton::SetDraggable(bool bInDraggable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "SetDraggable");
    struct
    {
        bool bInDraggable;
    } Parms{};
    Parms.bInDraggable = (bool)bInDraggable;
    this->ProcessEvent(Func, &Parms);
}

void UDraggableButton::SetClickTimeThreshold(float InTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "SetClickTimeThreshold");
    struct
    {
        float InTime;
    } Parms{};
    Parms.InTime = (float)InTime;
    this->ProcessEvent(Func, &Parms);
}

void UDraggableButton::SetCanvasPanel(struct UCanvasPanel* InCanvasPanel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "SetCanvasPanel");
    struct
    {
        struct UCanvasPanel* InCanvasPanel;
    } Parms{};
    Parms.InCanvasPanel = (struct UCanvasPanel*)InCanvasPanel;
    this->ProcessEvent(Func, &Parms);
}

bool UDraggableButton::IsDraggable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "IsDraggable");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDraggableButton::HandleOnReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "HandleOnReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDraggableButton::HandleOnPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "HandleOnPressed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDraggableButton::HandleOnClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "HandleOnClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UDraggableButton::GetPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "GetPosition");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCanvasPanelSlot* UDraggableButton::GetCanvasSlot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DraggableButton", "GetCanvasSlot");
    struct
    {
        struct UCanvasPanelSlot* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGMCommandItemWidget
bool UGMCommandItemWidget::ValidateAllFields(struct TArray<struct FString>& OutInvalidFields)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "ValidateAllFields");
    struct
    {
        struct TArray<struct FString> OutInvalidFields;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutInvalidFields = Parms.OutInvalidFields;
    return Parms.ReturnValue;
}

void UGMCommandItemWidget::SetParameterValues(const struct FCommandResult& Parameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "SetParameterValues");
    struct
    {
        struct FCommandResult Parameters;
    } Parms{};
    Parms.Parameters = (struct FCommandResult)Parameters;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::SetItemConfig(const struct FGMCommandItemConfig& InConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "SetItemConfig");
    struct
    {
        struct FGMCommandItemConfig InConfig;
    } Parms{};
    Parms.InConfig = (struct FGMCommandItemConfig)InConfig;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::SetFieldValue(struct FString FieldName, const struct FText& NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "SetFieldValue");
    struct
    {
        struct FString FieldName;
        struct FText NewValue;
    } Parms{};
    Parms.FieldName = (struct FString)FieldName;
    Parms.NewValue = (struct FText)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::SetFieldDropdownOptions(struct FString FieldName, const struct TArray<struct FString>& Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "SetFieldDropdownOptions");
    struct
    {
        struct FString FieldName;
        struct TArray<struct FString> Options;
    } Parms{};
    Parms.FieldName = (struct FString)FieldName;
    Parms.Options = (struct TArray<struct FString>)Options;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::OnFieldValueChangedEvent__DelegateSignature(struct FString FieldName, const struct FText& NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "OnFieldValueChangedEvent__DelegateSignature");
    struct
    {
        struct FString FieldName;
        struct FText NewValue;
    } Parms{};
    Parms.FieldName = (struct FString)FieldName;
    Parms.NewValue = (struct FText)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::OnDropdownSelectionEvent__DelegateSignature(struct FString FieldName, struct FString Selection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "OnDropdownSelectionEvent__DelegateSignature");
    struct
    {
        struct FString FieldName;
        struct FString Selection;
    } Parms{};
    Parms.FieldName = (struct FString)FieldName;
    Parms.Selection = (struct FString)Selection;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::OnDescriptionTipClicked__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "OnDescriptionTipClicked__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::OnCommandSubmittedEvent__DelegateSignature(const struct FCommandResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "OnCommandSubmittedEvent__DelegateSignature");
    struct
    {
        struct FCommandResult Result;
    } Parms{};
    Parms.Result = (struct FCommandResult)Result;
    this->ProcessEvent(Func, &Parms);
}

struct FText UGMCommandItemWidget::GetFieldValue(struct FString FieldName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "GetFieldValue");
    struct
    {
        struct FString FieldName;
        struct FText ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FString)FieldName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FString, struct FString> UGMCommandItemWidget::GetAllFieldValues()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "GetAllFieldValues");
    struct
    {
        struct TMap<struct FString, struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGMCommandItemWidget::ExecuteCommand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "ExecuteCommand");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandItemWidget::ClearAllFields()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandItemWidget", "ClearAllFields");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGMCommandPanel
void UGMCommandPanel::SwitchToTab(const struct FName& TabID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "SwitchToTab");
    struct
    {
        struct FName TabID;
    } Parms{};
    Parms.TabID = (struct FName)TabID;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::SearchCommands(struct FString SearchText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "SearchCommands");
    struct
    {
        struct FString SearchText;
    } Parms{};
    Parms.SearchText = (struct FString)SearchText;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::OnCommandExecutedEvent__DelegateSignature(int32_t CommandID, const struct FCommandResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "OnCommandExecutedEvent__DelegateSignature");
    struct
    {
        int32_t CommandID;
        struct FCommandResult Result;
    } Parms{};
    Parms.CommandID = (int32_t)CommandID;
    Parms.Result = (struct FCommandResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::OnCloseEvent__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "OnCloseEvent__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::InitializePanel(struct UDataTable* TabConfigTable, struct UDataTable* CommandConfigTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "InitializePanel");
    struct
    {
        struct UDataTable* TabConfigTable;
        struct UDataTable* CommandConfigTable;
    } Parms{};
    Parms.TabConfigTable = (struct UDataTable*)TabConfigTable;
    Parms.CommandConfigTable = (struct UDataTable*)CommandConfigTable;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::HandleCommandSubmitted(const struct FCommandResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "HandleCommandSubmitted");
    struct
    {
        struct FCommandResult Result;
    } Parms{};
    Parms.Result = (struct FCommandResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::HandleCommandExecuted(int32_t CommandID, const struct FCommandResult& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "HandleCommandExecuted");
    struct
    {
        int32_t CommandID;
        struct FCommandResult Result;
    } Parms{};
    Parms.CommandID = (int32_t)CommandID;
    Parms.Result = (struct FCommandResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::ExpandAllCategoriesInCurrentTab()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "ExpandAllCategoriesInCurrentTab");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::CollapseAllCategoriesInCurrentTab()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "CollapseAllCategoriesInCurrentTab");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGMCommandPanel::ClearSearch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMCommandPanel", "ClearSearch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGMToolBlueprintFunctionLibrary
struct FString UGMToolBlueprintFunctionLibrary::GetGMCommandString(struct FString CommandString, struct TMap<struct FString, struct FString> FieldValues)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GMToolBlueprintFunctionLibrary", "GetGMCommandString");
    struct
    {
        struct FString CommandString;
        struct TMap<struct FString, struct FString> FieldValues;
        struct FString ReturnValue;
    } Parms{};
    Parms.CommandString = (struct FString)CommandString;
    Parms.FieldValues = (struct TMap<struct FString, struct FString>)FieldValues;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGMToolConfig
void UGMToolConfig::UpdateFieldCustomWidth(struct FCommandField& Field)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolConfig", "UpdateFieldCustomWidth");
    struct
    {
        struct FCommandField Field;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Field = Parms.Field;
}

struct UDataTable* UGMToolConfig::GetTabConfigDataTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolConfig", "GetTabConfigDataTable");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TSoftObjectPtr<UDataTable> UGMToolConfig::GetOptionsDataTable(const struct FName& TableKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolConfig", "GetOptionsDataTable");
    struct
    {
        struct FName TableKey;
        struct TSoftObjectPtr<UDataTable> ReturnValue;
    } Parms{};
    Parms.TableKey = (struct FName)TableKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TSoftClassPtr<struct UUserWidget*> UGMToolConfig::GetGMToolWidgetClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolConfig", "GetGMToolWidgetClass");
    struct
    {
        struct TSoftClassPtr<struct UUserWidget*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGMToolConfig::GetDefaultWidthForFieldType(EInputFieldType FieldType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolConfig", "GetDefaultWidthForFieldType");
    struct
    {
        enum EInputFieldType FieldType;
        float ReturnValue;
    } Parms{};
    Parms.FieldType = (enum EInputFieldType)FieldType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTabIDName UGMToolConfig::GetDefaultTabID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolConfig", "GetDefaultTabID");
    struct
    {
        struct FTabIDName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UGMToolConfig::GetCommandConfigDataTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolConfig", "GetCommandConfigDataTable");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGMToolGameInstanceSubsystem
void UGMToolGameInstanceSubsystem::OnShowGMToolPanel(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolGameInstanceSubsystem", "OnShowGMToolPanel");
    struct
    {
        struct APlayerController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
}

void UGMToolGameInstanceSubsystem::OnRemoveGMToolPanel(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolGameInstanceSubsystem", "OnRemoveGMToolPanel");
    struct
    {
        struct APlayerController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* UGMToolGameInstanceSubsystem::CreateAndShowGMToolWidget(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolGameInstanceSubsystem", "CreateAndShowGMToolWidget");
    struct
    {
        struct APlayerController* PlayerController;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGMToolManager
void UGMToolManager::UpdateFieldCustomWidth(struct FCommandField& Field)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "UpdateFieldCustomWidth");
    struct
    {
        struct FCommandField Field;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Field = Parms.Field;
}

struct UGMToolConfig* UGMToolManager::GetToolConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetToolConfig");
    struct
    {
        struct UGMToolConfig* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UGMToolManager::GetTabConfigDataTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetTabConfigDataTable");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UGMToolManager::GetTabCategoryIDs(const struct FName& TabID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetTabCategoryIDs");
    struct
    {
        struct FName TabID;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.TabID = (struct FName)TabID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UGMToolManager::GetOptionsDataTableKeys()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetOptionsDataTableKeys");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UGMToolManager::GetOptionsDataTable(const struct FName& TableKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetOptionsDataTable");
    struct
    {
        struct FName TableKey;
        struct UDataTable* ReturnValue;
    } Parms{};
    Parms.TableKey = (struct FName)TableKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FInputTypeLabelColors UGMToolManager::GetInputTypeLabelColors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetInputTypeLabelColors");
    struct
    {
        struct FInputTypeLabelColors ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UGMToolManager::GetDropdownItemImageByDataTable(struct UDataTable* DataTable, int32_t RowIndex, const struct FName& ImageColumnName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetDropdownItemImageByDataTable");
    struct
    {
        struct UDataTable* DataTable;
        int32_t RowIndex;
        struct FName ImageColumnName;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.DataTable = (struct UDataTable*)DataTable;
    Parms.RowIndex = (int32_t)RowIndex;
    Parms.ImageColumnName = (struct FName)ImageColumnName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UGMToolManager::GetDropdownItemImage(const struct FOptionsDataTableName& DataTableName, int32_t RowIndex, const struct FName& ImageColumnName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetDropdownItemImage");
    struct
    {
        struct FOptionsDataTableName DataTableName;
        int32_t RowIndex;
        struct FName ImageColumnName;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.DataTableName = (struct FOptionsDataTableName)DataTableName;
    Parms.RowIndex = (int32_t)RowIndex;
    Parms.ImageColumnName = (struct FName)ImageColumnName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGMToolManager::GetDefaultWidthForFieldType(EInputFieldType FieldType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetDefaultWidthForFieldType");
    struct
    {
        enum EInputFieldType FieldType;
        float ReturnValue;
    } Parms{};
    Parms.FieldType = (enum EInputFieldType)FieldType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UGMToolManager::GetAllTabIDs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetAllTabIDs");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UGMToolManager::GetAllCategoryIDs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolManager", "GetAllCategoryIDs");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGMToolProjectConfig
void UGMToolProjectConfig::SetToolConfigAssetPath(const struct FSoftObjectPath& NewPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolProjectConfig", "SetToolConfigAssetPath");
    struct
    {
        struct FSoftObjectPath NewPath;
    } Parms{};
    Parms.NewPath = (struct FSoftObjectPath)NewPath;
    this->ProcessEvent(Func, &Parms);
}

struct FSoftObjectPath UGMToolProjectConfig::GetToolConfigAssetPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GMToolProjectConfig", "GetToolConfigAssetPath");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGMToolProjectConfig* UGMToolProjectConfig::GetGMToolProjectConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GMToolProjectConfig", "GetGMToolProjectConfig");
    struct
    {
        struct UGMToolProjectConfig* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMultiTypeInputWidget
bool UMultiTypeInputWidget::ValidateInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "ValidateInput");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMultiTypeInputWidget::SetValue(const struct FText& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetValue");
    struct
    {
        struct FText InValue;
    } Parms{};
    Parms.InValue = (struct FText)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetTextBoxStyle(const struct FEditableTextBoxStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetTextBoxStyle");
    struct
    {
        struct FEditableTextBoxStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FEditableTextBoxStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetIntValue(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetIntValue");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetFloatValue(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetFloatValue");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetDropdownOptionsWithTexts(const struct TArray<struct FTextArrayWrapper>& TextArrayWrappers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetDropdownOptionsWithTexts");
    struct
    {
        struct TArray<struct FTextArrayWrapper> TextArrayWrappers;
    } Parms{};
    Parms.TextArrayWrappers = (struct TArray<struct FTextArrayWrapper>)TextArrayWrappers;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetDropdownOptions(const struct TArray<struct FString>& Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetDropdownOptions");
    struct
    {
        struct TArray<struct FString> Options;
    } Parms{};
    Parms.Options = (struct TArray<struct FString>)Options;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetDateTimeValue(const struct FDateTime& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetDateTimeValue");
    struct
    {
        struct FDateTime InValue;
    } Parms{};
    Parms.InValue = (struct FDateTime)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetComboBoxStyle(const struct FComboBoxStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetComboBoxStyle");
    struct
    {
        struct FComboBoxStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FComboBoxStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::SetCheckBoxStyle(const struct FCheckBoxStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "SetCheckBoxStyle");
    struct
    {
        struct FCheckBoxStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FCheckBoxStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::OnTextChangedEvent__DelegateSignature(const struct FText& NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "OnTextChangedEvent__DelegateSignature");
    struct
    {
        struct FText NewValue;
    } Parms{};
    Parms.NewValue = (struct FText)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::OnStringSelectionEvent__DelegateSignature(struct FString Selection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "OnStringSelectionEvent__DelegateSignature");
    struct
    {
        struct FString Selection;
    } Parms{};
    Parms.Selection = (struct FString)Selection;
    this->ProcessEvent(Func, &Parms);
}

void UMultiTypeInputWidget::LoadOptionsFromDataTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "LoadOptionsFromDataTable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FText UMultiTypeInputWidget::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "GetValue");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMultiTypeInputWidget::GetIntValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "GetIntValue");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMultiTypeInputWidget::GetFloatValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "GetFloatValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDateTime UMultiTypeInputWidget::GetDateTimeValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiTypeInputWidget", "GetDateTimeValue");
    struct
    {
        struct FDateTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
