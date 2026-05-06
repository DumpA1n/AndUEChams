#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AugmentedReality
// Enums: 41
// Structs: 20
// Classes: 51

struct FLatentActionInfo;
struct UMRMeshComponent;
struct UMaterialInterface;
struct USceneComponent;
struct UTexture2D;
struct UWorld;
struct FTrackedGeometryGroup;
struct FARSessionPayload;
struct FARGeoAnchorUpdatePayload;
struct FARMeshUpdatePayload;
struct FARObjectUpdatePayload;
struct FAREnvironmentProbeUpdatePayload;
struct FARPoseUpdatePayload;
struct FARQRCodeUpdatePayload;
struct FARImageUpdatePayload;
struct FARFaceUpdatePayload;
struct FARPointUpdatePayload;
struct FARPlaneUpdatePayload;
struct FARSharedWorldReplicationState;
struct FARTraceResult;
struct FARCameraIntrinsics;
struct FARSkeletonDefinition;
struct FARPose3D;
struct FARPose2D;
struct FARVideoFormat;
struct FARSessionStatus;
struct AARActor;
struct UARBlueprintLibrary;
struct UARTraceResultLibrary;
struct UARBaseAsyncTaskBlueprintProxy;
struct UARSaveWorldAsyncTaskBlueprintProxy;
struct UARGetCandidateObjectAsyncTaskBlueprintProxy;
struct UARComponent;
struct UARPlaneComponent;
struct UARPointComponent;
struct UARFaceComponent;
struct UARImageComponent;
struct UARQRCodeComponent;
struct UARPoseComponent;
struct UAREnvironmentProbeComponent;
struct UARObjectComponent;
struct UARMeshComponent;
struct UARGeoAnchorComponent;
struct UARDependencyHandler;
struct UARGeoTrackingSupport;
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
struct UGetGeoLocationAsyncTaskBlueprintProxy;
struct UARLifeCycleComponent;
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
struct UARMeshGeometry;
struct UARGeoAnchor;
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

// Object: Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	None = 0,
	ShowGeoData = 1,
	EGeoAnchorComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
	None = 0,
	ShowSkeleton = 1,
	EPoseComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
	None = 0,
	ShowQRCode = 1,
	EQRCodeComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
	None = 0,
	ShowDetectedImage = 1,
	EImageComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
	ComponentOnly = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked = 2,
	TrackingOnly = 3,
	EARFaceTransformMixing_MAX = 4
};

// Object: Enum AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
	None = 0,
	ShowEyeVectors = 1,
	ShowFaceMesh = 2,
	EFaceComponentDebugMode_MAX = 3
};

// Object: Enum AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
	None = 0,
	ShowNetworkRole = 1,
	ShowClassification = 2,
	EPlaneComponentDebugMode_MAX = 3
};

// Object: Enum AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
	None = 0,
	GenerateMeshData = 1,
	RenderMeshDataInWireframe = 2,
	GenerateCollisionForMeshData = 4,
	GenerateNavMeshForMeshData = 8,
	UseMeshDataForOcclusion = 16,
	EARSessionConfigFlags_MAX = 17
};

// Object: Enum AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
	Granted = 0,
	Denied = 1,
	EARServicePermissionRequestResult_MAX = 2
};

// Object: Enum AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
	Installed = 0,
	DeviceNotCompatible = 1,
	UserDeclinedInstallation = 2,
	FatalError = 3,
	EARServiceInstallRequestResult_MAX = 4
};

// Object: Enum AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
	UnknownError = 0,
	UnknownChecking = 1,
	UnknownTimedOut = 2,
	UnsupportedDeviceNotCapable = 3,
	SupportedNotInstalled = 4,
	SupportedVersionTooOld = 5,
	SupportedInstalled = 6,
	EARServiceAvailability_MAX = 7
};

// Object: Enum AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
	Undetermined = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EARGeoTrackingAccuracy_MAX = 4
};

// Object: Enum AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
	None = 0,
	NotAvailableAtLocation = 1,
	NeedLocationPermissions = 2,
	DevicePointedTooLow = 3,
	WorldTrackingUnstable = 4,
	WaitingForLocation = 5,
	GeoDataNotLoaded = 6,
	VisualLocalizationFailed = 7,
	WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason_MAX = 9
};

// Object: Enum AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
	Initializing = 0,
	Localized = 1,
	Localizing = 2,
	NotAvailable = 3,
	EARGeoTrackingState_MAX = 4
};

// Object: Enum AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
	None = 0,
	MeshOnly = 1,
	MeshWithClassification = 2,
	EARSceneReconstruction_MAX = 3
};

// Object: Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	SceneDepth = 4,
	SmoothedSceneDepth = 5,
	EARSessionTrackingFeature_MAX = 6
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
	GeoTracking = 7,
	EARSessionType_MAX = 8
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
	Unknown = 0,
	CameraImage = 1,
	CameraDepth = 2,
	EnvironmentCapture = 3,
	PersonSegmentationImage = 4,
	PersonSegmentationDepth = 5,
	SceneDepthMap = 6,
	SceneDepthConfidenceMap = 7,
	EARTextureType_MAX = 8
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

// Object: Enum AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
	Precise = 0,
	Coarse = 1,
	UserDefined = 2,
	Unknown = 3,
	EARAltitudeSource_MAX = 4
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
	HandMesh = 11,
	Door = 12,
	Window = 13,
	EARObjectClassification_MAX = 14
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
	InsufficientLight = 5,
	BadState = 6,
	EARTrackingQualityReason_MAX = 7
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

// Object: Enum AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
	Camera = 0,
	QRCode = 1,
	SpatialMapping = 2,
	SceneUnderstanding = 3,
	EARCaptureType_MAX = 4
};

// Object: ScriptStruct AugmentedReality.TrackedGeometryGroup
// Size: 0x18 (Inherited: 0x0)
struct FTrackedGeometryGroup
{
	struct AARActor* ARActor; // 0x0(0x8)
	struct UARComponent* ARComponent; // 0x8(0x8)
	struct UARTrackedGeometry* TrackedGeometry; // 0x10(0x8)
};

