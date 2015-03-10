{ Parsed from AppKit.framework (MacOSX10.10) NSMagnificationGestureRecognizer.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSMagnificationGestureRecognizerPtr = ^NSMagnificationGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  NSMagnificationGestureRecognizer = objcclass external (NSGestureRecognizer)
  private
    _location: NSPoint;
    _reserved1: NSPoint;
    _mflags: NSInteger;
    _magnification: CGFloat;
    {$ifndef __OBJC2__}
    _reserved2: NSInteger;
    _reserved3: NSInteger;
    {$endif}
  public
    procedure setMagnification(newValue: CGFloat); message 'setMagnification:';
    function magnification: CGFloat; message 'magnification';
  end;
{$endif}

