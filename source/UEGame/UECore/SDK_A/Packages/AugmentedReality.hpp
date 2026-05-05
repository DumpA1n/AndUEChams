#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AugmentedReality
// Enums: 24
// Structs: 7
// Classes: 32

struct UMRMeshComponent;
struct USceneComponent;
struct UTexture2D;
struct UWorld;
struct FARSharedWorldReplicationState;
struct FARTraceResult;
struct FARSkeletonDefinition;
struct FARPose3D;
struct FARPose2D;
struct FARVideoFormat;
struct FARSessionStatus;
struct UARBlueprintLibrary;
struct UARTraceResultLibrary;
struct UARBaseAsyncTaskBlueprintProxy;
struct UARSaveWorldAsyncTaskBlueprintProxy;
struct UARGetCandidateObjectAsyncTaskBlueprintProxy;
struct UARLightEstimate;
struct UARBasicLightEstimate;
struct AAROriginActor;
struct UARPin;
struct UARSessionConfig;
struct AARSharedWorldGameMode;
struct AARSharedWorldGameState;
struct AARSharedWorldPlayerController;
struct AARSkyLight;
struct UARTexture;
struct UARTextureCameraImage;
struct UARTextureCameraDepth;
struct UAREnvironmentCaptureProbeTexture;
struct UARTraceResultDummy;
struct UARTrackedGeometry;
struct UARPlaneGeometry;
struct UARTrackedPoint;
struct UARTrackedImage;
struct UARTrackedQRCode;
struct UARFaceGeometry;
struct UAREnvironmentCaptureProbe;
struct UARTrackedObject;
struct UARTrackedPose;
struct UARTrackableNotifyComponent;
struct UARTypesDummyClass;
struct UARCandidateImage;
struct UARCandidateObject;

// Object: Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4
};

// Object: Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature_MAX = 4
};

// Object: Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2
};

// Object: Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3
};

// Object: Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2
};

// Object: Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3
};

// Object: Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3
};

// Object: Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	EARSessionType_MAX = 7
};

// Object: Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3
};

// Object: Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3
};

// Object: Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3
};

// Object: Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	CameraImage = 0,
	CameraDepth = 1,
	EnvironmentCapture = 2,
	EARTextureType_MAX = 3
};

// Object: Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2
};

// Object: Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61
};

// Object: Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2
};

// Object: Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2
};

// Object: Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2
};

// Object: Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10,
	EARObjectClassification_MAX = 11
};

// Object: Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3
};

// Object: Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4
};

// Object: Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6,
	EARSessionStatus_MAX = 7
};

// Object: Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	EARTrackingQualityReason_MAX = 5
};

// Object: Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3
};

// Object: Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	EARLineTraceChannels_MAX = 9
};

// Object: ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// Size: 0x8 (Inherited: 0x0)
struct FARSharedWorldReplicationState
{
	int32_t PreviewImageOffset; // 0x0(0x4)
	int32_t ARWorldOffset; // 0x4(0x4)
};

// Object: ScriptStruct AugmentedReality.ARTraceResult
// Size: 0x60 (Inherited: 0x0)
struct FARTraceResult
{
	float DistanceFromCamera; // 0x0(0x4)
	EARLineTraceChannels TraceChannel; // 0x4(0x1)
	uint8_t Pad_0x5[0xB]; // 0x5(0xB)
	struct FTransform LocalToTrackingTransform; // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry; // 0x40(0x8)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)
};

