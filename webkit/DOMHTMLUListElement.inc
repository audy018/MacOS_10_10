{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLUListElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLUListElementPtr = ^DOMHTMLUListElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLUListElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: boolean); message 'setCompact:';
    function compact: boolean; message 'compact';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
  end;
{$endif}

