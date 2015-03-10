{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLBaseFontElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLBaseFontElementPtr = ^DOMHTMLBaseFontElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLBaseFontElement = objcclass external (DOMHTMLElement)
  public
    procedure setColor(newValue: NSString); message 'setColor:';
    function color: NSString; message 'color';
    procedure setFace(newValue: NSString); message 'setFace:';
    function face: NSString; message 'face';
    procedure setSize(newValue: NSString); message 'setSize:';
    function size: NSString; message 'size';
  end;
{$endif}

