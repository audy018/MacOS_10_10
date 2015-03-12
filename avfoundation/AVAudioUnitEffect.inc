{ Parsed from AVFoundation.framework AVAudioUnitEffect.h }


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