// Object: ScriptStruct AugmentedReality.ARSessionPayload
// Size: 0x18 (Inherited: 0x0)
struct FARSessionPayload
{
	int32_t ConfigFlags; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x8(0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10(0x8)
};

// Object: ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
// Size: 0x70 (Inherited: 0x0)
struct FARGeoAnchorUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	float Longitude; // 0x50(0x4)
	float Latitude; // 0x54(0x4)
	float AltitudeMeters; // 0x58(0x4)
	EARAltitudeSource AltitudeSource; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct FString AnchorName; // 0x60(0x10)
};

// Object: ScriptStruct AugmentedReality.ARMeshUpdatePayload
// Size: 0x60 (Inherited: 0x0)
struct FARMeshUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	EARObjectClassification ObjectClassification; // 0x50(0x1)
	uint8_t Pad_0x51[0xF]; // 0x51(0xF)
};

// Object: ScriptStruct AugmentedReality.ARObjectUpdatePayload
// Size: 0x30 (Inherited: 0x0)
struct FARObjectUpdatePayload
{
	struct FTransform WorldTransform; // 0x0(0x30)
};

// Object: ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
// Size: 0x30 (Inherited: 0x0)
struct FAREnvironmentProbeUpdatePayload
{
	struct FTransform WorldTransform; // 0x0(0x30)
};

// Object: ScriptStruct AugmentedReality.ARPoseUpdatePayload
// Size: 0x40 (Inherited: 0x0)
struct FARPoseUpdatePayload
{
	struct FTransform WorldTransform; // 0x0(0x30)
	struct TArray<struct FTransform> JointTransforms; // 0x30(0x10)
};

// Object: ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
// Size: 0x70 (Inherited: 0x0)
struct FARQRCodeUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Extents; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString QRCode; // 0x60(0x10)
};

// Object: ScriptStruct AugmentedReality.ARImageUpdatePayload
// Size: 0x60 (Inherited: 0x0)
struct FARImageUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct UARCandidateImage* DetectedImage; // 0x50(0x8)
	struct FVector2D EstimatedSize; // 0x58(0x8)
};

// Object: ScriptStruct AugmentedReality.ARFaceUpdatePayload
// Size: 0x40 (Inherited: 0x0)
struct FARFaceUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	struct FVector LeftEyePosition; // 0x18(0xC)
	struct FVector RightEyePosition; // 0x24(0xC)
	struct FVector LookAtTarget; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct AugmentedReality.ARPointUpdatePayload
// Size: 0x1 (Inherited: 0x0)
struct FARPointUpdatePayload
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct AugmentedReality.ARPlaneUpdatePayload
// Size: 0x80 (Inherited: 0x0)
struct FARPlaneUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Center; // 0x50(0xC)
	struct FVector Extents; // 0x5C(0xC)
	struct TArray<struct FVector> BoundaryVertices; // 0x68(0x10)
	EARObjectClassification ObjectClassification; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
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
	struct FTransform LocalTransform; // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry; // 0x40(0x8)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)
};

// Object: ScriptStruct AugmentedReality.ARCameraIntrinsics
// Size: 0x18 (Inherited: 0x0)
struct FARCameraIntrinsics
{
	struct FIntPoint ImageResolution; // 0x0(0x8)
	struct FVector2D FocalLength; // 0x8(0x8)
	struct FVector2D PrincipalPoint; // 0x10(0x8)
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
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
	EARJointTransformSpace JointTransformSpace; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct AugmentedReality.ARPose2D
// Size: 0x48 (Inherited: 0x0)
struct FARPose2D
{
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0(0x28)
	struct TArray<struct FVector2D> JointLocations; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
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

// Object: Class AugmentedReality.ARActor
// Size: 0x300 (Inherited: 0x300)
struct AARActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AARActor, "ARActor")

	// Object: Function AugmentedReality.ARActor.AddARComponent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa833f5c
	// Params: [ Num(3) Size(0x20) ]
	struct UARComponent* AddARComponent(struct UARComponent* InComponentClass, const struct FGuid& NativeID);
};

