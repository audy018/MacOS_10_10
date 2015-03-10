{ Parsed from WebKit.framework (MacOSX10.10) DOMExtensions.h }
{ Created on Sun Mar 8 1:48:19 2015 }

{$ifdef CLASSES}

type
  DOMNodeExtensions = objccategory external (DOMNode)
    function boundingBox: NSRect; message 'boundingBox'; { available in 10_5 }
    function lineBoxRects: NSArray; message 'lineBoxRects'; { available in 10_5 }
  end;

type
  DOMElementAppKitExtensions = objccategory external (DOMElement)
    function image: NSImage; message 'image'; { available in 10_5 }
  end;

type
  DOMHTMLDocumentExtensions = objccategory external (DOMHTMLDocument)
    function createDocumentFragmentWithMarkupString_baseURL (markupString: NSString; baseURL: NSURL): DOMDocumentFragment; message 'createDocumentFragmentWithMarkupString:baseURL:'; { available in 10_5 }
    function createDocumentFragmentWithText (text: NSString): DOMDocumentFragment; message 'createDocumentFragmentWithText:'; { available in 10_5 }
  end;
{$endif}

