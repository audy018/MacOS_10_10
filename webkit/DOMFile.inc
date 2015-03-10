{ Parsed from WebKit.framework (MacOSX10.10) DOMFile.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMFilePtr = ^DOMFile;
{$endif}

{$ifdef CLASSES}

type
  DOMFile = objcclass external (DOMBlob)
  public
    function name: NSString; message 'name';
  end;
{$endif}

