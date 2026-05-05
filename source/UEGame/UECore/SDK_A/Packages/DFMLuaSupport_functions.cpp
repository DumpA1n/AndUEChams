#include "DFMLuaSupport.hpp"
#include "DFMGameSDK.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "GPUserInterfaceCore.hpp"
#include "UMG.hpp"
#include "UMGSplineArea.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ADFLuaActor
void ADFLuaActor::MarkWidgetRenderStateDirty(struct UWidgetComponent* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFLuaActor", "MarkWidgetRenderStateDirty");
    struct
    {
        struct UWidgetComponent* Widget;
    } Parms{};
    Parms.Widget = (struct UWidgetComponent*)Widget;
    this->ProcessEvent(Func, &Parms);
}

// ULuaDebugUtil
struct FPerfStatData ULuaDebugUtil::GetPerfStatData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDebugUtil", "GetPerfStatData");
    struct
    {
        struct FPerfStatData ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaDebugUtil::GetMaxSupportedRefreshRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDebugUtil", "GetMaxSupportedRefreshRate");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaDebugUtil::ForceSleepGamethread(float SleepTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDebugUtil", "ForceSleepGamethread");
    struct
    {
        float SleepTime;
    } Parms{};
    Parms.SleepTime = (float)SleepTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaDebugUtil::ForceMarkObjPendingKill(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDebugUtil", "ForceMarkObjPendingKill");
    struct
    {
        struct UObject* obj;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UObject* ULuaDebugUtil::CreateTransientObj(struct UObject* Outer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDebugUtil", "CreateTransientObj");
    struct
    {
        struct UObject* Outer;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Outer = (struct UObject*)Outer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaExtension
struct FString ULuaExtension::XOREncodeData(struct FString InData, struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "XOREncodeData");
    struct
    {
        struct FString InData;
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.InData = (struct FString)InData;
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::TestRefParam_FStruct(struct FGridSize& OutGridSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "TestRefParam_FStruct");
    struct
    {
        struct FGridSize OutGridSize;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGridSize = Parms.OutGridSize;
}

uint8_t ULuaExtension::TestReadINI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "TestReadINI");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::TestMofidyAnimation(struct UWidgetAnimation* Animation, struct UObject* BindObj, const struct FName& TrackName, int32_t SectionIndex, struct FName& PropertyName, int32_t FrameIndex, struct TArray<float> Vars)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "TestMofidyAnimation");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct UObject* BindObj;
        struct FName TrackName;
        int32_t SectionIndex;
        struct FName PropertyName;
        int32_t FrameIndex;
        struct TArray<float> Vars;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.BindObj = (struct UObject*)BindObj;
    Parms.TrackName = (struct FName)TrackName;
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.FrameIndex = (int32_t)FrameIndex;
    Parms.Vars = (struct TArray<float>)Vars;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PropertyName = Parms.PropertyName;
    return Parms.ReturnValue;
}

struct FString ULuaExtension::String2UpperMD5(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "String2UpperMD5");
    struct
    {
        struct FString str;
        struct FString ReturnValue;
    } Parms{};
    Parms.str = (struct FString)str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::ShowInGameHud(struct UObject* WorldContext, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "ShowInGameHud");
    struct
    {
        struct UObject* WorldContext;
        uint8_t bShow;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bShow = (uint8_t)bShow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SetVectorDataToTexture2D(struct UTexture2D* MaskTex, int32_t Width, int32_t Height, struct TArray<uint8_t> RData, struct TArray<uint8_t> GData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SetVectorDataToTexture2D");
    struct
    {
        struct UTexture2D* MaskTex;
        int32_t Width;
        int32_t Height;
        struct TArray<uint8_t> RData;
        struct TArray<uint8_t> GData;
    } Parms{};
    Parms.MaskTex = (struct UTexture2D*)MaskTex;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    Parms.RData = (struct TArray<uint8_t>)RData;
    Parms.GData = (struct TArray<uint8_t>)GData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SetLuaErrTipsFlag(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SetLuaErrTipsFlag");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SetGlobalDragTriggerDistance(float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SetGlobalDragTriggerDistance");
    struct
    {
        float Distance;
    } Parms{};
    Parms.Distance = (float)Distance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SetEnableLuaProfilerTick(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SetEnableLuaProfilerTick");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SetColorToTexture2D(struct UTexture2D* MaskTex, struct TArray<struct FColor> ColorData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SetColorToTexture2D");
    struct
    {
        struct UTexture2D* MaskTex;
        struct TArray<struct FColor> ColorData;
    } Parms{};
    Parms.MaskTex = (struct UTexture2D*)MaskTex;
    Parms.ColorData = (struct TArray<struct FColor>)ColorData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SaveMoLiFixError(EMetaError MetaError, int32_t InErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SaveMoLiFixError");
    struct
    {
        enum EMetaError MetaError;
        int32_t InErrorCode;
    } Parms{};
    Parms.MetaError = (enum EMetaError)MetaError;
    Parms.InErrorCode = (int32_t)InErrorCode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SaveMoLiFixData(const struct FMetaInfo& MetaInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SaveMoLiFixData");
    struct
    {
        struct FMetaInfo MetaInfo;
    } Parms{};
    Parms.MetaInfo = (struct FMetaInfo)MetaInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::SafeEngineForceGC(struct UGameInstance* GameInstance, uint8_t bForcePurge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "SafeEngineForceGC");
    struct
    {
        struct UGameInstance* GameInstance;
        uint8_t bForcePurge;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    Parms.bForcePurge = (uint8_t)bForcePurge;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::RoleInfoCopy2Clipboard(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "RoleInfoCopy2Clipboard");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::ReportLuaUIShow(struct FString ReportKeyPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "ReportLuaUIShow");
    struct
    {
        struct FString ReportKeyPath;
    } Parms{};
    Parms.ReportKeyPath = (struct FString)ReportKeyPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::ReportLuaUIClose(struct FString ReportKeyPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "ReportLuaUIClose");
    struct
    {
        struct FString ReportKeyPath;
    } Parms{};
    Parms.ReportKeyPath = (struct FString)ReportKeyPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::PrintLuaHotFixFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "PrintLuaHotFixFiles");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::OpenDolbyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "OpenDolbyAudio");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::Open3PPriorityNumFunctionLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Open3PPriorityNumFunctionLimit");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::MemOpt_SetCanvasPosAndSize(struct UCanvasPanelSlot* Slot, float posX, float posY, float SizeX, float SizeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "MemOpt_SetCanvasPosAndSize");
    struct
    {
        struct UCanvasPanelSlot* Slot;
        float posX;
        float posY;
        float SizeX;
        float SizeY;
    } Parms{};
    Parms.Slot = (struct UCanvasPanelSlot*)Slot;
    Parms.posX = (float)posX;
    Parms.posY = (float)posY;
    Parms.SizeX = (float)SizeX;
    Parms.SizeY = (float)SizeY;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::MemOpt_GetRelativeOffset(struct UWidget* Child, struct UWidget* Parent, float& RelativeX, float& RelativeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "MemOpt_GetRelativeOffset");
    struct
    {
        struct UWidget* Child;
        struct UWidget* Parent;
        float RelativeX;
        float RelativeY;
    } Parms{};
    Parms.Child = (struct UWidget*)Child;
    Parms.Parent = (struct UWidget*)Parent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    RelativeX = Parms.RelativeX;
    RelativeY = Parms.RelativeY;
}

void ULuaExtension::MemOpt_GetCanvasPosAndSize(struct UCanvasPanelSlot* Slot, float& posX, float& posY, float& SizeX, float& SizeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "MemOpt_GetCanvasPosAndSize");
    struct
    {
        struct UCanvasPanelSlot* Slot;
        float posX;
        float posY;
        float SizeX;
        float SizeY;
    } Parms{};
    Parms.Slot = (struct UCanvasPanelSlot*)Slot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    posX = Parms.posX;
    posY = Parms.posY;
    SizeX = Parms.SizeX;
    SizeY = Parms.SizeY;
}

void ULuaExtension::LuaSetWorldRenderingStatus(struct UObject* WorldContext, uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "LuaSetWorldRenderingStatus");
    struct
    {
        struct UObject* WorldContext;
        uint8_t bShow;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bShow = (uint8_t)bShow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::LuaErrTipsWithoutFrameWork(struct FString ErrStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "LuaErrTipsWithoutFrameWork");
    struct
    {
        struct FString ErrStr;
    } Parms{};
    Parms.ErrStr = (struct FString)ErrStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UObject* ULuaExtension::LoadClassByName(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "LoadClassByName");
    struct
    {
        struct FString Name;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::IsUObjectClass(struct FString ClassName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "IsUObjectClass");
    struct
    {
        struct FString ClassName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ClassName = (struct FString)ClassName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::IsMobileCharging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "IsMobileCharging");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::IsLuaDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "IsLuaDebug");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::InvalidateAllWidgets(uint8_t bClearResourcesImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "InvalidateAllWidgets");
    struct
    {
        uint8_t bClearResourcesImmediately;
    } Parms{};
    Parms.bClearResourcesImmediately = (uint8_t)bClearResourcesImmediately;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::InitSplineAreaWidgetForSlotView(struct USplineAreaWidget* SplineAreaWidget, float Thickness, struct FLinearColor SplineColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "InitSplineAreaWidgetForSlotView");
    struct
    {
        struct USplineAreaWidget* SplineAreaWidget;
        float Thickness;
        struct FLinearColor SplineColor;
    } Parms{};
    Parms.SplineAreaWidget = (struct USplineAreaWidget*)SplineAreaWidget;
    Parms.Thickness = (float)Thickness;
    Parms.SplineColor = (struct FLinearColor)SplineColor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::InitSplineAreaWidgetForKeySlotView(struct USplineAreaWidget* SplineAreaWidget, int32_t GridNum, int32_t MaxLength, float Thickness, struct FLinearColor SplineColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "InitSplineAreaWidgetForKeySlotView");
    struct
    {
        struct USplineAreaWidget* SplineAreaWidget;
        int32_t GridNum;
        int32_t MaxLength;
        float Thickness;
        struct FLinearColor SplineColor;
    } Parms{};
    Parms.SplineAreaWidget = (struct USplineAreaWidget*)SplineAreaWidget;
    Parms.GridNum = (int32_t)GridNum;
    Parms.MaxLength = (int32_t)MaxLength;
    Parms.Thickness = (float)Thickness;
    Parms.SplineColor = (struct FLinearColor)SplineColor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t ULuaExtension::GetUObjectAliveObjectNum(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetUObjectAliveObjectNum");
    struct
    {
        struct UGameInstance* GameInstance;
        int32_t ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture* ULuaExtension::GetTextureParameterValue(struct FName ParameterName, struct UMaterialInterface* MaterialInterface)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetTextureParameterValue");
    struct
    {
        struct FName ParameterName;
        struct UMaterialInterface* MaterialInterface;
        struct UTexture* ReturnValue;
    } Parms{};
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.MaterialInterface = (struct UMaterialInterface*)MaterialInterface;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::GetOSVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetOSVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::GetMainSceneRenderBufferSize(struct UObject* WorldContextObj, int32_t& OutSizeX, int32_t& OutSizeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetMainSceneRenderBufferSize");
    struct
    {
        struct UObject* WorldContextObj;
        int32_t OutSizeX;
        int32_t OutSizeY;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutSizeX = Parms.OutSizeX;
    OutSizeY = Parms.OutSizeY;
}

uint8_t ULuaExtension::GetLuaErrTipsFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetLuaErrTipsFlag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::GetLuaDebugPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetLuaDebugPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaExtension::GetItemLocationSubSpaceIndex(struct FItemLocation Loc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetItemLocationSubSpaceIndex");
    struct
    {
        struct FItemLocation Loc;
        int32_t ReturnValue;
    } Parms{};
    Parms.Loc = (struct FItemLocation)Loc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::GetInt32EnumString(struct FString EnumName, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetInt32EnumString");
    struct
    {
        struct FString EnumName;
        int32_t Value;
        struct FString ReturnValue;
    } Parms{};
    Parms.EnumName = (struct FString)EnumName;
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaExtension::GetGlobalDragTriggerDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetGlobalDragTriggerDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::GetFromClipboard()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetFromClipboard");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::GetDFAntiCheatUClassEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetDFAntiCheatUClassEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::GetDeviceMakeAndModel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetDeviceMakeAndModel");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::GetDeviceID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetDeviceID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaExtension::GetClassSize(struct FString ClassName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetClassSize");
    struct
    {
        struct FString ClassName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ClassName = (struct FString)ClassName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate ULuaExtension::GetCharacterInitializedDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetCharacterInitializedDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::GetAntiCheatUClassEncryptedValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetAntiCheatUClassEncryptedValue");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaExtension::GetAntiCheatUClassEncryptedBitFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetAntiCheatUClassEncryptedBitFlag");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::GetAceAntiCheatUClassEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GetAceAntiCheatUClassEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::GeneratePointEmitter(struct UObject* WorldContext, int32_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "GeneratePointEmitter");
    struct
    {
        struct UObject* WorldContext;
        int32_t ID;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ID = (int32_t)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString ULuaExtension::ForEachHotFixLuaSource2MD5()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "ForEachHotFixLuaSource2MD5");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::ForceGC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "ForceGC");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UObject* ULuaExtension::FindUIResObject(struct UObject* WorldContext, struct FString ResPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "FindUIResObject");
    struct
    {
        struct UObject* WorldContext;
        struct FString ResPath;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ResPath = (struct FString)ResPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::Ext_MakeDirectory(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_MakeDirectory");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t ULuaExtension::Ext_LoadFileToString(struct FString& OutStr, struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_LoadFileToString");
    struct
    {
        struct FString OutStr;
        struct FString FilePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutStr = Parms.OutStr;
    return Parms.ReturnValue;
}

void ULuaExtension::Ext_GetPlatformClientInfo(struct TMap<struct FString, struct FString>& Infos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_GetPlatformClientInfo");
    struct
    {
        struct TMap<struct FString, struct FString> Infos;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Infos = Parms.Infos;
}

void ULuaExtension::Ext_GetMultiModifyTimeStamps(struct TArray<struct FString> FilePaths, struct TArray<int64_t>& FileModifyTSArr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_GetMultiModifyTimeStamps");
    struct
    {
        struct TArray<struct FString> FilePaths;
        struct TArray<int64_t> FileModifyTSArr;
    } Parms{};
    Parms.FilePaths = (struct TArray<struct FString>)FilePaths;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    FileModifyTSArr = Parms.FileModifyTSArr;
}

int64_t ULuaExtension::Ext_GetModifyTimeStamp(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_GetModifyTimeStamp");
    struct
    {
        struct FString FilePath;
        int64_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t ULuaExtension::Ext_GetFileSize(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_GetFileSize");
    struct
    {
        struct FString Path;
        int64_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULuaExtension::Ext_GetDebugFile(struct FString Directory, struct FString Extension)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_GetDebugFile");
    struct
    {
        struct FString Directory;
        struct FString Extension;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Directory = (struct FString)Directory;
    Parms.Extension = (struct FString)Extension;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::Ext_FTimespan_ToFormatString(struct FTimespan Timespan, struct FString Format)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_FTimespan_ToFormatString");
    struct
    {
        struct FTimespan Timespan;
        struct FString Format;
        struct FString ReturnValue;
    } Parms{};
    Parms.Timespan = (struct FTimespan)Timespan;
    Parms.Format = (struct FString)Format;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaExtension::Ext_FTimespan_FormatGetText(struct FTimespan Timespan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_FTimespan_FormatGetText");
    struct
    {
        struct FTimespan Timespan;
        struct FString ReturnValue;
    } Parms{};
    Parms.Timespan = (struct FTimespan)Timespan;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::Ext_FindFilesRecursive(struct TArray<struct FString>& FileNames, struct FString StartDirectory, struct FString Filename, uint8_t Files, uint8_t Directories, uint8_t bClearFileNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_FindFilesRecursive");
    struct
    {
        struct TArray<struct FString> FileNames;
        struct FString StartDirectory;
        struct FString Filename;
        uint8_t Files;
        uint8_t Directories;
        uint8_t bClearFileNames;
    } Parms{};
    Parms.StartDirectory = (struct FString)StartDirectory;
    Parms.Filename = (struct FString)Filename;
    Parms.Files = (uint8_t)Files;
    Parms.Directories = (uint8_t)Directories;
    Parms.bClearFileNames = (uint8_t)bClearFileNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    FileNames = Parms.FileNames;
}

uint8_t ULuaExtension::Ext_FileExists(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_FileExists");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::Ext_DirectoryExists(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_DirectoryExists");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::Ext_DeleteDirectory(struct FString Path, uint8_t RequireExists, uint8_t Tree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_DeleteDirectory");
    struct
    {
        struct FString Path;
        uint8_t RequireExists;
        uint8_t Tree;
    } Parms{};
    Parms.Path = (struct FString)Path;
    Parms.RequireExists = (uint8_t)RequireExists;
    Parms.Tree = (uint8_t)Tree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::Ext_ATeamInfo_GatherAllMembers(struct AGPPlayerState* GPPlayerState, struct TArray<struct FTeamMemberInfo>& Members)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Ext_ATeamInfo_GatherAllMembers");
    struct
    {
        struct AGPPlayerState* GPPlayerState;
        struct TArray<struct FTeamMemberInfo> Members;
    } Parms{};
    Parms.GPPlayerState = (struct AGPPlayerState*)GPPlayerState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Members = Parms.Members;
}

void ULuaExtension::DestroyPartsDisplayActor(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "DestroyPartsDisplayActor");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::DeleteTransientTexture(struct UTexture2D* MaskTex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "DeleteTransientTexture");
    struct
    {
        struct UTexture2D* MaskTex;
    } Parms{};
    Parms.MaskTex = (struct UTexture2D*)MaskTex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::DeleteMoLiDirectoryRecursivelyByPath(struct FString DeletePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "DeleteMoLiDirectoryRecursivelyByPath");
    struct
    {
        struct FString DeletePath;
    } Parms{};
    Parms.DeletePath = (struct FString)DeletePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UTexture2D* ULuaExtension::CreateTransientTexture(int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "CreateTransientTexture");
    struct
    {
        int32_t Width;
        int32_t Height;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::CreatePartsDisplayActor(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "CreatePartsDisplayActor");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UWidgetAnimation* ULuaExtension::CopyWidgetAnimation(struct UWidgetAnimation* CloneFrom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "CopyWidgetAnimation");
    struct
    {
        struct UWidgetAnimation* CloneFrom;
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    Parms.CloneFrom = (struct UWidgetAnimation*)CloneFrom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::CloseDolbyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "CloseDolbyAudio");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaExtension::Close3PPriorityNumFunctionLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "Close3PPriorityNumFunctionLimit");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t ULuaExtension::CheckIsHDD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "CheckIsHDD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaExtension::CheckFileExist(struct FString FilePathAndExtension)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "CheckFileExist");
    struct
    {
        struct FString FilePathAndExtension;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FilePathAndExtension = (struct FString)FilePathAndExtension;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaExtension::ChangeTextBlockOutlineSize(struct UTextBlock* TextBlock, int32_t NewSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "ChangeTextBlockOutlineSize");
    struct
    {
        struct UTextBlock* TextBlock;
        int32_t NewSize;
    } Parms{};
    Parms.TextBlock = (struct UTextBlock*)TextBlock;
    Parms.NewSize = (int32_t)NewSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString ULuaExtension::CalcFileMD5(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaExtension", "CalcFileMD5");
    struct
    {
        struct FString InPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaItemDragConfigUtil
void ULuaItemDragConfigUtil::UpdateMaxDragPointSampleNum(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "UpdateMaxDragPointSampleNum");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::UpdateIgnoreFirstSample(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "UpdateIgnoreFirstSample");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::UpdateFastDragThreshold(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "UpdateFastDragThreshold");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::UpdateFastDragAngle(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "UpdateFastDragAngle");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::UpdateDragThreshold(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "UpdateDragThreshold");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::UpdateDragAngle(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "UpdateDragAngle");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::SyncWarehouseIVInteractive(struct ULuaUIBaseView* View, uint8_t bFirstAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "SyncWarehouseIVInteractive");
    struct
    {
        struct ULuaUIBaseView* View;
        uint8_t bFirstAdd;
    } Parms{};
    Parms.View = (struct ULuaUIBaseView*)View;
    Parms.bFirstAdd = (uint8_t)bFirstAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::SyncDragConfig2View(struct ULuaUIBaseView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "SyncDragConfig2View");
    struct
    {
        struct ULuaUIBaseView* View;
    } Parms{};
    Parms.View = (struct ULuaUIBaseView*)View;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::SetLongPressTriggerDuration(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "SetLongPressTriggerDuration");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaItemDragConfigUtil::InitDragConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "InitDragConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t ULuaItemDragConfigUtil::GetMaxDragPointSampleNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "GetMaxDragPointSampleNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaItemDragConfigUtil::GetIgnoreFirstSample()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "GetIgnoreFirstSample");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaItemDragConfigUtil::GetFastDragThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "GetFastDragThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaItemDragConfigUtil::GetFastDragAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "GetFastDragAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaItemDragConfigUtil::GetDragThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "GetDragThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaItemDragConfigUtil::GetDragAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaItemDragConfigUtil", "GetDragAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaLevelLoader
int32_t ULuaLevelLoader::RequestUnloadStreamLevel(struct FName UnloadLevelName, uint8_t bShouldBlockOnUnload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelLoader", "RequestUnloadStreamLevel");
    struct
    {
        struct FName UnloadLevelName;
        uint8_t bShouldBlockOnUnload;
        int32_t ReturnValue;
    } Parms{};
    Parms.UnloadLevelName = (struct FName)UnloadLevelName;
    Parms.bShouldBlockOnUnload = (uint8_t)bShouldBlockOnUnload;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaLevelLoader::RequestLoadStreamLevel(struct FName LoadLevelName, uint8_t bMakeVisibleAfterLoad, uint8_t bShouldBlockOnLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelLoader", "RequestLoadStreamLevel");
    struct
    {
        struct FName LoadLevelName;
        uint8_t bMakeVisibleAfterLoad;
        uint8_t bShouldBlockOnLoad;
        int32_t ReturnValue;
    } Parms{};
    Parms.LoadLevelName = (struct FName)LoadLevelName;
    Parms.bMakeVisibleAfterLoad = (uint8_t)bMakeVisibleAfterLoad;
    Parms.bShouldBlockOnLoad = (uint8_t)bShouldBlockOnLoad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaLevelLoader::OnStreamLevelUnloadFinished(int32_t UnloadID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelLoader", "OnStreamLevelUnloadFinished");
    struct
    {
        int32_t UnloadID;
    } Parms{};
    Parms.UnloadID = (int32_t)UnloadID;
    this->ProcessEvent(Func, &Parms);
}

void ULuaLevelLoader::OnStreamLevelLoadFinished(int32_t LoadID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelLoader", "OnStreamLevelLoadFinished");
    struct
    {
        int32_t LoadID;
    } Parms{};
    Parms.LoadID = (int32_t)LoadID;
    this->ProcessEvent(Func, &Parms);
}

struct ULevelStreaming* ULuaLevelLoader::GetStreamingLevel(int32_t LoadID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelLoader", "GetStreamingLevel");
    struct
    {
        int32_t LoadID;
        struct ULevelStreaming* ReturnValue;
    } Parms{};
    Parms.LoadID = (int32_t)LoadID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULuaLevelLoader* ULuaLevelLoader::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaLevelLoader", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct ULuaLevelLoader* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaLevelLoader::CancelLoad(int32_t LoadID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaLevelLoader", "CancelLoad");
    struct
    {
        int32_t LoadID;
    } Parms{};
    Parms.LoadID = (int32_t)LoadID;
    this->ProcessEvent(Func, &Parms);
}

// ULuaResourceConverter
uint8_t ULuaResourceConverter::IsEmptyTexture(struct UTexture* Tex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaResourceConverter", "IsEmptyTexture");
    struct
    {
        struct UTexture* Tex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Tex = (struct UTexture*)Tex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaResourceConverter::IsEmptyImage(struct UImage* Img)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaResourceConverter", "IsEmptyImage");
    struct
    {
        struct UImage* Img;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Img = (struct UImage*)Img;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture* ULuaResourceConverter::ConvertTextureFromBin(const struct TArray<uint8_t>& BinData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaResourceConverter", "ConvertTextureFromBin");
    struct
    {
        struct TArray<uint8_t> BinData;
        struct UTexture* ReturnValue;
    } Parms{};
    Parms.BinData = (struct TArray<uint8_t>)BinData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UImage* ULuaResourceConverter::ConvertImageFromBin(const struct TArray<uint8_t>& BinData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaResourceConverter", "ConvertImageFromBin");
    struct
    {
        struct TArray<uint8_t> BinData;
        struct UImage* ReturnValue;
    } Parms{};
    Parms.BinData = (struct TArray<uint8_t>)BinData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaResourceLoader
int32_t ULuaResourceLoader::RequestAsyncLoad(struct TArray<struct FString> InPaths, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaResourceLoader", "RequestAsyncLoad");
    struct
    {
        struct TArray<struct FString> InPaths;
        int32_t Priority;
        int32_t ReturnValue;
    } Parms{};
    Parms.InPaths = (struct TArray<struct FString>)InPaths;
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaResourceLoader::OnLoadComplete(int32_t BatchId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaResourceLoader", "OnLoadComplete");
    struct
    {
        int32_t BatchId;
    } Parms{};
    Parms.BatchId = (int32_t)BatchId;
    this->ProcessEvent(Func, &Parms);
}

void ULuaResourceLoader::OnFastLoadComplete(int32_t BatchId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaResourceLoader", "OnFastLoadComplete");
    struct
    {
        int32_t BatchId;
    } Parms{};
    Parms.BatchId = (int32_t)BatchId;
    this->ProcessEvent(Func, &Parms);
}

float ULuaResourceLoader::GetResourceSizeBytes(struct UObject* obj, int32_t Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaResourceLoader", "GetResourceSizeBytes");
    struct
    {
        struct UObject* obj;
        int32_t Mode;
        float ReturnValue;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    Parms.Mode = (int32_t)Mode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaResourceLoader::GetProgress(int32_t BatchId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaResourceLoader", "GetProgress");
    struct
    {
        int32_t BatchId;
        float ReturnValue;
    } Parms{};
    Parms.BatchId = (int32_t)BatchId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULuaResourceLoader* ULuaResourceLoader::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaResourceLoader", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct ULuaResourceLoader* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaResourceLoader::CancelLoad(int32_t BatchId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaResourceLoader", "CancelLoad");
    struct
    {
        int32_t BatchId;
    } Parms{};
    Parms.BatchId = (int32_t)BatchId;
    this->ProcessEvent(Func, &Parms);
}

void ULuaResourceLoader::CancelAllLoads()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaResourceLoader", "CancelAllLoads");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ULuaSubsystem
void ULuaSubsystem::UpdateUObjectReportConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "UpdateUObjectReportConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::TestObjectWarning(const struct TArray<struct FString>& Args, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "TestObjectWarning");
    struct
    {
        struct TArray<struct FString> Args;
        struct UWorld* World;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::TestObjectConstruct(const struct TArray<struct FString>& Args, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "TestObjectConstruct");
    struct
    {
        struct TArray<struct FString> Args;
        struct UWorld* World;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::StartLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "StartLua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ShutDownLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "ShutDownLua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::SetGCParam(struct UObject* obj, float limitSeconds, int32_t LimitCount, float Interval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "SetGCParam");
    struct
    {
        struct UObject* obj;
        float limitSeconds;
        int32_t LimitCount;
        float Interval;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    Parms.limitSeconds = (float)limitSeconds;
    Parms.LimitCount = (int32_t)LimitCount;
    Parms.Interval = (float)Interval;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ReSetGetMetaData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "ReSetGetMetaData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ReqSpareHttp2Download(struct FString UrlStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "ReqSpareHttp2Download");
    struct
    {
        struct FString UrlStr;
    } Parms{};
    Parms.UrlStr = (struct FString)UrlStr;
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ReqHttp2Download()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "ReqHttp2Download");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ReportUObjectSnapshot(uint8_t Upload2Cos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "ReportUObjectSnapshot");
    struct
    {
        uint8_t Upload2Cos;
    } Parms{};
    Parms.Upload2Cos = (uint8_t)Upload2Cos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ReportMoLiVer2GPM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "ReportMoLiVer2GPM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ReportEncData2CrashSight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "ReportEncData2CrashSight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::OnMetaGetFail(EMetaError MetaError, int32_t InErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "OnMetaGetFail");
    struct
    {
        enum EMetaError MetaError;
        int32_t InErrorCode;
    } Parms{};
    Parms.MetaError = (enum EMetaError)MetaError;
    Parms.InErrorCode = (int32_t)InErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::OnMapleGetFail(int32_t MapleError)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "OnMapleGetFail");
    struct
    {
        int32_t MapleError;
    } Parms{};
    Parms.MapleError = (int32_t)MapleError;
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::OnLocalPlayerPawnReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "OnLocalPlayerPawnReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UObject* ULuaSubsystem::LuaGetGameState(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "LuaGetGameState");
    struct
    {
        struct UObject* WorldContext;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULuaSubsystem::LuaGetFirstPlayerState(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "LuaGetFirstPlayerState");
    struct
    {
        struct UObject* WorldContext;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULuaSubsystem::LuaGetFirstPlayerController(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "LuaGetFirstPlayerController");
    struct
    {
        struct UObject* WorldContext;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULuaSubsystem::LuaGetFirstCharacter(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "LuaGetFirstCharacter");
    struct
    {
        struct UObject* WorldContext;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaSubsystem::LuaCallTrimMemory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "LuaCallTrimMemory");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t ULuaSubsystem::IsEnableUObjectReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "IsEnableUObjectReport");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaSubsystem::InitUObjectRepoter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "InitUObjectRepoter");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ImmediateFullGC(uint8_t bCallLuaGC, uint8_t bCallUEGC, uint8_t bImmediateUEGC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "ImmediateFullGC");
    struct
    {
        uint8_t bCallLuaGC;
        uint8_t bCallUEGC;
        uint8_t bImmediateUEGC;
    } Parms{};
    Parms.bCallLuaGC = (uint8_t)bCallLuaGC;
    Parms.bCallUEGC = (uint8_t)bCallUEGC;
    Parms.bImmediateUEGC = (uint8_t)bImmediateUEGC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t ULuaSubsystem::GetUObjectPendingDestoryObjectNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetUObjectPendingDestoryObjectNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaSubsystem::GetUObjectCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetUObjectCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t ULuaSubsystem::GetMoLiVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetMoLiVersion");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaSubsystem::GetMoLiUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetMoLiUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaSubsystem::GetMoLiTimestamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetMoLiTimestamp");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaSubsystem::GetMoLiMD5()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetMoLiMD5");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaSubsystem::GetMoLiFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetMoLiFlag");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::GetMoLiErrFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetMoLiErrFlag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaSubsystem::GetMixtureStr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetMixtureStr");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULuaSubsystem* ULuaSubsystem::GetLuaSubSystemMgrIns(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetLuaSubSystemMgrIns");
    struct
    {
        struct UObject* WorldContext;
        struct ULuaSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaSubsystem::GetLuaReleaseCallGCDelayTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetLuaReleaseCallGCDelayTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::GetIsLuaLowMemoryEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetIsLuaLowMemoryEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::GetIsLuaLogApplyShippingRule()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetIsLuaLogApplyShippingRule");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::GetGInjectLuaDebugSymbolOnStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetGInjectLuaDebugSymbolOnStart");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::GetGEnableLuaPackageWrapper()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetGEnableLuaPackageWrapper");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::GetGEnableLuaClassVtblLookup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "GetGEnableLuaClassVtblLookup");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaSubsystem::GetErrCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "GetErrCode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULuaSubsystem* ULuaSubsystem::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "Get");
    struct
    {
        struct ULuaSubsystem* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaSubsystem::FullGC(uint8_t bCallLuaGC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "FullGC");
    struct
    {
        uint8_t bCallLuaGC;
    } Parms{};
    Parms.bCallLuaGC = (uint8_t)bCallLuaGC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::EndMoLi(int32_t Flag, struct FString ErrStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "EndMoLi");
    struct
    {
        int32_t Flag;
        struct FString ErrStr;
    } Parms{};
    Parms.Flag = (int32_t)Flag;
    Parms.ErrStr = (struct FString)ErrStr;
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::DumpObj()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "DumpObj");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::DoUnZip(struct FString BeginPath, struct FString EndPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "DoUnZip");
    struct
    {
        struct FString BeginPath;
        struct FString EndPath;
    } Parms{};
    Parms.BeginPath = (struct FString)BeginPath;
    Parms.EndPath = (struct FString)EndPath;
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::DoMoLi()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "DoMoLi");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::DisConnectServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "DisConnectServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString ULuaSubsystem::Convert2PublicSavedPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "Convert2PublicSavedPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaSubsystem::ClearZip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "ClearZip");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ClearLuaFunctionInject(uint8_t bIncludeWhiteList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "ClearLuaFunctionInject");
    struct
    {
        uint8_t bIncludeWhiteList;
    } Parms{};
    Parms.bIncludeWhiteList = (uint8_t)bIncludeWhiteList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::ClearAllLuaFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "ClearAllLuaFile");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t ULuaSubsystem::CheckPathValid(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "CheckPathValid");
    struct
    {
        struct FString Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::CheckNeedLuaMoLi()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "CheckNeedLuaMoLi");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaSubsystem::CheckGetMetaData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "CheckGetMetaData");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaSubsystem::CheckFullGC(uint8_t bImmediateGC, uint8_t bImmediateUEGC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaSubsystem", "CheckFullGC");
    struct
    {
        uint8_t bImmediateGC;
        uint8_t bImmediateUEGC;
    } Parms{};
    Parms.bImmediateGC = (uint8_t)bImmediateGC;
    Parms.bImmediateUEGC = (uint8_t)bImmediateUEGC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::CacheMetaInfo(const struct FMetaInfo& MetaInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "CacheMetaInfo");
    struct
    {
        struct FMetaInfo MetaInfo;
    } Parms{};
    Parms.MetaInfo = (struct FMetaInfo)MetaInfo;
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::CacheMapleInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "CacheMapleInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaSubsystem::BeginMoLi()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaSubsystem", "BeginMoLi");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ULuaWidgetCreateManager
void ULuaWidgetCreateManager::SetMaxPreateNumByUIId(int32_t UINavId, int32_t NewMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "SetMaxPreateNumByUIId");
    struct
    {
        int32_t UINavId;
        int32_t NewMaxNum;
    } Parms{};
    Parms.UINavId = (int32_t)UINavId;
    Parms.NewMaxNum = (int32_t)NewMaxNum;
    this->ProcessEvent(Func, &Parms);
}

void ULuaWidgetCreateManager::RealUseLuaUI(int32_t UINavId, struct UUserWidget* NeedRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "RealUseLuaUI");
    struct
    {
        int32_t UINavId;
        struct UUserWidget* NeedRemove;
    } Parms{};
    Parms.UINavId = (int32_t)UINavId;
    Parms.NeedRemove = (struct UUserWidget*)NeedRemove;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULuaWidgetCreateManager::PreCreateByUIIdAndName(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer, int32_t UINavId, struct FName UIName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "PreCreateByUIIdAndName");
    struct
    {
        struct UObject* WorldContextObject;
        struct UUserWidget* WidgetType;
        struct APlayerController* OwningPlayer;
        int32_t UINavId;
        struct FName UIName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WidgetType = (struct UUserWidget*)WidgetType;
    Parms.OwningPlayer = (struct APlayerController*)OwningPlayer;
    Parms.UINavId = (int32_t)UINavId;
    Parms.UIName = (struct FName)UIName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaWidgetCreateManager::IsEnablePreCreated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "IsEnablePreCreated");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaWidgetCreateManager::IsEnableFramingBindLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "IsEnableFramingBindLua");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULuaWidgetCreateManager* ULuaWidgetCreateManager::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaWidgetCreateManager", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct ULuaWidgetCreateManager* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaWidgetCreateManager::DumpDebugInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "DumpDebugInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* ULuaWidgetCreateManager::CreateByUIIdAndName(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer, int32_t UINavId, struct FName UIName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "CreateByUIIdAndName");
    struct
    {
        struct UObject* WorldContextObject;
        struct UUserWidget* WidgetType;
        struct APlayerController* OwningPlayer;
        int32_t UINavId;
        struct FName UIName;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WidgetType = (struct UUserWidget*)WidgetType;
    Parms.OwningPlayer = (struct APlayerController*)OwningPlayer;
    Parms.UINavId = (int32_t)UINavId;
    Parms.UIName = (struct FName)UIName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* ULuaWidgetCreateManager::CreateByUIId(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer, int32_t UINavId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "CreateByUIId");
    struct
    {
        struct UObject* WorldContextObject;
        struct UUserWidget* WidgetType;
        struct APlayerController* OwningPlayer;
        int32_t UINavId;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WidgetType = (struct UUserWidget*)WidgetType;
    Parms.OwningPlayer = (struct APlayerController*)OwningPlayer;
    Parms.UINavId = (int32_t)UINavId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* ULuaWidgetCreateManager::Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "Create");
    struct
    {
        struct UObject* WorldContextObject;
        struct UUserWidget* WidgetType;
        struct APlayerController* OwningPlayer;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WidgetType = (struct UUserWidget*)WidgetType;
    Parms.OwningPlayer = (struct APlayerController*)OwningPlayer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaWidgetCreateManager::CleanLuaUIById(int32_t UINavId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "CleanLuaUIById");
    struct
    {
        int32_t UINavId;
    } Parms{};
    Parms.UINavId = (int32_t)UINavId;
    this->ProcessEvent(Func, &Parms);
}

void ULuaWidgetCreateManager::CleanByUIId(int32_t UINavId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "CleanByUIId");
    struct
    {
        int32_t UINavId;
    } Parms{};
    Parms.UINavId = (int32_t)UINavId;
    this->ProcessEvent(Func, &Parms);
}

void ULuaWidgetCreateManager::CleanAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "CleanAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* ULuaWidgetCreateManager::BindLuaByUIId(int32_t UINavId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetCreateManager", "BindLuaByUIId");
    struct
    {
        int32_t UINavId;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.UINavId = (int32_t)UINavId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaWidgetSwitcherManager
void ULuaWidgetSwitcherManager::SwitchWidget(int32_t Index, const struct FSoftObjectPath& SoftWidgetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetSwitcherManager", "SwitchWidget");
    struct
    {
        int32_t Index;
        struct FSoftObjectPath SoftWidgetPath;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.SoftWidgetPath = (struct FSoftObjectPath)SoftWidgetPath;
    this->ProcessEvent(Func, &Parms);
}

void ULuaWidgetSwitcherManager::SetSwitcher(struct UWidget* InSwitcher)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetSwitcherManager", "SetSwitcher");
    struct
    {
        struct UWidget* InSwitcher;
    } Parms{};
    Parms.InSwitcher = (struct UWidget*)InSwitcher;
    this->ProcessEvent(Func, &Parms);
}

struct ULuaWidgetSwitcherManager* ULuaWidgetSwitcherManager::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaWidgetSwitcherManager", "Get");
    struct
    {
        struct ULuaWidgetSwitcherManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaWidgetSwitcherManager::ClearAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaWidgetSwitcherManager", "ClearAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UOnlineLuaProcess
struct UWorld* UOnlineLuaProcess::OnlineLuaGetWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OnlineLuaProcess", "OnlineLuaGetWorld");
    struct
    {
        struct UWorld* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UStoreLotteryBGManager
void UStoreLotteryBGManager::RemoveCurrent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StoreLotteryBGManager", "RemoveCurrent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UStoreLotteryBGManager::LoadAndAttachAsync(struct UWidget* ParentWidget, const struct FSoftObjectPath& SoftWidgetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("StoreLotteryBGManager", "LoadAndAttachAsync");
    struct
    {
        struct UWidget* ParentWidget;
        struct FSoftObjectPath SoftWidgetPath;
    } Parms{};
    Parms.ParentWidget = (struct UWidget*)ParentWidget;
    Parms.SoftWidgetPath = (struct FSoftObjectPath)SoftWidgetPath;
    this->ProcessEvent(Func, &Parms);
}

struct UStoreLotteryBGManager* UStoreLotteryBGManager::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StoreLotteryBGManager", "Get");
    struct
    {
        struct UStoreLotteryBGManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
