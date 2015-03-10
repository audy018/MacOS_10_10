{ Parsed from InstallerPlugins.framework (MacOSX10.10) InstallerSection.h }
{ Created on Sun Mar 8 1:48:47 2015 }


{$ifdef TYPES}
type
  InstallerSectionPtr = ^InstallerSection;
{$endif}

{$ifdef TYPES}
type
  InstallerSection_Private = OpaqueType;
  InstallerSection_PrivatePtr = ^InstallerSection_Private;
{$endif}

{$ifdef CLASSES}

type
  InstallerSection = objcclass external (NSObject)
  private
    firstPane: InstallerPane;
    _private: InstallerSection_PrivatePtr;
  public
    function bundle: NSBundle; message 'bundle';
    function title: NSString; message 'title';
    function firstPane_: InstallerPane; message 'firstPane';
    function shouldLoad: boolean; message 'shouldLoad';
    procedure willLoadMainNib; message 'willLoadMainNib';
    procedure didLoadMainNib; message 'didLoadMainNib';
    function sharedDictionary: NSMutableDictionary; message 'sharedDictionary';
    function installerState: InstallerState; message 'installerState';
    function activePane: InstallerPane; message 'activePane';
    function gotoPane (pane: InstallerPane): boolean; message 'gotoPane:';
  end;
{$endif}