// Object: Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UARBlueprintLibrary, "ARBlueprintLibrary")

	// Object: Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835a28
	// Params: [ Num(1) Size(0x8) ]
	static void UnpinComponent(struct USceneComponent* ComponentToUnpin);

	// Object: Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa836be8
	// Params: [ Num(3) Size(0x3) ]
	static bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.StopARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa836dbc
	// Params: [ Num(0) Size(0x0) ]
	static void StopARSession();

	// Object: Function AugmentedReality.ARBlueprintLibrary.StartARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa836de4
	// Params: [ Num(1) Size(0x8) ]
	static void StartARSession(struct UARSessionConfig* SessionConfig);

	// Object: Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa836b48
	// Params: [ Num(1) Size(0x1) ]
	static void SetEnabledXRCamera(bool bOnOff);

	// Object: Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834778
	// Params: [ Num(1) Size(0x4) ]
	static void SetARWorldScale(float InWorldScale);

	// Object: Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa834810
	// Params: [ Num(4) Size(0x1A) ]
	static void SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);

	// Object: Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa8369cc
	// Params: [ Num(1) Size(0x30) ]
	static void SetAlignmentTransform(const struct FTransform& InAlignmentTransform);

	// Object: Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83571c
	// Params: [ Num(3) Size(0x11) ]
	static bool SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin);

	// Object: Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa836a98
	// Params: [ Num(2) Size(0x10) ]
	static struct FIntPoint ResizeXRCamera(const struct FIntPoint& InSize);

	// Object: Function AugmentedReality.ARBlueprintLibrary.RemovePin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835990
	// Params: [ Num(1) Size(0x8) ]
	static void RemovePin(struct UARPin* PinToRemove);

	// Object: Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835684
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveARPinFromLocalStore(struct FName InSaveName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835670
	// Params: [ Num(0) Size(0x0) ]
	static void RemoveAllARPinsFromLocalStore();

	// Object: Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa835ba8
	// Params: [ Num(4) Size(0x80) ]
	static struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, struct FName DebugName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835ac0
	// Params: [ Num(3) Size(0x11) ]
	static bool PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PinComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa835d34
	// Params: [ Num(5) Size(0x58) ]
	static struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa836dd0
	// Params: [ Num(0) Size(0x0) ]
	static void PauseARSession();

	// Object: Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835804
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<struct FName, struct UARPin*> LoadARPinsFromLocalStore();

	// Object: Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa8365c8
	// Params: [ Num(7) Size(0x30) ]
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);

	// Object: Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa8367ec
	// Params: [ Num(6) Size(0x20) ]
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa836228
	// Params: [ Num(2) Size(0x2) ]
	static bool IsSessionTypeSupported(EARSessionType SessionType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa834ea4
	// Params: [ Num(3) Size(0x3) ]
	static bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa834db8
	// Params: [ Num(3) Size(0x3) ]
	static bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa836e7c
	// Params: [ Num(1) Size(0x1) ]
	static bool IsARSupported();

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8358bc
	// Params: [ Num(1) Size(0x1) ]
	static bool IsARPinLocalStoreSupported();

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa835884
	// Params: [ Num(1) Size(0x1) ]
	static bool IsARPinLocalStoreReady();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8352e0
	// Params: [ Num(1) Size(0x1) ]
	static EARWorldMappingState GetWorldMappingStatus();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa836560
	// Params: [ Num(1) Size(0x1) ]
	static EARTrackingQualityReason GetTrackingQualityReason();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa836594
	// Params: [ Num(1) Size(0x1) ]
	static EARTrackingQuality GetTrackingQuality();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835164
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa836cdc
	// Params: [ Num(1) Size(0x8) ]
	static struct UARSessionConfig* GetSessionConfig();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa835244
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FVector> GetPointCloud();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834b44
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTexture* GetPersonSegmentationImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834b10
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTexture* GetPersonSegmentationDepthImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa834980
	// Params: [ Num(5) Size(0x21) ]
	static bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff);

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834134
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetNumberOfTrackedFacesSupported();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa835ecc
	// Params: [ Num(1) Size(0x8) ]
	static struct UARLightEstimate* GetCurrentLightEstimate();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa834060
	// Params: [ Num(2) Size(0x19) ]
	static bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics);

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8363b0
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTextureCameraImage* GetCameraImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83637c
	// Params: [ Num(1) Size(0x8) ]
	static struct UARTextureCameraDepth* GetCameraDepth();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa834744
	// Params: [ Num(1) Size(0x4) ]
	static float GetARWorldScale();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetARTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8362d4
	// Params: [ Num(2) Size(0x10) ]
	static struct UARTexture* GetARTexture(EARTextureType TextureType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa836d10
	// Params: [ Num(1) Size(0x18) ]
	static struct FARSessionStatus GetARSessionStatus();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834b78
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedPose*> GetAllTrackedPoses();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835538
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8355d4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83549c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedImage*> GetAllTrackedImages();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa835400
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834c14
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FARPose2D> GetAllTracked2DPoses();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8358f4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARPin*> GetAllPins();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8363e4
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct UARTrackedGeometry*> GetAllGeometriesByClass(struct UARTrackedGeometry* GeometryClass);

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8364c4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct UARTrackedGeometry*> GetAllGeometries();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8346d8
	// Params: [ Num(1) Size(0x30) ]
	static struct FTransform GetAlignmentTransform();

	// Object: Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834470
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct UARTrackedPoint*> FindTrackedPointsByName(struct FString PointName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa836094
	// Params: [ Num(5) Size(0x28) ]
	static void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds);

	// Object: Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa835f00
	// Params: [ Num(5) Size(0x28) ]
	static void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds);

	// Object: Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa834310
	// Params: [ Num(3) Size(0x2C) ]
	static void CalculateClosestIntersection(const struct TArray<struct FVector>& StartPoints, const struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection);

	// Object: Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa834168
	// Params: [ Num(3) Size(0x90) ]
	static void CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform);

	// Object: Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa83455c
	// Params: [ Num(4) Size(0x42) ]
	static bool AddTrackedPointWithName(const struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa834f90
	// Params: [ Num(5) Size(0x30) ]
	static struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth);

	// Object: Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa835314
	// Params: [ Num(3) Size(0x19) ]
	static bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent);
};

// Object: Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UARTraceResultLibrary, "ARTraceResultLibrary")

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xa837100
	// Params: [ Num(2) Size(0x68) ]
	static struct UARTrackedGeometry* GetTrackedGeometry(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xa836ff4
	// Params: [ Num(2) Size(0x61) ]
	static EARLineTraceChannels GetTraceChannel(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa83720c
	// Params: [ Num(2) Size(0x90) ]
	static struct FTransform GetLocalTransform(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa837328
	// Params: [ Num(2) Size(0x90) ]
	static struct FTransform GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa837444
	// Params: [ Num(2) Size(0x90) ]
	static struct FTransform GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xa837560
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
	// Offset: 0xa837680
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
	// Offset: 0xa837730
	// Params: [ Num(4) Size(0x28) ]
	static struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent);
};

// Object: Class AugmentedReality.ARComponent
// Size: 0x2B0 (Inherited: 0x230)
struct UARComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UARComponent, "ARComponent")

	struct FGuid NativeID; // 0x224(0x10)
	uint8_t Pad_0x240[0x28]; // 0x240(0x28)
	bool bUseDefaultReplication; // 0x268(0x1)
	uint8_t Pad_0x269[0x7]; // 0x269(0x7)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x270(0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x278(0x8)
	struct UMRMeshComponent* MRMeshComponent; // 0x280(0x8)
	struct UARTrackedGeometry* MyTrackedGeometry; // 0x288(0x8)
	uint8_t Pad_0x290[0x20]; // 0x290(0x20)

	// Object: Function AugmentedReality.ARComponent.UpdateVisualization
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0xa83a6fc
	// Params: [ Num(0) Size(0x0) ]
	void UpdateVisualization();

	// Object: Function AugmentedReality.ARComponent.SetNativeID
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa83a734
	// Params: [ Num(1) Size(0x10) ]
	void SetNativeID(struct FGuid NativeID);

	// Object: Function AugmentedReality.ARComponent.ReceiveRemove
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveRemove();

	// Object: Function AugmentedReality.ARComponent.OnRep_Payload
	// Flags: [Native|Protected]
	// Offset: 0xa83a6e0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Payload();

	// Object: Function AugmentedReality.ARComponent.GetMRMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa83a718
	// Params: [ Num(1) Size(0x8) ]
	struct UMRMeshComponent* GetMRMesh();
};

