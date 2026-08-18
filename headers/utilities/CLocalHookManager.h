#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 6 member(s).
class CLocalHookManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHook@CLocalHookManager@@SAPEAUHHOOK__@@IP6A_JH_K_J@Z_N@Z
    static HHOOK__* AddHook(unsigned int, int64_t ( *)(int, uint64_t, int64_t), bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocalHookInstalled@CLocalHookManager@@SA_NH@Z
    static bool IsLocalHookInstalled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHook@CLocalHookManager@@SA_NPEAUHHOOK__@@@Z
    static bool RemoveHook(HHOOK__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunHookChain@CLocalHookManager@@SA_JHH_K_J@Z
    static int64_t RunHookChain(int, int, uint64_t, int64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHookChainHeadOfType@CLocalHookManager@@CAPEAPEAVILocalHook@@PEAUtagLOCALHOOKCOLLECTION@@I@Z
    static ILocalHook * * GetHookChainHeadOfType(tagLOCALHOOKCOLLECTION *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalCollection@CLocalHookManager@@CAPEAUtagLOCALHOOKCOLLECTION@@XZ
    static tagLOCALHOOKCOLLECTION * GetLocalCollection();
};
