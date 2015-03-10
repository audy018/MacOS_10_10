{ Parsed from AppKit.framework (MacOSX10.10) NSControl.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSControlPtr = ^NSControl;
  NSControlTextEditingDelegateProtocolPtr = ^NSControlTextEditingDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSControl = objcclass external (NSView)
  private
    _aux: NSControlAuxiliary;
    _cell: id;
    __conFlags: bitpacked record
      case byte of
        0: (_anonBitField___conFlags0: cuint);
        1: (
          enabled: 0..1;
          ignoreMultiClick: 0..1;
          calcSize_: 0..1;
          drawingAncestor: 0..1;
          ibReserved: 0..1;
          updateCellFocus: 0..1;
          allowsLogicalLayoutDirection: 0..1;
          asmlwidth: 0..1;
          hsmlwidth: 0..1;
          dontValidate: 0..1;
          reserved: 0..((1 shl 22)-1);
        );
      end;
  public
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    procedure setIgnoresMultiClick(newValue: boolean); message 'setIgnoresMultiClick:';
    function ignoresMultiClick: boolean; message 'ignoresMultiClick';
    procedure setContinuous(newValue: boolean); message 'setContinuous:';
    function isContinuous: boolean; message 'isContinuous';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setRefusesFirstResponder(newValue: boolean); message 'setRefusesFirstResponder:';
    function refusesFirstResponder: boolean; message 'refusesFirstResponder';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setControlSize(newValue: NSControlSize); message 'setControlSize:';
    function controlSize: NSControlSize; message 'controlSize';
    procedure setFormatter(newValue: id); message 'setFormatter:';
    function formatter: id; message 'formatter';
    procedure setStringValue(newValue: NSString); message 'setStringValue:';
    function stringValue: NSString; message 'stringValue';
    procedure setAttributedStringValue(newValue: NSAttributedString); message 'setAttributedStringValue:';
    function attributedStringValue: NSAttributedString; message 'attributedStringValue';
    procedure setObjectValue(newValue: id); message 'setObjectValue:';
    function objectValue: id; message 'objectValue';
    procedure setIntValue(newValue: cint); message 'setIntValue:';
    function intValue: cint; message 'intValue';
    procedure setIntegerValue(newValue: NSInteger); message 'setIntegerValue:';
    function integerValue: NSInteger; message 'integerValue';
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setDoubleValue(newValue: double); message 'setDoubleValue:';
    function doubleValue: double; message 'doubleValue';
    function sizeThatFits (size: NSSize): NSSize; message 'sizeThatFits:'; { available in 10_10 }
    function initWithFrame (frameRect: NSRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure sizeToFit; message 'sizeToFit';
    function sendActionOn (mask: NSInteger): NSInteger; message 'sendActionOn:';
    function sendAction_to (theAction: SEL; theTarget: id): boolean; message 'sendAction:to:';
    procedure takeIntValueFrom (sender: id); message 'takeIntValueFrom:';
    procedure takeFloatValueFrom (sender: id); message 'takeFloatValueFrom:';
    procedure takeDoubleValueFrom (sender: id); message 'takeDoubleValueFrom:';
    procedure takeStringValueFrom (sender: id); message 'takeStringValueFrom:';
    procedure takeObjectValueFrom (sender: id); message 'takeObjectValueFrom:';
    procedure takeIntegerValueFrom (sender: id); message 'takeIntegerValueFrom:'; { available in 10_5 }
    procedure mouseDown (theEvent: NSEvent); message 'mouseDown:';
  end;


type
  NSControl_NSKeyboardUI = objccategory external name 'NSKeyboardUI' (NSControl)
    procedure performClick (sender: id); message 'performClick:';
    procedure setRefusesFirstResponder (flag: boolean); message 'setRefusesFirstResponder:';
    function refusesFirstResponder_: boolean; message 'refusesFirstResponder';
  end;

type
  NSControlTextMethods = objccategory external (NSControl)
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setUsesSingleLineMode(newValue: boolean); message 'setUsesSingleLineMode:';
    function usesSingleLineMode: boolean; message 'usesSingleLineMode';
    procedure setBaseWritingDirection(newValue: NSWritingDirection); message 'setBaseWritingDirection:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    procedure setAllowsExpansionToolTips(newValue: boolean); message 'setAllowsExpansionToolTips:';
    function allowsExpansionToolTips: boolean; message 'allowsExpansionToolTips';
    function expansionFrameWithFrame (contentFrame: NSRect): NSRect; message 'expansionFrameWithFrame:'; { available in 10_10 }
    procedure drawWithExpansionFrame_inView (contentFrame: NSRect; view: NSView); message 'drawWithExpansionFrame:inView:'; { available in 10_10 }
  end;

type
  NSControlEditableTextMethods = objccategory external (NSControl)
    function currentEditor: NSText; message 'currentEditor';
    function abortEditing: boolean; message 'abortEditing';
    procedure validateEditing; message 'validateEditing';
    procedure editWithFrame_editor_delegate_event (aRect: NSRect; textObj: NSText; anObject: id; theEvent: NSEvent); message 'editWithFrame:editor:delegate:event:'; { available in 10_10 }
    procedure selectWithFrame_editor_delegate_start_length (aRect: NSRect; textObj: NSText; anObject: id; selStart: NSInteger; selLength: NSInteger); message 'selectWithFrame:editor:delegate:start:length:'; { available in 10_10 }
    procedure endEditing (textObj: NSText); message 'endEditing:'; { available in 10_10 }
  end;

type
  NSControlSubclassNotifications = objccategory external (NSObject)
    procedure controlTextDidBeginEditing (obj: NSNotification); message 'controlTextDidBeginEditing:';
    procedure controlTextDidEndEditing (obj: NSNotification); message 'controlTextDidEndEditing:';
    procedure controlTextDidChange (obj: NSNotification); message 'controlTextDidChange:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSControlTextEditingDelegateProtocol = objcprotocol external name 'NSControlTextEditingDelegate' (NSObjectProtocol)
  optional
    function control_textShouldBeginEditing (control: NSControl; fieldEditor: NSText): boolean; message 'control:textShouldBeginEditing:';
    function control_textShouldEndEditing (control: NSControl; fieldEditor: NSText): boolean; message 'control:textShouldEndEditing:';
    function control_didFailToFormatString_errorDescription (control: NSControl; string_: NSString; error: NSString): boolean; message 'control:didFailToFormatString:errorDescription:';
    procedure control_didFailToValidatePartialString_errorDescription (control: NSControl; string_: NSString; error: NSString); message 'control:didFailToValidatePartialString:errorDescription:';
    function control_isValidObject (control: NSControl; obj: id): boolean; message 'control:isValidObject:';
    function control_textView_doCommandBySelector (control: NSControl; textView: NSTextView; commandSelector: SEL): boolean; message 'control:textView:doCommandBySelector:';
    function control_textView_completions_forPartialWordRange_indexOfSelectedItem (control: NSControl; textView: NSTextView; words: NSArray; charRange: NSRange; index: NSIntegerPtr): NSArray; message 'control:textView:completions:forPartialWordRange:indexOfSelectedItem:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSControlTextDidBeginEditingNotification: NSString; cvar; external;
  NSControlTextDidEndEditingNotification: NSString; cvar; external;
  NSControlTextDidChangeNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSControl_NSDeprecated = objccategory external name 'NSDeprecated' (NSControl)
    procedure setFloatingPointFormat_left_right (autoRange: boolean; leftDigits: NSUInteger; rightDigits: NSUInteger); message 'setFloatingPointFormat:left:right:'; deprecated 'in 10_0, 10_0';
    class procedure setCellClass (factoryId: pobjc_class); message 'setCellClass:';
    class function cellClass: pobjc_class; message 'cellClass';
    function cell: id; message 'cell';
    procedure setCell (aCell: NSCell); message 'setCell:';
    function selectedCell: id; message 'selectedCell';
    function selectedTag: NSInteger; message 'selectedTag';
    procedure setNeedsDisplay_; message 'setNeedsDisplay';
    procedure calcSize; message 'calcSize';
    procedure updateCell (aCell: NSCell); message 'updateCell:';
    procedure updateCellInside (aCell: NSCell); message 'updateCellInside:';
    procedure drawCellInside (aCell: NSCell); message 'drawCellInside:';
    procedure drawCell (aCell: NSCell); message 'drawCell:';
    procedure selectCell (aCell: NSCell); message 'selectCell:';
  end;
{$endif}

