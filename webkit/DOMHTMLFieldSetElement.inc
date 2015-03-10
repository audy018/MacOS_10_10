{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLFieldSetElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLFieldSetElementPtr = ^DOMHTMLFieldSetElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLFieldSetElement = objcclass external (DOMHTMLElement)
  public
    function form: DOMHTMLFormElement; message 'form';
  end;
{$endif}

