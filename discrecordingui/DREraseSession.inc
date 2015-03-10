{ Parsed from DiscRecordingUI.framework (MacOSX10.10) DREraseSession.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DREraseSession}

{$ifdef TYPES}
type
  DREraseSessionRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function DREraseSessionGetTypeID: CFTypeID; cdecl; external;
function DREraseSessionCreate: DREraseSessionRef; cdecl; external;
procedure DREraseSessionSetErase(eraseSession: DREraseSessionRef; erase: DREraseRef); cdecl; external;
function DREraseSessionGetErase(eraseSession: DREraseSessionRef): DREraseRef; cdecl; external;
{$endif}

{$ifdef TYPES}
const
  kDREraseSessionOK = 1;
  kDREraseSessionCancel = 0;
const
  kEraseSessionSetupDialogOptionsCurrentVersion = 1;
const
  kEraseSessionSetupDialogDefaultOptions = $00000000;
  kEraseSessionSetupDialogDontHandleReservations = $00000001;

type
  DREraseSessionSetupDialogOptionFlags = UInt32;
  DREraseSessionSetupDialogOptionFlagsPtr = ^DREraseSessionSetupDialogOptionFlags;

type
  DREraseSessionSetupDialogOptions = record
    version: UInt32;
    dialogOptionFlags: DREraseSessionSetupDialogOptionFlags;
  end;
type
  DREraseSessionSetupDialogOptionsPtr = ^DREraseSessionSetupDialogOptions;

const
  kDREraseSessionSetupCallbacksCurrentVersion = 1;

type
   DREraseSessionDeviceCheckProcPtr = function (eraseSession: DREraseSessionRef; device: DRDeviceRef): Boolean; cdecl;
   DREraseSessionMediaCheckProcPtr = function (eraseSession: DREraseSessionRef; device: DRDeviceRef; prompt: CFStringRefPtr): Boolean; cdecl;
   DREraseSessionDeviceSelectionNotificationProcPtr = procedure (eraseSession: DREraseSessionRef; selectedDevice: DRDeviceRef); cdecl;

type
  DREraseSessionSetupCallbacks = record
    version: UInt32;
    deviceShouldBeTarget: DREraseSessionDeviceCheckProcPtr;
    containsSuitableMedia: DREraseSessionMediaCheckProcPtr;
    deviceSelectionChanged: DREraseSessionDeviceSelectionNotificationProcPtr;
  end;
type
  DREraseSessionSetupCallbacksPtr = ^DREraseSessionSetupCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function DREraseSessionSetupDialog(eraseSession: DREraseSessionRef; options: DREraseSessionSetupDialogOptionsPtr; setupCallbacks: DREraseSessionSetupCallbacksPtr): SInt8; cdecl; external;
{$endif}

{$ifdef TYPES}
const
  kDREraseProgressSetupCallbacksCurrentVersion = 1;

type
   DREraseSessionProgressBeginNotificationProcPtr = procedure (eraseSession: DREraseSessionRef); cdecl;
   DREraseSessionProgressFinishNotificationProcPtr = procedure (eraseSession: DREraseSessionRef); cdecl;
   DREraseSessionEraseCompleteProcPtr = function (eraseSession: DREraseSessionRef; erase: DREraseRef): Boolean; cdecl;

type
  DREraseSessionProgressCallbacks = record
    version: UInt32;
    progressWillBegin: DREraseSessionProgressBeginNotificationProcPtr;
    progressDidFinish: DREraseSessionProgressFinishNotificationProcPtr;
    eraseDidFinish: DREraseSessionEraseCompleteProcPtr;
  end;
type
  DREraseSessionProgressCallbacksPtr = ^DREraseSessionProgressCallbacks;

const
  kEraseSessionProgressDialogOptionsCurrentVersion = 1;
const
  kEraseSessionProgressDialogDefaultOptions = $00000000;

type
  DREraseSessionProgressDialogOptionFlags = UInt32;
  DREraseSessionProgressDialogOptionFlagsPtr = ^DREraseSessionProgressDialogOptionFlags;

type
  DREraseSessionProgressDialogOptions = record
    version: UInt32;
    dialogOptionFlags: DREraseSessionProgressDialogOptionFlags;
    description: CFStringRef;
  end;
type
  DREraseSessionProgressDialogOptionsPtr = ^DREraseSessionProgressDialogOptions;
{$endif}

{$ifdef FUNCTIONS}
procedure DREraseSessionBeginProgressDialog(eraseSession: DREraseSessionRef; options: DREraseSessionProgressDialogOptionsPtr; progressCallbacks: DREraseSessionProgressCallbacksPtr); cdecl; external;
{$endif}

{$endif}
