{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLOptGroupElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLOptGroupElementPtr = ^DOMHTMLOptGroupElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLOptGroupElement = objcclass external (DOMHTMLElement)
  public
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
  end;
{$endif}

