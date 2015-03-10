{ Parsed from DiscRecording.framework (MacOSX10.10) DRMSFFormatter.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRMSFFormatterPtr = ^DRMSFFormatter;
{$endif}

{$ifdef CLASSES}

type
  DRMSFFormatter = objcclass external (NSFormatter)
  private
    _format: NSString;
  public
    function initWithFormat (format: NSString): id; message 'initWithFormat:';
    function format: NSString; message 'format';
    procedure setFormat (format_: NSString); message 'setFormat:';
  end;
{$endif}

