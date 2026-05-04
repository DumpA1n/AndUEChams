#include "ProfileRegistry.h"

#include <cstring>
#include <unistd.h>

#include "Logger.h"
#include "Profiles/DeltaForce.h"

namespace SDK::Profiles
{
namespace
{

std::vector<IGameProfile*>& Registry()
{
    static std::vector<IGameProfile*> profiles = {
        new DeltaForceProfile(),
    };
    return profiles;
}

}  // anonymous namespace

IGameProfile* MatchCurrentProcess()
{
    const char* progname = getprogname();
    if (!progname || !*progname) return nullptr;

    for (auto* p : Registry())
    {
        for (const char* id : p->AppIDs())
        {
            if (std::strcmp(progname, id) == 0)
            {
                FLOGI("[Profile] matched '{}' for progname '{}'",
                      p->AppName(), progname);
                return p;
            }
        }
    }

    FLOGW("[Profile] no match for progname '{}'", progname);
    return nullptr;
}

const std::vector<IGameProfile*>& GetAll()
{
    return Registry();
}

}  // namespace SDK::Profiles
