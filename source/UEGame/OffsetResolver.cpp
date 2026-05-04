#include "Logger.h"

#include <algorithm>
#include <cctype>
#include <chrono>
#include <cstdint>
#include <mutex>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

#include "ElfScanner/ElfScannerManager.h"
#include "UECore/Basic.h"
#include "UECore/CoreUObject_classes.h"
#include "UEGame/Offsets.h"
#include "Utils/KittyEx.h"

namespace SDK::Offsets
{

namespace
{

// -----------------------------------------------------------------------------
//  常量
// -----------------------------------------------------------------------------

constexpr int kMaxAttempts = 1800;

// -----------------------------------------------------------------------------
//  耗时辅助：steady_clock + 毫秒展示
// -----------------------------------------------------------------------------

using SteadyClock = std::chrono::steady_clock;

inline double ElapsedMs(SteadyClock::time_point t0, SteadyClock::time_point t1)
{
    return std::chrono::duration<double, std::milli>(t1 - t0).count();
}

inline double ElapsedMs(SteadyClock::time_point t0)
{
    return ElapsedMs(t0, SteadyClock::now());
}

// -----------------------------------------------------------------------------
//  Class 查找：不区分大小写，O(1) 哈希命中
// -----------------------------------------------------------------------------

std::string ToLower(std::string_view s)
{
    std::string r(s);
    std::transform(r.begin(), r.end(), r.begin(),
                   [](unsigned char c)
    { return static_cast<char>(std::tolower(c)); });
    return r;
}

SDK::UClass* FindClassByNameFast(const char* name)
{
    using namespace SDK;

    static std::unordered_map<std::string, UClass*> s_byLower;
    static std::once_flag                           s_built;
    std::call_once(s_built, []
    {
        const auto t0 = SteadyClock::now();
        const int  n  = UObject::GObjects->Num();
        s_byLower.reserve(static_cast<size_t>(n / 8));
        for (int i = 0; i < n; ++i)
        {
            UObject* Object = UObject::GObjects->GetByIndex(i);
            if (!Object || (reinterpret_cast<uintptr_t>(Object) & 0x7) != 0) continue;
            if (!Object->Class) continue;
            if (!Object->HasTypeFlag(EClassCastFlags::Class)) continue;

            // 同小写名极少冲突，保留首次命中即可。
            s_byLower.try_emplace(ToLower(Object->GetName()), static_cast<UClass*>(Object));
        }
        const double ms = ElapsedMs(t0);
        GetLogFile("Offsets")->Append(
            "[Offsets] indexed {} UClass objects (case-insensitive)\n", s_byLower.size());
        GetLogFile("PerfTest")->Append("[UClassIndex] scanned {} GObjects, kept {} classes, {:.2f} ms\n", n, s_byLower.size(), ms);
    });

    auto it = s_byLower.find(ToLower(name));
    return (it != s_byLower.end()) ? it->second : nullptr;
}

// -----------------------------------------------------------------------------
//  Property 解析：在 super 链上查找指定字段名，返回字节偏移
// -----------------------------------------------------------------------------

int32_t ResolveInClass(SDK::UStruct* Cls, const char* propName)
{
    using namespace SDK;

    for (UStruct* S = Cls; S; S = S->Super)
    {
        for (FField* F = S->ChildProperties; F; F = F->Next)
        {
            if (F->NamePrivate.ToString() != propName)
                continue;

            auto*   P   = reinterpret_cast<FProperty*>(F);
            // UMaterial 这类 uint8 :1 位域: Offset_Internal 已是字节地址, ByteOffset 恒为 0.
            // DFM 1.201 运行时 FBoolProperty 派生段开头多 1 字节 leading metadata
            // (见 AndUEProber 7e7a2b9), 静态结构里的 ->ByteOffset 实际读到 FieldSize=1,
            // 直接读会让所有 bool 偏移 +1. 不读, 让调用方依赖手抄的 mask 自行做 bit 操作.
            return P->Offset_Internal;
        }
    }
    return -1;
}

// -----------------------------------------------------------------------------
//  失败诊断：打印命中类全名 + super 链每级 ChildProperties 计数与样例
// -----------------------------------------------------------------------------

void DumpResolveFailure(const char* className, const char* propName)
{
    using namespace SDK;

    UClass* Cls = FindClassByNameFast(className);
    if (!Cls)
    {
        GetLogFile("Offsets")->Append("[Offsets]   diag: no UClass indexed for '{}'\n", className);
        return;
    }

    GetLogFile("Offsets")->Append("[Offsets]   diag: matched {}\n", Cls->GetFullName().c_str());

    int chainIdx   = 0;
    int totalProps = 0;
    for (UStruct* S = Cls; S; S = S->Super, ++chainIdx)
    {
        int         classProps = 0;
        std::string sample;
        for (FField* F = S->ChildProperties; F; F = F->Next)
        {
            ++classProps;
            if (classProps <= 6)
            {
                if (!sample.empty()) sample += ", ";
                sample += F->NamePrivate.ToString();
            }
        }
        totalProps += classProps;
        GetLogFile("Offsets")->Append("[Offsets]   diag: [{}] {} props={}  {{{}{}}}\n",
                                      chainIdx, S->GetName().c_str(), classProps,
                                      sample.c_str(), classProps > 6 ? ", ..." : "");
    }
    GetLogFile("Offsets")->Append("[Offsets]   diag: {}::{} super-chain total props={}\n",
                                  className, propName, totalProps);
}

// -----------------------------------------------------------------------------
//  待解析项表
// -----------------------------------------------------------------------------

struct OffsetEntry
{
    uintptr_t*  dst; // 指向 Offsets.h 中的 inline 变量
    const char* className;
    const char* propName;
    bool        resolved = false; // 命中 / 放弃 都置 true
};

std::vector<OffsetEntry>& GetEntries()
{
    // DFM 的 Character 类 FName 全大写 "CHARACTER"，依赖 ToLower 归一命中。
    static std::vector<OffsetEntry> v = {
        // === LocalPlayer 链 ===
        {&o_OwningGameInstance, "World", "OwningGameInstance"},
        {&o_LocalPlayers, "GameInstance", "LocalPlayers"},
        {&o_PlayerController, "Player", "PlayerController"},
        {&o_AcknowledgedPawn, "PlayerController", "AcknowledgedPawn"},

        // === All Actors ===
        {&o_PersistentLevel, "World", "PersistentLevel"},
        {&o_Actors, "Level", "Actors"},

        // === Actor 校验 ===
        {&o_RootComponent, "Actor", "RootComponent"},
        {&o_bActorIsBeingDestroyed, "Actor", "bActorIsBeingDestroyed"},

        // === Character Mesh ===
        {&o_Mesh, "CHARACTER", "Mesh"},

        // === Item ===
        {&o_ModularWeaponDesc, "InventoryPickup", "ModularWeaponDesc"},

        // === Item Material ===
        {&o_CachedOutlineMeshComponents, "InteractorBase", "CachedOutlineMeshComponents"},

        // === Material 位域 ===
        {&o_bDisableDepthTest, "Material", "bDisableDepthTest"},
        {&o_Wireframe, "Material", "Wireframe"},
    };
    return v;
}

// 派生偏移：从已解析项推导得到的字段，每次重试都重算（被依赖项可能仍在变化）。
void RecomputeDerived()
{
    o_FDFMCommonItemRow = o_ModularWeaponDesc + 0x10;
}

// 单次尝试解析一个 entry。返回 true 表示该项已收尾（成功 or 已放弃）。
bool TryResolveEntry(OffsetEntry& e, int attempt, bool giveUp)
{
    int32_t v = Resolve(e.className, e.propName);
    if (v >= 0)
    {
        const auto resolved = static_cast<uintptr_t>(v);
        if (resolved != *e.dst)
            GetLogFile("Offsets")->Append("[Offsets] {}::{} 0x{:X} -> 0x{:X} (attempt {})\n",
                                          e.className, e.propName, *e.dst, resolved, attempt);
        else
            GetLogFile("Offsets")->Append("[Offsets] {}::{} == 0x{:X} (attempt {})\n",
                                          e.className, e.propName, resolved, attempt);
        *e.dst = resolved;
        return true;
    }

    if (giveUp)
    {
        GetLogFile("Offsets")->Append("[Offsets] {}::{} unresolved after {} attempts, keep fallback 0x{:X}\n",
                                      e.className, e.propName, attempt, *e.dst);
        DumpResolveFailure(e.className, e.propName);
        return true;
    }

    return false;
}

} // anonymous namespace

// -----------------------------------------------------------------------------
//  Public API
// -----------------------------------------------------------------------------

int32_t Resolve(const char* className, const char* propName)
{
    if (!className || !propName)
        return -1;

    SDK::UClass* Cls = FindClassByNameFast(className);
    if (!Cls)
        return -1;
    return ResolveInClass(Cls, propName);
}

void EnsureInit()
{
    static int    s_attempts = 0;
    static bool   s_allDone  = false;
    static double s_cum_ms   = 0.0;
    if (s_allDone) return;

    const auto t_attempt = SteadyClock::now();

    // 首次触发 FindClassByNameFast 内的 std::call_once，完成 UClass 索引构建。
    double ms_init = 0.0;
    if (s_attempts == 0)
    {
        const auto t_init = SteadyClock::now();
        (void)FindClassByNameFast("__OffsetsInitTrigger__");
        ms_init = ElapsedMs(t_init);
    }

    auto& all = GetEntries();
    ++s_attempts;

    if (s_attempts == 1)
        GetLogFile("Offsets")->Append("[Offsets] EnsureInit: starting ({} entries pending)\n", all.size());

    const bool giveUp = (s_attempts >= kMaxAttempts);

    const auto t_resolve  = SteadyClock::now();
    int        unresolved = 0;
    for (auto& e : all)
    {
        if (e.resolved) continue;
        if (TryResolveEntry(e, s_attempts, giveUp))
            e.resolved = true;
        else
            ++unresolved;
    }
    const double ms_resolve = ElapsedMs(t_resolve);

    RecomputeDerived();

    const double ms_attempt = ElapsedMs(t_attempt);
    s_cum_ms += ms_attempt;

    // 60Hz Tick 内每次都打开销会刷屏：仅 第一次 / 完工帧 / 末次放弃帧 打印。
    if (s_attempts == 1)
    {
        GetLogFile("PerfTest")->Append("[EnsureInit.Attempt] #{}: parallel-init {:.2f} ms + resolve {:.2f} ms = {:.2f} ms ({} unresolved)\n", s_attempts, ms_init, ms_resolve, ms_attempt, unresolved);
    }

    if (unresolved == 0)
    {
        s_allDone = true;
        GetLogFile("Offsets")->Append("[Offsets] EnsureInit: complete after {} attempt(s)\n", s_attempts);
        GetLogFile("PerfTest")->Append("[EnsureInit.Complete] {} attempt(s), last {:.2f} ms, cumulative {:.2f} ms\n", s_attempts, ms_attempt, s_cum_ms);
    }
    else if (giveUp)
    {
        GetLogFile("Offsets")->Append(
            "[Offsets] EnsureInit: gave up at attempt {} ({} still unresolved)\n",
            s_attempts, unresolved);
        GetLogFile("PerfTest")->Append("[EnsureInit.GaveUp] attempt {}, cumulative {:.2f} ms\n", s_attempts, s_cum_ms);
    }
}

} // namespace SDK::Offsets
