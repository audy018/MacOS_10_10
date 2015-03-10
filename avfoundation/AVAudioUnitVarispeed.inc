{ Parsed from AVFoundation.framework (MacOSX10.10) AVAudioUnitVarispeed.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVAudioUnitVarispeedPtr = ^AVAudioUnitVarispeed;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitVarispeed = objcclass external (AVAudioUnitTimeEffect)
  public
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
  end;
{$endif}

