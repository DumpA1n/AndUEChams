#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace SDK::Profiles
{

class IGameProfile
{
public:
    virtual ~IGameProfile() = default;

    virtual const char* AppName() const = 0;

    virtual std::vector<const char*> AppIDs() const = 0;

    virtual uintptr_t FindTUObjectArray() const = 0;

    virtual uintptr_t ObjectsFieldOffset() const = 0;

    virtual std::string GetNameByID(int32_t id) const = 0;

    virtual int32_t NumElementsPerChunk() const = 0;
};

}  // namespace SDK::Profiles
