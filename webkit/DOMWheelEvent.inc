{ Parsed from WebKit.framework DOMWheelEvent.h }


{$ifdef TYPES}
type
  DOMWheelEventPtr = ^DOMWheelEvent;
{$endif}

{$ifdef TYPES}
const
  DOM_DOM_DELTA_PIXEL = $00;
  DOM_DOM_DELTA_LINE = $01;
  DOM_DOM_DELTA_PAGE = $02;
{$endif}

{$ifdef CLASSES}

type
  DOMWheelEvent = objcclass external (DOMMouseEvent)
  public
    function wheelDeltaX: cint; message 'wheelDeltaX';
    function wheelDeltaY: cint; message 'wheelDeltaY';
    function wheelDelta: cint; message 'wheelDelta';
    function isHorizontal: boolean; message 'isHorizontal';
    procedure initWheelEvent_wheelDeltaY_view_screenX_screenY_clientX_clientY_ctrlKey_altKey_shiftKey_metaKey (wheelDeltaX_: cint; wheelDeltaY_: cint; view_: DOMAbstractView; screenX_: cint; screenY_: cint; clientX_: cint; clientY_: cint; ctrlKey_: boolean; altKey_: boolean; shiftKey_: boolean; metaKey_: boolean); message 'initWheelEvent:wheelDeltaY:view:screenX:screenY:clientX:clientY:ctrlKey:altKey:shiftKey:metaKey:'; { available in 10_5 }
  end;
{$endif}

