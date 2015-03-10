{ Parsed from AppKit.framework (MacOSX10.10) NSPICTImageRep.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSPICTImageRepPtr = ^NSPICTImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSPICTImageRep = objcclass external (NSImageRep)
  private
    _pictOrigin: NSPoint;
    _pictData: NSData;
    {$if  not defined(__LP64__)}
    _reserved1: cuint;
    _reserved2: cuint;
    {$else}
    _imageRep: id;
    _pictOffset: NSUInteger;
    _reserved1_: cuint;
    _reserved2_: cuint;
    {$endif}
  public
    class function imageRepWithData (pictData: NSData): instancetype; message 'imageRepWithData:';
    function initWithData (pictData: NSData): instancetype; message 'initWithData:';
    function PICTRepresentation: NSData; message 'PICTRepresentation';
    function boundingBox: NSRect; message 'boundingBox';
  end;
{$endif}

