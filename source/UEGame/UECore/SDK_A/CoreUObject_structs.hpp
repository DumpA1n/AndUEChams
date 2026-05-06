#pragma once

#include "Basic.h"
#include "UnrealContainers.h"
#include <cmath>
#include <cstdio>

#ifndef DEFINE_UE_CLASS_HELPERS
#define DEFINE_UE_CLASS_HELPERS(FullClassName, ClassNameStr) \
    static struct UClass* StaticClass() { return StaticClassImpl<ClassNameStr>(); } \
    static struct FullClassName* GetDefaultObj() { return GetDefaultObjImpl<FullClassName>(); }
#endif

namespace SDK
{

// Package: CoreUObject - Enums(16) + Structs(64)

// Object: Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

// Object: Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3
};

// Object: Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3
};

// Object: Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3
};

// Object: Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14
};

// Object: Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_ViewTarget = 14,
	COND_ViewTargetSkipOwner = 15,
	COND_Never = 17,
	COND_Max = 18
};

// Object: Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3
};

// Object: Enum CoreUObject.EAppMsgType
enum class EAppMsgType : uint8_t
{
	Ok = 0,
	YesNo = 1,
	OkCancel = 2,
	YesNoCancel = 3,
	CancelRetryContinue = 4,
	YesNoYesAllNoAll = 5,
	YesNoYesAllNoAllCancel = 6,
	YesNoYesAll = 7,
	EAppMsgType_MAX = 8
};

// Object: Enum CoreUObject.EAppReturnType
enum class EAppReturnType : uint8_t
{
	No = 0,
	Yes = 1,
	YesAll = 2,
	NoAll = 3,
	Cancel = 4,
	Ok = 5,
	Retry = 6,
	Continue = 7,
	EAppReturnType_MAX = 8
};

// Object: Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};

// Object: Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 40,
	Seconds = 41,
	Minutes = 42,
	Hours = 43,
	Days = 44,
	Months = 45,
	Years = 46,
	Multiplier = 47,
	Percentage = 48,
	Unspecified = 49,
	EUnit_MAX = 50
};

// Object: Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_5x4 = 51,
	PF_ASTC_5x5 = 52,
	PF_ASTC_6x6 = 53,
	PF_ASTC_8x5 = 54,
	PF_ASTC_8x6 = 55,
	PF_ASTC_8x8 = 56,
	PF_ASTC_10x8 = 57,
	PF_ASTC_10x10 = 58,
	PF_ASTC_12x12 = 59,
	PF_BC6H = 60,
	PF_BC7 = 61,
	PF_R8_UINT = 62,
	PF_L8 = 63,
	PF_XGXR8 = 64,
	PF_R8G8B8A8_UINT = 65,
	PF_R8G8B8A8_SNORM = 66,
	PF_R16G16B16A16_UNORM = 67,
	PF_R16G16B16A16_SNORM = 68,
	PF_PLATFORM_HDR_0 = 69,
	PF_PLATFORM_HDR_1 = 70,
	PF_PLATFORM_HDR_2 = 71,
	PF_NV12 = 72,
	PF_R32G32_UINT = 73,
	PF_ETC2_R11_EAC = 74,
	PF_ETC2_RG11_EAC = 75,
	PF_R4G4B4A4 = 76,
	PF_MAX = 77
};

// Object: Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4
};

// Object: Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4
};

// Object: Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2
};

// Object: Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2
};

// Object: ScriptStruct CoreUObject.JoinabilitySettings
// Size: 0x14 (Inherited: 0x0)
struct FJoinabilitySettings
{
	struct FName SessionName; // 0x0(0x8)
	bool bPublicSearchable; // 0x8(0x1)
	bool bAllowInvites; // 0x9(0x1)
	bool bJoinViaPresence; // 0xA(0x1)
	bool bJoinViaPresenceFriendsOnly; // 0xB(0x1)
	int32_t MaxPlayers; // 0xC(0x4)
	int32_t MaxPartySize; // 0x10(0x4)
};

