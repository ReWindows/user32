#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 2 member(s).
namespace InputTraceLogging {
class Pointer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteToGesture@Pointer@InputTraceLogging@@SAXPEAUHWND__@@PEBUtagGESTUREINFO@@@Z
    static void PromoteToGesture(HWND__*, tagGESTUREINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteToTouch@Pointer@InputTraceLogging@@SAXPEAUHWND__@@IPEBUtagTOUCHINPUT@@@Z
    static void PromoteToTouch(HWND__*, unsigned int, tagTOUCHINPUT const *);
};
} // namespace InputTraceLogging
