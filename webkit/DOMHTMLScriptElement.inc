{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLScriptElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLScriptElementPtr = ^DOMHTMLScriptElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLScriptElement = objcclass external (DOMHTMLElement)
  public
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setHtmlFor(newValue: NSString); message 'setHtmlFor:';
    function htmlFor: NSString; message 'htmlFor';
    procedure setEvent(newValue: NSString); message 'setEvent:';
    function event: NSString; message 'event';
    procedure setCharset(newValue: NSString); message 'setCharset:';
    function charset: NSString; message 'charset';
    procedure setDefer(newValue: boolean); message 'setDefer:';
    function defer: boolean; message 'defer';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
  end;
{$endif}

