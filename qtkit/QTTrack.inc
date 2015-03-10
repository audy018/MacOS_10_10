{ Parsed from QTKit.framework (MacOSX10.10) QTTrack.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{ Types from QTTrack }
{$ifdef TYPES}


{$endif}


{ Types from QTTrack_VisualSupport }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  QTTrackPtr = ^QTTrack;
{$endif}

{$ifdef CLASSES}

type
  QTTrack = objcclass external (NSObject)
  private
    _flags: clong;
    _trackHelper: QTTrackHelper;
    _movie: QTMovie;
    _children: QTInvalidationSet;
    _cachedTrackID: cint32;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
    _reserved4: clong;
  public
    {$if  not defined(__LP64__)}
    class function trackWithQuickTimeTrack_error (track_: Track; errorPtr: NSErrorPtr): id; message 'trackWithQuickTimeTrack:error:';
    function initWithQuickTimeTrack_error (track_: Track; errorPtr: NSErrorPtr): id; message 'initWithQuickTimeTrack:error:';
    {$endif}
    function movie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTMovie; message 'movie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function media AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTMedia; message 'media AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function isEnabled AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isEnabled AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
    function volume AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: single; message 'volume AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setVolume (volume: single); message 'setVolume:';
    function trackAttributes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'trackAttributes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setTrackAttributes (attributes: NSDictionary); message 'setTrackAttributes:';
    function attributeForKey (attributeKey: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (value: id; attributeKey: NSString); message 'setAttribute:forKey:';
    {$if  not defined(__LP64__)}
    function quickTimeTrack AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: Track; message 'quickTimeTrack AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
    procedure insertSegmentOfTrack_timeRange_atTime (track: QTTrack; range: QTTimeRange; time: QTTime); message 'insertSegmentOfTrack:timeRange:atTime:';
    procedure insertSegmentOfTrack_fromRange_scaledToRange (track: QTTrack; srcRange: QTTimeRange; dstRange: QTTimeRange); message 'insertSegmentOfTrack:fromRange:scaledToRange:';
    procedure insertEmptySegmentAt (range: QTTimeRange); message 'insertEmptySegmentAt:';
    procedure deleteSegment (segment: QTTimeRange); message 'deleteSegment:';
    procedure scaleSegment_newDuration (segment: QTTimeRange; newDuration: QTTime); message 'scaleSegment:newDuration:';
    procedure addImage_forDuration_withAttributes (image: NSImage; duration: QTTime; attributes: NSDictionary); message 'addImage:forDuration:withAttributes:';
  end;


type
  QTTrack_VisualSupport = objccategory external (QTTrack)
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function apertureModeDimensionsForMode (mode: NSString): NSSize; message 'apertureModeDimensionsForMode:';
    procedure setApertureModeDimensions_forMode (dimensions: NSSize; mode: NSString); message 'setApertureModeDimensions:forMode:';
    procedure generateApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'generateApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure removeApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'removeApertureModeDimensions AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
    {$if ((defined(MAC_OS_X_VERSION_10_7)) and ((MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_7)))}
    function commonMetadata: NSArray; message 'commonMetadata'; deprecated 'available in 10.7 and later but deprecated in 10.9';
    function availableMetadataFormats: NSArray; message 'availableMetadataFormats'; deprecated 'available in 10.7 and later but deprecated in 10.9';
    function metadataForFormat (format: NSString): NSArray; message 'metadataForFormat:'; deprecated 'available in 10.7 and later but deprecated in 10.9';
    {$endif}
  end;
{$endif}

