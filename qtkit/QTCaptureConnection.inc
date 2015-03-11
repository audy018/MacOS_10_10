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
    function owner: id; message 'owner';
    function mediaType: NSString; message 'mediaType';
    function formatDescription: QTFormatDescription; message 'formatDescription';
    function isEnabled: boolean; message 'isEnabled';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
    function connectionAttributes: NSDictionary; message 'connectionAttributes';
    procedure setConnectionAttributes (connectionAttributes: NSDictionary); message 'setConnectionAttributes:';
    function attributeIsReadOnly (attributeKey: NSString): boolean; message 'attributeIsReadOnly:';
    function attributeForKey (attributeKey: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (attribute: id; key: NSString); message 'setAttribute:forKey:';
  end;
{$endif}

{$endif}
