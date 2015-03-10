{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLMetaElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLMetaElementPtr = ^DOMHTMLMetaElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMetaElement = objcclass external (DOMHTMLElement)
  public
    procedure setContent(newValue: NSString); message 'setContent:';
    function content: NSString; message 'content';
    procedure setHttpEquiv(newValue: NSString); message 'setHttpEquiv:';
    function httpEquiv: NSString; message 'httpEquiv';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setScheme(newValue: NSString); message 'setScheme:';
    function scheme: NSString; message 'scheme';
  end;
{$endif}

