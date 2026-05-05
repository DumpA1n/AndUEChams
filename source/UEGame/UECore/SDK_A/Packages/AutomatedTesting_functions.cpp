#include "AutomatedTesting.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAutomatedTestingHelpers
void UAutomatedTestingHelpers::WriteExecResult(struct FString Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomatedTestingHelpers", "WriteExecResult");
    struct
    {
        struct FString Result;
    } Parms{};
    Parms.Result = (struct FString)Result;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAutomatedTestingHelpers::StopFaceToNearestAI(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomatedTestingHelpers", "StopFaceToNearestAI");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct UObject*> UAutomatedTestingHelpers::GetAllObjectsOfClass(struct UObject* objectClass, uint8_t bIncludeDerivedClasses)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomatedTestingHelpers", "GetAllObjectsOfClass");
    struct
    {
        struct UObject* objectClass;
        uint8_t bIncludeDerivedClasses;
        struct TArray<struct UObject*> ReturnValue;
    } Parms{};
    Parms.objectClass = (struct UObject*)objectClass;
    Parms.bIncludeDerivedClasses = (uint8_t)bIncludeDerivedClasses;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAutomatedTestingHelpers::ExecLua(struct UObject* WorldContextObject, struct FString LuaCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomatedTestingHelpers", "ExecLua");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LuaCode;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LuaCode = (struct FString)LuaCode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAutomatedTestingHelpers::AutoMoveToLocation(struct UObject* WorldContextObject, const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomatedTestingHelpers", "AutoMoveToLocation");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAutomatedTestingHelpers::AutoMoveToActor(struct UObject* WorldContextObject, struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomatedTestingHelpers", "AutoMoveToActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* TargetActor;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.TargetActor = (struct AActor*)TargetActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAutomatedTestingHelpers::AutoFaceToNearestAI(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomatedTestingHelpers", "AutoFaceToNearestAI");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UBPAutomatedTestingConfig
void UBPAutomatedTestingConfig::ScreenShot(struct FString Parm)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPAutomatedTestingConfig", "ScreenShot");
    struct
    {
        struct FString Parm;
    } Parms{};
    Parms.Parm = (struct FString)Parm;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBPAutomatedTestingConfig::MountPufferPaks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPAutomatedTestingConfig", "MountPufferPaks");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FString> UBPAutomatedTestingConfig::GetLightingTestMapLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPAutomatedTestingConfig", "GetLightingTestMapLevels");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBPAutomatedTestingConfig::GetEnvironmentVariable(struct FString Parm)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPAutomatedTestingConfig", "GetEnvironmentVariable");
    struct
    {
        struct FString Parm;
        struct FString ReturnValue;
    } Parms{};
    Parms.Parm = (struct FString)Parm;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBPAutomatedTestingConfig::GetCurrentPlatform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPAutomatedTestingConfig", "GetCurrentPlatform");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBPAutomatedTestingConfig::GetAppDataDirectory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPAutomatedTestingConfig", "GetAppDataDirectory");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBPAutomatedTestingConfig::CaptureCamera(struct ACameraActor* CurCamera, struct FString Filename, struct FString Resolution, uint8_t bChangeSize, uint8_t bPostProsess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPAutomatedTestingConfig", "CaptureCamera");
    struct
    {
        struct ACameraActor* CurCamera;
        struct FString Filename;
        struct FString Resolution;
        uint8_t bChangeSize;
        uint8_t bPostProsess;
    } Parms{};
    Parms.CurCamera = (struct ACameraActor*)CurCamera;
    Parms.Filename = (struct FString)Filename;
    Parms.Resolution = (struct FString)Resolution;
    Parms.bChangeSize = (uint8_t)bChangeSize;
    Parms.bPostProsess = (uint8_t)bPostProsess;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ARuntimeSceneCaptureCamera
void ARuntimeSceneCaptureCamera::SaveCaptureResult(struct UTextureRenderTarget2D* InCaptureResult, struct FString CaptureResultSavedPath, struct FString CaptureResultSavedName, uint8_t bShouldSave)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeSceneCaptureCamera", "SaveCaptureResult");
    struct
    {
        struct UTextureRenderTarget2D* InCaptureResult;
        struct FString CaptureResultSavedPath;
        struct FString CaptureResultSavedName;
        uint8_t bShouldSave;
    } Parms{};
    Parms.InCaptureResult = (struct UTextureRenderTarget2D*)InCaptureResult;
    Parms.CaptureResultSavedPath = (struct FString)CaptureResultSavedPath;
    Parms.CaptureResultSavedName = (struct FString)CaptureResultSavedName;
    Parms.bShouldSave = (uint8_t)bShouldSave;
    this->ProcessEvent(Func, &Parms);
}

void ARuntimeSceneCaptureCamera::BeginCapture(struct FString CaptureResultSavedPath, struct FString WorldName, uint8_t bPostProsess, int32_t MaxTime, int32_t LoopTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeSceneCaptureCamera", "BeginCapture");
    struct
    {
        struct FString CaptureResultSavedPath;
        struct FString WorldName;
        uint8_t bPostProsess;
        int32_t MaxTime;
        int32_t LoopTime;
    } Parms{};
    Parms.CaptureResultSavedPath = (struct FString)CaptureResultSavedPath;
    Parms.WorldName = (struct FString)WorldName;
    Parms.bPostProsess = (uint8_t)bPostProsess;
    Parms.MaxTime = (int32_t)MaxTime;
    Parms.LoopTime = (int32_t)LoopTime;
    this->ProcessEvent(Func, &Parms);
}

// ARuntimeSceneCaptureController
struct TArray<struct FString> ARuntimeSceneCaptureController::SplitString(struct FString SourceString, struct FString Delimiter, uint8_t bCullEmpty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeSceneCaptureController", "SplitString");
    struct
    {
        struct FString SourceString;
        struct FString Delimiter;
        uint8_t bCullEmpty;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.SourceString = (struct FString)SourceString;
    Parms.Delimiter = (struct FString)Delimiter;
    Parms.bCullEmpty = (uint8_t)bCullEmpty;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