// Object: ScriptStruct AugmentedReality.ARSkeletonDefinition
// Size: 0x28 (Inherited: 0x0)
struct FARSkeletonDefinition
{
	int32_t NumJoints; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FName> JointNames; // 0x8(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// Object: ScriptStruct AugmentedReality.ARPose3D
// Size: 0x50 (Inherited: 0x0)
struct FARPose3D
{
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0(0x28)
	struct TArray<struct FTransform> JointTransforms; // 0x28(0x10)
	struct TArray<uint8_t> IsJointTracked; // 0x38(0x10)
	EARJointTransformSpace JointTransformSpace; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct AugmentedReality.ARPose2D
// Size: 0x48 (Inherited: 0x0)
struct FARPose2D
{
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0(0x28)
	struct TArray<struct FVector2D> JointLocations; // 0x28(0x10)
	struct TArray<uint8_t> IsJointTracked; // 0x38(0x10)
};

// Object: ScriptStruct AugmentedReality.ARVideoFormat
// Size: 0xC (Inherited: 0x0)
struct FARVideoFormat
{
	int32_t FPS; // 0x0(0x4)
	int32_t Width; // 0x4(0x4)
	int32_t Height; // 0x8(0x4)
};

// Object: ScriptStruct AugmentedReality.ARSessionStatus
// Size: 0x18 (Inherited: 0x0)
struct FARSessionStatus
{
	struct FString AdditionalInfo; // 0x0(0x10)
	EARSessionStatus Status; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UARBlueprintLibrary, "ARBlueprintLibrary")

	// Object: Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3fd94
	// Params: [ Num(1) Size(0x8) ]
	static void UnpinComponent(struct USceneComponent* ComponentToUnpin);

	// Object: Function AugmentedReality.ARBlueprintLibrary.StopARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3fd80
	// Params: [ Num(0) Size(0x0) ]
	static void StopARSession();

	// Object: Function AugmentedReality.ARBlueprintLibrary.StartARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3fcec
	// Params: [ Num(1) Size(0x8) ]
	static void StartARSession(struct UARSessionConfig* SessionConfig);

	// Object: Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c3fc20
	// Params: [ Num(1) Size(0x30) ]
	static void SetAlignmentTransform(const struct FTransform& InAlignmentTransform);

	// Object: Function AugmentedReality.ARBlueprintLibrary.RemovePin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3fb8c
	// Params: [ Num(1) Size(0x8) ]
	static void RemovePin(struct UARPin* PinToRemove);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15c3fa04
	// Params: [ Num(4) Size(0x80) ]
	static struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, struct FName DebugName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PinComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c3f878
	// Params: [ Num(5) Size(0x58) ]
	static struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3f864
	// Params: [ Num(0) Size(0x0) ]
	static void PauseARSession();

	// Object: Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c3f658
	// Params: [ Num(7) Size(0x30) ]
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, uint8_t bTestFeaturePoints, uint8_t bTestGroundPlane, uint8_t bTestPlaneExtents, uint8_t bTestPlaneBoundaryPolygon);

	// Object: Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c3f48c
	// Params: [ Num(6) Size(0x20) ]
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, uint8_t bTestFeaturePoints, uint8_t bTestGroundPlane, uint8_t bTestPlaneExtents, uint8_t bTestPlaneBoundaryPolygon);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3f3e4
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t IsSessionTypeSupported(EARSessionType SessionType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3f300
	// Params: [ Num(3) Size(0x3) ]
	static uint8_t IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3f2c8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsARSupported();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3f294
	// Params: [ Num(1) Size(0x1) ]
	static EARWorldMappingState GetWorldMappingStatus();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3f260
	// Params: [ Num(1) Size(0x1) ]
	static EARTrackingQualityReason GetTrackingQualityReason();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3f22c
	// Params: [ Num(1) Size(0x1) ]
	static EARTrackingQuality GetTrackingQuality();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3f154
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3f120
	// Params: [ Num(1) Size(0x8) ]
	static struct UARSessionConfig* GetSessionConfig();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3f088
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FVector> GetPointCloud();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3f054
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTextureCameraImage* GetPersonSegmentationImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3f020
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTextureCameraImage* GetPersonSegmentationDepthImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3efec
	// Params: [ Num(1) Size(0x8) ]
	static struct UARLightEstimate* GetCurrentLightEstimate();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3efb8
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTextureCameraImage* GetCameraImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3ef84
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTextureCameraDepth* GetCameraDepth();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3eee4
	// Params: [ Num(1) Size(0x18) ]
	static struct FARSessionStatus GetARSessionStatus();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3ee4c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedPose*> GetAllTrackedPoses();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3edb4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3ed1c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3ec84
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedImage*> GetAllTrackedImages();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3ebec
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3eb7c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FARPose2D> GetAllTracked2DPoses();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3eae4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARPin*> GetAllPins();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3ea4c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedGeometry*> GetAllGeometries();

	// Object: Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c3e8cc
	// Params: [ Num(5) Size(0x28) ]
	static void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds);

	// Object: Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c3e74c
	// Params: [ Num(5) Size(0x28) ]
	static void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds);

	// Object: Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c3e594
	// Params: [ Num(5) Size(0x30) ]
	static struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth);

	// Object: Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c3e4b0
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent);
};

