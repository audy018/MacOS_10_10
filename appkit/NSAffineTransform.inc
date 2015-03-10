{ Parsed from AppKit.framework (MacOSX10.10) NSAffineTransform.h }
{ Created on Sun Mar 8 1:49:08 2015 }

{$ifdef CLASSES}

type
  NSAppKitAdditons = objccategory external (NSAffineTransform)
    function transformBezierPath (aPath: NSBezierPath): NSBezierPath; message 'transformBezierPath:';
    procedure set_; message 'set';
    procedure concat; message 'concat';
  end;
{$endif}

