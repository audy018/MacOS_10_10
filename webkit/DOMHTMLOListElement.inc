{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLOListElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLOListElementPtr = ^DOMHTMLOListElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLOListElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: boolean); message 'setCompact:';
    function compact: boolean; message 'compact';
    procedure setStart(newValue: cint); message 'setStart:';
    function start: cint; message 'start';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
  end;
{$endif}
