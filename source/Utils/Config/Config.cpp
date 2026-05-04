#include "Config.h"
#include "Utils/Logger.h"

#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <unistd.h>
#include <unordered_map>
#include <variant>
#include <vector>

namespace fs = std::filesystem;

// ===== Config 全局实例 =====

Config CFG{};

// ===== 字段注册表 =====

std::vector<ConfigField> GetConfigFields(Config& c) {
    return {
        {"bAutoLoadConfigOnStartup", &c.bAutoLoadConfigOnStartup},

        {"InjectionMode",  &c.InjectionMode},
        {"RenderBackend",  &c.RenderBackend},
        {"bShowImGuiDraw", &c.bShowImGuiDraw},
        {"FontScale",      &c.FontScale},

        {"bMaterialHack",  &c.bMaterialHack},
        {"PickupPrice",    &c.PickupPrice},
        {"PickupQuality",  &c.PickupQuality},
    };
}

// ===== 路径工具 =====

std::filesystem::path getExternalStorage() {
    char* path = getenv("EXTERNAL_STORAGE");
    if (path) {
        return std::filesystem::path(path);
    } else {
        return "/sdcard";
    }
}

fs::path GetConfigSavePath() {
    return getExternalStorage() / "Android" / "data" / getprogname() / "cache";
}

// ===== 配置文件管理 =====

static std::string s_ActiveConfigName = ".dfm_0";

std::vector<std::string> ScanConfigFiles() {
    std::vector<std::string> result;
    fs::path dir = GetConfigSavePath();
    if (!fs::exists(dir)) return result;

    for (const auto& entry : fs::directory_iterator(dir)) {
        if (!entry.is_regular_file()) continue;
        std::string name = entry.path().filename().string();
        if (name.starts_with(".dfm_")) {
            result.push_back(name);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

const std::string& GetActiveConfigName() {
    return s_ActiveConfigName;
}

void SetActiveConfigName(const std::string& name) {
    s_ActiveConfigName = name;
    LOGI("Active config set to: %s", name.c_str());
    SaveLastActiveConfigName();
}

fs::path GetActiveConfigFullPath() {
    return GetConfigSavePath() / s_ActiveConfigName;
}

std::string CreateNewConfigFile() {
    fs::path dir = GetConfigSavePath();
    if (!fs::exists(dir)) {
        fs::create_directories(dir);
    }

    int maxNum = -1;
    for (const auto& entry : fs::directory_iterator(dir)) {
        if (!entry.is_regular_file()) continue;
        std::string name = entry.path().filename().string();
        if (name.starts_with(".dfm_")) {
            try {
                int num = std::stoi(name.substr(5));
                if (num > maxNum) maxNum = num;
            } catch (...) {}
        }
    }

    std::string newName = ".dfm_" + std::to_string(maxNum + 1);
    fs::path newPath = dir / newName;
    SaveConfig(newPath);
    LOGI("Created new config file: %s", newName.c_str());
    return newName;
}

// ===== 序列化 =====

void SaveConfig(const fs::path& path) {
    std::ofstream file(path, std::ios::binary | std::ios::out);
    if (!file.is_open()) {
        LOGI("Failed to open file for save config: %s", path.c_str());
        return;
    }

    auto fields = GetConfigFields(CFG);
    for (const auto& f : fields) {
        file << f.name << '=';
        std::visit([&file](auto* p) {
            file << *p;
        }, f.ptr);
        file << '\n';
    }

    file.close();
    LOGI("Configuration saved (%zu fields) to %s", fields.size(), path.c_str());
}

void LoadConfig(const fs::path& path) {
    std::ifstream file(path, std::ios::binary | std::ios::in);
    if (!file.is_open()) {
        LOGI("Failed to open file for load config: %s", path.c_str());
        return;
    }

    auto fields = GetConfigFields(CFG);
    std::unordered_map<std::string, ConfigField*> fieldMap;
    fieldMap.reserve(fields.size());
    for (auto& f : fields) {
        fieldMap[f.name] = &f;
    }

    std::string line;
    size_t loaded = 0;
    while (std::getline(file, line)) {
        size_t pos = line.find('=');
        if (pos == std::string::npos) continue;

        std::string key = line.substr(0, pos);
        std::string value = line.substr(pos + 1);

        auto it = fieldMap.find(key);
        if (it == fieldMap.end()) continue;

        try {
            std::visit([&value](auto* p) {
                using T = std::remove_pointer_t<decltype(p)>;
                if constexpr (std::is_same_v<T, bool>)
                    *p = static_cast<bool>(std::stoi(value));
                else if constexpr (std::is_same_v<T, int>)
                    *p = std::stoi(value);
                else if constexpr (std::is_same_v<T, float>)
                    *p = std::stof(value);
            }, it->second->ptr);
            ++loaded;
        } catch (const std::exception& e) {
            LOGI("Failed to parse config field '%s': %s", key.c_str(), e.what());
        }
    }

    file.close();
    LOGI("Configuration loaded (%zu/%zu fields) from %s", loaded, fields.size(), path.c_str());
}

void SaveActiveConfig() {
    fs::path path = GetActiveConfigFullPath();
    SaveConfig(path);
    SaveLastActiveConfigName();
}

void LoadActiveConfig() {
    fs::path path = GetActiveConfigFullPath();
    if (!fs::exists(path)) {
        LOGI("Config file does not exist, saving defaults: %s", path.c_str());
        SaveConfig(path);
    }
    LoadConfig(path);
    SaveLastActiveConfigName();
}

// ===== 持久化上次使用的配置文件名 =====

static fs::path GetLastActiveConfigFilePath() {
    return GetConfigSavePath() / ".dfm_active";
}

void SaveLastActiveConfigName() {
    fs::path p = GetLastActiveConfigFilePath();
    fs::path dir = p.parent_path();
    if (!fs::exists(dir)) {
        fs::create_directories(dir);
    }
    std::ofstream file(p, std::ios::out | std::ios::trunc);
    if (file.is_open()) {
        file << s_ActiveConfigName;
        file.close();
    } else {
        LOGI("Failed to save last active config name to: %s", p.c_str());
    }
}

std::string LoadLastActiveConfigName() {
    fs::path p = GetLastActiveConfigFilePath();
    if (!fs::exists(p)) {
        return ".dfm_0";
    }
    std::ifstream file(p, std::ios::in);
    if (!file.is_open()) {
        return ".dfm_0";
    }
    std::string name;
    std::getline(file, name);
    file.close();
    if (name.empty()) {
        return ".dfm_0";
    }
    return name;
}

// ===== 启动时自动加载 =====

void AutoLoadConfigOnStartup() {
    std::string lastName = LoadLastActiveConfigName();
    LOGI("[Config] Last active config: %s", lastName.c_str());

    fs::path configPath = GetConfigSavePath() / lastName;
    if (!fs::exists(configPath)) {
        LOGI("[Config] Config file not found, skipping auto-load: %s", configPath.c_str());
        return;
    }

    s_ActiveConfigName = lastName;

    LoadConfig(configPath);

    if (!CFG.bAutoLoadConfigOnStartup) {
        LOGI("[Config] bAutoLoadConfigOnStartup is false, reverting to defaults");
        CFG = Config{};
        return;
    }

    LOGI("[Config] Auto-loaded config: %s", lastName.c_str());
}
