{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureVideoPreviewOutput.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{ Types from QTCaptureVideoPreviewOutput }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  QTCaptureVideoPreviewOutputPtr = ^QTCaptureVideoPreviewOutput;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}

{$ifdef CLASSES}

type
  QTCaptureVideoPreviewOutput = objcclass external (QTCaptureOutput)
  private
    _internal: QTCaptureVideoPreviewOutputInternal;
    _delegate: id;
    _reserved4: clong;
  public
    function pixelBufferAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSDictionary; message 'pixelBufferAttributes AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setPixelBufferAttributes (pixelBufferAttributes: NSDictionary); message 'setPixelBufferAttributes:';
    {$if  not defined(__LP64__)}
    function visualContextForConnection (connection: QTCaptureConnection): QTVisualContextRef; message 'visualContextForConnection:';
    procedure setVisualContext_forConnection (visualContext: QTVisualContextRef; connection: QTCaptureConnection); message 'setVisualContext:forConnection:';
    {$endif}
    function delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setDelegate (delegate: id); message 'setDelegate:';
    procedure outputVideoFrame_withSampleBuffer_fromConnection (videoFrame: CVImageBufferRef; sampleBuffer: QTSampleBuffer; connection: QTCaptureConnection); message 'outputVideoFrame:withSampleBuffer:fromConnection:';
  end;


type
  QTCaptureVideoPreviewOutput_Delegate = objccategory external (NSObject)
    procedure captureOutput_didOutputVideoFrame_withSampleBuffer_fromConnection (captureOutput: QTCaptureOutput; videoFrame: CVImageBufferRef; sampleBuffer: QTSampleBuffer; connection: QTCaptureConnection); message 'captureOutput:didOutputVideoFrame:withSampleBuffer:fromConnection:';
  end;
{$endif}

{$endif}
