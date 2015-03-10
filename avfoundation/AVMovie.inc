{ Parsed from AVFoundation.framework (MacOSX10.10) AVMovie.h }
{ Created on Sun Mar 8 1:47:27 2015 }


{$ifdef TYPES}
type
  AVMoviePtr = ^AVMovie;
  AVFragmentedMoviePtr = ^AVFragmentedMovie;
  AVFragmentedMovieMinderPtr = ^AVFragmentedMovieMinder;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMovieReferenceRestrictionsKey: NSString { available in 10_10, TBD }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMovie = objcclass external (AVAsset)
  private
    _movie: AVMovieInternal;
  public
    class function movieTypes: NSArray; message 'movieTypes';
    class function movieWithURL_options (URL: NSURL; options: NSDictionary): instancetype; message 'movieWithURL:options:';
    function initWithURL_options (URL: NSURL; options: NSDictionary): instancetype; message 'initWithURL:options:';
    function URL: NSURL; message 'URL';
    function tracks: NSArray; message 'tracks';
    function canContainMovieFragments: boolean; message 'canContainMovieFragments';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFragmentedMovieDurationDidChangeNotification: NSString { available in 10_10, TBD }; cvar; external;
  AVFragmentedMovieWasDefragmentedNotification: NSString { available in 10_10, TBD }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedMovie = objcclass external (AVMovie)
  private
    _fragmentedMovie: AVFragmentedMovieInternal;
  public
    function tracks: NSArray; message 'tracks';
  end;

type
  AVFragmentedMovieMinder = objcclass external (NSObject)
  private
    _fragmentedMovieMinder: AVFragmentedMovieMinderInternal;
  public
    class function fragmentedMovieMinderWithMovie_mindingInterval (movie: AVFragmentedMovie; mindingInterval: NSTimeInterval): instancetype; message 'fragmentedMovieMinderWithMovie:mindingInterval:';
    function initWithMovie_mindingInterval (movie: AVFragmentedMovie; mindingInterval: NSTimeInterval): instancetype; message 'initWithMovie:mindingInterval:';
    procedure setMindingInterval(newValue: NSTimeInterval); message 'setMindingInterval:';
    function mindingInterval: NSTimeInterval; message 'mindingInterval';
    function movies: NSArray; message 'movies';
    procedure addFragmentedMovie (movie: AVFragmentedMovie); message 'addFragmentedMovie:';
    procedure removeFragmentedMovie (movie: AVFragmentedMovie); message 'removeFragmentedMovie:';
  end;
{$endif}

