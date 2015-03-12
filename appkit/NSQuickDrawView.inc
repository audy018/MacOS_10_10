{ Parsed from AppKit.framework NSQuickDrawView.h }


{$ifdef TYPES}
type
  NSQuickDrawViewPtr = ^NSQuickDrawView;
{$endif}

{$if  not defined(__LP64__)}
{$ifdef CLASSES}

type
  NSQuickDrawView = objcclass external (NSView)
  private
    _qdPort: pointer;
    _savePort: pointer;
    _synchToView: boolean;
  public
    function qdPort: pointer; message 'qdPort'; deprecated 'in 10_0, 10_4';
  end;
{$endif}

{$endif}