// Object: Class AugmentedReality.ARPlaneComponent
// Size: 0x330 (Inherited: 0x2B0)
struct UARPlaneComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARPlaneComponent, "ARPlaneComponent")

	struct FARPlaneUpdatePayload ReplicatedPayload; // 0x2B0(0x80)

	// Object: Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83ab30
	// Params: [ Num(1) Size(0x1) ]
	static void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);

	// Object: Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa83aa5c
	// Params: [ Num(1) Size(0x50) ]
	static void SetObjectClassificationDebugColors(const struct TMap<EARObjectClassification, struct FLinearColor>& InColors);

	// Object: Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83a8f8
	// Params: [ Num(1) Size(0x80) ]
	void ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x80) ]
	void ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARPlaneComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x80) ]
	void ReceiveAdd(const struct FARPlaneUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa83aa24
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors();
};

// Object: Class AugmentedReality.ARPointComponent
// Size: 0x2B0 (Inherited: 0x2B0)
struct UARPointComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARPointComponent, "ARPointComponent")

	struct FARPointUpdatePayload ReplicatedPayload; // 0x2A4(0x1)

	// Object: Function AugmentedReality.ARPointComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83af24
	// Params: [ Num(1) Size(0x1) ]
	void ServerUpdatePayload(struct FARPointUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARPointComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void ReceiveUpdate(const struct FARPointUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARPointComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void ReceiveAdd(const struct FARPointUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARFaceComponent
// Size: 0x310 (Inherited: 0x2B0)
struct UARFaceComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARFaceComponent, "ARFaceComponent")

	EARFaceTransformMixing TransformSetting; // 0x2A4(0x1)
	bool bUpdateVertexNormal; // 0x2A5(0x1)
	bool bFaceOutOfScreen; // 0x2A6(0x1)
	struct FARFaceUpdatePayload ReplicatedPayload; // 0x2A8(0x40)
	uint8_t Pad_0x2F3[0x1D]; // 0x2F3(0x1D)

	// Object: Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83b2a4
	// Params: [ Num(1) Size(0x1) ]
	static void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);

	// Object: Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83b1c8
	// Params: [ Num(1) Size(0x40) ]
	void ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARFaceComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x40) ]
	void ReceiveUpdate(const struct FARFaceUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARFaceComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x40) ]
	void ReceiveAdd(const struct FARFaceUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARImageComponent
// Size: 0x310 (Inherited: 0x2B0)
struct UARImageComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARImageComponent, "ARImageComponent")

	struct FARImageUpdatePayload ReplicatedPayload; // 0x2B0(0x60)

	// Object: Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83b670
	// Params: [ Num(1) Size(0x1) ]
	static void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);

	// Object: Function AugmentedReality.ARImageComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83b56c
	// Params: [ Num(1) Size(0x60) ]
	void ServerUpdatePayload(struct FARImageUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARImageComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x60) ]
	void ReceiveUpdate(const struct FARImageUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARImageComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x60) ]
	void ReceiveAdd(const struct FARImageUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARQRCodeComponent
// Size: 0x320 (Inherited: 0x2B0)
struct UARQRCodeComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARQRCodeComponent, "ARQRCodeComponent")

	struct FARQRCodeUpdatePayload ReplicatedPayload; // 0x2B0(0x70)

	// Object: Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83ba0c
	// Params: [ Num(1) Size(0x1) ]
	static void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);

	// Object: Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83b908
	// Params: [ Num(1) Size(0x70) ]
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x70) ]
	void ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x70) ]
	void ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARPoseComponent
// Size: 0x2F0 (Inherited: 0x2B0)
struct UARPoseComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARPoseComponent, "ARPoseComponent")

	struct FARPoseUpdatePayload ReplicatedPayload; // 0x2B0(0x40)

	// Object: Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83bec0
	// Params: [ Num(1) Size(0x1) ]
	static void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);

	// Object: Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83bdc4
	// Params: [ Num(1) Size(0x40) ]
	void ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARPoseComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x40) ]
	void ReceiveUpdate(const struct FARPoseUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARPoseComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x40) ]
	void ReceiveAdd(const struct FARPoseUpdatePayload& Payload);
};

// Object: Class AugmentedReality.AREnvironmentProbeComponent
// Size: 0x2E0 (Inherited: 0x2B0)
struct UAREnvironmentProbeComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UAREnvironmentProbeComponent, "AREnvironmentProbeComponent")

	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x2B0(0x30)

	// Object: Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83c29c
	// Params: [ Num(1) Size(0x30) ]
	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload);

	// Object: Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x30) ]
	void ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload);

	// Object: Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x30) ]
	void ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARObjectComponent
// Size: 0x2E0 (Inherited: 0x2B0)
struct UARObjectComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARObjectComponent, "ARObjectComponent")

	struct FARObjectUpdatePayload ReplicatedPayload; // 0x2B0(0x30)

	// Object: Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83c588
	// Params: [ Num(1) Size(0x30) ]
	void ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARObjectComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x30) ]
	void ReceiveUpdate(const struct FARObjectUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARObjectComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x30) ]
	void ReceiveAdd(const struct FARObjectUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARMeshComponent
// Size: 0x310 (Inherited: 0x2B0)
struct UARMeshComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARMeshComponent, "ARMeshComponent")

	struct FARMeshUpdatePayload ReplicatedPayload; // 0x2B0(0x60)

	// Object: Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83c874
	// Params: [ Num(1) Size(0x60) ]
	void ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARMeshComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x60) ]
	void ReceiveUpdate(const struct FARMeshUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARMeshComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x60) ]
	void ReceiveAdd(const struct FARMeshUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARGeoAnchorComponent
// Size: 0x320 (Inherited: 0x2B0)
struct UARGeoAnchorComponent : UARComponent
{
	DEFINE_UE_CLASS_HELPERS(UARGeoAnchorComponent, "ARGeoAnchorComponent")

	struct FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x2B0(0x70)

	// Object: Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83cc84
	// Params: [ Num(1) Size(0x1) ]
	static void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);

	// Object: Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0xa83cb70
	// Params: [ Num(1) Size(0x70) ]
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload);

	// Object: Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x70) ]
	void ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload);

	// Object: Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x70) ]
	void ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload);
};

