{ Parsed from Foundation.framework (MacOSX10.10) NSGarbageCollector.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSGarbageCollectorPtr = ^NSGarbageCollector;
{$endif}

{$ifdef CLASSES}

type
  NSGarbageCollector = objcclass external (NSObject)
  public
    class function defaultCollector: id; message 'defaultCollector';
    function isCollecting: boolean; message 'isCollecting'; deprecated 'in 10_0, 10_6, NA, NA';
    procedure disable; message 'disable';
    procedure enable; message 'enable';
    function isEnabled: boolean; message 'isEnabled';
    procedure collectIfNeeded; message 'collectIfNeeded';
    procedure collectExhaustively; message 'collectExhaustively';
    procedure disableCollectorForPointer (ptr: pointer); message 'disableCollectorForPointer:';
    procedure enableCollectorForPointer (ptr: pointer); message 'enableCollectorForPointer:';
    function zone: NSZonePtr; message 'zone';
  end;
{$endif}

