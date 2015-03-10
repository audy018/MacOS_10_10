{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLHeadingElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLHeadingElementPtr = ^DOMHTMLHeadingElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLHeadingElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
  end;
{$endif}

