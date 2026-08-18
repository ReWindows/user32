#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 3 member(s).
class DXGADAPTERSOURCEHASH {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DXGADAPTERSOURCEHASH@@QEAA@XZ
    DXGADAPTERSOURCEHASH();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z
    long FindAdapterAndSourceForHash(unsigned int, _LUID *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z
    long FindHashForAdapterAndSource(_LUID const *, unsigned int, unsigned int *);
};
