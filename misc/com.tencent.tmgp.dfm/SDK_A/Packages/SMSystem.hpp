#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: SMSystem
// Enums: 3
// Structs: 28
// Classes: 20

struct UActorComponent;
struct UTexture2D;
struct FSMInfo_Base;
struct FSMTransitionInfo;
struct FSMStateInfo;
struct FSMExposedFunctionHandler;
struct FSMNode_Base;
struct FSMGraphProperty_Base;
struct FSMState_Base;
struct FSMConduit;
struct FSMGraphProperty;
struct FSMRepStateChangeNumInfo;
struct FSMRepStateInfo;
struct FSMGuidMap;
struct FSMDebugStateMachine;
struct FSMNetworkedTransaction;
struct FSMNodeDescription;
struct FSMConnectionValidator;
struct FSMStateMachineNodePlacementValidator;
struct FSMNodeClassRule;
struct FSMStateClassRule;
struct FSMStateConnectionValidator;
struct FSMStateMachineClassRule;
struct FSMTransitionConnectionValidator;
struct FSMNodeConnectionRule;
struct FSMNodeWidgetInfo;
struct FSMTextDisplayWidgetInfo;
struct FSMState;
struct FSMStateMachine;
struct FSMTransition;
struct ISMInstanceInterface;
struct ISMStateMachineInterface;
struct ISMStateMachineNetworkedInterface;
struct USMBlueprint;
struct USMNodeBlueprint;
struct USMBlueprintGeneratedClass;
struct USMNodeBlueprintGeneratedClass;
struct USMNodeInstance;
struct USMStateInstance_Base;
struct USMConduitInstance;
struct USMInstance;
struct USMNodeArrayLibrary;
struct USMStateInstance;
struct USMActionInstance;
struct USMStateMachineComponent;
struct USMStateMachineInstance;
struct USMTransitionInstance;
struct USMBlueprintUtils;
struct Default__SMBlueprintGeneratedClass;
struct Default__SMNodeBlueprintGeneratedClass;

// Object: Enum SMSystem.ESMNetworkConfigurationType
enum class ESMNetworkConfigurationType : uint8_t
{
	SM_Client = 0,
	SM_Server = 1,
	SM_ClientAndServer = 2,
	SM_MAX = 3
};

// Object: Enum SMSystem.ESMTransactionType
enum class ESMTransactionType : uint8_t
{
	SM_Transition = 0,
	SM_State = 1,
	SM_MAX = 2
};

// Object: Enum SMSystem.ESMConditionalEvaluationType
enum class ESMConditionalEvaluationType : uint8_t
{
	SM_Graph = 0,
	SM_NodeInstance = 1,
	SM_AlwaysFalse = 2,
	SM_AlwaysTrue = 3,
	SM_MAX = 4
};

// Object: ScriptStruct SMSystem.SMInfo_Base
// Size: 0x60 (Inherited: 0x0)
struct FSMInfo_Base
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FString NodeName; // 0x8(0x10)
	struct FGuid Guid; // 0x18(0x10)
	struct FGuid OwnerGuid; // 0x28(0x10)
	struct FGuid NodeGuid; // 0x38(0x10)
	struct FGuid OwnerNodeGuid; // 0x48(0x10)
	struct USMNodeInstance* NodeInstance; // 0x58(0x8)
};

// Object: ScriptStruct SMSystem.SMTransitionInfo
// Size: 0x90 (Inherited: 0x60)
struct FSMTransitionInfo : FSMInfo_Base
{
	struct FGuid FromStateGuid; // 0x60(0x10)
	struct FGuid ToStateGuid; // 0x70(0x10)
	int32_t Priority; // 0x80(0x4)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
};

// Object: ScriptStruct SMSystem.SMStateInfo
// Size: 0x80 (Inherited: 0x60)
struct FSMStateInfo : FSMInfo_Base
{
	struct TArray<struct FSMTransitionInfo> OutgoingTransitions; // 0x60(0x10)
	uint8_t bIsEndState : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0xF]; // 0x71(0xF)
};

// Object: ScriptStruct SMSystem.SMExposedFunctionHandler
// Size: 0x20 (Inherited: 0x0)
struct FSMExposedFunctionHandler
{
	struct FName BoundFunction; // 0x0(0x8)
	struct UFunction* Function; // 0x8(0x8)
	struct UObject* OwnerObject; // 0x10(0x8)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct SMSystem.SMNode_Base
// Size: 0x118 (Inherited: 0x0)
struct FSMNode_Base
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FSMExposedFunctionHandler GraphEvaluator; // 0x8(0x20)
	float TimeInState; // 0x28(0x4)
	uint8_t bIsInEndState : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t bHasUpdated : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
	struct TArray<struct FSMExposedFunctionHandler> TransitionInitializedGraphEvaluators; // 0x30(0x10)
	struct TArray<struct FSMExposedFunctionHandler> TransitionShutdownGraphEvaluators; // 0x40(0x10)
	int32_t DuplicateId; // 0x50(0x4)
	struct FGuid Guid; // 0x54(0x10)
	struct FGuid OwnerGuid; // 0x64(0x10)
	struct FGuid PathGuid; // 0x74(0x10)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
	struct FString NodeName; // 0x90(0x10)
	struct FName TemplateName; // 0xA0(0x8)
	struct TArray<struct FName> StackTemplateNames; // 0xA8(0x10)
	struct TArray<struct USMNodeInstance*> StackNodeInstances; // 0xB8(0x10)
	struct TArray<struct USMActionInstance*> StackActionInstances; // 0xC8(0x10)
	struct USMInstance* OwningInstance; // 0xD8(0x8)
	struct USMNodeInstance* NodeInstance; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x10]; // 0xE8(0x10)
	struct TArray<struct FSMGraphProperty_Base> VariableGraphProperties; // 0xF8(0x10)
	struct UObject* NodeInstanceClass; // 0x108(0x8)
	uint8_t Pad_0x110[0x8]; // 0x110(0x8)
};

// Object: ScriptStruct SMSystem.SMGraphProperty_Base
// Size: 0x110 (Inherited: 0x0)
struct FSMGraphProperty_Base
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FSMExposedFunctionHandler GraphEvaluator; // 0x8(0x20)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FName VariableName; // 0x30(0x8)
	struct FEdGraphPinType VariableType; // 0x38(0x58)
	struct FMemberReference MemberReference; // 0x90(0x38)
	uint8_t bIsInArray : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x3]; // 0xC9(0x3)
	struct FGuid Guid; // 0xCC(0x10)
	struct FGuid GuidUnmodified; // 0xDC(0x10)
	struct FGuid OwnerGuid; // 0xEC(0x10)
	struct FGuid TemplateGuid; // 0xFC(0x10)
	int32_t GuidIndex; // 0x10C(0x4)
};

// Object: ScriptStruct SMSystem.SMState_Base
// Size: 0x180 (Inherited: 0x118)
struct FSMState_Base : FSMNode_Base
{
	uint8_t bIsRootNode : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t bIgnoreStateReplicate : 1; // 0x119(0x1), Mask(0x1)
	uint8_t BitPad_0x119_1 : 7; // 0x119(0x1)
	uint8_t bIgnoreClientTickAdd : 1; // 0x11A(0x1), Mask(0x1)
	uint8_t BitPad_0x11A_1 : 7; // 0x11A(0x1)
	uint8_t bIgnoreServerTickAdd : 1; // 0x11B(0x1), Mask(0x1)
	uint8_t BitPad_0x11B_1 : 7; // 0x11B(0x1)
	int32_t KeyStateAddNumServer; // 0x11C(0x4)
	uint8_t Pad_0x120[0x4]; // 0x120(0x4)
	uint8_t bAlwaysUpdate : 1; // 0x124(0x1), Mask(0x1)
	uint8_t BitPad_0x124_1 : 7; // 0x124(0x1)
	uint8_t bEvalTransitionsOnStart : 1; // 0x125(0x1), Mask(0x1)
	uint8_t BitPad_0x125_1 : 7; // 0x125(0x1)
	uint8_t bDisableTickTransitionEvaluation : 1; // 0x126(0x1), Mask(0x1)
	uint8_t BitPad_0x126_1 : 7; // 0x126(0x1)
	uint8_t bStayActiveOnStateChange : 1; // 0x127(0x1), Mask(0x1)
	uint8_t BitPad_0x127_1 : 7; // 0x127(0x1)
	uint8_t bAllowParallelReentry : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x57]; // 0x129(0x57)
};

