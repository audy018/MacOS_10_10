{ Parsed from WebKit.framework DOMHTMLDirectoryElement.h }


{$ifdef TYPES}
type
  DOMHTMLDirectoryElementPtr = ^DOMHTMLDirectoryElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLDirectoryElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: boolean); message 'setCompact:';
    function compact: boolean; message 'compact';
  end;
{$endif}

