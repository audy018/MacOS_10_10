{ Parsed from DiscRecordingUI.framework (MacOSX10.10) DRSetupPanel.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRSetupPanelPtr = ^DRSetupPanel;
{$endif}

{$ifdef CLASSES}

type
  DRSetupPanel = objcclass external (NSPanel)
  private
    _ok: NSButton;
    _cancel: NSButton;
    _eject: NSButton;
    _userMessage: NSTextField;
    _icon: NSImageView;
    _deviceChooser: id;
    _sp_privateStorage: id;
    _reservedSetupPanel:array[0..1] of pointer;
  public
    function initWithNibName (nibName: NSString): id; message 'initWithNibName:';
    function runSetupPanel: NSInteger; message 'runSetupPanel';
    procedure beginSetupSheetForWindow_modalDelegate_didEndSelector_contextInfo (owner: NSWindow; modalDelegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSetupSheetForWindow:modalDelegate:didEndSelector:contextInfo:';
    procedure ok (sender: id); message 'ok:';
    procedure cancel (sender: id); message 'cancel:';
    procedure eject (sender: id); message 'eject:';
    procedure open (sender: id); message 'open:';
    procedure close_ (sender: id); message 'close:';
    procedure deviceSelectionChanged (device: DRDevice); message 'deviceSelectionChanged:';
    function mediaStateChanged (status: NSDictionary): boolean; message 'mediaStateChanged:';
    procedure setupForDisplay; message 'setupForDisplay';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRSetupPanelDeviceSelectionChangedNotification: NSString; cvar; external;
  DRSetupPanelSelectedDeviceKey: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  DRSetupPanelDelegate = objccategory external (NSObject)
    function setupPanel_deviceCouldBeTarget (aPanel: DRSetupPanel; device: DRDevice): boolean; message 'setupPanel:deviceCouldBeTarget:';
    function setupPanel_determineBestDeviceOfA_orB (aPanel: DRSetupPanel; deviceA: DRDevice; device: DRDevice): DRDevice; message 'setupPanel:determineBestDeviceOfA:orB:';
    procedure setupPanelDeviceSelectionChanged (aNotification: NSNotification); message 'setupPanelDeviceSelectionChanged:';
    function setupPanelShouldHandleMediaReservations (aPanel: DRSetupPanel): boolean; message 'setupPanelShouldHandleMediaReservations:';
    function setupPanel_deviceContainsSuitableMedia_promptString (aPanel: DRSetupPanel; device: DRDevice; prompt: NSStringPtr): boolean; message 'setupPanel:deviceContainsSuitableMedia:promptString:';
  end;
{$endif}

