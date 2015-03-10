{ Parsed from WebKit.framework (MacOSX10.10) DOMDocumentType.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  DOMDocumentTypePtr = ^DOMDocumentType;
{$endif}

{$ifdef CLASSES}

type
  DOMDocumentType = objcclass external (DOMNode)
  public
    function name: NSString; message 'name';
    function entities: DOMNamedNodeMap; message 'entities';
    function notations: DOMNamedNodeMap; message 'notations';
    function publicId: NSString; message 'publicId';
    function systemId: NSString; message 'systemId';
    function internalSubset: NSString; message 'internalSubset';
  end;
{$endif}