// Object: Class AugmentedReality.ARDependencyHandler
// Size: 0x28 (Inherited: 0x28)
struct UARDependencyHandler : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARDependencyHandler, "ARDependencyHandler")

	// Object: Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa83d108
	// Params: [ Num(3) Size(0x28) ]
	void StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo);

	// Object: Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa83d24c
	// Params: [ Num(4) Size(0x29) ]
	void RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult);

	// Object: Function AugmentedReality.ARDependencyHandler.InstallARService
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa83d3dc
	// Params: [ Num(3) Size(0x21) ]
	void InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult);

	// Object: Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83d684
	// Params: [ Num(1) Size(0x8) ]
	static struct UARDependencyHandler* GetARDependencyHandler();

	// Object: Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa83d530
	// Params: [ Num(3) Size(0x21) ]
	void CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability);
};

// Object: Class AugmentedReality.ARGeoTrackingSupport
// Size: 0x28 (Inherited: 0x28)
struct UARGeoTrackingSupport : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARGeoTrackingSupport, "ARGeoTrackingSupport")

	// Object: Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83dbec
	// Params: [ Num(1) Size(0x8) ]
	static struct UARGeoTrackingSupport* GetGeoTrackingSupport();

	// Object: Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa83db74
	// Params: [ Num(1) Size(0x1) ]
	EARGeoTrackingStateReason GetGeoTrackingStateReason();

	// Object: Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa83dbb0
	// Params: [ Num(1) Size(0x1) ]
	EARGeoTrackingState GetGeoTrackingState();

	// Object: Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa83db38
	// Params: [ Num(1) Size(0x1) ]
	EARGeoTrackingAccuracy GetGeoTrackingAccuracy();

	// Object: Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa83d798
	// Params: [ Num(5) Size(0x21) ]
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName);

	// Object: Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa83d98c
	// Params: [ Num(4) Size(0x19) ]
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName);
};

// Object: Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Size: 0xA0 (Inherited: 0x50)
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	DEFINE_UE_CLASS_HELPERS(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, "CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	uint8_t Pad_0x70[0x30]; // 0x70(0x30)

	// Object: DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error);

	// Object: Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83dc40
	// Params: [ Num(4) Size(0x18) ]
	static struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude);

	// Object: Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa83dd64
	// Params: [ Num(2) Size(0x10) ]
	static struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(struct UObject* WorldContextObject);
};

// Object: Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Size: 0xA0 (Inherited: 0x50)
struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	DEFINE_UE_CLASS_HELPERS(UGetGeoLocationAsyncTaskBlueprintProxy, "GetGeoLocationAsyncTaskBlueprintProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	uint8_t Pad_0x70[0x30]; // 0x70(0x30)

	// Object: DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x20) ]
	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error);

	// Object: Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa83de14
	// Params: [ Num(3) Size(0x20) ]
	static struct UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, const struct FVector& WorldPosition);
};

// Object: Class AugmentedReality.ARLifeCycleComponent
// Size: 0x260 (Inherited: 0x230)
struct UARLifeCycleComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UARLifeCycleComponent, "ARLifeCycleComponent")

	struct FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x228(0x10)
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x238(0x10)
	uint8_t Pad_0x250[0x10]; // 0x250(0x10)

	// Object: Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate]
	// Offset: 0xa8417b4
	// Params: [ Num(2) Size(0x18) ]
	void ServerSpawnARActor(struct UObject* ComponentClass, struct FGuid NativeID);

	// Object: Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate]
	// Offset: 0xa8416dc
	// Params: [ Num(1) Size(0x8) ]
	void ServerDestroyARActor(struct AARActor* Actor);

	// Object: DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor);

	// Object: DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasDefaults]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x20) ]
	void InstanceARActorSpawnedDelegate__DelegateSignature(struct UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor);
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
	// Offset: 0xa841a34
	// Params: [ Num(1) Size(0x4) ]
	float GetAmbientIntensityLumens();

	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa841a00
	// Params: [ Num(1) Size(0x4) ]
	float GetAmbientColorTemperatureKelvin();

	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8419c8
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetAmbientColor();
};

// Object: Class AugmentedReality.AROriginActor
// Size: 0x300 (Inherited: 0x300)
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
	// Offset: 0xa841c8c
	// Params: [ Num(1) Size(0x1) ]
	EARTrackingState GetTrackingState();

	// Object: Function AugmentedReality.ARPin.GetTrackedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa841c58
	// Params: [ Num(1) Size(0x8) ]
	struct UARTrackedGeometry* GetTrackedGeometry();

	// Object: Function AugmentedReality.ARPin.GetPinnedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa841c24
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetPinnedComponent();

	// Object: Function AugmentedReality.ARPin.GetLocalToWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa841cc0
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToWorldTransform();

	// Object: Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa841d2c
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToTrackingTransform();

	// Object: Function AugmentedReality.ARPin.GetDebugName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa841a7c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDebugName();

	// Object: Function AugmentedReality.ARPin.DebugDraw
	// Flags: [Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0xa841ab0
	// Params: [ Num(4) Size(0x20) ]
	void DebugDraw(struct UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};

