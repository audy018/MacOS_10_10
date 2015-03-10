{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLInputElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLInputElementPtr = ^DOMHTMLInputElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLInputElement = objcclass external (DOMHTMLElement)
  public
    procedure setAccept(newValue: NSString); message 'setAccept:';
    function accept: NSString; message 'accept';
    procedure setAlt(newValue: NSString); message 'setAlt:';
    function alt: NSString; message 'alt';
    procedure setAutofocus(newValue: boolean); message 'setAutofocus:';
    function autofocus: boolean; message 'autofocus';
    procedure setDefaultChecked(newValue: boolean); message 'setDefaultChecked:';
    function defaultChecked: boolean; message 'defaultChecked';
    procedure setChecked(newValue: boolean); message 'setChecked:';
    function checked: boolean; message 'checked';
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setFiles(newValue: DOMFileList); message 'setFiles:';
    function files: DOMFileList; message 'files';
    procedure setIndeterminate(newValue: boolean); message 'setIndeterminate:';
    function indeterminate: boolean; message 'indeterminate';
    procedure setMaxLength(newValue: cint); message 'setMaxLength:';
    function maxLength: cint; message 'maxLength';
    procedure setMultiple(newValue: boolean); message 'setMultiple:';
    function multiple: boolean; message 'multiple';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setReadOnly(newValue: boolean); message 'setReadOnly:';
    function readOnly: boolean; message 'readOnly';
    procedure setSize(newValue: NSString); message 'setSize:';
    function size: NSString; message 'size';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    procedure setType(newValue: NSString); message 'setType:';
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
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setUseMap(newValue: NSString); message 'setUseMap:';
    function useMap: NSString; message 'useMap';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:';
    function accessKey: NSString; message 'accessKey';
    function altDisplayString: NSString; message 'altDisplayString';
    function absoluteImageURL: NSURL; message 'absoluteImageURL';
    procedure select; message 'select';
    procedure setSelectionRange_end (start: cint; end_: cint); message 'setSelectionRange:end:'; { available in 10_5 }
    procedure click; message 'click';
  end;
{$endif}

