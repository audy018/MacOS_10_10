{ Parsed from DiscRecordingUI.framework (MacOSX10.10) DREraseProgressPanel.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DREraseProgressPanelPtr = ^DREraseProgressPanel;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DREraseProgressPanelWillBeginNotification: NSString; cvar; external;
  DREraseProgressPanelDidFinishNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  DREraseProgressPanel = objcclass external (NSPanel)
  private
    _taskDescription: NSTextField;
    _progress: NSProgressIndicator;
    _icon: NSImageView;
    _owner: id;
    _eraseObject: DRErase;
    _successSound: NSSound;
    _failureSound: NSSound;
    _description: NSString;
  public
    class function progressPanel: DREraseProgressPanel; message 'progressPanel';
    procedure beginProgressSheetForErase_modalForWindow (erase: DRErase; docWindow: NSWindow); message 'beginProgressSheetForErase:modalForWindow:';
    procedure beginProgressPanelForErase (erase: DRErase); message 'beginProgressPanelForErase:';
    procedure setDescription (description: NSString); message 'setDescription:';
    function description: NSString; message 'description';
  end;


type
  DREraseProgressPanelDelegateMethods = objccategory external (NSObject)
    procedure eraseProgressPanelWillBegin (aNotification: NSNotification); message 'eraseProgressPanelWillBegin:';
    procedure eraseProgressPanelDidFinish (aNotification: NSNotification); message 'eraseProgressPanelDidFinish:';
    function eraseProgressPanel_eraseDidFinish (theErasePanel: DREraseProgressPanel; erase: DRErase): boolean; message 'eraseProgressPanel:eraseDidFinish:';
  end;
{$endif}

