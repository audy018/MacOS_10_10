{ Parsed from QuartzCore.framework (MacOSX10.10) CACIFilterAdditions.h }
{ Created on Sun Mar 8 1:48:55 2015 }

{$ifdef CLASSES}

type
  CACIFilterAdditions = objccategory external (CIFilter)
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
  end;
{$endif}

