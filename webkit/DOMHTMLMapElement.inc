{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLMapElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLMapElementPtr = ^DOMHTMLMapElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMapElement = objcclass external (DOMHTMLElement)
  public
    function areas: DOMHTMLCollection; message 'areas';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;
{$endif}

