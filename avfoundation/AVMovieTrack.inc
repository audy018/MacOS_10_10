{ Parsed from AVFoundation.framework (MacOSX10.10) AVMovieTrack.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVMovieTrackPtr = ^AVMovieTrack;
  AVFragmentedMovieTrackPtr = ^AVFragmentedMovieTrack;
{$endif}

{$ifdef CLASSES}

type
  AVMovieTrack = objcclass external (AVAssetTrack)
  private
    _movieTrackInternal: AVMovieTrackInternal;
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFragmentedMovieTrackTimeRangeDidChangeNotification: NSString { available in 10_10, TBD }; cvar; external;
  AVFragmentedMovieTrackSegmentsDidChangeNotification: NSString { available in 10_10, TBD }; cvar; external;
  AVFragmentedMovieTrackTotalSampleDataLengthDidChangeNotification: NSString { available in 10_10, TBD }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedMovieTrack = objcclass external (AVMovieTrack)
  private
    _fragmentedMovieTrack: AVFragmentedMovieTrackInternal;
  end;
{$endif}