// Object: ScriptStruct SMSystem.SMConduit
// Size: 0x188 (Inherited: 0x180)
struct FSMConduit : FSMState_Base
{
	uint8_t bCanEnterTransition : 1; // 0x180(0x1), Mask(0x1)
	uint8_t BitPad_0x180_1 : 7; // 0x180(0x1)
	uint8_t bCanEvaluate : 1; // 0x181(0x1), Mask(0x1)
	uint8_t BitPad_0x181_1 : 7; // 0x181(0x1)
	uint8_t bEvalWithTransitions : 1; // 0x182(0x1), Mask(0x1)
	uint8_t BitPad_0x182_1 : 7; // 0x182(0x1)
	uint8_t Pad_0x183[0x5]; // 0x183(0x5)
};

// Object: ScriptStruct SMSystem.SMGraphProperty
// Size: 0x110 (Inherited: 0x110)
struct FSMGraphProperty : FSMGraphProperty_Base
{
};

// Object: ScriptStruct SMSystem.SMRepStateChangeNumInfo
// Size: 0x2 (Inherited: 0x0)
struct FSMRepStateChangeNumInfo
{
	uint8_t StatesSimpleId; // 0x0(0x1)
	uint8_t StatesAddNum; // 0x1(0x1)
};

// Object: ScriptStruct SMSystem.SMRepStateInfo
// Size: 0x20 (Inherited: 0x0)
struct FSMRepStateInfo
{
	uint64_t StatesA; // 0x0(0x8)
	uint64_t StatesB; // 0x8(0x8)
	uint64_t StatesC; // 0x10(0x8)
	uint64_t StatesD; // 0x18(0x8)
};

// Object: ScriptStruct SMSystem.SMGuidMap
// Size: 0x50 (Inherited: 0x0)
struct FSMGuidMap
{
	struct TMap<struct FGuid, struct FGuid> NodeToPathGuids; // 0x0(0x50)
};

// Object: ScriptStruct SMSystem.SMDebugStateMachine
// Size: 0x1 (Inherited: 0x0)
struct FSMDebugStateMachine
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SMSystem.SMNetworkedTransaction
// Size: 0x40 (Inherited: 0x0)
struct FSMNetworkedTransaction
{
	struct FGuid StateMachineGuid; // 0x0(0x10)
	struct FGuid BaseGuid; // 0x10(0x10)
	struct FGuid TransactionGuid; // 0x20(0x10)
	struct FDateTime Timestamp; // 0x30(0x8)
	uint8_t TransactionType : 1; // 0x38(0x1), Mask(0x1)
	uint8_t bIsActive : 1; // 0x38(0x1), Mask(0x2)
	uint8_t BitPad_0x38_2 : 6; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct SMSystem.SMNodeDescription
// Size: 0x38 (Inherited: 0x0)
struct FSMNodeDescription
{
	struct FName Name; // 0x0(0x8)
	struct FText Category; // 0x8(0x18)
	struct FText Description; // 0x20(0x18)
};

// Object: ScriptStruct SMSystem.SMConnectionValidator
// Size: 0x1 (Inherited: 0x0)
struct FSMConnectionValidator
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SMSystem.SMStateMachineNodePlacementValidator
// Size: 0x18 (Inherited: 0x1)
struct FSMStateMachineNodePlacementValidator : FSMConnectionValidator
{
	struct TArray<struct FSMStateClassRule> AllowedStates; // 0x0(0x10)
	uint8_t bAllowReferences : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bAllowParents : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_2 : 6; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct SMSystem.SMNodeClassRule
// Size: 0x10 (Inherited: 0x0)
struct FSMNodeClassRule
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t bIncludeChildren : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bNOT : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct SMSystem.SMStateClassRule
// Size: 0x38 (Inherited: 0x10)
struct FSMStateClassRule : FSMNodeClassRule
{
	struct TSoftClassPtr<struct USMStateInstance_Base*> StateClass; // 0x10(0x28)
};

// Object: ScriptStruct SMSystem.SMStateConnectionValidator
// Size: 0x30 (Inherited: 0x1)
struct FSMStateConnectionValidator : FSMConnectionValidator
{
	struct TArray<struct FSMStateClassRule> AllowedInboundStates; // 0x0(0x10)
	struct TArray<struct FSMStateClassRule> AllowedOutboundStates; // 0x10(0x10)
	struct TArray<struct FSMStateMachineClassRule> AllowedInStateMachines; // 0x20(0x10)
};

// Object: ScriptStruct SMSystem.SMStateMachineClassRule
// Size: 0x38 (Inherited: 0x10)
struct FSMStateMachineClassRule : FSMNodeClassRule
{
	struct TSoftClassPtr<struct USMStateMachineInstance*> StateMachineClass; // 0x10(0x28)
};

// Object: ScriptStruct SMSystem.SMTransitionConnectionValidator
// Size: 0x10 (Inherited: 0x1)
struct FSMTransitionConnectionValidator : FSMConnectionValidator
{
	struct TArray<struct FSMNodeConnectionRule> AllowedConnections; // 0x0(0x10)
};

// Object: ScriptStruct SMSystem.SMNodeConnectionRule
// Size: 0xA8 (Inherited: 0x0)
struct FSMNodeConnectionRule
{
	struct FSMStateClassRule FromState; // 0x0(0x38)
	struct FSMStateClassRule ToState; // 0x38(0x38)
	struct FSMStateMachineClassRule InStateMachine; // 0x70(0x38)
};

// Object: ScriptStruct SMSystem.SMNodeWidgetInfo
// Size: 0x1 (Inherited: 0x0)
struct FSMNodeWidgetInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SMSystem.SMTextDisplayWidgetInfo
// Size: 0x1 (Inherited: 0x1)
struct FSMTextDisplayWidgetInfo : FSMNodeWidgetInfo
{
};

// Object: ScriptStruct SMSystem.SMState
// Size: 0x1A0 (Inherited: 0x180)
struct FSMState : FSMState_Base
{
	struct FSMExposedFunctionHandler EndStateGraphEvaluator; // 0x180(0x20)
};

// Object: ScriptStruct SMSystem.SMStateMachine
// Size: 0x338 (Inherited: 0x180)
struct FSMStateMachine : FSMState_Base
{
	uint8_t bHasAdditionalLogic : 1; // 0x180(0x1), Mask(0x1)
	uint8_t BitPad_0x180_1 : 7; // 0x180(0x1)
	uint8_t bReuseCurrentState : 1; // 0x181(0x1), Mask(0x1)
	uint8_t BitPad_0x181_1 : 7; // 0x181(0x1)
	uint8_t bOnlyReuseIfNotEndState : 1; // 0x182(0x1), Mask(0x1)
	uint8_t BitPad_0x182_1 : 7; // 0x182(0x1)
	uint8_t bAllowIndependentTick : 1; // 0x183(0x1), Mask(0x1)
	uint8_t BitPad_0x183_1 : 7; // 0x183(0x1)
	uint8_t bCallReferenceTickOnManualUpdate : 1; // 0x184(0x1), Mask(0x1)
	uint8_t BitPad_0x184_1 : 7; // 0x184(0x1)
	uint8_t bReuseReference : 1; // 0x185(0x1), Mask(0x1)
	uint8_t BitPad_0x185_1 : 7; // 0x185(0x1)
	uint8_t bWaitForEndState : 1; // 0x186(0x1), Mask(0x1)
	uint8_t BitPad_0x186_1 : 7; // 0x186(0x1)
	uint8_t Pad_0x187[0x1]; // 0x187(0x1)
	struct FSMExposedFunctionHandler EndStateGraphEvaluator; // 0x188(0x20)
	uint8_t Pad_0x1A8[0x28]; // 0x1A8(0x28)
	struct TMap<struct FGuid, struct FSMNetworkedTransaction> PreviousTransactions; // 0x1D0(0x50)
	uint8_t Pad_0x220[0xE0]; // 0x220(0xE0)
	struct UObject* ReferencedStateMachineClass; // 0x300(0x8)
	struct FName ReferencedTemplateName; // 0x308(0x8)
	struct USMInstance* ReferencedStateMachine; // 0x310(0x8)
	struct USMInstance* IsReferencedByInstance; // 0x318(0x8)
	uint8_t Pad_0x320[0x18]; // 0x320(0x18)
};

// Object: ScriptStruct SMSystem.SMTransition
// Size: 0x160 (Inherited: 0x118)
struct FSMTransition : FSMNode_Base
{
	uint8_t Pad_0x118[0x4]; // 0x118(0x4)
	int32_t Priority; // 0x11C(0x4)
	uint8_t bCanEnterTransition : 1; // 0x120(0x1), Mask(0x1)
	uint8_t BitPad_0x120_1 : 7; // 0x120(0x1)
	uint8_t bCanEnterTransitionFromEvent : 1; // 0x121(0x1), Mask(0x1)
	uint8_t BitPad_0x121_1 : 7; // 0x121(0x1)
	uint8_t bIsEvaluating : 1; // 0x122(0x1), Mask(0x1)
	uint8_t BitPad_0x122_1 : 7; // 0x122(0x1)
	uint8_t bCanEvaluate : 1; // 0x123(0x1), Mask(0x1)
	uint8_t BitPad_0x123_1 : 7; // 0x123(0x1)
	uint8_t bCanEvaluateFromEvent : 1; // 0x124(0x1), Mask(0x1)
	uint8_t BitPad_0x124_1 : 7; // 0x124(0x1)
	uint8_t Pad_0x125[0x3]; // 0x125(0x3)
	struct FGuid FromGuid; // 0x128(0x10)
	struct FGuid ToGuid; // 0x138(0x10)
	uint8_t bRunParallel : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t bEvalIfNextStateActive : 1; // 0x149(0x1), Mask(0x1)
	uint8_t BitPad_0x149_1 : 7; // 0x149(0x1)
	uint8_t bCanEvalWithStartState : 1; // 0x14A(0x1), Mask(0x1)
	uint8_t BitPad_0x14A_1 : 7; // 0x14A(0x1)
	uint8_t bAlwaysFalse : 1; // 0x14B(0x1), Mask(0x1)
	uint8_t BitPad_0x14B_1 : 7; // 0x14B(0x1)
	ESMConditionalEvaluationType ConditionalEvaluationType; // 0x14C(0x1)
	uint8_t Pad_0x14D[0x13]; // 0x14D(0x13)
};

// Object: Class SMSystem.SMInstanceInterface
// Size: 0x28 (Inherited: 0x28)
struct ISMInstanceInterface : IInterface
{

