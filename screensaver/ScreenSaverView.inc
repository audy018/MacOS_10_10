{ Parsed from ScreenSaver.framework (MacOSX10.10) ScreenSaverView.h }
{ Created on Sun Mar 8 1:48:47 2015 }


{$ifdef TYPES}
type
  ScreenSaverViewPtr = ^ScreenSaverView;
{$endif}

{$ifdef CLASSES}

type
  ScreenSaverView = objcclass external (NSView)
  private
    _animationTimer: NSTimer;
    _timeInterval: NSTimeInterval;
    _isPreview: boolean;
    _reserved1: pointer;
    _reserved2: pointer;
    _reserved3: pointer;
  public
    class function backingStoreType: NSBackingStoreType; message 'backingStoreType';
    class function performGammaFade: boolean; message 'performGammaFade';
    function initWithFrame (frame: NSRect): id; message 'initWithFrame:';
    function initWithFrame_isPreview (frame: NSRect; isPreview: boolean): id; message 'initWithFrame:isPreview:';
    function animationTimeInterval: NSTimeInterval; message 'animationTimeInterval';
    procedure setAnimationTimeInterval (timeInterval: NSTimeInterval); message 'setAnimationTimeInterval:';
    procedure startAnimation; message 'startAnimation';
    procedure stopAnimation; message 'stopAnimation';
    function isAnimating: boolean; message 'isAnimating';
    procedure drawRect (rect: NSRect); message 'drawRect:';
    procedure animateOneFrame; message 'animateOneFrame';
    function hasConfigureSheet: boolean; message 'hasConfigureSheet';
    function configureSheet: NSWindow; message 'configureSheet';
    function isPreview: boolean; message 'isPreview';
  end;
{$endif}

