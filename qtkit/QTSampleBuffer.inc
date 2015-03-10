{ Parsed from QTKit.framework (MacOSX10.10) QTSampleBuffer.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTSampleBufferPtr = ^QTSampleBuffer;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef TYPES}
const
  QTSampleBufferAudioBufferListOptionAssure16ByteAlignment = 1 shl 0;

type
  QTSampleBufferAudioBufferListOptions = NSUInteger;
  QTSampleBufferAudioBufferListOptionsPtr = ^QTSampleBufferAudioBufferListOptions;
{$endif}

{$ifdef CLASSES}

type
  QTSampleBuffer = objcclass external (NSObject)
  private
    _internal: QTSampleBufferInternal;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
  public
    function bytesForAllSamples AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: pointer; message 'bytesForAllSamples AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function lengthForAllSamples AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSUInteger; message 'lengthForAllSamples AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function formatDescription AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTFormatDescription; message 'formatDescription AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function duration AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'duration AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function decodeTime AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'decodeTime AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function presentationTime AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'presentationTime AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function numberOfSamples AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSUInteger; message 'numberOfSamples AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function sampleBufferAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'sampleBufferAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function attributeForKey (key: NSString): id; message 'attributeForKey:';
  end;


type
  QTSampleBuffer_UseCount = objccategory external (QTSampleBuffer)
    function sampleUseCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSUInteger; message 'sampleUseCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure incrementSampleUseCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'incrementSampleUseCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure decrementSampleUseCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'decrementSampleUseCount AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;

type
  QTAudioSampleBuffer = objccategory external (QTSampleBuffer)
    function audioBufferListWithOptions (options: QTSampleBufferAudioBufferListOptions): AudioBufferListPtr; message 'audioBufferListWithOptions:';
    function getAudioStreamPacketDescriptions_inRange (audioStreamPacketDescriptions: AudioStreamPacketDescriptionPtr; range: NSRange): boolean; message 'getAudioStreamPacketDescriptions:inRange:';
  end;
{$endif}

{$endif}
