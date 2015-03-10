{ Parsed from AVFoundation.framework (MacOSX10.10) AVPlayerMediaSelectionCriteria.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVPlayerMediaSelectionCriteriaPtr = ^AVPlayerMediaSelectionCriteria;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerMediaSelectionCriteria = objcclass external (NSObject)
  private
    _criteria: AVPlayerMediaSelectionCriteriaInternal;
  public
    function preferredLanguages: NSArray; message 'preferredLanguages';
    function preferredMediaCharacteristics: NSArray; message 'preferredMediaCharacteristics';
    function initWithPreferredLanguages_preferredMediaCharacteristics (preferredLanguages_: NSArray; preferredMediaCharacteristics_: NSArray): instancetype; message 'initWithPreferredLanguages:preferredMediaCharacteristics:';
  end;
{$endif}

