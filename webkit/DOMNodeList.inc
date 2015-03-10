{ Parsed from WebKit.framework (MacOSX10.10) DOMNodeList.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMNodeListPtr = ^DOMNodeList;
{$endif}

{$ifdef CLASSES}

type
  DOMNodeList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMNode; message 'item:';
  end;
{$endif}

