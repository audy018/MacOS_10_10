{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLOptionElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLOptionElementPtr = ^DOMHTMLOptionElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLOptionElement = objcclass external (DOMHTMLElement)
  public
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setDefaultSelected(newValue: boolean); message 'setDefaultSelected:';
    function defaultSelected: boolean; message 'defaultSelected';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function selected: boolean; message 'selected';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function text: NSString; message 'text';
    function index: cint; message 'index';
  end;
{$endif}

