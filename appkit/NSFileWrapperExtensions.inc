{ Parsed from AppKit.framework (MacOSX10.10) NSFileWrapperExtensions.h }
{ Created on Sun Mar 8 1:49:07 2015 }

{$ifdef CLASSES}

type
  NSExtensions = objccategory external (NSFileWrapper)
    procedure setIcon(newValue: NSImage); message 'setIcon:';
    function icon: NSImage; message 'icon';
  end;
{$endif}

