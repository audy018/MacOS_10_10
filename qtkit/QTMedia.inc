{ Parsed from QTKit.framework (MacOSX10.10) QTMedia.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{ Types from QTMedia }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  QTMediaPtr = ^QTMedia;
{$endif}

{$ifdef CLASSES}

type
  QTMedia = objcclass external (NSObject)
  private
    {$if defined(__LP64__)}
    _proxy: cint32;
    {$else}
    _quickTimeMedia: Media;
    _undoManager: NSUndoManager;
    _undoAttributes: NSDictionary;
    _quickTimeMovieWrapper: QTQuickTimeMovieWrapper;
    {$endif}
    _flags: clong;
    _track: QTTrack;
  public
    {$if  not defined(__LP64__)}
    class function mediaWithQuickTimeMedia_error (media_: Media; errorPtr: NSErrorPtr): id; message 'mediaWithQuickTimeMedia:error:';
    function initWithQuickTimeMedia_error (media_: Media; errorPtr: NSErrorPtr): id; message 'initWithQuickTimeMedia:error:';
    {$endif}
    function track AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTrack; message 'track AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function mediaAttributes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'mediaAttributes AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMediaAttributes (attributes: NSDictionary); message 'setMediaAttributes:';
    function attributeForKey (attributeKey: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (value: id; attributeKey: NSString); message 'setAttribute:forKey:';
    function hasCharacteristic (characteristic: NSString): boolean; message 'hasCharacteristic:';
    {$if  not defined(__LP64__)}
    function quickTimeMedia AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: Media; message 'quickTimeMedia AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
  end;
{$endif}

