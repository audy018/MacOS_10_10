{ Parsed from DiscRecordingUI.framework (MacOSX10.10) DRBurnSetupPanel.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRBurnSetupPanelPtr = ^DRBurnSetupPanel;
{$endif}

{$ifdef CLASSES}

type
  DRBurnSetupPanel = objcclass external (DRSetupPanel)
  private
    _advancedItems: id;
    _expander: NSButton;
    _burnSpeedPopup: NSPopUpButton;
    _appendable: NSButton;
    _completionActions: NSMatrix;
    _testBurn: NSButton;
    _verifyBurn: NSButton;
    _eraseDisc: NSButton;
    _reservedBurnSetupPanel:array[0..3] of pointer;
    _bsp_privateStorage: pointer;
  public
    class function setupPanel: DRBurnSetupPanel; message 'setupPanel';
    procedure setDefaultButtonTitle (title: NSString); message 'setDefaultButtonTitle:';
    procedure setCanSelectTestBurn (flag: boolean); message 'setCanSelectTestBurn:';
    procedure setCanSelectAppendableMedia (flag: boolean); message 'setCanSelectAppendableMedia:';
    function burnObject: DRBurn; message 'burnObject';
    procedure expand (sender: id); message 'expand:';
    procedure burnSpeed (sender: id); message 'burnSpeed:';
    procedure appendable (sender: id); message 'appendable:';
    procedure completionAction (sender: id); message 'completionAction:';
    procedure testBurn (sender: id); message 'testBurn:';
    procedure verifyBurn (sender: id); message 'verifyBurn:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRBurnSetupPanelDefaultButtonDefaultTitle: NSString; cvar; external;
{$endif}