// Object: Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UARTraceResultLibrary, "ARTraceResultLibrary")

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c403d0
	// Params: [ Num(2) Size(0x68) ]
	static struct UARTrackedGeometry* GetTrackedGeometry(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c402c0
	// Params: [ Num(2) Size(0x61) ]
	static EARLineTraceChannels GetTraceChannel(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c401a0
	// Params: [ Num(2) Size(0x90) ]
	static struct FTransform GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c40080
	// Params: [ Num(2) Size(0x90) ]
	static struct FTransform GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c3ff70
	// Params: [ Num(2) Size(0x64) ]
	static float GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
};

// Object: Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x50 (Inherited: 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UARBaseAsyncTaskBlueprintProxy, "ARBaseAsyncTaskBlueprintProxy")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
};

// Object: Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80 (Inherited: 0x50)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	DEFINE_UE_CLASS_HELPERS(UARSaveWorldAsyncTaskBlueprintProxy, "ARSaveWorldAsyncTaskBlueprintProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)

	// Object: Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c404f4
	// Params: [ Num(2) Size(0x10) ]
	static struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject);
};

// Object: Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0x98 (Inherited: 0x50)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	DEFINE_UE_CLASS_HELPERS(UARGetCandidateObjectAsyncTaskBlueprintProxy, "ARGetCandidateObjectAsyncTaskBlueprintProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	uint8_t Pad_0x70[0x28]; // 0x70(0x28)

	// Object: Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c405a0
	// Params: [ Num(4) Size(0x28) ]
	static struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent);
};

// Object: Class AugmentedReality.ARLightEstimate
// Size: 0x28 (Inherited: 0x28)
struct UARLightEstimate : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARLightEstimate, "ARLightEstimate")
};

// Object: Class AugmentedReality.ARBasicLightEstimate
// Size: 0x40 (Inherited: 0x28)
struct UARBasicLightEstimate : UARLightEstimate
{
	DEFINE_UE_CLASS_HELPERS(UARBasicLightEstimate, "ARBasicLightEstimate")

	float AmbientIntensityLumens; // 0x28(0x4)
	float AmbientColorTemperatureKelvin; // 0x2C(0x4)
	struct FLinearColor AmbientColor; // 0x30(0x10)

	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4073c
	// Params: [ Num(1) Size(0x4) ]
	float GetAmbientIntensityLumens();

	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c40708
	// Params: [ Num(1) Size(0x4) ]
	float GetAmbientColorTemperatureKelvin();

	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c406d0
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetAmbientColor();
};

// Object: Class AugmentedReality.AROriginActor
// Size: 0x370 (Inherited: 0x370)
struct AAROriginActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAROriginActor, "AROriginActor")
};

// Object: Class AugmentedReality.ARPin
// Size: 0xF0 (Inherited: 0x28)
struct UARPin : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARPin, "ARPin")

	struct UARTrackedGeometry* TrackedGeometry; // 0x28(0x8)
	struct USceneComponent* PinnedComponent; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	EARTrackingState TrackingState; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x1F]; // 0xA1(0x1F)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)

	// Object: Function AugmentedReality.ARPin.GetTrackingState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c40a60
	// Params: [ Num(1) Size(0x1) ]
	EARTrackingState GetTrackingState();

	// Object: Function AugmentedReality.ARPin.GetTrackedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c40a2c
	// Params: [ Num(1) Size(0x8) ]
	struct UARTrackedGeometry* GetTrackedGeometry();

	// Object: Function AugmentedReality.ARPin.GetPinnedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c409f8
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetPinnedComponent();

	// Object: Function AugmentedReality.ARPin.GetLocalToWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4098c
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToWorldTransform();

	// Object: Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c40920
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToTrackingTransform();

	// Object: Function AugmentedReality.ARPin.GetDebugName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c408ec
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDebugName();

	// Object: Function AugmentedReality.ARPin.DebugDraw
	// Flags: [Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x15c40784
	// Params: [ Num(4) Size(0x20) ]
	void DebugDraw(struct UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};

