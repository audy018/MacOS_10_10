{ Parsed from GameController.framework (MacOSX10.10) GCControllerAxisInput.h }
{ Created on Sun Mar 8 1:48:49 2015 }


{ Types from GCControllerAxisInput }
{$ifdef TYPES}

type
  GCControllerAxisValueChangedHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  GCControllerAxisInputPtr = ^GCControllerAxisInput;
{$endif}

{$ifdef CLASSES}

type
  GCControllerAxisInput = objcclass external (GCControllerElement)
  public
    procedure setValueChangedHandler(newValue: GCControllerAxisValueChangedHandler); message 'setValueChangedHandler:';
    function valueChangedHandler: GCControllerAxisValueChangedHandler; message 'valueChangedHandler';
    function value: single; message 'value';
  end;
{$endif}

