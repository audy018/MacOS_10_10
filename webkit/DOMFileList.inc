{ Parsed from WebKit.framework (MacOSX10.10) DOMFileList.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMFileListPtr = ^DOMFileList;
{$endif}

{$ifdef CLASSES}

type
  DOMFileList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMFile; message 'item:';
  end;
{$endif}