// Object: ScriptStruct CoreUObject.Default__ScriptStruct
// Size: 0x0 (Inherited: 0x0)
struct FDefault__ScriptStruct
{
};

// Object: ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size: 0x1 (Inherited: 0x0)
struct FUniqueNetIdWrapper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct CoreUObject.Guid
// Size: 0x10 (Inherited: 0x0)
struct FGuid
{
	int32_t A; // 0x0(0x4)
	int32_t B; // 0x4(0x4)
	int32_t C; // 0x8(0x4)
	int32_t D; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Vector
// Size: 0xC (Inherited: 0x0)
struct FVector
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)


	constexpr FVector() = default;
	constexpr FVector(float InX, float InY, float InZ) : X(InX), Y(InY), Z(InZ) {}
	FVector  operator+(const FVector& o) const { return {X + o.X, Y + o.Y, Z + o.Z}; }
	FVector  operator-(const FVector& o) const { return {X - o.X, Y - o.Y, Z - o.Z}; }
	FVector  operator*(const FVector& o) const { return {X * o.X, Y * o.Y, Z * o.Z}; }
	FVector  operator/(const FVector& o) const { return {X / o.X, Y / o.Y, Z / o.Z}; }
	FVector  operator*(float s)          const { return {X * s, Y * s, Z * s}; }
	FVector  operator/(float s)          const { return {X / s, Y / s, Z / s}; }
	FVector  operator-()                 const { return {-X, -Y, -Z}; }
	FVector& operator+=(const FVector& o)      { X += o.X; Y += o.Y; Z += o.Z; return *this; }
	FVector& operator-=(const FVector& o)      { X -= o.X; Y -= o.Y; Z -= o.Z; return *this; }
	FVector& operator*=(float s)               { X *= s;   Y *= s;   Z *= s;   return *this; }
	FVector& operator/=(float s)               { X /= s;   Y /= s;   Z /= s;   return *this; }
	bool     operator==(const FVector& o) const{ return X == o.X && Y == o.Y && Z == o.Z; }
	bool     operator!=(const FVector& o) const{ return !(*this == o); }
	float    LengthSquared() const             { return X*X + Y*Y + Z*Z; }
	float    Length()        const             { return std::sqrt(LengthSquared()); }
	float    Dot(const FVector& o)  const      { return X*o.X + Y*o.Y + Z*o.Z; }
	FVector  Cross(const FVector& o) const     { return {Y*o.Z - Z*o.Y, Z*o.X - X*o.Z, X*o.Y - Y*o.X}; }
	float    Distance(const FVector& o) const  { return (*this - o).Length(); }
	bool     IsNearlyZero(float t = 1e-4f) const { return std::abs(X) <= t && std::abs(Y) <= t && std::abs(Z) <= t; }
	FVector  GetSafeNormal(float t = 1e-4f) const { float l = Length(); return l > t ? FVector{X/l, Y/l, Z/l} : FVector{0,0,0}; }
	std::string ToString() const { char b[64]; std::snprintf(b, sizeof(b), "X=%.3f Y=%.3f Z=%.3f", X, Y, Z); return std::string(b); }
};

