{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLBaseElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLBaseElementPtr = ^DOMHTMLBaseElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLBaseElement = objcclass external (DOMHTMLElement)
  public
    procedure setHref(newValue: NSString); message 'setHref:';
    function href: NSString; message 'href';
    procedure setTarget(newValue: NSString); message 'setTarget:';
    function target: NSString; message 'target';
  end;
{$endif}

