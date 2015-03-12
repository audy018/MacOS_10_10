{ Parsed from DiscRecording.framework DRCoreNotifications.h }

{$ifndef _H_DRCoreNotifications}

{$ifdef TYPES}
type
  DRNotificationCenterRef = OpaqueType;
  DRNotificationCallback = procedure (center: DRNotificationCenterRef; observer: pointer; name: CFStringRef; object_: DRTypeRef; info: CFDictionaryRef); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function DRNotificationCenterGetTypeID: CFTypeID; cdecl; external;
function DRNotificationCenterCreate: DRNotificationCenterRef; cdecl; external;
function DRNotificationCenterCreateRunLoopSource(center: DRNotificationCenterRef): CFRunLoopSourceRef; cdecl; external;
procedure DRNotificationCenterAddObserver(center: DRNotificationCenterRef; observer: pointer; callback: DRNotificationCallback; name: CFStringRef; object_: DRTypeRef); cdecl; external;
procedure DRNotificationCenterRemoveObserver(center: DRNotificationCenterRef; observer: pointer; name: CFStringRef; object_: DRTypeRef); cdecl; external;
{$endif}

{$endif}
