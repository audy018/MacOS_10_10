{ Parsed from AVFoundation.framework (MacOSX10.10) AVSynchronizedLayer.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVSynchronizedLayerPtr = ^AVSynchronizedLayer;
{$endif}

{$ifdef CLASSES}

type
  AVSynchronizedLayer = objcclass external (CALayer)
  private
    _syncLayer: AVSynchronizedLayerInternal;
  public
    class function synchronizedLayerWithPlayerItem (playerItem: AVPlayerItem): AVSynchronizedLayer; message 'synchronizedLayerWithPlayerItem:';
    procedure setPlayerItem(newValue: AVPlayerItem); message 'setPlayerItem:';
    function playerItem: AVPlayerItem; message 'playerItem';
  end;
{$endif}

