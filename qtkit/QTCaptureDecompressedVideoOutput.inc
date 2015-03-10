{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureDecompressedVideoOutput.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{ Types from QTCaptureDecompressedVideoOutput }
{$ifdef TYPES}

{$endif}


{ Types from QTCaptureDecompressedVideoOutput_Delegate }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  QTCaptureDecompressedVideoOutputPtr = ^QTCaptureDecompressedVideoOutput;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTCaptureDecompressedVideoOutput = objcclass external (QTCaptureOutput)
  private
    _internal: QTCaptureDecompressedVideoOutputInternal;
    _delegate: id;
    _reserved4: clong;
    _reserved5: clong;
    _reserved6: clong;
  public
    function pixelBufferAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'pixelBufferAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setPixelBufferAttributes (pixelBufferAttributes: NSDictionary); message 'setPixelBufferAttributes:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_6_3)}
    function minimumVideoFrameInterval AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSTimeInterval; message 'minimumVideoFrameInterval AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMinimumVideoFrameInterval (minimumVideoFrameInterval: NSTimeInterval); message 'setMinimumVideoFrameInterval:';
    function automaticallyDropsLateVideoFrames AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'automaticallyDropsLateVideoFrames AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setAutomaticallyDropsLateVideoFrames (automaticallyDropsLateVideoFrames: boolean); message 'setAutomaticallyDropsLateVideoFrames:';
    {$endif}
    function delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setDelegate (delegate: id); message 'setDelegate:';
    procedure outputVideoFrame_withSampleBuffer_fromConnection (videoFrame: CVImageBufferRef; sampleBuffer: QTSampleBuffer; connection: QTCaptureConnection); message 'outputVideoFrame:withSampleBuffer:fromConnection:';
  end;


type
  QTCaptureDecompressedVideoOutput_Delegate = objccategory external (NSObject)
    procedure captureOutput_didOutputVideoFrame_withSampleBuffer_fromConnection (captureOutput: QTCaptureOutput; videoFrame: CVImageBufferRef; sampleBuffer: QTSampleBuffer; connection: QTCaptureConnection); message 'captureOutput:didOutputVideoFrame:withSampleBuffer:fromConnection:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_6_3)}
    procedure captureOutput_didDropVideoFrameWithSampleBuffer_fromConnection (captureOutput: QTCaptureOutput; sampleBuffer: QTSampleBuffer; connection: QTCaptureConnection); message 'captureOutput:didDropVideoFrameWithSampleBuffer:fromConnection:';
    {$endif}
  end;
{$endif}

{$endif}
