{ Parsed from AppKit.framework NSTextField.h }


{$ifdef TYPES}
type
  NSTextFieldPtr = ^NSTextField;
  NSTextFieldDelegateProtocolPtr = ^NSTextFieldDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSTextField = objcclass external (NSControl, NSUserInterfaceValidationsProtocol, NSAccessibilityNavigableStaticTextProtocol)
  private
    _delegate: id;
    _errorAction: SEL;
    {$if defined(__LP64__)}
    _maxLayoutWidth: CGFloat;
    {$endif}
  public
    procedure setPlaceholderString(newValue: NSString); message 'setPlaceholderString:';
    function placeholderString: NSString; message 'placeholderString';
    procedure setPlaceholderAttributedString(newValue: NSAttributedString); message 'setPlaceholderAttributedString:';
    function placeholderAttributedString: NSAttributedString; message 'placeholderAttributedString';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDrawsBackground(newValue: boolean); message 'setDrawsBackground:';
    function drawsBackground: boolean; message 'drawsBackground';
    procedure setTextColor(newValue: NSColor); message 'setTextColor:';
    function textColor: NSColor; message 'textColor';
    procedure setBordered(newValue: boolean); message 'setBordered:';
    function isBordered: boolean; message 'isBordered';
    procedure setBezeled(newValue: boolean); message 'setBezeled:';
    function isBezeled: boolean; message 'isBezeled';
    procedure setEditable(newValue: boolean); message 'setEditable:';
    function isEditable: boolean; message 'isEditable';
    procedure setSelectable(newValue: boolean); message 'setSelectable:';
    function isSelectable: boolean; message 'isSelectable';
    procedure selectText (sender: id); message 'selectText:';
    procedure setDelegate(newValue: NSTextFieldDelegateProtocol); message 'setDelegate:';
    function delegate: NSTextFieldDelegateProtocol; message 'delegate';
    function textShouldBeginEditing (textObject: NSText): boolean; message 'textShouldBeginEditing:';
    function textShouldEndEditing (textObject: NSText): boolean; message 'textShouldEndEditing:';
    procedure textDidBeginEditing (notification: NSNotification); message 'textDidBeginEditing:';
    procedure textDidEndEditing (notification: NSNotification); message 'textDidEndEditing:';
    procedure textDidChange (notification: NSNotification); message 'textDidChange:';
    function acceptsFirstResponder: boolean; message 'acceptsFirstResponder';
    procedure setBezelStyle(newValue: NSTextFieldBezelStyle); message 'setBezelStyle:';
    function bezelStyle: NSTextFieldBezelStyle; message 'bezelStyle';
    procedure setPreferredMaxLayoutWidth(newValue: CGFloat); message 'setPreferredMaxLayoutWidth:';
    function preferredMaxLayoutWidth: CGFloat; message 'preferredMaxLayoutWidth';

    { Adopted protocols }
    function validateUserInterfaceItem (anItem: NSValidatedUserInterfaceItemProtocol): boolean; message 'validateUserInterfaceItem:';
    function accessibilityStringForRange (range: NSRange): NSString; message 'accessibilityStringForRange:';
    function accessibilityLineForIndex (index: NSInteger): NSInteger; message 'accessibilityLineForIndex:';
    function accessibilityRangeForLine (lineNumber: NSInteger): NSRange; message 'accessibilityRangeForLine:';
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:';
    function accessibilityValue: NSString; message 'accessibilityValue';

  end;


type
  NSTextFieldAttributedStringMethods = objccategory external (NSTextField)
    procedure setAllowsEditingTextAttributes(newValue: boolean); message 'setAllowsEditingTextAttributes:';
    function allowsEditingTextAttributes: boolean; message 'allowsEditingTextAttributes';
    procedure setImportsGraphics(newValue: boolean); message 'setImportsGraphics:';
    function importsGraphics: boolean; message 'importsGraphics';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextFieldDelegateProtocol = objcprotocol external name 'NSTextFieldDelegate' (NSControlTextEditingDelegateProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  NSTextField_NSDeprecated = objccategory external name 'NSDeprecated' (NSTextField)
    procedure setTitleWithMnemonic (stringWithAmpersand: NSString); message 'setTitleWithMnemonic:'; deprecated 'in 10_0, 10_8';
  end;
{$endif}

