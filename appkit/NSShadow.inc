{ Parsed from AppKit.framework (MacOSX10.10) NSShadow.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSShadowPtr = ^NSShadow;
{$endif}

{$ifdef CLASSES}

type
  NSShadow = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  private
    _shadowFlags: NSUInteger;
    _shadowOffset: NSSize;
    _shadowBlurRadius: CGFloat;
    _shadowColor: NSColor;
    _reservedFloat:array[0..2] of CGFloat;
    _reserved: pointer;
  public
    function init: instancetype; message 'init';
    procedure setShadowOffset(newValue: NSSize); message 'setShadowOffset:';
    function shadowOffset: NSSize; message 'shadowOffset';
    procedure setShadowBlurRadius(newValue: CGFloat); message 'setShadowBlurRadius:';
    function shadowBlurRadius: CGFloat; message 'shadowBlurRadius';
    procedure setShadowColor(newValue: NSColor); message 'setShadowColor:';
    function shadowColor: NSColor; message 'shadowColor';
    procedure set_; message 'set';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

