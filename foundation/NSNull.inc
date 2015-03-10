{ Parsed from Foundation.framework (MacOSX10.10) NSNull.h }
{ Created on Sun Mar 8 1:49:14 2015 }


{$ifdef TYPES}
type
  NSNullPtr = ^NSNull;
{$endif}

{$ifdef CLASSES}

type
  NSNull = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function null: NSNull; message 'null';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

