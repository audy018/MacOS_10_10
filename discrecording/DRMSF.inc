{ Parsed from DiscRecording.framework DRMSF.h }


{$ifdef TYPES}
type
  DRMSFPtr = ^DRMSF;
{$endif}

{$ifdef CLASSES}

type
  DRMSF = objcclass external (NSNumber)
  private
    _value: UInt32;
  public
    class function msf: DRMSF; message 'msf';
    class function msfWithFrames (frames: UInt32): DRMSF; message 'msfWithFrames:';
    class function msfWithString (string_: NSString): DRMSF; message 'msfWithString:';
    function initWithFrames (frames: UInt32): id; message 'initWithFrames:';
    function initWithString (string_: NSString): id; message 'initWithString:';
    function minutes: UInt32; message 'minutes';
    function seconds: UInt32; message 'seconds';
    function frames: UInt32; message 'frames';
    function sectors: UInt32; message 'sectors';
    function msfByAdding (msf_: DRMSF): DRMSF; message 'msfByAdding:';
    function msfBySubtracting (msf_: DRMSF): DRMSF; message 'msfBySubtracting:';
    function description: NSString; message 'description';
    function descriptionWithFormat (format: NSString): NSString; message 'descriptionWithFormat:';
    function isEqualToMSF (otherDRMSF: DRMSF): boolean; message 'isEqualToMSF:';
  end;
{$endif}

