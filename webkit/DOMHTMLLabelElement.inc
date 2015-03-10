{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLLabelElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLLabelElementPtr = ^DOMHTMLLabelElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLLabelElement = objcclass external (DOMHTMLElement)
  public
    function form: DOMHTMLFormElement; message 'form';
    procedure setHtmlFor(newValue: NSString); message 'setHtmlFor:';
    function htmlFor: NSString; message 'htmlFor';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:';
    function accessKey: NSString; message 'accessKey';
  end;
{$endif}

