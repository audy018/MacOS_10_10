{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLFrameSetElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLFrameSetElementPtr = ^DOMHTMLFrameSetElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLFrameSetElement = objcclass external (DOMHTMLElement)
  public
    procedure setCols(newValue: NSString); message 'setCols:';
    function cols: NSString; message 'cols';
    procedure setRows(newValue: NSString); message 'setRows:';
    function rows: NSString; message 'rows';
  end;
{$endif}

