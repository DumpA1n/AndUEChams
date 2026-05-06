#include "AugmentedReality.hpp"
#include "Engine.hpp"
#include "MRMesh.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AARActor
struct UARComponent* AARActor::AddARComponent(struct UARComponent* InComponentClass, const struct FGuid& NativeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARActor", "AddARComponent");
    struct
    {
        struct UARComponent* InComponentClass;
        struct FGuid NativeID;
        struct UARComponent* ReturnValue;
    } Parms{};
    Parms.InComponentClass = (struct UARComponent*)InComponentClass;
    Parms.NativeID = (struct FGuid)NativeID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UARBlueprintLibrary
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

bool UARBlueprintLibrary::ToggleARCapture(bool bOnOff, EARCaptureType CaptureType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "ToggleARCapture");
    struct
    {
        bool bOnOff;
        enum EARCaptureType CaptureType;
        bool ReturnValue;
    } Parms{};
    Parms.bOnOff = (bool)bOnOff;
    Parms.CaptureType = (enum EARCaptureType)CaptureType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetEnabledXRCamera");
    struct
    {
        bool bOnOff;
    } Parms{};
    Parms.bOnOff = (bool)bOnOff;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::SetARWorldScale(float InWorldScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetARWorldScale");
    struct
    {
        float InWorldScale;
    } Parms{};
    Parms.InWorldScale = (float)InWorldScale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetARWorldOriginLocationAndRotation");
    struct
    {
        struct FVector OriginLocation;
        struct FRotator OriginRotation;
        bool bIsTransformInWorldSpace;
        bool bMaintainUpDirection;
    } Parms{};
    Parms.OriginLocation = (struct FVector)OriginLocation;
    Parms.OriginRotation = (struct FRotator)OriginRotation;
    Parms.bIsTransformInWorldSpace = (bool)bIsTransformInWorldSpace;
    Parms.bMaintainUpDirection = (bool)bMaintainUpDirection;
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

bool UARBlueprintLibrary::SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SaveARPinToLocalStore");
    struct
    {
        struct FName InSaveName;
        struct UARPin* InPin;
        bool ReturnValue;
    } Parms{};
    Parms.InSaveName = (struct FName)InSaveName;
    Parms.InPin = (struct UARPin*)InPin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntPoint UARBlueprintLibrary::ResizeXRCamera(const struct FIntPoint& InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "ResizeXRCamera");
    struct
    {
        struct FIntPoint InSize;
        struct FIntPoint ReturnValue;
    } Parms{};
    Parms.InSize = (struct FIntPoint)InSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

void UARBlueprintLibrary::RemoveARPinFromLocalStore(struct FName InSaveName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "RemoveARPinFromLocalStore");
    struct
    {
        struct FName InSaveName;
    } Parms{};
    Parms.InSaveName = (struct FName)InSaveName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "RemoveAllARPinsFromLocalStore");
    struct
    {
    } Parms{};
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

bool UARBlueprintLibrary::PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PinComponentToARPin");
    struct
    {
        struct USceneComponent* ComponentToPin;
        struct UARPin* Pin;
        bool ReturnValue;
    } Parms{};
    Parms.ComponentToPin = (struct USceneComponent*)ComponentToPin;
    Parms.Pin = (struct UARPin*)Pin;
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

struct TMap<struct FName, struct UARPin*> UARBlueprintLibrary::LoadARPinsFromLocalStore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LoadARPinsFromLocalStore");
    struct
    {
        struct TMap<struct FName, struct UARPin*> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects3D");
    struct
    {
        struct FVector Start;
        struct FVector End;
        bool bTestFeaturePoints;
        bool bTestGroundPlane;
        bool bTestPlaneExtents;
        bool bTestPlaneBoundaryPolygon;
        struct TArray<struct FARTraceResult> ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.bTestFeaturePoints = (bool)bTestFeaturePoints;
    Parms.bTestGroundPlane = (bool)bTestGroundPlane;
    Parms.bTestPlaneExtents = (bool)bTestPlaneExtents;
    Parms.bTestPlaneBoundaryPolygon = (bool)bTestPlaneBoundaryPolygon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects");
    struct
    {
        struct FVector2D ScreenCoord;
        bool bTestFeaturePoints;
        bool bTestGroundPlane;
        bool bTestPlaneExtents;
        bool bTestPlaneBoundaryPolygon;
        struct TArray<struct FARTraceResult> ReturnValue;
    } Parms{};
    Parms.ScreenCoord = (struct FVector2D)ScreenCoord;
    Parms.bTestFeaturePoints = (bool)bTestFeaturePoints;
    Parms.bTestGroundPlane = (bool)bTestGroundPlane;
    Parms.bTestPlaneExtents = (bool)bTestPlaneExtents;
    Parms.bTestPlaneBoundaryPolygon = (bool)bTestPlaneBoundaryPolygon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSessionTypeSupported");
    struct
    {
        enum EARSessionType SessionType;
        bool ReturnValue;
    } Parms{};
    Parms.SessionType = (enum EARSessionType)SessionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSessionTrackingFeatureSupported");
    struct
    {
        enum EARSessionType SessionType;
        enum EARSessionTrackingFeature SessionTrackingFeature;
        bool ReturnValue;
    } Parms{};
    Parms.SessionType = (enum EARSessionType)SessionType;
    Parms.SessionTrackingFeature = (enum EARSessionTrackingFeature)SessionTrackingFeature;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSceneReconstructionSupported");
    struct
    {
        enum EARSessionType SessionType;
        enum EARSceneReconstruction SceneReconstructionMethod;
        bool ReturnValue;
    } Parms{};
    Parms.SessionType = (enum EARSessionType)SessionType;
    Parms.SceneReconstructionMethod = (enum EARSceneReconstruction)SceneReconstructionMethod;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsARSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsARSupported");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsARPinLocalStoreSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreSupported");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsARPinLocalStoreReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreReady");
    struct
    {
        bool ReturnValue;
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

struct UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationImage");
    struct
    {
        struct UARTexture* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationDepthImage");
    struct
    {
        struct UARTexture* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARBlueprintLibrary::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetObjectClassificationAtLocation");
    struct
    {
        struct FVector InWorldLocation;
        enum EARObjectClassification OutClassification;
        struct FVector OutClassificationLocation;
        float MaxLocationDiff;
        bool ReturnValue;
    } Parms{};
    Parms.InWorldLocation = (struct FVector)InWorldLocation;
    Parms.MaxLocationDiff = (float)MaxLocationDiff;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutClassification = Parms.OutClassification;
    OutClassificationLocation = Parms.OutClassificationLocation;
    return Parms.ReturnValue;
}

int32_t UARBlueprintLibrary::GetNumberOfTrackedFacesSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetNumberOfTrackedFacesSupported");
    struct
    {
        int32_t ReturnValue;
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

bool UARBlueprintLibrary::GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCameraIntrinsics");
    struct
    {
        struct FARCameraIntrinsics OutCameraIntrinsics;
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCameraIntrinsics = Parms.OutCameraIntrinsics;
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

float UARBlueprintLibrary::GetARWorldScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetARWorldScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UARTexture* UARBlueprintLibrary::GetARTexture(EARTextureType TextureType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetARTexture");
    struct
    {
        enum EARTextureType TextureType;
        struct UARTexture* ReturnValue;
    } Parms{};
    Parms.TextureType = (enum EARTextureType)TextureType;
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

struct TArray<struct UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(struct UARTrackedGeometry* GeometryClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllGeometriesByClass");
    struct
    {
        struct UARTrackedGeometry* GeometryClass;
        struct TArray<struct UARTrackedGeometry*> ReturnValue;
    } Parms{};
    Parms.GeometryClass = (struct UARTrackedGeometry*)GeometryClass;
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

struct FTransform UARBlueprintLibrary::GetAlignmentTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAlignmentTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(struct FString PointName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "FindTrackedPointsByName");
    struct
    {
        struct FString PointName;
        struct TArray<struct UARTrackedPoint*> ReturnValue;
    } Parms{};
    Parms.PointName = (struct FString)PointName;
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

void UARBlueprintLibrary::CalculateClosestIntersection(const struct TArray<struct FVector>& StartPoints, const struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "CalculateClosestIntersection");
    struct
    {
        struct TArray<struct FVector> StartPoints;
        struct TArray<struct FVector> EndPoints;
        struct FVector ClosestIntersection;
    } Parms{};
    Parms.StartPoints = (struct TArray<struct FVector>)StartPoints;
    Parms.EndPoints = (struct TArray<struct FVector>)EndPoints;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ClosestIntersection = Parms.ClosestIntersection;
}

void UARBlueprintLibrary::CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "CalculateAlignmentTransform");
    struct
    {
        struct FTransform TransformInFirstCoordinateSystem;
        struct FTransform TransformInSecondCoordinateSystem;
        struct FTransform AlignmentTransform;
    } Parms{};
    Parms.TransformInFirstCoordinateSystem = (struct FTransform)TransformInFirstCoordinateSystem;
    Parms.TransformInSecondCoordinateSystem = (struct FTransform)TransformInSecondCoordinateSystem;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AlignmentTransform = Parms.AlignmentTransform;
}

bool UARBlueprintLibrary::AddTrackedPointWithName(const struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "AddTrackedPointWithName");
    struct
    {
        struct FTransform WorldTransform;
        struct FString PointName;
        bool bDeletePointsWithSameName;
        bool ReturnValue;
    } Parms{};
    Parms.WorldTransform = (struct FTransform)WorldTransform;
    Parms.PointName = (struct FString)PointName;
    Parms.bDeletePointsWithSameName = (bool)bDeletePointsWithSameName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARBlueprintLibrary", "AddManualEnvironmentCaptureProbe");
    struct
    {
        struct FVector Location;
        struct FVector Extent;
        bool ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Extent = (struct FVector)Extent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UARTraceResultLibrary
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

struct FTransform UARTraceResultLibrary::GetLocalTransform(const struct FARTraceResult& TraceResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetLocalTransform");
    struct
    {
        struct FARTraceResult TraceResult;
        struct FTransform ReturnValue;
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

// UARSaveWorldAsyncTaskBlueprintProxy
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

// UARGetCandidateObjectAsyncTaskBlueprintProxy
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

// UARComponent
void UARComponent::UpdateVisualization()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARComponent", "UpdateVisualization");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UARComponent::SetNativeID(struct FGuid NativeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARComponent", "SetNativeID");
    struct
    {
        struct FGuid NativeID;
    } Parms{};
    Parms.NativeID = (struct FGuid)NativeID;
    this->ProcessEvent(Func, &Parms);
}

void UARComponent::ReceiveRemove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARComponent", "ReceiveRemove");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UARComponent::OnRep_Payload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARComponent", "OnRep_Payload");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UMRMeshComponent* UARComponent::GetMRMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARComponent", "GetMRMesh");
    struct
    {
        struct UMRMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UARPlaneComponent
void UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARPlaneComponent", "SetPlaneComponentDebugMode");
    struct
    {
        enum EPlaneComponentDebugMode NewDebugMode;
    } Parms{};
    Parms.NewDebugMode = (enum EPlaneComponentDebugMode)NewDebugMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARPlaneComponent::SetObjectClassificationDebugColors(const struct TMap<EARObjectClassification, struct FLinearColor>& InColors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARPlaneComponent", "SetObjectClassificationDebugColors");
    struct
    {
        struct TMap<EARObjectClassification, struct FLinearColor> InColors;
    } Parms{};
    Parms.InColors = (struct TMap<EARObjectClassification, struct FLinearColor>)InColors;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARPlaneComponent::ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneComponent", "ServerUpdatePayload");
    struct
    {
        struct FARPlaneUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARPlaneUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneComponent", "ReceiveUpdate");
    struct
    {
        struct FARPlaneUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARPlaneUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPlaneComponent", "ReceiveAdd");
    struct
    {
        struct FARPlaneUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARPlaneUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

struct TMap<EARObjectClassification, struct FLinearColor> UARPlaneComponent::GetObjectClassificationDebugColors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARPlaneComponent", "GetObjectClassificationDebugColors");
    struct
    {
        struct TMap<EARObjectClassification, struct FLinearColor> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UARPointComponent
void UARPointComponent::ServerUpdatePayload(struct FARPointUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPointComponent", "ServerUpdatePayload");
    struct
    {
        struct FARPointUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARPointUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPointComponent", "ReceiveUpdate");
    struct
    {
        struct FARPointUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARPointUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPointComponent", "ReceiveAdd");
    struct
    {
        struct FARPointUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARPointUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARFaceComponent
void UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARFaceComponent", "SetFaceComponentDebugMode");
    struct
    {
        enum EFaceComponentDebugMode NewDebugMode;
    } Parms{};
    Parms.NewDebugMode = (enum EFaceComponentDebugMode)NewDebugMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARFaceComponent::ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARFaceComponent", "ServerUpdatePayload");
    struct
    {
        struct FARFaceUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARFaceUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARFaceComponent", "ReceiveUpdate");
    struct
    {
        struct FARFaceUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARFaceUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARFaceComponent", "ReceiveAdd");
    struct
    {
        struct FARFaceUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARFaceUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARImageComponent
void UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARImageComponent", "SetImageComponentDebugMode");
    struct
    {
        enum EImageComponentDebugMode NewDebugMode;
    } Parms{};
    Parms.NewDebugMode = (enum EImageComponentDebugMode)NewDebugMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARImageComponent::ServerUpdatePayload(struct FARImageUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARImageComponent", "ServerUpdatePayload");
    struct
    {
        struct FARImageUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARImageUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARImageComponent", "ReceiveUpdate");
    struct
    {
        struct FARImageUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARImageUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARImageComponent", "ReceiveAdd");
    struct
    {
        struct FARImageUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARImageUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARQRCodeComponent
void UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARQRCodeComponent", "SetQRCodeComponentDebugMode");
    struct
    {
        enum EQRCodeComponentDebugMode NewDebugMode;
    } Parms{};
    Parms.NewDebugMode = (enum EQRCodeComponentDebugMode)NewDebugMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARQRCodeComponent::ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARQRCodeComponent", "ServerUpdatePayload");
    struct
    {
        struct FARQRCodeUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARQRCodeUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARQRCodeComponent", "ReceiveUpdate");
    struct
    {
        struct FARQRCodeUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARQRCodeUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARQRCodeComponent", "ReceiveAdd");
    struct
    {
        struct FARQRCodeUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARQRCodeUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARPoseComponent
void UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARPoseComponent", "SetPoseComponentDebugMode");
    struct
    {
        enum EPoseComponentDebugMode NewDebugMode;
    } Parms{};
    Parms.NewDebugMode = (enum EPoseComponentDebugMode)NewDebugMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARPoseComponent::ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPoseComponent", "ServerUpdatePayload");
    struct
    {
        struct FARPoseUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARPoseUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPoseComponent", "ReceiveUpdate");
    struct
    {
        struct FARPoseUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARPoseUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARPoseComponent", "ReceiveAdd");
    struct
    {
        struct FARPoseUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARPoseUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UAREnvironmentProbeComponent
void UAREnvironmentProbeComponent::ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AREnvironmentProbeComponent", "ServerUpdatePayload");
    struct
    {
        struct FAREnvironmentProbeUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FAREnvironmentProbeUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AREnvironmentProbeComponent", "ReceiveUpdate");
    struct
    {
        struct FAREnvironmentProbeUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FAREnvironmentProbeUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AREnvironmentProbeComponent", "ReceiveAdd");
    struct
    {
        struct FAREnvironmentProbeUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FAREnvironmentProbeUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARObjectComponent
void UARObjectComponent::ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARObjectComponent", "ServerUpdatePayload");
    struct
    {
        struct FARObjectUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARObjectUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARObjectComponent", "ReceiveUpdate");
    struct
    {
        struct FARObjectUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARObjectUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARObjectComponent", "ReceiveAdd");
    struct
    {
        struct FARObjectUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARObjectUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARMeshComponent
void UARMeshComponent::ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARMeshComponent", "ServerUpdatePayload");
    struct
    {
        struct FARMeshUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARMeshUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARMeshComponent", "ReceiveUpdate");
    struct
    {
        struct FARMeshUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARMeshUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARMeshComponent", "ReceiveAdd");
    struct
    {
        struct FARMeshUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARMeshUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARGeoAnchorComponent
void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARGeoAnchorComponent", "SetGeoAnchorComponentDebugMode");
    struct
    {
        enum EGeoAnchorComponentDebugMode NewDebugMode;
    } Parms{};
    Parms.NewDebugMode = (enum EGeoAnchorComponentDebugMode)NewDebugMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UARGeoAnchorComponent::ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoAnchorComponent", "ServerUpdatePayload");
    struct
    {
        struct FARGeoAnchorUpdatePayload NewPayload;
    } Parms{};
    Parms.NewPayload = (struct FARGeoAnchorUpdatePayload)NewPayload;
    this->ProcessEvent(Func, &Parms);
}

void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoAnchorComponent", "ReceiveUpdate");
    struct
    {
        struct FARGeoAnchorUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARGeoAnchorUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoAnchorComponent", "ReceiveAdd");
    struct
    {
        struct FARGeoAnchorUpdatePayload Payload;
    } Parms{};
    Parms.Payload = (struct FARGeoAnchorUpdatePayload)Payload;
    this->ProcessEvent(Func, &Parms);
}

// UARDependencyHandler
void UARDependencyHandler::StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARDependencyHandler", "StartARSessionLatent");
    struct
    {
        struct UObject* WorldContextObject;
        struct UARSessionConfig* SessionConfig;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SessionConfig = (struct UARSessionConfig*)SessionConfig;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
}

void UARDependencyHandler::RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARDependencyHandler", "RequestARSessionPermission");
    struct
    {
        struct UObject* WorldContextObject;
        struct UARSessionConfig* SessionConfig;
        struct FLatentActionInfo LatentInfo;
        enum EARServicePermissionRequestResult OutPermissionResult;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SessionConfig = (struct UARSessionConfig*)SessionConfig;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    OutPermissionResult = Parms.OutPermissionResult;
}

void UARDependencyHandler::InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARDependencyHandler", "InstallARService");
    struct
    {
        struct UObject* WorldContextObject;
        struct FLatentActionInfo LatentInfo;
        enum EARServiceInstallRequestResult OutInstallResult;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    OutInstallResult = Parms.OutInstallResult;
}

struct UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARDependencyHandler", "GetARDependencyHandler");
    struct
    {
        struct UARDependencyHandler* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UARDependencyHandler::CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARDependencyHandler", "CheckARServiceAvailability");
    struct
    {
        struct UObject* WorldContextObject;
        struct FLatentActionInfo LatentInfo;
        enum EARServiceAvailability OutAvailability;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    OutAvailability = Parms.OutAvailability;
}

// UARGeoTrackingSupport
struct UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingSupport");
    struct
    {
        struct UARGeoTrackingSupport* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingStateReason");
    struct
    {
        enum EARGeoTrackingStateReason ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingState");
    struct
    {
        enum EARGeoTrackingState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingAccuracy");
    struct
    {
        enum EARGeoTrackingAccuracy ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocationWithAltitude");
    struct
    {
        float Longitude;
        float Latitude;
        float AltitudeMeters;
        struct FString OptionalAnchorName;
        bool ReturnValue;
    } Parms{};
    Parms.Longitude = (float)Longitude;
    Parms.Latitude = (float)Latitude;
    Parms.AltitudeMeters = (float)AltitudeMeters;
    Parms.OptionalAnchorName = (struct FString)OptionalAnchorName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocation");
    struct
    {
        float Longitude;
        float Latitude;
        struct FString OptionalAnchorName;
        bool ReturnValue;
    } Parms{};
    Parms.Longitude = (float)Longitude;
    Parms.Latitude = (float)Latitude;
    Parms.OptionalAnchorName = (struct FString)OptionalAnchorName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "GeoTrackingAvailabilityDelegate__DelegateSignature");
    struct
    {
        bool bIsAvailable;
        struct FString Error;
    } Parms{};
    Parms.bIsAvailable = (bool)bIsAvailable;
    Parms.Error = (struct FString)Error;
    this->ProcessEvent(Func, &Parms);
}

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailabilityAtLocation");
    struct
    {
        struct UObject* WorldContextObject;
        float Longitude;
        float Latitude;
        struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Longitude = (float)Longitude;
    Parms.Latitude = (float)Latitude;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailability");
    struct
    {
        struct UObject* WorldContextObject;
        struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGetGeoLocationAsyncTaskBlueprintProxy
void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GetGeoLocationAsyncTaskBlueprintProxy", "GetGeoLocationDelegate__DelegateSignature");
    struct
    {
        float Longitude;
        float Latitude;
        float Altitude;
        struct FString Error;
    } Parms{};
    Parms.Longitude = (float)Longitude;
    Parms.Latitude = (float)Latitude;
    Parms.Altitude = (float)Altitude;
    Parms.Error = (struct FString)Error;
    this->ProcessEvent(Func, &Parms);
}

struct UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, const struct FVector& WorldPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GetGeoLocationAsyncTaskBlueprintProxy", "GetGeoLocationAtWorldPosition");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector WorldPosition;
        struct UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WorldPosition = (struct FVector)WorldPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UARLifeCycleComponent
void UARLifeCycleComponent::ServerSpawnARActor(struct UObject* ComponentClass, struct FGuid NativeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARLifeCycleComponent", "ServerSpawnARActor");
    struct
    {
        struct UObject* ComponentClass;
        struct FGuid NativeID;
    } Parms{};
    Parms.ComponentClass = (struct UObject*)ComponentClass;
    Parms.NativeID = (struct FGuid)NativeID;
    this->ProcessEvent(Func, &Parms);
}

void UARLifeCycleComponent::ServerDestroyARActor(struct AARActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARLifeCycleComponent", "ServerDestroyARActor");
    struct
    {
        struct AARActor* Actor;
    } Parms{};
    Parms.Actor = (struct AARActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARLifeCycleComponent", "InstanceARActorToBeDestroyedDelegate__DelegateSignature");
    struct
    {
        struct AARActor* Actor;
    } Parms{};
    Parms.Actor = (struct AARActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(struct UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARLifeCycleComponent", "InstanceARActorSpawnedDelegate__DelegateSignature");
    struct
    {
        struct UObject* ComponentClass;
        struct FGuid NativeID;
        struct AARActor* SpawnedActor;
    } Parms{};
    Parms.ComponentClass = (struct UObject*)ComponentClass;
    Parms.NativeID = (struct FGuid)NativeID;
    Parms.SpawnedActor = (struct AARActor*)SpawnedActor;
    this->ProcessEvent(Func, &Parms);
}

// UARBasicLightEstimate
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

// UARPin
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

// UARSessionConfig
bool UARSessionConfig::ShouldResetTrackedObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldResetTrackedObjects");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldResetCameraTracking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldResetCameraTracking");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldRenderCameraOverlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldRenderCameraOverlay");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldEnableCameraTracking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldEnableCameraTracking");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldEnableAutoFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "ShouldEnableAutoFocus");
    struct
    {
        bool ReturnValue;
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

void UARSessionConfig::SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetSceneReconstructionMethod");
    struct
    {
        enum EARSceneReconstruction InSceneReconstructionMethod;
    } Parms{};
    Parms.InSceneReconstructionMethod = (enum EARSceneReconstruction)InSceneReconstructionMethod;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetResetTrackedObjects");
    struct
    {
        bool bNewValue;
    } Parms{};
    Parms.bNewValue = (bool)bNewValue;
    this->ProcessEvent(Func, &Parms);
}

void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetResetCameraTracking");
    struct
    {
        bool bNewValue;
    } Parms{};
    Parms.bNewValue = (bool)bNewValue;
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

void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "SetEnableAutoFocus");
    struct
    {
        bool bNewValue;
    } Parms{};
    Parms.bNewValue = (bool)bNewValue;
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

EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSessionConfig", "GetSceneReconstructionMethod");
    struct
    {
        enum EARSceneReconstruction ReturnValue;
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

// AARSharedWorldGameMode
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

// AARSharedWorldGameState
void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldGameState", "K2_OnARWorldMapIsReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AARSharedWorldPlayerController
void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldPlayerController", "ServerMarkReadyForReceiving");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldPlayerController", "ClientUpdatePreviewImageData");
    struct
    {
        int32_t Offset;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.Offset = (int32_t)Offset;
    Parms.Buffer = (struct TArray<uint8_t>)Buffer;
    this->ProcessEvent(Func, &Parms);
}

void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, struct TArray<uint8_t> Buffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARSharedWorldPlayerController", "ClientUpdateARWorldData");
    struct
    {
        int32_t Offset;
        struct TArray<uint8_t> Buffer;
    } Parms{};
    Parms.Offset = (int32_t)Offset;
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

// AARSkyLight
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

// UARTrackedGeometry
bool UARTrackedGeometry::IsTracked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "IsTracked");
    struct
    {
        bool ReturnValue;
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

struct FString UARTrackedGeometry::GetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARTrackedGeometry", "GetName");
    struct
    {
        struct FString ReturnValue;
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

// UARPlaneGeometry
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

// UARTrackedImage
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

// UARFaceGeometry
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

// UAREnvironmentCaptureProbe
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

// UARTrackedObject
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

// UARTrackedPose
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

// UARMeshGeometry
bool UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARMeshGeometry", "GetObjectClassificationAtLocation");
    struct
    {
        struct FVector InWorldLocation;
        enum EARObjectClassification OutClassification;
        struct FVector OutClassificationLocation;
        float MaxLocationDiff;
        bool ReturnValue;
    } Parms{};
    Parms.InWorldLocation = (struct FVector)InWorldLocation;
    Parms.MaxLocationDiff = (float)MaxLocationDiff;
    this->ProcessEvent(Func, &Parms);
    OutClassification = Parms.OutClassification;
    OutClassificationLocation = Parms.OutClassificationLocation;
    return Parms.ReturnValue;
}

// UARGeoAnchor
float UARGeoAnchor::GetLongitude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoAnchor", "GetLongitude");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UARGeoAnchor::GetLatitude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoAnchor", "GetLatitude");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EARAltitudeSource UARGeoAnchor::GetAltitudeSource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoAnchor", "GetAltitudeSource");
    struct
    {
        enum EARAltitudeSource ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UARGeoAnchor::GetAltitudeMeters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ARGeoAnchor", "GetAltitudeMeters");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UARCandidateImage
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

// UARCandidateObject
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
