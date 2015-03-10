{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureConnection.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTCaptureConnectionPtr = ^QTCaptureConnection;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTCaptureConnection = objcclass external (NSObject)
  private
    _internal: QTCaptureConnectionInternal;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
  public
    function owner AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'owner AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function mediaType AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSString; message 'mediaType AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function formatDescription AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTFormatDescription; message 'formatDescription AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function isEnabled AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isEnabled AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
    function connectionAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'connectionAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setConnectionAttributes (connectionAttributes: NSDictionary); message 'setConnectionAttributes:';
    function attributeIsReadOnly (attributeKey: NSString): boolean; message 'attributeIsReadOnly:';
    function attributeForKey (attributeKey: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (attribute: id; key: NSString); message 'setAttribute:forKey:';
  end;
{$endif}

{$endif}
