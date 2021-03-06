{ Parsed from AppKit.framework NSTextFinder.h }


{$ifdef TYPES}
type
  NSTextFinderPtr = ^NSTextFinder;
  NSTextFinderClientProtocolPtr = ^NSTextFinderClientProtocol;
  NSTextFinderBarContainerProtocolPtr = ^NSTextFinderBarContainerProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTextFinderAction = NSInteger;
  NSTextFinderActionPtr = ^NSTextFinderAction;

const
  NSTextFinderActionShowFindInterface = 1;
  NSTextFinderActionNextMatch = 2;
  NSTextFinderActionPreviousMatch = 3;
  NSTextFinderActionReplaceAll = 4;
  NSTextFinderActionReplace = 5;
  NSTextFinderActionReplaceAndFind = 6;
  NSTextFinderActionSetSearchString = 7;
  NSTextFinderActionReplaceAllInSelection = 8;
  NSTextFinderActionSelectAll = 9;
  NSTextFinderActionSelectAllInSelection = 10;
  NSTextFinderActionHideFindInterface = 11;
  NSTextFinderActionShowReplaceInterface = 12;
  NSTextFinderActionHideReplaceInterface = 13;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextFinderCaseInsensitiveKey: NSString { available in 10_7 }; cvar; external;
  NSTextFinderMatchingTypeKey: NSString { available in 10_7 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTextFinderMatchingType = NSInteger;
  NSTextFinderMatchingTypePtr = ^NSTextFinderMatchingType;

const
  NSTextFinderMatchingTypeContains = 0;
  NSTextFinderMatchingTypeStartsWith = 1;
  NSTextFinderMatchingTypeFullWord = 2;
  NSTextFinderMatchingTypeEndsWith = 3;
{$endif}

{$ifdef CLASSES}

type
  NSTextFinder = objcclass external (NSObject, NSCodingProtocol)
  private
    _client: id;
    _content: id;
    _container: NSTextFinderBarContainerProtocol;
    _style: NSUInteger;
    _incrementalEnabled: boolean;
    _shouldDim: boolean;
    _private: id;
  public
    function init: instancetype; message 'init';
    procedure setClient(newValue: NSTextFinderClientProtocol); message 'setClient:';
    function client: NSTextFinderClientProtocol; message 'client';
    procedure performAction (op: NSTextFinderAction); message 'performAction:';
    function validateAction (op: NSTextFinderAction): boolean; message 'validateAction:';
    procedure setFindBarContainer(newValue: NSTextFinderBarContainerProtocol); message 'setFindBarContainer:';
    function findBarContainer: NSTextFinderBarContainerProtocol; message 'findBarContainer';
    procedure cancelFindIndicator; message 'cancelFindIndicator';
    procedure setFindIndicatorNeedsUpdate(newValue: boolean); message 'setFindIndicatorNeedsUpdate:';
    function findIndicatorNeedsUpdate: boolean; message 'findIndicatorNeedsUpdate';
    procedure setIncrementalSearchingEnabled(newValue: boolean); message 'setIncrementalSearchingEnabled:';
    function isIncrementalSearchingEnabled: boolean; message 'isIncrementalSearchingEnabled';
    procedure setIncrementalSearchingShouldDimContentView(newValue: boolean); message 'setIncrementalSearchingShouldDimContentView:';
    function incrementalSearchingShouldDimContentView: boolean; message 'incrementalSearchingShouldDimContentView';
    function incrementalMatchRanges: NSArray; message 'incrementalMatchRanges';
    class procedure drawIncrementalMatchHighlightInRect (rect: NSRect); message 'drawIncrementalMatchHighlightInRect:';
    procedure noteClientStringWillChange; message 'noteClientStringWillChange';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextFinderClientProtocol = objcprotocol external name 'NSTextFinderClient' (NSObjectProtocol)
  optional
    function isSelectable: boolean; message 'isSelectable';
    function allowsMultipleSelection: boolean; message 'allowsMultipleSelection';
    function isEditable: boolean; message 'isEditable';
    function string_: NSString; message 'string';
    function stringAtIndex_effectiveRange_endsWithSearchBoundary (characterIndex: NSUInteger; outRange: NSRangePointer; outFlag: pboolean): NSString; message 'stringAtIndex:effectiveRange:endsWithSearchBoundary:';
    function stringLength: NSUInteger; message 'stringLength';
    function firstSelectedRange: NSRange; message 'firstSelectedRange';
    procedure setSelectedRanges(newValue: NSArray); message 'setSelectedRanges:';
    function selectedRanges: NSArray; message 'selectedRanges';
    procedure scrollRangeToVisible (range: NSRange); message 'scrollRangeToVisible:';
    function shouldReplaceCharactersInRanges_withStrings (ranges: NSArray; strings: NSArray): boolean; message 'shouldReplaceCharactersInRanges:withStrings:';
    procedure replaceCharactersInRange_withString (range: NSRange; string_: NSString); message 'replaceCharactersInRange:withString:';
    procedure didReplaceCharacters; message 'didReplaceCharacters';
    function contentViewAtIndex_effectiveCharacterRange (index: NSUInteger; outRange: NSRangePointer): NSView; message 'contentViewAtIndex:effectiveCharacterRange:';
    function rectsForCharacterRange (range: NSRange): NSArray; message 'rectsForCharacterRange:';
    function visibleCharacterRanges: NSArray; message 'visibleCharacterRanges';
    procedure drawCharactersInRange_forContentView (range: NSRange; view: NSView); message 'drawCharactersInRange:forContentView:';
  end;

type
  NSTextFinderBarContainerProtocol = objcprotocol external name 'NSTextFinderBarContainer' (NSObjectProtocol)
  required
    procedure setFindBarView(newValue: NSView); message 'setFindBarView:';
    function findBarView: NSView; message 'findBarView';
    procedure setFindBarVisible(newValue: boolean); message 'setFindBarVisible:';
    function isFindBarVisible: boolean; message 'isFindBarVisible';
    procedure findBarViewDidChangeHeight; message 'findBarViewDidChangeHeight';
  optional
    function contentView: NSView; message 'contentView';
  end;
{$endif}

