{ Parsed from QuartzComposer.framework (MacOSX10.10) QCCompositionParameterView.h }
{ Created on Sun Mar 8 1:48:39 2015 }


{$ifdef TYPES}
type
  QCCompositionParameterViewPtr = ^QCCompositionParameterView;
{$endif}

{$if (defined(MAC_OS_X_VERSION_10_5)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
{$ifdef CLASSES}

type
  QCCompositionParameterView = objcclass external (NSView)
  private
    _QCCompositionParameterViewPrivate: pointer;
  public
    procedure setCompositionRenderer (renderer: QCCompositionRendererProtocol); message 'setCompositionRenderer:';
    function compositionRenderer: QCCompositionRendererProtocol; message 'compositionRenderer';
    function hasParameters: boolean; message 'hasParameters';
    procedure setBackgroundColor (color: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDrawsBackground (flag: boolean); message 'setDrawsBackground:';
    function drawsBackground: boolean; message 'drawsBackground';
    procedure setDelegate (delegate: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
  end;


type
  QCCompositionParameterViewDelegate = objccategory external (NSObject)
    function compositionParameterView_shouldDisplayParameterWithKey_attributes (parameterView: QCCompositionParameterView; portKey: NSString; portAttributes: NSDictionary): boolean; message 'compositionParameterView:shouldDisplayParameterWithKey:attributes:';
    procedure compositionParameterView_didChangeParameterWithKey (parameterView: QCCompositionParameterView; portKey: NSString); message 'compositionParameterView:didChangeParameterWithKey:';
  end;
{$endif}

{$endif}
