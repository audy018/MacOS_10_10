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
    function mediaType AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSString; message 'mediaType AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function formatType AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: UInt32; message 'formatType AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function localizedFormatSummary AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSString; message 'localizedFormatSummary AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function quickTimeSampleDescription AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSData; message 'quickTimeSampleDescription AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function formatDescriptionAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'formatDescriptionAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function attributeForKey (key: NSString): id; message 'attributeForKey:';
    function isEqualToFormatDescription (formatDescription: QTFormatDescription): boolean; message 'isEqualToFormatDescription:';
  end;
{$endif}

{$endif}
