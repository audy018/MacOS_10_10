{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureFileOutput.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{ Types from QTCaptureFileOutput }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  QTCaptureFileOutputPtr = ^QTCaptureFileOutput;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef TYPES}
const
  QTCaptureFileOutputBufferDestinationNewFile = 1;
  QTCaptureFileOutputBufferDestinationOldFile = 2;

type
  QTCaptureFileOutputBufferDestination = NSUInteger;
  QTCaptureFileOutputBufferDestinationPtr = ^QTCaptureFileOutputBufferDestination;
{$endif}

{$ifdef CLASSES}

type
  QTCaptureFileOutput = objcclass external (QTCaptureOutput)
  private
    _fileOutputInternal: QTCaptureFileOutputInternal;
    _delegate: id;
    _reserved4: clong;
    _reserved5: clong;
    _reserved6: clong;
  public
    function outputFileURL AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSURL; message 'outputFileURL AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure recordToOutputFileURL (url: NSURL); message 'recordToOutputFileURL:';
    procedure recordToOutputFileURL_bufferDestination (url: NSURL; bufferDestination: QTCaptureFileOutputBufferDestination); message 'recordToOutputFileURL:bufferDestination:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_6_3)}
    function isRecordingPaused AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isRecordingPaused AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure pauseRecording AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'pauseRecording AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure resumeRecording AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'resumeRecording AVAILABLE_QTKIT_VERSION_7_6_3_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    {$endif}
    function compressionOptionsForConnection (connection: QTCaptureConnection): QTCompressionOptions; message 'compressionOptionsForConnection:';
    procedure setCompressionOptions_forConnection (compressionOptions: QTCompressionOptions; connection: QTCaptureConnection); message 'setCompressionOptions:forConnection:';
    function maximumVideoSize AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSSize; message 'maximumVideoSize AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMaximumVideoSize (maximumVideoSize: NSSize); message 'setMaximumVideoSize:';
    function minimumVideoFrameInterval AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSTimeInterval; message 'minimumVideoFrameInterval AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMinimumVideoFrameInterval (minimumVideoFrameInterval: NSTimeInterval); message 'setMinimumVideoFrameInterval:';
    function recordedDuration AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'recordedDuration AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function recordedFileSize AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: UInt64; message 'recordedFileSize AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function maximumRecordedDuration AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'maximumRecordedDuration AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMaximumRecordedDuration (maximumRecordedDuration: QTTime); message 'setMaximumRecordedDuration:';
    function maximumRecordedFileSize AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: UInt64; message 'maximumRecordedFileSize AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMaximumRecordedFileSize (maximumRecordedFileSize: UInt64); message 'setMaximumRecordedFileSize:';
    function delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setDelegate (delegate: id); message 'setDelegate:';
  end;


type
  QTCaptureFileOutput_Delegate = objccategory external (NSObject)
    procedure captureOutput_didOutputSampleBuffer_fromConnection (captureOutput: QTCaptureFileOutput; sampleBuffer: QTSampleBuffer; connection: QTCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:';
    procedure captureOutput_willStartRecordingToOutputFileAtURL_forConnections (captureOutput: QTCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:willStartRecordingToOutputFileAtURL:forConnections:';
    procedure captureOutput_didStartRecordingToOutputFileAtURL_forConnections (captureOutput: QTCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didStartRecordingToOutputFileAtURL:forConnections:';
    function captureOutput_shouldChangeOutputFileAtURL_forConnections_dueToError (captureOutput: QTCaptureFileOutput; outputFileURL: NSURL; connections: NSArray; error: NSError): boolean; message 'captureOutput:shouldChangeOutputFileAtURL:forConnections:dueToError:';
    procedure captureOutput_mustChangeOutputFileAtURL_forConnections_dueToError (captureOutput: QTCaptureFileOutput; outputFileURL: NSURL; connections: NSArray; error: NSError); message 'captureOutput:mustChangeOutputFileAtURL:forConnections:dueToError:';
    procedure captureOutput_willFinishRecordingToOutputFileAtURL_forConnections_dueToError (captureOutput: QTCaptureFileOutput; outputFileURL: NSURL; connections: NSArray; error: NSError); message 'captureOutput:willFinishRecordingToOutputFileAtURL:forConnections:dueToError:';
    procedure captureOutput_didFinishRecordingToOutputFileAtURL_forConnections_dueToError (captureOutput: QTCaptureFileOutput; outputFileURL: NSURL; connections: NSArray; error: NSError); message 'captureOutput:didFinishRecordingToOutputFileAtURL:forConnections:dueToError:';
    procedure captureOutput_didPauseRecordingToOutputFileAtURL_forConnections (captureOutput: QTCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didPauseRecordingToOutputFileAtURL:forConnections:';
    procedure captureOutput_didResumeRecordingToOutputFileAtURL_forConnections (captureOutput: QTCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didResumeRecordingToOutputFileAtURL:forConnections:';
  end;
{$endif}

{$endif}
