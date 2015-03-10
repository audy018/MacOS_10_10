{ Parsed from WebKit.framework (MacOSX10.10) DOMMouseEvent.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMMouseEventPtr = ^DOMMouseEvent;
{$endif}

{$ifdef CLASSES}

type
  DOMMouseEvent = objcclass external (DOMUIEvent)
  public
    function screenX: cint; message 'screenX';
    function screenY: cint; message 'screenY';
    function clientX: cint; message 'clientX';
    function clientY: cint; message 'clientY';
    function ctrlKey: boolean; message 'ctrlKey';
    function shiftKey: boolean; message 'shiftKey';
    function altKey: boolean; message 'altKey';
    function metaKey: boolean; message 'metaKey';
    function button: cushort; message 'button';
    function relatedTarget: DOMEventTargetProtocol; message 'relatedTarget';
    function offsetX: cint; message 'offsetX';
    function offsetY: cint; message 'offsetY';
    function x: cint; message 'x';
    function y: cint; message 'y';
    function fromElement: DOMNode; message 'fromElement';
    function toElement: DOMNode; message 'toElement';
    procedure initMouseEvent_canBubble_cancelable_view_detail_screenX_screenY_clientX_clientY_ctrlKey_altKey_shiftKey_metaKey_button_relatedTarget (type_: NSString; canBubble: boolean; cancelable_: boolean; view_: DOMAbstractView; detail_: cint; screenX_: cint; screenY_: cint; clientX_: cint; clientY_: cint; ctrlKey_: boolean; altKey_: boolean; shiftKey_: boolean; metaKey_: boolean; button_: cushort; relatedTarget_: DOMEventTargetProtocol); message 'initMouseEvent:canBubble:cancelable:view:detail:screenX:screenY:clientX:clientY:ctrlKey:altKey:shiftKey:metaKey:button:relatedTarget:'; { available in 10_5 }
  end;


type
  DOMMouseEventDeprecated = objccategory external (DOMMouseEvent)
    procedure initMouseEvent_canBubble_view_screenX_clientX_ctrlKey_shiftKey_button (type_: NSString; cancelable_: boolean; detail_: cint; screenY_: cint; clientY_: cint; altKey_: boolean; metaKey_: boolean; relatedTarget_: DOMEventTargetProtocol); message 'initMouseEvent:canBubble:view:screenX:clientX:ctrlKey:shiftKey:button:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

