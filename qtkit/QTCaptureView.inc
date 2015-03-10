{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureView.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTCaptureViewPtr = ^QTCaptureView;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTCaptureView = objcclass external (NSView)
  private
    _internal: QTCaptureViewInternal;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
  public
    function captureSession AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTCaptureSession; message 'captureSession AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setCaptureSession (captureSession: QTCaptureSession); message 'setCaptureSession:';
    function availableVideoPreviewConnections AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'availableVideoPreviewConnections AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function videoPreviewConnection AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTCaptureConnection; message 'videoPreviewConnection AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setVideoPreviewConnection (videoPreviewConnection: QTCaptureConnection); message 'setVideoPreviewConnection:';
    function fillColor AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSColor; message 'fillColor AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setFillColor (fillColor: NSColor); message 'setFillColor:';
    function preservesAspectRatio AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'preservesAspectRatio AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setPreservesAspectRatio (preservesAspectRatio: boolean); message 'setPreservesAspectRatio:';
    function previewBounds AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSRect; message 'previewBounds AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setDelegate (delegate: id); message 'setDelegate:';
  end;


type
  QTCaptureView_Delegate = objccategory external (NSObject)
    function view_willDisplayImage (view: QTCaptureView; image: CIImage): CIImage; message 'view:willDisplayImage:';
  end;
{$endif}

{$endif}
