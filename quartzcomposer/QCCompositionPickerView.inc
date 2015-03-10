{ Parsed from QuartzComposer.framework (MacOSX10.10) QCCompositionPickerView.h }
{ Created on Sun Mar 8 1:48:39 2015 }


{$ifdef TYPES}
type
  QCCompositionPickerViewPtr = ^QCCompositionPickerView;
{$endif}

{$if (defined(MAC_OS_X_VERSION_10_5)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
{$ifdef EXTERNAL_SYMBOLS}
var
  QCCompositionPickerViewDidSelectCompositionNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  QCCompositionPickerView = objcclass external (NSView)
  private
    _QCCompositionPickerViewPrivate: pointer;
  public
    procedure setCompositionsFromRepositoryWithProtocol_andAttributes (protocol: NSString; attributes: NSDictionary); message 'setCompositionsFromRepositoryWithProtocol:andAttributes:';
    function compositions: NSArray; message 'compositions';
    procedure setDelegate (delegate: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setShowsCompositionNames (flag: boolean); message 'setShowsCompositionNames:';
    function showsCompositionNames: boolean; message 'showsCompositionNames';
    procedure setAllowsEmptySelection (flag: boolean); message 'setAllowsEmptySelection:';
    function allowsEmptySelection: boolean; message 'allowsEmptySelection';
    procedure setCompositionAspectRatio (ratio: NSSize); message 'setCompositionAspectRatio:';
    function compositionAspectRatio: NSSize; message 'compositionAspectRatio';
    procedure setDefaultValue_forInputKey (value: id; key: NSString); message 'setDefaultValue:forInputKey:';
    procedure resetDefaultInputValues; message 'resetDefaultInputValues';
    procedure setSelectedComposition (composition: QCComposition); message 'setSelectedComposition:';
    function selectedComposition: QCComposition; message 'selectedComposition';
    procedure startAnimation (sender: id); message 'startAnimation:';
    procedure stopAnimation (sender: id); message 'stopAnimation:';
    function isAnimating: boolean; message 'isAnimating';
    procedure setMaxAnimationFrameRate (maxFPS: single); message 'setMaxAnimationFrameRate:';
    function maxAnimationFrameRate: single; message 'maxAnimationFrameRate';
    procedure setBackgroundColor (color: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDrawsBackground (flag: boolean); message 'setDrawsBackground:';
    function drawsBackground: boolean; message 'drawsBackground';
    function numberOfColumns: NSUInteger; message 'numberOfColumns';
    procedure setNumberOfColumns (columns: NSUInteger); message 'setNumberOfColumns:';
    function numberOfRows: NSUInteger; message 'numberOfRows';
    procedure setNumberOfRows (rows: NSUInteger); message 'setNumberOfRows:';
  end;


type
  QCCompositionPickerViewDelegate = objccategory external (NSObject)
    procedure compositionPickerView_didSelectComposition (pickerView: QCCompositionPickerView; composition: QCComposition); message 'compositionPickerView:didSelectComposition:';
    procedure compositionPickerViewDidStartAnimating (pickerView: QCCompositionPickerView); message 'compositionPickerViewDidStartAnimating:';
    procedure compositionPickerViewWillStopAnimating (pickerView: QCCompositionPickerView); message 'compositionPickerViewWillStopAnimating:';
  end;
{$endif}

{$endif}
