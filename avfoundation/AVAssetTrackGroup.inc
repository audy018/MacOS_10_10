{ Parsed from AVFoundation.framework (MacOSX10.10) AVAssetTrackGroup.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVAssetTrackGroupPtr = ^AVAssetTrackGroup;
{$endif}

{$ifdef CLASSES}

type
  AVAssetTrackGroup = objcclass external (NSObject, NSCopyingProtocol)
  private
    _assetTrackGroup: AVAssetTrackGroupInternal;
  public
    function trackIDs: NSArray; message 'trackIDs';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

