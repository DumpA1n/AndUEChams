#include "UE_Hack.h"

#include <atomic>
#include <chrono>
#include <format>
#include <mutex>
#include <set>
#include <thread>
#include <vector>

#include "imgui/imgui.h"

#include "ImGui/ImGuiHost.h"

#include "PointerHook/PointerHookManager.h"
#include "PointerHook/SafePointerHook.h"

#include "UEGame/MaterialManager.h"
#include "UEGame/Offsets.h"
#include "UEGame/UECore/Basic.h"
#include "UEGame/UECore/UECoreInit.h"
#include "UEGame/UECore/UEMemory.h"

#include "Utils/Config/Config.h"
#include "Utils/ElfScanner/ElfScannerManager.h"
#include "Utils/HookUtils.h"
#include "Utils/KittyEx.h"
#include "Utils/Language.h"
#include "Utils/Logger.h"

namespace ChamsColor
{
// 玩家：可见 / 被掩体遮挡
constexpr FLinearColor PlayerVisible   = FLinearColor{0x00FA57}; // 偏绿
constexpr FLinearColor PlayerUnvisible = FLinearColor{0xFF5555}; // 偏红

// 拾取物按品质分色（与原版一致）
constexpr FLinearColor White  = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
constexpr FLinearColor Green  = FLinearColor(0.0f, 0.5f, 0.0f, 1.0f);
constexpr FLinearColor Blue   = FLinearColor(0.0f, 0.0f, 1.0f, 1.0f);
constexpr FLinearColor Purple = FLinearColor(0.5f, 0.0f, 0.5f, 1.0f);
constexpr FLinearColor Yellow = FLinearColor(1.0f, 1.0f, 0.0f, 1.0f);
constexpr FLinearColor Red    = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);

// 不同队伍的描边色，TeamID 1..20。索引 0 / 越界保留 PlayerUnvisible 作 fallback。
constexpr FLinearColor TeamColors[21] = {
    PlayerUnvisible,                          // 0 / 越界 fallback
    FLinearColor(0.25f, 0.25f, 0.9f,  1.0f),  // 1
    FLinearColor(1.0f,  0.5f,  0.0f,  1.0f),  // 2
    FLinearColor(0.7f,  0.0f,  1.0f,  1.0f),  // 3
    FLinearColor(0.1f,  0.4f,  1.0f,  1.0f),  // 4
    FLinearColor(1.0f,  0.2f,  0.75f, 1.0f),  // 5
    FLinearColor(1.0f,  0.0f,  0.6f,  1.0f),  // 6
    FLinearColor(0.0f,  0.55f, 1.0f,  1.0f),  // 7
    FLinearColor(0.9f,  0.0f,  0.2f,  1.0f),  // 8
    FLinearColor(1.0f,  0.8f,  0.0f,  1.0f),  // 9
    FLinearColor(0.45f, 0.2f,  1.0f,  1.0f),  // 10
    FLinearColor(0.55f, 0.0f,  0.7f,  1.0f),  // 11
    FLinearColor(1.0f,  0.3f,  0.7f,  1.0f),  // 12
    FLinearColor(1.0f,  0.45f, 0.75f, 1.0f),  // 13
    FLinearColor(1.0f,  0.65f, 0.55f, 1.0f),  // 14
    FLinearColor(1.0f,  0.0f,  0.1f,  1.0f),  // 15
    FLinearColor(0.9f,  0.4f,  0.0f,  1.0f),  // 16
    FLinearColor(0.55f, 0.4f,  1.0f,  1.0f),  // 17
    FLinearColor(1.0f,  0.0f,  0.5f,  1.0f),  // 18
    FLinearColor(1.0f,  0.2f,  0.7f,  1.0f),  // 19
    FLinearColor(0.2f,  0.3f,  1.0f,  1.0f),  // 20
};
} // namespace ChamsColor

static std::atomic<bool> GGlobalsReady{false};

