#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BlendStack
// Enums: 1
// Structs: 5
// Classes: 2

enum class EAlphaBlendOption : uint8_t;
struct FPoseLink;
struct UAnimSequenceBase;
struct UAnimationAsset;
struct UBlendProfile;
struct FAnimNode_BlendStack_Standalone;
struct FAnimNode_SequencePlayer_Standalone;
struct FBlendStackAnimPlayer;
struct FAnimNode_BlendStack;
struct FAnimNode_BlendStackInput;
struct UBlendStackAnimNodeLibrary;
struct UBlendStackInputAnimNodeLibrary;

// Object: Enum BlendStack.EAnimSyncMethod
enum class EAnimSyncMethod : uint8_t
{
	DoNotSync = 0,
	SyncGroup = 1,
	Graph = 2,
	EAnimSyncMethod_MAX = 3
};

// Object: ScriptStruct BlendStack.AnimNode_BlendStack_Standalone
// Size: 0x198 (Inherited: 0x120)
struct FAnimNode_BlendStack_Standalone : FAnimNode_AssetPlayerBase
{
	uint8_t Pad_0x120[0x10]; // 0x120(0x10)
	struct TArray<struct FPoseLink> PerSampleGraphPoseLinks; // 0x130(0x10)
	uint8_t Pad_0x140[0x8]; // 0x140(0x8)
	struct TArray<struct FBlendStackAnimPlayer> AnimPlayers; // 0x148(0x10)
	bool bShouldFilterNotifies; // 0x158(0x1)
	uint8_t Pad_0x159[0x3]; // 0x159(0x3)
	int32_t MaxActiveBlends; // 0x15C(0x4)
	bool bStoreBlendedPose; // 0x160(0x1)
	uint8_t Pad_0x161[0x27]; // 0x161(0x27)
	float NotifyRecencyTimeOut; // 0x188(0x4)
	float MaxBlendInTimeToOverrideAnimation; // 0x18C(0x4)
	float PlayerDepthBlendInTimeMultiplier; // 0x190(0x4)
	uint8_t Pad_0x194[0x4]; // 0x194(0x4)
};

// Object: ScriptStruct BlendStack.AnimNode_SequencePlayer_Standalone
// Size: 0x170 (Inherited: 0x120)
struct FAnimNode_SequencePlayer_Standalone : FAnimNode_AssetPlayerBase
{
	EAnimSyncMethod Method; // 0x11A(0x1)
	struct UAnimSequenceBase* Sequence; // 0x120(0x8)
	float PlayRateBasis; // 0x128(0x4)
	float PlayRate; // 0x12C(0x4)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x130(0x30)
	float StartPosition; // 0x160(0x4)
	bool bLoopAnimation; // 0x164(0x1)
	bool bStartFromMatchingPose; // 0x165(0x1)
	uint8_t Pad_0x167[0x9]; // 0x167(0x9)
};

// Object: ScriptStruct BlendStack.BlendStackAnimPlayer
// Size: 0x3E8 (Inherited: 0x0)
struct FBlendStackAnimPlayer
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	struct FAnimNode_SequencePlayer_Standalone SequencePlayerNode; // 0x30(0x170)
	uint8_t Pad_0x1A0[0x248]; // 0x1A0(0x248)
};

// Object: ScriptStruct BlendStack.AnimNode_BlendStack
// Size: 0x1F0 (Inherited: 0x198)
struct FAnimNode_BlendStack : FAnimNode_BlendStack_Standalone
{
	struct UAnimationAsset* AnimationAsset; // 0x198(0x8)
	float AnimationTime; // 0x1A0(0x4)
	bool bLoop; // 0x1A4(0x1)
	bool bMirrored; // 0x1A5(0x1)
	uint8_t Pad_0x1A6[0x2]; // 0x1A6(0x2)
	float WantedPlayRate; // 0x1A8(0x4)
	float BlendTime; // 0x1AC(0x4)
	float MaxAnimationDeltaTime; // 0x1B0(0x4)
	uint8_t Pad_0x1B4[0x4]; // 0x1B4(0x4)
	struct UBlendProfile* BlendProfile; // 0x1B8(0x8)
	EAlphaBlendOption BlendOption; // 0x1C0(0x1)
	uint8_t Pad_0x1C1[0x3]; // 0x1C1(0x3)
	struct FVector BlendParameters; // 0x1C4(0xC)
	bool bUseInertialBlend; // 0x1D0(0x1)
	bool bResetOnBecomingRelevant; // 0x1D1(0x1)
	uint8_t Pad_0x1D2[0x1E]; // 0x1D2(0x1E)
};

// Object: ScriptStruct BlendStack.AnimNode_BlendStackInput
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_BlendStackInput : FAnimNode_Base
{
	int32_t SampleIndex; // 0x10(0x4)
	int32_t BlendStackAllocationIndex; // 0x14(0x4)
	bool bOverridePlayRate; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float PlayRate; // 0x1C(0x4)
	struct FName CurveName; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class BlendStack.BlendStackAnimNodeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlendStackAnimNodeLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBlendStackAnimNodeLibrary, "BlendStackAnimNodeLibrary")
};

// Object: Class BlendStack.BlendStackInputAnimNodeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlendStackInputAnimNodeLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBlendStackInputAnimNodeLibrary, "BlendStackInputAnimNodeLibrary")
};

} // namespace SDK
