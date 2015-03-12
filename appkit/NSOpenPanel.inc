{ Parsed from AppKit.framework NSOpenPanel.h }


{$ifdef TYPES}
type
  NSOpenPanelPtr = ^NSOpenPanel;
{$endif}

{$ifdef CLASSES}

type
  NSOpenPanel = objcclass external (NSSavePanel)
  private
    _reservedOpenPanel:array[0..3] of char;
    _privateOpenPanel: pointer;
  public
    class function openPanel: NSOpenPanel; message 'openPanel';
    function URLs: NSArray; message 'URLs';
    procedure setResolvesAliases(newValue: boolean); message 'setResolvesAliases:';
    function resolvesAliases: boolean; message 'resolvesAliases';
    procedure setCanChooseDirectories(newValue: boolean); message 'setCanChooseDirectories:';
    function canChooseDirectories: boolean; message 'canChooseDirectories';
    procedure setAllowsMultipleSelection(newValue: boolean); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: boolean; message 'allowsMultipleSelection';
    procedure setCanChooseFiles(newValue: boolean); message 'setCanChooseFiles:';
    function canChooseFiles: boolean; message 'canChooseFiles';
    procedure setCanResolveUbiquitousConflicts(newValue: boolean); message 'setCanResolveUbiquitousConflicts:';
    function canResolveUbiquitousConflicts: boolean; message 'canResolveUbiquitousConflicts';
    procedure setCanDownloadUbiquitousContents(newValue: boolean); message 'setCanDownloadUbiquitousContents:';
    function canDownloadUbiquitousContents: boolean; message 'canDownloadUbiquitousContents';
  end;


type
  NSOpenPanel_NSDeprecated = objccategory external name 'NSDeprecated' (NSOpenPanel)
    function filenames: NSArray; message 'filenames'; deprecated 'in 10_0, 10_6';
    procedure beginSheetForDirectory_file_types_modalForWindow_modalDelegate_didEndSelector_contextInfo (path: NSString; name: NSString; fileTypes: NSArray; docWindow: NSWindow; delegate_: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheetForDirectory:file:types:modalForWindow:modalDelegate:didEndSelector:contextInfo:'; deprecated 'in 10_0, 10_6';
    procedure beginForDirectory_file_types_modelessDelegate_didEndSelector_contextInfo (path: NSString; name: NSString; fileTypes: NSArray; delegate_: id; didEndSelector: SEL; contextInfo: pointer); message 'beginForDirectory:file:types:modelessDelegate:didEndSelector:contextInfo:'; deprecated 'in 10_0, 10_6';
    function runModalForDirectory_file_types (path: NSString; name: NSString; fileTypes: NSArray): NSInteger; message 'runModalForDirectory:file:types:'; deprecated 'in 10_0, 10_6';
    function runModalForTypes (fileTypes: NSArray): NSInteger; message 'runModalForTypes:'; deprecated 'in 10_0, 10_6';
  end;
{$endif}

