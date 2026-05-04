#include "ElfScannerManager.h"

#include <chrono>
#include <string_view>
#include <thread>
#include <vector>

#include "Utils/Logger.h"
#include "Utils/KittyEx.h"

// 由 X-macro 自动生成查找表
static constexpr struct { std::string_view soName; int index; } kLibTable[] = {
#define ELF_LIB_ENTRY(ENUM, FUNC, SO) { SO, ElfScannerManager::LIB_##ENUM },
    ELF_LIB_LIST
#undef ELF_LIB_ENTRY
};

static ElfScanner SelectByName(const std::vector<ElfScanner>& all, const std::string& name) {
    std::vector<ElfScanner> dyn_elfs, elfs;
    for (const auto& e : all) {
        if (!e.isValid()) continue;
        const std::string rp = e.realPath();
        if (rp.size() < name.size()) continue;
        if (rp.compare(rp.size() - name.size(), name.size(), name) != 0) continue;
        if (e.dynamic() && e.dynamics().size() > 0) dyn_elfs.push_back(e);
        else                                        elfs.push_back(e);
    }

    auto pickMostSegs = [](const std::vector<ElfScanner>& v) -> ElfScanner {
        if (v.empty()) return {};
        if (v.size() == 1) return v[0];
        ElfScanner best = v[0];
        int bestN = (int)v[0].segments().size();
        for (size_t i = 1; i < v.size(); ++i) {
            int n = (int)v[i].segments().size();
            if (n >= bestN) { best = v[i]; bestN = n; }
        }
        return best;
    };

    if (!dyn_elfs.empty()) return pickMostSegs(dyn_elfs);
    return pickMostSegs(elfs);
}

bool ElfScannerManager::Scan(const std::set<std::string>& libraries) {
    if (libraries.empty())
        return true;

    LOGI("[ElfScannerManager] Starting scan for %zu libraries...", libraries.size());
    auto start = std::chrono::high_resolution_clock::now();

    // 收集需要扫描的目标
    struct ScanTask { int index; std::string name; };
    std::vector<ScanTask> tasks;
    tasks.reserve(libraries.size());
    for (const auto& libName : libraries) {
        int idx = -1;
        for (const auto& entry : kLibTable) {
            if (entry.soName == libName) { idx = entry.index; break; }
        }
        if (idx < 0) {
            LOGE("[ElfScannerManager] Unknown library: %s (not in predefined list)", libName.c_str());
            continue;
        }
        if (m_scanners[idx].isValid()) {
            LOGW("[ElfScannerManager] Library already scanned: %s", libName.c_str());
            continue;
        }
        tasks.push_back({ idx, libName });
    }
    if (tasks.empty()) {
        LOGI("[ElfScannerManager] Nothing to scan");
        return true;
    }

    // 单次拉取所有 ELF
    std::vector<ElfScanner> allElfs;
    for (int retry = 0; retry < 100; ++retry) {
        allElfs = KT::GetAllELFs();
        if (!allElfs.empty()) break;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    if (allElfs.empty()) {
        LOGE("[ElfScannerManager] GetAllELFs returned empty after 100 retries");
        return false;
    }
    LOGI("[ElfScannerManager] GetAllELFs: %zu loaded ELFs", allElfs.size());

    // 在快照里逐一过滤选取
    bool allSuccess = true;
    for (const auto& task : tasks) {
        ElfScanner picked = SelectByName(allElfs, task.name);

        // 个别目标可能还没 dlopen（如游戏 lazy-load），轮询等一会
        for (int retry = 0; !picked.isValid() && retry < 50; ++retry) {
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
            allElfs = KT::GetAllELFs();
            picked = SelectByName(allElfs, task.name);
        }

        if (!picked.isValid()) {
            LOGE("[ElfScannerManager] Failed to find library: %s", task.name.c_str());
            allSuccess = false;
            continue;
        }
        m_scanners[task.index] = std::move(picked);
        LOGI("[ElfScannerManager] %s base: 0x%llX",
             task.name.c_str(), (unsigned long long)m_scanners[task.index].base());
    }

    auto end = std::chrono::high_resolution_clock::now();
    double elapsed = std::chrono::duration<double, std::milli>(end - start).count();
    LOGI("[ElfScannerManager] Scan completed in %f ms", elapsed);

    return allSuccess;
}
