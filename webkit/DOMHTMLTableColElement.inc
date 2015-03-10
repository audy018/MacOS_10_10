{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLTableColElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLTableColElementPtr = ^DOMHTMLTableColElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLTableColElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setCh(newValue: NSString); message 'setCh:';
    function ch: NSString; message 'ch';
    procedure setChOff(newValue: NSString); message 'setChOff:';
    function chOff: NSString; message 'chOff';
    procedure setSpan(newValue: cint); message 'setSpan:';
    function span: cint; message 'span';
    procedure setVAlign(newValue: NSString); message 'setVAlign:';
    function vAlign: NSString; message 'vAlign';
    procedure setWidth(newValue: NSString); message 'setWidth:';
    function width: NSString; message 'width';
  end;
{$endif}

