{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLTextAreaElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLTextAreaElementPtr = ^DOMHTMLTextAreaElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLTextAreaElement = objcclass external (DOMHTMLElement)
  public
    procedure setAutofocus(newValue: boolean); message 'setAutofocus:';
    function autofocus: boolean; message 'autofocus';
    procedure setCols(newValue: cint); message 'setCols:';
    function cols: cint; message 'cols';
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setReadOnly(newValue: boolean); message 'setReadOnly:';
    function readOnly: boolean; message 'readOnly';
    procedure setRows(newValue: cint); message 'setRows:';
    function rows: cint; message 'rows';
    function type_: NSString; message 'type';
    procedure setDefaultValue(newValue: NSString); message 'setDefaultValue:';
    function defaultValue: NSString; message 'defaultValue';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function willValidate: boolean; message 'willValidate';
    procedure setSelectionStart(newValue: cint); message 'setSelectionStart:';
    function selectionStart: cint; message 'selectionStart';
    procedure setSelectionEnd(newValue: cint); message 'setSelectionEnd:';
    function selectionEnd: cint; message 'selectionEnd';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:';
    function accessKey: NSString; message 'accessKey';
    procedure select; message 'select';
    procedure setSelectionRange_end (start: cint; end_: cint); message 'setSelectionRange:end:'; { available in 10_5 }
  end;
{$endif}
