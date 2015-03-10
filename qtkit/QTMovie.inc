{ Parsed from QTKit.framework (MacOSX10.10) QTMovie.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{ Types from QTMovie_Initialization }
{$ifdef TYPES}




{$endif}


{ Types from QTMovie_Image }
{$ifdef TYPES}

{$endif}


{ Types from QTMovie_Format }
{$ifdef TYPES}

{$endif}


{ Types from QTMovie_Time }
{$ifdef TYPES}

{$endif}


{ Types from QTMovie_Editing }
{$ifdef TYPES}


{$endif}


{ Types from QTMovie_VisualSupport }
{$ifdef TYPES}

{$endif}


{ Types from QTMovie_VisualContext }
{$ifdef TYPES}

{$endif}


{ Types from QTMovie_Threading }
{$ifdef TYPES}

{$endif}


{ Types from QTMovie_Chapters }
{$ifdef TYPES}

{$endif}


{ Types from QTMovie_MetadataReading }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  QTMoviePtr = ^QTMovie;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  QTMovieActiveSegmentAttribute: NSString deprecated 'available in 7.0 and later but deprecated in 7.2'; cvar; external;
{$endif}

{$ifdef TYPES}
const
  QTIncludeStillImageTypes = 1 shl 0;
  QTIncludeTranslatableTypes = 1 shl 1;
  QTIncludeAggressiveTypes = 1 shl 2;
  {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
  QTIncludeDynamicTypes = 1 shl 3;
  {$endif}
  QTIncludeCommonTypes = 0;
  QTIncludeAllTypes = $ffff;
type
  QTMovieFileTypeOptions = clong;
const
  {$if defined(__LP64__)}
  QTMovieOperationBeginPhase = 0;
  QTMovieOperationUpdatePercentPhase = 1;
  QTMovieOperationEndPhase = 2;
  {$else}
  QTMovieOperationBeginPhase = movieProgressOpen;
  QTMovieOperationUpdatePercentPhase = movieProgressUpdatePercent;
  QTMovieOperationEndPhase = movieProgressClose;
  {$endif}
type
  QTMovieOperationPhase = clong;
{$endif}

{$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
{$ifdef TYPES}
const
  QTMovieLoadStateError = -1;
  QTMovieLoadStateLoading = 1000;
  QTMovieLoadStateLoaded = 2000;
  QTMovieLoadStatePlayable = 10000;
  QTMovieLoadStatePlaythroughOK = 20000;
  QTMovieLoadStateComplete = 100000;

type
  QTMovieLoadState = NSInteger;
  QTMovieLoadStatePtr = ^QTMovieLoadState;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSObject_QTMovie_Delegate = objccategory external name 'QTMovie_Delegate' (NSObject)
    function movie_linkToURL (movie: QTMovie; url: NSURL): boolean; message 'movie:linkToURL:';
    function movieShouldLoadData (sender: id): boolean; message 'movieShouldLoadData:';
    function movieShouldTask (movie: id): boolean; message 'movieShouldTask:';
    function externalMovie (dictionary: NSDictionary): QTMovie; message 'externalMovie:';
    function movie_shouldContinueOperation_withPhase_atPercent_withAttributes (movie: QTMovie; op: NSString; phase: QTMovieOperationPhase; percent: NSNumber; attributes: NSDictionary): boolean; message 'movie:shouldContinueOperation:withPhase:atPercent:withAttributes:';
  end;


type
  QTMovie = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
    {$if  not defined(__LP64__)}
    _movie: Movie;
    {$endif}
    _state: clong;
    _mediaHelper: QTMovieMediaHelper;
    _initedViaInitWithAttributes: CFBooleanRef;
    _children: QTInvalidationSet;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
    _reserved4: clong;
    _reserved5: clong;
    _reserved6: clong;
    _reserved7: clong;
    _reserved8: clong;
    _reserved9: clong;
    _reserved10: clong;
    _reserved11: clong;
    _reserved12: clong;
    _reserved13: clong;
    _reserved14: clong;
    _reserved15: clong;
  public
    function duration AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'duration AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;


type
  QTMovie_Initialization = objccategory external (QTMovie)
    class function canInitWithPasteboard (pasteboard: NSPasteboard): boolean; message 'canInitWithPasteboard:';
    class function canInitWithFile (fileName: NSString): boolean; message 'canInitWithFile:';
    class function canInitWithURL (url: NSURL): boolean; message 'canInitWithURL:';
    class function canInitWithDataReference (dataReference: QTDataReference): boolean; message 'canInitWithDataReference:';
    class function movieFileTypes (types: QTMovieFileTypeOptions): NSArray; message 'movieFileTypes:';
    class function movieUnfilteredFileTypes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'movieUnfilteredFileTypes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    class function movieUnfilteredPasteboardTypes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'movieUnfilteredPasteboardTypes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    class function movieTypesWithOptions (types: QTMovieFileTypeOptions): NSArray; message 'movieTypesWithOptions:';
    {$endif}
    class function movie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'movie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    class function movieWithFile_error (fileName: NSString; errorPtr: NSErrorPtr): id; message 'movieWithFile:error:';
    class function movieWithURL_error (url: NSURL; errorPtr: NSErrorPtr): id; message 'movieWithURL:error:';
    class function movieWithDataReference_error (dataReference: QTDataReference; errorPtr: NSErrorPtr): id; message 'movieWithDataReference:error:';
    class function movieWithPasteboard_error (pasteboard: NSPasteboard; errorPtr: NSErrorPtr): id; message 'movieWithPasteboard:error:';
    class function movieWithData_error (data: NSData; errorPtr: NSErrorPtr): id; message 'movieWithData:error:';
    {$if  not defined(__LP64__)}
    class function movieWithQuickTimeMovie_disposeWhenDone_error (movie_: Movie; dispose_: boolean; errorPtr: NSErrorPtr): id; message 'movieWithQuickTimeMovie:disposeWhenDone:error:';
    {$endif}
    class function movieWithAttributes_error (attributes: NSDictionary; errorPtr: NSErrorPtr): id; message 'movieWithAttributes:error:';
    class function movieNamed_error (name: NSString; errorPtr: NSErrorPtr): id; message 'movieNamed:error:';
    function initWithFile_error (fileName: NSString; errorPtr: NSErrorPtr): id; message 'initWithFile:error:';
    function initWithURL_error (url: NSURL; errorPtr: NSErrorPtr): id; message 'initWithURL:error:';
    function initWithDataReference_error (dataReference: QTDataReference; errorPtr: NSErrorPtr): id; message 'initWithDataReference:error:';
    function initWithPasteboard_error (pasteboard: NSPasteboard; errorPtr: NSErrorPtr): id; message 'initWithPasteboard:error:';
    function initWithData_error (data: NSData; errorPtr: NSErrorPtr): id; message 'initWithData:error:';
    function initWithMovie_timeRange_error (movie: QTMovie; range: QTTimeRange; errorPtr: NSErrorPtr): id; message 'initWithMovie:timeRange:error:';
    {$if  not defined(__LP64__)}
    function initWithQuickTimeMovie_disposeWhenDone_error (movie_: Movie; dispose_: boolean; errorPtr: NSErrorPtr): id; message 'initWithQuickTimeMovie:disposeWhenDone:error:';
    {$endif}
    function initWithAttributes_error (attributes: NSDictionary; errorPtr: NSErrorPtr): id; message 'initWithAttributes:error:';
    function movieWithTimeRange_error (range: QTTimeRange; errorPtr: NSErrorPtr): id; message 'movieWithTimeRange:error:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function initToWritableFile_error (filename: NSString; errorPtr: NSErrorPtr): id; message 'initToWritableFile:error:';
    function initToWritableData_error (data: NSMutableData; errorPtr: NSErrorPtr): id; message 'initToWritableData:error:';
    function initToWritableDataReference_error (dataReference: QTDataReference; errorPtr: NSErrorPtr): id; message 'initToWritableDataReference:error:';
    procedure invalidate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'invalidate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
  end;

type
  QTMovie_Inspection = objccategory external (QTMovie)
    function movieAttributes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'movieAttributes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMovieAttributes (attributes: NSDictionary); message 'setMovieAttributes:';
    function attributeForKey (attributeKey: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (value: id; attributeKey: NSString); message 'setAttribute:forKey:';
    function tracks AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'tracks AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function tracksOfMediaType (type_: NSString): NSArray; message 'tracksOfMediaType:';
  end;

type
  QTMovie_Image = objccategory external (QTMovie)
    function posterImage AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSImage; message 'posterImage AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function currentFrameImage AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSImage; message 'currentFrameImage AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function frameImageAtTime (time: QTTime): NSImage; message 'frameImageAtTime:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function frameImageAtTime_withAttributes_error (time: QTTime; attributes: NSDictionary; errorPtr: NSErrorPtr): pointer; message 'frameImageAtTime:withAttributes:error:';
    {$endif}
  end;

type
  QTMovie_Format = objccategory external (QTMovie)
    function movieFormatRepresentation AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSData; message 'movieFormatRepresentation AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function writeToFile_withAttributes (fileName: NSString; attributes: NSDictionary): boolean; message 'writeToFile:withAttributes:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function writeToFile_withAttributes_error (fileName: NSString; attributes: NSDictionary; errorPtr: NSErrorPtr): boolean; message 'writeToFile:withAttributes:error:';
    {$endif}
    function canUpdateMovieFile AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'canUpdateMovieFile AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function updateMovieFile AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'updateMovieFile AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;

type
  QTMovie_Time = objccategory external (QTMovie)
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    procedure autoplay AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_6_3; message 'autoplay AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_6_3';
    {$endif}
    procedure play AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'play AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure stop AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'stop AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function currentTime AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'currentTime AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setCurrentTime (time: QTTime); message 'setCurrentTime:';
    procedure gotoBeginning AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'gotoBeginning AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure gotoEnd AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'gotoEnd AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure gotoNextSelectionPoint AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'gotoNextSelectionPoint AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure gotoPreviousSelectionPoint AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'gotoPreviousSelectionPoint AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure gotoPosterTime AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'gotoPosterTime AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure stepForward AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'stepForward AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure stepBackward AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'stepBackward AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;

type
  QTMovie_PlaybackControl = objccategory external (QTMovie)
    function rate AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: single; message 'rate AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setRate (rate: single); message 'setRate:';
    function volume AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: single; message 'volume AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setVolume (volume: single); message 'setVolume:';
    function muted AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'muted AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMuted (mute: boolean); message 'setMuted:';
  end;

type
  QTMovie_Selection = objccategory external (QTMovie)
    procedure setSelection (selection: QTTimeRange); message 'setSelection:';
    function selectionStart AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'selectionStart AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function selectionEnd AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'selectionEnd AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function selectionDuration AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'selectionDuration AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;

type
  QTMovie_Editing = objccategory external (QTMovie)
    procedure replaceSelectionWithSelectionFromMovie (movie: id); message 'replaceSelectionWithSelectionFromMovie:';
    procedure appendSelectionFromMovie (movie: id); message 'appendSelectionFromMovie:';
    procedure insertSegmentOfMovie_timeRange_atTime (movie: QTMovie; range: QTTimeRange; time: QTTime); message 'insertSegmentOfMovie:timeRange:atTime:';
    procedure insertSegmentOfMovie_fromRange_scaledToRange (movie: QTMovie; srcRange: QTTimeRange; dstRange: QTTimeRange); message 'insertSegmentOfMovie:fromRange:scaledToRange:';
    procedure insertEmptySegmentAt (range: QTTimeRange); message 'insertEmptySegmentAt:';
    procedure deleteSegment (segment: QTTimeRange); message 'deleteSegment:';
    procedure scaleSegment_newDuration (segment: QTTimeRange; newDuration: QTTime); message 'scaleSegment:newDuration:';
    procedure addImage_forDuration_withAttributes (image: NSImage; duration: QTTime; attributes: NSDictionary); message 'addImage:forDuration:withAttributes:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function insertSegmentOfTrack_timeRange_atTime (track: QTTrack; range: QTTimeRange; time: QTTime): QTTrack; message 'insertSegmentOfTrack:timeRange:atTime:';
    function insertSegmentOfTrack_fromRange_scaledToRange (track: QTTrack; srcRange: QTTimeRange; dstRange: QTTimeRange): QTTrack; message 'insertSegmentOfTrack:fromRange:scaledToRange:';
    procedure removeTrack (track: QTTrack); message 'removeTrack:';
    {$endif}
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_7)}
    function trackByInsertingSegmentOfTrack_timeRange_atTime (track: QTTrack; range: QTTimeRange; time: QTTime): QTTrack; message 'trackByInsertingSegmentOfTrack:timeRange:atTime:';
    function trackByInsertingSegmentOfTrack_fromRange_scaledToRange (track: QTTrack; srcRange: QTTimeRange; dstRange: QTTimeRange): QTTrack; message 'trackByInsertingSegmentOfTrack:fromRange:scaledToRange:';
    {$endif}
  end;

type
  QTMovie_Delegate = objccategory external (QTMovie)
    function delegate AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'delegate AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setDelegate (delegate: id); message 'setDelegate:';
  end;
{$endif}

{$if  not defined(__LP64__)}
{$ifdef CLASSES}

type
  QTMovie_Primitives = objccategory external (QTMovie)
    function quickTimeMovie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: Movie; message 'quickTimeMovie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function quickTimeMovieController AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: MovieController; message 'quickTimeMovieController AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  QTMovie_VisualSupport = objccategory external (QTMovie)
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    procedure generateApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'generateApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure removeApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'removeApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
  end;

type
  QTMovie_VisualContext = objccategory external (QTMovie)
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    {$if  not defined(__LP64__)}
    procedure setVisualContext (visualContext: QTVisualContextRef); message 'setVisualContext:';
    function visualContext AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTVisualContextRef; message 'visualContext AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
    {$endif}
  end;

type
  QTMovie_Threading = objccategory external (QTMovie)
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    class procedure enterQTKitOnThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'enterQTKitOnThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    class procedure enterQTKitOnThreadDisablingThreadSafetyProtection AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'enterQTKitOnThreadDisablingThreadSafetyProtection AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    class procedure exitQTKitOnThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'exitQTKitOnThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function attachToCurrentThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'attachToCurrentThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function detachFromCurrentThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'detachFromCurrentThread AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setIdling (state: boolean); message 'setIdling:';
    function isIdling AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isIdling AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
  end;

type
  QTMovie_Chapters = objccategory external (QTMovie)
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function hasChapters AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'hasChapters AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function chapterCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSInteger; message 'chapterCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function chapters AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'chapters AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure addChapters_withAttributes_error (chapters: NSArray; attributes: NSDictionary; errorPtr: NSErrorPtr); message 'addChapters:withAttributes:error:';
    function removeChapters AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'removeChapters AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function startTimeOfChapter (chapterIndex: NSInteger): QTTime; message 'startTimeOfChapter:';
    function chapterIndexForTime (time: QTTime): NSInteger; message 'chapterIndexForTime:';
    {$endif}
  end;

type
  QTMovie_MetadataReading = objccategory external (QTMovie)
    {$if ((defined(MAC_OS_X_VERSION_10_7)) and ((MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_7)))}
    function commonMetadata: NSArray; message 'commonMetadata'; deprecated 'available in 10.7 and later but deprecated in 10.9';
    function availableMetadataFormats: NSArray; message 'availableMetadataFormats'; deprecated 'available in 10.7 and later but deprecated in 10.9';
    function metadataForFormat (format: NSString): NSArray; message 'metadataForFormat:'; deprecated 'available in 10.7 and later but deprecated in 10.9';
    {$endif}
  end;
{$endif}

