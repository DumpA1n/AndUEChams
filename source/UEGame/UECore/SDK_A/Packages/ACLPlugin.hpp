#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ACLPlugin
// Enums: 5
// Structs: 0
// Classes: 7

struct FLatentActionInfo;
struct UAnimBoneCompressionCodec;
struct UAnimationCompressionLibraryDatabase;
struct UAnimBoneCompressionCodec_ACLBase;
struct UAnimBoneCompressionCodec_ACL;
struct UAnimBoneCompressionCodec_ACLCustom;
struct UAnimBoneCompressionCodec_ACLDatabase;
struct UAnimBoneCompressionCodec_ACLSafe;
struct UAnimCurveCompressionCodec_ACL;

// Object: Enum ACLPlugin.ACLCompressionLevel
enum class EACLCompressionLevel : uint8_t
{
	ACLCL_Lowest = 0,
	ACLCL_Low = 1,
	ACLCL_Medium = 2,
	ACLCL_High = 3,
	ACLCL_Highest = 4,
	ACLCL_MAX = 5
};

// Object: Enum ACLPlugin.ACLVectorFormat
enum class EACLVectorFormat : uint8_t
{
	ACLVF_Vector3_96 = 0,
	ACLVF_Vector3_Variable = 1,
	ACLVF_Vector3_MAX = 2
};

// Object: Enum ACLPlugin.ACLRotationFormat
enum class EACLRotationFormat : uint8_t
{
	ACLRF_Quat_128 = 0,
	ACLRF_QuatDropW_96 = 1,
	ACLRF_QuatDropW_Variable = 2,
	ACLRF_MAX = 3
};

// Object: Enum ACLPlugin.ACLVisualFidelityChangeResult
enum class EACLVisualFidelityChangeResult : uint8_t
{
	Dispatched = 0,
	Completed = 1,
	Failed = 2,
	ACLVisualFidelityChangeResult_MAX = 3
};

// Object: Enum ACLPlugin.ACLVisualFidelity
enum class EACLVisualFidelity : uint8_t
{
	Highest = 0,
	Medium = 1,
	Lowest = 2,
	ACLVisualFidelity_MAX = 3
};

// Object: Class ACLPlugin.AnimationCompressionLibraryDatabase
// Size: 0x1D0 (Inherited: 0x28)
struct UAnimationCompressionLibraryDatabase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAnimationCompressionLibraryDatabase, "AnimationCompressionLibraryDatabase")

	struct TArray<uint8_t> CookedCompressedBytes; // 0x28(0x10)
	struct TArray<uint64_t> CookedAnimSequenceMappings; // 0x38(0x10)
	uint8_t Pad_0x48[0x180]; // 0x48(0x180)
	uint32_t MaxStreamRequestSizeKB; // 0x1C8(0x4)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)

	// Object: Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7ade9d0
	// Params: [ Num(5) Size(0x2A) ]
	static void SetVisualFidelity(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UAnimationCompressionLibraryDatabase* DatabaseAsset, EACLVisualFidelityChangeResult& Result, EACLVisualFidelity VisualFidelity);

	// Object: Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7ade92c
	// Params: [ Num(2) Size(0x9) ]
	static EACLVisualFidelity GetVisualFidelity(struct UAnimationCompressionLibraryDatabase* DatabaseAsset);
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLBase : UAnimBoneCompressionCodec
{
	DEFINE_UE_CLASS_HELPERS(UAnimBoneCompressionCodec_ACLBase, "AnimBoneCompressionCodec_ACLBase")
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACL
// Size: 0x40 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACL : UAnimBoneCompressionCodec_ACLBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimBoneCompressionCodec_ACL, "AnimBoneCompressionCodec_ACL")

	struct UAnimBoneCompressionCodec* SafetyFallbackCodec; // 0x38(0x8)
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLCustom : UAnimBoneCompressionCodec_ACLBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimBoneCompressionCodec_ACLCustom, "AnimBoneCompressionCodec_ACLCustom")
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// Size: 0x40 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLDatabase : UAnimBoneCompressionCodec_ACLBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimBoneCompressionCodec_ACLDatabase, "AnimBoneCompressionCodec_ACLDatabase")

	struct UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x38(0x8)
};

// Object: Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLSafe : UAnimBoneCompressionCodec_ACLBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimBoneCompressionCodec_ACLSafe, "AnimBoneCompressionCodec_ACLSafe")
};

// Object: Class ACLPlugin.AnimCurveCompressionCodec_ACL
// Size: 0x28 (Inherited: 0x28)
struct UAnimCurveCompressionCodec_ACL : UAnimCurveCompressionCodec
{
	DEFINE_UE_CLASS_HELPERS(UAnimCurveCompressionCodec_ACL, "AnimCurveCompressionCodec_ACL")
};

} // namespace SDK
