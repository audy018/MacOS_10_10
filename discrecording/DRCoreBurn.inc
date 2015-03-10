{ Parsed from DiscRecording.framework (MacOSX10.10) DRCoreBurn.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRCoreBurn}

{$ifdef TYPES}
type
  DRBurnRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function DRBurnGetTypeID: CFTypeID; cdecl; external;
function DRBurnCreate(device: DRDeviceRef): DRBurnRef; cdecl; external;
function DRBurnWriteLayout(burn: DRBurnRef; layout: CFTypeRef): OSStatus; cdecl; external;
procedure DRBurnAbort(burn: DRBurnRef); cdecl; external;
function DRBurnCopyStatus(burn: DRBurnRef): CFDictionaryRef; cdecl; external;
function DRBurnGetDevice(burn: DRBurnRef): DRDeviceRef; cdecl; external;
procedure DRBurnSetProperties(burn: DRBurnRef; properties: CFDictionaryRef); cdecl; external;
function DRBurnGetProperties(burn: DRBurnRef): CFDictionaryRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDRBurnStatusChangedNotification: CFStringRef; cvar; external;
  kDRBurnRequestedSpeedKey: CFStringRef; cvar; external;
  kDRBurnAppendableKey: CFStringRef; cvar; external;
  kDRBurnOverwriteDiscKey: CFStringRef; cvar; external;
  kDRBurnVerifyDiscKey: CFStringRef; cvar; external;
  kDRBurnCompletionActionKey: CFStringRef; cvar; external;
  kDRBurnUnderrunProtectionKey: CFStringRef; cvar; external;
  kDRBurnTestingKey: CFStringRef; cvar; external;
  kDRSynchronousBehaviorKey: CFStringRef; cvar; external;
  kDRBurnFailureActionKey: CFStringRef; cvar; external;
  kDRMediaCatalogNumberKey: CFStringRef; cvar; external;
  kDRBurnDoubleLayerL0DataZoneBlocksKey: CFStringRef; cvar; external;
  kDRBurnStrategyKey: CFStringRef; cvar; external;
  kDRBurnStrategyIsRequiredKey: CFStringRef; cvar; external;
  kDRCDTextKey: CFStringRef; cvar; external;
  kDRBurnCompletionActionEject: CFStringRef; cvar; external;
  kDRBurnCompletionActionMount: CFStringRef; cvar; external;
  kDRBurnFailureActionEject: CFStringRef; cvar; external;
  kDRBurnFailureActionNone: CFStringRef; cvar; external;
  kDRBurnStrategyCDTAO: CFStringRef; cvar; external;
  kDRBurnStrategyCDSAO: CFStringRef; cvar; external;
  kDRBurnStrategyDVDDAO: CFStringRef; cvar; external;
  kDRBurnStrategyBDDAO: CFStringRef; cvar; external;
{$endif}

{$endif}