// Object: Class AugmentedReality.ARSessionConfig
// Size: 0x110 (Inherited: 0x30)
struct UARSessionConfig : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UARSessionConfig, "ARSessionConfig")

	bool bGenerateMeshDataFromTrackedGeometry; // 0x30(0x1)
	bool bGenerateCollisionForMeshData; // 0x31(0x1)
	bool bGenerateNavMeshForMeshData; // 0x32(0x1)
	bool bUseMeshDataForOcclusion; // 0x33(0x1)
	bool bRenderMeshDataInWireframe; // 0x34(0x1)
	bool bTrackSceneObjects; // 0x35(0x1)
	bool bUsePersonSegmentationForOcclusion; // 0x36(0x1)
	bool bUseSceneDepthForOcclusion; // 0x37(0x1)
	bool bUseAutomaticImageScaleEstimation; // 0x38(0x1)
	bool bUseStandardOnboardingUX; // 0x39(0x1)
	EARWorldAlignment WorldAlignment; // 0x3A(0x1)
	EARSessionType SessionType; // 0x3B(0x1)
	EARPlaneDetectionMode PlaneDetectionMode; // 0x3C(0x1)
	bool bHorizontalPlaneDetection; // 0x3D(0x1)
	bool bVerticalPlaneDetection; // 0x3E(0x1)
	bool bEnableAutoFocus; // 0x3F(0x1)
	EARLightEstimationMode LightEstimationMode; // 0x40(0x1)
	EARFrameSyncMode FrameSyncMode; // 0x41(0x1)
	bool bEnableAutomaticCameraOverlay; // 0x42(0x1)
	bool bEnableAutomaticCameraTracking; // 0x43(0x1)
	bool bResetCameraTracking; // 0x44(0x1)
	bool bResetTrackedObjects; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x4)
	EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct TArray<uint8_t> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0xC)
	bool bUseOptimalVideoFormat; // 0x8C(0x1)
	EARFaceTrackingDirection FaceTrackingDirection; // 0x8D(0x1)
	EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8E(0x1)
	uint8_t Pad_0x8F[0x1]; // 0x8F(0x1)
	int32_t MaxNumberOfTrackedFaces; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TArray<uint8_t> SerializedARCandidateImageDatabase; // 0x98(0x10)
	EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xA8(0x1)
	EARSceneReconstruction SceneReconstructionMethod; // 0xA9(0x1)
	uint8_t Pad_0xAA[0x6]; // 0xAA(0x6)
	struct UARPlaneComponent* PlaneComponentClass; // 0xB0(0x8)
	struct UARPointComponent* PointComponentClass; // 0xB8(0x8)
	struct UARFaceComponent* FaceComponentClass; // 0xC0(0x8)
	struct UARImageComponent* ImageComponentClass; // 0xC8(0x8)
	struct UARQRCodeComponent* QRCodeComponentClass; // 0xD0(0x8)
	struct UARPoseComponent* PoseComponentClass; // 0xD8(0x8)
	struct UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; // 0xE0(0x8)
	struct UARObjectComponent* ObjectComponentClass; // 0xE8(0x8)
	struct UARMeshComponent* MeshComponentClass; // 0xF0(0x8)
	struct UARGeoAnchorComponent* GeoAnchorComponentClass; // 0xF8(0x8)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x100(0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108(0x8)

	// Object: Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842a14
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldResetTrackedObjects();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842afc
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldResetCameraTracking();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842c54
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldRenderCameraOverlay();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842c1c
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldEnableCameraTracking();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842be4
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldEnableAutoFocus();

	// Object: Function AugmentedReality.ARSessionConfig.SetWorldMapData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842648
	// Params: [ Num(1) Size(0x10) ]
	void SetWorldMapData(struct TArray<uint8_t> WorldMapData);

	// Object: Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa8420ac
	// Params: [ Num(1) Size(0x1) ]
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);

	// Object: Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842004
	// Params: [ Num(1) Size(0x1) ]
	void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);

	// Object: Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842964
	// Params: [ Num(1) Size(0x1) ]
	void SetResetTrackedObjects(bool bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842a4c
	// Params: [ Num(1) Size(0x1) ]
	void SetResetCameraTracking(bool bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa8421bc
	// Params: [ Num(1) Size(0x1) ]
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);

	// Object: Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842298
	// Params: [ Num(1) Size(0x1) ]
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);

	// Object: Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842b34
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableAutoFocus(bool bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842374
	// Params: [ Num(1) Size(0xC) ]
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat);

	// Object: Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa842504
	// Params: [ Num(1) Size(0x10) ]
	void SetCandidateObjectList(const struct TArray<struct UARCandidateObject*>& InCandidateObjects);

	// Object: Function AugmentedReality.ARSessionConfig.GetWorldMapData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa84274c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetWorldMapData();

	// Object: Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842d5c
	// Params: [ Num(1) Size(0x1) ]
	EARWorldAlignment GetWorldAlignment();

	// Object: Function AugmentedReality.ARSessionConfig.GetSessionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842d28
	// Params: [ Num(1) Size(0x1) ]
	EARSessionType GetSessionType();

	// Object: Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842154
	// Params: [ Num(1) Size(0x1) ]
	EARSceneReconstruction GetSceneReconstructionMethod();

	// Object: Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842cf4
	// Params: [ Num(1) Size(0x1) ]
	EARPlaneDetectionMode GetPlaneDetectionMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842804
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxNumSimultaneousImagesTracked();

	// Object: Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842cc0
	// Params: [ Num(1) Size(0x1) ]
	EARLightEstimationMode GetLightEstimationMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842c8c
	// Params: [ Num(1) Size(0x1) ]
	EARFrameSyncMode GetFrameSyncMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842264
	// Params: [ Num(1) Size(0x1) ]
	EARFaceTrackingUpdate GetFaceTrackingUpdate();

	// Object: Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842340
	// Params: [ Num(1) Size(0x1) ]
	EARFaceTrackingDirection GetFaceTrackingDirection();

	// Object: Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8427d0
	// Params: [ Num(1) Size(0x1) ]
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();

	// Object: Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842188
	// Params: [ Num(1) Size(0x1) ]
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature();

	// Object: Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa842424
	// Params: [ Num(1) Size(0xC) ]
	struct FARVideoFormat GetDesiredVideoFormat();

	// Object: Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8425c4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList();

	// Object: Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8428e0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARCandidateImage*> GetCandidateImageList();

	// Object: Function AugmentedReality.ARSessionConfig.AddCandidateObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa84245c
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidateObject(struct UARCandidateObject* CandidateObject);

	// Object: Function AugmentedReality.ARSessionConfig.AddCandidateImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa842838
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage);
};

// Object: Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x450 (Inherited: 0x3E8)
struct AARSharedWorldGameMode : AGameMode
{
	DEFINE_UE_CLASS_HELPERS(AARSharedWorldGameMode, "ARSharedWorldGameMode")

	int32_t BufferSizePerChunk; // 0x3E4(0x4)
	uint8_t Pad_0x3EC[0x64]; // 0x3EC(0x64)

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xa843028
	// Params: [ Num(1) Size(0x10) ]
	void SetPreviewImageData(struct TArray<uint8_t> ImageData);

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xa842f10
	// Params: [ Num(0) Size(0x0) ]
	void SetARWorldSharingIsReady();

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xa842f24
	// Params: [ Num(1) Size(0x10) ]
	void SetARSharedWorldData(struct TArray<uint8_t> ARWorldData);

