{ Parsed from WebKit.framework (MacOSX10.10) DOMObject.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  DOMObjectPtr = ^DOMObject;
{$endif}

{$ifdef TYPES}
type
  DOMTimeStamp = culonglong;
  DOMTimeStampPtr = ^DOMTimeStamp;
  DOMObjectInternal = OpaqueType { available in 10_4 };
  DOMObjectInternalPtr = ^DOMObjectInternal { available in 10_4 };
{$endif}

{$ifdef CLASSES}

type
  DOMObject = objcclass external (WebScriptObject, NSCopyingProtocol)
  private
    _internal: DOMObjectInternalPtr;

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  DOMLinkStyle = objccategory external (DOMObject)
    function sheet: DOMStyleSheet; message 'sheet';
  end;
{$endif}

