{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLTableCaptionElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLTableCaptionElementPtr = ^DOMHTMLTableCaptionElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLTableCaptionElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
  end;
{$endif}

