#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: GameMatrix
// Enums: 1
// Structs: 8
// Classes: 0

struct FCGSDKLoginResult;
struct FPCLoginEventRet;
struct FGameMatrixProp;
struct FClientEvent;
struct FClientTypeInfo;
struct FCloudInfo;
struct FCameraInfo;
struct FDeviceInfo;

// Object: Enum GameMatrix.EGameMatrixDeviceType
enum class EGameMatrixDeviceType : uint8_t
{
	InValid = 0,
	Android = 1,
	Android_TV = 2,
	Mac = 3,
	Windows = 4,
	PC_Win = 5,
	PC_Mac = 6,
	H5 = 7,
	EGameMatrixDeviceType_MAX = 8
};

// Object: ScriptStruct GameMatrix.CGSDKLoginResult
// Size: 0x128 (Inherited: 0x0)
struct FCGSDKLoginResult
{
	int32_t MethodNameID; // 0x0(0x4)
	int32_t RetCode; // 0x4(0x4)
	struct FString RetMsg; // 0x8(0x10)
	int32_t ThirdCode; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ThirdMsg; // 0x20(0x10)
	struct FString extraJson; // 0x30(0x10)
	struct FString Openid; // 0x40(0x10)
	struct FString Token; // 0x50(0x10)
	int64_t tokenExpire; // 0x60(0x8)
	int32_t FirstLogin; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString regChannelDis; // 0x70(0x10)
	struct FString userName; // 0x80(0x10)
	int32_t Gender; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FString birthdate; // 0x98(0x10)
	struct FString PictureUrl; // 0xA8(0x10)
	struct FString pf; // 0xB8(0x10)
	struct FString pfKey; // 0xC8(0x10)
	bool realNameAuth; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x3]; // 0xD9(0x3)
	int32_t channelID; // 0xDC(0x4)
	struct FString Channel; // 0xE0(0x10)
	struct FString ChannelInfo; // 0xF0(0x10)
	struct FString confirmCode; // 0x100(0x10)
	int64_t confirmCodeExpireTime; // 0x110(0x8)
	struct FString BindList; // 0x118(0x10)
};

// Object: ScriptStruct GameMatrix.PCLoginEventRet
// Size: 0x38 (Inherited: 0x0)
struct FPCLoginEventRet
{
	struct FString Channel; // 0x0(0x10)
	int32_t channelID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString ChannelOpenID; // 0x18(0x10)
	struct FString Code; // 0x28(0x10)
};

// Object: ScriptStruct GameMatrix.GameMatrixProp
// Size: 0x1 (Inherited: 0x0)
struct FGameMatrixProp
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GameMatrix.ClientEvent
// Size: 0x10 (Inherited: 0x0)
struct FClientEvent
{
	struct FString Event; // 0x0(0x10)
};

// Object: ScriptStruct GameMatrix.ClientTypeInfo
// Size: 0x30 (Inherited: 0x0)
struct FClientTypeInfo
{
	int32_t Type; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString DeviceID; // 0x8(0x10)
	struct FString UserId; // 0x18(0x10)
	int32_t Width; // 0x28(0x4)
	int32_t Height; // 0x2C(0x4)
};

// Object: ScriptStruct GameMatrix.CloudInfo
// Size: 0x20 (Inherited: 0x0)
struct FCloudInfo
{
	struct FString DeviceID; // 0x0(0x10)
	struct FString Identity; // 0x10(0x10)
};

// Object: ScriptStruct GameMatrix.CameraInfo
// Size: 0x1 (Inherited: 0x0)
struct FCameraInfo
{
	bool HasCamera; // 0x0(0x1)
};

// Object: ScriptStruct GameMatrix.DeviceInfo
// Size: 0x88 (Inherited: 0x0)
struct FDeviceInfo
{
	struct FString Type; // 0x0(0x10)
	EGameMatrixDeviceType DeviceType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t Width; // 0x14(0x4)
	int32_t Height; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString IpAddr; // 0x20(0x10)
	int32_t UEvent; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString Os; // 0x38(0x10)
	struct FString IMEI; // 0x48(0x10)
	struct FString QIMEI; // 0x58(0x10)
	struct FString XId; // 0x68(0x10)
	struct FString Extra; // 0x78(0x10)
};

} // namespace SDK
