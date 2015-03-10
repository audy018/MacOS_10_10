{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLQuoteElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLQuoteElementPtr = ^DOMHTMLQuoteElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLQuoteElement = objcclass external (DOMHTMLElement)
  public
    procedure setCite(newValue: NSString); message 'setCite:';
    function cite: NSString; message 'cite';
  end;
{$endif}

