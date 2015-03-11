{ Parsed from QTKit.framework (MacOSX10.10) QTFormatDescription.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTFormatDescriptionPtr = ^QTFormatDescription;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTFormatDescription = objcclass external (NSObject)
  private
    _internal: QTFormatDescriptionInternal;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
  public
    function mediaType: NSString; message 'mediaType';
    function formatType: UInt32; message 'formatType';
    function localizedFormatSummary: NSString; message 'localizedFormatSummary';
    function quickTimeSampleDescription: NSData; message 'quickTimeSampleDescription';
    function formatDescriptionAttributes: NSDictionary; message 'formatDescriptionAttributes';
    function attributeForKey (key: NSString): id; message 'attributeForKey:';
    function isEqualToFormatDescription (formatDescription: QTFormatDescription): boolean; message 'isEqualToFormatDescription:';
  end;
{$endif}

{$endif}