	// Object: Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xa842edc
	// Params: [ Num(1) Size(0x8) ]
	struct AARSharedWorldGameState* GetARSharedWorldGameState();
};

// Object: Class AugmentedReality.ARSharedWorldGameState
// Size: 0x3A0 (Inherited: 0x368)
struct AARSharedWorldGameState : AGameState
{
	DEFINE_UE_CLASS_HELPERS(AARSharedWorldGameState, "ARSharedWorldGameState")

	struct TArray<uint8_t> PreviewImageData; // 0x368(0x10)
	struct TArray<uint8_t> ARWorldData; // 0x378(0x10)
	int32_t PreviewImageBytesTotal; // 0x388(0x4)
	int32_t ARWorldBytesTotal; // 0x38C(0x4)
	int32_t PreviewImageBytesDelivered; // 0x390(0x4)
	int32_t ARWorldBytesDelivered; // 0x394(0x4)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)

	// Object: Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void K2_OnARWorldMapIsReady();
};

// Object: Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x670 (Inherited: 0x670)
struct AARSharedWorldPlayerController : APlayerController
{
	DEFINE_UE_CLASS_HELPERS(AARSharedWorldPlayerController, "ARSharedWorldPlayerController")

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0xa8434e0
	// Params: [ Num(0) Size(0x0) ]
	void ServerMarkReadyForReceiving();

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0xa8432a4
	// Params: [ Num(2) Size(0x18) ]
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<uint8_t> Buffer);

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0xa84317c
	// Params: [ Num(2) Size(0x18) ]
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<uint8_t> Buffer);

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0xa8433cc
	// Params: [ Num(2) Size(0x8) ]
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
};

// Object: Class AugmentedReality.ARSkyLight
// Size: 0x320 (Inherited: 0x310)
struct AARSkyLight : ASkyLight
{
	DEFINE_UE_CLASS_HELPERS(AARSkyLight, "ARSkyLight")

	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x310(0x8)
	uint8_t Pad_0x318[0x8]; // 0x318(0x8)

	// Object: Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa843778
	// Params: [ Num(1) Size(0x8) ]
	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe);
};

// Object: Class AugmentedReality.ARTexture
// Size: 0x100 (Inherited: 0xE0)
struct UARTexture : UTexture
{
	DEFINE_UE_CLASS_HELPERS(UARTexture, "ARTexture")

	EARTextureType TextureType; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x3]; // 0xE1(0x3)
	float Timestamp; // 0xE4(0x4)
	struct FGuid ExternalTextureGuid; // 0xE8(0x10)
	struct FVector2D Size; // 0xF8(0x8)
};

// Object: Class AugmentedReality.ARTextureCameraImage
// Size: 0x100 (Inherited: 0x100)
struct UARTextureCameraImage : UARTexture
{
	DEFINE_UE_CLASS_HELPERS(UARTextureCameraImage, "ARTextureCameraImage")
};

// Object: Class AugmentedReality.ARTextureCameraDepth
// Size: 0x108 (Inherited: 0x100)
struct UARTextureCameraDepth : UARTexture
{
	DEFINE_UE_CLASS_HELPERS(UARTextureCameraDepth, "ARTextureCameraDepth")

	EARDepthQuality DepthQuality; // 0x100(0x1)
	EARDepthAccuracy DepthAccuracy; // 0x101(0x1)
	bool bIsTemporallySmoothed; // 0x102(0x1)
	uint8_t Pad_0x103[0x5]; // 0x103(0x5)
};

// Object: Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x158 (Inherited: 0x138)
struct UAREnvironmentCaptureProbeTexture : UTextureCube
{
	DEFINE_UE_CLASS_HELPERS(UAREnvironmentCaptureProbeTexture, "AREnvironmentCaptureProbeTexture")

	EARTextureType TextureType; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	float Timestamp; // 0x13C(0x4)
	struct FGuid ExternalTextureGuid; // 0x140(0x10)
	struct FVector2D Size; // 0x150(0x8)
};

// Object: Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARTraceResultDummy, "ARTraceResultDummy")
};

// Object: Class AugmentedReality.ARTrackedGeometry
// Size: 0x100 (Inherited: 0x28)
struct UARTrackedGeometry : UObject
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedGeometry, "ARTrackedGeometry")

	struct FGuid UniqueID; // 0x28(0x10)
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
	uint8_t Pad_0xE8[0x18]; // 0xE8(0x18)

	// Object: Function AugmentedReality.ARTrackedGeometry.IsTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846710
	// Params: [ Num(1) Size(0x1) ]
	bool IsTracked();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8465bc
	// Params: [ Num(1) Size(0x8) ]
	struct UMRMeshComponent* GetUnderlyingMesh();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846748
	// Params: [ Num(1) Size(0x1) ]
	EARTrackingState GetTrackingState();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8465a0
	// Params: [ Num(1) Size(0x1) ]
	EARObjectClassification GetObjectClassification();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846658
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetName();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8467e8
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToWorldTransform();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa84677c
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToTrackingTransform();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8465f0
	// Params: [ Num(1) Size(0x4) ]
	float GetLastUpdateTimestamp();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846624
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLastUpdateFrameNumber();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetDebugName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8466dc
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDebugName();
};

// Object: Class AugmentedReality.ARPlaneGeometry
// Size: 0x130 (Inherited: 0x100)
struct UARPlaneGeometry : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARPlaneGeometry, "ARPlaneGeometry")

	EARPlaneOrientation Orientation; // 0xF8(0x1)
	struct FVector Center; // 0xFC(0xC)
	struct FVector Extent; // 0x108(0xC)
	struct TArray<struct FVector> BoundaryPolygon; // 0x118(0x10)
	struct UARPlaneGeometry* SubsumedBy; // 0x128(0x8)

	// Object: Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846884
	// Params: [ Num(1) Size(0x8) ]
	struct UARPlaneGeometry* GetSubsumedBy();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846868
	// Params: [ Num(1) Size(0x1) ]
	EARPlaneOrientation GetOrientation();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetExtent
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846974
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetExtent();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetCenter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846998
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCenter();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8468a0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// Object: Class AugmentedReality.ARTrackedPoint
// Size: 0x100 (Inherited: 0x100)
struct UARTrackedPoint : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedPoint, "ARTrackedPoint")
};

