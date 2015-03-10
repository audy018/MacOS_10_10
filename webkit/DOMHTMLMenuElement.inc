{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLMenuElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


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