static bool EnsureGlobalsInitialized()
{
    if (GGlobalsReady.load(std::memory_order_acquire)) return true;

    static std::mutex           Mu;
    std::lock_guard<std::mutex> Lock(Mu);
    if (GGlobalsReady.load(std::memory_order_relaxed)) return true;

    if (!SDK::UECoreInit::Init()) return false;

    constexpr const char* CanvasObjectName = "Canvas Transient.DebugCanvasObject";
    constexpr const char* EngineClassName  = "Class Engine.Engine";
    constexpr const char* WorldClassName   = "Class Engine.World";

    UCanvas* CanvasObj   = nullptr;
    UClass*  EngineClass = nullptr;
    UClass*  WorldClass  = nullptr;
    UObject::GObjects->ForEachObject([&](UObject* Object)
    {
        if (Object->GetFullName() == CanvasObjectName)
            CanvasObj = static_cast<UCanvas*>(Object);
        else if (Object->GetFullName() == EngineClassName)
            EngineClass = static_cast<UClass*>(Object);
        else if (Object->GetFullName() == WorldClassName)
            WorldClass = static_cast<UClass*>(Object);
        return (CanvasObj && EngineClass && WorldClass);
    });
    if (!CanvasObj || !EngineClass || !WorldClass) return false;

    UObject *EngineObj = nullptr, *WorldObj = nullptr;
    UObject::GObjects->ForEachObject([&](UObject* Object)
    {
        if (!Object->IsDefaultObject())
        {
            if (Object->IsA(EngineClass))
                EngineObj = Object;
            else if (Object->IsA(WorldClass))
                WorldObj = Object;
        }
        return (EngineObj && WorldObj);
    });
    if (!EngineObj || !WorldObj) return false;

    UEngine** GEngine = nullptr;
    UWorld**  GWorld  = nullptr;
    for (const auto& Seg : Elf.UE4().bssSegments())
    {
        for (uintptr_t Addr = Seg.startAddress; Addr + 8 <= Seg.endAddress; Addr += 0x8)
        {
            auto Ptr = KT::Read<uintptr_t>(Addr);
            if (Ptr == (uintptr_t)EngineObj)
                GEngine = (UEngine**)Addr;
            else if (Ptr == (uintptr_t)WorldObj)
                GWorld = (UWorld**)Addr;
            if (GEngine && GWorld) break;
        }
        if (GEngine && GWorld) break;
    }
    if (!GEngine || !GWorld) return false;

    LOGI("[UE] Canvas Size(%.1f, %.1f)", CanvasObj->ClipX, CanvasObj->ClipY);
    LOGI("[UE] GEngine: %p, GWorld: %p", GEngine, GWorld);

    UE_Hack::GetInstance().SetCanvas(CanvasObj);
    UE_Hack::GetInstance().SetEngine(GEngine);
    UE_Hack::GetInstance().SetWorld(GWorld);

    GGlobalsReady.store(true, std::memory_order_release);
    return true;
}

