{ Parsed from QuartzCore.framework CACIFilterAdditions.h }

{$ifdef CLASSES}

type
  CACIFilterAdditions = objccategory external (CIFilter)
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
  end;
{$endif}

