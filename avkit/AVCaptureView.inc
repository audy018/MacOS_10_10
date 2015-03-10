{ Parsed from AVKit.framework (MacOSX10.10) AVCaptureView.h }
{ Created on Sun Mar 8 1:48:48 2015 }


{ Types from AVCaptureView }
{$ifdef TYPES}

type
  AVCaptureViewControlsStyle = NSInteger;
type
  AVCaptureViewControlsStylePtr = ^AVCaptureViewControlsStyle;

const
  AVCaptureViewControlsStyleInline = 0;
  AVCaptureViewControlsStyleFloating = 1;
  AVCaptureViewControlsStyleInlineDeviceSelection = 2;
  AVCaptureViewControlsStyleDefault = AVCaptureViewControlsStyleInline;
{$endif}


{$ifdef TYPES}
type
  AVCaptureViewPtr = ^AVCaptureView;
  AVCaptureViewDelegateProtocolPtr = ^AVCaptureViewDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureView = objcclass external (NSView)
  public
    function session: AVCaptureSession; message 'session';
    procedure setSession_showVideoPreview_showAudioPreview (session_: AVCaptureSession; showVideoPreview: boolean; showAudioPreview: boolean); message 'setSession:showVideoPreview:showAudioPreview:';
    function fileOutput: AVCaptureFileOutput; message 'fileOutput';
    procedure setDelegate(newValue: AVCaptureViewDelegateProtocol); message 'setDelegate:';
    function delegate: AVCaptureViewDelegateProtocol; message 'delegate';
    procedure setControlsStyle(newValue: AVCaptureViewControlsStyle); message 'setControlsStyle:';
    function controlsStyle: AVCaptureViewControlsStyle; message 'controlsStyle';
    procedure setVideoGravity(newValue: NSString); message 'setVideoGravity:';
    function videoGravity: NSString; message 'videoGravity';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureViewDelegateProtocol = objcprotocol external name 'AVCaptureViewDelegate' (NSObjectProtocol)
    procedure captureView_startRecordingToFileOutput (captureView: AVCaptureView; fileOutput: AVCaptureFileOutput); message 'captureView:startRecordingToFileOutput:';
  end;
{$endif}

