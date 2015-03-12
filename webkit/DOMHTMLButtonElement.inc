{ Parsed from WebKit.framework DOMHTMLButtonElement.h }


{$ifdef TYPES}
type
  DOMHTMLButtonElementPtr = ^DOMHTMLButtonElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLButtonElement = objcclass external (DOMHTMLElement)
  public
    procedure setAutofocus(newValue: boolean); message 'setAutofocus:';
    function autofocus: boolean; message 'autofocus';
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function willValidate: boolean; message 'willValidate';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:';
    function accessKey: NSString; message 'accessKey';
    procedure click; message 'click'; { available in 10_5 }
  end;
{$endif}

