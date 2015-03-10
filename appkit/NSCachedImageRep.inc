{ Parsed from AppKit.framework (MacOSX10.10) NSCachedImageRep.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSCachedImageRepPtr = ^NSCachedImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSCachedImageRep = objcclass external (NSImageRep)
  private
    _origin: NSPoint;
    _window: NSWindow;
    _cache: pointer;
  public
    function initWithWindow_rect (win: NSWindow; rect: NSRect): id; message 'initWithWindow:rect:'; deprecated 'in 10_0, 10_6';
    function initWithSize_depth_separate_alpha (size_: NSSize; depth: NSWindowDepth; flag: boolean; alpha: boolean): id; message 'initWithSize:depth:separate:alpha:'; deprecated 'in 10_0, 10_6';
    function window: NSWindow; message 'window'; deprecated 'in 10_0, 10_6';
    function rect: NSRect; message 'rect'; deprecated 'in 10_0, 10_6';
  end;
{$endif}
