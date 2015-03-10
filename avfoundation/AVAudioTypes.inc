{ Parsed from AVFoundation.framework (MacOSX10.10) AVAudioTypes.h }
{ Created on Sun Mar 8 1:47:27 2015 }

{$ifndef __AVAudioTypes_h__}
{$ifdef TYPES}
type
  AVAudioFramePosition = cint64;
  AVAudioFramePositionPtr = ^AVAudioFramePosition;
  AVAudioFrameCount = cuint32;
  AVAudioFrameCountPtr = ^AVAudioFrameCount;
  AVAudioChannelCount = cuint32;
  AVAudioChannelCountPtr = ^AVAudioChannelCount;
  AVAudioNodeCompletionHandler = OpaqueCBlock;
  AVAudioNodeBus = NSUInteger;
  AVAudioNodeBusPtr = ^AVAudioNodeBus;

type
  AVAudio3DPoint = record
    x: single;
    y: single;
    z: single;
  end;
type
  AVAudio3DPointPtr = ^AVAudio3DPoint;

type
  AVAudio3DVector = AVAudio3DPoint;
  AVAudio3DVectorPtr = ^AVAudio3DVector;

type
  AVAudio3DVectorOrientation = record
    forward: AVAudio3DVector;
    up: AVAudio3DVector;
  end;
type
  AVAudio3DVectorOrientationPtr = ^AVAudio3DVectorOrientation;
type
  AVAudio3DAngularOrientation = record
    yaw: single;
    pitch: single;
    roll: single;
  end;
type
  AVAudio3DAngularOrientationPtr = ^AVAudio3DAngularOrientation;
{$endif}

{$endif}
