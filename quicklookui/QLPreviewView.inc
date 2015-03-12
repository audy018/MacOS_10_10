{ Parsed from QuickLookUI.framework QLPreviewView.h }


{$ifdef TYPES}
type
  QLPreviewViewPtr = ^QLPreviewView;
{$endif}

{$ifdef TYPES}
type
  QLPreviewViewStyle = NSUInteger;
  QLPreviewViewStylePtr = ^QLPreviewViewStyle;

const
  QLPreviewViewStyleNormal = 0;
  QLPreviewViewStyleCompact = 1;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewView = objcclass external (NSView)
  private
    _reserved: QLPreviewViewReserved;
  public
    function initWithFrame_style (frame: NSRect; style: QLPreviewViewStyle): id; message 'initWithFrame:style:';
    function initWithFrame (frame: NSRect): id; message 'initWithFrame:';
    procedure setPreviewItem(newValue: QLPreviewItemProtocol); message 'setPreviewItem:';
    function previewItem: QLPreviewItemProtocol; message 'previewItem';
    procedure refreshPreviewItem; message 'refreshPreviewItem';
    procedure setDisplayState(newValue: id); message 'setDisplayState:';
    function displayState: id; message 'displayState';
    procedure close; message 'close';
    procedure setShouldCloseWithWindow(newValue: boolean); message 'setShouldCloseWithWindow:';
    function shouldCloseWithWindow: boolean; message 'shouldCloseWithWindow';
    procedure setAutostarts(newValue: boolean); message 'setAutostarts:';
    function autostarts: boolean; message 'autostarts';
  end;
{$endif}

