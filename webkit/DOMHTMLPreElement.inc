{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLPreElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLPreElementPtr = ^DOMHTMLPreElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLPreElement = objcclass external (DOMHTMLElement)
  public
    procedure setWidth(newValue: cint); message 'setWidth:';
    function width: cint; message 'width';
    procedure setWrap(newValue: boolean); message 'setWrap:';
    function wrap: boolean; message 'wrap';
  end;
{$endif}