	// Object: Function SMSystem.SMInstanceInterface.GetContext
	// Flags: [Native|Public|Const]
	// Offset: 0x7768ddc
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetContext();
	DEFINE_UE_CLASS_HELPERS(ISMInstanceInterface, "SMInstanceInterface")

};

// Object: Class SMSystem.SMStateMachineInterface
// Size: 0x28 (Inherited: 0x28)
struct ISMStateMachineInterface : IInterface
{

	// Object: Function SMSystem.SMStateMachineInterface.Update
	// Flags: [Native|Public]
	// Offset: 0x776900c
	// Params: [ Num(1) Size(0x4) ]
	void Update(float DeltaSeconds);

	// Object: Function SMSystem.SMStateMachineInterface.Stop
	// Flags: [Native|Public]
	// Offset: 0x7768ff0
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function SMSystem.SMStateMachineInterface.Start
	// Flags: [Native|Public]
	// Offset: 0x7768fd4
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function SMSystem.SMStateMachineInterface.Shutdown
	// Flags: [Native|Public]
	// Offset: 0x7768fb8
	// Params: [ Num(0) Size(0x0) ]
	void Shutdown();

	// Object: Function SMSystem.SMStateMachineInterface.Initialize
	// Flags: [Native|Public]
	// Offset: 0x7768ed4
	// Params: [ Num(2) Size(0x10) ]
	void Initialize(struct UObject* Context, struct UActorComponent* Component);
	DEFINE_UE_CLASS_HELPERS(ISMStateMachineInterface, "SMStateMachineInterface")

};

// Object: Class SMSystem.SMStateMachineNetworkedInterface
// Size: 0x28 (Inherited: 0x28)
struct ISMStateMachineNetworkedInterface : IInterface
{

	// Object: Function SMSystem.SMStateMachineNetworkedInterface.ShouldReplicateStates
	// Flags: [Native|Public|Const]
	// Offset: 0x7769238
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldReplicateStates();

	// Object: Function SMSystem.SMStateMachineNetworkedInterface.ProcessTransaction
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x7769174
	// Params: [ Num(1) Size(0x10) ]
	void ProcessTransaction(const struct TArray<struct FSMNetworkedTransaction>& Transactions);
	DEFINE_UE_CLASS_HELPERS(ISMStateMachineNetworkedInterface, "SMStateMachineNetworkedInterface")

};

// Object: Class SMSystem.SMBlueprint
// Size: 0xA8 (Inherited: 0xA0)
struct USMBlueprint : UBlueprint
{
	int32_t AssetVersion; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	DEFINE_UE_CLASS_HELPERS(USMBlueprint, "SMBlueprint")

};

// Object: Class SMSystem.SMNodeBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct USMNodeBlueprint : UBlueprint
{	DEFINE_UE_CLASS_HELPERS(USMNodeBlueprint, "SMNodeBlueprint")

};

// Object: Class SMSystem.SMBlueprintGeneratedClass
// Size: 0x390 (Inherited: 0x380)
struct USMBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	struct FGuid RootGuid; // 0x380(0x10)
	DEFINE_UE_CLASS_HELPERS(USMBlueprintGeneratedClass, "SMBlueprintGeneratedClass")

};

// Object: Class SMSystem.SMNodeBlueprintGeneratedClass
// Size: 0x380 (Inherited: 0x380)
struct USMNodeBlueprintGeneratedClass : UBlueprintGeneratedClass
{	DEFINE_UE_CLASS_HELPERS(USMNodeBlueprintGeneratedClass, "SMNodeBlueprintGeneratedClass")

};

// Object: Class SMSystem.SMNodeInstance
// Size: 0x80 (Inherited: 0x28)
struct USMNodeInstance : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint8_t bAutoEvalExposedProperties : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct TArray<struct FSMGraphProperty> ExposedPropertyOverrides; // 0x38(0x10)
	struct UTexture2D* NodeIcon; // 0x48(0x8)
	struct FVector2D NodeIconSize; // 0x50(0x8)
	struct FLinearColor NodeIconTintColor; // 0x58(0x10)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FGuid TemplateGuid; // 0x70(0x10)


	// Object: Function SMSystem.SMNodeInstance.IsInEndState
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e18c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInEndState();

	// Object: Function SMSystem.SMNodeInstance.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e154
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsActive();

	// Object: Function SMSystem.SMNodeInstance.HasUpdated
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e114
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasUpdated();

	// Object: Function SMSystem.SMNodeInstance.GetTimeInState
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e0d8
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeInState();

	// Object: Function SMSystem.SMNodeInstance.GetStateMachineInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e024
	// Params: [ Num(2) Size(0x10) ]
	struct USMInstance* GetStateMachineInstance(uint8_t bTopMostInstance);

	// Object: Function SMSystem.SMNodeInstance.GetOwningStateMachineNodeInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776dff0
	// Params: [ Num(1) Size(0x8) ]
	struct USMStateMachineInstance* GetOwningStateMachineNodeInstance();

	// Object: Function SMSystem.SMNodeInstance.GetNodeName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776df6c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNodeName();

	// Object: Function SMSystem.SMNodeInstance.GetNodeIconTintColor
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x776df2c
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetNodeIconTintColor();

	// Object: Function SMSystem.SMNodeInstance.GetNodeIconSize
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x776def0
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetNodeIconSize();

	// Object: Function SMSystem.SMNodeInstance.GetNodeIcon
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x776deb4
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture2D* GetNodeIcon();

	// Object: Function SMSystem.SMNodeInstance.GetGuid
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776de7c
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetGuid();

	// Object: Function SMSystem.SMNodeInstance.GetContext
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776de40
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetContext();

	// Object: Function SMSystem.SMNodeInstance.EvaluateGraphProperties
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776de2c
	// Params: [ Num(0) Size(0x0) ]
	void EvaluateGraphProperties();

