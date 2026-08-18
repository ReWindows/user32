#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 8 member(s).
class tagMNIDROPTARGET {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@tagMNIDROPTARGET@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@tagMNIDROPTARGET@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@tagMNIDROPTARGET@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@tagMNIDROPTARGET@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@tagMNIDROPTARGET@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@tagMNIDROPTARGET@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@tagMNIDROPTARGET@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0tagMNIDROPTARGET@@QEAA@XZ
    tagMNIDROPTARGET();
};
