#include "AugmentedReality.hpp"
#include "Engine.hpp"
#include "MRMesh.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UARBlueprintLibrary::* ----
void UARBlueprintLibrary::UnpinComponent(struct USceneComponent* ComponentToUnpin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "UnpinComponent");
    struct
    {
        struct USceneComponent* ComponentToUnpin;
    } Parms{};
    Parms.ComponentToUnpin = (struct USceneComponent*)ComponentToUnpin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::StopARSession()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "StopARSession");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::StartARSession(struct UARSessionConfig* SessionConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "StartARSession");
    struct
    {
        struct UARSessionConfig* SessionConfig;
    } Parms{};
    Parms.SessionConfig = (struct UARSessionConfig*)SessionConfig;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetAlignmentTransform");
    struct
    {
        struct FTransform InAlignmentTransform;
    } Parms{};
    Parms.InAlignmentTransform = (struct FTransform)InAlignmentTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::RemovePin(struct UARPin* PinToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "RemovePin");
    struct
    {
        struct UARPin* PinToRemove;
    } Parms{};
    Parms.PinToRemove = (struct UARPin*)PinToRemove;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UARPin* UARBlueprintLibrary::PinComponentToTraceResult(struct USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, struct FName DebugName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PinComponentToTraceResult");
    struct
    {
        struct USceneComponent* ComponentToPin;
        struct FARTraceResult TraceResult;
        struct FName DebugName;
        struct UARPin* ReturnValue;
    } Parms{};
    Parms.ComponentToPin = (struct USceneComponent*)ComponentToPin;
    Parms.TraceResult = (struct FARTraceResult)TraceResult;
    Parms.DebugName = (struct FName)DebugName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARPin* UARBlueprintLibrary::PinComponent(struct USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PinComponent");
    struct
    {
        struct USceneComponent* ComponentToPin;
        struct FTransform PinToWorldTransform;
        struct UARTrackedGeometry* TrackedGeometry;
        struct FName DebugName;
        struct UARPin* ReturnValue;
    } Parms{};
    Parms.ComponentToPin = (struct USceneComponent*)ComponentToPin;
    Parms.PinToWorldTransform = (struct FTransform)PinToWorldTransform;
    Parms.TrackedGeometry = (struct UARTrackedGeometry*)TrackedGeometry;
    Parms.DebugName = (struct FName)DebugName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UARBlueprintLibrary::PauseARSession()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PauseARSession");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, uint8_t bTestFeaturePoints, uint8_t bTestGroundPlane, uint8_t bTestPlaneExtents, uint8_t bTestPlaneBoundaryPolygon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects3D");
    struct
    {
        struct FVector Start;
        struct FVector End;
        uint8_t bTestFeaturePoints;
        uint8_t bTestGroundPlane;
        uint8_t bTestPlaneExtents;
        uint8_t bTestPlaneBoundaryPolygon;
        struct TArray<struct FARTraceResult> ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.bTestFeaturePoints = (uint8_t)bTestFeaturePoints;
    Parms.bTestGroundPlane = (uint8_t)bTestGroundPlane;
    Parms.bTestPlaneExtents = (uint8_t)bTestPlaneExtents;
    Parms.bTestPlaneBoundaryPolygon = (uint8_t)bTestPlaneBoundaryPolygon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(struct FVector2D ScreenCoord, uint8_t bTestFeaturePoints, uint8_t bTestGroundPlane, uint8_t bTestPlaneExtents, uint8_t bTestPlaneBoundaryPolygon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects");
    struct
    {
        struct FVector2D ScreenCoord;
        uint8_t bTestFeaturePoints;
        uint8_t bTestGroundPlane;
        uint8_t bTestPlaneExtents;
        uint8_t bTestPlaneBoundaryPolygon;
        struct TArray<struct FARTraceResult> ReturnValue;
    } Parms{};
    Parms.ScreenCoord = (struct FVector2D)ScreenCoord;
    Parms.bTestFeaturePoints = (uint8_t)bTestFeaturePoints;
    Parms.bTestGroundPlane = (uint8_t)bTestGroundPlane;
    Parms.bTestPlaneExtents = (uint8_t)bTestPlaneExtents;
    Parms.bTestPlaneBoundaryPolygon = (uint8_t)bTestPlaneBoundaryPolygon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSessionTypeSupported");
    struct
    {
        enum EARSessionType SessionType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SessionType = (enum EARSessionType)SessionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSessionTrackingFeatureSupported");
    struct
    {
        enum EARSessionType SessionType;
        enum EARSessionTrackingFeature SessionTrackingFeature;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SessionType = (enum EARSessionType)SessionType;
    Parms.SessionTrackingFeature = (enum EARSessionTrackingFeature)SessionTrackingFeature;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARBlueprintLibrary::IsARSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsARSupported");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetWorldMappingStatus");
    struct
    {
        enum EARWorldMappingState ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetTrackingQualityReason");
    struct
    {
        enum EARTrackingQualityReason ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetTrackingQuality");
    struct
    {
        enum EARTrackingQuality ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetSupportedVideoFormats");
    struct
    {
        enum EARSessionType SessionType;
        struct TArray<struct FARVideoFormat> ReturnValue;
    } Parms{};
    Parms.SessionType = (enum EARSessionType)SessionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetSessionConfig");
    struct
    {
        struct UARSessionConfig* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UARBlueprintLibrary::GetPointCloud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPointCloud");
    struct
    {
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARTextureCameraImage* UARBlueprintLibrary::GetPersonSegmentationImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationImage");
    struct
    {
        struct UARTextureCameraImage* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARTextureCameraImage* UARBlueprintLibrary::GetPersonSegmentationDepthImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationDepthImage");
    struct
    {
        struct UARTextureCameraImage* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCurrentLightEstimate");
    struct
    {
        struct UARLightEstimate* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCameraImage");
    struct
    {
        struct UARTextureCameraImage* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCameraDepth");
    struct
    {
        struct UARTextureCameraDepth* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetARSessionStatus");
    struct
    {
        struct FARSessionStatus ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoses");
    struct
    {
        struct TArray<struct UARTrackedPose*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoints");
    struct
    {
        struct TArray<struct UARTrackedPoint*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedPlanes");
    struct
    {
        struct TArray<struct UARPlaneGeometry*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedImages");
    struct
    {
        struct TArray<struct UARTrackedImage*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedEnvironmentCaptureProbes");
    struct
    {
        struct TArray<struct UAREnvironmentCaptureProbe*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTracked2DPoses");
    struct
    {
        struct TArray<struct FARPose2D> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARPin*> UARBlueprintLibrary::GetAllPins()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllPins");
    struct
    {
        struct TArray<struct UARPin*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllGeometries");
    struct
    {
        struct TArray<struct UARTrackedGeometry*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UARBlueprintLibrary::DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "DebugDrawTrackedGeometry");
    struct
    {
        struct UARTrackedGeometry* TrackedGeometry;
        struct UObject* WorldContextObject;
        struct FLinearColor Color;
        float OutlineThickness;
        float PersistForSeconds;
    } Parms{};
    Parms.TrackedGeometry = (struct UARTrackedGeometry*)TrackedGeometry;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Color = (struct FLinearColor)Color;
    Parms.OutlineThickness = (float)OutlineThickness;
    Parms.PersistForSeconds = (float)PersistForSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "DebugDrawPin");
    struct
    {
        struct UARPin* ARPin;
        struct UObject* WorldContextObject;
        struct FLinearColor Color;
        float Scale;
        float PersistForSeconds;
    } Parms{};
    Parms.ARPin = (struct UARPin*)ARPin;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Color = (struct FLinearColor)Color;
    Parms.Scale = (float)Scale;
    Parms.PersistForSeconds = (float)PersistForSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "AddRuntimeCandidateImage");
    struct
    {
        struct UARSessionConfig* SessionConfig;
        struct UTexture2D* CandidateTexture;
        struct FString FriendlyName;
        float PhysicalWidth;
        struct UARCandidateImage* ReturnValue;
    } Parms{};
    Parms.SessionConfig = (struct UARSessionConfig*)SessionConfig;
    Parms.CandidateTexture = (struct UTexture2D*)CandidateTexture;
    Parms.FriendlyName = (struct FString)FriendlyName;
    Parms.PhysicalWidth = (float)PhysicalWidth;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "AddManualEnvironmentCaptureProbe");
    struct
    {
        struct FVector Location;
        struct FVector Extent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Extent = (struct FVector)Extent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARTraceResultLibrary::* ----
struct UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetTrackedGeometry");
    struct
    {
        struct FARTraceResult TraceResult;
        struct UARTrackedGeometry* ReturnValue;
    } Parms{};
    Parms.TraceResult = (struct FARTraceResult)TraceResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetTraceChannel");
    struct
    {
        struct FARTraceResult TraceResult;
        enum EARLineTraceChannels ReturnValue;
    } Parms{};
    Parms.TraceResult = (struct FARTraceResult)TraceResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetLocalToWorldTransform");
    struct
    {
        struct FARTraceResult TraceResult;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.TraceResult = (struct FARTraceResult)TraceResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetLocalToTrackingTransform");
    struct
    {
        struct FARTraceResult TraceResult;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.TraceResult = (struct FARTraceResult)TraceResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetDistanceFromCamera");
    struct
    {
        struct FARTraceResult TraceResult;
        float ReturnValue;
    } Parms{};
    Parms.TraceResult = (struct FARTraceResult)TraceResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARSaveWorldAsyncTaskBlueprintProxy::* ----
struct UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARSaveWorldAsyncTaskBlueprintProxy", "ARSaveWorld");
    struct
    {
        struct UObject* WorldContextObject;
        struct UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARGetCandidateObjectAsyncTaskBlueprintProxy::* ----
struct UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARGetCandidateObjectAsyncTaskBlueprintProxy", "ARGetCandidateObject");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        struct FVector Extent;
        struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.Extent = (struct FVector)Extent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARBasicLightEstimate::* ----
float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARBasicLightEstimate", "GetAmbientIntensityLumens");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARBasicLightEstimate", "GetAmbientColorTemperatureKelvin");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARBasicLightEstimate", "GetAmbientColor");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARPin::* ----
EARTrackingState UARPin::GetTrackingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPin", "GetTrackingState");
    struct
    {
        enum EARTrackingState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPin", "GetTrackedGeometry");
    struct
    {
        struct UARTrackedGeometry* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* UARPin::GetPinnedComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPin", "GetPinnedComponent");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UARPin::GetLocalToWorldTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPin", "GetLocalToWorldTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UARPin::GetLocalToTrackingTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPin", "GetLocalToTrackingTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UARPin::GetDebugName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPin", "GetDebugName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UARPin::DebugDraw(struct UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPin", "DebugDraw");
    struct
    {
        struct UWorld* World;
        struct FLinearColor Color;
        float Scale;
        float PersistForSeconds;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Color = (struct FLinearColor)Color;
    Parms.Scale = (float)Scale;
    Parms.PersistForSeconds = (float)PersistForSeconds;
    this->ProcessEvent(Func, &Parms);
}

// ---- UARSessionConfig::* ----
uint8_t UARSessionConfig::ShouldResetTrackedObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldResetTrackedObjects");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARSessionConfig::ShouldResetCameraTracking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldResetCameraTracking");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARSessionConfig::ShouldRenderCameraOverlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldRenderCameraOverlay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARSessionConfig::ShouldEnableCameraTracking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldEnableCameraTracking");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UARSessionConfig::ShouldEnableAutoFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldEnableAutoFocus");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UARSessionConfig::SetWorldMapData(struct TArray<uint8_t> WorldMapData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetWorldMapData");
    struct
    {
        struct TArray<uint8_t> WorldMapData;
    } Parms{};
    Parms.WorldMapData = (struct TArray<uint8_t>)WorldMapData;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetSessionTrackingFeatureToEnable");
    struct
    {
        enum EARSessionTrackingFeature InSessionTrackingFeature;
    } Parms{};
    Parms.InSessionTrackingFeature = (enum EARSessionTrackingFeature)InSessionTrackingFeature;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetResetTrackedObjects(uint8_t bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetResetTrackedObjects");
    struct
    {
        uint8_t bNewValue;
    } Parms{};
    Parms.bNewValue = (uint8_t)bNewValue;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetResetCameraTracking(uint8_t bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetResetCameraTracking");
    struct
    {
        uint8_t bNewValue;
    } Parms{};
    Parms.bNewValue = (uint8_t)bNewValue;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetFaceTrackingUpdate");
    struct
    {
        enum EARFaceTrackingUpdate InUpdate;
    } Parms{};
    Parms.InUpdate = (enum EARFaceTrackingUpdate)InUpdate;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetFaceTrackingDirection");
    struct
    {
        enum EARFaceTrackingDirection InDirection;
    } Parms{};
    Parms.InDirection = (enum EARFaceTrackingDirection)InDirection;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetEnableAutoFocus(uint8_t bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetEnableAutoFocus");
    struct
    {
        uint8_t bNewValue;
    } Parms{};
    Parms.bNewValue = (uint8_t)bNewValue;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetDesiredVideoFormat(struct FARVideoFormat NewFormat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetDesiredVideoFormat");
    struct
    {
        struct FARVideoFormat NewFormat;
    } Parms{};
    Parms.NewFormat = (struct FARVideoFormat)NewFormat;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetCandidateObjectList(const struct TArray<struct UARCandidateObject*>& InCandidateObjects)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetCandidateObjectList");
    struct
    {
        struct TArray<struct UARCandidateObject*> InCandidateObjects;
    } Parms{};
    Parms.InCandidateObjects = (struct TArray<struct UARCandidateObject*>)InCandidateObjects;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<uint8_t> UARSessionConfig::GetWorldMapData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetWorldMapData");
    struct
    {
        struct TArray<uint8_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetWorldAlignment");
    struct
    {
        enum EARWorldAlignment ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARSessionType UARSessionConfig::GetSessionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetSessionType");
    struct
    {
        enum EARSessionType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetPlaneDetectionMode");
    struct
    {
        enum EARPlaneDetectionMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetMaxNumSimultaneousImagesTracked");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetLightEstimationMode");
    struct
    {
        enum EARLightEstimationMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetFrameSyncMode");
    struct
    {
        enum EARFrameSyncMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetFaceTrackingUpdate");
    struct
    {
        enum EARFaceTrackingUpdate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetFaceTrackingDirection");
    struct
    {
        enum EARFaceTrackingDirection ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetEnvironmentCaptureProbeType");
    struct
    {
        enum EAREnvironmentCaptureProbeType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetEnabledSessionTrackingFeature");
    struct
    {
        enum EARSessionTrackingFeature ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetDesiredVideoFormat");
    struct
    {
        struct FARVideoFormat ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetCandidateObjectList");
    struct
    {
        struct TArray<struct UARCandidateObject*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetCandidateImageList");
    struct
    {
        struct TArray<struct UARCandidateImage*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UARSessionConfig::AddCandidateObject(struct UARCandidateObject* CandidateObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "AddCandidateObject");
    struct
    {
        struct UARCandidateObject* CandidateObject;
    } Parms{};
    Parms.CandidateObject = (struct UARCandidateObject*)CandidateObject;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::AddCandidateImage(struct UARCandidateImage* NewCandidateImage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "AddCandidateImage");
    struct
    {
        struct UARCandidateImage* NewCandidateImage;
    } Parms{};
    Parms.NewCandidateImage = (struct UARCandidateImage*)NewCandidateImage;
    this->ProcessEvent(Func, &Parms);
}

// ---- AARSharedWorldGameMode::* ----
void AARSharedWorldGameMode::SetPreviewImageData(struct TArray<uint8_t> ImageData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldGameMode", "SetPreviewImageData");
    struct
    {
        struct TArray<uint8_t> ImageData;
    } Parms{};
    Parms.ImageData = (struct TArray<uint8_t>)ImageData;
    this->ProcessEvent(Func, &Parms);
}

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldGameMode", "SetARWorldSharingIsReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AARSharedWorldGameMode::SetARSharedWorldData(struct TArray<uint8_t> ARWorldData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldGameMode", "SetARSharedWorldData");
    struct
    {
        struct TArray<uint8_t> ARWorldData;
    } Parms{};
    Parms.ARWorldData = (struct TArray<uint8_t>)ARWorldData;
    this->ProcessEvent(Func, &Parms);
}

struct AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldGameMode", "GetARSharedWorldGameState");
    struct
    {
        struct AARSharedWorldGameState* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AARSharedWorldGameState::* ----
void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldGameState", "K2_OnARWorldMapIsReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AARSharedWorldPlayerController::* ----
void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldPlayerController", "ServerMarkReadyForReceiving");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t offset, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldPlayerController", "ClientUpdatePreviewImageData");
    struct
    {
        int32_t offset;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.offset = (int32_t)offset;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t offset, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldPlayerController", "ClientUpdateARWorldData");
    struct
    {
        int32_t offset;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.offset = (int32_t)offset;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

void AARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldPlayerController", "ClientInitSharedWorld");
    struct
    {
        int32_t PreviewImageSize;
        int32_t ARWorldDataSize;
    } Parms{};
    Parms.PreviewImageSize = (int32_t)PreviewImageSize;
    Parms.ARWorldDataSize = (int32_t)ARWorldDataSize;
    this->ProcessEvent(Func, &Parms);
}

// ---- AARSkyLight::* ----
void AARSkyLight::SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSkyLight", "SetEnvironmentCaptureProbe");
    struct
    {
        struct UAREnvironmentCaptureProbe* InCaptureProbe;
    } Parms{};
    Parms.InCaptureProbe = (struct UAREnvironmentCaptureProbe*)InCaptureProbe;
    this->ProcessEvent(Func, &Parms);
}

// ---- UARTrackedGeometry::* ----
uint8_t UARTrackedGeometry::IsTracked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "IsTracked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetUnderlyingMesh");
    struct
    {
        struct UMRMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARTrackingState UARTrackedGeometry::GetTrackingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetTrackingState");
    struct
    {
        enum EARTrackingState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARObjectClassification UARTrackedGeometry::GetObjectClassification()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetObjectClassification");
    struct
    {
        enum EARObjectClassification ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetLocalToWorldTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetLocalToTrackingTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UARTrackedGeometry::GetLastUpdateTimestamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetLastUpdateTimestamp");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UARTrackedGeometry::GetLastUpdateFrameNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetLastUpdateFrameNumber");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UARTrackedGeometry::GetDebugName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetDebugName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARPlaneGeometry::* ----
struct UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneGeometry", "GetSubsumedBy");
    struct
    {
        struct UARPlaneGeometry* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARPlaneOrientation UARPlaneGeometry::GetOrientation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneGeometry", "GetOrientation");
    struct
    {
        enum EARPlaneOrientation ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UARPlaneGeometry::GetExtent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneGeometry", "GetExtent");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UARPlaneGeometry::GetCenter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneGeometry", "GetCenter");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneGeometry", "GetBoundaryPolygonInLocalSpace");
    struct
    {
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARTrackedImage::* ----
struct FVector2D UARTrackedImage::GetEstimateSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedImage", "GetEstimateSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedImage", "GetDetectedImage");
    struct
    {
        struct UARCandidateImage* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARFaceGeometry::* ----
struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARFaceGeometry", "GetWorldSpaceEyeTransform");
    struct
    {
        enum EAREye Eye;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Eye = (enum EAREye)Eye;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARFaceGeometry", "GetLocalSpaceEyeTransform");
    struct
    {
        enum EAREye Eye;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Eye = (enum EAREye)Eye;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARFaceGeometry", "GetBlendShapeValue");
    struct
    {
        enum EARFaceBlendShape BlendShape;
        float ReturnValue;
    } Parms{};
    Parms.BlendShape = (enum EARFaceBlendShape)BlendShape;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARFaceGeometry", "GetBlendShapes");
    struct
    {
        struct TMap<EARFaceBlendShape, float> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAREnvironmentCaptureProbe::* ----
struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AREnvironmentCaptureProbe", "GetExtent");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AREnvironmentCaptureProbe", "GetEnvironmentCaptureTexture");
    struct
    {
        struct UAREnvironmentCaptureProbeTexture* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARTrackedObject::* ----
struct UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedObject", "GetDetectedObject");
    struct
    {
        struct UARCandidateObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARTrackedPose::* ----
struct FARPose3D UARTrackedPose::GetTrackedPoseData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedPose", "GetTrackedPoseData");
    struct
    {
        struct FARPose3D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARCandidateImage::* ----
float UARCandidateImage::GetPhysicalWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateImage", "GetPhysicalWidth");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UARCandidateImage::GetPhysicalHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateImage", "GetPhysicalHeight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateImage", "GetOrientation");
    struct
    {
        enum EARCandidateImageOrientation ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UARCandidateImage::GetFriendlyName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateImage", "GetFriendlyName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UARCandidateImage::GetCandidateTexture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateImage", "GetCandidateTexture");
    struct
    {
        struct UTexture2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UARCandidateObject::* ----
void UARCandidateObject::SetFriendlyName(struct FString NewName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateObject", "SetFriendlyName");
    struct
    {
        struct FString NewName;
    } Parms{};
    Parms.NewName = (struct FString)NewName;
    this->ProcessEvent(Func, &Parms);
}

void UARCandidateObject::SetCandidateObjectData(const struct TArray<uint8_t>& InCandidateObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateObject", "SetCandidateObjectData");
    struct
    {
        struct TArray<uint8_t> InCandidateObject;
    } Parms{};
    Parms.InCandidateObject = (struct TArray<uint8_t>)InCandidateObject;
    this->ProcessEvent(Func, &Parms);
}

void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateObject", "SetBoundingBox");
    struct
    {
        struct FBox InBoundingBox;
    } Parms{};
    Parms.InBoundingBox = (struct FBox)InBoundingBox;
    this->ProcessEvent(Func, &Parms);
}

struct FString UARCandidateObject::GetFriendlyName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateObject", "GetFriendlyName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint8_t> UARCandidateObject::GetCandidateObjectData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateObject", "GetCandidateObjectData");
    struct
    {
        struct TArray<uint8_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBox UARCandidateObject::GetBoundingBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARCandidateObject", "GetBoundingBox");
    struct
    {
        struct FBox ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
