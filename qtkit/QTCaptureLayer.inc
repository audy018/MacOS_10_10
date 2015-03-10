{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureLayer.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTCaptureLayerPtr = ^QTCaptureLayer;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
{$ifdef CLASSES}

type
  QTCaptureLayer = objcclass external (CALayer)
  private
    _captureLayerPriv: QTCaptureLayerPrivate;
  public
    class function layerWithSession (session: QTCaptureSession): id; message 'layerWithSession:';
    function initWithSession (session: QTCaptureSession): id; message 'initWithSession:';
    procedure setSession (session: QTCaptureSession); message 'setSession:';
    function session AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTCaptureSession; message 'session AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;
{$endif}

{$endif}
