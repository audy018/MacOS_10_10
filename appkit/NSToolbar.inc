{ Parsed from AppKit.framework (MacOSX10.10) NSToolbar.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSToolbarPtr = ^NSToolbar;
  NSToolbarDelegateProtocolPtr = ^NSToolbarDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSToolbarDisplayMode = NSUInteger;
  NSToolbarDisplayModePtr = ^NSToolbarDisplayMode;

const
  NSToolbarDisplayModeDefault = 0;
  NSToolbarDisplayModeIconAndLabel = 1;
  NSToolbarDisplayModeIconOnly = 2;
  NSToolbarDisplayModeLabelOnly = 3;

type
  NSToolbarSizeMode = NSUInteger;
  NSToolbarSizeModePtr = ^NSToolbarSizeMode;

const
  NSToolbarSizeModeDefault = 0;
  NSToolbarSizeModeRegular = 1;
  NSToolbarSizeModeSmall = 2;
{$endif}

{$ifdef CLASSES}

type
  NSToolbar = objcclass external (NSObject)
  private
    _toolbarIdentifier: NSString;
    _currentItems: NSMutableArray;
    _currentItemIdentifiers: NSMutableArray;
    _fullScreenAccessoryView: NSView;
    _res2: id;
    _selectedItemIdentifier: NSString;
    _metrics: pointer;
    _delegate: id;
    _logicalWindow: NSWindow;
    _configPalette: id;
    _toolbarView: id;
    _syncPostEnabledCount: NSInteger;
    __tbFlags: bitpacked record
      case byte of
        0: (_anonBitField___tbFlags0: cuint);
        1: (
          allowsUserCustomization: 0..1;
          autosavesUsingIdentifier: 0..1;
          initialConfigurationDone: 0..1;
          doesNotAttachToMenuBar: 0..1;
          delegateDefaultItemIdentifiers: 0..1;
          delegateAllowedItemIdentifiers: 0..1;
          delegateItemWithItemIdentifier: 0..1;
          delegateNotificationsEnabled: 0..1;
          prefersToBeShown: 0..1;
          loadItemsImmediately: 0..1;
          currentItemsContainsPlaceholder: 0..1;
          customizationPanelIsRunning: 0..1;
          usesCustomSheetWidth: 0..1;
          clickAndDragPerformsCustomization: 0..1;
          showsNoContextMenu: 0..1;
          currentlyLoadingPlaceholders: 0..1;
          delegateItemWithItemIdentifier2: 0..1;
          inGlobalWindow: 0..1;
          hasOwnedFullscreenViewController: 0..1;
          usesServicesItems: 0..1;
          usingFSMetrics: 0..1;
          keyboardLoopNeedsUpdating: 0..1;
          showHideDuringConfigurationChangeDisabled: 0..1;
          displayMode: 0..((1 shl 2)-1);
          sizeMode: 0..((1 shl 2)-1);
          doNotShowBaselineSeparator: 0..1;
          hideWithoutResizingWindowHint: 0..1;
          autovalidatesItemsDisabled: 0..1;
          inAutovalidation: 0..1;
          loadedMetrics: 0..1;
        );
      end;
    _customizationSheetWidth: NSInteger;
    _tbReserved: id;
  public
    function initWithIdentifier (identifier: NSString): instancetype; message 'initWithIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    procedure insertItemWithItemIdentifier_atIndex (itemIdentifier: NSString; index: NSInteger); message 'insertItemWithItemIdentifier:atIndex:';
    procedure removeItemAtIndex (index: NSInteger); message 'removeItemAtIndex:';
    procedure setDelegate(newValue: NSToolbarDelegateProtocol); message 'setDelegate:';
    function delegate: NSToolbarDelegateProtocol; message 'delegate';
    procedure setVisible(newValue: boolean); message 'setVisible:';
    function isVisible: boolean; message 'isVisible';
    procedure runCustomizationPalette (sender: id); message 'runCustomizationPalette:';
    function customizationPaletteIsRunning: boolean; message 'customizationPaletteIsRunning';
    procedure setDisplayMode(newValue: NSToolbarDisplayMode); message 'setDisplayMode:';
    function displayMode: NSToolbarDisplayMode; message 'displayMode';
    procedure setSelectedItemIdentifier(newValue: NSString); message 'setSelectedItemIdentifier:';
    function selectedItemIdentifier: NSString; message 'selectedItemIdentifier';
    procedure setSizeMode(newValue: NSToolbarSizeMode); message 'setSizeMode:';
    function sizeMode: NSToolbarSizeMode; message 'sizeMode';
    procedure setShowsBaselineSeparator(newValue: boolean); message 'setShowsBaselineSeparator:';
    function showsBaselineSeparator: boolean; message 'showsBaselineSeparator';
    procedure setAllowsUserCustomization(newValue: boolean); message 'setAllowsUserCustomization:';
    function allowsUserCustomization: boolean; message 'allowsUserCustomization';
    function identifier: NSString; message 'identifier';
    function items: NSArray; message 'items';
    function visibleItems: NSArray; message 'visibleItems';
    procedure setAutosavesConfiguration(newValue: boolean); message 'setAutosavesConfiguration:';
    function autosavesConfiguration: boolean; message 'autosavesConfiguration';
    procedure setConfigurationFromDictionary (configDict: NSDictionary); message 'setConfigurationFromDictionary:';
    function configurationDictionary: NSDictionary; message 'configurationDictionary';
    procedure validateVisibleItems; message 'validateVisibleItems';
    procedure setAllowsExtensionItems(newValue: boolean); message 'setAllowsExtensionItems:';
    function allowsExtensionItems: boolean; message 'allowsExtensionItems';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSToolbarDelegateProtocol = objcprotocol external name 'NSToolbarDelegate' (NSObjectProtocol)
  optional
    function toolbar_itemForItemIdentifier_willBeInsertedIntoToolbar (toolbar: NSToolbar; itemIdentifier: NSString; flag: boolean): NSToolbarItem; message 'toolbar:itemForItemIdentifier:willBeInsertedIntoToolbar:';
    function toolbarDefaultItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarDefaultItemIdentifiers:';
    function toolbarAllowedItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarAllowedItemIdentifiers:';
  optional
    function toolbarSelectableItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarSelectableItemIdentifiers:';
    procedure toolbarWillAddItem (notification: NSNotification); message 'toolbarWillAddItem:';
    procedure toolbarDidRemoveItem (notification: NSNotification); message 'toolbarDidRemoveItem:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSToolbarWillAddItemNotification: NSString; cvar; external;
  NSToolbarDidRemoveItemNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSToolbar_NSDeprecated = objccategory external name 'NSDeprecated' (NSToolbar)
    procedure setFullScreenAccessoryView(newValue: NSView); message 'setFullScreenAccessoryView:';
    function fullScreenAccessoryView: NSView; message 'fullScreenAccessoryView';
    procedure setFullScreenAccessoryViewMinHeight(newValue: CGFloat); message 'setFullScreenAccessoryViewMinHeight:';
    function fullScreenAccessoryViewMinHeight: CGFloat; message 'fullScreenAccessoryViewMinHeight';
    procedure setFullScreenAccessoryViewMaxHeight(newValue: CGFloat); message 'setFullScreenAccessoryViewMaxHeight:';
    function fullScreenAccessoryViewMaxHeight: CGFloat; message 'fullScreenAccessoryViewMaxHeight';
  end;
{$endif}

