{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLModElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLModElementPtr = ^DOMHTMLModElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLModElement = objcclass external (DOMHTMLElement)
  public
    procedure setCite(newValue: NSString); message 'setCite:';
    function cite: NSString; message 'cite';
    procedure setDateTime(newValue: NSString); message 'setDateTime:';
    function dateTime: NSString; message 'dateTime';
  end;
{$endif}

