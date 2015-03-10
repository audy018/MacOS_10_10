{ Parsed from AppKit.framework (MacOSX10.10) NSTextInputClient.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSTextInputClientProtocolPtr = ^NSTextInputClientProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextInputClientProtocol = objcprotocol external name 'NSTextInputClient'
  required
    procedure insertText_replacementRange (aString: id; replacementRange: NSRange); message 'insertText:replacementRange:';
    procedure doCommandBySelector (aSelector: SEL); message 'doCommandBySelector:';
    procedure setMarkedText_selectedRange_replacementRange (aString: id; selectedRange: NSRange; replacementRange: NSRange); message 'setMarkedText:selectedRange:replacementRange:';
    procedure unmarkText; message 'unmarkText';
    function selectedRange: NSRange; message 'selectedRange';
    function markedRange: NSRange; message 'markedRange';
    function hasMarkedText: boolean; message 'hasMarkedText';
    function attributedSubstringForProposedRange_actualRange (aRange: NSRange; actualRange: NSRangePointer): NSAttributedString; message 'attributedSubstringForProposedRange:actualRange:';
    function validAttributesForMarkedText: NSArray; message 'validAttributesForMarkedText';
    function firstRectForCharacterRange_actualRange (aRange: NSRange; actualRange: NSRangePointer): NSRect; message 'firstRectForCharacterRange:actualRange:';
    function characterIndexForPoint (aPoint: NSPoint): NSUInteger; message 'characterIndexForPoint:';
  optional
    function attributedString: NSAttributedString; message 'attributedString';
    function fractionOfDistanceThroughGlyphForPoint (aPoint: NSPoint): CGFloat; message 'fractionOfDistanceThroughGlyphForPoint:';
    function baselineDeltaForCharacterAtIndex (anIndex: NSUInteger): CGFloat; message 'baselineDeltaForCharacterAtIndex:';
    function windowLevel: NSInteger; message 'windowLevel';
    function drawsVerticallyForCharacterAtIndex (charIndex: NSUInteger): boolean; message 'drawsVerticallyForCharacterAtIndex:'; { available in 10_6 }
  end;
{$endif}

