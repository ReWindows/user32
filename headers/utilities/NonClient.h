#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 7 member(s).
namespace Scrollbar {
class NonClient {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawThumb@NonClient@Scrollbar@@YAXPEAUtagWND@@HH@Z
    void DrawThumb(tagWND *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableArrows@NonClient@Scrollbar@@YAHPEAUtagWND@@IIH@Z
    int EnableArrows(tagWND *, unsigned int, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisableFlags@NonClient@Scrollbar@@YAIPEAUtagWND@@H@Z
    unsigned int GetDisableFlags(tagWND *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPSBInfo@NonClient@Scrollbar@@YAPEAUtagSBINFO@@PEBUtagWND@@@Z
    tagSBINFO * GetPSBInfo(tagWND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPSBInfo@NonClient@Scrollbar@@YAPEAUtagSBINFO@@PEAUtagWND@@@Z
    tagSBINFO * InitPSBInfo(tagWND *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollBar@NonClient@Scrollbar@@YAJPEAUtagWND@@HPEAUtagSCROLLINFO@@HH@Z
    long SetScrollBar(tagWND *, int, tagSCROLLINFO *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowScrollBar@NonClient@Scrollbar@@YAHPEAUHWND__@@IH@Z
    int ShowScrollBar(HWND__*, unsigned int, int);
};
} // namespace Scrollbar