// Object: Class AugmentedReality.ARSessionConfig
// Size: 0xA8 (Inherited: 0x30)
struct UARSessionConfig : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UARSessionConfig, "ARSessionConfig")

	uint8_t bGenerateMeshDataFromTrackedGeometry : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bGenerateCollisionForMeshData : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t bGenerateNavMeshForMeshData : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	uint8_t bUseMeshDataForOcclusion : 1; // 0x33(0x1), Mask(0x1)
	uint8_t BitPad_0x33_1 : 7; // 0x33(0x1)
	uint8_t bRenderMeshDataInWireframe : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t bTrackSceneObjects : 1; // 0x35(0x1), Mask(0x1)
	uint8_t BitPad_0x35_1 : 7; // 0x35(0x1)
	uint8_t bUsePersonSegmentationForOcclusion : 1; // 0x36(0x1), Mask(0x1)
	uint8_t BitPad_0x36_1 : 7; // 0x36(0x1)
	EARWorldAlignment WorldAlignment; // 0x37(0x1)
	EARSessionType SessionType; // 0x38(0x1)
	EARPlaneDetectionMode PlaneDetectionMode; // 0x39(0x1)
	uint8_t bHorizontalPlaneDetection : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t bVerticalPlaneDetection : 1; // 0x3B(0x1), Mask(0x1)
	uint8_t BitPad_0x3B_1 : 7; // 0x3B(0x1)
	uint8_t bEnableAutoFocus : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	EARLightEstimationMode LightEstimationMode; // 0x3D(0x1)
	EARFrameSyncMode FrameSyncMode; // 0x3E(0x1)
	uint8_t bEnableAutomaticCameraOverlay : 1; // 0x3F(0x1), Mask(0x1)
	uint8_t BitPad_0x3F_1 : 7; // 0x3F(0x1)
	uint8_t bEnableAutomaticCameraTracking : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bResetCameraTracking : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bResetTrackedObjects : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t Pad_0x43[0x5]; // 0x43(0x5)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x4)
	EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct TArray<uint8_t> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0xC)
	EARFaceTrackingDirection FaceTrackingDirection; // 0x8C(0x1)
	EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8D(0x1)
	uint8_t Pad_0x8E[0x2]; // 0x8E(0x2)
	struct TArray<uint8_t> SerializedARCandidateImageDatabase; // 0x90(0x10)
	EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)

	// Object: Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41a20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldResetTrackedObjects();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c419e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldResetCameraTracking();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c419b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldRenderCameraOverlay();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41978
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldEnableCameraTracking();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41940
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldEnableAutoFocus();

	// Object: Function AugmentedReality.ARSessionConfig.SetWorldMapData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c41848
	// Params: [ Num(1) Size(0x10) ]
	void SetWorldMapData(struct TArray<uint8_t> WorldMapData);

	// Object: Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c417a4
	// Params: [ Num(1) Size(0x1) ]
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);

	// Object: Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c416f8
	// Params: [ Num(1) Size(0x1) ]
	void SetResetTrackedObjects(uint8_t bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c4164c
	// Params: [ Num(1) Size(0x1) ]
	void SetResetCameraTracking(uint8_t bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c415a8
	// Params: [ Num(1) Size(0x1) ]
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);

	// Object: Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c41504
	// Params: [ Num(1) Size(0x1) ]
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);

	// Object: Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c41458
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableAutoFocus(uint8_t bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c413ac
	// Params: [ Num(1) Size(0xC) ]
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat);

	// Object: Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15c412f0
	// Params: [ Num(1) Size(0x10) ]
	void SetCandidateObjectList(const struct TArray<struct UARCandidateObject*>& InCandidateObjects);

	// Object: Function AugmentedReality.ARSessionConfig.GetWorldMapData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4126c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetWorldMapData();

	// Object: Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41238
	// Params: [ Num(1) Size(0x1) ]
	EARWorldAlignment GetWorldAlignment();

	// Object: Function AugmentedReality.ARSessionConfig.GetSessionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41204
	// Params: [ Num(1) Size(0x1) ]
	EARSessionType GetSessionType();

	// Object: Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c411d0
	// Params: [ Num(1) Size(0x1) ]
	EARPlaneDetectionMode GetPlaneDetectionMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4119c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxNumSimultaneousImagesTracked();

	// Object: Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41168
	// Params: [ Num(1) Size(0x1) ]
	EARLightEstimationMode GetLightEstimationMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41134
	// Params: [ Num(1) Size(0x1) ]
	EARFrameSyncMode GetFrameSyncMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41100
	// Params: [ Num(1) Size(0x1) ]
	EARFaceTrackingUpdate GetFaceTrackingUpdate();

	// Object: Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c410cc
	// Params: [ Num(1) Size(0x1) ]
	EARFaceTrackingDirection GetFaceTrackingDirection();

	// Object: Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41098
	// Params: [ Num(1) Size(0x1) ]
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();

	// Object: Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c41064
	// Params: [ Num(1) Size(0x1) ]
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature();

	// Object: Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4102c
	// Params: [ Num(1) Size(0xC) ]
	struct FARVideoFormat GetDesiredVideoFormat();

	// Object: Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c40fa8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList();

	// Object: Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c40f24
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARCandidateImage*> GetCandidateImageList();

	// Object: Function AugmentedReality.ARSessionConfig.AddCandidateObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c40e80
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidateObject(struct UARCandidateObject* CandidateObject);

	// Object: Function AugmentedReality.ARSessionConfig.AddCandidateImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c40ddc
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage);
};

