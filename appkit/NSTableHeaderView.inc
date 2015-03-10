{ Parsed from AppKit.framework (MacOSX10.10) NSTableHeaderView.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSTableHeaderViewPtr = ^NSTableHeaderView;
{$endif}

{$ifdef CLASSES}

type
  NSTableHeaderView = objcclass external (NSView)
  private
    _tableView: NSTableView;
    _resizedColumn: NSInteger;
    _draggedColumn: NSInteger;
    _pressedColumn: NSInteger;
    _headerDragImage: NSImage;
    _draggedDistance: CGFloat;
    _anonStruct_NSTableHeaderView0: record
      case byte of
        0: (anonBitField_NSTableHeaderView0: cuint);
        1: (data: bitpacked record
          _isColumnResizing: 0..1;
          _showHandCursorFired: 0..1;
          _toolTipRectsDirty: 0..1;
          _alignTitleWithDataCell: 0..1;
          _nextColumnAfterDrawnOneIsSelected: 0..1;
          _wantsTranslucency: 0..1;
          _addedBlurToClipView: 0..1;
          _usedNewHeight: 0..1;
          _reserved: 0..((1 shl 24)-1);
        end;
      );
    end;
    _skipDrawingSeparator: boolean;
    _viewDataX: id;
  public
    procedure setTableView(newValue: NSTableView); message 'setTableView:';
    function tableView: NSTableView; message 'tableView';
    function draggedColumn: NSInteger; message 'draggedColumn';
    function draggedDistance: CGFloat; message 'draggedDistance';
    function resizedColumn: NSInteger; message 'resizedColumn';
    function headerRectOfColumn (column: NSInteger): NSRect; message 'headerRectOfColumn:';
    function columnAtPoint (point: NSPoint): NSInteger; message 'columnAtPoint:';
  end;
{$endif}

