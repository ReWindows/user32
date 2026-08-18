# `global` :: `Scrollbar`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `user32.dll`. Total members: **28**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class InputTraceLogging; 
class Scrollbar; 
class BSMINFO; class CCallWndProcHook; class CGetMessageHook; class CHookFactory; class CLocalHookManager; class CMouseHook; class ClientWindowInfoClass; class DISPLAYCONFIG_PATH_INFO_INTERNAL; class DLGITEMTEMPLATE; class DLGTEMPLATE; class DLGTEMPLATE2; class DPI_AWARENESS_CONTEXT__; class DRAWTEXTDATA; class DXGADAPTERSOURCEHASH; class Destroy; class EditMenuItemState; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HACCEL__; class HBITMAP__; class HBRUSH__; class HCONVLIST__; class HCONV__; class HDC__; class HDDEDATA__; class HDESK__; class HFONT__; class HGESTUREINFO__; class HHOOK__; class HICON__; class HIMC__; class HINSTANCE__; class HKEY__; class HKL__; class HLP; class HMENU__; class HMONITOR__; class HPALETTE__; class HRGN__; class HSZ__; class HTOUCHINPUT__; class HWINSTA__; class HWND__; class HashTable; class HashTableIter; class IDataObject; class ILocalHook; class InputTraceLogging; class MENUITEMTEMPLATE2; class ReleaseSRWLockExclusive; class STRIPINFO; class Scrollbar; class TooltipInfo; class UserWinPropList; class UserWindowPropMangerClassA; class UserWindowPropMangerClassW; class WindowServicesCommon; class _ABC; class _ACTIVATION_CONTEXT; class _CAPTUREBUF; class _CLIENTKEYBOARDTYPE; class _CONTEXT; class _ERROR_ELEMENT; class _EXCEPTION_RECORD; class _FILEINFO; class _GENERICHOOKHEADER; class _GUID; class _HANDLENODE; class _IN_STRING; class _KEY_BASIC_INFORMATION; class _KEY_VALUE_PARTIAL_INFORMATION; class _LARGE_IN_STRING; class _LARGE_STRING; class _LOOKASIDE; class _LUID; class _MSGBOXDATA; class _POINTL; class _PS_PKG_CLAIM; class _REASON; class _REASONDATA; class _RTAG; class _RTL_DYNAMIC_HASH_TABLE_ENTRY; class _RTL_SRWLOCK; class _SECURITY_ATTRIBUTES; class _SHAREDPROP; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _UNICODE_STRING; class _WIN32_FIND_DATAW; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _devicemodeW; class _tagHWNDCACHE; class _tagIMEHOTKEY; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class tagACCELCACHE; class tagADVISE_LINK; class tagARRANGEWINDOWSDATA; class tagBITMAPINFO; class tagBITMAPINFOHEADER; class tagBLOCK; class tagBUTN; class tagCBox; class tagCLIENTWNDINFO; class tagCLS; class tagCLSMENUNAME; class tagCL_CONV_INFO; class tagCL_INSTANCE_INFO; class tagCONVCONTEXT; class tagCONV_INFO; class tagCREATESTRUCTW; class tagCURSORDATA; class tagCURSORFIND; class tagCURSORRESOURCE; class tagDDEML_MSG_HOOK_DATA; class tagDRAWTEXTPARAMS; class tagED; class tagENABLE_ENUM_STRUCT; class tagEVENT_PACKET; class tagFE_KEYBOARDS; class tagGESTUREINFO; class tagHELPINFO; class tagICONFILEHEADER; class tagIMEUI; class tagINIT_ENUM; class tagINTDDEINFO; class tagKBDTABLE_MULT_INTERNAL; class tagLBIV; class tagLINK_COUNT; class tagLOCALHOOKCOLLECTION; class tagLOGFONTA; class tagLOGFONTW; class tagMDICREATESTRUCTW; class tagMENUINFO; class tagMENUITEMINFOW; class tagMINMAXINFO; class tagMNIDROPTARGET; class tagMONITOR; class tagMSG; class tagNEWHEADER; class tagPOINT; class tagREADERINFO; class tagREADERMODE; class tagRECT; class tagRESDIR; class tagSBCALC; class tagSBDATA; class tagSBINFO; class tagSBTRACK; class tagSBWND; class tagSCROLLBARINFO; class tagSCROLLINFO; class tagSHORTCREATE; class tagSIZE; class tagSTAT; class tagSVR_CONV_INFO; class tagTEXTMETRICW; class tagTOUCHINPUT; class tagTOUCHPAD_PARAMETERS_V2; class tagTOUCHTARGETINGCONTACT; class tagTOUCH_HIT_TESTING_INPUT; class tagUMHANDLEENTRY; class tagUMHANDLELIST; class tagUNDO; class tagUSERAPIHOOK; class tagWND; class tagWNDCLASSEXA; class tagWNDCLASSEXW; class tagWOWCLS; class tagXACT_INFO; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace Microsoft { namespace WRL { class ComPtr; } } 
namespace Microsoft { namespace WRL { namespace Details { class ComPtrRef; } } } 
namespace Windows { namespace UI { namespace Composition { namespace Internal { class IVisualInternal; } } } } 
namespace std { class nullptr_t; } 
namespace wil { class FailureInfo; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

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

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `SetScrollBarParameters` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `InitPSBCalcWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnableScrollBar` | `int` | `Method` | `Pdb` | No (PDB) |
| `DrawScrollBarWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawThumbWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `InitPSBCalc` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawGroove` | `void` | `Method` | `Pdb` | No (PDB) |
| `HitTestScrollBar` | `int` | `Method` | `Pdb` | No (PDB) |
| `EndScroll` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawScrollBar` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetScrollBarInfo` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetScrollBarParameters` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetColorObjects` | `struct HBRUSH__*` | `Accessor` | `Pdb` | No (PDB) |
| `CalcTrackDragRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `ContScroll` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoScroll` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoScrollMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawInvertScrollArea` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetFnidString` | `char const *` | `Accessor` | `Pdb` | No (PDB) |
| `InvertScrollHilite` | `void` | `Method` | `Pdb` | No (PDB) |
| `MoveThumb` | `void` | `Method` | `Pdb` | No (PDB) |
| `RecalcTrackRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `SBPosFromPx` | `int` | `Method` | `Pdb` | No (PDB) |
| `TrackBox` | `void` | `Method` | `Pdb` | No (PDB) |
| `TrackInit` | `void` | `Method` | `Pdb` | No (PDB) |
| `TrackLoop` | `void` | `Method` | `Pdb` | No (PDB) |
| `TrackThumb` | `void` | `Method` | `Pdb` | No (PDB) |