// Object: ScriptStruct CoreUObject.Vector4
// Size: 0x10 (Inherited: 0x0)
struct FVector4
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)


	constexpr FVector4() = default;
	constexpr FVector4(float InX, float InY, float InZ, float InW) : X(InX), Y(InY), Z(InZ), W(InW) {}
	FVector4  operator+(const FVector4& o) const { return {X + o.X, Y + o.Y, Z + o.Z, W + o.W}; }
	FVector4  operator-(const FVector4& o) const { return {X - o.X, Y - o.Y, Z - o.Z, W - o.W}; }
	FVector4  operator*(float s)           const { return {X * s, Y * s, Z * s, W * s}; }
	FVector4  operator/(float s)           const { return {X / s, Y / s, Z / s, W / s}; }
	FVector4  operator-()                  const { return {-X, -Y, -Z, -W}; }
	FVector4& operator+=(const FVector4& o)      { X += o.X; Y += o.Y; Z += o.Z; W += o.W; return *this; }
	FVector4& operator-=(const FVector4& o)      { X -= o.X; Y -= o.Y; Z -= o.Z; W -= o.W; return *this; }
	FVector4& operator*=(float s)                { X *= s; Y *= s; Z *= s; W *= s; return *this; }
	FVector4& operator/=(float s)                { X /= s; Y /= s; Z /= s; W /= s; return *this; }
	bool      operator==(const FVector4& o) const{ return X == o.X && Y == o.Y && Z == o.Z && W == o.W; }
	bool      operator!=(const FVector4& o) const{ return !(*this == o); }
	float     LengthSquared() const              { return X*X + Y*Y + Z*Z + W*W; }
	float     Length()        const              { return std::sqrt(LengthSquared()); }
	float     Dot(const FVector4& o) const       { return X*o.X + Y*o.Y + Z*o.Z + W*o.W; }
	bool      IsNearlyZero(float t = 1e-4f) const{ return std::abs(X) <= t && std::abs(Y) <= t && std::abs(Z) <= t && std::abs(W) <= t; }
	std::string ToString() const { char b[80]; std::snprintf(b, sizeof(b), "X=%.3f Y=%.3f Z=%.3f W=%.3f", X, Y, Z, W); return std::string(b); }
};

// Object: ScriptStruct CoreUObject.Vector2D
// Size: 0x8 (Inherited: 0x0)
struct FVector2D
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)


	constexpr FVector2D() = default;
	constexpr FVector2D(float InX, float InY) : X(InX), Y(InY) {}
	FVector2D  operator+(const FVector2D& o) const { return {X + o.X, Y + o.Y}; }
	FVector2D  operator-(const FVector2D& o) const { return {X - o.X, Y - o.Y}; }
	FVector2D  operator*(const FVector2D& o) const { return {X * o.X, Y * o.Y}; }
	FVector2D  operator/(const FVector2D& o) const { return {X / o.X, Y / o.Y}; }
	FVector2D  operator*(float s)            const { return {X * s, Y * s}; }
	FVector2D  operator/(float s)            const { return {X / s, Y / s}; }
	FVector2D  operator-()                   const { return {-X, -Y}; }
	FVector2D& operator+=(const FVector2D& o)      { X += o.X; Y += o.Y; return *this; }
	FVector2D& operator-=(const FVector2D& o)      { X -= o.X; Y -= o.Y; return *this; }
	FVector2D& operator*=(float s)                 { X *= s; Y *= s; return *this; }
	FVector2D& operator/=(float s)                 { X /= s; Y /= s; return *this; }
	bool       operator==(const FVector2D& o) const{ return X == o.X && Y == o.Y; }
	bool       operator!=(const FVector2D& o) const{ return !(*this == o); }
	float      LengthSquared() const               { return X*X + Y*Y; }
	float      Length()        const               { return std::sqrt(LengthSquared()); }
	float      Dot(const FVector2D& o) const       { return X*o.X + Y*o.Y; }
	float      Distance(const FVector2D& o) const  { return (*this - o).Length(); }
	bool       IsNearlyZero(float t = 1e-4f) const { return std::abs(X) <= t && std::abs(Y) <= t; }
	FVector2D  GetSafeNormal(float t = 1e-4f) const { float l = Length(); return l > t ? FVector2D{X/l, Y/l} : FVector2D{0,0}; }
	std::string ToString() const { char b[48]; std::snprintf(b, sizeof(b), "X=%.3f Y=%.3f", X, Y); return std::string(b); }
};

// Object: ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 (Inherited: 0x0)
struct FTwoVectors
{
	struct FVector v1; // 0x0(0xC)
	struct FVector v2; // 0xC(0xC)
};

