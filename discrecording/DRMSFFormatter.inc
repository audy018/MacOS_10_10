{ Parsed from DiscRecording.framework DRMSFFormatter.h }


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

