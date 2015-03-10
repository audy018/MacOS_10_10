{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLSelectElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLSelectElementPtr = ^DOMHTMLSelectElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLSelectElement = objcclass external (DOMHTMLElement)
  public
    procedure setAutofocus(newValue: boolean); message 'setAutofocus:';
    function autofocus: boolean; message 'autofocus';
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setMultiple(newValue: boolean); message 'setMultiple:';
    function multiple: boolean; message 'multiple';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSize(newValue: cint); message 'setSize:';
    function size: cint; message 'size';
    function type_: NSString; message 'type';
    function options: DOMHTMLOptionsCollection; message 'options';
    function length: cint; message 'length';
    procedure setSelectedIndex(newValue: cint); message 'setSelectedIndex:';
    function selectedIndex: cint; message 'selectedIndex';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function willValidate: boolean; message 'willValidate';
    function item (index: cuint): DOMNode; message 'item:'; { available in 10_6 }
    function namedItem (name_: NSString): DOMNode; message 'namedItem:'; { available in 10_6 }
    procedure add_before (element: DOMHTMLElement; before: DOMHTMLElement); message 'add:before:'; { available in 10_5 }
    procedure remove (index: cint); message 'remove:';
  end;


type
  DOMHTMLSelectElementDeprecated = objccategory external (DOMHTMLSelectElement)
    procedure add (element: DOMHTMLElement); message 'add:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

