{ Parsed from DiscRecordingUI.framework (MacOSX10.10) DRBurnProgressPanel.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRBurnProgressPanelPtr = ^DRBurnProgressPanel;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRBurnProgressPanelWillBeginNotification: NSString; cvar; external;
  DRBurnProgressPanelDidFinishNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  DRBurnProgressPanel = objcclass external (NSPanel)
  private
    _status: NSTextField;
    _taskDescription: NSTextField;
    _progress: NSProgressIndicator;
    _icon: NSImageView;
    _stopButton: NSButton;
    _owner: id;
    _burnObject: DRBurn;
    _successSound: NSSound;
    _failureSound: NSSound;
    _description: NSString;
    _verbose: boolean;
    _curState: NSString;
  public
    class function progressPanel: DRBurnProgressPanel; message 'progressPanel';
    procedure beginProgressSheetForBurn_layout_modalForWindow (burn: DRBurn; layout: id; docWindow: NSWindow); message 'beginProgressSheetForBurn:layout:modalForWindow:';
    procedure beginProgressPanelForBurn_layout (burn: DRBurn; layout: id); message 'beginProgressPanelForBurn:layout:';
    procedure setDescription (description: NSString); message 'setDescription:';
    function description: NSString; message 'description';
    procedure setVerboseProgressStatus (verbose: boolean); message 'setVerboseProgressStatus:';
    function verboseProgressStatus: boolean; message 'verboseProgressStatus';
    procedure stopBurn (sender: id); message 'stopBurn:';
  end;


type
  DRBurnProgressPanelDelegateMethods = objccategory external (NSObject)
    procedure burnProgressPanelWillBegin (aNotification: NSNotification); message 'burnProgressPanelWillBegin:';
    procedure burnProgressPanelDidFinish (aNotification: NSNotification); message 'burnProgressPanelDidFinish:';
    function burnProgressPanel_burnDidFinish (theBurnPanel: DRBurnProgressPanel; burn: DRBurn): boolean; message 'burnProgressPanel:burnDidFinish:';
  end;
{$endif}