// Object: Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x4C0 (Inherited: 0x458)
struct AARSharedWorldGameMode : AGameMode
{
	DEFINE_UE_CLASS_HELPERS(AARSharedWorldGameMode, "ARSharedWorldGameMode")

	int32_t BufferSizePerChunk; // 0x454(0x4)
	uint8_t Pad_0x45C[0x64]; // 0x45C(0x64)

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x15c42a24
	// Params: [ Num(1) Size(0x10) ]
	void SetPreviewImageData(struct TArray<uint8_t> ImageData);

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x15c42a10
	// Params: [ Num(0) Size(0x0) ]
	void SetARWorldSharingIsReady();

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x15c42918
	// Params: [ Num(1) Size(0x10) ]
	void SetARSharedWorldData(struct TArray<uint8_t> ARWorldData);

	// Object: Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x15c428e4
	// Params: [ Num(1) Size(0x8) ]
	struct AARSharedWorldGameState* GetARSharedWorldGameState();
};

// Object: Class AugmentedReality.ARSharedWorldGameState
// Size: 0x408 (Inherited: 0x3D0)
struct AARSharedWorldGameState : AGameState
{
	DEFINE_UE_CLASS_HELPERS(AARSharedWorldGameState, "ARSharedWorldGameState")

	struct TArray<uint8_t> PreviewImageData; // 0x3D0(0x10)
	struct TArray<uint8_t> ARWorldData; // 0x3E0(0x10)
	int32_t PreviewImageBytesTotal; // 0x3F0(0x4)
	int32_t ARWorldBytesTotal; // 0x3F4(0x4)
	int32_t PreviewImageBytesDelivered; // 0x3F8(0x4)
	int32_t ARWorldBytesDelivered; // 0x3FC(0x4)
	uint8_t Pad_0x400[0x8]; // 0x400(0x8)

	// Object: Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void K2_OnARWorldMapIsReady();
};

