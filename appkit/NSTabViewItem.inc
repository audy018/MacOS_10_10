{ Parsed from AppKit.framework NSTabViewItem.h }


{$ifdef TYPES}
type
  NSTabViewItemPtr = ^NSTabViewItem;
{$endif}

{$ifdef TYPES}
type
  NSTabState = NSUInteger;
  NSTabStatePtr = ^NSTabState;

const
  NSSelectedTab = 0;
  NSBackgroundTab = 1;
  NSPressedTab = 2;
{$endif}

{$ifdef CLASSES}

type
  NSTabViewItem = objcclass external (NSObject, NSCodingProtocol)
  private
    _identifier: id;
    __label: NSString;
    _view: NSView;
    __initialFirstResponder: NSView;
    __color: NSColor;
    _tabView: NSTabView;
    _tabState: NSTabState;
    _lastKeyView: NSView;
    __tviFlags: bitpacked record
      case byte of
        0: (_anonBitField___tviFlags0: cuint);
        1: (
          hasCustomColor: 0..1;
          labelSizeIsValid: 0..1;
          autoGeneratedIFR: 0..1;
          isTabDisabled: 0..1;
          isActive: 0..1;
          RESERVED: 0..((1 shl 27)-1);
        );
      end;
    _labelSize: NSSize;
    _tabRect: NSRect;
    _tabToolTipTag: NSToolTipTag;
    _auxiliaryStorage: id;
  public
    class function tabViewItemWithViewController (viewController: NSViewController): instancetype; message 'tabViewItemWithViewController:'; { available in 10_10 }
    function initWithIdentifier (identifier: id): instancetype; message 'initWithIdentifier:';
    procedure setIdentifier(newValue: id); message 'setIdentifier:';
    function identifier: id; message 'identifier';
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setView(newValue: NSView); message 'setView:';
    function view: NSView; message 'view';
    procedure setViewController(newValue: NSViewController); message 'setViewController:';
    function viewController: NSViewController; message 'viewController';
    function tabState: NSTabState; message 'tabState';
    function tabView: NSTabView; message 'tabView';
    procedure setInitialFirstResponder(newValue: NSView); message 'setInitialFirstResponder:';
    function initialFirstResponder: NSView; message 'initialFirstResponder';
    procedure setToolTip(newValue: NSString); message 'setToolTip:';
    function toolTip: NSString; message 'toolTip';
    procedure drawLabel_inRect (shouldTruncateLabel: boolean; labelRect: NSRect); message 'drawLabel:inRect:';
    function sizeOfLabel (computeMin: boolean): NSSize; message 'sizeOfLabel:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

