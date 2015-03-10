{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLBRElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLBRElementPtr = ^DOMHTMLBRElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLBRElement = objcclass external (DOMHTMLElement)
  public
    procedure setClear(newValue: NSString); message 'setClear:';
    function clear: NSString; message 'clear';
  end;
{$endif}

