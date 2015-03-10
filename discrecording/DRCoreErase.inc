{ Parsed from DiscRecording.framework (MacOSX10.10) DRCoreErase.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRCoreErase}

{$ifdef TYPES}
type
  DREraseRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function DREraseGetTypeID: CFTypeID; cdecl; external;
function DREraseCreate(device: DRDeviceRef): DREraseRef; cdecl; external;
function DREraseStart(erase: DREraseRef): OSStatus; cdecl; external;
function DREraseCopyStatus(erase: DREraseRef): CFDictionaryRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDREraseStatusChangedNotification: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function DREraseGetDevice(erase: DREraseRef): DRDeviceRef; cdecl; external;
procedure DREraseSetProperties(erase: DREraseRef; properties: CFDictionaryRef); cdecl; external;
function DREraseGetProperties(erase: DREraseRef): CFDictionaryRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDREraseTypeKey: CFStringRef; cvar; external;
  kDREraseTypeQuick: CFStringRef; cvar; external;
  kDREraseTypeComplete: CFStringRef; cvar; external;
{$endif}

{$endif}
