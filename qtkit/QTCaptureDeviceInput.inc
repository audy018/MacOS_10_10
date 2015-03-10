{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureDeviceInput.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTCaptureDeviceInputPtr = ^QTCaptureDeviceInput;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTCaptureDeviceInput = objcclass external (QTCaptureInput)
  private
    _internal: QTCaptureDeviceInputInternal;
    _reserved4: clong;
    _reserved5: clong;
    _reserved6: clong;
  public
    class function deviceInputWithDevice (device: QTCaptureDevice): id; message 'deviceInputWithDevice:';
    function initWithDevice (device: QTCaptureDevice): id; message 'initWithDevice:';
    function device AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTCaptureDevice; message 'device AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;
{$endif}

{$endif}