// Object: ScriptStruct CoreUObject.Plane
// Size: 0x10 (Inherited: 0xC)
struct FPlane : FVector
{
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Rotator
// Size: 0xC (Inherited: 0x0)
struct FRotator
{
	float Pitch; // 0x0(0x4)
	float Yaw; // 0x4(0x4)
	float Roll; // 0x8(0x4)


	constexpr FRotator() = default;
	constexpr FRotator(float InPitch, float InYaw, float InRoll) : Pitch(InPitch), Yaw(InYaw), Roll(InRoll) {}
	FRotator  operator+(const FRotator& o) const { return {Pitch + o.Pitch, Yaw + o.Yaw, Roll + o.Roll}; }
	FRotator  operator-(const FRotator& o) const { return {Pitch - o.Pitch, Yaw - o.Yaw, Roll - o.Roll}; }
	FRotator  operator*(float s)           const { return {Pitch * s, Yaw * s, Roll * s}; }
	FRotator  operator/(float s)           const { return {Pitch / s, Yaw / s, Roll / s}; }
	FRotator  operator-()                  const { return {-Pitch, -Yaw, -Roll}; }
	FRotator& operator+=(const FRotator& o)      { Pitch += o.Pitch; Yaw += o.Yaw; Roll += o.Roll; return *this; }
	FRotator& operator-=(const FRotator& o)      { Pitch -= o.Pitch; Yaw -= o.Yaw; Roll -= o.Roll; return *this; }
	FRotator& operator*=(float s)                { Pitch *= s; Yaw *= s; Roll *= s; return *this; }
	FRotator& operator/=(float s)                { Pitch /= s; Yaw /= s; Roll /= s; return *this; }
	bool      operator==(const FRotator& o) const{ return Pitch == o.Pitch && Yaw == o.Yaw && Roll == o.Roll; }
	bool      operator!=(const FRotator& o) const{ return !(*this == o); }
	bool      IsNearlyZero(float t = 1e-4f) const{ return std::abs(Pitch) <= t && std::abs(Yaw) <= t && std::abs(Roll) <= t; }
	std::string ToString() const { char b[80]; std::snprintf(b, sizeof(b), "P=%.3f Y=%.3f R=%.3f", Pitch, Yaw, Roll); return std::string(b); }
};

// Object: ScriptStruct CoreUObject.Quat
// Size: 0x10 (Inherited: 0x0)
struct FQuat
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.PackedNormal
// Size: 0x4 (Inherited: 0x0)
struct FPackedNormal
{
	uint8_t X; // 0x0(0x1)
	uint8_t Y; // 0x1(0x1)
	uint8_t Z; // 0x2(0x1)
	uint8_t W; // 0x3(0x1)
};

// Object: ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x4 (Inherited: 0x0)
struct FPackedRGB10A2N
{
	int32_t Packed; // 0x0(0x4)
};

// Object: ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x8 (Inherited: 0x0)
struct FPackedRGBA16N
{
	int32_t XY; // 0x0(0x4)
	int32_t ZW; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.IntPoint
// Size: 0x8 (Inherited: 0x0)
struct FIntPoint
{
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.IntVector
// Size: 0xC (Inherited: 0x0)
struct FIntVector
{
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
	int32_t Z; // 0x8(0x4)
};

// Object: ScriptStruct CoreUObject.Color
// Size: 0x4 (Inherited: 0x0)
struct FColor
{
	uint8_t B; // 0x0(0x1)
	uint8_t G; // 0x1(0x1)
	uint8_t R; // 0x2(0x1)
	uint8_t A; // 0x3(0x1)
};

// Object: ScriptStruct CoreUObject.LinearColor
// Size: 0x10 (Inherited: 0x0)
struct FLinearColor
{
	float R; // 0x0(0x4)
	float G; // 0x4(0x4)
	float B; // 0x8(0x4)
	float A; // 0xC(0x4)


