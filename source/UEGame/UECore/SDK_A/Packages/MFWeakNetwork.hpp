#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OnlineSubsystemUtils.hpp"
#include "PacketHandler.hpp"

namespace SDK
{

// Package: MFWeakNetwork
// Enums: 1
// Structs: 0
// Classes: 7

struct APlayerController;
struct UActorChannel;
struct UWorld;
struct UFakeOodleNetworkHandlerComponentFactory;
struct UMFGCloudNetworkObserver;
struct UMFWeakNetworkEngineHandlerComponentFactory;
struct UMFWeakNetworkIpNetDriver;
struct UMFWeakNetworkNetConnection;
struct UMFWeakNetworkStatics;
struct UMFWeakNetworkTypes;

// Object: Enum MFWeakNetwork.EMFNetworkState
enum class EMFNetworkState : uint8_t
{
	NotReachable = 0,
	WWAN = 1,
	Wifi = 2,
	Others = 3,
	EMFNetworkState_MAX = 4
};

// Object: Class MFWeakNetwork.FakeOodleNetworkHandlerComponentFactory
// Size: 0x28 (Inherited: 0x28)
struct UFakeOodleNetworkHandlerComponentFactory : UHandlerComponentFactory
{
	DEFINE_UE_CLASS_HELPERS(UFakeOodleNetworkHandlerComponentFactory, "FakeOodleNetworkHandlerComponentFactory")
};

// Object: Class MFWeakNetwork.MFGCloudNetworkObserver
// Size: 0x58 (Inherited: 0x28)
struct UMFGCloudNetworkObserver : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudNetworkObserver, "MFGCloudNetworkObserver")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
};

// Object: Class MFWeakNetwork.MFWeakNetworkEngineHandlerComponentFactory
// Size: 0x28 (Inherited: 0x28)
struct UMFWeakNetworkEngineHandlerComponentFactory : UEngineHandlerComponentFactory
{
	DEFINE_UE_CLASS_HELPERS(UMFWeakNetworkEngineHandlerComponentFactory, "MFWeakNetworkEngineHandlerComponentFactory")
};

// Object: Class MFWeakNetwork.MFWeakNetworkIpNetDriver
// Size: 0x8A8 (Inherited: 0x878)
struct UMFWeakNetworkIpNetDriver : UIpNetDriver
{
	DEFINE_UE_CLASS_HELPERS(UMFWeakNetworkIpNetDriver, "MFWeakNetworkIpNetDriver")

	bool UseReservedNetworkGUIDMap; // 0x874(0x1)
	uint8_t Pad_0x879[0x2F]; // 0x879(0x2F)
};

// Object: Class MFWeakNetwork.MFWeakNetworkNetConnection
// Size: 0x1F38 (Inherited: 0x1E20)
struct UMFWeakNetworkNetConnection : UIpConnection
{
	DEFINE_UE_CLASS_HELPERS(UMFWeakNetworkNetConnection, "MFWeakNetworkNetConnection")

	uint8_t Pad_0x1E20[0x10]; // 0x1E20(0x10)
	struct TArray<struct UActorChannel*> CheckChannels; // 0x1E30(0x10)
	uint8_t Pad_0x1E40[0x10]; // 0x1E40(0x10)
	float ReconnectTimeForNotify; // 0x1E50(0x4)
	uint8_t Pad_0x1E54[0x2C]; // 0x1E54(0x2C)
	float SingleReconnectTime; // 0x1E80(0x4)
	int32_t SingleMaxReconnectCount; // 0x1E84(0x4)
	float MaxReconnectCount; // 0x1E88(0x4)
	float ClientConnectionTimeout; // 0x1E8C(0x4)
	bool EnableInitSocketFix; // 0x1E90(0x1)
	uint8_t Pad_0x1E91[0x3]; // 0x1E91(0x3)
	float SocketFixTime; // 0x1E94(0x4)
	uint8_t Pad_0x1E98[0x30]; // 0x1E98(0x30)
	int32_t CircularBitArrayNum; // 0x1EC8(0x4)
	uint8_t Pad_0x1ECC[0x6C]; // 0x1ECC(0x6C)

