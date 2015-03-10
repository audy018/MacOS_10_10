{ Parsed from GameController.framework (MacOSX10.10) GCControllerButtonInput.h }
{ Created on Sun Mar 8 1:48:49 2015 }


{ Types from GCControllerButtonInput }
{$ifdef TYPES}

type
  GCControllerButtonValueChangedHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  GCControllerButtonInputPtr = ^GCControllerButtonInput;
{$endif}

{$ifdef CLASSES}

type
  GCControllerButtonInput = objcclass external (GCControllerElement)
  public
    procedure setValueChangedHandler(newValue: GCControllerButtonValueChangedHandler); message 'setValueChangedHandler:';
    function valueChangedHandler: GCControllerButtonValueChangedHandler; message 'valueChangedHandler';
    procedure setPressedChangedHandler(newValue: GCControllerButtonValueChangedHandler); message 'setPressedChangedHandler:';
    function pressedChangedHandler: GCControllerButtonValueChangedHandler; message 'pressedChangedHandler';
    function value: single; message 'value';
    function isPressed: boolean; message 'isPressed';
  end;
{$endif}

