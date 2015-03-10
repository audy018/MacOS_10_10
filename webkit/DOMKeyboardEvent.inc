{ Parsed from WebKit.framework (MacOSX10.10) DOMKeyboardEvent.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMKeyboardEventPtr = ^DOMKeyboardEvent;
{$endif}

{$ifdef TYPES}
const
  DOM_KEY_LOCATION_STANDARD = $00;
  DOM_KEY_LOCATION_LEFT = $01;
  DOM_KEY_LOCATION_RIGHT = $02;
  DOM_KEY_LOCATION_NUMPAD = $03;
{$endif}

{$ifdef CLASSES}

type
  DOMKeyboardEvent = objcclass external (DOMUIEvent)
  public
    function keyIdentifier: NSString; message 'keyIdentifier';
    function location: cuint; message 'location';
    function keyLocation: cuint; message 'keyLocation';
    function ctrlKey: boolean; message 'ctrlKey';
    function shiftKey: boolean; message 'shiftKey';
    function altKey: boolean; message 'altKey';
    function metaKey: boolean; message 'metaKey';
    function altGraphKey: boolean; message 'altGraphKey';
    function keyCode: cint; message 'keyCode';
    function charCode: cint; message 'charCode';
    function getModifierState (keyIdentifierArg: NSString): boolean; message 'getModifierState:';
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_location_ctrlKey_altKey_shiftKey_metaKey_altGraphKey (type_: NSString; canBubble: boolean; cancelable_: boolean; view_: DOMAbstractView; keyIdentifier_: NSString; location_: cuint; ctrlKey_: boolean; altKey_: boolean; shiftKey_: boolean; metaKey_: boolean; altGraphKey_: boolean); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:location:ctrlKey:altKey:shiftKey:metaKey:altGraphKey:'; { available in 10_8 }
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_location_ctrlKey_altKey_shiftKey_metaKey (type_: NSString; canBubble: boolean; cancelable_: boolean; view_: DOMAbstractView; keyIdentifier_: NSString; location_: cuint; ctrlKey_: boolean; altKey_: boolean; shiftKey_: boolean; metaKey_: boolean); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:location:ctrlKey:altKey:shiftKey:metaKey:'; { available in 10_8 }
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_keyLocation_ctrlKey_altKey_shiftKey_metaKey_altGraphKey (type_: NSString; canBubble: boolean; cancelable_: boolean; view_: DOMAbstractView; keyIdentifier_: NSString; keyLocation_: cuint; ctrlKey_: boolean; altKey_: boolean; shiftKey_: boolean; metaKey_: boolean; altGraphKey_: boolean); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:keyLocation:ctrlKey:altKey:shiftKey:metaKey:altGraphKey:'; deprecated 'in 10_5, 10_5';
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_keyLocation_ctrlKey_altKey_shiftKey_metaKey (type_: NSString; canBubble: boolean; cancelable_: boolean; view_: DOMAbstractView; keyIdentifier_: NSString; keyLocation_: cuint; ctrlKey_: boolean; altKey_: boolean; shiftKey_: boolean; metaKey_: boolean); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:keyLocation:ctrlKey:altKey:shiftKey:metaKey:'; deprecated 'in 10_5, 10_5';
  end;
{$endif}

