{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLLegendElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLLegendElementPtr = ^DOMHTMLLegendElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLLegendElement = objcclass external (DOMHTMLElement)
  public
    function form: DOMHTMLFormElement; message 'form';
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:';
    function accessKey: NSString; message 'accessKey';
  end;
{$endif}

