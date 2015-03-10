{ Parsed from AppKit.framework (MacOSX10.10) NSTableCellView.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSTableCellViewPtr = ^NSTableCellView;
{$endif}

{$ifdef CLASSES}

type
  NSTableCellView = objcclass external (NSView)
  private
    _backgroundStyle: NSBackgroundStyle;
    _objectValue: id;
    _aux: id;
    _rowSizeStyle: NSTableViewRowSizeStyle;
    _textField: NSTextField;
    _imageView: NSImageView;
  public
    procedure setObjectValue(newValue: id); message 'setObjectValue:';
    function objectValue: id; message 'objectValue';
    procedure setTextField(newValue: NSTextField); message 'setTextField:';
    function textField: NSTextField; message 'textField';
    procedure setImageView(newValue: NSImageView); message 'setImageView:';
    function imageView: NSImageView; message 'imageView';
    procedure setBackgroundStyle(newValue: NSBackgroundStyle); message 'setBackgroundStyle:';
    function backgroundStyle: NSBackgroundStyle; message 'backgroundStyle';
    procedure setRowSizeStyle(newValue: NSTableViewRowSizeStyle); message 'setRowSizeStyle:';
    function rowSizeStyle: NSTableViewRowSizeStyle; message 'rowSizeStyle';
    function draggingImageComponents: NSArray; message 'draggingImageComponents';
  end;
{$endif}

