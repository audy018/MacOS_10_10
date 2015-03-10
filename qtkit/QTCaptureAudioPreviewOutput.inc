{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureAudioPreviewOutput.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTCaptureAudioPreviewOutputPtr = ^QTCaptureAudioPreviewOutput;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTCaptureAudioPreviewOutput = objcclass external (QTCaptureOutput)
  private
    _internal: QTCaptureAudioPreviewOutputInternal;
    _reserved4: clong;
    _reserved5: clong;
    _reserved6: clong;
  public
    function outputDeviceUniqueID AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSString; message 'outputDeviceUniqueID AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setOutputDeviceUniqueID (uniqueID: NSString); message 'setOutputDeviceUniqueID:';
    function volume AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: single; message 'volume AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setVolume (volume: single); message 'setVolume:';
  end;
{$endif}

{$endif}