	// Object: Function MFWeakNetwork.MFWeakNetworkNetConnection.UseNewSocketReconnect
	// Flags: [Native|Public]
	// Offset: 0x4e77018
	// Params: [ Num(0) Size(0x0) ]
	void UseNewSocketReconnect();

	// Object: Function MFWeakNetwork.MFWeakNetworkNetConnection.TimerForCloseConnection
	// Flags: [Final|Native|Public]
	// Offset: 0x4e77004
	// Params: [ Num(0) Size(0x0) ]
	void TimerForCloseConnection();

	// Object: Function MFWeakNetwork.MFWeakNetworkNetConnection.PostLoadMap
	// Flags: [Native|Public]
	// Offset: 0x4e77034
	// Params: [ Num(1) Size(0x8) ]
	void PostLoadMap(struct UWorld* World);
};

// Object: Class MFWeakNetwork.MFWeakNetworkStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFWeakNetworkStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFWeakNetworkStatics, "MFWeakNetworkStatics")

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.UseNewSocketReconnect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4e77294
	// Params: [ Num(1) Size(0x8) ]
	static void UseNewSocketReconnect(struct UObject* WorldContextObject);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.SetNotSendCloseBunchEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97f1420
	// Params: [ Num(2) Size(0x9) ]
	static void SetNotSendCloseBunchEnable(struct UObject* WorldContextObject, bool Enable);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.SetAsyncLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x981d844
	// Params: [ Num(2) Size(0x9) ]
	static void SetAsyncLoad(struct UObject* WorldContextObject, bool bEnable);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.IsPlayerReconnecting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4e771e8
	// Params: [ Num(2) Size(0x9) ]
	static bool IsPlayerReconnecting(struct APlayerController* PC);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.HaveTickingChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4e770fc
	// Params: [ Num(3) Size(0xD) ]
	static bool HaveTickingChannel(struct UWorld* World, int32_t Priority);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.GetSingleReconnectTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x95ac05c
	// Params: [ Num(2) Size(0xC) ]
	static float GetSingleReconnectTime(struct UObject* WorldContextObject);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.GetSingleMaxReconnectCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x95a3de4
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetSingleMaxReconnectCount(struct UObject* WorldContextObject);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.GetNetActorStatisDataTwo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x983aefc
	// Params: [ Num(4) Size(0x14) ]
	static void GetNetActorStatisDataTwo(struct UWorld* World, float& SpawnAverageTime, int32_t& DirectSpawnNum, float& AsyncAverageTime);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.GetNetActorStatisData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x983023c
	// Params: [ Num(5) Size(0x18) ]
	static void GetNetActorStatisData(struct UWorld* World, int32_t& SpawnNum, int32_t& MaxDelayTime, int32_t& MaxAsyncTime, int32_t& MaxNetActor);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.GetMaxReconnectCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x95a7680
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetMaxReconnectCount(struct UObject* WorldContextObject);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.GetLoadingReportData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9826ac8
	// Params: [ Num(5) Size(0x18) ]
	static void GetLoadingReportData(struct UWorld* World, int32_t& TickingChannelNum, int32_t& LoadSeconds, int32_t& LoadedTickNum, float& SpawnAverageTime);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.CloseConnection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9841750
	// Params: [ Num(1) Size(0x8) ]
	static void CloseConnection(struct UWorld* World);

	// Object: Function MFWeakNetwork.MFWeakNetworkStatics.BeginPackageMapTimeStatis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9810f84
	// Params: [ Num(1) Size(0x8) ]
	static void BeginPackageMapTimeStatis(struct UObject* WorldContextObject);
};

// Object: Class MFWeakNetwork.MFWeakNetworkTypes
// Size: 0x28 (Inherited: 0x28)
struct UMFWeakNetworkTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFWeakNetworkTypes, "MFWeakNetworkTypes")
};

} // namespace SDK
