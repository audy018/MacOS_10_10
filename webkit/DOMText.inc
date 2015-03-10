{ Parsed from WebKit.framework (MacOSX10.10) DOMText.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  DOMTextPtr = ^DOMText;
{$endif}

{$ifdef CLASSES}

type
  DOMText = objcclass external (DOMCharacterData)
  public
    function wholeText: NSString; message 'wholeText';
    function splitText (offset: cuint): DOMText; message 'splitText:';
    function replaceWholeText (content: NSString): DOMText; message 'replaceWholeText:'; { available in 10_6 }
  end;
{$endif}

