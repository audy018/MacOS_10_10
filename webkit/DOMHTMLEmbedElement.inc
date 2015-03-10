{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLEmbedElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLEmbedElementPtr = ^DOMHTMLEmbedElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLEmbedElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setHeight(newValue: cint); message 'setHeight:';
    function height: cint; message 'height';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setWidth(newValue: cint); message 'setWidth:';
    function width: cint; message 'width';
  end;
{$endif}