// Object: Class AugmentedReality.ARTrackedImage
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedImage : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedImage, "ARTrackedImage")

	struct UARCandidateImage* DetectedImage; // 0xF8(0x8)
	struct FVector2D EstimatedSize; // 0x100(0x8)

	// Object: Function AugmentedReality.ARTrackedImage.GetEstimateSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8469d0
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetEstimateSize();

	// Object: Function AugmentedReality.ARTrackedImage.GetDetectedImage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846a04
	// Params: [ Num(1) Size(0x8) ]
	struct UARCandidateImage* GetDetectedImage();
};

// Object: Class AugmentedReality.ARTrackedQRCode
// Size: 0x120 (Inherited: 0x110)
struct UARTrackedQRCode : UARTrackedImage
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedQRCode, "ARTrackedQRCode")

	struct FString QRCode; // 0x108(0x10)
	int32_t Version; // 0x118(0x4)
};

// Object: Class AugmentedReality.ARFaceGeometry
// Size: 0x1F0 (Inherited: 0x100)
struct UARFaceGeometry : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARFaceGeometry, "ARFaceGeometry")

	struct FVector LookAtTarget; // 0xF8(0xC)
	bool bIsTracked; // 0x104(0x1)
	struct TMap<EARFaceBlendShape, float> BlendShapes; // 0x108(0x50)
	uint8_t Pad_0x15D[0x33]; // 0x15D(0x33)
	struct FTransform LeftEyeTransform; // 0x190(0x30)
	struct FTransform RightEyeTransform; // 0x1C0(0x30)

	// Object: Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846a34
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetWorldSpaceEyeTransform(EAREye Eye);

	// Object: Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846af4
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetLocalSpaceEyeTransform(EAREye Eye);

	// Object: Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846c30
	// Params: [ Num(2) Size(0x8) ]
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);

	// Object: Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846bb0
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<EARFaceBlendShape, float> GetBlendShapes();
};

// Object: Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x110 (Inherited: 0x100)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UAREnvironmentCaptureProbe, "AREnvironmentCaptureProbe")

	struct FVector Extent; // 0xF8(0xC)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108(0x8)

	// Object: Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846d28
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetExtent();

	// Object: Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa846cf4
	// Params: [ Num(1) Size(0x8) ]
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// Object: Class AugmentedReality.ARTrackedObject
// Size: 0x100 (Inherited: 0x100)
struct UARTrackedObject : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedObject, "ARTrackedObject")

	struct UARCandidateObject* DetectedObject; // 0xF8(0x8)

	// Object: Function AugmentedReality.ARTrackedObject.GetDetectedObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846d6c
	// Params: [ Num(1) Size(0x8) ]
	struct UARCandidateObject* GetDetectedObject();
};

// Object: Class AugmentedReality.ARTrackedPose
// Size: 0x150 (Inherited: 0x100)
struct UARTrackedPose : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARTrackedPose, "ARTrackedPose")

	struct FARPose3D TrackedPose; // 0xF8(0x50)

	// Object: Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846d90
	// Params: [ Num(1) Size(0x50) ]
	struct FARPose3D GetTrackedPoseData();
};

// Object: Class AugmentedReality.ARMeshGeometry
// Size: 0x100 (Inherited: 0x100)
struct UARMeshGeometry : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARMeshGeometry, "ARMeshGeometry")

	// Object: Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa846db8
	// Params: [ Num(5) Size(0x21) ]
	bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff);
};

// Object: Class AugmentedReality.ARGeoAnchor
// Size: 0x110 (Inherited: 0x100)
struct UARGeoAnchor : UARTrackedGeometry
{
	DEFINE_UE_CLASS_HELPERS(UARGeoAnchor, "ARGeoAnchor")

	uint8_t Pad_0x100[0x10]; // 0x100(0x10)

	// Object: Function AugmentedReality.ARGeoAnchor.GetLongitude
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846fc8
	// Params: [ Num(1) Size(0x4) ]
	float GetLongitude();

	// Object: Function AugmentedReality.ARGeoAnchor.GetLatitude
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846fac
	// Params: [ Num(1) Size(0x4) ]
	float GetLatitude();

	// Object: Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846f74
	// Params: [ Num(1) Size(0x1) ]
	EARAltitudeSource GetAltitudeSource();

	// Object: Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa846f90
	// Params: [ Num(1) Size(0x4) ]
	float GetAltitudeMeters();
};

// Object: Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x230 (Inherited: 0xE0)
struct UARTrackableNotifyComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UARTrackableNotifyComponent, "ARTrackableNotifyComponent")

	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xE0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xF0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0x100(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0x110(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x120(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x130(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x140(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x150(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x160(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x170(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x180(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x190(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x1B0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1C0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1D0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1E0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1F0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x200(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x210(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x220(0x10)
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
	// Offset: 0xa84736c
	// Params: [ Num(1) Size(0x4) ]
	float GetPhysicalWidth();

	// Object: Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa847350
	// Params: [ Num(1) Size(0x4) ]
	float GetPhysicalHeight();

	// Object: Function AugmentedReality.ARCandidateImage.GetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa847334
	// Params: [ Num(1) Size(0x1) ]
	EARCandidateImageOrientation GetOrientation();

	// Object: Function AugmentedReality.ARCandidateImage.GetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa847388
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFriendlyName();

	// Object: Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa84740c
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
	// Offset: 0xa84750c
	// Params: [ Num(1) Size(0x10) ]
	void SetFriendlyName(struct FString NewName);

	// Object: Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa84768c
	// Params: [ Num(1) Size(0x10) ]
	void SetCandidateObjectData(const struct TArray<uint8_t>& InCandidateObject);

	// Object: Function AugmentedReality.ARCandidateObject.SetBoundingBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa847430
	// Params: [ Num(1) Size(0x1C) ]
	void SetBoundingBox(const struct FBox& InBoundingBox);

	// Object: Function AugmentedReality.ARCandidateObject.GetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa847608
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFriendlyName();

	// Object: Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8477a8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetCandidateObjectData();

	// Object: Function AugmentedReality.ARCandidateObject.GetBoundingBox
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa8474e8
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox GetBoundingBox();
};

} // namespace SDK
