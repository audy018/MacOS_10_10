{ Parsed from AVFoundation.framework (MacOSX10.10) AVAudioChannelLayout.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVAudioChannelLayoutPtr = ^AVAudioChannelLayout;
{$endif}

{$ifdef CLASSES}

type
  AVAudioChannelLayout = objcclass external (NSObject)
  private
    _layoutTag: AudioChannelLayoutTag;
    _layout: AudioChannelLayoutPtr;
    _reserved: pointer;
  public
    function initWithLayoutTag (layoutTag: AudioChannelLayoutTag): instancetype; message 'initWithLayoutTag:';
    function initWithLayout (layout: AudioChannelLayoutPtr): instancetype; message 'initWithLayout:';
    function isEqual (object_: id): boolean; message 'isEqual:';
    class function layoutWithLayoutTag (layoutTag: AudioChannelLayoutTag): instancetype; message 'layoutWithLayoutTag:';
    class function layoutWithLayout (layout: AudioChannelLayoutPtr): instancetype; message 'layoutWithLayout:';
    function layoutTag: AudioChannelLayoutTag; message 'layoutTag';
    function layout: AudioChannelLayoutPtr; message 'layout';
    function channelCount: AVAudioChannelCount; message 'channelCount';
  end;
{$endif}

