# `global` :: `CCallWndProcHook`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `user32.dll`. Total members: **3**.

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

// Reconstructed from user32.dll by Windissect. 3 member(s).
class CCallWndProcHook {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Call@CCallWndProcHook@@UEAA_JH_K_J@Z
    virtual int64_t Call(int, uint64_t, int64_t);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `Call` | `int64_t` | `Method` | `Pdb` | No (PDB) |
