#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Login
// Enums: 0
// Structs: 0
// Classes: 1

enum class EEndPlayReason : uint8_t;
struct UTextureCube;
struct ALogin_C;

// Object: BlueprintGeneratedClass Login.Login_C
// Size: 0x390 (Inherited: 0x378)
struct ALogin_C : ALevelScriptActor
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x8)
	struct TArray<struct UTextureCube*> TempCubeRefs; // 0x380(0x10)


	// Object: Function Login.Login_C.ReceiveEndPlay
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

	// Object: Function Login.Login_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveBeginPlay();

	// Object: Function Login.Login_C.ExecuteUbergraph_Login
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_Login(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(ALogin_C, "Login_C")

};

} // namespace SDK
