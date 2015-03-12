{ Parsed from DiscRecording.framework DRCoreObject.h }

{$ifndef _H_DRCoreObject}

{$ifdef TYPES}
type
  DRTypeRef = CFTypeRef;
  DRTypeRefPtr = ^DRTypeRef;
  DRRefConRetainCallback = function (refCon: pointer): pointer; cdecl;
  DRRefConReleaseCallback = procedure (refCon: pointer); cdecl;

type
  DRRefConCallbacks = record
    version: culong;
    retain: DRRefConRetainCallback;
    release: DRRefConReleaseCallback;
  end;
type
  DRRefConCallbacksPtr = ^DRRefConCallbacks;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDRRefConCFTypeCallbacks: DRRefConCallbacks; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
procedure DRSetRefCon(ref: DRTypeRef; refCon: pointer; callbacks: DRRefConCallbacksPtr); cdecl; external;
function DRGetRefCon(ref: DRTypeRef): pointer; cdecl; external;
function DRCopyLocalizedStringForValue(value: CFStringRef): CFStringRef; cdecl; external;
{$endif}

{$endif}