	// Object: Function SMSystem.SMNodeInstance.ConstructionScript
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x776de10
	// Params: [ Num(0) Size(0x0) ]
	void ConstructionScript();
	DEFINE_UE_CLASS_HELPERS(USMNodeInstance, "SMNodeInstance")

};

// Object: Class SMSystem.SMStateInstance_Base
// Size: 0xC8 (Inherited: 0x80)
struct USMStateInstance_Base : USMNodeInstance
{
	uint8_t bEvalGraphsOnStart : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t bEvalGraphsOnUpdate : 1; // 0x81(0x1), Mask(0x1)
	uint8_t BitPad_0x81_1 : 7; // 0x81(0x1)
	uint8_t bEvalGraphsOnEnd : 1; // 0x82(0x1), Mask(0x1)
	uint8_t BitPad_0x82_1 : 7; // 0x82(0x1)
	uint8_t bEvalGraphsOnInitialize : 1; // 0x83(0x1), Mask(0x1)
	uint8_t BitPad_0x83_1 : 7; // 0x83(0x1)
	uint8_t bEvalGraphsOnRootStateMachineStart : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t bEvalGraphsOnRootStateMachineStop : 1; // 0x85(0x1), Mask(0x1)
	uint8_t BitPad_0x85_1 : 7; // 0x85(0x1)
	uint8_t bEnableStateBlueprintTick : 1; // 0x86(0x1), Mask(0x1)
	uint8_t BitPad_0x86_1 : 7; // 0x86(0x1)
	uint8_t bIgnoreStateReplicate : 1; // 0x87(0x1), Mask(0x1)
	uint8_t BitPad_0x87_1 : 7; // 0x87(0x1)
	uint8_t bIgnoreClientTickAdd : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bIgnoreServerTickAdd : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t Pad_0x8A[0x2]; // 0x8A(0x2)
	int32_t KeyStateAddNumServer; // 0x8C(0x4)
	uint8_t bAlwaysUpdate : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t bDisableTickTransitionEvaluation : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t bDefaultToParallel : 1; // 0x92(0x1), Mask(0x1)
	uint8_t BitPad_0x92_1 : 7; // 0x92(0x1)
	uint8_t bAllowParallelReentry : 1; // 0x93(0x1), Mask(0x1)
	uint8_t BitPad_0x93_1 : 7; // 0x93(0x1)
	uint8_t bStayActiveOnStateChange : 1; // 0x94(0x1), Mask(0x1)
	uint8_t BitPad_0x94_1 : 7; // 0x94(0x1)
	uint8_t bEvalTransitionsOnStart : 1; // 0x95(0x1), Mask(0x1)
	uint8_t BitPad_0x95_1 : 7; // 0x95(0x1)
	uint8_t bExcludeFromAnyState : 1; // 0x96(0x1), Mask(0x1)
	uint8_t BitPad_0x96_1 : 7; // 0x96(0x1)
	uint8_t Pad_0x97[0x1]; // 0x97(0x1)
	struct FMulticastInlineDelegate OnStateBeginEvent; // 0x98(0x10)
	struct FMulticastInlineDelegate OnStateUpdateEvent; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnStateEndEvent; // 0xB8(0x10)


	// Object: Function SMSystem.SMStateInstance_Base.SwitchToLinkedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776e924
	// Params: [ Num(3) Size(0xA) ]
	uint8_t SwitchToLinkedState(struct USMStateInstance_Base* NextStateInstance, uint8_t bRequireTransitionToPass);

	// Object: Function SMSystem.SMStateInstance_Base.SetActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776e878
	// Params: [ Num(1) Size(0x1) ]
	void SetActive(uint8_t bValue);

	// Object: Function SMSystem.SMStateInstance_Base.OnStateEnd
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x776e85c
	// Params: [ Num(0) Size(0x0) ]
	void OnStateEnd();

	// Object: Function SMSystem.SMStateInstance_Base.OnStateBegin
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x776e840
	// Params: [ Num(0) Size(0x0) ]
	void OnStateBegin();

	// Object: Function SMSystem.SMStateInstance_Base.IsStateMachine
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e808
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStateMachine();

	// Object: Function SMSystem.SMStateInstance_Base.GetTransitionToTake
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e7d4
	// Params: [ Num(1) Size(0x8) ]
	struct USMTransitionInstance* GetTransitionToTake();

	// Object: Function SMSystem.SMStateInstance_Base.GetTransitionByIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e728
	// Params: [ Num(2) Size(0x10) ]
	struct USMTransitionInstance* GetTransitionByIndex(int32_t Index);

	// Object: Function SMSystem.SMStateInstance_Base.GetStateInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e648
	// Params: [ Num(1) Size(0x80) ]
	void GetStateInfo(struct FSMStateInfo& State);

	// Object: Function SMSystem.SMStateInstance_Base.GetOutgoingTransitions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e534
	// Params: [ Num(3) Size(0x12) ]
	uint8_t GetOutgoingTransitions(struct TArray<struct USMTransitionInstance*>& Transitions, uint8_t bExcludeAlwaysFalse);

	// Object: Function SMSystem.SMStateInstance_Base.GetNextStateByTransitionIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e488
	// Params: [ Num(2) Size(0x10) ]
	struct USMStateInstance_Base* GetNextStateByTransitionIndex(int32_t Index);

	// Object: Function SMSystem.SMStateInstance_Base.GetIncomingTransitions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776e374
	// Params: [ Num(3) Size(0x12) ]
	uint8_t GetIncomingTransitions(struct TArray<struct USMTransitionInstance*>& Transitions, uint8_t bExcludeAlwaysFalse);

	// Object: Function SMSystem.SMStateInstance_Base.EvaluateTransitions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776e360
	// Params: [ Num(0) Size(0x0) ]
	void EvaluateTransitions();
	DEFINE_UE_CLASS_HELPERS(USMStateInstance_Base, "SMStateInstance_Base")

};

// Object: Class SMSystem.SMConduitInstance
// Size: 0xD0 (Inherited: 0xC8)
struct USMConduitInstance : USMStateInstance_Base
{
	uint8_t bEvalWithTransitions : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t bCanEvaluate : 1; // 0xC9(0x1), Mask(0x1)
	uint8_t BitPad_0xC9_1 : 7; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x6]; // 0xCA(0x6)


	// Object: Function SMSystem.SMConduitInstance.SetCanEvaluate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7769618
	// Params: [ Num(1) Size(0x1) ]
	void SetCanEvaluate(uint8_t bValue);

	// Object: Function SMSystem.SMConduitInstance.GetCanEvaluate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x77695e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetCanEvaluate();

	// Object: Function SMSystem.SMConduitInstance.CanEnterTransition
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x77695a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanEnterTransition();
	DEFINE_UE_CLASS_HELPERS(USMConduitInstance, "SMConduitInstance")

};

