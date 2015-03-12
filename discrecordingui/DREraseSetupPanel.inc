{ Parsed from DiscRecordingUI.framework DREraseSetupPanel.h }


{$ifdef TYPES}
type
  DREraseSetupPanelPtr = ^DREraseSetupPanel;
{$endif}

{$ifdef CLASSES}

type
  DREraseSetupPanel = objcclass external (DRSetupPanel)
  private
    _eraseTypes: NSMatrix;
    _reservedEraseSetupPanel:array[0..1] of pointer;
    _esp_privateStorage: pointer;
  public
    class function setupPanel: DREraseSetupPanel; message 'setupPanel';
    function eraseObject: DRErase; message 'eraseObject';
    procedure eraseType (sender: id); message 'eraseType:';
  end;
{$endif}

