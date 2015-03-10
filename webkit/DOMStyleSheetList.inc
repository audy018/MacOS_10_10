{ Parsed from WebKit.framework (MacOSX10.10) DOMStyleSheetList.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMStyleSheetListPtr = ^DOMStyleSheetList;
{$endif}

{$ifdef CLASSES}

type
  DOMStyleSheetList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMStyleSheet; message 'item:';
  end;
{$endif}