// Object: Class SMSystem.SMInstance
// Size: 0x6B0 (Inherited: 0x28)
struct USMInstance : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	struct FGuid RootStateMachineGuid; // 0x40(0x10)
	struct FMulticastInlineDelegate OnStateMachineInitializedEvent; // 0x50(0x10)
	struct FMulticastInlineDelegate OnStateMachineStartedEvent; // 0x60(0x10)
	struct FMulticastInlineDelegate OnStateMachineUpdatedEvent; // 0x70(0x10)
	struct FMulticastInlineDelegate OnStateMachineStoppedEvent; // 0x80(0x10)
	struct FMulticastInlineDelegate OnStateMachineTransitionTakenEvent; // 0x90(0x10)
	struct FMulticastInlineDelegate OnStateMachineStateChangedEvent; // 0xA0(0x10)
	struct TScriptInterface<ISMStateMachineNetworkedInterface> ServerStateMachine; // 0xB0(0x10)
	uint8_t Pad_0xC0[0x150]; // 0xC0(0x150)
	struct TArray<struct FSMNetworkedTransaction> ActiveTransactions; // 0x210(0x10)
	struct FSMStateMachine RootStateMachine; // 0x220(0x338)
	struct UObject* R_StateMachineContext; // 0x558(0x8)
	struct TArray<struct FGuid> R_ActiveStates; // 0x560(0x10)
	struct TArray<struct FGuid> RootStatePathGuidArray; // 0x570(0x10)
	struct TArray<struct FSMRepStateChangeNumInfo> PackedActiveStateNumInfos; // 0x580(0x10)
	uint8_t Pad_0x590[0x60]; // 0x590(0x60)
	struct USMInstance* ReferenceOwner; // 0x5F0(0x8)
	struct USMStateMachineInstance* StateMachineClass; // 0x5F8(0x8)
	uint8_t Pad_0x600[0x18]; // 0x600(0x18)
	uint8_t bAutoManageTime : 1; // 0x618(0x1), Mask(0x1)
	uint8_t BitPad_0x618_1 : 7; // 0x618(0x1)
	uint8_t bStopOnEndState : 1; // 0x619(0x1), Mask(0x1)
	uint8_t BitPad_0x619_1 : 7; // 0x619(0x1)
	uint8_t bCanEverTick : 1; // 0x61A(0x1), Mask(0x1)
	uint8_t BitPad_0x61A_1 : 7; // 0x61A(0x1)
	uint8_t bCanEverTickGeneralUpdate : 1; // 0x61B(0x1), Mask(0x1)
	uint8_t BitPad_0x61B_1 : 7; // 0x61B(0x1)
	uint8_t bCanTickWhenPaused : 1; // 0x61C(0x1), Mask(0x1)
	uint8_t BitPad_0x61C_1 : 7; // 0x61C(0x1)
	uint8_t Pad_0x61D[0x3]; // 0x61D(0x3)
	float TickInterval; // 0x620(0x4)
	uint8_t bTickRegistered : 1; // 0x624(0x1), Mask(0x1)
	uint8_t BitPad_0x624_1 : 7; // 0x624(0x1)
	uint8_t bTickBeforeInitialize : 1; // 0x625(0x1), Mask(0x1)
	uint8_t BitPad_0x625_1 : 7; // 0x625(0x1)
	uint8_t bEnableBlueprintTick : 1; // 0x626(0x1), Mask(0x1)
	uint8_t BitPad_0x626_1 : 7; // 0x626(0x1)
	uint8_t bEnable3pLazyInit : 1; // 0x627(0x1), Mask(0x1)
	uint8_t BitPad_0x627_1 : 7; // 0x627(0x1)
	uint8_t bUseCachePathGuid : 1; // 0x628(0x1), Mask(0x1)
	uint8_t BitPad_0x628_1 : 7; // 0x628(0x1)
	uint8_t bUseFastStateRep : 1; // 0x629(0x1), Mask(0x1)
	uint8_t BitPad_0x629_1 : 7; // 0x629(0x1)
	uint8_t bEnableDelayRepForCharacter : 1; // 0x62A(0x1), Mask(0x1)
	uint8_t BitPad_0x62A_1 : 7; // 0x62A(0x1)
	uint8_t Pad_0x62B[0x1]; // 0x62B(0x1)
	float MaxTimeToWaitForUpdate; // 0x62C(0x4)
	float TimeSinceAllowedTick; // 0x630(0x4)
	float bIsProxy; // 0x634(0x4)
	float WorldSeconds; // 0x638(0x4)
	float WorldTimeDelta; // 0x63C(0x4)
	uint8_t bCallTickOnManualUpdate : 1; // 0x640(0x1), Mask(0x1)
	uint8_t BitPad_0x640_1 : 7; // 0x640(0x1)
	uint8_t bIsTicking : 1; // 0x641(0x1), Mask(0x1)
	uint8_t BitPad_0x641_1 : 7; // 0x641(0x1)
	uint8_t bIsUpdating : 1; // 0x642(0x1), Mask(0x1)
	uint8_t BitPad_0x642_1 : 7; // 0x642(0x1)
	uint8_t bCanEvaluateTransitionsLocally : 1; // 0x643(0x1), Mask(0x1)
	uint8_t bCanTakeTransitionsLocally : 1; // 0x643(0x1), Mask(0x2)
	uint8_t bCanExecuteStateLogic : 1; // 0x643(0x1), Mask(0x4)
	uint8_t R_bHasStarted : 1; // 0x643(0x1), Mask(0x8)
	uint8_t BitPad_0x643_4 : 4; // 0x643(0x1)
	uint8_t Pad_0x644[0x4]; // 0x644(0x4)
	struct TMap<struct FGuid, struct FSMGuidMap> RootPathGuidCache; // 0x648(0x50)
	struct TArray<struct UObject*> ReferenceTemplates; // 0x698(0x10)
	float HasAuthority; // 0x6A8(0x4)
	uint8_t Pad_0x6AC[0x4]; // 0x6AC(0x4)


	// Object: Function SMSystem.SMInstance.Update
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x776bb94
	// Params: [ Num(1) Size(0x4) ]
	void Update(float DeltaSeconds);

	// Object: Function SMSystem.SMInstance.TryGetTransitionInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776b9f8
	// Params: [ Num(3) Size(0xA1) ]
	void TryGetTransitionInfo(const struct FGuid& Guid, struct FSMTransitionInfo& TransitionInfo, uint8_t& bSuccess);

	// Object: Function SMSystem.SMInstance.TryGetStateInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776b84c
	// Params: [ Num(3) Size(0x91) ]
	void TryGetStateInfo(const struct FGuid& Guid, struct FSMStateInfo& StateInfo, uint8_t& bSuccess);

	// Object: Function SMSystem.SMInstance.TryGetNestedActiveState
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776b6f8
	// Params: [ Num(2) Size(0x81) ]
	void TryGetNestedActiveState(struct FSMStateInfo& FoundState, uint8_t& bSuccess);

	// Object: Function SMSystem.SMInstance.Tick
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x776b16c
	// Params: [ Num(1) Size(0x4) ]
	void Tick(float DeltaTime);

	// Object: Function SMSystem.SMInstance.Stop
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x776b150
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function SMSystem.SMInstance.StartWithNewContext
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776b0ac
	// Params: [ Num(1) Size(0x8) ]
	void StartWithNewContext(struct UObject* Context);

	// Object: Function SMSystem.SMInstance.Start
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x776b090
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function SMSystem.SMInstance.Shutdown
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x776b074
	// Params: [ Num(0) Size(0x0) ]
	void Shutdown();

	// Object: Function SMSystem.SMInstance.SetTickOnManualUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776afc8
	// Params: [ Num(1) Size(0x1) ]
	void SetTickOnManualUpdate(uint8_t Value);

	// Object: Function SMSystem.SMInstance.SetTickInterval
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776af24
	// Params: [ Num(1) Size(0x4) ]
	void SetTickInterval(float Value);

	// Object: Function SMSystem.SMInstance.SetStopOnEndState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776ae78
	// Params: [ Num(1) Size(0x1) ]
	void SetStopOnEndState(uint8_t Value);

	// Object: Function SMSystem.SMInstance.SetStateMachineClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776add8
	// Params: [ Num(1) Size(0x8) ]
	void SetStateMachineClass(struct USMStateMachineInstance* NewStateMachineClass);

	// Object: Function SMSystem.SMInstance.SetContext
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776ad34
	// Params: [ Num(1) Size(0x8) ]
	void SetContext(struct UObject* Context);

	// Object: Function SMSystem.SMInstance.SetCanTickWhenPaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776ac88
	// Params: [ Num(1) Size(0x1) ]
	void SetCanTickWhenPaused(uint8_t Value);

	// Object: Function SMSystem.SMInstance.SetCanEverTickGeneralUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776abdc
	// Params: [ Num(1) Size(0x1) ]
	void SetCanEverTickGeneralUpdate(uint8_t Value);

	// Object: Function SMSystem.SMInstance.SetCanEverTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776ab30
	// Params: [ Num(1) Size(0x1) ]
	void SetCanEverTick(uint8_t Value);

	// Object: Function SMSystem.SMInstance.SetAutoManageTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x776aa84
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoManageTime(uint8_t Value);

	// Object: Function SMSystem.SMInstance.REP_StartChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x776aa50
	// Params: [ Num(0) Size(0x0) ]
	void REP_StartChanged();

	// Object: Function SMSystem.SMInstance.OnStateMachineUpdate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xef0e230
	// Params: [ Num(1) Size(0x4) ]
	void OnStateMachineUpdate(float DeltaSeconds);

	// Object: Function SMSystem.SMInstance.OnStateMachineTransitionTaken
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0xe7a4414
	// Params: [ Num(1) Size(0x90) ]
	void OnStateMachineTransitionTaken(const struct FSMTransitionInfo& Transition);

	// Object: Function SMSystem.SMInstance.OnStateMachineStop
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xeab0c74
	// Params: [ Num(0) Size(0x0) ]
	void OnStateMachineStop();

	// Object: Function SMSystem.SMInstance.OnStateMachineStateChanged
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0xe2e2858
	// Params: [ Num(2) Size(0x100) ]
	void OnStateMachineStateChanged(const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState);

	// Object: Function SMSystem.SMInstance.OnStateMachineStart
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xeeadfc4
	// Params: [ Num(0) Size(0x0) ]
	void OnStateMachineStart();

	// Object: Function SMSystem.SMInstance.OnStateMachineInitialized
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xed240e4
	// Params: [ Num(0) Size(0x0) ]
	void OnStateMachineInitialized();

	// Object: Function SMSystem.SMInstance.OnRep_RootStatePathGuidArray
	// Flags: [Native|Protected]
	// Offset: 0x776aa34
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RootStatePathGuidArray();

	// Object: Function SMSystem.SMInstance.OnRep_ActiveStateChanges
	// Flags: [Native|Protected]
	// Offset: 0x776aa18
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ActiveStateChanges();

	// Object: Function SMSystem.SMInstance.LoadFromState
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x776a920
	// Params: [ Num(2) Size(0x11) ]
	void LoadFromState(const struct FGuid& FromGuid, uint8_t bAllParents);

	// Object: Function SMSystem.SMInstance.LoadFromMultipleStates
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x776a864
	// Params: [ Num(1) Size(0x10) ]
	void LoadFromMultipleStates(const struct TArray<struct FGuid>& FromGuids);

	// Object: Function SMSystem.SMInstance.LazyInitalize
	// Flags: [Final|Native|Public]
	// Offset: 0x776a788
	// Params: [ Num(2) Size(0x10) ]
	void LazyInitalize(struct UObject* Context, struct UActorComponent* Component);

	// Object: Function SMSystem.SMInstance.IsTickableWhenPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a748
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTickableWhenPaused();

	// Object: Function SMSystem.SMInstance.IsTickable
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a708
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTickable();

	// Object: Function SMSystem.SMInstance.IsInitialized
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a6ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInitialized();

	// Object: Function SMSystem.SMInstance.IsInEndState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a6b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInEndState();

	// Object: Function SMSystem.SMInstance.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a67c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsActive();

	// Object: Function SMSystem.SMInstance.Internal_Update
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x776a5d8
	// Params: [ Num(1) Size(0x4) ]
	void Internal_Update(float DeltaSeconds);

	// Object: Function SMSystem.SMInstance.Internal_EventUpdate
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x776a5c4
	// Params: [ Num(0) Size(0x0) ]
	void Internal_EventUpdate();

	// Object: Function SMSystem.SMInstance.Internal_EventCleanup
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xe662ea0
	// Params: [ Num(1) Size(0x10) ]
	void Internal_EventCleanup(const struct FGuid& NodeGuid);

	// Object: Function SMSystem.SMInstance.Internal_EvaluateAndTakeTransitionChainByGuid
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xe2e0948
	// Params: [ Num(2) Size(0x11) ]
	uint8_t Internal_EvaluateAndTakeTransitionChainByGuid(const struct FGuid& PathGuid);

	// Object: Function SMSystem.SMInstance.Initialize
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x776a4e0
	// Params: [ Num(2) Size(0x10) ]
	void Initialize(struct UObject* Context, struct UActorComponent* Component);

	// Object: Function SMSystem.SMInstance.HasStarted
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a4c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasStarted();

	// Object: Function SMSystem.SMInstance.GetTransitionInstanceByGuid
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a404
	// Params: [ Num(2) Size(0x18) ]
	struct USMTransitionInstance* GetTransitionInstanceByGuid(const struct FGuid& Guid);

	// Object: Function SMSystem.SMInstance.GetTickInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a3e8
	// Params: [ Num(1) Size(0x4) ]
	float GetTickInterval();

	// Object: Function SMSystem.SMInstance.GetStateMachineClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a3cc
	// Params: [ Num(1) Size(0x8) ]
	struct USMStateMachineInstance* GetStateMachineClass();

	// Object: Function SMSystem.SMInstance.GetStateInstanceByGuid
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a310
	// Params: [ Num(2) Size(0x18) ]
	struct USMStateInstance_Base* GetStateInstanceByGuid(const struct FGuid& Guid);

	// Object: Function SMSystem.SMInstance.GetSingleActiveStateInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a25c
	// Params: [ Num(2) Size(0x10) ]
	struct USMStateInstance_Base* GetSingleActiveStateInstance(uint8_t bCheckNested);

	// Object: Function SMSystem.SMInstance.GetSingleActiveStateGuid
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a1a8
	// Params: [ Num(2) Size(0x14) ]
	struct FGuid GetSingleActiveStateGuid(uint8_t bCheckNested);

	// Object: Function SMSystem.SMInstance.GetReferenceOwner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a18c
	// Params: [ Num(1) Size(0x8) ]
	struct USMInstance* GetReferenceOwner();

	// Object: Function SMSystem.SMInstance.GetReferencedInstanceByGuid
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a0d0
	// Params: [ Num(2) Size(0x18) ]
	struct USMInstance* GetReferencedInstanceByGuid(const struct FGuid& Guid);

	// Object: Function SMSystem.SMInstance.GetNestedActiveStateName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a038
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNestedActiveStateName();

	// Object: Function SMSystem.SMInstance.GetNestedActiveStateGuid
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776a004
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetNestedActiveStateGuid();

	// Object: Function SMSystem.SMInstance.GetMasterReferenceOwner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7769fd0
	// Params: [ Num(1) Size(0x8) ]
	struct USMInstance* GetMasterReferenceOwner();

	// Object: Function SMSystem.SMInstance.GetContext
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xedf2370
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetContext();

	// Object: Function SMSystem.SMInstance.GetAllTransitionInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769f14
	// Params: [ Num(1) Size(0x10) ]
	void GetAllTransitionInstances(struct TArray<struct USMTransitionInstance*>& TransitionInstances);

	// Object: Function SMSystem.SMInstance.GetAllStateInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769e58
	// Params: [ Num(1) Size(0x10) ]
	void GetAllStateInstances(struct TArray<struct USMStateInstance_Base*>& StateInstances);

	// Object: Function SMSystem.SMInstance.GetAllReferencedInstances
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769d70
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct USMInstance*> GetAllReferencedInstances(uint8_t bIncludeChildren);

	// Object: Function SMSystem.SMInstance.GetAllCurrentStateGuids
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769cd8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FGuid> GetAllCurrentStateGuids();

	// Object: Function SMSystem.SMInstance.GetAllActiveStateInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769c1c
	// Params: [ Num(1) Size(0x10) ]
	void GetAllActiveStateInstances(struct TArray<struct USMStateInstance_Base*>& ActiveStateInstances);

	// Object: Function SMSystem.SMInstance.GetAllActiveStateGuids
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769b1c
	// Params: [ Num(2) Size(0x11) ]
	void GetAllActiveStateGuids(struct TArray<struct FGuid>& ActiveGuids, uint8_t IncludeNotRepState);

	// Object: Function SMSystem.SMInstance.GetActiveStateName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769a84
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetActiveStateName();

	// Object: Function SMSystem.SMInstance.GetActiveStateInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x77699d0
	// Params: [ Num(2) Size(0x10) ]
	struct USMStateInstance_Base* GetActiveStateInstance(uint8_t bCheckNested);

	// Object: Function SMSystem.SMInstance.GetActiveStateGuid
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776999c
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetActiveStateGuid();

	// Object: Function SMSystem.SMInstance.EvaluateTransitions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7769988
	// Params: [ Num(0) Size(0x0) ]
	void EvaluateTransitions();

	// Object: Function SMSystem.SMInstance.CanTickOnManualUpdate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x776996c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanTickOnManualUpdate();

	// Object: Function SMSystem.SMInstance.CanEverTickGeneralUpdate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769950
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanEverTickGeneralUpdate();

	// Object: Function SMSystem.SMInstance.CanEverTick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769934
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanEverTick();

	// Object: Function SMSystem.SMInstance.CanAutoManageTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7769918
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanAutoManageTime();
	DEFINE_UE_CLASS_HELPERS(USMInstance, "SMInstance")

};

