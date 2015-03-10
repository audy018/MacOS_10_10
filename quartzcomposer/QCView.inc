{ Parsed from QuartzComposer.framework (MacOSX10.10) QCView.h }
{ Created on Sun Mar 8 1:48:39 2015 }


{ Types from QCView }
{$ifdef TYPES}



{$endif}


{ Types from IBExtensions }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  QCViewPtr = ^QCView;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  QCViewDidStartRenderingNotification: NSString; cvar; external;
  QCViewDidStopRenderingNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  QCView = objcclass external (NSView, QCCompositionRendererProtocol)
  private
    _QCViewPrivate: pointer;
  public
    function loadCompositionFromFile (path: NSString): boolean; message 'loadCompositionFromFile:';
    {$if (defined(MAC_OS_X_VERSION_10_5)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
    function loadComposition (composition: QCComposition): boolean; message 'loadComposition:';
    function loadedComposition: QCComposition; message 'loadedComposition';
    procedure unloadComposition; message 'unloadComposition';
    {$endif}
    procedure setAutostartsRendering (flag: boolean); message 'setAutostartsRendering:';
    function autostartsRendering: boolean; message 'autostartsRendering';
    procedure setEraseColor (color: NSColor); message 'setEraseColor:';
    function eraseColor: NSColor; message 'eraseColor';
    procedure setEventForwardingMask (mask: NSUInteger); message 'setEventForwardingMask:';
    function eventForwardingMask: NSUInteger; message 'eventForwardingMask';
    procedure setMaxRenderingFrameRate (maxFPS: single); message 'setMaxRenderingFrameRate:';
    function maxRenderingFrameRate: single; message 'maxRenderingFrameRate';
    procedure erase; message 'erase';
    function startRendering: boolean; message 'startRendering';
    {$if (defined(MAC_OS_X_VERSION_10_5)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
    function renderAtTime_arguments (time: NSTimeInterval; arguments: NSDictionary): boolean; message 'renderAtTime:arguments:';
    procedure pauseRendering; message 'pauseRendering';
    function isPausedRendering: boolean; message 'isPausedRendering';
    procedure resumeRendering; message 'resumeRendering';
    {$endif}
    procedure stopRendering; message 'stopRendering';
    function isRendering: boolean; message 'isRendering';
    {$if (defined(MAC_OS_X_VERSION_10_5)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
    function snapshotImage: NSImage; message 'snapshotImage';
    function createSnapshotImageOfType (type_: NSString): id; message 'createSnapshotImageOfType:';
    function openGLContext: NSOpenGLContext; message 'openGLContext';
    function openGLPixelFormat: NSOpenGLPixelFormat; message 'openGLPixelFormat';
    {$endif}

    { Adopted protocols }
    function attributes: NSDictionary; message 'attributes';
    function inputKeys: NSArray; message 'inputKeys';
    function outputKeys: NSArray; message 'outputKeys';
    function propertyListFromInputValues: id; message 'propertyListFromInputValues';
    procedure setInputValuesWithPropertyList (plist: id); message 'setInputValuesWithPropertyList:';
    function setValue_forInputKey (value: id; key: NSString): boolean; message 'setValue:forInputKey:';
    function userInfo: NSMutableDictionary; message 'userInfo';
    function valueForInputKey (key: NSString): id; message 'valueForInputKey:';
    function valueForOutputKey (key: NSString): id; message 'valueForOutputKey:';
    function valueForOutputKey_ofType (key: NSString; type_: NSString): id; message 'valueForOutputKey:ofType:';
  end;


type
  IBExtensions = objccategory external (QCView)
    procedure start (sender: id); message 'start:';
    procedure stop (sender: id); message 'stop:';
    {$if (defined(MAC_OS_X_VERSION_10_5)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
    procedure play (sender: id); message 'play:';
    {$endif}
  end;
{$endif}