// ── DrawTransition 解析器 ────────────────────────────────────────────────────
//
// 全 UE 通用：用 UTF-16 字符串锚 + ARM64 ADRP/ADD 解码定位 UEngine::DrawTransition。
//
// 锚点字符串 L"SavingMessage" 等在 UE4/UE5 的 UEngine::DrawTransition / DrawTransitionMessage
// 中已存在多年，跨版本稳定。流程：
//   1. .rodata 中找 wide string 锚（UTF-16 LE）。
//   2. .text 中扫描 ADRP+ADD 对，记下所有"加载该字符串地址"的 PC。
//   3. 由 PC 向上回溯 ARM64 prologue（PACIBSP / pre-indexed STP X29,X30 / SUB SP+STP）。
//   4. 用 prologue 与 PC 的距离过滤过大函数（排除把 transition 内联的巨型 Tick 等）。
//   5. 在每个候选函数地址上反查 RW 段所有 8 字节指针槽位。
//
// 通用原语（指令探针、ADRP+ADD 解码、段扫描、prologue 回溯）位于
// UEGame/UECore/UEMemory.h 的 SDK::Asm 命名空间。
namespace DrawTransitionResolver
{

struct Target { uintptr_t func; uintptr_t slot; };

// 候选函数大小上限：DrawTransition / DrawTransitionMessage 都在 ~1KB 量级；
// 0x1000 足够保留它们，又能淘汰把 transition 内联的巨型 Engine 函数。
constexpr size_t kMaxFuncSize = 0x1000;

inline std::vector<Target> Resolve()
{
    const auto& elf = Elf.UE4();
    if (!elf.isValid()) {
        LOGE("[DrawTransition] libUE4.so not scanned yet");
        return {};
    }

    const auto t0 = std::chrono::steady_clock::now();

    // 1. 锚字符串地址（任何一个 transition message 都行；用两个做交叉过滤更稳）
    const uintptr_t sSaving  = SDK::Asm::FindWideString(elf, u"SavingMessage");
    const uintptr_t sLoading = SDK::Asm::FindWideString(elf, u"LoadingMessage");
    if (!sSaving || !sLoading) {
        LOGE("[DrawTransition] anchor strings not found (saving=%p loading=%p)",
             (void*)sSaving, (void*)sLoading);
        return {};
    }

    // 2. 所有引用位置
    const auto refsSaving  = SDK::Asm::FindAdrpAddCodeRefs(elf, sSaving);
    const auto refsLoading = SDK::Asm::FindAdrpAddCodeRefs(elf, sLoading);
    if (refsSaving.empty() || refsLoading.empty()) {
        LOGE("[DrawTransition] no code refs (saving=%zu loading=%zu)",
             refsSaving.size(), refsLoading.size());
        return {};
    }

    // 3. 由 SavingMessage 引用回溯 prologue → 候选函数集合
    std::set<uintptr_t> candidates;
    for (const auto& r : refsSaving) {
        uintptr_t fn = SDK::Asm::BackwalkToPrologue(r.pc, r.segStart, kMaxFuncSize);
        if (fn && r.pc - fn <= kMaxFuncSize) candidates.insert(fn);
    }

    // 4. 交叉过滤：候选函数也要包含 LoadingMessage 引用（在 [fn, fn+kMaxFuncSize) 范围内）
    std::set<uintptr_t> verified;
    for (uintptr_t fn : candidates) {
        for (const auto& r : refsLoading) {
            if (r.pc >= fn && r.pc - fn <= kMaxFuncSize) {
                verified.insert(fn);
                break;
            }
        }
    }
    const auto t_resolve = std::chrono::steady_clock::now();
    if (verified.empty()) {
        LOGE("[DrawTransition] no verified candidates");
        return {};
    }

    // 5. 对每个候选反查所有 vtable 槽位
    std::vector<Target> targets;
    for (uintptr_t fn : verified) {
        for (uintptr_t slot : SDK::Asm::FindAllSlotsPointingTo(elf, fn)) {
            targets.push_back({fn, slot});
        }
    }
    const auto t_slots = std::chrono::steady_clock::now();

    const double resolve_ms = std::chrono::duration<double, std::milli>(t_resolve - t0       ).count();
    const double slots_ms   = std::chrono::duration<double, std::milli>(t_slots   - t_resolve).count();

    std::string buf;
    for (uintptr_t fn : verified) {
        buf += std::format("\n  fn={} (+{:#x})", reinterpret_cast<void*>(fn),
                           static_cast<uint64_t>(fn - elf.base()));
        for (const auto& t : targets) {
            if (t.func != fn) continue;
            buf += std::format(" slot={} (+{:#x})", reinterpret_cast<void*>(t.slot),
                               static_cast<uint64_t>(t.slot - elf.base()));
        }
    }
    GetLogFile("PerfTest")->Append(
        "[{}] [DrawTransition] resolve {:.2f} ms (anchor+backwalk {:.2f} + slot-scan {:.2f}); "
        "{} func, {} slot:{}\n",
        FormatedTime(), resolve_ms + slots_ms, resolve_ms, slots_ms,
        verified.size(), targets.size(), buf);
    return targets;
}

} // namespace DrawTransitionResolver

class PostRender : public SafePointerHook
{
public:
    PostRender(uintptr_t Slot, uintptr_t Func) : SafePointerHook(), mSlot(Slot), mFunc(Func) {}
    ~PostRender() override = default;

