#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AnalysisCommon
// Enums: 4
// Structs: 13
// Classes: 0

struct FAnalysisServiceRequest;
struct FAnalysisServiceObjRefs;
struct FAnalysisServicePreview;
struct FAnalysisServiceCapture;
struct FAnalysisServiceUnsubscribe;
struct FAnalysisServiceSubscribe;
struct FAnalysisServiceClearAllData;
struct FAnalysisServicePong;
struct FAnalysisServicePing;
struct FAnalysisServiceFileChunk;
struct FAnalysisServicePreviewAck;
struct FAnalysisServiceData2;
struct FAnalysisServiceAuthorize;

// Object: Enum AnalysisCommon.EAssetType
enum class EAssetType : uint8_t
{
	Texture2D = 0,
	TextureCube = 1,
	TextureRenderTarget2D = 2,
	LightMapTexture2D = 3,
	Texture2DArray = 4,
	VolumeTexture = 5,
	StaticMesh = 6,
	SkeletalMesh = 7,
	Material = 8,
	MaterialInstanceConstant = 9,
	MaterialInstanceDynamic = 10,
	ParticleSystem = 11,
	AnimSequence = 12,
	Max = 13
};

// Object: Enum AnalysisCommon.ERenderPerformField
enum class ERenderPerformField : uint8_t
{
	MeshDrawCalls = 18,
	ParticleDrawCalls = 19,
	RHITriangles = 20,
	SkelMeshTriangles = 21,
	StaticMeshTriangles = 22,
	CPUSkinVertices = 23,
	GPUSkinVertices = 24,
	MaxOrInvalid = 25,
	ERenderPerformField_MAX = 26
};

// Object: Enum AnalysisCommon.ECPUPerformField
enum class ECPUPerformField : uint8_t
{
	FrameTime = 13,
	TickTime = 14,
	EventWait = 15,
	WorldTickTime = 16,
	UpdateCameraTime = 17,
	MaxOrInvalid = 18,
	ECPUPerformField_MAX = 19
};

// Object: Enum AnalysisCommon.EMemPerformField
enum class EMemPerformField : uint8_t
{
	TextureMemory = 1,
	UsedPhysical = 2,
	UsedVirtual = 3,
	TotalSummaryLLM = 4,
	MeshesSummaryLLM = 5,
	TexturesSummaryLLM = 6,
	UObjectSummaryLLM = 7,
	AnimationSummaryLLM = 8,
	StaticMeshSummaryLLM = 9,
	MaterialsSummaryLLM = 10,
	ParticlesSummaryLLM = 11,
	UISummaryLLM = 12,
	MaxOrInvalid = 13,
	EMemPerformField_MAX = 14
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceRequest
// Size: 0x4 (Inherited: 0x0)
struct FAnalysisServiceRequest
{
	uint32_t Request; // 0x0(0x4)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceObjRefs
// Size: 0x18 (Inherited: 0x0)
struct FAnalysisServiceObjRefs
{
	uint8_t bRequestedOpenObjRefsState : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString AssetRefsResultSavePath; // 0x8(0x10)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServicePreview
// Size: 0x1 (Inherited: 0x0)
struct FAnalysisServicePreview
{
	uint8_t bRequestedPreviewState : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceCapture
// Size: 0x1 (Inherited: 0x0)
struct FAnalysisServiceCapture
{
	uint8_t bRequestedCaptureState : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceUnsubscribe
// Size: 0x20 (Inherited: 0x0)
struct FAnalysisServiceUnsubscribe
{
	struct FGuid SessionId; // 0x0(0x10)
	struct FGuid instanceid; // 0x10(0x10)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceSubscribe
// Size: 0x20 (Inherited: 0x0)
struct FAnalysisServiceSubscribe
{
	struct FGuid SessionId; // 0x0(0x10)
	struct FGuid instanceid; // 0x10(0x10)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceClearAllData
// Size: 0x1 (Inherited: 0x0)
struct FAnalysisServiceClearAllData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServicePong
// Size: 0x1 (Inherited: 0x0)
struct FAnalysisServicePong
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServicePing
// Size: 0x1 (Inherited: 0x0)
struct FAnalysisServicePing
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceFileChunk
// Size: 0x50 (Inherited: 0x0)
struct FAnalysisServiceFileChunk
{
	struct FGuid instanceid; // 0x0(0x10)
	struct FString Filename; // 0x10(0x10)
	struct FString HexData; // 0x20(0x10)
	struct TArray<uint8_t> Header; // 0x30(0x10)
	struct TArray<uint8_t> ChunkHash; // 0x40(0x10)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServicePreviewAck
// Size: 0x10 (Inherited: 0x0)
struct FAnalysisServicePreviewAck
{
	struct FGuid instanceid; // 0x0(0x10)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceData2
// Size: 0x30 (Inherited: 0x0)
struct FAnalysisServiceData2
{
	struct FGuid instanceid; // 0x0(0x10)
	int64_t Frame; // 0x10(0x8)
	int32_t CompressedSize; // 0x18(0x4)
	int32_t UncompressedSize; // 0x1C(0x4)
	struct FString HexData; // 0x20(0x10)
};

// Object: ScriptStruct AnalysisCommon.AnalysisServiceAuthorize
// Size: 0x20 (Inherited: 0x0)
struct FAnalysisServiceAuthorize
{
	struct FGuid SessionId; // 0x0(0x10)
	struct FGuid instanceid; // 0x10(0x10)
};

} // namespace SDK
