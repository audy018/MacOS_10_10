{ Parsed from AppKit.framework (MacOSX10.10) NSTableHeaderCell.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSTableHeaderCellPtr = ^NSTableHeaderCell;
{$endif}

{$ifdef CLASSES}

type
  NSTableHeaderCell = objcclass external (NSTextFieldCell)
  private
  public
    procedure drawSortIndicatorWithFrame_inView_ascending_priority (cellFrame: NSRect; controlView_: NSView; ascending: boolean; priority: NSInteger); message 'drawSortIndicatorWithFrame:inView:ascending:priority:';
    function sortIndicatorRectForBounds (theRect: NSRect): NSRect; message 'sortIndicatorRectForBounds:';
  end;
{$endif}

