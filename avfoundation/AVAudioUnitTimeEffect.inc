{ Parsed from AVFoundation.framework (MacOSX10.10) AVAudioUnitTimeEffect.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVAudioUnitTimeEffectPtr = ^AVAudioUnitTimeEffect;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitTimeEffect = objcclass external (AVAudioUnit)
  public
    function initWithAudioComponentDescription (audioComponentDescription_: AudioComponentDescription): instancetype; message 'initWithAudioComponentDescription:';
    procedure setBypass(newValue: boolean); message 'setBypass:';
    function bypass: boolean; message 'bypass';
  end;
{$endif}

