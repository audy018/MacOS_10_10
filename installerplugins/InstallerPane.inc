{ Parsed from InstallerPlugins.framework (MacOSX10.10) InstallerPane.h }
{ Created on Sun Mar 8 1:48:47 2015 }


{$ifdef TYPES}
type
  InstallerPanePtr = ^InstallerPane;
{$endif}

{$ifdef TYPES}
type
  InstallerSectionDirection = NSInteger;
  InstallerSectionDirectionPtr = ^InstallerSectionDirection;

const
  InstallerDirectionForward = 0;
  InstallerDirectionBackward = 1;
  InstallerDirectionUndefined = 2;

type
  InstallerPane_Private = OpaqueType;
  InstallerPane_PrivatePtr = ^InstallerPane_Private;
{$endif}

{$ifdef CLASSES}

type
  InstallerPane = objcclass external (NSObject)
  private
    _contentView: NSView;
    _initialKeyView: NSView;
    _firstKeyView: NSView;
    _lastKeyView: NSView;
    _nextPane: InstallerPane;
    parentSection: id;
    _private: InstallerPane_PrivatePtr;
  public
    procedure setContentView(newValue: NSView); message 'setContentView:';
    function contentView: NSView; message 'contentView';
    procedure setInitialKeyView(newValue: NSView); message 'setInitialKeyView:';
    function initialKeyView: NSView; message 'initialKeyView';
    procedure setFirstKeyView(newValue: NSView); message 'setFirstKeyView:';
    function firstKeyView: NSView; message 'firstKeyView';
    procedure setLastKeyView(newValue: NSView); message 'setLastKeyView:';
    function lastKeyView: NSView; message 'lastKeyView';
    procedure setNextPane(newValue: InstallerPane); message 'setNextPane:';
    function nextPane: InstallerPane; message 'nextPane';
    function initWithSection (parent: id): instancetype; message 'initWithSection:';
    function title: NSString; message 'title';
    function section: InstallerSection; message 'section';
    function contentView_: NSView; message 'contentView';
    function initialKeyView_: NSView; message 'initialKeyView';
    function firstKeyView_: NSView; message 'firstKeyView';
    function lastKeyView_: NSView; message 'lastKeyView';
    function nextPane_: InstallerPane; message 'nextPane';
    procedure willEnterPane (dir: InstallerSectionDirection); message 'willEnterPane:';
    procedure didEnterPane (dir: InstallerSectionDirection); message 'didEnterPane:';
    function shouldExitPane (dir: InstallerSectionDirection): boolean; message 'shouldExitPane:';
    procedure willExitPane (dir: InstallerSectionDirection); message 'willExitPane:';
    procedure didExitPane (dir: InstallerSectionDirection); message 'didExitPane:';
    procedure setNextEnabled(newValue: boolean); message 'setNextEnabled:';
    function nextEnabled: boolean; message 'nextEnabled';
    procedure setPreviousEnabled(newValue: boolean); message 'setPreviousEnabled:';
    function previousEnabled: boolean; message 'previousEnabled';
    function gotoNextPane: boolean; message 'gotoNextPane';
    function gotoPreviousPane: boolean; message 'gotoPreviousPane';
  end;
{$endif}
