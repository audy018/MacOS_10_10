{ Parsed from WebKit.framework (MacOSX10.10) DOMNotation.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMNotationPtr = ^DOMNotation;
{$endif}

{$ifdef CLASSES}

type
  DOMNotation = objcclass external (DOMNode)
  public
    function publicId: NSString; message 'publicId';
    function systemId: NSString; message 'systemId';
  end;
{$endif}