// Object: Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x6C0 (Inherited: 0x6C0)
struct AARSharedWorldPlayerController : APlayerController
{
	DEFINE_UE_CLASS_HELPERS(AARSharedWorldPlayerController, "ARSharedWorldPlayerController")

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x15c430f4
	// Params: [ Num(0) Size(0x0) ]
	void ServerMarkReadyForReceiving();

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0x15c42fd8
	// Params: [ Num(2) Size(0x18) ]
	void ClientUpdatePreviewImageData(int32_t offset, struct TArray<uint8_t> Buffer);

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0x15c42ebc
	// Params: [ Num(2) Size(0x18) ]
	void ClientUpdateARWorldData(int32_t offset, struct TArray<uint8_t> Buffer);

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0x15c42db0
	// Params: [ Num(2) Size(0x8) ]
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
};

// Object: Class AugmentedReality.ARSkyLight
// Size: 0x390 (Inherited: 0x380)
struct AARSkyLight : ASkyLight
{
	DEFINE_UE_CLASS_HELPERS(AARSkyLight, "ARSkyLight")

	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x380(0x8)
	uint8_t Pad_0x388[0x8]; // 0x388(0x8)

	// Object: Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c43158
	// Params: [ Num(1) Size(0x8) ]
	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe);
};

// Object: Class AugmentedReality.ARTexture
// Size: 0x150 (Inherited: 0x130)
struct UARTexture : UTexture
{
	DEFINE_UE_CLASS_HELPERS(UARTexture, "ARTexture")

	EARTextureType TextureType; // 0x130(0x1)
	uint8_t Pad_0x131[0x3]; // 0x131(0x3)
	float Timestamp; // 0x134(0x4)
	struct FGuid ExternalTextureGuid; // 0x138(0x10)
	struct FVector2D size; // 0x148(0x8)
};

// Object: Class AugmentedReality.ARTextureCameraImage
// Size: 0x150 (Inherited: 0x150)
struct UARTextureCameraImage : UARTexture
{
	DEFINE_UE_CLASS_HELPERS(UARTextureCameraImage, "ARTextureCameraImage")
};

// Object: Class AugmentedReality.ARTextureCameraDepth
// Size: 0x158 (Inherited: 0x150)
struct UARTextureCameraDepth : UARTexture
{
	DEFINE_UE_CLASS_HELPERS(UARTextureCameraDepth, "ARTextureCameraDepth")

	EARDepthQuality DepthQuality; // 0x150(0x1)
	EARDepthAccuracy DepthAccuracy; // 0x151(0x1)
	uint8_t bIsTemporallySmoothed : 1; // 0x152(0x1), Mask(0x1)
	uint8_t BitPad_0x152_1 : 7; // 0x152(0x1)
	uint8_t Pad_0x153[0x5]; // 0x153(0x5)
};

// Object: Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x1E0 (Inherited: 0x1C0)
struct UAREnvironmentCaptureProbeTexture : UTextureCube
{
	DEFINE_UE_CLASS_HELPERS(UAREnvironmentCaptureProbeTexture, "AREnvironmentCaptureProbeTexture")

	EARTextureType TextureType; // 0x1C0(0x1)
	uint8_t Pad_0x1C1[0x3]; // 0x1C1(0x3)
	float Timestamp; // 0x1C4(0x4)
	struct FGuid ExternalTextureGuid; // 0x1C8(0x10)
	struct FVector2D size; // 0x1D8(0x8)
};

// Object: Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARTraceResultDummy, "ARTraceResultDummy")
};

