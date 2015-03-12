{ Parsed from QTKit.framework QTMovieView.h }


{ Types from QTMovieView }
{$ifdef TYPES}



{$endif}


{ Types from QTMovieView_Delegate }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  QTMovieViewPtr = ^QTMovieView;
{$endif}

{$ifdef CLASSES}

type
  QTMovieView = objcclass external (NSView, NSCodingProtocol, NSUserInterfaceValidationsProtocol)
  private
    _movie: QTMovie;
    _fillColor: NSColor;
    _controllerVisible: boolean;
    _preservesAspectRatio: boolean;
    {$if  not defined(__LP64__)}
    _rendererView: NSView;
    _movieControllerView: QTMovieControllerView;
    {$endif}
    _viewFlags: NSUInteger;
    _internal: QTMovieViewInternal;
    _reserved3: clong;
    _delegate: id;
    {$if defined(__LP64__)}
    _proxy: cint32;
    _delegateProxy: cint32;
    _useVisualContext: boolean;
    _rendererView_: NSView;
    _movieControllerView_: QTMovieControllerView;
    {$endif}
  public
    function movie: QTMovie; message 'movie';
    procedure setMovie (movie: QTMovie); message 'setMovie:';
    function preservesAspectRatio: boolean; message 'preservesAspectRatio';
    procedure setPreservesAspectRatio (preservesAspectRatio: boolean); message 'setPreservesAspectRatio:';
    function fillColor: NSColor; message 'fillColor';
    procedure setFillColor (fillColor: NSColor); message 'setFillColor:';
    function isControllerVisible: boolean; message 'isControllerVisible';
    procedure setControllerVisible (controllerVisible: boolean); message 'setControllerVisible:';
    procedure setShowsResizeIndicator (show: boolean); message 'setShowsResizeIndicator:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function isBackButtonVisible: boolean; message 'isBackButtonVisible';
    procedure setBackButtonVisible (state: boolean); message 'setBackButtonVisible:';
    function isCustomButtonVisible: boolean; message 'isCustomButtonVisible';
    procedure setCustomButtonVisible (state: boolean); message 'setCustomButtonVisible:';
    function isHotSpotButtonVisible: boolean; message 'isHotSpotButtonVisible';
    procedure setHotSpotButtonVisible (state: boolean); message 'setHotSpotButtonVisible:';
    function areStepButtonsVisible: boolean; message 'areStepButtonsVisible';
    procedure setStepButtonsVisible (state: boolean); message 'setStepButtonsVisible:';
    function isTranslateButtonVisible: boolean; message 'isTranslateButtonVisible';
    procedure setTranslateButtonVisible (state: boolean); message 'setTranslateButtonVisible:';
    function isVolumeButtonVisible: boolean; message 'isVolumeButtonVisible';
    procedure setVolumeButtonVisible (state: boolean); message 'setVolumeButtonVisible:';
    function areZoomButtonsVisible: boolean; message 'areZoomButtonsVisible';
    procedure setZoomButtonsVisible (state: boolean); message 'setZoomButtonsVisible:';
    {$endif}
    function movieBounds: NSRect; message 'movieBounds';
    function movieControllerBounds: NSRect; message 'movieControllerBounds';
    function controllerBarHeight: single; message 'controllerBarHeight';
    procedure play (sender: id); message 'play:';
    procedure pause (sender: id); message 'pause:';
    procedure gotoBeginning (sender: id); message 'gotoBeginning:';
    procedure gotoEnd (sender: id); message 'gotoEnd:';
    procedure gotoNextSelectionPoint (sender: id); message 'gotoNextSelectionPoint:';
    procedure gotoPreviousSelectionPoint (sender: id); message 'gotoPreviousSelectionPoint:';
    procedure gotoPosterFrame (sender: id); message 'gotoPosterFrame:';
    procedure stepForward (sender: id); message 'stepForward:';
    procedure stepBackward (sender: id); message 'stepBackward:';
    function isEditable: boolean; message 'isEditable';
    procedure setEditable (editable: boolean); message 'setEditable:';
    procedure cut (sender: id); message 'cut:';
    procedure copy_ (sender: id); message 'copy:';
    procedure paste (sender: id); message 'paste:';
    procedure selectAll (sender: id); message 'selectAll:';
    procedure selectNone (sender: id); message 'selectNone:';
    procedure delete (sender: id); message 'delete:';
    procedure add (sender: id); message 'add:';
    procedure addScaled (sender: id); message 'addScaled:';
    procedure replace (sender: id); message 'replace:';
    procedure trim (sender: id); message 'trim:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function delegate: id; message 'delegate';
    procedure setDelegate (delegate: id); message 'setDelegate:';
    {$endif}

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function validateUserInterfaceItem (anItem: NSValidatedUserInterfaceItemProtocol): boolean; message 'validateUserInterfaceItem:';
  end;


type
  QTMovieView_Delegate = objccategory external (NSObject)
    {$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
    function view_willDisplayImage (view: QTMovieView; image: CIImage): CIImage; message 'view:willDisplayImage:';
    {$endif}
    {$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_6_3)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_6))}
    function menuForEventDelegate (event: NSEvent): NSMenu; message 'menuForEventDelegate:';
    {$endif}
  end;
{$endif}

