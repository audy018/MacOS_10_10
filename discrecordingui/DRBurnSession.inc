{ Parsed from DiscRecordingUI.framework (MacOSX10.10) DRBurnSession.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRBurnSession}

{$ifdef TYPES}
type
  DRBurnSessionRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function DRBurnSessionGetTypeID: CFTypeID; cdecl; external;
function DRBurnSessionCreate: DRBurnSessionRef; cdecl; external;
procedure DRBurnSessionSetBurn(burnSession: DRBurnSessionRef; burn: DRBurnRef); cdecl; external;
function DRBurnSessionGetBurn(burnSession: DRBurnSessionRef): DRBurnRef; cdecl; external;
{$endif}

{$ifdef TYPES}
const
  kDRBurnSessionOK = 1;
  kDRBurnSessionCancel = 0;
const
  kBurnSessionSetupDialogOptionsCurrentVersion = 1;
const
  kBurnSessionSetupDialogDefaultOptions = $00000000;
  kBurnSessionSetupDialogForceClosedDiscs = $00000001;
  kBurnSessionSetupDialogDontHandleReservations = $00000002;
  kBurnSessionSetupDialogAllowTestBurns = $80000004;

type
  DRBurnSessionSetupDialogOptionFlags = UInt32;
  DRBurnSessionSetupDialogOptionFlagsPtr = ^DRBurnSessionSetupDialogOptionFlags;

type
  DRBurnSessionSetupDialogOptions = record
    version: UInt32;
    dialogOptionFlags: DRBurnSessionSetupDialogOptionFlags;
    defaultButtonTitle: CFStringRef;
  end;
type
  DRBurnSessionSetupDialogOptionsPtr = ^DRBurnSessionSetupDialogOptions;

const
  kDRBurnSessionSetupCallbacksCurrentVersion = 1;

type
   DRBurnSessionDeviceCheckProcPtr = function (burnSession: DRBurnSessionRef; device: DRDeviceRef): Boolean; cdecl;
   DRBurnSessionMediaCheckProcPtr = function (burnSession: DRBurnSessionRef; device: DRDeviceRef; prompt: CFStringRefPtr): Boolean; cdecl;
   DRBurnSessionDeviceSelectionNotificationProcPtr = procedure (burnSession: DRBurnSessionRef; device: DRDeviceRef); cdecl;

type
  DRBurnSessionSetupCallbacks = record
    version: UInt32;
    deviceShouldBeTarget: DRBurnSessionDeviceCheckProcPtr;
    containsSuitableMedia: DRBurnSessionMediaCheckProcPtr;
    deviceSelectionChanged: DRBurnSessionDeviceSelectionNotificationProcPtr;
  end;
type
  DRBurnSessionSetupCallbacksPtr = ^DRBurnSessionSetupCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function DRBurnSessionSetupDialog(burnSession: DRBurnSessionRef; options: DRBurnSessionSetupDialogOptionsPtr; setupCallbacks: DRBurnSessionSetupCallbacksPtr): SInt8; cdecl; external;
{$endif}

{$ifdef TYPES}
const
  kDRBurnProgressSetupCallbacksCurrentVersion = 1;

type
   DRBurnSessionProgressBeginNotificationProcPtr = procedure (burnSession: DRBurnSessionRef); cdecl;
   DRBurnSessionProgressFinishNotificationProcPtr = procedure (burnSession: DRBurnSessionRef); cdecl;
   DRBurnSessionBurnCompleteProcPtr = function (burnSession: DRBurnSessionRef; burn: DRBurnRef): Boolean; cdecl;

type
  DRBurnSessionProgressCallbacks = record
    version: UInt32;
    progressWillBegin: DRBurnSessionProgressBeginNotificationProcPtr;
    progressDidFinish: DRBurnSessionProgressFinishNotificationProcPtr;
    burnDidFinish: DRBurnSessionBurnCompleteProcPtr;
  end;
type
  DRBurnSessionProgressCallbacksPtr = ^DRBurnSessionProgressCallbacks;

const
  kBurnSessionProgressDialogOptionsCurrentVersion = 1;
const
  kBurnSessionProgressDialogDefaultOptions = $00000000;
  kBurnSessionProgressDialogDisplayVerboseProgress = $00000001;

type
  DRBurnSessionProgressDialogOptionFlags = UInt32;
  DRBurnSessionProgressDialogOptionFlagsPtr = ^DRBurnSessionProgressDialogOptionFlags;

type
  DRBurnSessionProgressDialogOptions = record
    version: UInt32;
    dialogOptionFlags: DRBurnSessionProgressDialogOptionFlags;
    description: CFStringRef;
  end;
type
  DRBurnSessionProgressDialogOptionsPtr = ^DRBurnSessionProgressDialogOptions;
{$endif}

{$ifdef FUNCTIONS}
procedure DRBurnSessionBeginProgressDialog(burnSession: DRBurnSessionRef; layout: CFTypeRef; options: DRBurnSessionProgressDialogOptionsPtr; progressCallbacks: DRBurnSessionProgressCallbacksPtr); cdecl; external;
{$endif}

{$endif}
