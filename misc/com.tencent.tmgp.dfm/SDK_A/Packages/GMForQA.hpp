#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPTools.hpp"

namespace SDK
{

// Package: GMForQA
// Enums: 0
// Structs: 0
// Classes: 2

struct UGMForQASubsystem;
struct UQAUIDemo;

// Object: Class GMForQA.GMForQASubsystem
// Size: 0x30 (Inherited: 0x30)
struct UGMForQASubsystem : UGameInstanceSubsystem
{	DEFINE_UE_CLASS_HELPERS(UGMForQASubsystem, "GMForQASubsystem")

};

// Object: Class GMForQA.QAUIDemo
// Size: 0x50 (Inherited: 0x50)
struct UQAUIDemo : UGPToolBase
{	DEFINE_UE_CLASS_HELPERS(UQAUIDemo, "QAUIDemo")

};

} // namespace SDK
