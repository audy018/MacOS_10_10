{ Parsed from WebKit.framework DOMHTMLDListElement.h }


{$ifdef TYPES}
type
  DOMHTMLDListElementPtr = ^DOMHTMLDListElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLDListElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: boolean); message 'setCompact:';
    function compact: boolean; message 'compact';
  end;
{$endif}

