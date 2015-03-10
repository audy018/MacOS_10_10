{ Parsed from QTKit.framework (MacOSX10.10) QTMovieView.h }
{ Created on Sun Mar 8 1:48:37 2015 }


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
    function movie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTMovie; message 'movie AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setMovie (movie: QTMovie); message 'setMovie:';
    function preservesAspectRatio AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'preservesAspectRatio AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setPreservesAspectRatio (preservesAspectRatio: boolean); message 'setPreservesAspectRatio:';
    function fillColor AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSColor; message 'fillColor AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setFillColor (fillColor: NSColor); message 'setFillColor:';
    function isControllerVisible AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isControllerVisible AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setControllerVisible (controllerVisible: boolean); message 'setControllerVisible:';
    procedure setShowsResizeIndicator (show: boolean); message 'setShowsResizeIndicator:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function isBackButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isBackButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setBackButtonVisible (state: boolean); message 'setBackButtonVisible:';
    function isCustomButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isCustomButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setCustomButtonVisible (state: boolean); message 'setCustomButtonVisible:';
    function isHotSpotButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isHotSpotButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setHotSpotButtonVisible (state: boolean); message 'setHotSpotButtonVisible:';
    function areStepButtonsVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'areStepButtonsVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setStepButtonsVisible (state: boolean); message 'setStepButtonsVisible:';
    function isTranslateButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isTranslateButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setTranslateButtonVisible (state: boolean); message 'setTranslateButtonVisible:';
    function isVolumeButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isVolumeButtonVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setVolumeButtonVisible (state: boolean); message 'setVolumeButtonVisible:';
    function areZoomButtonsVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'areZoomButtonsVisible AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setZoomButtonsVisible (state: boolean); message 'setZoomButtonsVisible:';
    {$endif}
    function movieBounds AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSRect; message 'movieBounds AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function movieControllerBounds AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSRect; message 'movieControllerBounds AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    function controllerBarHeight AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: single; message 'controllerBarHeight AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure play (sender: id); message 'play:';
    procedure pause (sender: id); message 'pause:';
    procedure gotoBeginning (sender: id); message 'gotoBeginning:';
    procedure gotoEnd (sender: id); message 'gotoEnd:';
    procedure gotoNextSelectionPoint (sender: id); message 'gotoNextSelectionPoint:';
    procedure gotoPreviousSelectionPoint (sender: id); message 'gotoPreviousSelectionPoint:';
    procedure gotoPosterFrame (sender: id); message 'gotoPosterFrame:';
    procedure stepForward (sender: id); message 'stepForward:';
    procedure stepBackward (sender: id); message 'stepBackward:';
    function isEditable AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: boolean; message 'isEditable AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
    procedure setEditable (editable: boolean); message 'setEditable:';
    procedure cut (sender: id); message 'cut:';
    procedure copy (sender: id); message 'copy:';
    procedure paste (sender: id); message 'paste:';
    procedure selectAll (sender: id); message 'selectAll:';
    procedure selectNone (sender: id); message 'selectNone:';
    procedure delete (sender: id); message 'delete:';
    procedure add (sender: id); message 'add:';
    procedure addScaled (sender: id); message 'addScaled:';
    procedure replace (sender: id); message 'replace:';
    procedure trim (sender: id); message 'trim:';
    {$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
    function delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: id; message 'delegate AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
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