// Object: Class SMSystem.SMNodeArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct USMNodeArrayLibrary : UObject
{

	// Object: Function SMSystem.SMNodeArrayLibrary.bCanEvaluateFromEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x776dbac
	// Params: [ Num(2) Size(0x161) ]
	static void bCanEvaluateFromEvent(struct FSMTransition& Transition, uint8_t bValue);

	// Object: Function SMSystem.SMNodeArrayLibrary.bCanEvaluate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x776da20
	// Params: [ Num(2) Size(0x161) ]
	static void bCanEvaluate(struct FSMTransition& Transition, uint8_t bValue);

	// Object: Function SMSystem.SMNodeArrayLibrary.bCanEnterTransitionFromEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xe2e1d78
	// Params: [ Num(2) Size(0x161) ]
	static void bCanEnterTransitionFromEvent(struct FSMTransition& Transition, uint8_t bValue);
	DEFINE_UE_CLASS_HELPERS(USMNodeArrayLibrary, "SMNodeArrayLibrary")

};

// Object: Class SMSystem.SMStateInstance
// Size: 0xC8 (Inherited: 0xC8)
struct USMStateInstance : USMStateInstance_Base
{	DEFINE_UE_CLASS_HELPERS(USMStateInstance, "SMStateInstance")

};

