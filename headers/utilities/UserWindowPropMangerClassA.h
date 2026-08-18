#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 9 member(s).
class UserWindowPropMangerClassA {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupWinpropManager@UserWindowPropMangerClassA@@SAXXZ
    static void CleanupWinpropManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserWindowProp@UserWindowPropMangerClassA@@SAPEAXPEAUtagWND@@PEBD@Z
    static void * GetUserWindowProp(tagWND *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWinpropManager@UserWindowPropMangerClassA@@SAXXZ
    static void InitWinpropManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RemoveUserWindowProp@UserWindowPropMangerClassA@@SAPEAXPEAUtagWND@@PEBD@Z
    static void * RemoveUserWindowProp(tagWND *, char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserWindowProp@UserWindowPropMangerClassA@@SAHPEAUtagWND@@PEBDPEAX@Z
    static int SetUserWindowProp(tagWND *, char const *, void *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CreateAndSetSharedWindowProp@UserWindowPropMangerClassA@@AEAAPEAU_SHAREDPROP@@PEAUtagCLIENTWNDINFO@@GPEAX@Z
    _SHAREDPROP * CreateAndSetSharedWindowProp(tagCLIENTWNDINFO *, unsigned short, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPropListForWnd@UserWindowPropMangerClassA@@CA_NPEAUtagCLIENTWNDINFO@@@Z
    static bool InitPropListForWnd(tagCLIENTWNDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSharedProp@UserWindowPropMangerClassA@@AEAAGPEBD@Z
    unsigned short IsSharedProp(char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RemoveSharedWindowProp@UserWindowPropMangerClassA@@AEAAPEAXPEAUtagWND@@G@Z
    void * RemoveSharedWindowProp(tagWND *, unsigned short);
};
