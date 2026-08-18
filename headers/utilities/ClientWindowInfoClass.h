#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 2 member(s).
class ClientWindowInfoClass {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObserver@ClientWindowInfoClass@@SA_NAEBUClientWindowInfoObserver@1@@Z
    static bool AddObserver(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClientWndInfo@ClientWindowInfoClass@@SA_NPEAUtagCLIENTWNDINFO@@@Z
    static bool InitializeClientWndInfo(tagCLIENTWNDINFO *);
};
