{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLDListElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


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

