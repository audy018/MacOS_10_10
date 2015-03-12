{ Parsed from WebKit.framework DOMHTMLMenuElement.h }


{$ifdef TYPES}
type
  DOMHTMLMenuElementPtr = ^DOMHTMLMenuElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMenuElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: boolean); message 'setCompact:';
    function compact: boolean; message 'compact';
  end;
{$endif}

