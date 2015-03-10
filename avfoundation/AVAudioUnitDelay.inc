{ Parsed from AVFoundation.framework (MacOSX10.10) AVAudioUnitDelay.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVAudioUnitDelayPtr = ^AVAudioUnitDelay;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitDelay = objcclass external (AVAudioUnitEffect)
  public
    procedure setDelayTime(newValue: NSTimeInterval); message 'setDelayTime:';
    function delayTime: NSTimeInterval; message 'delayTime';
    procedure setFeedback(newValue: single); message 'setFeedback:';
    function feedback: single; message 'feedback';
    procedure setLowPassCutoff(newValue: single); message 'setLowPassCutoff:';
    function lowPassCutoff: single; message 'lowPassCutoff';
    procedure setWetDryMix(newValue: single); message 'setWetDryMix:';
    function wetDryMix: single; message 'wetDryMix';
  end;
{$endif}