// Object: Class AugmentedReality.ARTrackedGeometry
// Size: 0xF0 (Inherited: 0x28)
struct UARTrackedGeometry : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedGeometry, "ARTrackedGeometry")

	struct FGuid UniqueId; // 0x28(0x10)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	EARTrackingState TrackingState; // 0xA0(0x1)
	uint8_t Pad_0xA1[0xF]; // 0xA1(0xF)
	struct UMRMeshComponent* UnderlyingMesh; // 0xB0(0x8)
	EARObjectClassification ObjectClassification; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x17]; // 0xB9(0x17)
	int32_t LastUpdateFrameNumber; // 0xD0(0x4)
	uint8_t Pad_0xD4[0xC]; // 0xD4(0xC)
	struct FName DebugName; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)

	// Object: Function AugmentedReality.ARTrackedGeometry.IsTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43968
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTracked();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c43934
	// Params: [ Num(1) Size(0x8) ]
	struct UMRMeshComponent* GetUnderlyingMesh();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43900
	// Params: [ Num(1) Size(0x1) ]
	EARTrackingState GetTrackingState();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c438e4
	// Params: [ Num(1) Size(0x1) ]
	EARObjectClassification GetObjectClassification();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43878
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToWorldTransform();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4380c
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToTrackingTransform();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c437d8
	// Params: [ Num(1) Size(0x4) ]
	float GetLastUpdateTimestamp();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c437a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLastUpdateFrameNumber();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetDebugName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43770
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDebugName();
};

// Object: Class AugmentedReality.ARPlaneGeometry
// Size: 0x120 (Inherited: 0xF0)
struct UARPlaneGeometry : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARPlaneGeometry, "ARPlaneGeometry")

	EARPlaneOrientation Orientation; // 0xE8(0x1)
	struct FVector Center; // 0xEC(0xC)
	struct FVector Extent; // 0xF8(0xC)
	uint8_t Pad_0x109[0xF]; // 0x109(0xF)
	struct UARPlaneGeometry* SubsumedBy; // 0x118(0x8)

	// Object: Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43ae8
	// Params: [ Num(1) Size(0x8) ]
	struct UARPlaneGeometry* GetSubsumedBy();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43acc
	// Params: [ Num(1) Size(0x1) ]
	EARPlaneOrientation GetOrientation();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetExtent
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43aa8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetExtent();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetCenter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43a84
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCenter();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c439b4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// Object: Class AugmentedReality.ARTrackedPoint
// Size: 0xF0 (Inherited: 0xF0)
struct UARTrackedPoint : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedPoint, "ARTrackedPoint")
};

// Object: Class AugmentedReality.ARTrackedImage
// Size: 0x100 (Inherited: 0xF0)
struct UARTrackedImage : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedImage, "ARTrackedImage")

	struct UARCandidateImage* DetectedImage; // 0xE8(0x8)
	struct FVector2D EstimatedSize; // 0xF0(0x8)

	// Object: Function AugmentedReality.ARTrackedImage.GetEstimateSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c43be4
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetEstimateSize();

	// Object: Function AugmentedReality.ARTrackedImage.GetDetectedImage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43bc8
	// Params: [ Num(1) Size(0x8) ]
	struct UARCandidateImage* GetDetectedImage();
};

// Object: Class AugmentedReality.ARTrackedQRCode
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedQRCode : UARTrackedImage
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedQRCode, "ARTrackedQRCode")

	struct FString QRCode; // 0xF8(0x10)
	int32_t Version; // 0x108(0x4)
};

// Object: Class AugmentedReality.ARFaceGeometry
// Size: 0x1E0 (Inherited: 0xF0)
struct UARFaceGeometry : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARFaceGeometry, "ARFaceGeometry")

	struct FVector LookAtTarget; // 0xE8(0xC)
	uint8_t bIsTracked : 1; // 0xF4(0x1), Mask(0x1)
	struct TMap<EARFaceBlendShape, float> BlendShapes; // 0xF8(0x50)
	uint8_t BitPad_0x14C_1 : 7; // 0x14C(0x1)
	uint8_t Pad_0x14D[0x93]; // 0x14D(0x93)

	// Object: Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43ec0
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetWorldSpaceEyeTransform(EAREye Eye);

	// Object: Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43e08
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetLocalSpaceEyeTransform(EAREye Eye);

	// Object: Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43d5c
	// Params: [ Num(2) Size(0x8) ]
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);

	// Object: Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43cdc
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<EARFaceBlendShape, float> GetBlendShapes();
};

