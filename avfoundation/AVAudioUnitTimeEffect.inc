{ Parsed from AVFoundation.framework AVAudioUnitTimeEffect.h }


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

