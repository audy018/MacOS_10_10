{ Parsed from AppKit.framework (MacOSX10.10) NSBrowserCell.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSBrowserCellPtr = ^NSBrowserCell;
{$endif}

{$ifdef CLASSES}

type
  NSBrowserCell = objcclass external (NSCell)
  public
    class function branchImage: NSImage; message 'branchImage';
    class function highlightedBranchImage: NSImage; message 'highlightedBranchImage';
    function highlightColorInView (controlView_: NSView): NSColor; message 'highlightColorInView:';
    procedure setLeaf(newValue: boolean); message 'setLeaf:';
    function isLeaf: boolean; message 'isLeaf';
    procedure setLoaded(newValue: boolean); message 'setLoaded:';
    function isLoaded: boolean; message 'isLoaded';
    procedure reset; message 'reset';
    procedure set_; message 'set';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setAlternateImage(newValue: NSImage); message 'setAlternateImage:';
    function alternateImage: NSImage; message 'alternateImage';
  end;
{$endif}

