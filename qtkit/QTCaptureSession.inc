{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureSession.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTCaptureSessionPtr = ^QTCaptureSession;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTCaptureSession = objcclass external (NSObject)
  private
    _internal: QTCaptureSessionInternal;
    _internalState: QTCaptureSessionInternalState;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
  public
    function inputs AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'inputs AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function addInput_error (input: QTCaptureInput; errorPtr: NSErrorPtr): boolean; message 'addInput:error:';
    procedure removeInput (input: QTCaptureInput); message 'removeInput:';
    function outputs AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'outputs AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function addOutput_error (output: QTCaptureOutput; errorPtr: NSErrorPtr): boolean; message 'addOutput:error:';
    procedure removeOutput (output: QTCaptureOutput); message 'removeOutput:';
    function isRunning AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isRunning AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure startRunning AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'startRunning AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure stopRunning AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3; message 'stopRunning AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;
{$endif}

{$endif}
