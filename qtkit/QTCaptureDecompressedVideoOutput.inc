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
    function pixelBufferAttributes: NSDictionary; message 'pixelBufferAttributes';
    procedure setPixelBufferAttributes (pixelBufferAttributes: NSDictionary); message 'setPixelBufferAttributes:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_6_3)}
    function minimumVideoFrameInterval: NSTimeInterval; message 'minimumVideoFrameInterval';
    procedure setMinimumVideoFrameInterval (minimumVideoFrameInterval: NSTimeInterval); message 'setMinimumVideoFrameInterval:';
    function automaticallyDropsLateVideoFrames: boolean; message 'automaticallyDropsLateVideoFrames';
    procedure setAutomaticallyDropsLateVideoFrames (automaticallyDropsLateVideoFrames: boolean); message 'setAutomaticallyDropsLateVideoFrames:';
    {$endif}
    function delegate: id; message 'delegate';
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
