{ Parsed from AVFoundation.framework (MacOSX10.10) AVSampleCursor.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVSampleCursorPtr = ^AVSampleCursor;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  AVSampleCursor = objcclass external (NSObject, NSCopyingProtocol)
  private
    _sampleCursor: AVSampleCursorInternal;
  public
    function stepInDecodeOrderByCount (stepCount: cint64): cint64; message 'stepInDecodeOrderByCount:';
    function stepInPresentationOrderByCount (stepCount: cint64): cint64; message 'stepInPresentationOrderByCount:';
    function stepByDecodeTime_wasPinned (deltaDecodeTime: CMTime; outWasPinned: pboolean): CMTime; message 'stepByDecodeTime:wasPinned:';
    function stepByPresentationTime_wasPinned (deltaPresentationTime: CMTime; outWasPinned: pboolean): CMTime; message 'stepByPresentationTime:wasPinned:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  AVSampleCursorTemporalPosition = objccategory external (AVSampleCursor)
    function presentationTimeStamp: CMTime; message 'presentationTimeStamp';
    function decodeTimeStamp: CMTime; message 'decodeTimeStamp';
    function comparePositionInDecodeOrderWithPositionOfCursor (cursor: AVSampleCursor): NSComparisonResult; message 'comparePositionInDecodeOrderWithPositionOfCursor:';
    function samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor (cursor: AVSampleCursor): boolean; message 'samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:';
    function samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor (cursor: AVSampleCursor): boolean; message 'samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:';
  end;

type
  AVSampleCursorCurrentSampleInfo = objccategory external (AVSampleCursor)
    function currentSampleDuration: CMTime; message 'currentSampleDuration';
    function copyCurrentSampleFormatDescription CF_RETURNS_RETAINED: CMFormatDescriptionRef; message 'copyCurrentSampleFormatDescription CF_RETURNS_RETAINED';
    function currentSampleSyncInfo: AVSampleCursorSyncInfo; message 'currentSampleSyncInfo';
    function currentSampleDependencyInfo: AVSampleCursorDependencyInfo; message 'currentSampleDependencyInfo';
  end;

type
  AVSampleCursorSampleStorageInfo = objccategory external (AVSampleCursor)
    function currentChunkStorageURL: NSURL; message 'currentChunkStorageURL';
    function currentChunkStorageRange: AVSampleCursorStorageRange; message 'currentChunkStorageRange';
    function currentChunkInfo: AVSampleCursorChunkInfo; message 'currentChunkInfo';
    function currentSampleIndexInChunk: cint64; message 'currentSampleIndexInChunk';
    function currentSampleStorageRange: AVSampleCursorStorageRange; message 'currentSampleStorageRange';
  end;
{$endif}

{$endif}
