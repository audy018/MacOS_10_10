{ Parsed from NotificationCenter.framework NCWidgetListViewController.h }


{$ifdef TYPES}
type
  NCWidgetListViewControllerPtr = ^NCWidgetListViewController;
  NCWidgetListViewDelegateProtocolPtr = ^NCWidgetListViewDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NCWidgetListViewController = objcclass external (NSViewController)
  public
    procedure setDelegate(newValue: NCWidgetListViewDelegateProtocol); message 'setDelegate:';
    function delegate: NCWidgetListViewDelegateProtocol; message 'delegate';
    procedure setContents(newValue: NSArray); message 'setContents:';
    function contents: NSArray; message 'contents';
    procedure setMinimumVisibleRowCount(newValue: NSUInteger); message 'setMinimumVisibleRowCount:';
    function minimumVisibleRowCount: NSUInteger; message 'minimumVisibleRowCount';
    procedure setHasDividerLines(newValue: boolean); message 'setHasDividerLines:';
    function hasDividerLines: boolean; message 'hasDividerLines';
    procedure setEditing(newValue: boolean); message 'setEditing:';
    function editing: boolean; message 'editing';
    procedure setShowsAddButtonWhenEditing(newValue: boolean); message 'setShowsAddButtonWhenEditing:';
    function showsAddButtonWhenEditing: boolean; message 'showsAddButtonWhenEditing';
    function viewControllerAtRow_makeIfNecessary (row: NSUInteger; makeIfNecesary: boolean): NSViewController; message 'viewControllerAtRow:makeIfNecessary:';
    function rowForViewController (viewController: NSViewController): NSUInteger; message 'rowForViewController:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NCWidgetListViewDelegateProtocol = objcprotocol external name 'NCWidgetListViewDelegate' (NSObjectProtocol)
    function widgetList_viewControllerForRow (list: NCWidgetListViewController; row: NSUInteger): NSViewController; message 'widgetList:viewControllerForRow:';
  optional
    procedure widgetListPerformAddAction (list: NCWidgetListViewController); message 'widgetListPerformAddAction:';
    function widgetList_shouldReorderRow (list: NCWidgetListViewController; row: NSUInteger): boolean; message 'widgetList:shouldReorderRow:';
    procedure widgetList_didReorderRow_toRow (list: NCWidgetListViewController; row: NSUInteger; newIndex: NSUInteger); message 'widgetList:didReorderRow:toRow:';
    function widgetList_shouldRemoveRow (list: NCWidgetListViewController; row: NSUInteger): boolean; message 'widgetList:shouldRemoveRow:';
    procedure widgetList_didRemoveRow (list: NCWidgetListViewController; row: NSUInteger); message 'widgetList:didRemoveRow:';
  end;
{$endif}

