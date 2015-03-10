{ Parsed from CoreBluetooth.framework (MacOSX10.10) CBCentral.h }
{ Created on Sun Mar 8 1:48:05 2015 }


{$ifdef TYPES}
type
  CBCentralPtr = ^CBCentral;
{$endif}

{$ifdef CLASSES}

type
  CBCentral = objcclass external (NSObject, NSCopyingProtocol)
  private
    _UUID: CFUUIDRef;
    _identifier: NSUUID;
    _maximumUpdateValueLength: NSUInteger;
  public
    function UUID: CFUUIDRef; message 'UUID';
    function identifier: NSUUID; message 'identifier';
    function maximumUpdateValueLength: NSUInteger; message 'maximumUpdateValueLength';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

