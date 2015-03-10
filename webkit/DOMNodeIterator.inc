{ Parsed from WebKit.framework (MacOSX10.10) DOMNodeIterator.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMNodeIteratorPtr = ^DOMNodeIterator;
{$endif}

{$ifdef CLASSES}

type
  DOMNodeIterator = objcclass external (DOMObject)
  public
    function root: DOMNode; message 'root';
    function whatToShow: cuint; message 'whatToShow';
    function filter: DOMNodeFilterProtocol; message 'filter';
    function expandEntityReferences: boolean; message 'expandEntityReferences';
    function referenceNode: DOMNode; message 'referenceNode';
    function pointerBeforeReferenceNode: boolean; message 'pointerBeforeReferenceNode';
    function nextNode: DOMNode; message 'nextNode';
    function previousNode: DOMNode; message 'previousNode';
    procedure detach; message 'detach';
  end;
{$endif}

