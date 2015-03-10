{ Parsed from AppKit.framework (MacOSX10.10) NSPathControlItem.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSPathControlItemPtr = ^NSPathControlItem;
{$endif}

{$ifdef CLASSES}

type
  NSPathControlItem = objcclass external (NSObject)
  private
    _secretCell: NSPathComponentCell;
  public
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    function URL: NSURL; message 'URL';
  end;
{$endif}