    std::string GetName() const override { return "PostRender"; }

    uintptr_t FakeFunction(RegContext* Ctx) override
    {
        static uintptr_t CallPoint = Ctx->lr;
        if (Ctx->lr != CallPoint) return GetOrigFuncAddr();

        EnsureGlobalsInitialized();

        if (GGlobalsReady.load(std::memory_order_acquire))
        {
            RestoreHook(); // 4kb 泄露
        }

        ImGuiHost::Tick();

        return GetOrigFuncAddr();
    }

protected:
    uintptr_t GetElfBaseImpl() const override { return Elf.UE4().base(); }
    uintptr_t GetPtrAddrImpl()  const override { return mSlot; }
    uintptr_t GetFuncAddrImpl() const override { return mFunc; }

private:
    uintptr_t mSlot = 0;
    uintptr_t mFunc = 0;
};

void UE_Hack::Init()
{
    std::thread([this]()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        static const auto kTargets = DrawTransitionResolver::Resolve();
        for (size_t i = 0; i < kTargets.size(); ++i)
        {
            PointerHookManager::GetInstance().AddByName<PostRender>(
                std::format("PostRender_{}", i), kTargets[i].slot, kTargets[i].func);
        }
        LOGI("[UE_Hack] Init Done (PostRender hooks: %zu)", kTargets.size());
    }).detach();
}

static bool DoLineTraceVisible(UWorld* InWorld, FVector Start, FVector End, AActor* Ignore0, AActor* Ignore1)
{
    AActor* IgnoreBuf[2] = {};
    int32_t IgnoreCount  = 0;
    if (Ignore0) IgnoreBuf[IgnoreCount++] = Ignore0;
    if (Ignore1) IgnoreBuf[IgnoreCount++] = Ignore1;

    TArray<AActor*> Ignore;
    Ignore.Data        = IgnoreBuf;
    Ignore.NumElements = IgnoreCount;
    Ignore.MaxElements = 2;

    FHitResult Hit{};
    bool       bHit = UKismetSystemLibrary::LineTraceSingle(
        InWorld, Start, End,
        ETraceTypeQuery::TraceTypeQuery1,
        /*bTraceComplex=*/true,
        Ignore,
        EDrawDebugTrace::None, Hit, /*bIgnoreSelf=*/true,
        FLinearColor{}, FLinearColor{}, 0.0f);
    return !bHit;
}

bool UE_Hack::Visible(AActor* Other)
{
    return false;
    // if (!KT::IsValid(LocalPlayer) || !KT::IsValid(Other)) return false;
    // FVector Start = LocalPlayer->K2_GetActorLocation();
    // FVector End   = Other->K2_GetActorLocation();
    // return DoLineTraceVisible(GetWorld(), Start, End, LocalPlayer, Other);
}

bool UE_Hack::Visible(AActor* Other, const FVector& ViewPoint, const FVector& GoalLocation)
{
    return DoLineTraceVisible(GetWorld(), ViewPoint, GoalLocation, LocalPlayer, Other);
}

bool UE_Hack::Visible(const FVector& Start, const FVector& End)
{
    return DoLineTraceVisible(GetWorld(), Start, End, LocalPlayer, nullptr);
}

bool UE_Hack::IsValidActor(AActor* Actor)
{
    if (!KT::IsValid(Actor)) return false;
    USceneComponent* RootComp = KT::Read<USceneComponent*>(Actor, o_RootComponent);
    return KT::IsValid(RootComp) && !Actor->IsActorBeingDestroyed();
}

