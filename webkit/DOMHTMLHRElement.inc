{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLHRElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLHRElementPtr = ^DOMHTMLHRElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLHRElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setNoShade(newValue: boolean); message 'setNoShade:';
    function noShade: boolean; message 'noShade';
    procedure setSize(newValue: NSString); message 'setSize:';
    function size: NSString; message 'size';
    procedure setWidth(newValue: NSString); message 'setWidth:';
    function width: NSString; message 'width';
  end;
{$endif}

