{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLStyleElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLStyleElementPtr = ^DOMHTMLStyleElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLStyleElement = objcclass external (DOMHTMLElement)
  public
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    procedure setMedia(newValue: NSString); message 'setMedia:';
    function media: NSString; message 'media';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    function sheet: DOMStyleSheet; message 'sheet';
  end;
{$endif}

