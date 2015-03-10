{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLHeadElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLHeadElementPtr = ^DOMHTMLHeadElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLHeadElement = objcclass external (DOMHTMLElement)
  public
    procedure setProfile(newValue: NSString); message 'setProfile:';
    function profile: NSString; message 'profile';
  end;
{$endif}

