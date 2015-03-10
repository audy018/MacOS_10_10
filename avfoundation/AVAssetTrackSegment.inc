{ Parsed from AVFoundation.framework (MacOSX10.10) AVAssetTrackSegment.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVAssetTrackSegmentPtr = ^AVAssetTrackSegment;
{$endif}

{$ifdef CLASSES}

type
  AVAssetTrackSegment = objcclass external (NSObject)
  private
    _timeMapping: CMTimeMapping;
  public
    function timeMapping: CMTimeMapping; message 'timeMapping';
    function isEmpty: boolean; message 'isEmpty';
  end;
{$endif}

