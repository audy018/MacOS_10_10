{ Parsed from QuartzComposer.framework (MacOSX10.10) QCCompositionPickerPanel.h }
{ Created on Sun Mar 8 1:48:39 2015 }


{$ifdef TYPES}
type
  QCCompositionPickerPanelPtr = ^QCCompositionPickerPanel;
{$endif}

{$if (defined(MAC_OS_X_VERSION_10_5)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
{$ifdef EXTERNAL_SYMBOLS}
var
  QCCompositionPickerPanelDidSelectCompositionNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  QCCompositionPickerPanel = objcclass external (NSPanel)
  private
    _private: pointer;
  public
    class function sharedCompositionPickerPanel: QCCompositionPickerPanel; message 'sharedCompositionPickerPanel';
    function compositionPickerView: QCCompositionPickerView; message 'compositionPickerView';
  end;
{$endif}

{$endif}