	constexpr FLinearColor() = default;
	constexpr FLinearColor(float InR, float InG, float InB, float InA = 1.0f) : R(InR), G(InG), B(InB), A(InA) {}
	constexpr explicit FLinearColor(uint32_t hex) : R(((hex >> 16) & 0xFF) / 255.0f), G(((hex >> 8) & 0xFF) / 255.0f), B((hex & 0xFF) / 255.0f), A(1.0f) {}
	FLinearColor  operator+(const FLinearColor& o) const { return {R + o.R, G + o.G, B + o.B, A + o.A}; }
	FLinearColor  operator-(const FLinearColor& o) const { return {R - o.R, G - o.G, B - o.B, A - o.A}; }
	FLinearColor  operator*(const FLinearColor& o) const { return {R * o.R, G * o.G, B * o.B, A * o.A}; }
	FLinearColor  operator*(float s)               const { return {R * s, G * s, B * s, A * s}; }
	FLinearColor  operator/(float s)               const { return {R / s, G / s, B / s, A / s}; }
	FLinearColor& operator+=(const FLinearColor& o)      { R += o.R; G += o.G; B += o.B; A += o.A; return *this; }
	FLinearColor& operator-=(const FLinearColor& o)      { R -= o.R; G -= o.G; B -= o.B; A -= o.A; return *this; }
	FLinearColor& operator*=(float s)                    { R *= s; G *= s; B *= s; A *= s; return *this; }
	FLinearColor& operator/=(float s)                    { R /= s; G /= s; B /= s; A /= s; return *this; }
	bool          operator==(const FLinearColor& o) const{ return R == o.R && G == o.G && B == o.B && A == o.A; }
	bool          operator!=(const FLinearColor& o) const{ return !(*this == o); }
	std::string ToString() const { char b[80]; std::snprintf(b, sizeof(b), "R=%.3f G=%.3f B=%.3f A=%.3f", R, G, B, A); return std::string(b); }
};

// Object: ScriptStruct CoreUObject.Box
// Size: 0x1C (Inherited: 0x0)
struct FBox
{
	struct FVector Min; // 0x0(0xC)
	struct FVector Max; // 0xC(0xC)
	uint8_t IsValid; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct CoreUObject.Box2D
// Size: 0x14 (Inherited: 0x0)
struct FBox2D
{
	struct FVector2D Min; // 0x0(0x8)
	struct FVector2D Max; // 0x8(0x8)
	uint8_t bIsValid; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1C (Inherited: 0x0)
struct FBoxSphereBounds
{
	struct FVector Origin; // 0x0(0xC)
	struct FVector BoxExtent; // 0xC(0xC)
	float SphereRadius; // 0x18(0x4)
};

// Object: ScriptStruct CoreUObject.OrientedBox
// Size: 0x3C (Inherited: 0x0)
struct FOrientedBox
{
	struct FVector Center; // 0x0(0xC)
	struct FVector AxisX; // 0xC(0xC)
	struct FVector AxisY; // 0x18(0xC)
	struct FVector AxisZ; // 0x24(0xC)
	float ExtentX; // 0x30(0x4)
	float ExtentY; // 0x34(0x4)
	float ExtentZ; // 0x38(0x4)
};

// Object: ScriptStruct CoreUObject.Matrix
// Size: 0x40 (Inherited: 0x0)
struct FMatrix
{
	struct FPlane XPlane; // 0x0(0x10)
	struct FPlane YPlane; // 0x10(0x10)
	struct FPlane ZPlane; // 0x20(0x10)
	struct FPlane WPlane; // 0x30(0x10)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 (Inherited: 0x0)
struct FInterpCurvePointFloat
{
	float InVal; // 0x0(0x4)
	float OutVal; // 0x4(0x4)
	float ArriveTangent; // 0x8(0x4)
	float LeaveTangent; // 0xC(0x4)
	uint8_t InterpMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveFloat
{
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20 (Inherited: 0x0)
struct FInterpCurvePointVector2D
{
	float InVal; // 0x0(0x4)
	struct FVector2D OutVal; // 0x4(0x8)
	struct FVector2D ArriveTangent; // 0xC(0x8)
	struct FVector2D LeaveTangent; // 0x14(0x8)
	uint8_t InterpMode; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveVector2D
{
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2C (Inherited: 0x0)
struct FInterpCurvePointVector
{
	float InVal; // 0x0(0x4)
	struct FVector OutVal; // 0x4(0xC)
	struct FVector ArriveTangent; // 0x10(0xC)
	struct FVector LeaveTangent; // 0x1C(0xC)
	uint8_t InterpMode; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveVector
{
	struct TArray<struct FInterpCurvePointVector> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50 (Inherited: 0x0)
struct FInterpCurvePointQuat
{
	float InVal; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FQuat OutVal; // 0x10(0x10)
	struct FQuat ArriveTangent; // 0x20(0x10)
	struct FQuat LeaveTangent; // 0x30(0x10)
	uint8_t InterpMode; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
};

// Object: ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveQuat
{
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50 (Inherited: 0x0)
struct FInterpCurvePointTwoVectors
{
	float InVal; // 0x0(0x4)
	struct FTwoVectors OutVal; // 0x4(0x18)
	struct FTwoVectors ArriveTangent; // 0x1C(0x18)
	struct FTwoVectors LeaveTangent; // 0x34(0x18)
	uint8_t InterpMode; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveTwoVectors
{
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 (Inherited: 0x0)
struct FInterpCurvePointLinearColor
{
	float InVal; // 0x0(0x4)
	struct FLinearColor OutVal; // 0x4(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	uint8_t InterpMode; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveLinearColor
{
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.Transform
// Size: 0x30 (Inherited: 0x0)
struct FTransform
{
	struct FQuat Rotation; // 0x0(0x10)
	struct FVector Translation; // 0x10(0xC)
	struct FVector Scale3D; // 0x1C(0xC)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct CoreUObject.RandomStream
// Size: 0x8 (Inherited: 0x0)
struct FRandomStream
{
	int32_t InitialSeed; // 0x0(0x4)
	int32_t Seed; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.DateTime
// Size: 0x8 (Inherited: 0x0)
struct FDateTime
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.FrameNumber
// Size: 0x4 (Inherited: 0x0)
struct FFrameNumber
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct CoreUObject.FrameRate
// Size: 0x8 (Inherited: 0x0)
struct FFrameRate
{
	int32_t Numerator; // 0x0(0x4)
	int32_t Denominator; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FrameTime
// Size: 0x8 (Inherited: 0x0)
struct FFrameTime
{
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	float SubFrame; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.QualifiedFrameTime
// Size: 0x10 (Inherited: 0x0)
struct FQualifiedFrameTime
{
	struct FFrameTime Time; // 0x0(0x8)
	struct FFrameRate Rate; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.Timecode
// Size: 0x14 (Inherited: 0x0)
struct FTimecode
{
	int32_t Hours; // 0x0(0x4)
	int32_t Minutes; // 0x4(0x4)
	int32_t Seconds; // 0x8(0x4)
	int32_t Frames; // 0xC(0x4)
	bool bDropFrameFormat; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.Timespan
// Size: 0x8 (Inherited: 0x0)
struct FTimespan
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.SoftObjectPath
// Size: 0x18 (Inherited: 0x0)
struct FSoftObjectPath
{
	struct FName AssetPathName; // 0x0(0x8)
	struct FString SubPathString; // 0x8(0x10)
};

// Object: ScriptStruct CoreUObject.SoftClassPath
// Size: 0x18 (Inherited: 0x18)
struct FSoftClassPath : FSoftObjectPath
{
};

// Object: ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x8 (Inherited: 0x0)
struct FPrimaryAssetType
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x10 (Inherited: 0x0)
struct FPrimaryAssetId
{
	struct FPrimaryAssetType PrimaryAssetType; // 0x0(0x8)
	struct FName PrimaryAssetName; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FallbackStruct
// Size: 0x1 (Inherited: 0x0)
struct FFallbackStruct
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x8 (Inherited: 0x0)
struct FFloatRangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FloatRange
// Size: 0x10 (Inherited: 0x0)
struct FFloatRange
{
	struct FFloatRangeBound LowerBound; // 0x0(0x8)
	struct FFloatRangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x8 (Inherited: 0x0)
struct FInt32RangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.Int32Range
// Size: 0x10 (Inherited: 0x0)
struct FInt32Range
{
	struct FInt32RangeBound LowerBound; // 0x0(0x8)
	struct FInt32RangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FrameNumberRangeBound
// Size: 0x8 (Inherited: 0x0)
struct FFrameNumberRangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FFrameNumber Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FrameNumberRange
// Size: 0x10 (Inherited: 0x0)
struct FFrameNumberRange
{
	struct FFrameNumberRangeBound LowerBound; // 0x0(0x8)
	struct FFrameNumberRangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FloatInterval
// Size: 0x8 (Inherited: 0x0)
struct FFloatInterval
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.Int32Interval
// Size: 0x8 (Inherited: 0x0)
struct FInt32Interval
{
	int32_t Min; // 0x0(0x4)
	int32_t Max; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.PolyglotTextData
// Size: 0xB8 (Inherited: 0x0)
struct FPolyglotTextData
{
	ELocalizedTextSourceCategory Category; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString NativeCulture; // 0x8(0x10)
	struct FString Namespace; // 0x18(0x10)
	struct FString Key; // 0x28(0x10)
	struct FString NativeString; // 0x38(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48(0x50)
	bool bIsMinimalPatch; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FText CachedText; // 0xA0(0x18)
};

// Object: ScriptStruct CoreUObject.AutomationEvent
// Size: 0x38 (Inherited: 0x0)
struct FAutomationEvent
{
	EAutomationEventType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Message; // 0x8(0x10)
	struct FString Context; // 0x18(0x10)
	struct FGuid Artifact; // 0x28(0x10)
};

// Object: ScriptStruct CoreUObject.AutomationExecutionEntry
// Size: 0x58 (Inherited: 0x0)
struct FAutomationExecutionEntry
{
	struct FAutomationEvent Event; // 0x0(0x38)
	struct FString Filename; // 0x38(0x10)
	int32_t LineNumber; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FDateTime Timestamp; // 0x50(0x8)
};

// Object: ScriptStruct CoreUObject.ARFilter
// Size: 0xF0 (Inherited: 0x0)
struct FARFilter
{
	struct TArray<struct FName> PackageNames; // 0x0(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90(0x50)
	bool bRecursivePaths; // 0xE0(0x1)
	bool bRecursiveClasses; // 0xE1(0x1)
	bool bIncludeOnlyOnDiskAssets; // 0xE2(0x1)
	uint8_t Pad_0xE3[0xD]; // 0xE3(0xD)
};

// Object: ScriptStruct CoreUObject.AssetBundleEntry
// Size: 0x28 (Inherited: 0x0)
struct FAssetBundleEntry
{
	struct FPrimaryAssetId BundleScope; // 0x0(0x10)
	struct FName BundleName; // 0x10(0x8)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x18(0x10)
};

// Object: ScriptStruct CoreUObject.AssetBundleData
// Size: 0x10 (Inherited: 0x0)
struct FAssetBundleData
{
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x0(0x10)
};

// Object: ScriptStruct CoreUObject.AssetData
// Size: 0x50 (Inherited: 0x0)
struct FAssetData
{
	struct FName ObjectPath; // 0x0(0x8)
	struct FName PackageName; // 0x8(0x8)
	struct FName PackagePath; // 0x10(0x8)
	struct FName AssetName; // 0x18(0x8)
	struct FName AssetClass; // 0x20(0x8)
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
};

} // namespace SDK
