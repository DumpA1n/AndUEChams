#pragma once

// #include "Graphics/IGraphics.h"

#include <unordered_map>
#include <string>

#include "imgui/imgui.h"

// 资源管理器 - 单例模式
class ResourceManager {
public:
    static ResourceManager& GetInstance();
    
    // 禁用拷贝和赋值
    ResourceManager(const ResourceManager&) = delete;
    ResourceManager& operator=(const ResourceManager&) = delete;
    
    // 初始化字体资源
    bool initializeFonts(float fontSize);
    
    // 获取字体
    ImFont* getZhFont() const { return m_zhFont; }
    ImFont* getIconFont(int index) const;
    
    // 纹理管理
    // BaseTexData* loadTexture(IGraphics* graphics, const char* filepath);
    // void unloadTexture(IGraphics* graphics, BaseTexData* texture);
    // void clearAllTextures(IGraphics* graphics);
    
private:
    ResourceManager() = default;
    ~ResourceManager() = default;
    
    // 从系统目录查找中文字体
    std::string findSystemChineseFont();
    
    // 字体资源
    ImFont* m_zhFont = nullptr;
    ImFont* m_iconFonts[3] = {nullptr, nullptr, nullptr};
    
    // 纹理资源
    // std::unordered_map<std::string, BaseTexData*> m_textures;
};
