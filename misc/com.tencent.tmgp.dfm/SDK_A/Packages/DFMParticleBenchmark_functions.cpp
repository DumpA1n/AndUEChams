#include "DFMParticleBenchmark.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AParticleBenchmarkHD::* ----
void AParticleBenchmarkHD::CopyTableGPUCostTable1toTable2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleBenchmarkHD", "CopyTableGPUCostTable1toTable2");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AParticleBenchmarkHD::CopyDataTableTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleBenchmarkHD", "CopyDataTableTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AParticleBenchmarkHD::CollectParticleEffectHasLightList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleBenchmarkHD", "CollectParticleEffectHasLightList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AParticleBenchmarkHD::AnalysisFXResourceDataTableOverHighCostList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleBenchmarkHD", "AnalysisFXResourceDataTableOverHighCostList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
