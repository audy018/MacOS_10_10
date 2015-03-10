{ Parsed from AudioVideoBridging.framework (MacOSX10.10) AVBMACAddress.h }
{ Created on Sun Mar 8 1:45:56 2015 }


{$ifdef TYPES}
type
  AVBMACAddressPtr = ^AVBMACAddress;
{$endif}

{$ifdef CLASSES}

type
  AVBMACAddress = objcclass external (NSObject, NSCopyingProtocol)
  private
    _bytes:array[0..(AVBMACAddressSize)-1] of cuint8;
  public
    function initWithBytes (bytes: pbyte): instancetype; message 'initWithBytes:';
    function bytes: pbyte; message 'bytes';
    procedure setDataRepresentation(newValue: NSData); message 'setDataRepresentation:';
    function dataRepresentation: NSData; message 'dataRepresentation';
    procedure setStringRepresentation(newValue: NSString); message 'setStringRepresentation:';
    function stringRepresentation: NSString; message 'stringRepresentation';
    procedure setMulticast(newValue: boolean); message 'setMulticast:';
    function isMulticast: boolean; message 'isMulticast';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