// Object: Class SMSystem.SMActionInstance
// Size: 0x80 (Inherited: 0x80)
struct USMActionInstance : USMNodeInstance
{	DEFINE_UE_CLASS_HELPERS(USMActionInstance, "SMActionInstance")

};

// Object: Class SMSystem.SMStateMachineComponent
// Size: 0x1C8 (Inherited: 0xF8)
struct USMStateMachineComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnStateMachineInitializedEvent; // 0x108(0x10)
	struct FMulticastInlineDelegate OnStateMachineStartedEvent; // 0x118(0x10)
	struct FMulticastInlineDelegate OnStateMachineUpdatedEvent; // 0x128(0x10)
	struct FMulticastInlineDelegate OnStateMachineStoppedEvent; // 0x138(0x10)
	struct FMulticastInlineDelegate OnStateMachineTransitionTakenEvent; // 0x148(0x10)
	struct FMulticastInlineDelegate OnStateMachineStateChangedEvent; // 0x158(0x10)
	struct USMInstance* StateMachineClass; // 0x168(0x8)
	ESMNetworkConfigurationType NetworkTickConfiguration; // 0x170(0x1)
	ESMNetworkConfigurationType NetworkTransitionConfiguration; // 0x171(0x1)
	ESMNetworkConfigurationType NetworkStateConfiguration; // 0x172(0x1)
	uint8_t bIncludeSimulatedProxies : 1; // 0x173(0x1), Mask(0x1)
	uint8_t BitPad_0x173_1 : 7; // 0x173(0x1)
	uint8_t bTakeTransitionsFromServerOnly : 1; // 0x174(0x1), Mask(0x1)
	uint8_t BitPad_0x174_1 : 7; // 0x174(0x1)
	uint8_t Pad_0x175[0x3]; // 0x175(0x3)
	float TransitionResetTimeSeconds; // 0x178(0x4)
	uint8_t bReplicateStatesOnLoad : 1; // 0x17C(0x1), Mask(0x1)
	uint8_t BitPad_0x17C_1 : 7; // 0x17C(0x1)
	uint8_t bDiscardTransitionsBeforeInitialize : 1; // 0x17D(0x1), Mask(0x1)
	uint8_t BitPad_0x17D_1 : 7; // 0x17D(0x1)
	uint8_t Pad_0x17E[0x2]; // 0x17E(0x2)
	float MaxTimeToWaitForTransitionUpdate; // 0x180(0x4)
	uint8_t bInitializeOnBeginPlay : 1; // 0x184(0x1), Mask(0x1)
	uint8_t BitPad_0x184_1 : 7; // 0x184(0x1)
	uint8_t bStartOnBeginPlay : 1; // 0x185(0x1), Mask(0x1)
	uint8_t BitPad_0x185_1 : 7; // 0x185(0x1)
	uint8_t bLetInstanceManageTick : 1; // 0x186(0x1), Mask(0x1)
	uint8_t BitPad_0x186_1 : 7; // 0x186(0x1)
	uint8_t Pad_0x187[0x1]; // 0x187(0x1)
	struct TArray<struct FSMNetworkedTransaction> R_NetworkedTransactions; // 0x188(0x10)
	struct TArray<struct FSMNetworkedTransaction> PendingTransactions; // 0x198(0x10)
	struct USMInstance* R_Instance; // 0x1A8(0x8)
	struct USMInstance* InstanceTemplate; // 0x1B0(0x8)
	uint8_t bOverrideTick : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t BitPad_0x1B8_1 : 7; // 0x1B8(0x1)
	uint8_t bCanEverTick : 1; // 0x1B9(0x1), Mask(0x1)
	uint8_t BitPad_0x1B9_1 : 7; // 0x1B9(0x1)
	uint8_t bOverrideTickInterval : 1; // 0x1BA(0x1), Mask(0x1)
	uint8_t BitPad_0x1BA_1 : 7; // 0x1BA(0x1)
	uint8_t Pad_0x1BB[0x1]; // 0x1BB(0x1)
	float TickInterval; // 0x1BC(0x4)
	uint8_t R_bShuttingDown : 1; // 0x1C0(0x1), Mask(0x1)
	uint8_t BitPad_0x1C0_1 : 7; // 0x1C0(0x1)
	uint8_t bCanInstanceNetworkTick : 1; // 0x1C1(0x1), Mask(0x1)
	uint8_t BitPad_0x1C1_1 : 7; // 0x1C1(0x1)
	uint8_t Pad_0x1C2[0x6]; // 0x1C2(0x6)


	// Object: Function SMSystem.SMStateMachineComponent.Update
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7773514
	// Params: [ Num(1) Size(0x4) ]
	void Update(float DeltaSeconds);

	// Object: Function SMSystem.SMStateMachineComponent.Stop
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x77734f8
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function SMSystem.SMStateMachineComponent.Start
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x77734dc
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function SMSystem.SMStateMachineComponent.Shutdown
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x77734c0
	// Params: [ Num(0) Size(0x0) ]
	void Shutdown();

	// Object: Function SMSystem.SMStateMachineComponent.SERVER_Update
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x77733ec
	// Params: [ Num(1) Size(0x4) ]
	void SERVER_Update(float DeltaTime);

	// Object: Function SMSystem.SMStateMachineComponent.SERVER_Stop
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7773390
	// Params: [ Num(0) Size(0x0) ]
	void SERVER_Stop();

	// Object: Function SMSystem.SMStateMachineComponent.SERVER_Start
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7773334
	// Params: [ Num(0) Size(0x0) ]
	void SERVER_Start();

	// Object: Function SMSystem.SMStateMachineComponent.SERVER_Shutdown
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x77732d8
	// Params: [ Num(0) Size(0x0) ]
	void SERVER_Shutdown();

	// Object: Function SMSystem.SMStateMachineComponent.SERVER_ProcessTransaction
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x77731fc
	// Params: [ Num(1) Size(0x10) ]
	void SERVER_ProcessTransaction(struct TArray<struct FSMNetworkedTransaction> Transactions);

	// Object: Function SMSystem.SMStateMachineComponent.SERVER_Initialize
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x7773128
	// Params: [ Num(1) Size(0x8) ]
	void SERVER_Initialize(struct UObject* Context);

	// Object: Function SMSystem.SMStateMachineComponent.REP_ShuttingDown
	// Flags: [Native|Protected]
	// Offset: 0x777310c
	// Params: [ Num(0) Size(0x0) ]
	void REP_ShuttingDown();

	// Object: Function SMSystem.SMStateMachineComponent.REP_OnInstanceLoaded
	// Flags: [Native|Protected]
	// Offset: 0x77730f0
	// Params: [ Num(0) Size(0x0) ]
	void REP_OnInstanceLoaded();

	// Object: Function SMSystem.SMStateMachineComponent.REP_NetworkedTransactions
	// Flags: [Native|Protected]
	// Offset: 0x77730d4
	// Params: [ Num(0) Size(0x0) ]
	void REP_NetworkedTransactions();

	// Object: Function SMSystem.SMStateMachineComponent.PrintAllStates
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77730c0
	// Params: [ Num(0) Size(0x0) ]
	void PrintAllStates();

	// Object: Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineUpdated
	// Flags: [Final|Native|Protected]
	// Offset: 0x7772fe0
	// Params: [ Num(2) Size(0xC) ]
	void Internal_OnStateMachineUpdated(struct USMInstance* Instance, float DeltaSeconds);

	// Object: Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineTransitionTaken
	// Flags: [Final|Native|Protected]
	// Offset: 0x7772e48
	// Params: [ Num(2) Size(0x98) ]
	void Internal_OnStateMachineTransitionTaken(struct USMInstance* Instance, struct FSMTransitionInfo Transition);

	// Object: Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStopped
	// Flags: [Final|Native|Protected]
	// Offset: 0x7772da4
	// Params: [ Num(1) Size(0x8) ]
	void Internal_OnStateMachineStopped(struct USMInstance* Instance);

	// Object: Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x7772ae4
	// Params: [ Num(3) Size(0x108) ]
	void Internal_OnStateMachineStateChanged(struct USMInstance* Instance, struct FSMStateInfo ToState, struct FSMStateInfo FromState);

	// Object: Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStarted
	// Flags: [Final|Native|Protected]
	// Offset: 0x7772a40
	// Params: [ Num(1) Size(0x8) ]
	void Internal_OnStateMachineStarted(struct USMInstance* Instance);

	// Object: Function SMSystem.SMStateMachineComponent.Initialize
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x777295c
	// Params: [ Num(2) Size(0x10) ]
	void Initialize(struct UObject* Context, struct UActorComponent* Component);

	// Object: Function SMSystem.SMStateMachineComponent.GetInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7772940
	// Params: [ Num(1) Size(0x8) ]
	struct USMInstance* GetInstance();
	DEFINE_UE_CLASS_HELPERS(USMStateMachineComponent, "SMStateMachineComponent")

};