void UE_Hack::Tick()
{
    if (!GGlobalsReady.load(std::memory_order_acquire)) return;

    SDK::Offsets::EnsureInit();

    UWorld* CurWorld = GetWorld();
    if (!KT::IsValid(CurWorld)) return;

    LocalPlayerController = KT::Read<APlayerController*>(CurWorld, o_OwningGameInstance, o_LocalPlayers, 0x0, o_PlayerController);
    if (!KT::IsValid(LocalPlayerController)) return;

    LocalPlayer = KT::Read<APawn*>(LocalPlayerController, o_AcknowledgedPawn);
    if (!KT::IsValid(LocalPlayer) || !LocalPlayer->IsA(ADFMPlayerCharacter::StaticClass())) return;

    bIsBreakThroughMode = LocalPlayer->IsA(ABreakthroughCharacter::StaticClass());

    LocalCampID = -1;
    LocalTeamID = -1;
    if (auto* LocalTeam = Cast<ACHARACTER>(LocalPlayer)->GetTeamComp(); KT::IsValid(LocalTeam))
    {
        LocalCampID = LocalTeam->GetCamp();
        LocalTeamID = LocalTeam->GetTeamID();
    }

    if (!CFG.bMaterialHack) return;

    MaterialManager::GetInstance()->UpdateMaterial();

    auto Actors = KT::Read<TArray<AActor*>>(CurWorld, o_PersistentLevel, o_Actors);
    if (!Actors.IsValid()) return;

    int ActorsSize = Actors.Num();
    for (int i = 0; i < ActorsSize; ++i)
    {
        AActor* Actor = Actors[i];
        if (!IsValidActor(Actor) || Actor == LocalPlayer) continue;

        if (Actor->IsA(ACHARACTER::StaticClass()))
        {
            ProcessMaterialHack(Actor);
        }
        else if (Actor->IsA(AInventoryPickup::StaticClass()))
        {
            ProcessItemMaterialHack(Actor);
        }
    }
}

void UE_Hack::ApplyChamsColor(AActor* Actor, UMeshComponent* Mesh, int Slot,
                              UMaterialInterface* CurMaterialInterface,
                              FLinearColor Color, bool bForceColorUpdate)
{
    if (!CurMaterialInterface) return;

    UMaterial* CurBaseMaterial = CurMaterialInterface->GetBaseMaterial();
    if (!CurBaseMaterial) return;

    UMaterialInstanceDynamic* SavedMID = nullptr;
    auto ActorIt  = MIDCache.find(Actor);
    if (ActorIt != MIDCache.end())
    {
        auto MatIt = ActorIt->second.find(Slot);
        if (MatIt != ActorIt->second.end()) SavedMID = MatIt->second;
    }

    static FName NAME_None          = UKismetStringLibrary::Conv_StringToName(FString{});
    static FName NAME_Outline_Color = UKismetStringLibrary::Conv_StringToName(FAllocatedString{"Outline Color"});

    // 首次注入或材质被替换
    if (SavedMID != CurMaterialInterface)
    {
        if (SavedMID != nullptr && ActorIt != MIDCache.end())
        {
            LOGI("[UE] MID exists, refresh: %d, %p", Slot, SavedMID);
            ActorIt->second.erase(Slot);
        }

        auto XrayMaterial = MaterialManager::GetInstance()->GetXrayMaterial();
        if (!XrayMaterial) return;

        auto* MID = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(), XrayMaterial, NAME_None);
        MIDCache[Actor].emplace(Slot, MID);

        Mesh->SetMaterial(Slot, MID);
        MID->SetVectorParameterValue(NAME_Outline_Color, Color);
    }
    // 已注入：仅在 caller 显式要求时刷新颜色
    else if (bForceColorUpdate)
    {
        SavedMID->SetVectorParameterValue(NAME_Outline_Color, Color);
    }
}

