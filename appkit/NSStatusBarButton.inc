{ Parsed from AppKit.framework NSStatusBarButton.h }


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