// Object: Class SMSystem.SMStateMachineInstance
// Size: 0xD0 (Inherited: 0xC8)
struct USMStateMachineInstance : USMStateInstance_Base
{
	uint8_t bWaitForEndState : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t bReuseCurrentState : 1; // 0xC9(0x1), Mask(0x1)
	uint8_t BitPad_0xC9_1 : 7; // 0xC9(0x1)
	uint8_t bReuseIfNotEndState : 1; // 0xCA(0x1), Mask(0x1)
	uint8_t BitPad_0xCA_1 : 7; // 0xCA(0x1)
	uint8_t Pad_0xCB[0x5]; // 0xCB(0x5)


	// Object: Function SMSystem.SMStateMachineInstance.OnStateMachineCompleted
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x77737ec
	// Params: [ Num(0) Size(0x0) ]
	void OnStateMachineCompleted();

	// Object: Function SMSystem.SMStateMachineInstance.OnEndStateReached
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x77737d0
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStateReached();

	// Object: Function SMSystem.SMStateMachineInstance.GetAllStateInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7773714
	// Params: [ Num(1) Size(0x10) ]
	void GetAllStateInstances(struct TArray<struct USMStateInstance_Base*>& StateInstances);
	DEFINE_UE_CLASS_HELPERS(USMStateMachineInstance, "SMStateMachineInstance")

};

// Object: Class SMSystem.SMTransitionInstance
// Size: 0xA8 (Inherited: 0x80)
struct USMTransitionInstance : USMNodeInstance
{
	int32_t PriorityOrder; // 0x80(0x4)
	uint8_t bRunParallel : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t bEvalIfNextStateActive : 1; // 0x85(0x1), Mask(0x1)
	uint8_t BitPad_0x85_1 : 7; // 0x85(0x1)
	uint8_t bCanEvaluate : 1; // 0x86(0x1), Mask(0x1)
	uint8_t BitPad_0x86_1 : 7; // 0x86(0x1)
	uint8_t bCanEvaluateFromEvent : 1; // 0x87(0x1), Mask(0x1)
	uint8_t BitPad_0x87_1 : 7; // 0x87(0x1)
	uint8_t bCanEvalWithStartState : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FMulticastInlineDelegate OnTransitionEnteredEvent; // 0x90(0x10)
	uint8_t OnlyCheckTransitionOnServer : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t DisableCheckTransitionOnSimulatedProxy : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	uint8_t UseNativeTransitionExecute : 1; // 0xA2(0x1), Mask(0x1)
	uint8_t BitPad_0xA2_1 : 7; // 0xA2(0x1)
	uint8_t Pad_0xA3[0x5]; // 0xA3(0x5)


	// Object: Function SMSystem.SMTransitionInstance.SetCanEvaluate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7773e14
	// Params: [ Num(1) Size(0x1) ]
	void SetCanEvaluate(uint8_t bValue);

	// Object: Function SMSystem.SMTransitionInstance.OnTransitionShutdown
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7773df8
	// Params: [ Num(0) Size(0x0) ]
	void OnTransitionShutdown();

	// Object: Function SMSystem.SMTransitionInstance.OnTransitionInitialized
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7773ddc
	// Params: [ Num(0) Size(0x0) ]
	void OnTransitionInitialized();

	// Object: Function SMSystem.SMTransitionInstance.OnTransitionEntered
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x7773dc0
	// Params: [ Num(0) Size(0x0) ]
	void OnTransitionEntered();

	// Object: Function SMSystem.SMTransitionInstance.GetTransitionInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7773cf4
	// Params: [ Num(1) Size(0x90) ]
	void GetTransitionInfo(struct FSMTransitionInfo& Transition);

	// Object: Function SMSystem.SMTransitionInstance.GetPreviousStateInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7773bc0
	// Params: [ Num(1) Size(0x8) ]
	struct USMStateInstance_Base* GetPreviousStateInstance();

	// Object: Function SMSystem.SMTransitionInstance.GetNextStateInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7773b8c
	// Params: [ Num(1) Size(0x8) ]
	struct USMStateInstance_Base* GetNextStateInstance();

	// Object: Function SMSystem.SMTransitionInstance.GetCanEvaluate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7773b54
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetCanEvaluate();

	// Object: Function SMSystem.SMTransitionInstance.CanEnterTransition
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x7773b14
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanEnterTransition();
	DEFINE_UE_CLASS_HELPERS(USMTransitionInstance, "SMTransitionInstance")

};

// Object: Class SMSystem.SMBlueprintUtils
// Size: 0x28 (Inherited: 0x28)
struct USMBlueprintUtils : UBlueprintFunctionLibrary
{

	// Object: Function SMSystem.SMBlueprintUtils.CreateStateMachineInstanceFromTemplate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7774064
	// Params: [ Num(6) Size(0x30) ]
	static struct USMInstance* CreateStateMachineInstanceFromTemplate(struct USMInstance* StateMachineClass, struct UObject* Context, struct USMInstance* Template, struct USMInstance* Owner, struct UActorComponent* Component);

	// Object: Function SMSystem.SMBlueprintUtils.CreateStateMachineInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7773f4c
	// Params: [ Num(4) Size(0x20) ]
	static struct USMInstance* CreateStateMachineInstance(struct USMInstance* StateMachineClass, struct UObject* Context, struct UActorComponent* Component);
	DEFINE_UE_CLASS_HELPERS(USMBlueprintUtils, "SMBlueprintUtils")

};

// Object: SMBlueprintGeneratedClass SMSystem.Default__SMBlueprintGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__SMBlueprintGeneratedClass
{	DEFINE_UE_CLASS_HELPERS(Default__SMBlueprintGeneratedClass, "Default__SMBlueprintGeneratedClass")

};

// Object: SMNodeBlueprintGeneratedClass SMSystem.Default__SMNodeBlueprintGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__SMNodeBlueprintGeneratedClass
{	DEFINE_UE_CLASS_HELPERS(Default__SMNodeBlueprintGeneratedClass, "Default__SMNodeBlueprintGeneratedClass")

};

} // namespace SDK
