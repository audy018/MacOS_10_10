{ Parsed from AppKit.framework NSDraggingSession.h }


{$ifdef TYPES}
type
  NSDraggingSessionPtr = ^NSDraggingSession;
{$endif}

{$ifdef CLASSES}

type
  NSDraggingSession = objcclass external (NSObject)
  private
    _private: pointer;
    {$if  not defined(__LP64__)}
    _dragLocation: NSPoint;
    {$endif}
    _offset: NSPoint;
    _source: NSDraggingSourceProtocol;
    _alternateDragSource: id;
    _filePromiseDragSource: NSDraggingSourceProtocol;
    _pboard: NSPasteboard;
    _compositeImageCache: NSImage;
    {$if  not defined(__LP64__)}
    _leaderIndex: NSInteger;
    {$endif}
    _animatesOnCancelOrFail: boolean;
    {$if  not defined(__LP64__)}
    _reservedBOOL1: boolean;
    _reservedBOOL2: boolean;
    _reservedBOOL3: boolean;
    _reservedBOOL4: boolean;
    _reservedBOOL5: boolean;
    _reservedBOOL6: boolean;
    _reservedBOOL7: boolean;
    _reservedInteger1: NSInteger;
    _reservedInteger2: NSInteger;
    {$endif}
  public
    procedure setDraggingFormation(newValue: NSDraggingFormation); message 'setDraggingFormation:';
    function draggingFormation: NSDraggingFormation; message 'draggingFormation';
    procedure setAnimatesToStartingPositionsOnCancelOrFail(newValue: boolean); message 'setAnimatesToStartingPositionsOnCancelOrFail:';
    function animatesToStartingPositionsOnCancelOrFail: boolean; message 'animatesToStartingPositionsOnCancelOrFail';
    procedure setDraggingLeaderIndex(newValue: NSInteger); message 'setDraggingLeaderIndex:';
    function draggingLeaderIndex: NSInteger; message 'draggingLeaderIndex';
    function draggingPasteboard: NSPasteboard; message 'draggingPasteboard';
    function draggingSequenceNumber: NSInteger; message 'draggingSequenceNumber';
    function draggingLocation: NSPoint; message 'draggingLocation';
    procedure enumerateDraggingItemsWithOptions_forView_classes_searchOptions_usingBlock (enumOpts: NSDraggingItemEnumerationOptions; view: NSView; classArray: NSArray; searchOptions: NSDictionary; block: OpaqueCBlock); message 'enumerateDraggingItemsWithOptions:forView:classes:searchOptions:usingBlock:';
  end;
{$endif}

