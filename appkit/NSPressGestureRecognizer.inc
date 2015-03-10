{ Parsed from AppKit.framework (MacOSX10.10) NSPressGestureRecognizer.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSPressGestureRecognizerPtr = ^NSPressGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  NSPressGestureRecognizer = objcclass external (NSGestureRecognizer)
  private
    _location: NSPoint;
    _buttonMask: NSUInteger;
    _minimumPressDuration: NSTimeInterval;
    _allowableMovement: CGFloat;
    _buttonCount: NSInteger;
    _lcflags: NSInteger;
    {$ifndef __OBJC2__}
    _reserved1: NSInteger;
    {$endif}
  public
    procedure setButtonMask(newValue: NSUInteger); message 'setButtonMask:';
    function buttonMask: NSUInteger; message 'buttonMask';
    procedure setMinimumPressDuration(newValue: NSTimeInterval); message 'setMinimumPressDuration:';
    function minimumPressDuration: NSTimeInterval; message 'minimumPressDuration';
    procedure setAllowableMovement(newValue: CGFloat); message 'setAllowableMovement:';
    function allowableMovement: CGFloat; message 'allowableMovement';
  end;
{$endif}

