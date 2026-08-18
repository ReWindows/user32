#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 2 member(s).
class WindowServicesCommon {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddModuleReference@WindowServicesCommon@@YA_NP6AXPEAUHWND__@@@Z@Z
    bool AddModuleReference(void ( *)(HWND__*));
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseModuleReference@WindowServicesCommon@@YAXP6AXPEAUHWND__@@@Z@Z
    void ReleaseModuleReference(void ( *)(HWND__*));
};
