{ Parsed from AVKit.framework (MacOSX10.10) AVPlayerView.h }
{ Created on Sun Mar 8 1:48:48 2015 }


{ Types from AVPlayerView }
{$ifdef TYPES}

type
  AVPlayerViewControlsStyle = NSInteger;
type
  AVPlayerViewControlsStylePtr = ^AVPlayerViewControlsStyle;

const
  AVPlayerViewControlsStyleNone = 0;
  AVPlayerViewControlsStyleInline = 1;
  AVPlayerViewControlsStyleFloating = 2;
  AVPlayerViewControlsStyleMinimal = 3;
  AVPlayerViewControlsStyleDefault = AVPlayerViewControlsStyleInline;
{$endif}


{ Types from AVPlayerViewTrimming }
{$ifdef TYPES}

type
  AVPlayerViewTrimResult = NSInteger;
type
  AVPlayerViewTrimResultPtr = ^AVPlayerViewTrimResult;

const
  AVPlayerViewTrimOKButton = 0;
  AVPlayerViewTrimCancelButton = 1;
{$endif}


{$ifdef TYPES}
type
  AVPlayerViewPtr = ^AVPlayerView;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerView = objcclass external (NSView)
  public
    procedure setPlayer(newValue: AVPlayer); message 'setPlayer:';
    function player: AVPlayer; message 'player';
    procedure setControlsStyle(newValue: AVPlayerViewControlsStyle); message 'setControlsStyle:';
    function controlsStyle: AVPlayerViewControlsStyle; message 'controlsStyle';
    procedure setVideoGravity(newValue: NSString); message 'setVideoGravity:';
    function videoGravity: NSString; message 'videoGravity';
    function isReadyForDisplay: boolean; message 'isReadyForDisplay';
    function videoBounds: NSRect; message 'videoBounds';
    function contentOverlayView: NSView; message 'contentOverlayView';
  end;


type
  AVPlayerViewCustomization = objccategory external (AVPlayerView)
    procedure setShowsFrameSteppingButtons(newValue: boolean); message 'setShowsFrameSteppingButtons:';
    function showsFrameSteppingButtons: boolean; message 'showsFrameSteppingButtons';
    procedure setShowsSharingServiceButton(newValue: boolean); message 'setShowsSharingServiceButton:';
    function showsSharingServiceButton: boolean; message 'showsSharingServiceButton';
    procedure setActionPopUpButtonMenu(newValue: NSMenu); message 'setActionPopUpButtonMenu:';
    function actionPopUpButtonMenu: NSMenu; message 'actionPopUpButtonMenu';
    procedure setShowsFullScreenToggleButton(newValue: boolean); message 'setShowsFullScreenToggleButton:';
    function showsFullScreenToggleButton: boolean; message 'showsFullScreenToggleButton';
  end;

type
  AVPlayerViewTrimming = objccategory external (AVPlayerView)
    function canBeginTrimming: boolean; message 'canBeginTrimming';
    procedure beginTrimmingWithCompletionHandler (handler: OpaqueCBlock); message 'beginTrimmingWithCompletionHandler:';
  end;

type
  AVPlayerViewChapterIndicator = objccategory external (AVPlayerView)
    procedure flashChapterNumber_chapterTitle (chapterNumber: NSUInteger; chapterTitle: NSString); message 'flashChapterNumber:chapterTitle:';
  end;
{$endif}

