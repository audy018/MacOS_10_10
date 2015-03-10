{ Parsed from WebKit.framework (MacOSX10.10) DOMEntity.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMEntityPtr = ^DOMEntity;
{$endif}

{$ifdef CLASSES}

type
  DOMEntity = objcclass external (DOMNode)
  public
    function publicId: NSString; message 'publicId';
    function systemId: NSString; message 'systemId';
    function notationName: NSString; message 'notationName';
  end;
{$endif}