void UE_Hack::ProcessMaterialHack(AActor* Actor)
{
    if (!MaterialManager::GetInstance()->GetXrayMaterial()) return;

    int32_t TeamID = -1;
    if (auto* TeamComp = Cast<ACHARACTER>(Actor)->GetTeamComp(); KT::IsValid(TeamComp))
    {
        int32_t CampID = TeamComp->GetCamp();
                TeamID = TeamComp->GetTeamID();
        bool bIsTeammate = (bIsBreakThroughMode && CampID == LocalCampID) || (TeamID == LocalTeamID);
        if (bIsTeammate) return;
    }

    bool bIsBot   = !(Cast<APawn>(Actor)->IsPlayerControlled());
    bool bVisible = Visible(Actor);

    auto [VisIt, bVisInserted] = VisibleState.emplace(Actor, !bVisible);
    bool bStateChanged = (bVisible != VisIt->second);
    VisIt->second = bVisible;

    auto Mesh = KT::Read<USkinnedMeshComponent*>(Actor, o_Mesh);
    if (!KT::IsValid(Mesh)) return;

    auto Materials = Mesh->GetMaterials();
    if (!Materials.IsValid()) return;

    FLinearColor InvisColor = (TeamID >= 1 && TeamID <= 20)
                                  ? ChamsColor::TeamColors[TeamID]
                                  : ChamsColor::PlayerUnvisible;
    FLinearColor Color = bIsBot ? ChamsColor::White
                                : (bVisible ? ChamsColor::PlayerVisible : InvisColor);
    for (int j = 0; j < Materials.Num(); ++j)
    {
        if (!Materials.IsValidIndex(j)) continue;
        ApplyChamsColor(Actor, Mesh, j, Materials[j], Color, /*bForceColorUpdate=*/bStateChanged);
    }
}


void UE_Hack::ProcessItemMaterialHack(AActor* Actor)
{
    if (!MaterialManager::GetInstance()->GetXrayMaterial()) return;

    auto CommonItemRow = KT::Read<FDFMCommonItemRow*>(Actor, o_FDFMCommonItemRow);
    if (!KT::IsValid(CommonItemRow)) return;

    int32_t Price   = CommonItemRow->InitialGuidePrice;
    int32_t Quality = CommonItemRow->Quality;

    if (Price < CFG.PickupPrice) return;
    if (Quality < CFG.PickupQuality) return;

    static constexpr FLinearColor QualityColors[7] = {
        ChamsColor::White,  // 0 / 越界默认
        ChamsColor::White,  // 1
        ChamsColor::Green,  // 2
        ChamsColor::Blue,   // 3
        ChamsColor::Purple, // 4
        ChamsColor::Yellow, // 5
        ChamsColor::Red,    // 6
    };
    FLinearColor Color = (Quality >= 0 && Quality < 7) ? QualityColors[Quality] : ChamsColor::White;

    auto MeshArray = KT::Read<TArray<UMeshComponent*>>(Actor, o_CachedOutlineMeshComponents);
    if (!MeshArray.IsValid()) return;

    for (const auto& Mesh : MeshArray)
    {
        if (!KT::IsValid(Mesh)) continue;

        auto Materials = Mesh->GetMaterials();
        if (!Materials.IsValid()) continue;

        for (int j = 0; j < Materials.Num(); ++j)
        {
            if (!Materials.IsValidIndex(j)) continue;
            ApplyChamsColor(Actor, Mesh, j, Materials[j], Color, /*bForceColorUpdate=*/false);
        }
    }
}

void UE_Hack::RenderMenu()
{
    ImGui::SetNextWindowPos(ImVec2(20, 20), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(280, 0), ImGuiCond_FirstUseEver);

    if (!ImGui::Begin(TR("AndUEChams", "AndUEChams"), nullptr, ImGuiWindowFlags_AlwaysAutoResize))
    {
        ImGui::End();
        return;
    }

    if (ImGui::Button(TR("Switch Language", "切换语言")))
    {
        LanguageManager::GetInstance().Toggle();
    }

    ImGui::Separator();

    ImGui::Checkbox(TR("Chams (X-ray)", "材质透视"), &CFG.bMaterialHack);

    ImGui::Separator();

    ImGui::Text(TR("Pickup Filter", "拾取物过滤"));
    ImGui::InputInt(TR("Min Price", "最低价格"), &CFG.PickupPrice);
    ImGui::InputInt(TR("Min Quality", "最低品质"), &CFG.PickupQuality);

    ImGui::Separator();

    ImGui::SliderFloat(TR("Font Scale", "字体缩放"), &CFG.FontScale, 0.5f, 2.0f, "%.2f");

    ImGui::Separator();

    if (ImGui::Button(TR("Save Config", "保存配置")))
    {
        SaveActiveConfig();
    }
    ImGui::SameLine();
    if (ImGui::Button(TR("Load Config", "加载配置")))
    {
        LoadActiveConfig();
    }

    ImGui::End();
}