// Object: Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x100 (Inherited: 0xF0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UAREnvironmentCaptureProbe, "AREnvironmentCaptureProbe")

	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xF8(0x8)

	// Object: Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c43fc4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetExtent();

	// Object: Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c43f90
	// Params: [ Num(1) Size(0x8) ]
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// Object: Class AugmentedReality.ARTrackedObject
// Size: 0xF0 (Inherited: 0xF0)
struct UARTrackedObject : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedObject, "ARTrackedObject")

	struct UARCandidateObject* DetectedObject; // 0xE8(0x8)

	// Object: Function AugmentedReality.ARTrackedObject.GetDetectedObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44004
	// Params: [ Num(1) Size(0x8) ]
	struct UARCandidateObject* GetDetectedObject();
};

// Object: Class AugmentedReality.ARTrackedPose
// Size: 0x140 (Inherited: 0xF0)
struct UARTrackedPose : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedPose, "ARTrackedPose")

	uint8_t Pad_0xF0[0x50]; // 0xF0(0x50)

	// Object: Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44028
	// Params: [ Num(1) Size(0x50) ]
	struct FARPose3D GetTrackedPoseData();
};

// Object: Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x248 (Inherited: 0xF8)
struct UARTrackableNotifyComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UARTrackableNotifyComponent, "ARTrackableNotifyComponent")

	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0x108(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0x118(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0x128(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x138(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x148(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x158(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x168(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x178(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x188(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x198(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x1A8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x1B8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x1C8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1D8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1E8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1F8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x208(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x218(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x228(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x238(0x10)
};

// Object: Class AugmentedReality.ARTypesDummyClass
// Size: 0x28 (Inherited: 0x28)
struct UARTypesDummyClass : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARTypesDummyClass, "ARTypesDummyClass")
};

// Object: Class AugmentedReality.ARCandidateImage
// Size: 0x58 (Inherited: 0x30)
struct UARCandidateImage : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UARCandidateImage, "ARCandidateImage")

	struct UTexture2D* CandidateTexture; // 0x30(0x8)
	struct FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x4)
	float Height; // 0x4C(0x4)
	EARCandidateImageOrientation Orientation; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)

	// Object: Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44554
	// Params: [ Num(1) Size(0x4) ]
	float GetPhysicalWidth();

	// Object: Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44538
	// Params: [ Num(1) Size(0x4) ]
	float GetPhysicalHeight();

	// Object: Function AugmentedReality.ARCandidateImage.GetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4451c
	// Params: [ Num(1) Size(0x1) ]
	EARCandidateImageOrientation GetOrientation();

	// Object: Function AugmentedReality.ARCandidateImage.GetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44494
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFriendlyName();

	// Object: Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44478
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture2D* GetCandidateTexture();
};

// Object: Class AugmentedReality.ARCandidateObject
// Size: 0x70 (Inherited: 0x30)
struct UARCandidateObject : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UARCandidateObject, "ARCandidateObject")

	struct TArray<uint8_t> CandidateObjectData; // 0x30(0x10)
	struct FString FriendlyName; // 0x40(0x10)
	struct FBox BoundingBox; // 0x50(0x1C)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)

	// Object: Function AugmentedReality.ARCandidateObject.SetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c44870
	// Params: [ Num(1) Size(0x10) ]
	void SetFriendlyName(struct FString NewName);

	// Object: Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15c44764
	// Params: [ Num(1) Size(0x10) ]
	void SetCandidateObjectData(const struct TArray<uint8_t>& InCandidateObject);

	// Object: Function AugmentedReality.ARCandidateObject.SetBoundingBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c446ac
	// Params: [ Num(1) Size(0x1C) ]
	void SetBoundingBox(const struct FBox& InBoundingBox);

	// Object: Function AugmentedReality.ARCandidateObject.GetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44624
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFriendlyName();

	// Object: Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c4459c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetCandidateObjectData();

	// Object: Function AugmentedReality.ARCandidateObject.GetBoundingBox
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c44578
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox GetBoundingBox();
};

} // namespace SDK
