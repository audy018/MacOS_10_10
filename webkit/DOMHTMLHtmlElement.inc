{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLHtmlElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLHtmlElementPtr = ^DOMHTMLHtmlElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLHtmlElement = objcclass external (DOMHTMLElement)
  public
    procedure setVersion(newValue: NSString); message 'setVersion:';
    function version: NSString; message 'version';
  end;
{$endif}

