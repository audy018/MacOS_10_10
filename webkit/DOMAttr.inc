{ Parsed from WebKit.framework (MacOSX10.10) DOMAttr.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  DOMAttrPtr = ^DOMAttr;
{$endif}

{$ifdef CLASSES}

type
  DOMAttr = objcclass external (DOMNode)
  public
    function name: NSString; message 'name';
    function specified: boolean; message 'specified';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function ownerElement: DOMElement; message 'ownerElement';
    function style: DOMCSSStyleDeclaration; message 'style';
  end;
{$endif}

