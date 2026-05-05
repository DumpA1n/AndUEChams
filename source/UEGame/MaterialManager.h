#pragma once

#include <atomic>
#include <mutex>
#include <string_view>

#include "UEGame/UECore/SDK_A/SDK.hpp"

class MaterialManager
{
public:
    MaterialManager(const MaterialManager&)            = delete;
    MaterialManager& operator=(const MaterialManager&) = delete;

protected:
    MaterialManager() {}
    ~MaterialManager() {}

public:
    static MaterialManager* GetInstance()
    {
        static MaterialManager Instance;
        return &Instance;
    }

private:
    std::mutex        MatMtx;
    std::atomic<bool> bPlayerMoved{false};
    std::atomic<bool> bMaterialLoading{false};
    std::atomic<bool> bVelocityCheckRunning{false};

    UMaterial* XrayMaterial        = nullptr;
    APawn*     LocalPlayer         = nullptr;
    bool       bIsBreakThroughMode = false;

    void* LastLocalPlayer       = nullptr;
    bool  bLastBreakThroughMode = false;
    bool  bLastStateValid       = false;

    static constexpr std::string_view XRAY_MATERIAL_NORMAL =
        "Material M_Simple_XrayOutLine.M_Simple_XrayOutLine";
    static constexpr std::string_view XRAY_MATERIAL_BREAKTHROUGH =
        "Material M_Simple_XrayOutLine_02.M_Simple_XrayOutLine_02";

public:
    void       UpdateMaterial();
    UMaterial* GetXrayMaterial();

private:
    void StartVelocityCheck();

    bool ShouldLoadMaterial();

    void LoadMaterialAsync();

    bool IsPlayerMoved() const { return bPlayerMoved.load(); }
    bool IsMaterialLoading() const { return bMaterialLoading.load(); }
};
