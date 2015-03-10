{ Parsed from WebKit.framework (MacOSX10.10) DOMBlob.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMBlobPtr = ^DOMBlob;
{$endif}

{$ifdef CLASSES}

type
  DOMBlob = objcclass external (DOMObject)
  public
    function size: culonglong; message 'size';
  end;
{$endif}

