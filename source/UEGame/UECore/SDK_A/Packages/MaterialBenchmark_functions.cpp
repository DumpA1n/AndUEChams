#include "MaterialBenchmark.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AAnchorPointsRecorder
void AAnchorPointsRecorder::IncreaseNextAnchorBoothID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "IncreaseNextAnchorBoothID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t AAnchorPointsRecorder::GetNextAnchorBoothID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "GetNextAnchorBoothID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAnchorPointsRecorder::DoMBTransport(int32_t BoothID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "DoMBTransport");
    struct
    {
        int32_t BoothID;
    } Parms{};
    Parms.BoothID = (int32_t)BoothID;
    this->ProcessEvent(Func, &Parms);
}

void AAnchorPointsRecorder::DeleteBoothIDToMaterialPath(int32_t BoothID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "DeleteBoothIDToMaterialPath");
    struct
    {
        int32_t BoothID;
    } Parms{};
    Parms.BoothID = (int32_t)BoothID;
    this->ProcessEvent(Func, &Parms);
}

void AAnchorPointsRecorder::DeleteBoothIDToMaterial(int32_t BoothID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "DeleteBoothIDToMaterial");
    struct
    {
        int32_t BoothID;
    } Parms{};
    Parms.BoothID = (int32_t)BoothID;
    this->ProcessEvent(Func, &Parms);
}

void AAnchorPointsRecorder::DeleteAnchorPoints(int32_t BoothID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "DeleteAnchorPoints");
    struct
    {
        int32_t BoothID;
    } Parms{};
    Parms.BoothID = (int32_t)BoothID;
    this->ProcessEvent(Func, &Parms);
}

void AAnchorPointsRecorder::AddBoothIDToMaterialPath(int32_t BoothID, struct FString MaterialPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "AddBoothIDToMaterialPath");
    struct
    {
        int32_t BoothID;
        struct FString MaterialPath;
    } Parms{};
    Parms.BoothID = (int32_t)BoothID;
    Parms.MaterialPath = (struct FString)MaterialPath;
    this->ProcessEvent(Func, &Parms);
}

void AAnchorPointsRecorder::AddBoothIDToMaterial(int32_t BoothID, struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "AddBoothIDToMaterial");
    struct
    {
        int32_t BoothID;
        struct UMaterialInterface* Material;
    } Parms{};
    Parms.BoothID = (int32_t)BoothID;
    Parms.Material = (struct UMaterialInterface*)Material;
    this->ProcessEvent(Func, &Parms);
}

void AAnchorPointsRecorder::AddAnchorPoints(int32_t BoothID, struct FVector AnchorPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnchorPointsRecorder", "AddAnchorPoints");
    struct
    {
        int32_t BoothID;
        struct FVector AnchorPos;
    } Parms{};
    Parms.BoothID = (int32_t)BoothID;
    Parms.AnchorPos = (struct FVector)AnchorPos;
    this->ProcessEvent(Func, &Parms);
}

// AMaterialBenchmarkCmdsSeq
void AMaterialBenchmarkCmdsSeq::UpdateDataOnCmdExec(int32_t CmdIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "UpdateDataOnCmdExec");
    struct
    {
        int32_t CmdIdx;
    } Parms{};
    Parms.CmdIdx = (int32_t)CmdIdx;
    this->ProcessEvent(Func, &Parms);
}

void AMaterialBenchmarkCmdsSeq::LoadAllTestMaterials()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "LoadAllTestMaterials");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool AMaterialBenchmarkCmdsSeq::IfEnableAutomation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "IfEnableAutomation");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AMaterialBenchmarkCmdsSeq::ExecCmds(struct TArray<struct FString> Cmds, bool bForceExec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "ExecCmds");
    struct
    {
        struct TArray<struct FString> Cmds;
        bool bForceExec;
    } Parms{};
    Parms.Cmds = (struct TArray<struct FString>)Cmds;
    Parms.bForceExec = (bool)bForceExec;
    this->ProcessEvent(Func, &Parms);
}

bool AMaterialBenchmarkCmdsSeq::CanExecCmdThisFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "CanExecCmdThisFrame");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AMaterialBenchmarkCmdsSeq::CacheDataInTheScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "CacheDataInTheScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMaterialBenchmarkCmdsSeq::BuildAllCmdsNeedExecPerBooth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "BuildAllCmdsNeedExecPerBooth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMaterialBenchmarkCmdsSeq::BuildAllCmdsNeedExecByDynamicBooth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "BuildAllCmdsNeedExecByDynamicBooth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMaterialBenchmarkCmdsSeq::BuildAllCmdsNeedExecAllBooth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "BuildAllCmdsNeedExecAllBooth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMaterialBenchmarkCmdsSeq::BuildAllCmdsNeedExec()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MaterialBenchmarkCmdsSeq", "BuildAllCmdsNeedExec");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMaterialBenchmarkExtensionLib
struct FString UMaterialBenchmarkExtensionLib::GetConsoleVariableStringValue(struct FString CVarName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MaterialBenchmarkExtensionLib", "GetConsoleVariableStringValue");
    struct
    {
        struct FString CVarName;
        struct FString ReturnValue;
    } Parms{};
    Parms.CVarName = (struct FString)CVarName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMaterialBenchmarkExtensionLib::GetConsoleVariableInt32Value(struct FString CVarName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MaterialBenchmarkExtensionLib", "GetConsoleVariableInt32Value");
    struct
    {
        struct FString CVarName;
        int32_t ReturnValue;
    } Parms{};
    Parms.CVarName = (struct FString)CVarName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMaterialBenchmarkExtensionLib::GetConsoleVariableFloatValue(struct FString CVarName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MaterialBenchmarkExtensionLib", "GetConsoleVariableFloatValue");
    struct
    {
        struct FString CVarName;
        float ReturnValue;
    } Parms{};
    Parms.CVarName = (struct FString)CVarName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMaterialBenchmarkExtensionLib::GetConsoleVariableBoolValue(struct FString CVarName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MaterialBenchmarkExtensionLib", "GetConsoleVariableBoolValue");
    struct
    {
        struct FString CVarName;
        bool ReturnValue;
    } Parms{};
    Parms.CVarName = (struct FString)CVarName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
