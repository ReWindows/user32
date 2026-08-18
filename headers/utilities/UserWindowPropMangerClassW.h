#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 11 member(s).
class UserWindowPropMangerClassW {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupWinpropManager@UserWindowPropMangerClassW@@SAXXZ
    static void CleanupWinpropManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserWindowProp@UserWindowPropMangerClassW@@SAPEAXPEAUtagWND@@PEBG@Z
    static void * GetUserWindowProp(tagWND *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWinpropManager@UserWindowPropMangerClassW@@SAXXZ
    static void InitWinpropManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RemoveUserWindowProp@UserWindowPropMangerClassW@@SAPEAXPEAUtagWND@@PEBG@Z
    static void * RemoveUserWindowProp(tagWND *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserWindowProp@UserWindowPropMangerClassW@@SAHPEAUtagWND@@PEBGPEAX@Z
    static int SetUserWindowProp(tagWND *, unsigned short const *, void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupPropListForWnd@UserWindowPropMangerClassW@@CA_NPEAUtagCLIENTWNDINFO@@@Z
    static bool CleanupPropListForWnd(tagCLIENTWNDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CreateAndSetSharedWindowProp@UserWindowPropMangerClassW@@AEAAPEAU_SHAREDPROP@@PEAUtagCLIENTWNDINFO@@GPEAX@Z
    _SHAREDPROP * CreateAndSetSharedWindowProp(tagCLIENTWNDINFO *, unsigned short, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPropListForWnd@UserWindowPropMangerClassW@@CA_NPEAUtagCLIENTWNDINFO@@@Z
    static bool InitPropListForWnd(tagCLIENTWNDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWinpropManagerInSecondPhase@UserWindowPropMangerClassW@@AEAAXXZ
    void InitWinpropManagerInSecondPhase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSharedProp@UserWindowPropMangerClassW@@AEAAGPEBG@Z
    unsigned short IsSharedProp(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RemoveSharedWindowProp@UserWindowPropMangerClassW@@AEAAPEAXPEAUtagWND@@G@Z
    void * RemoveSharedWindowProp(tagWND *, unsigned short);
};
