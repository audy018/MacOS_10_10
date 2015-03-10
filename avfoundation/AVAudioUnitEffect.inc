{ Parsed from AVFoundation.framework (MacOSX10.10) AVAudioUnitEffect.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVAudioUnitEffectPtr = ^AVAudioUnitEffect;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitEffect = objcclass external (AVAudioUnit)
  public
    function initWithAudioComponentDescription (audioComponentDescription_: AudioComponentDescription): instancetype; message 'initWithAudioComponentDescription:';
    procedure setBypass(newValue: boolean); message 'setBypass:';
    function bypass: boolean; message 'bypass';
  end;
{$endif}

