{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLMarqueeElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLMarqueeElementPtr = ^DOMHTMLMarqueeElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMarqueeElement = objcclass external (DOMHTMLElement)
  public
    procedure start; message 'start';
    procedure stop; message 'stop';
  end;
{$endif}

