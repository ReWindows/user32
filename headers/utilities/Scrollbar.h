#pragma once
#include "../windissect_forwards.h"

// Reconstructed from user32.dll by Windissect. 28 member(s).
class Scrollbar {
public:
    class Control;
    class NonClient;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTrackDragRect@Scrollbar@@YAXPEAUtagSBTRACK@@@Z
    void CalcTrackDragRect(tagSBTRACK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContScroll@Scrollbar@@YAXPEAUtagWND@@H@Z
    void ContScroll(tagWND *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoScroll@Scrollbar@@YAXPEAUtagWND@@0HHHH@Z
    void DoScroll(tagWND *, tagWND *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoScrollMenu@Scrollbar@@YAXPEAUtagWND@@0H_JH@Z
    void DoScrollMenu(tagWND *, tagWND *, int, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGroove@Scrollbar@@YAXPEAUHDC__@@PEAUHBRUSH__@@QEAUtagRECT@@H@Z
    void DrawGroove(HDC__*, HBRUSH__*, tagRECT * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInvertScrollArea@Scrollbar@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z
    void DrawInvertScrollArea(tagWND *, tagSBTRACK *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawScrollBar@Scrollbar@@YAXPEAUtagWND@@PEAUHDC__@@HH@Z
    void DrawScrollBar(tagWND *, HDC__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawScrollBarWorker@Scrollbar@@YAXPEAUtagWND@@QEAUtagSBCALC@@PEAUHDC__@@HIH@Z
    void DrawScrollBarWorker(tagWND *, tagSBCALC * const, HDC__*, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSize@Scrollbar@@YAXPEAUtagWND@@PEAUHDC__@@HH@Z
    void DrawSize(tagWND *, HDC__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawThumbWorker@Scrollbar@@YAXPEAUtagWND@@QEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z
    void DrawThumbWorker(tagWND *, tagSBCALC * const, HDC__*, HBRUSH__*, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableScrollBar@Scrollbar@@YAHPEAUtagWND@@IIH@Z
    int EnableScrollBar(tagWND *, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndScroll@Scrollbar@@YAXPEAUtagWND@@HH@Z
    void EndScroll(tagWND *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorObjects@Scrollbar@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@H@Z
    HBRUSH__* GetColorObjects(tagWND *, HDC__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFnidString@Scrollbar@@YAPEBDPEBUtagWND@@@Z
    char const * GetFnidString(tagWND const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollBarInfo@Scrollbar@@YAHPEAUtagWND@@JPEAUtagSCROLLBARINFO@@@Z
    int GetScrollBarInfo(tagWND *, long, tagSCROLLBARINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollBarParameters@Scrollbar@@YAHPEAUtagWND@@HPEAUtagSBDATA@@PEAUtagSCROLLINFO@@@Z
    int GetScrollBarParameters(tagWND *, int, tagSBDATA *, tagSCROLLINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestScrollBar@Scrollbar@@YAHPEAUtagWND@@HUtagPOINT@@@Z
    int HitTestScrollBar(tagWND *, int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPSBCalc@Scrollbar@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z
    void InitPSBCalc(tagWND *, tagSBCALC *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPSBCalcWorker@Scrollbar@@YAXPEAUtagSBCALC@@QEAUtagRECT@@QEAUtagSBDATA@@H@Z
    void InitPSBCalcWorker(tagSBCALC *, tagRECT * const, tagSBDATA * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvertScrollHilite@Scrollbar@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z
    void InvertScrollHilite(tagWND *, tagSBTRACK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveThumb@Scrollbar@@YAXPEAUtagWND@@PEAUtagSBCALC@@HH@Z
    void MoveThumb(tagWND *, tagSBCALC *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecalcTrackRect@Scrollbar@@YAXPEAUtagSBTRACK@@@Z
    void RecalcTrackRect(tagSBTRACK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SBPosFromPx@Scrollbar@@YAHQEAUtagSBCALC@@H@Z
    int SBPosFromPx(tagSBCALC * const, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollBarParameters@Scrollbar@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z
    int SetScrollBarParameters(tagSBDATA *, tagSCROLLINFO *, int *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackBox@Scrollbar@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@H@Z
    void TrackBox(tagWND *, unsigned int, uint64_t, int64_t, tagSBCALC *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackInit@Scrollbar@@YAXPEAUtagWND@@_JHIH@Z
    void TrackInit(tagWND *, int64_t, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackLoop@Scrollbar@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@H@Z
    void TrackLoop(tagWND *, int64_t, tagSBCALC *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackThumb@Scrollbar@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@H@Z
    void TrackThumb(tagWND *, unsigned int, uint64_t, int64_t, tagSBCALC *, int);
};
