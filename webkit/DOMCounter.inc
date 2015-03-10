{ Parsed from WebKit.framework (MacOSX10.10) DOMCounter.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCounterPtr = ^DOMCounter;
{$endif}

{$ifdef CLASSES}

type
  DOMCounter = objcclass external (DOMObject)
  public
    function identifier: NSString; message 'identifier';
    function listStyle: NSString; message 'listStyle';
    function separator: NSString; message 'separator';
  end;
{$endif}

