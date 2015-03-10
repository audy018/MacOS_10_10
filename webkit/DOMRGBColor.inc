{ Parsed from WebKit.framework (MacOSX10.10) DOMRGBColor.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMRGBColorPtr = ^DOMRGBColor;
{$endif}

{$ifdef CLASSES}

type
  DOMRGBColor = objcclass external (DOMObject)
  public
    function red: DOMCSSPrimitiveValue; message 'red';
    function green: DOMCSSPrimitiveValue; message 'green';
    function blue: DOMCSSPrimitiveValue; message 'blue';
    function alpha: DOMCSSPrimitiveValue; message 'alpha';
    function color: NSColor; message 'color';
  end;
{$endif}

