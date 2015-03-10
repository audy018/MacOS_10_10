{ Parsed from WebKit.framework (MacOSX10.10) DOMRect.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMRectPtr = ^DOMRect;
{$endif}

{$ifdef CLASSES}

type
  DOMRect = objcclass external (DOMObject)
  public
    function top: DOMCSSPrimitiveValue; message 'top';
    function right: DOMCSSPrimitiveValue; message 'right';
    function bottom: DOMCSSPrimitiveValue; message 'bottom';
    function left: DOMCSSPrimitiveValue; message 'left';
  end;
{$endif}

