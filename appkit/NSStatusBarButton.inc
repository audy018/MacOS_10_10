{ Parsed from AppKit.framework (MacOSX10.10) NSStatusBarButton.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSStatusBarButtonPtr = ^NSStatusBarButton;
{$endif}

{$ifdef CLASSES}

type
  NSStatusBarButton = objcclass external (NSButton)
  private
    _statusBarButtonPrivate: id;
  public
    procedure setAppearsDisabled(newValue: boolean); message 'setAppearsDisabled:';
    function appearsDisabled: boolean; message 'appearsDisabled';
  end;
{$endif}

