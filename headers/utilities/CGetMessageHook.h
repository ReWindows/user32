#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 4 member(s).
class CGetMessageHook {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Call@CGetMessageHook@@UEAA_JH_K_J@Z
    virtual int64_t Call(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallNext@CGetMessageHook@@UEAA_JH_K_J@Z
    virtual int64_t CallNext(int, uint64_t, int64_t);
};
