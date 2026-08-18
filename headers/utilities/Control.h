#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 6 member(s).
namespace Scrollbar {
class Control {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawThumb@Control@Scrollbar@@YAXPEAUtagSBWND@@H@Z
    void DrawThumb(tagSBWND *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableArrows@Control@Scrollbar@@YAHPEAUtagWND@@I@Z
    int EnableArrows(tagWND *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PwndToPsbwnd@Control@Scrollbar@@YAPEAUtagSBWND@@PEAUtagWND@@@Z
    tagSBWND * PwndToPsbwnd(tagWND *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaretPosition@Control@Scrollbar@@YAXPEAUtagSBWND@@@Z
    void SetCaretPosition(tagSBWND *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Setup@Control@Scrollbar@@YAXPEAUtagSBWND@@@Z
    void Setup(tagSBWND *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProcWorker@Control@Scrollbar@@YA_JPEAUtagWND@@I_K_JH@Z
    int64_t WndProcWorker(tagWND *, unsigned int, uint64_t, int64_t, int);
};
} // namespace Scrollbar
