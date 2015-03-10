{ Parsed from WebKit.framework (MacOSX10.10) DOMCSSValueList.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCSSValueListPtr = ^DOMCSSValueList;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSValueList = objcclass external (DOMCSSValue)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMCSSValue; message 'item:';
  end;
{$endif}

